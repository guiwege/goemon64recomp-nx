#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801CC5C8_65F478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC5C8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801CC5CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CC5D0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801CC5D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CC5D8: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x801CC5DC: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801CC5E0: lui         $a2, 0x8006
    ctx->r6 = S32(0X8006 << 16);
    // 0x801CC5E4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801CC5E8: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x801CC5EC: addiu       $a2, $a2, 0x3930
    ctx->r6 = ADD32(ctx->r6, 0X3930);
    // 0x801CC5F0: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CC5F4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC5F8: addiu       $t6, $zero, 0x4CD
    ctx->r14 = ADD32(0, 0X4CD);
    // 0x801CC5FC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801CC600: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x801CC604: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x801CC608: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801CC60C: addiu       $a1, $a1, -0x3C08
    ctx->r5 = ADD32(ctx->r5, -0X3C08);
    // 0x801CC610: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801CC614: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CC618: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CC61C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801CC620: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801CC624: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801CC628: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801CC62C: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x801CC630: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801CC634: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801CC638: jal         0x800358E8
    // 0x801CC63C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801CC63C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801CC640: bne         $v0, $zero, L_801CC650
    if (ctx->r2 != 0) {
        // 0x801CC644: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801CC650;
    }
    // 0x801CC644: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801CC648: b           L_801CC6FC
    // 0x801CC64C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801CC6FC;
    // 0x801CC64C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CC650:
    // 0x801CC650: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x801CC654: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x801CC658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CC65C: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x801CC660: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x801CC664: addiu       $t9, $t8, 0x5C
    ctx->r25 = ADD32(ctx->r24, 0X5C);
    // 0x801CC668: sw          $t9, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r25;
    // 0x801CC66C: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x801CC670: jal         0x800115F8
    // 0x801CC674: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    func_800115F8_121F8(rdram, ctx);
        goto after_1;
    // 0x801CC674: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    after_1:
    // 0x801CC678: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x801CC67C: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x801CC680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CC684: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x801CC688: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x801CC68C: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x801CC690: jal         0x801CC22C
    // 0x801CC694: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_801CC22C_65F0DC(rdram, ctx);
        goto after_2;
    // 0x801CC694: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_2:
    // 0x801CC698: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x801CC69C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CC6A0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x801CC6A4: jal         0x801CC20C
    // 0x801CC6A8: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    func_801CC20C_65F0BC(rdram, ctx);
        goto after_3;
    // 0x801CC6A8: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_3:
    // 0x801CC6AC: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801CC6B0: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x801CC6B4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801CC6B8: bgez        $a1, L_801CC6C8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801CC6BC: sra         $t1, $a1, 1
        ctx->r9 = S32(SIGNED(ctx->r5) >> 1);
            goto L_801CC6C8;
    }
    // 0x801CC6BC: sra         $t1, $a1, 1
    ctx->r9 = S32(SIGNED(ctx->r5) >> 1);
    // 0x801CC6C0: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x801CC6C4: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_801CC6C8:
    // 0x801CC6C8: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x801CC6CC: bgez        $a2, L_801CC6DC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x801CC6D0: sra         $t2, $a2, 1
        ctx->r10 = S32(SIGNED(ctx->r6) >> 1);
            goto L_801CC6DC;
    }
    // 0x801CC6D0: sra         $t2, $a2, 1
    ctx->r10 = S32(SIGNED(ctx->r6) >> 1);
    // 0x801CC6D4: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x801CC6D8: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_801CC6DC:
    // 0x801CC6DC: jal         0x800115F8
    // 0x801CC6E0: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    func_800115F8_121F8(rdram, ctx);
        goto after_4;
    // 0x801CC6E0: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_4:
    // 0x801CC6E4: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x801CC6E8: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x801CC6EC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x801CC6F0: sw          $t3, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r11;
    // 0x801CC6F4: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x801CC6F8: sw          $t4, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r12;
L_801CC6FC:
    // 0x801CC6FC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801CC700: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801CC704: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801CC708: jr          $ra
    // 0x801CC70C: nop

    TRACE_RETURN()
    return;
    // 0x801CC70C: nop

;}
RECOMP_FUNC void func_801CC978_65F828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC978: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CC97C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CC980: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801CC984: jal         0x80024670
    // 0x801CC988: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80024670_25270(rdram, ctx);
        goto after_0;
    // 0x801CC988: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CC98C: bne         $v0, $zero, L_801CC9A4
    if (ctx->r2 != 0) {
        // 0x801CC990: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801CC9A4;
    }
    // 0x801CC990: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801CC994: jal         0x80035020
    // 0x801CC998: nop

    func_80035020_35C20(rdram, ctx);
        goto after_1;
    // 0x801CC998: nop

    after_1:
    // 0x801CC99C: b           L_801CCA98
    // 0x801CC9A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CCA98;
    // 0x801CC9A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CC9A4:
    // 0x801CC9A4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801CC9A8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CC9AC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x801CC9B0: sw          $a3, -0x78FC($at)
    MEM_W(-0X78FC, ctx->r1) = ctx->r7;
    // 0x801CC9B4: sw          $v1, 0xD0($a3)
    MEM_W(0XD0, ctx->r7) = ctx->r3;
    // 0x801CC9B8: addiu       $a2, $zero, 0x7D0
    ctx->r6 = ADD32(0, 0X7D0);
    // 0x801CC9BC: addiu       $t6, $zero, 0xE03
    ctx->r14 = ADD32(0, 0XE03);
    // 0x801CC9C0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x801CC9C4: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x801CC9C8: sw          $a2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r6;
    // 0x801CC9CC: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x801CC9D0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801CC9D4: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x801CC9D8: addiu       $a0, $a0, 0x1D10
    ctx->r4 = ADD32(ctx->r4, 0X1D10);
    // 0x801CC9DC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x801CC9E0: jal         0x80014840
    // 0x801CC9E4: addiu       $a1, $zero, 0x4CD
    ctx->r5 = ADD32(0, 0X4CD);
    func_80014840_15440(rdram, ctx);
        goto after_2;
    // 0x801CC9E4: addiu       $a1, $zero, 0x4CD
    ctx->r5 = ADD32(0, 0X4CD);
    after_2:
    // 0x801CC9E8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801CC9EC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801CC9F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CC9F4: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC9F8: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x801CC9FC: swc1        $f4, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f4.u32l;
    // 0x801CCA00: lwc1        $f6, 0x42E8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X42E8);
    // 0x801CCA04: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCA08: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x801CCA0C: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
    // 0x801CCA10: lwc1        $f8, 0x42EC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X42EC);
    // 0x801CCA14: swc1        $f8, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f8.u32l;
    // 0x801CCA18: jal         0x800119D4
    // 0x801CCA1C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800119D4_125D4(rdram, ctx);
        goto after_3;
    // 0x801CCA1C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x801CCA20: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCA24: lwc1        $f0, 0x42F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X42F0);
    // 0x801CCA28: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801CCA2C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CCA30: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CCA34: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x801CCA38: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CCA3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CCA40: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x801CCA44: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x801CCA48: sh          $t7, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r15;
    // 0x801CCA4C: sh          $zero, 0x16($v0)
    MEM_H(0X16, ctx->r2) = 0;
    // 0x801CCA50: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x801CCA54: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
    // 0x801CCA58: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x801CCA5C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x801CCA60: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x801CCA64: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x801CCA68: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x801CCA6C: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x801CCA70: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x801CCA74: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CCA78: addiu       $t0, $t0, -0x38F0
    ctx->r8 = ADD32(ctx->r8, -0X38F0);
    // 0x801CCA7C: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x801CCA80: sh          $zero, 0x8A($t9)
    MEM_H(0X8A, ctx->r25) = 0;
    // 0x801CCA84: addiu       $a0, $a0, 0x4160
    ctx->r4 = ADD32(ctx->r4, 0X4160);
    // 0x801CCA88: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x801CCA8C: jal         0x8003521C
    // 0x801CCA90: sw          $t0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r8;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801CCA90: sw          $t0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r8;
    after_4:
    // 0x801CCA94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CCA98:
    // 0x801CCA98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CCA9C: jr          $ra
    // 0x801CCAA0: nop

    TRACE_RETURN()
    return;
    // 0x801CCAA0: nop

;}
RECOMP_FUNC void func_801D0698_663548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0698: beq         $a1, $zero, L_801D06F0
    if (ctx->r5 == 0) {
        // 0x801D069C: nop
    
            goto L_801D06F0;
    }
    // 0x801D069C: nop

    // 0x801D06A0: bgez        $a1, L_801D06CC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801D06A4: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_801D06CC;
    }
    // 0x801D06A4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x801D06A8: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x801D06AC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x801D06B0: addiu       $t1, $zero, -0x8
    ctx->r9 = ADD32(0, -0X8);
    // 0x801D06B4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801D06B8: andi        $t8, $t7, 0x1F
    ctx->r24 = ctx->r15 & 0X1F;
    // 0x801D06BC: subu        $t0, $t9, $t8
    ctx->r8 = SUB32(ctx->r25, ctx->r24);
    // 0x801D06C0: sw          $t0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r8;
    // 0x801D06C4: jr          $ra
    // 0x801D06C8: sw          $t1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x801D06C8: sw          $t1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r9;
L_801D06CC:
    // 0x801D06CC: blez        $a1, L_801D06F0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x801D06D0: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_801D06F0;
    }
    // 0x801D06D0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x801D06D4: lw          $t2, 0x1C($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X1C);
    // 0x801D06D8: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x801D06DC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x801D06E0: andi        $t3, $t2, 0x1F
    ctx->r11 = ctx->r10 & 0X1F;
    // 0x801D06E4: subu        $t5, $t4, $t3
    ctx->r13 = SUB32(ctx->r12, ctx->r11);
    // 0x801D06E8: sw          $t5, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r13;
    // 0x801D06EC: sw          $t6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r14;
L_801D06F0:
    // 0x801D06F0: jr          $ra
    // 0x801D06F4: nop

    TRACE_RETURN()
    return;
    // 0x801D06F4: nop

;}
RECOMP_FUNC void func_801D07C4_663674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D07C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D07C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D07CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D07D0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801D07D4: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D07D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D07DC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D07E0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801D07E4: addiu       $a1, $a1, 0x518
    ctx->r5 = ADD32(ctx->r5, 0X518);
    // 0x801D07E8: jal         0x80034E08
    // 0x801D07EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801D07EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801D07F0: bne         $v0, $zero, L_801D0800
    if (ctx->r2 != 0) {
        // 0x801D07F4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801D0800;
    }
    // 0x801D07F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D07F8: b           L_801D082C
    // 0x801D07FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D082C;
    // 0x801D07FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D0800:
    // 0x801D0800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0804: jal         0x80011610
    // 0x801D0808: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_80011610_12210(rdram, ctx);
        goto after_1;
    // 0x801D0808: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801D080C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0810: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D0814: jal         0x800115F8
    // 0x801D0818: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_800115F8_121F8(rdram, ctx);
        goto after_2;
    // 0x801D0818: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x801D081C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0820: jal         0x800119D4
    // 0x801D0824: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800119D4_125D4(rdram, ctx);
        goto after_3;
    // 0x801D0824: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x801D0828: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801D082C:
    // 0x801D082C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D0830: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D0834: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D0838: jr          $ra
    // 0x801D083C: nop

    TRACE_RETURN()
    return;
    // 0x801D083C: nop

;}
RECOMP_FUNC void func_801D0754_663604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0754: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x801D0758: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x801D075C: andi        $t7, $t6, 0x1F
    ctx->r15 = ctx->r14 & 0X1F;
    // 0x801D0760: bne         $t7, $zero, L_801D0774
    if (ctx->r15 != 0) {
        // 0x801D0764: nop
    
            goto L_801D0774;
    }
    // 0x801D0764: nop

    // 0x801D0768: lw          $t8, 0x28($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X28);
    // 0x801D076C: beql        $t8, $zero, L_801D0780
    if (ctx->r24 == 0) {
        // 0x801D0770: lw          $t9, 0x1C($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X1C);
            goto L_801D0780;
    }
    goto skip_0;
    // 0x801D0770: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    skip_0:
L_801D0774:
    // 0x801D0774: jr          $ra
    // 0x801D0778: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    TRACE_RETURN()
    return;
    // 0x801D0778: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x801D077C: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
L_801D0780:
    // 0x801D0780: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x801D0784: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x801D0788: sw          $t0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r8;
    // 0x801D078C: andi        $t2, $t0, 0x1FF
    ctx->r10 = ctx->r8 & 0X1FF;
    // 0x801D0790: sw          $t2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r10;
    // 0x801D0794: lw          $t5, -0x717C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X717C);
    // 0x801D0798: srl         $t3, $t2, 5
    ctx->r11 = S32(U32(ctx->r10) >> 5);
    // 0x801D079C: andi        $v1, $t3, 0xF
    ctx->r3 = ctx->r11 & 0XF;
    // 0x801D07A0: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x801D07A4: lbu         $t7, 0x3B0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3B0);
    // 0x801D07A8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801D07AC: beq         $t7, $zero, L_801D07BC
    if (ctx->r15 == 0) {
        // 0x801D07B0: nop
    
            goto L_801D07BC;
    }
    // 0x801D07B0: nop

    // 0x801D07B4: jr          $ra
    // 0x801D07B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    TRACE_RETURN()
    return;
    // 0x801D07B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_801D07BC:
    // 0x801D07BC: jr          $ra
    // 0x801D07C0: nop

    TRACE_RETURN()
    return;
    // 0x801D07C0: nop

;}
RECOMP_FUNC void func_801CB684_65E534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB684: sw          $a1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r5;
    // 0x801CB688: sw          $a2, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r6;
    // 0x801CB68C: sw          $a3, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r7;
    // 0x801CB690: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x801CB694: jr          $ra
    // 0x801CB698: sw          $t6, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801CB698: sw          $t6, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_801CDBA4_660A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDBA4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CDBA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CDBAC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801CDBB0: jal         0x801CD2A8
    // 0x801CDBB4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_801CD2A8_660158(rdram, ctx);
        goto after_0;
    // 0x801CDBB4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CDBB8: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x801CDBBC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CDBC0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801CDBC4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801CDBC8: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    // 0x801CDBCC: jal         0x801CC5C8
    // 0x801CDBD0: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_1;
    // 0x801CDBD0: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_1:
    // 0x801CDBD4: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801CDBD8: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x801CDBDC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CDBE0: sw          $v0, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->r2;
    // 0x801CDBE4: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x801CDBE8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x801CDBEC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CDBF0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CDBF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CDBF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CDBFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CDC00: jal         0x801CC56C
    // 0x801CDC04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_2;
    // 0x801CDC04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x801CDC08: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x801CDC0C: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CDC10: lw          $t0, 0x3320($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3320);
    // 0x801CDC14: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    // 0x801CDC18: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CDC1C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x801CDC20: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801CDC24: jal         0x801CB6AC
    // 0x801CDC28: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_3;
    // 0x801CDC28: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_3:
    // 0x801CDC2C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CDC30: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801CDC34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CDC38: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x801CDC3C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801CDC40: jal         0x801CB684
    // 0x801CDC44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801CB684_65E534(rdram, ctx);
        goto after_4;
    // 0x801CDC44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x801CDC48: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x801CDC4C: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x801CDC50: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CDC54: addiu       $a0, $a0, -0x2468
    ctx->r4 = ADD32(ctx->r4, -0X2468);
    // 0x801CDC58: jal         0x8003521C
    // 0x801CDC5C: sw          $t2, 0x50($t3)
    MEM_W(0X50, ctx->r11) = ctx->r10;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801CDC5C: sw          $t2, 0x50($t3)
    MEM_W(0X50, ctx->r11) = ctx->r10;
    after_5:
    // 0x801CDC60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CDC64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801CDC68: jr          $ra
    // 0x801CDC6C: nop

    TRACE_RETURN()
    return;
    // 0x801CDC6C: nop

;}
RECOMP_FUNC void func_801CF174_662024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF174: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CF178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CF17C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CF180: jal         0x801CD2A8
    // 0x801CF184: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801CD2A8_660158(rdram, ctx);
        goto after_0;
    // 0x801CF184: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801CF188: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CF18C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x801CF190: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x801CF194: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x801CF198: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x801CF19C: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x801CF1A0: jal         0x801CD2FC
    // 0x801CF1A4: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    func_801CD2FC_6601AC(rdram, ctx);
        goto after_1;
    // 0x801CF1A4: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    after_1:
    // 0x801CF1A8: jal         0x80023840
    // 0x801CF1AC: nop

    func_80023840_24440(rdram, ctx);
        goto after_2;
    // 0x801CF1AC: nop

    after_2:
    // 0x801CF1B0: bne         $v0, $zero, L_801CF1CC
    if (ctx->r2 != 0) {
        // 0x801CF1B4: lui         $a0, 0x801D
        ctx->r4 = S32(0X801D << 16);
            goto L_801CF1CC;
    }
    // 0x801CF1B4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CF1B8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CF1BC: jal         0x8003521C
    // 0x801CF1C0: addiu       $a0, $a0, -0x2300
    ctx->r4 = ADD32(ctx->r4, -0X2300);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801CF1C0: addiu       $a0, $a0, -0x2300
    ctx->r4 = ADD32(ctx->r4, -0X2300);
    after_3:
    // 0x801CF1C4: b           L_801CF1D8
    // 0x801CF1C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CF1D8;
    // 0x801CF1C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CF1CC:
    // 0x801CF1CC: jal         0x8003521C
    // 0x801CF1D0: addiu       $a0, $a0, -0x1C4C
    ctx->r4 = ADD32(ctx->r4, -0X1C4C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801CF1D0: addiu       $a0, $a0, -0x1C4C
    ctx->r4 = ADD32(ctx->r4, -0X1C4C);
    after_4:
    // 0x801CF1D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CF1D8:
    // 0x801CF1D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CF1DC: jr          $ra
    // 0x801CF1E0: nop

    TRACE_RETURN()
    return;
    // 0x801CF1E0: nop

;}
RECOMP_FUNC void func_801D31B4_666064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D31B4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801D31B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D31BC: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D31C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D31C4: addiu       $a1, $a1, 0x21B8
    ctx->r5 = ADD32(ctx->r5, 0X21B8);
    // 0x801D31C8: jal         0x80034E08
    // 0x801D31CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801D31CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801D31D0: bne         $v0, $zero, L_801D31E0
    if (ctx->r2 != 0) {
        // 0x801D31D4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801D31E0;
    }
    // 0x801D31D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D31D8: b           L_801D3270
    // 0x801D31DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D3270;
    // 0x801D31DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D31E0:
    // 0x801D31E0: jal         0x80013B14
    // 0x801D31E4: addiu       $a0, $zero, 0x4CD
    ctx->r4 = ADD32(0, 0X4CD);
    func_80013B14_14714(rdram, ctx);
        goto after_1;
    // 0x801D31E4: addiu       $a0, $zero, 0x4CD
    ctx->r4 = ADD32(0, 0X4CD);
    after_1:
    // 0x801D31E8: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D31EC: addiu       $t6, $t6, 0xD10
    ctx->r14 = ADD32(ctx->r14, 0XD10);
    // 0x801D31F0: addiu       $t7, $zero, 0x4CD
    ctx->r15 = ADD32(0, 0X4CD);
    // 0x801D31F4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D31F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D31FC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x801D3200: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x801D3204: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801D3208: jal         0x80010230
    // 0x801D320C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_2;
    // 0x801D320C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x801D3210: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D3214: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D3218: sw          $v0, -0x6690($at)
    MEM_W(-0X6690, ctx->r1) = ctx->r2;
    // 0x801D321C: lw          $a0, 0x4CE8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4CE8);
    // 0x801D3220: jal         0x800109A4
    // 0x801D3224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800109A4_115A4(rdram, ctx);
        goto after_3;
    // 0x801D3224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x801D3228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D322C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801D3230: jal         0x800114B8
    // 0x801D3234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800114B8_120B8(rdram, ctx);
        goto after_4;
    // 0x801D3234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x801D3238: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D323C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D3240: sw          $v0, -0x7910($at)
    MEM_W(-0X7910, ctx->r1) = ctx->r2;
    // 0x801D3244: addiu       $a0, $a0, -0x3688
    ctx->r4 = ADD32(ctx->r4, -0X3688);
    // 0x801D3248: jal         0x80034DD8
    // 0x801D324C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_5;
    // 0x801D324C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x801D3250: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x801D3254: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x801D3258: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x801D325C: jal         0x801D1BC0
    // 0x801D3260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D1BC0_664A70(rdram, ctx);
        goto after_6;
    // 0x801D3260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801D3264: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x801D3268: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x801D326C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801D3270:
    // 0x801D3270: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D3274: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D3278: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801D327C: jr          $ra
    // 0x801D3280: nop

    TRACE_RETURN()
    return;
    // 0x801D3280: nop

;}
RECOMP_FUNC void func_801D0EBC_663D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0EBC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801D0EC0: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801D0EC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D0EC8: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801D0ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D0ED0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801D0ED4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801D0ED8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801D0EDC: lhu         $v0, -0x4F86($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F86);
    // 0x801D0EE0: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x801D0EE4: beq         $t7, $zero, L_801D0F8C
    if (ctx->r15 == 0) {
        // 0x801D0EE8: andi        $t3, $v0, 0x4000
        ctx->r11 = ctx->r2 & 0X4000;
            goto L_801D0F8C;
    }
    // 0x801D0EE8: andi        $t3, $v0, 0x4000
    ctx->r11 = ctx->r2 & 0X4000;
    // 0x801D0EEC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x801D0EF0: lw          $a0, 0x28($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X28);
    // 0x801D0EF4: jal         0x801D0754
    // 0x801D0EF8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_801D0754_663604(rdram, ctx);
        goto after_0;
    // 0x801D0EF8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x801D0EFC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801D0F00: beq         $v0, $at, L_801D0F24
    if (ctx->r2 == ctx->r1) {
        // 0x801D0F04: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801D0F24;
    }
    // 0x801D0F04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D0F08: jal         0x800239B8
    // 0x801D0F0C: nop

    func_800239B8_245B8(rdram, ctx);
        goto after_1;
    // 0x801D0F0C: nop

    after_1:
    // 0x801D0F10: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801D0F14: jal         0x801D01C4
    // 0x801D0F18: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_801D01C4_663074(rdram, ctx);
        goto after_2;
    // 0x801D0F18: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x801D0F1C: bnel        $v0, $zero, L_801D0FE4
    if (ctx->r2 != 0) {
        // 0x801D0F20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D0FE4;
    }
    goto skip_0;
    // 0x801D0F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_801D0F24:
    // 0x801D0F24: jal         0x800238D0
    // 0x801D0F28: nop

    func_800238D0_244D0(rdram, ctx);
        goto after_3;
    // 0x801D0F28: nop

    after_3:
    // 0x801D0F2C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801D0F30: jal         0x801D01C4
    // 0x801D0F34: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_801D01C4_663074(rdram, ctx);
        goto after_4;
    // 0x801D0F34: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
    // 0x801D0F38: bnel        $v0, $zero, L_801D0FE4
    if (ctx->r2 != 0) {
        // 0x801D0F3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D0FE4;
    }
    goto skip_1;
    // 0x801D0F3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801D0F40: jal         0x80023788
    // 0x801D0F44: nop

    func_80023788_24388(rdram, ctx);
        goto after_5;
    // 0x801D0F44: nop

    after_5:
    // 0x801D0F48: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801D0F4C: jal         0x801D01C4
    // 0x801D0F50: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_801D01C4_663074(rdram, ctx);
        goto after_6;
    // 0x801D0F50: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x801D0F54: bne         $v0, $zero, L_801D0FE0
    if (ctx->r2 != 0) {
        // 0x801D0F58: lui         $t8, 0x8017
        ctx->r24 = S32(0X8017 << 16);
            goto L_801D0FE0;
    }
    // 0x801D0F58: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x801D0F5C: lw          $t8, -0x717C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X717C);
    // 0x801D0F60: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801D0F64: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x801D0F68: lw          $t9, 0x408($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X408);
    // 0x801D0F6C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x801D0F70: addiu       $v0, $v0, -0x66B8
    ctx->r2 = ADD32(ctx->r2, -0X66B8);
    // 0x801D0F74: subu        $a1, $t0, $t9
    ctx->r5 = SUB32(ctx->r8, ctx->r25);
    // 0x801D0F78: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x801D0F7C: jal         0x801D0D3C
    // 0x801D0F80: lw          $a0, 0x24($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X24);
    func_801D0D3C_663BEC(rdram, ctx);
        goto after_7;
    // 0x801D0F80: lw          $a0, 0x24($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X24);
    after_7:
    // 0x801D0F84: b           L_801D0F98
    // 0x801D0F88: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
        goto L_801D0F98;
    // 0x801D0F88: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
L_801D0F8C:
    // 0x801D0F8C: beq         $t3, $zero, L_801D0FE0
    if (ctx->r11 == 0) {
        // 0x801D0F90: lw          $v0, 0x28($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X28);
            goto L_801D0FE0;
    }
    // 0x801D0F90: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x801D0F94: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
L_801D0F98:
    // 0x801D0F98: lui         $t4, 0x801F
    ctx->r12 = S32(0X801F << 16);
    // 0x801D0F9C: lw          $t4, -0x66B8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X66B8);
    // 0x801D0FA0: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D0FA4: blezl       $t4, L_801D0FC8
    if (SIGNED(ctx->r12) <= 0) {
        // 0x801D0FA8: lw          $a0, 0x20($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X20);
            goto L_801D0FC8;
    }
    goto skip_2;
    // 0x801D0FA8: lw          $a0, 0x20($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X20);
    skip_2:
    // 0x801D0FAC: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D0FB0: lw          $a1, 0x3428($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3428);
    // 0x801D0FB4: jal         0x801CB6A4
    // 0x801D0FB8: lw          $a0, 0x20($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X20);
    func_801CB6A4_65E554(rdram, ctx);
        goto after_8;
    // 0x801D0FB8: lw          $a0, 0x20($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X20);
    after_8:
    // 0x801D0FBC: b           L_801D0FD0
    // 0x801D0FC0: nop

        goto L_801D0FD0;
    // 0x801D0FC0: nop

    // 0x801D0FC4: lw          $a0, 0x20($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X20);
L_801D0FC8:
    // 0x801D0FC8: jal         0x801CB6A4
    // 0x801D0FCC: lw          $a1, 0x3430($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3430);
    func_801CB6A4_65E554(rdram, ctx);
        goto after_9;
    // 0x801D0FCC: lw          $a1, 0x3430($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3430);
    after_9:
L_801D0FD0:
    // 0x801D0FD0: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D0FD4: addiu       $a1, $a1, 0xFF0
    ctx->r5 = ADD32(ctx->r5, 0XFF0);
    // 0x801D0FD8: jal         0x80011734
    // 0x801D0FDC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80011734_12334(rdram, ctx);
        goto after_10;
    // 0x801D0FDC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_10:
L_801D0FE0:
    // 0x801D0FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D0FE4:
    // 0x801D0FE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D0FE8: jr          $ra
    // 0x801D0FEC: nop

    TRACE_RETURN()
    return;
    // 0x801D0FEC: nop

;}
RECOMP_FUNC void func_801CBC88_65EB38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBC88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CBC8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBC90: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x801CBC94: lhu         $t0, 0x16($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X16);
    // 0x801CBC98: lhu         $t4, 0x18($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X18);
    // 0x801CBC9C: addiu       $t8, $t6, 0x4
    ctx->r24 = ADD32(ctx->r14, 0X4);
    // 0x801CBCA0: addiu       $t2, $t0, 0x2
    ctx->r10 = ADD32(ctx->r8, 0X2);
    // 0x801CBCA4: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x801CBCA8: sh          $t8, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r24;
    // 0x801CBCAC: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x801CBCB0: sh          $t2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r10;
    // 0x801CBCB4: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x801CBCB8: sh          $t6, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r14;
    // 0x801CBCBC: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x801CBCC0: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
    // 0x801CBCC4: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x801CBCC8: jal         0x8001136C
    // 0x801CBCCC: sh          $t7, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r15;
    func_8001136C_11F6C(rdram, ctx);
        goto after_0;
    // 0x801CBCCC: sh          $t7, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r15;
    after_0:
    // 0x801CBCD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CBCD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CBCD8: jr          $ra
    // 0x801CBCDC: nop

    TRACE_RETURN()
    return;
    // 0x801CBCDC: nop

;}
RECOMP_FUNC void func_801CD624_6604D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD624: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801CD628: lw          $t7, -0x66E8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X66E8);
    // 0x801CD62C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CD630: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CD634: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801CD638: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CD63C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801CD640: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801CD644: sw          $a1, -0x66EC($at)
    MEM_W(-0X66EC, ctx->r1) = ctx->r5;
    // 0x801CD648: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x801CD64C: lw          $a0, 0x78($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X78);
    // 0x801CD650: addiu       $t0, $zero, 0x60
    ctx->r8 = ADD32(0, 0X60);
    // 0x801CD654: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801CD658: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801CD65C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CD660: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801CD664: jal         0x801CC56C
    // 0x801CD668: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_0;
    // 0x801CD668: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_0:
    // 0x801CD66C: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CD670: lw          $v0, -0x66E8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X66E8);
    // 0x801CD674: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x801CD678: addiu       $a1, $zero, -0x1E
    ctx->r5 = ADD32(0, -0X1E);
    // 0x801CD67C: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x801CD680: beq         $at, $zero, L_801CD698
    if (ctx->r1 == 0) {
        // 0x801CD684: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_801CD698;
    }
    // 0x801CD684: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x801CD688: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x801CD68C: lw          $a0, 0x78($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X78);
    // 0x801CD690: jal         0x800115B8
    // 0x801CD694: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800115B8_121B8(rdram, ctx);
        goto after_1;
    // 0x801CD694: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_801CD698:
    // 0x801CD698: lui         $t4, 0x801F
    ctx->r12 = S32(0X801F << 16);
    // 0x801CD69C: lw          $t4, -0x66EC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X66EC);
    // 0x801CD6A0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801CD6A4: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x801CD6A8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x801CD6AC: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x801CD6B0: addu        $t7, $s0, $t5
    ctx->r15 = ADD32(ctx->r16, ctx->r13);
    // 0x801CD6B4: lw          $a0, 0x1C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C);
    // 0x801CD6B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CD6BC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CD6C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CD6C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CD6C8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801CD6CC: jal         0x801CC56C
    // 0x801CD6D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801CC56C_65F41C(rdram, ctx);
        goto after_2;
    // 0x801CD6D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x801CD6D4: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CD6D8: lw          $v0, -0x66EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X66EC);
    // 0x801CD6DC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x801CD6E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CD6E4: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x801CD6E8: beq         $at, $zero, L_801CD710
    if (ctx->r1 == 0) {
        // 0x801CD6EC: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_801CD710;
    }
    // 0x801CD6EC: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x801CD6F0: addu        $t0, $s0, $t9
    ctx->r8 = ADD32(ctx->r16, ctx->r25);
    // 0x801CD6F4: jal         0x800115B8
    // 0x801CD6F8: lw          $a0, 0x1C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1C);
    func_800115B8_121B8(rdram, ctx);
        goto after_3;
    // 0x801CD6F8: lw          $a0, 0x1C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1C);
    after_3:
    // 0x801CD6FC: lw          $a1, 0x40($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X40);
    // 0x801CD700: jal         0x80011610
    // 0x801CD704: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    func_80011610_12210(rdram, ctx);
        goto after_4;
    // 0x801CD704: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    after_4:
    // 0x801CD708: b           L_801CD720
    // 0x801CD70C: nop

        goto L_801CD720;
    // 0x801CD70C: nop

L_801CD710:
    // 0x801CD710: lw          $t1, 0x40($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X40);
    // 0x801CD714: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x801CD718: jal         0x80011610
    // 0x801CD71C: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    func_80011610_12210(rdram, ctx);
        goto after_5;
    // 0x801CD71C: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_5:
L_801CD720:
    // 0x801CD720: lui         $t2, 0x801F
    ctx->r10 = S32(0X801F << 16);
    // 0x801CD724: lw          $t2, -0x66EC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X66EC);
    // 0x801CD728: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    // 0x801CD72C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801CD730: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x801CD734: jal         0x801CD3B8
    // 0x801CD738: lw          $a1, 0x1C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X1C);
    func_801CD3B8_660268(rdram, ctx);
        goto after_6;
    // 0x801CD738: lw          $a1, 0x1C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X1C);
    after_6:
    // 0x801CD73C: lui         $t5, 0x801F
    ctx->r13 = S32(0X801F << 16);
    // 0x801CD740: lw          $t5, -0x66EC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X66EC);
    // 0x801CD744: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CD748: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    // 0x801CD74C: jal         0x80038B98
    // 0x801CD750: sw          $t5, -0x66E8($at)
    MEM_W(-0X66E8, ctx->r1) = ctx->r13;
    func_80038B98_39798(rdram, ctx);
        goto after_7;
    // 0x801CD750: sw          $t5, -0x66E8($at)
    MEM_W(-0X66E8, ctx->r1) = ctx->r13;
    after_7:
    // 0x801CD754: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801CD758: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801CD75C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801CD760: jr          $ra
    // 0x801CD764: nop

    TRACE_RETURN()
    return;
    // 0x801CD764: nop

;}
RECOMP_FUNC void func_801D0B64_663A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0B64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D0B68: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D0B6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D0B70: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801D0B74: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D0B78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D0B7C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D0B80: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801D0B84: addiu       $a1, $a1, 0xA30
    ctx->r5 = ADD32(ctx->r5, 0XA30);
    // 0x801D0B88: jal         0x80034E08
    // 0x801D0B8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801D0B8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801D0B90: bne         $v0, $zero, L_801D0BA0
    if (ctx->r2 != 0) {
        // 0x801D0B94: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801D0BA0;
    }
    // 0x801D0B94: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D0B98: b           L_801D0BCC
    // 0x801D0B9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D0BCC;
    // 0x801D0B9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D0BA0:
    // 0x801D0BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0BA4: jal         0x80011610
    // 0x801D0BA8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_80011610_12210(rdram, ctx);
        goto after_1;
    // 0x801D0BA8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801D0BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0BB0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D0BB4: jal         0x800115F8
    // 0x801D0BB8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_800115F8_121F8(rdram, ctx);
        goto after_2;
    // 0x801D0BB8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x801D0BBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0BC0: jal         0x800119D4
    // 0x801D0BC4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800119D4_125D4(rdram, ctx);
        goto after_3;
    // 0x801D0BC4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x801D0BC8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801D0BCC:
    // 0x801D0BCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D0BD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D0BD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D0BD8: jr          $ra
    // 0x801D0BDC: nop

    TRACE_RETURN()
    return;
    // 0x801D0BDC: nop

;}
RECOMP_FUNC void func_801D1C24_664AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1C24: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D1C28: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801D1C2C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D1C30: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D1C34: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801D1C38: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801D1C3C: jal         0x80010358
    // 0x801D1C40: lw          $a0, 0x90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X90);
    func_80010358_10F58(rdram, ctx);
        goto after_0;
    // 0x801D1C40: lw          $a0, 0x90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X90);
    after_0:
    // 0x801D1C44: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x801D1C48: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x801D1C4C: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    // 0x801D1C50: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801D1C54: beq         $v1, $zero, L_801D1C8C
    if (ctx->r3 == 0) {
        // 0x801D1C58: addiu       $a3, $zero, 0x6
        ctx->r7 = ADD32(0, 0X6);
            goto L_801D1C8C;
    }
    // 0x801D1C58: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801D1C5C: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x801D1C60: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801D1C64: lw          $t7, -0x6690($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X6690);
    // 0x801D1C68: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x801D1C6C: addiu       $t8, $zero, 0x1A
    ctx->r24 = ADD32(0, 0X1A);
    // 0x801D1C70: addiu       $t9, $zero, 0x34
    ctx->r25 = ADD32(0, 0X34);
    // 0x801D1C74: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801D1C78: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801D1C7C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D1C80: jal         0x800106F0
    // 0x801D1C84: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_1;
    // 0x801D1C84: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_1:
    // 0x801D1C88: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
L_801D1C8C:
    // 0x801D1C8C: bgtz        $v1, L_801D1CC4
    if (SIGNED(ctx->r3) > 0) {
        // 0x801D1C90: addiu       $a1, $zero, 0xD2
        ctx->r5 = ADD32(0, 0XD2);
            goto L_801D1CC4;
    }
    // 0x801D1C90: addiu       $a1, $zero, 0xD2
    ctx->r5 = ADD32(0, 0XD2);
    // 0x801D1C94: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x801D1C98: lui         $t1, 0x801F
    ctx->r9 = S32(0X801F << 16);
    // 0x801D1C9C: lw          $t1, -0x6690($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6690);
    // 0x801D1CA0: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x801D1CA4: addiu       $t2, $zero, 0x34
    ctx->r10 = ADD32(0, 0X34);
    // 0x801D1CA8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x801D1CAC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801D1CB0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D1CB4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801D1CB8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801D1CBC: jal         0x800106F0
    // 0x801D1CC0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_800106F0_112F0(rdram, ctx);
        goto after_2;
    // 0x801D1CC0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_2:
L_801D1CC4:
    // 0x801D1CC4: jal         0x800105AC
    // 0x801D1CC8: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    func_800105AC_111AC(rdram, ctx);
        goto after_3;
    // 0x801D1CC8: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    after_3:
    // 0x801D1CCC: jal         0x8001136C
    // 0x801D1CD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001136C_11F6C(rdram, ctx);
        goto after_4;
    // 0x801D1CD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x801D1CD4: lui         $s1, 0x801D
    ctx->r17 = S32(0X801D << 16);
    // 0x801D1CD8: addiu       $s1, $s1, 0x4CE8
    ctx->r17 = ADD32(ctx->r17, 0X4CE8);
    // 0x801D1CDC: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x801D1CE0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x801D1CE4: sw          $t3, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r11;
    // 0x801D1CE8: lw          $a3, 0x2C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X2C);
    // 0x801D1CEC: lw          $a2, 0x28($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X28);
    // 0x801D1CF0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x801D1CF4: jal         0x80010980
    // 0x801D1CF8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80010980_11580(rdram, ctx);
        goto after_5;
    // 0x801D1CF8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_5:
    // 0x801D1CFC: jal         0x80010B60
    // 0x801D1D00: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_80010B60_11760(rdram, ctx);
        goto after_6;
    // 0x801D1D00: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_6:
    // 0x801D1D04: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x801D1D08: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x801D1D0C: jal         0x800109A4
    // 0x801D1D10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800109A4_115A4(rdram, ctx);
        goto after_7;
    // 0x801D1D10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x801D1D14: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x801D1D18: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x801D1D1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D1D20: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801D1D24: beql        $v1, $zero, L_801D1D40
    if (ctx->r3 == 0) {
        // 0x801D1D28: lw          $a1, 0x10($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X10);
            goto L_801D1D40;
    }
    goto skip_0;
    // 0x801D1D28: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    skip_0:
    // 0x801D1D2C: beq         $v1, $at, L_801D1D60
    if (ctx->r3 == ctx->r1) {
        // 0x801D1D30: lui         $a3, 0x801D
        ctx->r7 = S32(0X801D << 16);
            goto L_801D1D60;
    }
    // 0x801D1D30: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801D1D34: b           L_801D1D84
    // 0x801D1D38: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
        goto L_801D1D84;
    // 0x801D1D38: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x801D1D3C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
L_801D1D40:
    // 0x801D1D40: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x801D1D44: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x801D1D48: lw          $a3, 0x3528($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3528);
    // 0x801D1D4C: addiu       $a1, $a1, 0x96
    ctx->r5 = ADD32(ctx->r5, 0X96);
    // 0x801D1D50: jal         0x80010E9C
    // 0x801D1D54: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_8;
    // 0x801D1D54: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_8:
    // 0x801D1D58: b           L_801D1D80
    // 0x801D1D5C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
        goto L_801D1D80;
    // 0x801D1D5C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_801D1D60:
    // 0x801D1D60: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x801D1D64: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x801D1D68: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x801D1D6C: lw          $a3, 0x352C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X352C);
    // 0x801D1D70: addiu       $a1, $a1, 0x96
    ctx->r5 = ADD32(ctx->r5, 0X96);
    // 0x801D1D74: jal         0x80010E9C
    // 0x801D1D78: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_9;
    // 0x801D1D78: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_9:
    // 0x801D1D7C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_801D1D80:
    // 0x801D1D80: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
L_801D1D84:
    // 0x801D1D84: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x801D1D88: lui         $v1, 0x8FFF
    ctx->r3 = S32(0X8FFF << 16);
    // 0x801D1D8C: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x801D1D90: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x801D1D94: lw          $v0, 0x30($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X30);
    // 0x801D1D98: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x801D1D9C: subu        $t9, $v1, $v0
    ctx->r25 = SUB32(ctx->r3, ctx->r2);
    // 0x801D1DA0: and         $t0, $t6, $t9
    ctx->r8 = ctx->r14 & ctx->r25;
    // 0x801D1DA4: and         $a1, $t0, $v1
    ctx->r5 = ctx->r8 & ctx->r3;
    // 0x801D1DA8: jal         0x80040620
    // 0x801D1DAC: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_10;
    // 0x801D1DAC: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    after_10:
    // 0x801D1DB0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801D1DB4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801D1DB8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801D1DBC: jr          $ra
    // 0x801D1DC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801D1DC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801CD10C_65FFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD10C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CD110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CD114: jal         0x801CCCE8
    // 0x801CD118: nop

    func_801CCCE8_65FB98(rdram, ctx);
        goto after_0;
    // 0x801CD118: nop

    after_0:
    // 0x801CD11C: lui         $v1, 0x801F
    ctx->r3 = S32(0X801F << 16);
    // 0x801CD120: lw          $v1, -0x66D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X66D0);
    // 0x801CD124: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CD128: andi        $t6, $v1, 0x400
    ctx->r14 = ctx->r3 & 0X400;
    // 0x801CD12C: beql        $t6, $zero, L_801CD188
    if (ctx->r14 == 0) {
        // 0x801CD130: andi        $t2, $v1, 0x800
        ctx->r10 = ctx->r3 & 0X800;
            goto L_801CD188;
    }
    goto skip_0;
    // 0x801CD130: andi        $t2, $v1, 0x800
    ctx->r10 = ctx->r3 & 0X800;
    skip_0:
    // 0x801CD134: lw          $v0, -0x66C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X66C8);
    // 0x801CD138: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CD13C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801CD140: beq         $v0, $at, L_801CD15C
    if (ctx->r2 == ctx->r1) {
        // 0x801CD144: addiu       $a0, $a0, -0x66E4
        ctx->r4 = ADD32(ctx->r4, -0X66E4);
            goto L_801CD15C;
    }
    // 0x801CD144: addiu       $a0, $a0, -0x66E4
    ctx->r4 = ADD32(ctx->r4, -0X66E4);
    // 0x801CD148: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x801CD14C: bne         $at, $zero, L_801CD184
    if (ctx->r1 != 0) {
        // 0x801CD150: andi        $t7, $v0, 0x3
        ctx->r15 = ctx->r2 & 0X3;
            goto L_801CD184;
    }
    // 0x801CD150: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x801CD154: bnel        $t7, $zero, L_801CD188
    if (ctx->r15 != 0) {
        // 0x801CD158: andi        $t2, $v1, 0x800
        ctx->r10 = ctx->r3 & 0X800;
            goto L_801CD188;
    }
    goto skip_1;
    // 0x801CD158: andi        $t2, $v1, 0x800
    ctx->r10 = ctx->r3 & 0X800;
    skip_1:
L_801CD15C:
    // 0x801CD15C: lui         $v1, 0x801F
    ctx->r3 = S32(0X801F << 16);
    // 0x801CD160: addiu       $v1, $v1, -0x66EC
    ctx->r3 = ADD32(ctx->r3, -0X66EC);
    // 0x801CD164: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801CD168: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x801CD16C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801CD170: bne         $t0, $t9, L_801CD1DC
    if (ctx->r8 != ctx->r25) {
        // 0x801CD174: sw          $t9, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r25;
            goto L_801CD1DC;
    }
    // 0x801CD174: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801CD178: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x801CD17C: b           L_801CD1DC
    // 0x801CD180: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_801CD1DC;
    // 0x801CD180: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_801CD184:
    // 0x801CD184: andi        $t2, $v1, 0x800
    ctx->r10 = ctx->r3 & 0X800;
L_801CD188:
    // 0x801CD188: beq         $t2, $zero, L_801CD1DC
    if (ctx->r10 == 0) {
        // 0x801CD18C: lui         $v0, 0x801F
        ctx->r2 = S32(0X801F << 16);
            goto L_801CD1DC;
    }
    // 0x801CD18C: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CD190: lw          $v0, -0x66C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X66C8);
    // 0x801CD194: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CD198: lui         $v1, 0x801F
    ctx->r3 = S32(0X801F << 16);
    // 0x801CD19C: beq         $v0, $at, L_801CD1B8
    if (ctx->r2 == ctx->r1) {
        // 0x801CD1A0: addiu       $v1, $v1, -0x66EC
        ctx->r3 = ADD32(ctx->r3, -0X66EC);
            goto L_801CD1B8;
    }
    // 0x801CD1A0: addiu       $v1, $v1, -0x66EC
    ctx->r3 = ADD32(ctx->r3, -0X66EC);
    // 0x801CD1A4: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x801CD1A8: bne         $at, $zero, L_801CD1DC
    if (ctx->r1 != 0) {
        // 0x801CD1AC: andi        $t3, $v0, 0x3
        ctx->r11 = ctx->r2 & 0X3;
            goto L_801CD1DC;
    }
    // 0x801CD1AC: andi        $t3, $v0, 0x3
    ctx->r11 = ctx->r2 & 0X3;
    // 0x801CD1B0: bne         $t3, $zero, L_801CD1DC
    if (ctx->r11 != 0) {
        // 0x801CD1B4: nop
    
            goto L_801CD1DC;
    }
    // 0x801CD1B4: nop

L_801CD1B8:
    // 0x801CD1B8: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x801CD1BC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801CD1C0: addiu       $a0, $a0, -0x66E4
    ctx->r4 = ADD32(ctx->r4, -0X66E4);
    // 0x801CD1C4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x801CD1C8: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x801CD1CC: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x801CD1D0: bne         $t6, $t5, L_801CD1DC
    if (ctx->r14 != ctx->r13) {
        // 0x801CD1D4: addiu       $t7, $t5, -0x1
        ctx->r15 = ADD32(ctx->r13, -0X1);
            goto L_801CD1DC;
    }
    // 0x801CD1D4: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x801CD1D8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_801CD1DC:
    // 0x801CD1DC: lui         $v1, 0x801F
    ctx->r3 = S32(0X801F << 16);
    // 0x801CD1E0: addiu       $v1, $v1, -0x66EC
    ctx->r3 = ADD32(ctx->r3, -0X66EC);
    // 0x801CD1E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CD1E8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801CD1EC: addiu       $a0, $a0, -0x66E4
    ctx->r4 = ADD32(ctx->r4, -0X66E4);
    // 0x801CD1F0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x801CD1F4: beql        $at, $zero, L_801CD21C
    if (ctx->r1 == 0) {
        // 0x801CD1F8: slti        $at, $v0, 0x6
        ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
            goto L_801CD21C;
    }
    goto skip_2;
    // 0x801CD1F8: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    skip_2:
    // 0x801CD1FC: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x801CD200: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x801CD204: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801CD208: bnel        $t9, $v0, L_801CD21C
    if (ctx->r25 != ctx->r2) {
        // 0x801CD20C: slti        $at, $v0, 0x6
        ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
            goto L_801CD21C;
    }
    goto skip_3;
    // 0x801CD20C: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    skip_3:
    // 0x801CD210: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x801CD214: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801CD218: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
L_801CD21C:
    // 0x801CD21C: bnel        $at, $zero, L_801CD240
    if (ctx->r1 != 0) {
        // 0x801CD220: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CD240;
    }
    goto skip_4;
    // 0x801CD220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x801CD224: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x801CD228: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x801CD22C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x801CD230: bne         $t2, $t1, L_801CD23C
    if (ctx->r10 != ctx->r9) {
        // 0x801CD234: addiu       $t4, $zero, 0x4
        ctx->r12 = ADD32(0, 0X4);
            goto L_801CD23C;
    }
    // 0x801CD234: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x801CD238: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_801CD23C:
    // 0x801CD23C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CD240:
    // 0x801CD240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CD244: jr          $ra
    // 0x801CD248: nop

    TRACE_RETURN()
    return;
    // 0x801CD248: nop

;}
RECOMP_FUNC void func_801CC20C_65F0BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC20C: beq         $a0, $zero, L_801CC224
    if (ctx->r4 == 0) {
        // 0x801CC210: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_801CC224;
    }
    // 0x801CC210: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x801CC214: lw          $t6, 0x20($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X20);
    // 0x801CC218: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x801CC21C: lw          $t7, 0x24($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X24);
    // 0x801CC220: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
L_801CC224:
    // 0x801CC224: jr          $ra
    // 0x801CC228: nop

    TRACE_RETURN()
    return;
    // 0x801CC228: nop

;}
RECOMP_FUNC void func_801CCCE8_65FB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCCE8: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801CCCEC: addiu       $a1, $a1, -0x66D0
    ctx->r5 = ADD32(ctx->r5, -0X66D0);
    // 0x801CCCF0: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x801CCCF4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801CCCF8: addiu       $a0, $a0, -0x66CC
    ctx->r4 = ADD32(ctx->r4, -0X66CC);
    // 0x801CCCFC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CCD00: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801CCD04: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801CCD08: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CCD0C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CCD10: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801CCD14: lhu         $t7, 0x307A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X307A);
    // 0x801CCD18: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x801CCD1C: lh          $v1, 0x3080($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X3080);
    // 0x801CCD20: ori         $t9, $t7, 0x400
    ctx->r25 = ctx->r15 | 0X400;
    // 0x801CCD24: slti        $at, $v1, -0x28
    ctx->r1 = SIGNED(ctx->r3) < -0X28 ? 1 : 0;
    // 0x801CCD28: beql        $at, $zero, L_801CCD3C
    if (ctx->r1 == 0) {
        // 0x801CCD2C: slti        $at, $v1, 0x29
        ctx->r1 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
            goto L_801CCD3C;
    }
    goto skip_0;
    // 0x801CCD2C: slti        $at, $v1, 0x29
    ctx->r1 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    skip_0:
    // 0x801CCD30: b           L_801CCD50
    // 0x801CCD34: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
        goto L_801CCD50;
    // 0x801CCD34: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x801CCD38: slti        $at, $v1, 0x29
    ctx->r1 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
L_801CCD3C:
    // 0x801CCD3C: bnel        $at, $zero, L_801CCD54
    if (ctx->r1 != 0) {
        // 0x801CCD40: lh          $v1, 0x307E($v0)
        ctx->r3 = MEM_H(ctx->r2, 0X307E);
            goto L_801CCD54;
    }
    goto skip_1;
    // 0x801CCD40: lh          $v1, 0x307E($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X307E);
    skip_1:
    // 0x801CCD44: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x801CCD48: ori         $t1, $t0, 0x800
    ctx->r9 = ctx->r8 | 0X800;
    // 0x801CCD4C: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
L_801CCD50:
    // 0x801CCD50: lh          $v1, 0x307E($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X307E);
L_801CCD54:
    // 0x801CCD54: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CCD58: addiu       $v0, $v0, -0x66C8
    ctx->r2 = ADD32(ctx->r2, -0X66C8);
    // 0x801CCD5C: slti        $at, $v1, -0x28
    ctx->r1 = SIGNED(ctx->r3) < -0X28 ? 1 : 0;
    // 0x801CCD60: beq         $at, $zero, L_801CCD78
    if (ctx->r1 == 0) {
        // 0x801CCD64: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_801CCD78;
    }
    // 0x801CCD64: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801CCD68: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x801CCD6C: ori         $t3, $t2, 0x200
    ctx->r11 = ctx->r10 | 0X200;
    // 0x801CCD70: b           L_801CCD90
    // 0x801CCD74: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
        goto L_801CCD90;
    // 0x801CCD74: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
L_801CCD78:
    // 0x801CCD78: slti        $at, $v1, 0x29
    ctx->r1 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x801CCD7C: bnel        $at, $zero, L_801CCD94
    if (ctx->r1 != 0) {
        // 0x801CCD80: lw          $t6, 0x0($a1)
        ctx->r14 = MEM_W(ctx->r5, 0X0);
            goto L_801CCD94;
    }
    goto skip_2;
    // 0x801CCD80: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    skip_2:
    // 0x801CCD84: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x801CCD88: ori         $t5, $t4, 0x100
    ctx->r13 = ctx->r12 | 0X100;
    // 0x801CCD8C: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
L_801CCD90:
    // 0x801CCD90: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
L_801CCD94:
    // 0x801CCD94: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x801CCD98: bnel        $t6, $t7, L_801CCDBC
    if (ctx->r14 != ctx->r15) {
        // 0x801CCD9C: sw          $t0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r8;
            goto L_801CCDBC;
    }
    goto skip_3;
    // 0x801CCD9C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    skip_3:
    // 0x801CCDA0: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CCDA4: addiu       $v0, $v0, -0x66C8
    ctx->r2 = ADD32(ctx->r2, -0X66C8);
    // 0x801CCDA8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x801CCDAC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801CCDB0: jr          $ra
    // 0x801CCDB4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x801CCDB4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CCDB8: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
L_801CCDBC:
    // 0x801CCDBC: jr          $ra
    // 0x801CCDC0: nop

    TRACE_RETURN()
    return;
    // 0x801CCDC0: nop

    // 0x801CCDC4: jr          $ra
    // 0x801CCDC8: nop

    TRACE_RETURN()
    return;
    // 0x801CCDC8: nop

;}
RECOMP_FUNC void func_801CB6AC_65E55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB6AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB6B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CB6B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CB6B8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801CB6BC: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CB6C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CB6C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801CB6C8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801CB6CC: addiu       $a1, $a1, -0x4A3C
    ctx->r5 = ADD32(ctx->r5, -0X4A3C);
    // 0x801CB6D0: jal         0x80034E08
    // 0x801CB6D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801CB6D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801CB6D8: bne         $v0, $zero, L_801CB6E8
    if (ctx->r2 != 0) {
        // 0x801CB6DC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801CB6E8;
    }
    // 0x801CB6DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801CB6E0: b           L_801CB740
    // 0x801CB6E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801CB740;
    // 0x801CB6E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CB6E8:
    // 0x801CB6E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CB6EC: jal         0x80011610
    // 0x801CB6F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_80011610_12210(rdram, ctx);
        goto after_1;
    // 0x801CB6F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801CB6F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CB6F8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801CB6FC: jal         0x800115F8
    // 0x801CB700: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_800115F8_121F8(rdram, ctx);
        goto after_2;
    // 0x801CB700: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x801CB704: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x801CB708: addiu       $v0, $s0, 0x5C
    ctx->r2 = ADD32(ctx->r16, 0X5C);
    // 0x801CB70C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801CB710: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x801CB714: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x801CB718: sw          $t7, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r15;
    // 0x801CB71C: sw          $t8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r24;
    // 0x801CB720: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    // 0x801CB724: sw          $v1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r3;
    // 0x801CB728: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    // 0x801CB72C: sw          $t6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r14;
    // 0x801CB730: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x801CB734: jal         0x800119D4
    // 0x801CB738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800119D4_125D4(rdram, ctx);
        goto after_3;
    // 0x801CB738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801CB73C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801CB740:
    // 0x801CB740: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CB744: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CB748: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CB74C: jr          $ra
    // 0x801CB750: nop

    TRACE_RETURN()
    return;
    // 0x801CB750: nop

;}
RECOMP_FUNC void func_801CE1F0_6610A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE1F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CE1F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CE1F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CE1FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CE200: lw          $t9, 0xA8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA8);
    // 0x801CE204: jalr        $t9
    // 0x801CE208: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801CE208: nop

    after_0:
    // 0x801CE20C: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801CE210: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801CE214: lw          $t7, -0x66E8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X66E8);
    // 0x801CE218: lw          $a1, -0x66EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X66EC);
    // 0x801CE21C: beq         $t7, $a1, L_801CE22C
    if (ctx->r15 == ctx->r5) {
        // 0x801CE220: nop
    
            goto L_801CE22C;
    }
    // 0x801CE220: nop

    // 0x801CE224: jal         0x801CD410
    // 0x801CE228: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801CD410_6602C0(rdram, ctx);
        goto after_1;
    // 0x801CE228: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_801CE22C:
    // 0x801CE22C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801CE230: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801CE234: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801CE238: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x801CE23C: lhu         $v0, -0x4F86($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F86);
    // 0x801CE240: andi        $t0, $v0, 0x9000
    ctx->r8 = ctx->r2 & 0X9000;
    // 0x801CE244: beql        $t0, $zero, L_801CE394
    if (ctx->r8 == 0) {
        // 0x801CE248: andi        $t7, $v0, 0x4000
        ctx->r15 = ctx->r2 & 0X4000;
            goto L_801CE394;
    }
    goto skip_0;
    // 0x801CE248: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    skip_0:
    // 0x801CE24C: jal         0x80038B98
    // 0x801CE250: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    func_80038B98_39798(rdram, ctx);
        goto after_2;
    // 0x801CE250: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_2:
    // 0x801CE254: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CE258: lw          $v0, -0x66EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X66EC);
    // 0x801CE25C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CE260: beq         $v0, $zero, L_801CE284
    if (ctx->r2 == 0) {
        // 0x801CE264: nop
    
            goto L_801CE284;
    }
    // 0x801CE264: nop

    // 0x801CE268: beq         $v0, $at, L_801CE354
    if (ctx->r2 == ctx->r1) {
        // 0x801CE26C: lui         $t1, 0x8016
        ctx->r9 = S32(0X8016 << 16);
            goto L_801CE354;
    }
    // 0x801CE26C: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x801CE270: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x801CE274: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801CE278: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x801CE27C: b           L_801CE390
    // 0x801CE280: lhu         $v0, -0x4F86($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F86);
        goto L_801CE390;
    // 0x801CE280: lhu         $v0, -0x4F86($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F86);
L_801CE284:
    // 0x801CE284: jal         0x80023410
    // 0x801CE288: nop

    func_80023410_24010(rdram, ctx);
        goto after_3;
    // 0x801CE288: nop

    after_3:
    // 0x801CE28C: beq         $v0, $zero, L_801CE2B0
    if (ctx->r2 == 0) {
        // 0x801CE290: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_801CE2B0;
    }
    // 0x801CE290: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801CE294: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801CE298: beq         $v0, $at, L_801CE2CC
    if (ctx->r2 == ctx->r1) {
        // 0x801CE29C: nop
    
            goto L_801CE2CC;
    }
    // 0x801CE29C: nop

    // 0x801CE2A0: jal         0x801CE16C
    // 0x801CE2A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801CE16C_66101C(rdram, ctx);
        goto after_4;
    // 0x801CE2A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x801CE2A8: b           L_801CE3A8
    // 0x801CE2AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CE3A8;
    // 0x801CE2AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CE2B0:
    // 0x801CE2B0: jal         0x80023480
    // 0x801CE2B4: nop

    func_80023480_24080(rdram, ctx);
        goto after_5;
    // 0x801CE2B4: nop

    after_5:
    // 0x801CE2B8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CE2BC: jal         0x8003521C
    // 0x801CE2C0: addiu       $a0, $a0, -0x10F8
    ctx->r4 = ADD32(ctx->r4, -0X10F8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801CE2C0: addiu       $a0, $a0, -0x10F8
    ctx->r4 = ADD32(ctx->r4, -0X10F8);
    after_6:
    // 0x801CE2C4: b           L_801CE3A8
    // 0x801CE2C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CE3A8;
    // 0x801CE2C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CE2CC:
    // 0x801CE2CC: jal         0x800237F0
    // 0x801CE2D0: nop

    func_800237F0_243F0(rdram, ctx);
        goto after_7;
    // 0x801CE2D0: nop

    after_7:
    // 0x801CE2D4: bne         $v0, $zero, L_801CE308
    if (ctx->r2 != 0) {
        // 0x801CE2D8: lui         $v0, 0x8017
        ctx->r2 = S32(0X8017 << 16);
            goto L_801CE308;
    }
    // 0x801CE2D8: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x801CE2DC: lw          $v0, -0x717C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X717C);
    // 0x801CE2E0: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CE2E4: lw          $t2, 0x404($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X404);
    // 0x801CE2E8: lw          $t3, 0x400($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X400);
    // 0x801CE2EC: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x801CE2F0: bne         $at, $zero, L_801CE308
    if (ctx->r1 != 0) {
        // 0x801CE2F4: nop
    
            goto L_801CE308;
    }
    // 0x801CE2F4: nop

    // 0x801CE2F8: jal         0x8003521C
    // 0x801CE2FC: addiu       $a0, $a0, -0x26F0
    ctx->r4 = ADD32(ctx->r4, -0X26F0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801CE2FC: addiu       $a0, $a0, -0x26F0
    ctx->r4 = ADD32(ctx->r4, -0X26F0);
    after_8:
    // 0x801CE300: b           L_801CE3A8
    // 0x801CE304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CE3A8;
    // 0x801CE304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CE308:
    // 0x801CE308: jal         0x80023788
    // 0x801CE30C: nop

    func_80023788_24388(rdram, ctx);
        goto after_9;
    // 0x801CE30C: nop

    after_9:
    // 0x801CE310: bne         $v0, $zero, L_801CE340
    if (ctx->r2 != 0) {
        // 0x801CE314: lui         $t4, 0x8017
        ctx->r12 = S32(0X8017 << 16);
            goto L_801CE340;
    }
    // 0x801CE314: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x801CE318: lw          $t4, -0x717C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X717C);
    // 0x801CE31C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CE320: lw          $t5, 0x408($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X408);
    // 0x801CE324: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x801CE328: beq         $at, $zero, L_801CE340
    if (ctx->r1 == 0) {
        // 0x801CE32C: nop
    
            goto L_801CE340;
    }
    // 0x801CE32C: nop

    // 0x801CE330: jal         0x8003521C
    // 0x801CE334: addiu       $a0, $a0, -0x25F0
    ctx->r4 = ADD32(ctx->r4, -0X25F0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x801CE334: addiu       $a0, $a0, -0x25F0
    ctx->r4 = ADD32(ctx->r4, -0X25F0);
    after_10:
    // 0x801CE338: b           L_801CE3A8
    // 0x801CE33C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CE3A8;
    // 0x801CE33C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CE340:
    // 0x801CE340: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CE344: jal         0x8003521C
    // 0x801CE348: addiu       $a0, $a0, -0x1F68
    ctx->r4 = ADD32(ctx->r4, -0X1F68);
    func_8003521C_35E1C(rdram, ctx);
        goto after_11;
    // 0x801CE348: addiu       $a0, $a0, -0x1F68
    ctx->r4 = ADD32(ctx->r4, -0X1F68);
    after_11:
    // 0x801CE34C: b           L_801CE3A8
    // 0x801CE350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CE3A8;
    // 0x801CE350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CE354:
    // 0x801CE354: jal         0x8000B640
    // 0x801CE358: nop

    func_8000B640_C240(rdram, ctx);
        goto after_12;
    // 0x801CE358: nop

    after_12:
    // 0x801CE35C: jal         0x8000B5D0
    // 0x801CE360: nop

    func_8000B5D0_C1D0(rdram, ctx);
        goto after_13;
    // 0x801CE360: nop

    after_13:
    // 0x801CE364: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CE368: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801CE36C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CE370: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x801CE374: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CE378: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801CE37C: sw          $t6, -0x4FC0($at)
    MEM_W(-0X4FC0, ctx->r1) = ctx->r14;
    // 0x801CE380: jal         0x8003521C
    // 0x801CE384: addiu       $a0, $a0, -0x2770
    ctx->r4 = ADD32(ctx->r4, -0X2770);
    func_8003521C_35E1C(rdram, ctx);
        goto after_14;
    // 0x801CE384: addiu       $a0, $a0, -0x2770
    ctx->r4 = ADD32(ctx->r4, -0X2770);
    after_14:
    // 0x801CE388: b           L_801CE3A8
    // 0x801CE38C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CE3A8;
    // 0x801CE38C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CE390:
    // 0x801CE390: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
L_801CE394:
    // 0x801CE394: beq         $t7, $zero, L_801CE3A4
    if (ctx->r15 == 0) {
        // 0x801CE398: lui         $a0, 0x801D
        ctx->r4 = S32(0X801D << 16);
            goto L_801CE3A4;
    }
    // 0x801CE398: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CE39C: jal         0x8003521C
    // 0x801CE3A0: addiu       $a0, $a0, -0x2898
    ctx->r4 = ADD32(ctx->r4, -0X2898);
    func_8003521C_35E1C(rdram, ctx);
        goto after_15;
    // 0x801CE3A0: addiu       $a0, $a0, -0x2898
    ctx->r4 = ADD32(ctx->r4, -0X2898);
    after_15:
L_801CE3A4:
    // 0x801CE3A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CE3A8:
    // 0x801CE3A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CE3AC: jr          $ra
    // 0x801CE3B0: nop

    TRACE_RETURN()
    return;
    // 0x801CE3B0: nop

;}
RECOMP_FUNC void func_801CCDCC_65FC7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCDCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCDD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCDD4: jal         0x801CCCE8
    // 0x801CCDD8: nop

    func_801CCCE8_65FB98(rdram, ctx);
        goto after_0;
    // 0x801CCDD8: nop

    after_0:
    // 0x801CCDDC: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CCDE0: lw          $v0, -0x66D0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X66D0);
    // 0x801CCDE4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CCDE8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CCDEC: andi        $t6, $v0, 0x800
    ctx->r14 = ctx->r2 & 0X800;
    // 0x801CCDF0: beq         $t6, $zero, L_801CCDFC
    if (ctx->r14 == 0) {
        // 0x801CCDF4: andi        $t7, $v0, 0x400
        ctx->r15 = ctx->r2 & 0X400;
            goto L_801CCDFC;
    }
    // 0x801CCDF4: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
    // 0x801CCDF8: sw          $zero, -0x66EC($at)
    MEM_W(-0X66EC, ctx->r1) = 0;
L_801CCDFC:
    // 0x801CCDFC: beq         $t7, $zero, L_801CCE08
    if (ctx->r15 == 0) {
        // 0x801CCE00: lui         $at, 0x801F
        ctx->r1 = S32(0X801F << 16);
            goto L_801CCE08;
    }
    // 0x801CCE00: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CCE04: sw          $t8, -0x66EC($at)
    MEM_W(-0X66EC, ctx->r1) = ctx->r24;
L_801CCE08:
    // 0x801CCE08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CCE0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CCE10: jr          $ra
    // 0x801CCE14: nop

    TRACE_RETURN()
    return;
    // 0x801CCE14: nop

;}
RECOMP_FUNC void func_801CC5A8_65F458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC5A8: beq         $a0, $zero, L_801CC5C0
    if (ctx->r4 == 0) {
        // 0x801CC5AC: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_801CC5C0;
    }
    // 0x801CC5AC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x801CC5B0: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x801CC5B4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x801CC5B8: lw          $t7, 0x20($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X20);
    // 0x801CC5BC: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
L_801CC5C0:
    // 0x801CC5C0: jr          $ra
    // 0x801CC5C4: nop

    TRACE_RETURN()
    return;
    // 0x801CC5C4: nop

;}
RECOMP_FUNC void func_801CDACC_66097C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDACC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CDAD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CDAD4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801CDAD8: jal         0x801CD2A8
    // 0x801CDADC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_801CD2A8_660158(rdram, ctx);
        goto after_0;
    // 0x801CDADC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CDAE0: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x801CDAE4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CDAE8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801CDAEC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801CDAF0: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    // 0x801CDAF4: jal         0x801CC5C8
    // 0x801CDAF8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_1;
    // 0x801CDAF8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_1:
    // 0x801CDAFC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801CDB00: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x801CDB04: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CDB08: sw          $v0, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->r2;
    // 0x801CDB0C: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x801CDB10: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x801CDB14: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CDB18: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CDB1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CDB20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CDB24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CDB28: jal         0x801CC56C
    // 0x801CDB2C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_2;
    // 0x801CDB2C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x801CDB30: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x801CDB34: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CDB38: lw          $t0, 0x331C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X331C);
    // 0x801CDB3C: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    // 0x801CDB40: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CDB44: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x801CDB48: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801CDB4C: jal         0x801CB6AC
    // 0x801CDB50: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_3;
    // 0x801CDB50: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_3:
    // 0x801CDB54: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CDB58: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801CDB5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CDB60: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x801CDB64: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801CDB68: jal         0x801CB684
    // 0x801CDB6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801CB684_65E534(rdram, ctx);
        goto after_4;
    // 0x801CDB6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x801CDB70: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x801CDB74: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x801CDB78: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CDB7C: addiu       $a0, $a0, -0x2540
    ctx->r4 = ADD32(ctx->r4, -0X2540);
    // 0x801CDB80: jal         0x8003521C
    // 0x801CDB84: sw          $t2, 0x50($t3)
    MEM_W(0X50, ctx->r11) = ctx->r10;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801CDB84: sw          $t2, 0x50($t3)
    MEM_W(0X50, ctx->r11) = ctx->r10;
    after_5:
    // 0x801CDB88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CDB8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801CDB90: jr          $ra
    // 0x801CDB94: nop

    TRACE_RETURN()
    return;
    // 0x801CDB94: nop

;}
RECOMP_FUNC void func_801CBAC8_65E978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBAC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CBACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBAD0: jal         0x80010374
    // 0x801CBAD4: lw          $a0, 0x78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78);
    func_80010374_10F74(rdram, ctx);
        goto after_0;
    // 0x801CBAD4: lw          $a0, 0x78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78);
    after_0:
    // 0x801CBAD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CBADC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CBAE0: jr          $ra
    // 0x801CBAE4: nop

    TRACE_RETURN()
    return;
    // 0x801CBAE4: nop

;}
RECOMP_FUNC void func_801CCE18_65FCC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCE18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCE1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCE20: jal         0x801CCCE8
    // 0x801CCE24: nop

    func_801CCCE8_65FB98(rdram, ctx);
        goto after_0;
    // 0x801CCE24: nop

    after_0:
    // 0x801CCE28: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CCE2C: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CCE30: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801CCE34: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801CCE38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801CCE3C: lh          $t7, -0x4F82($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X4F82);
    // 0x801CCE40: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CCE44: addiu       $a1, $a1, -0x66EC
    ctx->r5 = ADD32(ctx->r5, -0X66EC);
    // 0x801CCE48: sw          $t7, -0x66E0($at)
    MEM_W(-0X66E0, ctx->r1) = ctx->r15;
    // 0x801CCE4C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x801CCE50: addiu       $t8, $a0, -0x2
    ctx->r24 = ADD32(ctx->r4, -0X2);
    // 0x801CCE54: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x801CCE58: beq         $at, $zero, L_801CCFF4
    if (ctx->r1 == 0) {
        // 0x801CCE5C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_801CCFF4;
    }
    // 0x801CCE5C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801CCE60: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCE64: addu        $at, $at, $t8
    gpr jr_addend_801CCE6C = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801CCE68: lw          $t8, 0x477C($at)
    ctx->r24 = ADD32(ctx->r1, 0X477C);
    // 0x801CCE6C: jr          $t8
    // 0x801CCE70: nop

    switch (jr_addend_801CCE6C >> 2) {
        case 0: goto L_801CCE74; break;
        case 1: goto L_801CCE74; break;
        case 2: goto L_801CCEF4; break;
        case 3: goto L_801CCF88; break;
        case 4: goto L_801CCFC0; break;
        default: switch_error(__func__, 0x801CCE6C, 0x801D477C);
    }
    // 0x801CCE70: nop

L_801CCE74:
    // 0x801CCE74: lui         $v1, 0x801F
    ctx->r3 = S32(0X801F << 16);
    // 0x801CCE78: lw          $v1, -0x66D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X66D0);
    // 0x801CCE7C: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CCE80: andi        $t9, $v1, 0x400
    ctx->r25 = ctx->r3 & 0X400;
    // 0x801CCE84: beq         $t9, $zero, L_801CCEBC
    if (ctx->r25 == 0) {
        // 0x801CCE88: andi        $t2, $v1, 0x800
        ctx->r10 = ctx->r3 & 0X800;
            goto L_801CCEBC;
    }
    // 0x801CCE88: andi        $t2, $v1, 0x800
    ctx->r10 = ctx->r3 & 0X800;
    // 0x801CCE8C: lw          $v0, -0x66C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X66C8);
    // 0x801CCE90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CCE94: addiu       $t1, $a0, 0x1
    ctx->r9 = ADD32(ctx->r4, 0X1);
    // 0x801CCE98: beq         $v0, $at, L_801CCEB0
    if (ctx->r2 == ctx->r1) {
        // 0x801CCE9C: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_801CCEB0;
    }
    // 0x801CCE9C: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x801CCEA0: bne         $at, $zero, L_801CCEBC
    if (ctx->r1 != 0) {
        // 0x801CCEA4: andi        $t0, $v0, 0x3
        ctx->r8 = ctx->r2 & 0X3;
            goto L_801CCEBC;
    }
    // 0x801CCEA4: andi        $t0, $v0, 0x3
    ctx->r8 = ctx->r2 & 0X3;
    // 0x801CCEA8: bne         $t0, $zero, L_801CCEBC
    if (ctx->r8 != 0) {
        // 0x801CCEAC: nop
    
            goto L_801CCEBC;
    }
    // 0x801CCEAC: nop

L_801CCEB0:
    // 0x801CCEB0: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x801CCEB4: b           L_801CCFF4
    // 0x801CCEB8: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
        goto L_801CCFF4;
    // 0x801CCEB8: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
L_801CCEBC:
    // 0x801CCEBC: beq         $t2, $zero, L_801CCFF4
    if (ctx->r10 == 0) {
        // 0x801CCEC0: lui         $v0, 0x801F
        ctx->r2 = S32(0X801F << 16);
            goto L_801CCFF4;
    }
    // 0x801CCEC0: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CCEC4: lw          $v0, -0x66C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X66C8);
    // 0x801CCEC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CCECC: addiu       $t4, $a0, -0x1
    ctx->r12 = ADD32(ctx->r4, -0X1);
    // 0x801CCED0: beq         $v0, $at, L_801CCEE8
    if (ctx->r2 == ctx->r1) {
        // 0x801CCED4: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_801CCEE8;
    }
    // 0x801CCED4: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x801CCED8: bne         $at, $zero, L_801CCFF4
    if (ctx->r1 != 0) {
        // 0x801CCEDC: andi        $t3, $v0, 0x3
        ctx->r11 = ctx->r2 & 0X3;
            goto L_801CCFF4;
    }
    // 0x801CCEDC: andi        $t3, $v0, 0x3
    ctx->r11 = ctx->r2 & 0X3;
    // 0x801CCEE0: bnel        $t3, $zero, L_801CCFF8
    if (ctx->r11 != 0) {
        // 0x801CCEE4: slti        $at, $a0, 0x2
        ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_801CCFF8;
    }
    goto skip_0;
    // 0x801CCEE4: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    skip_0:
L_801CCEE8:
    // 0x801CCEE8: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x801CCEEC: b           L_801CCFF4
    // 0x801CCEF0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
        goto L_801CCFF4;
    // 0x801CCEF0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
L_801CCEF4:
    // 0x801CCEF4: lui         $v1, 0x801F
    ctx->r3 = S32(0X801F << 16);
    // 0x801CCEF8: lw          $v1, -0x66D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X66D0);
    // 0x801CCEFC: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CCF00: andi        $t5, $v1, 0x400
    ctx->r13 = ctx->r3 & 0X400;
    // 0x801CCF04: beq         $t5, $zero, L_801CCF50
    if (ctx->r13 == 0) {
        // 0x801CCF08: andi        $t0, $v1, 0x800
        ctx->r8 = ctx->r3 & 0X800;
            goto L_801CCF50;
    }
    // 0x801CCF08: andi        $t0, $v1, 0x800
    ctx->r8 = ctx->r3 & 0X800;
    // 0x801CCF0C: lw          $v0, -0x66C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X66C8);
    // 0x801CCF10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CCF14: andi        $t7, $v1, 0x100
    ctx->r15 = ctx->r3 & 0X100;
    // 0x801CCF18: beq         $v0, $at, L_801CCF30
    if (ctx->r2 == ctx->r1) {
        // 0x801CCF1C: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_801CCF30;
    }
    // 0x801CCF1C: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x801CCF20: bne         $at, $zero, L_801CCF50
    if (ctx->r1 != 0) {
        // 0x801CCF24: andi        $t6, $v0, 0x3
        ctx->r14 = ctx->r2 & 0X3;
            goto L_801CCF50;
    }
    // 0x801CCF24: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x801CCF28: bne         $t6, $zero, L_801CCF50
    if (ctx->r14 != 0) {
        // 0x801CCF2C: nop
    
            goto L_801CCF50;
    }
    // 0x801CCF2C: nop

L_801CCF30:
    // 0x801CCF30: beq         $t7, $zero, L_801CCF44
    if (ctx->r15 == 0) {
        // 0x801CCF34: addiu       $t9, $zero, 0x5
        ctx->r25 = ADD32(0, 0X5);
            goto L_801CCF44;
    }
    // 0x801CCF34: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x801CCF38: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x801CCF3C: b           L_801CCF48
    // 0x801CCF40: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
        goto L_801CCF48;
    // 0x801CCF40: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
L_801CCF44:
    // 0x801CCF44: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
L_801CCF48:
    // 0x801CCF48: b           L_801CCFF4
    // 0x801CCF4C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
        goto L_801CCFF4;
    // 0x801CCF4C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
L_801CCF50:
    // 0x801CCF50: beq         $t0, $zero, L_801CCFF4
    if (ctx->r8 == 0) {
        // 0x801CCF54: lui         $v0, 0x801F
        ctx->r2 = S32(0X801F << 16);
            goto L_801CCFF4;
    }
    // 0x801CCF54: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CCF58: lw          $v0, -0x66C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X66C8);
    // 0x801CCF5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CCF60: addiu       $t2, $a0, -0x1
    ctx->r10 = ADD32(ctx->r4, -0X1);
    // 0x801CCF64: beq         $v0, $at, L_801CCF7C
    if (ctx->r2 == ctx->r1) {
        // 0x801CCF68: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_801CCF7C;
    }
    // 0x801CCF68: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x801CCF6C: bne         $at, $zero, L_801CCFF4
    if (ctx->r1 != 0) {
        // 0x801CCF70: andi        $t1, $v0, 0x3
        ctx->r9 = ctx->r2 & 0X3;
            goto L_801CCFF4;
    }
    // 0x801CCF70: andi        $t1, $v0, 0x3
    ctx->r9 = ctx->r2 & 0X3;
    // 0x801CCF74: bnel        $t1, $zero, L_801CCFF8
    if (ctx->r9 != 0) {
        // 0x801CCF78: slti        $at, $a0, 0x2
        ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_801CCFF8;
    }
    goto skip_1;
    // 0x801CCF78: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    skip_1:
L_801CCF7C:
    // 0x801CCF7C: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x801CCF80: b           L_801CCFF4
    // 0x801CCF84: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
        goto L_801CCFF4;
    // 0x801CCF84: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
L_801CCF88:
    // 0x801CCF88: lui         $v1, 0x801F
    ctx->r3 = S32(0X801F << 16);
    // 0x801CCF8C: lw          $v1, -0x66D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X66D0);
    // 0x801CCF90: addiu       $t4, $a0, -0x1
    ctx->r12 = ADD32(ctx->r4, -0X1);
    // 0x801CCF94: andi        $t3, $v1, 0x800
    ctx->r11 = ctx->r3 & 0X800;
    // 0x801CCF98: beq         $t3, $zero, L_801CCFAC
    if (ctx->r11 == 0) {
        // 0x801CCF9C: andi        $t5, $v1, 0x100
        ctx->r13 = ctx->r3 & 0X100;
            goto L_801CCFAC;
    }
    // 0x801CCF9C: andi        $t5, $v1, 0x100
    ctx->r13 = ctx->r3 & 0X100;
    // 0x801CCFA0: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x801CCFA4: b           L_801CCFF4
    // 0x801CCFA8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
        goto L_801CCFF4;
    // 0x801CCFA8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
L_801CCFAC:
    // 0x801CCFAC: beq         $t5, $zero, L_801CCFF4
    if (ctx->r13 == 0) {
        // 0x801CCFB0: addiu       $t6, $a0, 0x1
        ctx->r14 = ADD32(ctx->r4, 0X1);
            goto L_801CCFF4;
    }
    // 0x801CCFB0: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x801CCFB4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x801CCFB8: b           L_801CCFF4
    // 0x801CCFBC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
        goto L_801CCFF4;
    // 0x801CCFBC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_801CCFC0:
    // 0x801CCFC0: lui         $v1, 0x801F
    ctx->r3 = S32(0X801F << 16);
    // 0x801CCFC4: lw          $v1, -0x66D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X66D0);
    // 0x801CCFC8: addiu       $t8, $a0, -0x2
    ctx->r24 = ADD32(ctx->r4, -0X2);
    // 0x801CCFCC: andi        $t7, $v1, 0x800
    ctx->r15 = ctx->r3 & 0X800;
    // 0x801CCFD0: beq         $t7, $zero, L_801CCFE4
    if (ctx->r15 == 0) {
        // 0x801CCFD4: andi        $t9, $v1, 0x200
        ctx->r25 = ctx->r3 & 0X200;
            goto L_801CCFE4;
    }
    // 0x801CCFD4: andi        $t9, $v1, 0x200
    ctx->r25 = ctx->r3 & 0X200;
    // 0x801CCFD8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x801CCFDC: b           L_801CCFF4
    // 0x801CCFE0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
        goto L_801CCFF4;
    // 0x801CCFE0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_801CCFE4:
    // 0x801CCFE4: beq         $t9, $zero, L_801CCFF4
    if (ctx->r25 == 0) {
        // 0x801CCFE8: addiu       $t0, $a0, -0x1
        ctx->r8 = ADD32(ctx->r4, -0X1);
            goto L_801CCFF4;
    }
    // 0x801CCFE8: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
    // 0x801CCFEC: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x801CCFF0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
L_801CCFF4:
    // 0x801CCFF4: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
L_801CCFF8:
    // 0x801CCFF8: beq         $at, $zero, L_801CD008
    if (ctx->r1 == 0) {
        // 0x801CCFFC: addiu       $t2, $zero, 0x6
        ctx->r10 = ADD32(0, 0X6);
            goto L_801CD008;
    }
    // 0x801CCFFC: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x801CD000: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x801CD004: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
L_801CD008:
    // 0x801CD008: slti        $at, $a0, 0x7
    ctx->r1 = SIGNED(ctx->r4) < 0X7 ? 1 : 0;
    // 0x801CD00C: bnel        $at, $zero, L_801CD01C
    if (ctx->r1 != 0) {
        // 0x801CD010: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CD01C;
    }
    goto skip_2;
    // 0x801CD010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x801CD014: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x801CD018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CD01C:
    // 0x801CD01C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CD020: jr          $ra
    // 0x801CD024: nop

    TRACE_RETURN()
    return;
    // 0x801CD024: nop

;}
RECOMP_FUNC void func_801D0258_663108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0258: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801D025C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801D0260: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D0264: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x801D0268: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x801D026C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D0270: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x801D0274: lui         $a0, 0x802
    ctx->r4 = S32(0X802 << 16);
    // 0x801D0278: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x801D027C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801D0280: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x801D0284: addiu       $a0, $a0, 0x5800
    ctx->r4 = ADD32(ctx->r4, 0X5800);
    // 0x801D0288: jal         0x80014840
    // 0x801D028C: addiu       $a1, $zero, 0x4CE
    ctx->r5 = ADD32(0, 0X4CE);
    func_80014840_15440(rdram, ctx);
        goto after_0;
    // 0x801D028C: addiu       $a1, $zero, 0x4CE
    ctx->r5 = ADD32(0, 0X4CE);
    after_0:
    // 0x801D0290: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x801D0294: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x801D0298: lw          $t7, -0x717C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X717C);
    // 0x801D029C: sll         $t6, $t0, 5
    ctx->r14 = S32(ctx->r8 << 5);
    // 0x801D02A0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801D02A4: addu        $v1, $t7, $t6
    ctx->r3 = ADD32(ctx->r15, ctx->r14);
    // 0x801D02A8: addiu       $t8, $v1, 0x1BE
    ctx->r24 = ADD32(ctx->r3, 0X1BE);
    // 0x801D02AC: addiu       $t9, $v1, 0x1BA
    ctx->r25 = ADD32(ctx->r3, 0X1BA);
    // 0x801D02B0: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x801D02B4: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x801D02B8: lw          $t1, 0x1B0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X1B0);
    // 0x801D02BC: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x801D02C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D02C4: srl         $t2, $t1, 8
    ctx->r10 = S32(U32(ctx->r9) >> 8);
    // 0x801D02C8: jal         0x801CFF08
    // 0x801D02CC: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    func_801CFF08_662DB8(rdram, ctx);
        goto after_1;
    // 0x801D02CC: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    after_1:
    // 0x801D02D0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x801D02D4: addiu       $at, $zero, 0xC0
    ctx->r1 = ADD32(0, 0XC0);
    // 0x801D02D8: addiu       $a1, $s3, -0xE
    ctx->r5 = ADD32(ctx->r19, -0XE);
    // 0x801D02DC: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x801D02E0: mfhi        $s0
    ctx->r16 = hi;
    // 0x801D02E4: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x801D02E8: subu        $t4, $t4, $s0
    ctx->r12 = SUB32(ctx->r12, ctx->r16);
    // 0x801D02EC: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x801D02F0: addu        $t4, $t4, $s0
    ctx->r12 = ADD32(ctx->r12, ctx->r16);
    // 0x801D02F4: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x801D02F8: addu        $t6, $t5, $s1
    ctx->r14 = ADD32(ctx->r13, ctx->r17);
    // 0x801D02FC: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x801D0300: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D0304: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801D0308: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801D030C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D0310: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x801D0314: jal         0x801CFF30
    // 0x801D0318: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_801CFF30_662DE0(rdram, ctx);
        goto after_2;
    // 0x801D0318: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_2:
    // 0x801D031C: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x801D0320: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x801D0324: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801D0328: addu        $t8, $t8, $s0
    ctx->r24 = ADD32(ctx->r24, ctx->r16);
    // 0x801D032C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801D0330: addiu       $t9, $t8, 0x7D0
    ctx->r25 = ADD32(ctx->r24, 0X7D0);
    // 0x801D0334: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x801D0338: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x801D033C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x801D0340: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801D0344: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801D0348: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D034C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801D0350: addiu       $a2, $s2, 0xA
    ctx->r6 = ADD32(ctx->r18, 0XA);
    // 0x801D0354: jal         0x801CFF30
    // 0x801D0358: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_801CFF30_662DE0(rdram, ctx);
        goto after_3;
    // 0x801D0358: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_3:
    // 0x801D035C: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x801D0360: subu        $t4, $t4, $s0
    ctx->r12 = SUB32(ctx->r12, ctx->r16);
    // 0x801D0364: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x801D0368: addu        $t4, $t4, $s0
    ctx->r12 = ADD32(ctx->r12, ctx->r16);
    // 0x801D036C: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x801D0370: addiu       $t5, $t4, 0xFA0
    ctx->r13 = ADD32(ctx->r12, 0XFA0);
    // 0x801D0374: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x801D0378: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x801D037C: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x801D0380: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D0384: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D0388: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D038C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801D0390: addiu       $a2, $s2, 0x14
    ctx->r6 = ADD32(ctx->r18, 0X14);
    // 0x801D0394: jal         0x801CFF30
    // 0x801D0398: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_801CFF30_662DE0(rdram, ctx);
        goto after_4;
    // 0x801D0398: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_4:
    // 0x801D039C: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x801D03A0: subu        $t9, $t9, $s0
    ctx->r25 = SUB32(ctx->r25, ctx->r16);
    // 0x801D03A4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801D03A8: addu        $t9, $t9, $s0
    ctx->r25 = ADD32(ctx->r25, ctx->r16);
    // 0x801D03AC: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801D03B0: addiu       $t1, $t9, 0x1770
    ctx->r9 = ADD32(ctx->r25, 0X1770);
    // 0x801D03B4: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x801D03B8: addu        $t3, $t2, $s1
    ctx->r11 = ADD32(ctx->r10, ctx->r17);
    // 0x801D03BC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801D03C0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D03C4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801D03C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D03CC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801D03D0: addiu       $a2, $s2, 0x1E
    ctx->r6 = ADD32(ctx->r18, 0X1E);
    // 0x801D03D4: jal         0x801CFF30
    // 0x801D03D8: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_801CFF30_662DE0(rdram, ctx);
        goto after_5;
    // 0x801D03D8: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_5:
    // 0x801D03DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D03E0: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x801D03E4: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x801D03E8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801D03EC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x801D03F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801D03F4: jal         0x80010980
    // 0x801D03F8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80010980_11580(rdram, ctx);
        goto after_6;
    // 0x801D03F8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_6:
    // 0x801D03FC: jal         0x80010B60
    // 0x801D0400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80010B60_11760(rdram, ctx);
        goto after_7;
    // 0x801D0400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801D0404: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x801D0408: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x801D040C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D0410: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D0414: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x801D0418: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x801D041C: jal         0x8001110C
    // 0x801D0420: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    func_8001110C_11D0C(rdram, ctx);
        goto after_8;
    // 0x801D0420: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    after_8:
    // 0x801D0424: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x801D0428: lw          $t5, -0x717C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X717C);
    // 0x801D042C: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x801D0430: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D0434: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D0438: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x801D043C: lbu         $t8, 0x3B0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X3B0);
    // 0x801D0440: addiu       $a1, $s3, 0x28
    ctx->r5 = ADD32(ctx->r19, 0X28);
    // 0x801D0444: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x801D0448: bne         $t8, $zero, L_801D04F8
    if (ctx->r24 != 0) {
        // 0x801D044C: lw          $a3, 0x44($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X44);
            goto L_801D04F8;
    }
    // 0x801D044C: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x801D0450: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x801D0454: jal         0x8001110C
    // 0x801D0458: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8001110C_11D0C(rdram, ctx);
        goto after_9;
    // 0x801D0458: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_9:
    // 0x801D045C: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801D0460: lw          $a3, 0x3420($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3420);
    // 0x801D0464: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D0468: addiu       $a1, $s3, 0x46
    ctx->r5 = ADD32(ctx->r19, 0X46);
    // 0x801D046C: jal         0x80010E9C
    // 0x801D0470: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_80010E9C_11A9C(rdram, ctx);
        goto after_10;
    // 0x801D0470: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_10:
    // 0x801D0474: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D0478: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x801D047C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x801D0480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D0484: jal         0x80010980
    // 0x801D0488: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80010980_11580(rdram, ctx);
        goto after_11;
    // 0x801D0488: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_11:
    // 0x801D048C: addiu       $s1, $s2, 0x10
    ctx->r17 = ADD32(ctx->r18, 0X10);
    // 0x801D0490: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x801D0494: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801D0498: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801D049C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D04A0: addiu       $a1, $s3, 0x10
    ctx->r5 = ADD32(ctx->r19, 0X10);
    // 0x801D04A4: jal         0x801D1480
    // 0x801D04A8: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    func_801D1480_664330(rdram, ctx);
        goto after_12;
    // 0x801D04A8: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    after_12:
    // 0x801D04AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D04B0: addiu       $a1, $s3, 0x80
    ctx->r5 = ADD32(ctx->r19, 0X80);
    // 0x801D04B4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801D04B8: jal         0x80010C6C
    // 0x801D04BC: addiu       $a3, $zero, 0x2E
    ctx->r7 = ADD32(0, 0X2E);
    func_80010C6C_1186C(rdram, ctx);
        goto after_13;
    // 0x801D04BC: addiu       $a3, $zero, 0x2E
    ctx->r7 = ADD32(0, 0X2E);
    after_13:
    // 0x801D04C0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D04C4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x801D04C8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x801D04CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D04D0: jal         0x80010980
    // 0x801D04D4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80010980_11580(rdram, ctx);
        goto after_14;
    // 0x801D04D4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_14:
    // 0x801D04D8: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x801D04DC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801D04E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D04E4: addiu       $a1, $s3, 0x83
    ctx->r5 = ADD32(ctx->r19, 0X83);
    // 0x801D04E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801D04EC: jal         0x801D1480
    // 0x801D04F0: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    func_801D1480_664330(rdram, ctx);
        goto after_15;
    // 0x801D04F0: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    after_15:
    // 0x801D04F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_801D04F8:
    // 0x801D04F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801D04FC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x801D0500: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801D0504: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801D0508: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x801D050C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x801D0510: jr          $ra
    // 0x801D0514: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801D0514: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801D0518_6633C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0518: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D051C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D0520: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x801D0524: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x801D0528: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x801D052C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x801D0530: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801D0534: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801D0538: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801D053C: lw          $t6, 0x80($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X80);
    // 0x801D0540: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D0544: addiu       $s4, $a0, 0x5C
    ctx->r20 = ADD32(ctx->r4, 0X5C);
    // 0x801D0548: beql        $t6, $zero, L_801D05B0
    if (ctx->r14 == 0) {
        // 0x801D054C: addiu       $s4, $a2, 0x5C
        ctx->r20 = ADD32(ctx->r6, 0X5C);
            goto L_801D05B0;
    }
    goto skip_0;
    // 0x801D054C: addiu       $s4, $a2, 0x5C
    ctx->r20 = ADD32(ctx->r6, 0X5C);
    skip_0:
    // 0x801D0550: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x801D0554: bgez        $v1, L_801D0564
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801D0558: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_801D0564;
    }
    // 0x801D0558: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x801D055C: b           L_801D0564
    // 0x801D0560: negu        $a1, $v1
    ctx->r5 = SUB32(0, ctx->r3);
        goto L_801D0564;
    // 0x801D0560: negu        $a1, $v1
    ctx->r5 = SUB32(0, ctx->r3);
L_801D0564:
    // 0x801D0564: lw          $v0, 0x20($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X20);
    // 0x801D0568: bgez        $v0, L_801D0578
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D056C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801D0578;
    }
    // 0x801D056C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D0570: b           L_801D0578
    // 0x801D0574: negu        $a0, $v0
    ctx->r4 = SUB32(0, ctx->r2);
        goto L_801D0578;
    // 0x801D0574: negu        $a0, $v0
    ctx->r4 = SUB32(0, ctx->r2);
L_801D0578:
    // 0x801D0578: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D057C: bnel        $at, $zero, L_801D05A0
    if (ctx->r1 != 0) {
        // 0x801D0580: lw          $t0, 0x1C($s4)
        ctx->r8 = MEM_W(ctx->r20, 0X1C);
            goto L_801D05A0;
    }
    goto skip_1;
    // 0x801D0580: lw          $t0, 0x1C($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X1C);
    skip_1:
    // 0x801D0584: lw          $t7, 0x1C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X1C);
    // 0x801D0588: subu        $t9, $v1, $v0
    ctx->r25 = SUB32(ctx->r3, ctx->r2);
    // 0x801D058C: sw          $t9, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->r25;
    // 0x801D0590: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x801D0594: b           L_801D05AC
    // 0x801D0598: sw          $t8, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->r24;
        goto L_801D05AC;
    // 0x801D0598: sw          $t8, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->r24;
    // 0x801D059C: lw          $t0, 0x1C($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X1C);
L_801D05A0:
    // 0x801D05A0: sw          $zero, 0x24($s4)
    MEM_W(0X24, ctx->r20) = 0;
    // 0x801D05A4: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x801D05A8: sw          $t1, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->r9;
L_801D05AC:
    // 0x801D05AC: addiu       $s4, $a2, 0x5C
    ctx->r20 = ADD32(ctx->r6, 0X5C);
L_801D05B0:
    // 0x801D05B0: lw          $t2, 0x1C($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X1C);
    // 0x801D05B4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801D05B8: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x801D05BC: sw          $t3, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->r11;
    // 0x801D05C0: andi        $t5, $t3, 0x1FF
    ctx->r13 = ctx->r11 & 0X1FF;
    // 0x801D05C4: jal         0x8001136C
    // 0x801D05C8: sw          $t5, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->r13;
    func_8001136C_11F6C(rdram, ctx);
        goto after_0;
    // 0x801D05C8: sw          $t5, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->r13;
    after_0:
    // 0x801D05CC: lui         $s3, 0x801D
    ctx->r19 = S32(0X801D << 16);
    // 0x801D05D0: addiu       $s3, $s3, 0x4CE8
    ctx->r19 = ADD32(ctx->r19, 0X4CE8);
    // 0x801D05D4: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x801D05D8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x801D05DC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801D05E0: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x801D05E4: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x801D05E8: lw          $v1, 0x1C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X1C);
    // 0x801D05EC: lw          $t9, 0x14($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X14);
    // 0x801D05F0: srl         $s0, $v1, 5
    ctx->r16 = S32(U32(ctx->r3) >> 5);
    // 0x801D05F4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x801D05F8: andi        $t0, $v1, 0x1F
    ctx->r8 = ctx->r3 & 0X1F;
    // 0x801D05FC: andi        $t8, $s0, 0xF
    ctx->r24 = ctx->r16 & 0XF;
    // 0x801D0600: subu        $s1, $t9, $t0
    ctx->r17 = SUB32(ctx->r25, ctx->r8);
    // 0x801D0604: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x801D0608: addiu       $s1, $s1, -0xC
    ctx->r17 = ADD32(ctx->r17, -0XC);
L_801D060C:
    // 0x801D060C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x801D0610: lw          $a1, 0x10($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X10);
    // 0x801D0614: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801D0618: jal         0x801D0258
    // 0x801D061C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_801D0258_663108(rdram, ctx);
        goto after_1;
    // 0x801D061C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_1:
    // 0x801D0620: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801D0624: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801D0628: andi        $t1, $s0, 0xF
    ctx->r9 = ctx->r16 & 0XF;
    // 0x801D062C: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x801D0630: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x801D0634: bne         $s2, $s5, L_801D060C
    if (ctx->r18 != ctx->r21) {
        // 0x801D0638: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_801D060C;
    }
    // 0x801D0638: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x801D063C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x801D0640: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x801D0644: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
    // 0x801D0648: lw          $v0, 0x30($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X30);
    // 0x801D064C: lui         $v1, 0x8FFF
    ctx->r3 = S32(0X8FFF << 16);
    // 0x801D0650: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x801D0654: subu        $t6, $v1, $v0
    ctx->r14 = SUB32(ctx->r3, ctx->r2);
    // 0x801D0658: and         $t7, $t3, $t6
    ctx->r15 = ctx->r11 & ctx->r14;
    // 0x801D065C: and         $a1, $t7, $v1
    ctx->r5 = ctx->r15 & ctx->r3;
    // 0x801D0660: jal         0x80040620
    // 0x801D0664: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x801D0664: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    after_2:
    // 0x801D0668: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801D066C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801D0670: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801D0674: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x801D0678: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x801D067C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x801D0680: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x801D0684: jr          $ra
    // 0x801D0688: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801D0688: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801D1ED0_664D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1ED0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D1ED4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801D1ED8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D1EDC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D1EE0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801D1EE4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801D1EE8: jal         0x80010358
    // 0x801D1EEC: lw          $a0, 0x90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X90);
    func_80010358_10F58(rdram, ctx);
        goto after_0;
    // 0x801D1EEC: lw          $a0, 0x90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X90);
    after_0:
    // 0x801D1EF0: addiu       $s1, $s0, 0x5C
    ctx->r17 = ADD32(ctx->r16, 0X5C);
    // 0x801D1EF4: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x801D1EF8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801D1EFC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D1F00: beq         $v1, $zero, L_801D1F38
    if (ctx->r3 == 0) {
        // 0x801D1F04: addiu       $a3, $zero, 0x6
        ctx->r7 = ADD32(0, 0X6);
            goto L_801D1F38;
    }
    // 0x801D1F04: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801D1F08: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x801D1F0C: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801D1F10: lw          $t7, -0x6690($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X6690);
    // 0x801D1F14: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x801D1F18: addiu       $t8, $zero, 0x1A
    ctx->r24 = ADD32(0, 0X1A);
    // 0x801D1F1C: addiu       $t9, $zero, 0x34
    ctx->r25 = ADD32(0, 0X34);
    // 0x801D1F20: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801D1F24: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801D1F28: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D1F2C: jal         0x800106F0
    // 0x801D1F30: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_1;
    // 0x801D1F30: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_1:
    // 0x801D1F34: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
L_801D1F38:
    // 0x801D1F38: slti        $at, $v1, 0x44
    ctx->r1 = SIGNED(ctx->r3) < 0X44 ? 1 : 0;
    // 0x801D1F3C: beq         $at, $zero, L_801D1F74
    if (ctx->r1 == 0) {
        // 0x801D1F40: addiu       $a1, $zero, 0xD2
        ctx->r5 = ADD32(0, 0XD2);
            goto L_801D1F74;
    }
    // 0x801D1F40: addiu       $a1, $zero, 0xD2
    ctx->r5 = ADD32(0, 0XD2);
    // 0x801D1F44: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x801D1F48: lui         $t1, 0x801F
    ctx->r9 = S32(0X801F << 16);
    // 0x801D1F4C: lw          $t1, -0x6690($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6690);
    // 0x801D1F50: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x801D1F54: addiu       $t2, $zero, 0x34
    ctx->r10 = ADD32(0, 0X34);
    // 0x801D1F58: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x801D1F5C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801D1F60: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D1F64: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D1F68: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801D1F6C: jal         0x800106F0
    // 0x801D1F70: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_800106F0_112F0(rdram, ctx);
        goto after_2;
    // 0x801D1F70: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_2:
L_801D1F74:
    // 0x801D1F74: jal         0x800105AC
    // 0x801D1F78: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    func_800105AC_111AC(rdram, ctx);
        goto after_3;
    // 0x801D1F78: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    after_3:
    // 0x801D1F7C: jal         0x8001136C
    // 0x801D1F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001136C_11F6C(rdram, ctx);
        goto after_4;
    // 0x801D1F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801D1F84: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x801D1F88: addiu       $s0, $s0, 0x4CE8
    ctx->r16 = ADD32(ctx->r16, 0X4CE8);
    // 0x801D1F8C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x801D1F90: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x801D1F94: sw          $t3, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r11;
    // 0x801D1F98: lw          $a3, 0x2C($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X2C);
    // 0x801D1F9C: lw          $a2, 0x28($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X28);
    // 0x801D1FA0: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x801D1FA4: jal         0x80010980
    // 0x801D1FA8: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    func_80010980_11580(rdram, ctx);
        goto after_5;
    // 0x801D1FA8: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    after_5:
    // 0x801D1FAC: jal         0x80010B60
    // 0x801D1FB0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_80010B60_11760(rdram, ctx);
        goto after_6;
    // 0x801D1FB0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_6:
    // 0x801D1FB4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D1FB8: lw          $a1, 0x30($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X30);
    // 0x801D1FBC: jal         0x800109A4
    // 0x801D1FC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800109A4_115A4(rdram, ctx);
        goto after_7;
    // 0x801D1FC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x801D1FC4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D1FC8: lw          $t5, 0x1C($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X1C);
    // 0x801D1FCC: lw          $a2, 0x14($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X14);
    // 0x801D1FD0: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x801D1FD4: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x801D1FD8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x801D1FDC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801D1FE0: lui         $t8, 0x801D
    ctx->r24 = S32(0X801D << 16);
    // 0x801D1FE4: addiu       $t8, $t8, 0x3534
    ctx->r24 = ADD32(ctx->r24, 0X3534);
    // 0x801D1FE8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801D1FEC: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x801D1FF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D1FF4: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    // 0x801D1FF8: jal         0x80010E9C
    // 0x801D1FFC: addiu       $a1, $a1, 0x12
    ctx->r5 = ADD32(ctx->r5, 0X12);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_8;
    // 0x801D1FFC: addiu       $a1, $a1, 0x12
    ctx->r5 = ADD32(ctx->r5, 0X12);
    after_8:
    // 0x801D2000: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x801D2004: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D2008: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x801D200C: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x801D2010: lw          $v1, 0x30($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X30);
    // 0x801D2014: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    // 0x801D2018: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x801D201C: subu        $t3, $a2, $v1
    ctx->r11 = SUB32(ctx->r6, ctx->r3);
    // 0x801D2020: and         $t4, $t0, $t3
    ctx->r12 = ctx->r8 & ctx->r11;
    // 0x801D2024: and         $a1, $t4, $a2
    ctx->r5 = ctx->r12 & ctx->r6;
    // 0x801D2028: jal         0x80040620
    // 0x801D202C: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_9;
    // 0x801D202C: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    after_9:
    // 0x801D2030: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801D2034: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801D2038: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801D203C: jr          $ra
    // 0x801D2040: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801D2040: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801CDEF0_660DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDEF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CDEF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CDEF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CDEFC: jal         0x80023394
    // 0x801CDF00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80023394_23F94(rdram, ctx);
        goto after_0;
    // 0x801CDF00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CDF04: beq         $v0, $zero, L_801CDF34
    if (ctx->r2 == 0) {
        // 0x801CDF08: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_801CDF34;
    }
    // 0x801CDF08: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801CDF0C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x801CDF10: beq         $v0, $at, L_801CE05C
    if (ctx->r2 == ctx->r1) {
        // 0x801CDF14: lui         $a0, 0x801D
        ctx->r4 = S32(0X801D << 16);
            goto L_801CE05C;
    }
    // 0x801CDF14: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CDF18: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x801CDF1C: beq         $v0, $at, L_801CE04C
    if (ctx->r2 == ctx->r1) {
        // 0x801CDF20: lui         $a0, 0x801D
        ctx->r4 = S32(0X801D << 16);
            goto L_801CE04C;
    }
    // 0x801CDF20: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CDF24: jal         0x801CE16C
    // 0x801CDF28: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801CE16C_66101C(rdram, ctx);
        goto after_1;
    // 0x801CDF28: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801CDF2C: b           L_801CE08C
    // 0x801CDF30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CE08C;
    // 0x801CDF30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CDF34:
    // 0x801CDF34: lui         $v1, 0x801F
    ctx->r3 = S32(0X801F << 16);
    // 0x801CDF38: addiu       $v1, $v1, -0x69F0
    ctx->r3 = ADD32(ctx->r3, -0X69F0);
    // 0x801CDF3C: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CDF40: addiu       $v0, $v0, 0x32F0
    ctx->r2 = ADD32(ctx->r2, 0X32F0);
    // 0x801CDF44: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801CDF48: or          $t9, $v1, $zero
    ctx->r25 = ctx->r3 | 0;
    // 0x801CDF4C: addiu       $t8, $v1, 0x300
    ctx->r24 = ADD32(ctx->r3, 0X300);
L_801CDF50:
    // 0x801CDF50: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x801CDF54: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x801CDF58: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801CDF5C: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x801CDF60: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x801CDF64: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x801CDF68: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x801CDF6C: bne         $t9, $t8, L_801CDF50
    if (ctx->r25 != ctx->r24) {
        // 0x801CDF70: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_801CDF50;
    }
    // 0x801CDF70: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x801CDF74: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x801CDF78: or          $t3, $v1, $zero
    ctx->r11 = ctx->r3 | 0;
    // 0x801CDF7C: addiu       $t2, $v1, 0x300
    ctx->r10 = ADD32(ctx->r3, 0X300);
    // 0x801CDF80: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x801CDF84: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
L_801CDF88:
    // 0x801CDF88: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x801CDF8C: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x801CDF90: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x801CDF94: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x801CDF98: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x801CDF9C: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x801CDFA0: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x801CDFA4: bne         $t3, $t2, L_801CDF88
    if (ctx->r11 != ctx->r10) {
        // 0x801CDFA8: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_801CDF88;
    }
    // 0x801CDFA8: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x801CDFAC: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x801CDFB0: or          $t8, $v1, $zero
    ctx->r24 = ctx->r3 | 0;
    // 0x801CDFB4: addiu       $t7, $v1, 0x300
    ctx->r15 = ADD32(ctx->r3, 0X300);
    // 0x801CDFB8: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x801CDFBC: lw          $t4, 0x8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X8);
L_801CDFC0:
    // 0x801CDFC0: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801CDFC4: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x801CDFC8: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x801CDFCC: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x801CDFD0: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x801CDFD4: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x801CDFD8: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x801CDFDC: bne         $t8, $t7, L_801CDFC0
    if (ctx->r24 != ctx->r15) {
        // 0x801CDFE0: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_801CDFC0;
    }
    // 0x801CDFE0: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x801CDFE4: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801CDFE8: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x801CDFEC: jal         0x801CCC80
    // 0x801CDFF0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_801CCC80_65FB30(rdram, ctx);
        goto after_2;
    // 0x801CDFF0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_2:
    // 0x801CDFF4: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CDFF8: addiu       $v0, $v0, 0x32F0
    ctx->r2 = ADD32(ctx->r2, 0X32F0);
    // 0x801CDFFC: jal         0x801CCC80
    // 0x801CE000: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    func_801CCC80_65FB30(rdram, ctx);
        goto after_3;
    // 0x801CE000: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    after_3:
    // 0x801CE004: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CE008: addiu       $v0, $v0, 0x32F0
    ctx->r2 = ADD32(ctx->r2, 0X32F0);
    // 0x801CE00C: jal         0x801CCC80
    // 0x801CE010: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    func_801CCC80_65FB30(rdram, ctx);
        goto after_4;
    // 0x801CE010: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    after_4:
    // 0x801CE014: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801CE018: addiu       $a0, $a0, -0x78F0
    ctx->r4 = ADD32(ctx->r4, -0X78F0);
    // 0x801CE01C: jal         0x80023610
    // 0x801CE020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80023610_24210(rdram, ctx);
        goto after_5;
    // 0x801CE020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x801CE024: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801CE028: addiu       $a0, $a0, -0x73F0
    ctx->r4 = ADD32(ctx->r4, -0X73F0);
    // 0x801CE02C: jal         0x80023610
    // 0x801CE030: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80023610_24210(rdram, ctx);
        goto after_6;
    // 0x801CE030: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x801CE034: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801CE038: addiu       $a0, $a0, -0x6EF0
    ctx->r4 = ADD32(ctx->r4, -0X6EF0);
    // 0x801CE03C: jal         0x80023610
    // 0x801CE040: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80023610_24210(rdram, ctx);
        goto after_7;
    // 0x801CE040: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x801CE044: b           L_801CE06C
    // 0x801CE048: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
        goto L_801CE06C;
    // 0x801CE048: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
L_801CE04C:
    // 0x801CE04C: jal         0x8003521C
    // 0x801CE050: addiu       $a0, $a0, -0x26F0
    ctx->r4 = ADD32(ctx->r4, -0X26F0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801CE050: addiu       $a0, $a0, -0x26F0
    ctx->r4 = ADD32(ctx->r4, -0X26F0);
    after_8:
    // 0x801CE054: b           L_801CE08C
    // 0x801CE058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CE08C;
    // 0x801CE058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CE05C:
    // 0x801CE05C: jal         0x8003521C
    // 0x801CE060: addiu       $a0, $a0, -0x25F0
    ctx->r4 = ADD32(ctx->r4, -0X25F0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_9;
    // 0x801CE060: addiu       $a0, $a0, -0x25F0
    ctx->r4 = ADD32(ctx->r4, -0X25F0);
    after_9:
    // 0x801CE064: b           L_801CE08C
    // 0x801CE068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CE08C;
    // 0x801CE068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CE06C:
    // 0x801CE06C: jal         0x8003521C
    // 0x801CE070: addiu       $a0, $a0, -0x10F8
    ctx->r4 = ADD32(ctx->r4, -0X10F8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x801CE070: addiu       $a0, $a0, -0x10F8
    ctx->r4 = ADD32(ctx->r4, -0X10F8);
    after_10:
    // 0x801CE074: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801CE078: lw          $t9, 0xAC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XAC);
    // 0x801CE07C: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x801CE080: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x801CE084: sw          $t6, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r14;
    // 0x801CE088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CE08C:
    // 0x801CE08C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CE090: jr          $ra
    // 0x801CE094: nop

    TRACE_RETURN()
    return;
    // 0x801CE094: nop

;}
RECOMP_FUNC void func_801CE588_661438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE588: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801CE58C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801CE590: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801CE594: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801CE598: jal         0x801CD10C
    // 0x801CE59C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_801CD10C_65FFBC(rdram, ctx);
        goto after_0;
    // 0x801CE59C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CE5A0: lui         $s0, 0x801F
    ctx->r16 = S32(0X801F << 16);
    // 0x801CE5A4: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801CE5A8: lw          $t6, -0x66E8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X66E8);
    // 0x801CE5AC: lw          $s0, -0x66EC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X66EC);
    // 0x801CE5B0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801CE5B4: beq         $t6, $s0, L_801CE5C4
    if (ctx->r14 == ctx->r16) {
        // 0x801CE5B8: nop
    
            goto L_801CE5C4;
    }
    // 0x801CE5B8: nop

    // 0x801CE5BC: jal         0x801CD624
    // 0x801CE5C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CD624_6604D4(rdram, ctx);
        goto after_1;
    // 0x801CE5C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_801CE5C4:
    // 0x801CE5C4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CE5C8: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CE5CC: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801CE5D0: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x801CE5D4: lhu         $v0, -0x4F86($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F86);
    // 0x801CE5D8: andi        $t8, $v0, 0x9000
    ctx->r24 = ctx->r2 & 0X9000;
    // 0x801CE5DC: beql        $t8, $zero, L_801CE778
    if (ctx->r24 == 0) {
        // 0x801CE5E0: andi        $t4, $v0, 0x4000
        ctx->r12 = ctx->r2 & 0X4000;
            goto L_801CE778;
    }
    goto skip_0;
    // 0x801CE5E0: andi        $t4, $v0, 0x4000
    ctx->r12 = ctx->r2 & 0X4000;
    skip_0:
    // 0x801CE5E4: jal         0x80038B98
    // 0x801CE5E8: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    func_80038B98_39798(rdram, ctx);
        goto after_2;
    // 0x801CE5E8: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_2:
    // 0x801CE5EC: lui         $s0, 0x801F
    ctx->r16 = S32(0X801F << 16);
    // 0x801CE5F0: lw          $s0, -0x66EC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X66EC);
    // 0x801CE5F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CE5F8: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CE5FC: beq         $s0, $at, L_801CE634
    if (ctx->r16 == ctx->r1) {
        // 0x801CE600: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_801CE634;
    }
    // 0x801CE600: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x801CE604: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CE608: beq         $v0, $at, L_801CE634
    if (ctx->r2 == ctx->r1) {
        // 0x801CE60C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_801CE634;
    }
    // 0x801CE60C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801CE610: beq         $v0, $at, L_801CE634
    if (ctx->r2 == ctx->r1) {
        // 0x801CE614: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_801CE634;
    }
    // 0x801CE614: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801CE618: beq         $v0, $at, L_801CE730
    if (ctx->r2 == ctx->r1) {
        // 0x801CE61C: lui         $t9, 0x8016
        ctx->r25 = S32(0X8016 << 16);
            goto L_801CE730;
    }
    // 0x801CE61C: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CE620: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801CE624: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801CE628: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x801CE62C: b           L_801CE774
    // 0x801CE630: lhu         $v0, -0x4F86($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F86);
        goto L_801CE774;
    // 0x801CE630: lhu         $v0, -0x4F86($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F86);
L_801CE634:
    // 0x801CE634: lui         $t2, 0x801F
    ctx->r10 = S32(0X801F << 16);
    // 0x801CE638: lw          $t2, -0x66E4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X66E4);
    // 0x801CE63C: addiu       $a1, $a1, 0x32F0
    ctx->r5 = ADD32(ctx->r5, 0X32F0);
    // 0x801CE640: addiu       $v1, $s0, -0x2
    ctx->r3 = ADD32(ctx->r16, -0X2);
    // 0x801CE644: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801CE648: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x801CE64C: lw          $t5, -0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, -0X8);
    // 0x801CE650: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x801CE654: addu        $v0, $a1, $t0
    ctx->r2 = ADD32(ctx->r5, ctx->r8);
    // 0x801CE658: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x801CE65C: addiu       $t7, $t5, 0x300
    ctx->r15 = ADD32(ctx->r13, 0X300);
L_801CE660:
    // 0x801CE660: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x801CE664: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x801CE668: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x801CE66C: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x801CE670: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x801CE674: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x801CE678: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x801CE67C: bne         $t5, $t7, L_801CE660
    if (ctx->r13 != ctx->r15) {
        // 0x801CE680: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_801CE660;
    }
    // 0x801CE680: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x801CE684: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x801CE688: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x801CE68C: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x801CE690: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x801CE694: jal         0x801CCC80
    // 0x801CE698: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_801CCC80_65FB30(rdram, ctx);
        goto after_3;
    // 0x801CE698: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_3:
    // 0x801CE69C: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801CE6A0: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801CE6A4: addiu       $t9, $t9, -0x78F0
    ctx->r25 = ADD32(ctx->r25, -0X78F0);
    // 0x801CE6A8: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x801CE6AC: addu        $t8, $t8, $s0
    ctx->r24 = ADD32(ctx->r24, ctx->r16);
    // 0x801CE6B0: sll         $t8, $t8, 8
    ctx->r24 = S32(ctx->r24 << 8);
    // 0x801CE6B4: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x801CE6B8: jal         0x80023610
    // 0x801CE6BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80023610_24210(rdram, ctx);
        goto after_4;
    // 0x801CE6BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x801CE6C0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801CE6C4: jal         0x801CE16C
    // 0x801CE6C8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_801CE16C_66101C(rdram, ctx);
        goto after_5;
    // 0x801CE6C8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_5:
    // 0x801CE6CC: bne         $v0, $zero, L_801CE868
    if (ctx->r2 != 0) {
        // 0x801CE6D0: lui         $t2, 0x801F
        ctx->r10 = S32(0X801F << 16);
            goto L_801CE868;
    }
    // 0x801CE6D0: lui         $t2, 0x801F
    ctx->r10 = S32(0X801F << 16);
    // 0x801CE6D4: lw          $t2, -0x66EC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X66EC);
    // 0x801CE6D8: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x801CE6DC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x801CE6E0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801CE6E4: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x801CE6E8: lw          $t6, 0x78($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X78);
    // 0x801CE6EC: lw          $v0, 0x0($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X0);
    // 0x801CE6F0: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x801CE6F4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x801CE6F8: lw          $t1, 0x200($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X200);
    // 0x801CE6FC: lw          $a2, 0x6C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X6C);
    // 0x801CE700: lw          $a3, 0x74($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X74);
    // 0x801CE704: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x801CE708: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801CE70C: lw          $t8, 0x78($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X78);
    // 0x801CE710: addiu       $a1, $s0, 0x1
    ctx->r5 = ADD32(ctx->r16, 0X1);
    // 0x801CE714: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CE718: lw          $t9, 0x264($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X264);
    // 0x801CE71C: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x801CE720: mflo        $t2
    ctx->r10 = lo;
    // 0x801CE724: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x801CE728: jal         0x801CB9F8
    // 0x801CE72C: nop

    func_801CB9F8_65E8A8(rdram, ctx);
        goto after_6;
    // 0x801CE72C: nop

    after_6:
L_801CE730:
    // 0x801CE730: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x801CE734: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x801CE738: sw          $zero, 0x54($v1)
    MEM_W(0X54, ctx->r3) = 0;
    // 0x801CE73C: lw          $a0, 0x40($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X40);
    // 0x801CE740: jal         0x800116AC
    // 0x801CE744: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_800116AC_122AC(rdram, ctx);
        goto after_7;
    // 0x801CE744: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_7:
    // 0x801CE748: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801CE74C: lw          $t0, 0x44($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X44);
    // 0x801CE750: sw          $zero, 0x44($v1)
    MEM_W(0X44, ctx->r3) = 0;
    // 0x801CE754: sw          $t0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r8;
    // 0x801CE758: jal         0x800116AC
    // 0x801CE75C: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_800116AC_122AC(rdram, ctx);
        goto after_8;
    // 0x801CE75C: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_8:
    // 0x801CE760: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CE764: jal         0x8003521C
    // 0x801CE768: addiu       $a0, $a0, -0x10F8
    ctx->r4 = ADD32(ctx->r4, -0X10F8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_9;
    // 0x801CE768: addiu       $a0, $a0, -0x10F8
    ctx->r4 = ADD32(ctx->r4, -0X10F8);
    after_9:
    // 0x801CE76C: b           L_801CE86C
    // 0x801CE770: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801CE86C;
    // 0x801CE770: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801CE774:
    // 0x801CE774: andi        $t4, $v0, 0x4000
    ctx->r12 = ctx->r2 & 0X4000;
L_801CE778:
    // 0x801CE778: beq         $t4, $zero, L_801CE868
    if (ctx->r12 == 0) {
        // 0x801CE77C: lui         $s0, 0x801F
        ctx->r16 = S32(0X801F << 16);
            goto L_801CE868;
    }
    // 0x801CE77C: lui         $s0, 0x801F
    ctx->r16 = S32(0X801F << 16);
    // 0x801CE780: lw          $s0, -0x66EC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X66EC);
    // 0x801CE784: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CE788: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x801CE78C: beq         $s0, $at, L_801CE7B8
    if (ctx->r16 == ctx->r1) {
        // 0x801CE790: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_801CE7B8;
    }
    // 0x801CE790: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x801CE794: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CE798: beq         $v0, $at, L_801CE7B8
    if (ctx->r2 == ctx->r1) {
        // 0x801CE79C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_801CE7B8;
    }
    // 0x801CE79C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801CE7A0: beq         $v0, $at, L_801CE7B8
    if (ctx->r2 == ctx->r1) {
        // 0x801CE7A4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_801CE7B8;
    }
    // 0x801CE7A4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801CE7A8: beql        $v0, $at, L_801CE7DC
    if (ctx->r2 == ctx->r1) {
        // 0x801CE7AC: lw          $v1, 0x48($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X48);
            goto L_801CE7DC;
    }
    goto skip_1;
    // 0x801CE7AC: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    skip_1:
    // 0x801CE7B0: b           L_801CE86C
    // 0x801CE7B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801CE86C;
    // 0x801CE7B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801CE7B8:
    // 0x801CE7B8: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x801CE7BC: addu        $t5, $t6, $t7
    ctx->r13 = ADD32(ctx->r14, ctx->r15);
    // 0x801CE7C0: lw          $a0, 0x78($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X78);
    // 0x801CE7C4: addiu       $a1, $zero, -0x1E
    ctx->r5 = ADD32(0, -0X1E);
    // 0x801CE7C8: jal         0x800115B8
    // 0x801CE7CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800115B8_121B8(rdram, ctx);
        goto after_10;
    // 0x801CE7CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x801CE7D0: lui         $s0, 0x801F
    ctx->r16 = S32(0X801F << 16);
    // 0x801CE7D4: lw          $s0, -0x66EC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X66EC);
    // 0x801CE7D8: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
L_801CE7DC:
    // 0x801CE7DC: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x801CE7E0: addiu       $t9, $zero, 0x60
    ctx->r25 = ADD32(0, 0X60);
    // 0x801CE7E4: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x801CE7E8: addu        $t8, $v1, $t1
    ctx->r24 = ADD32(ctx->r3, ctx->r9);
    // 0x801CE7EC: lw          $a0, 0x1C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1C);
    // 0x801CE7F0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x801CE7F4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801CE7F8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801CE7FC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CE800: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801CE804: jal         0x801CC56C
    // 0x801CE808: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_11;
    // 0x801CE808: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_11:
    // 0x801CE80C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801CE810: jal         0x800116AC
    // 0x801CE814: lw          $a0, 0x40($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X40);
    func_800116AC_122AC(rdram, ctx);
        goto after_12;
    // 0x801CE814: lw          $a0, 0x40($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X40);
    after_12:
    // 0x801CE818: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801CE81C: lui         $t0, 0x801F
    ctx->r8 = S32(0X801F << 16);
    // 0x801CE820: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CE824: lw          $t2, 0x44($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X44);
    // 0x801CE828: sw          $zero, 0x44($v1)
    MEM_W(0X44, ctx->r3) = 0;
    // 0x801CE82C: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CE830: sw          $t2, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r10;
    // 0x801CE834: lw          $t0, -0x66E4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X66E4);
    // 0x801CE838: lw          $a1, 0x330C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X330C);
    // 0x801CE83C: sw          $t0, -0x66E8($at)
    MEM_W(-0X66E8, ctx->r1) = ctx->r8;
    // 0x801CE840: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CE844: sw          $t0, -0x66EC($at)
    MEM_W(-0X66EC, ctx->r1) = ctx->r8;
    // 0x801CE848: lw          $t3, 0x1C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X1C);
    // 0x801CE84C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x801CE850: jal         0x801CB6A4
    // 0x801CE854: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    func_801CB6A4_65E554(rdram, ctx);
        goto after_13;
    // 0x801CE854: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    after_13:
    // 0x801CE858: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CE85C: addiu       $a1, $a1, -0x1784
    ctx->r5 = ADD32(ctx->r5, -0X1784);
    // 0x801CE860: jal         0x80011734
    // 0x801CE864: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_80011734_12334(rdram, ctx);
        goto after_14;
    // 0x801CE864: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_14:
L_801CE868:
    // 0x801CE868: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801CE86C:
    // 0x801CE86C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801CE870: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801CE874: jr          $ra
    // 0x801CE878: nop

    TRACE_RETURN()
    return;
    // 0x801CE878: nop

;}
RECOMP_FUNC void func_801D0840_6636F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0840: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801D0844: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801D0848: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801D084C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D0850: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x801D0854: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x801D0858: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x801D085C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x801D0860: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x801D0864: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x801D0868: jal         0x8001136C
    // 0x801D086C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_8001136C_11F6C(rdram, ctx);
        goto after_0;
    // 0x801D086C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D0870: lui         $s3, 0x801D
    ctx->r19 = S32(0X801D << 16);
    // 0x801D0874: addiu       $s3, $s3, 0x4CE8
    ctx->r19 = ADD32(ctx->r19, 0X4CE8);
    // 0x801D0878: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x801D087C: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x801D0880: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x801D0884: jal         0x801CFCC8
    // 0x801D0888: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    func_801CFCC8_662B78(rdram, ctx);
        goto after_1;
    // 0x801D0888: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_1:
    // 0x801D088C: lui         $s4, 0x801F
    ctx->r20 = S32(0X801F << 16);
    // 0x801D0890: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x801D0894: addiu       $s4, $s4, -0x66C0
    ctx->r20 = ADD32(ctx->r20, -0X66C0);
    // 0x801D0898: addiu       $s2, $s0, 0x5C
    ctx->r18 = ADD32(ctx->r16, 0X5C);
    // 0x801D089C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801D08A0: addiu       $s5, $zero, 0xA0
    ctx->r21 = ADD32(0, 0XA0);
    // 0x801D08A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_801D08A8:
    // 0x801D08A8: lw          $t8, 0x10($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X10);
    // 0x801D08AC: lw          $t9, 0x14($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X14);
    // 0x801D08B0: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x801D08B4: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x801D08B8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801D08BC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801D08C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D08C4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x801D08C8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x801D08CC: addu        $a1, $t8, $s0
    ctx->r5 = ADD32(ctx->r24, ctx->r16);
    // 0x801D08D0: addu        $a2, $t9, $s1
    ctx->r6 = ADD32(ctx->r25, ctx->r17);
    // 0x801D08D4: jal         0x801CFCF0
    // 0x801D08D8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_801CFCF0_662BA0(rdram, ctx);
        goto after_2;
    // 0x801D08D8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_2:
    // 0x801D08DC: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x801D08E0: bne         $s0, $s5, L_801D08A8
    if (ctx->r16 != ctx->r21) {
        // 0x801D08E4: sw          $v0, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r2;
            goto L_801D08A8;
    }
    // 0x801D08E4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x801D08E8: addiu       $s1, $s1, 0x3C
    ctx->r17 = ADD32(ctx->r17, 0X3C);
    // 0x801D08EC: slti        $at, $s1, 0xF0
    ctx->r1 = SIGNED(ctx->r17) < 0XF0 ? 1 : 0;
    // 0x801D08F0: bnel        $at, $zero, L_801D08A8
    if (ctx->r1 != 0) {
        // 0x801D08F4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_801D08A8;
    }
    goto skip_0;
    // 0x801D08F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    skip_0:
    // 0x801D08F8: lui         $s4, 0x801F
    ctx->r20 = S32(0X801F << 16);
    // 0x801D08FC: addiu       $s4, $s4, -0x66BC
    ctx->r20 = ADD32(ctx->r20, -0X66BC);
    // 0x801D0900: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801D0904: addiu       $s6, $zero, 0xF0
    ctx->r22 = ADD32(0, 0XF0);
    // 0x801D0908: addiu       $s5, $zero, 0xA0
    ctx->r21 = ADD32(0, 0XA0);
    // 0x801D090C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_801D0910:
    // 0x801D0910: lw          $t2, 0x10($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X10);
    // 0x801D0914: lw          $t3, 0x14($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X14);
    // 0x801D0918: lw          $t5, 0x0($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X0);
    // 0x801D091C: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x801D0920: addu        $a1, $t2, $s0
    ctx->r5 = ADD32(ctx->r10, ctx->r16);
    // 0x801D0924: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    // 0x801D0928: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D092C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801D0930: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D0934: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x801D0938: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x801D093C: addu        $a2, $t3, $s1
    ctx->r6 = ADD32(ctx->r11, ctx->r17);
    // 0x801D0940: jal         0x801CFCF0
    // 0x801D0944: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_801CFCF0_662BA0(rdram, ctx);
        goto after_3;
    // 0x801D0944: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_3:
    // 0x801D0948: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x801D094C: bne         $s0, $s5, L_801D0910
    if (ctx->r16 != ctx->r21) {
        // 0x801D0950: sw          $v0, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r2;
            goto L_801D0910;
    }
    // 0x801D0950: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x801D0954: addiu       $s1, $s1, 0x3C
    ctx->r17 = ADD32(ctx->r17, 0X3C);
    // 0x801D0958: bnel        $s1, $s6, L_801D0910
    if (ctx->r17 != ctx->r22) {
        // 0x801D095C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_801D0910;
    }
    goto skip_1;
    // 0x801D095C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    skip_1:
    // 0x801D0960: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x801D0964: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801D0968: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    // 0x801D096C: lw          $v0, 0x30($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X30);
    // 0x801D0970: lui         $v1, 0x8FFF
    ctx->r3 = S32(0X8FFF << 16);
    // 0x801D0974: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x801D0978: subu        $t0, $v1, $v0
    ctx->r8 = SUB32(ctx->r3, ctx->r2);
    // 0x801D097C: and         $t1, $t7, $t0
    ctx->r9 = ctx->r15 & ctx->r8;
    // 0x801D0980: and         $a1, $t1, $v1
    ctx->r5 = ctx->r9 & ctx->r3;
    // 0x801D0984: jal         0x80040620
    // 0x801D0988: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_4;
    // 0x801D0988: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    after_4:
    // 0x801D098C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801D0990: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801D0994: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x801D0998: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x801D099C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x801D09A0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x801D09A4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x801D09A8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x801D09AC: jr          $ra
    // 0x801D09B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801D09B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801CF1E4_662094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF1E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801CF1E8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801CF1EC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801CF1F0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801CF1F4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801CF1F8: lw          $t6, 0xAC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XAC);
    // 0x801CF1FC: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CF200: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801CF204: bgez        $t6, L_801CF228
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801CF208: addiu       $v1, $v1, 0x4CE8
        ctx->r3 = ADD32(ctx->r3, 0X4CE8);
            goto L_801CF228;
    }
    // 0x801CF208: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801CF20C: lw          $t7, 0xA4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XA4);
    // 0x801CF210: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CF214: addiu       $a0, $a0, -0xE8C
    ctx->r4 = ADD32(ctx->r4, -0XE8C);
    // 0x801CF218: jal         0x8003521C
    // 0x801CF21C: sw          $zero, 0x30($t7)
    MEM_W(0X30, ctx->r15) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801CF21C: sw          $zero, 0x30($t7)
    MEM_W(0X30, ctx->r15) = 0;
    after_0:
    // 0x801CF220: b           L_801CF2D0
    // 0x801CF224: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801CF2D0;
    // 0x801CF224: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801CF228:
    // 0x801CF228: addiu       $s0, $a1, 0x5C
    ctx->r16 = ADD32(ctx->r5, 0X5C);
    // 0x801CF22C: lw          $t9, 0x48($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X48);
    // 0x801CF230: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801CF234: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    // 0x801CF238: jal         0x800108BC
    // 0x801CF23C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    func_800108BC_114BC(rdram, ctx);
        goto after_1;
    // 0x801CF23C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_1:
    // 0x801CF240: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CF244: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801CF248: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x801CF24C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801CF250: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801CF254: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801CF258: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CF25C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CF260: lw          $t1, 0x50($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X50);
    // 0x801CF264: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CF268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CF26C: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x801CF270: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x801CF274: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x801CF278: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x801CF27C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CF280: jal         0x800108E4
    // 0x801CF284: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_800108E4_114E4(rdram, ctx);
        goto after_2;
    // 0x801CF284: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_2:
    // 0x801CF288: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CF28C: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801CF290: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801CF294: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x801CF298: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x801CF29C: lw          $t5, 0x48($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X48);
    // 0x801CF2A0: lui         $a3, 0x8FFF
    ctx->r7 = S32(0X8FFF << 16);
    // 0x801CF2A4: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x801CF2A8: lw          $a2, 0x30($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X30);
    // 0x801CF2AC: subu        $t7, $a3, $a2
    ctx->r15 = SUB32(ctx->r7, ctx->r6);
    // 0x801CF2B0: and         $t8, $t4, $t7
    ctx->r24 = ctx->r12 & ctx->r15;
    // 0x801CF2B4: and         $a1, $t8, $a3
    ctx->r5 = ctx->r24 & ctx->r7;
    // 0x801CF2B8: jal         0x80040620
    // 0x801CF2BC: and         $a0, $a2, $a3
    ctx->r4 = ctx->r6 & ctx->r7;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_3;
    // 0x801CF2BC: and         $a0, $a2, $a3
    ctx->r4 = ctx->r6 & ctx->r7;
    after_3:
    // 0x801CF2C0: lw          $t9, 0x50($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X50);
    // 0x801CF2C4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801CF2C8: sw          $t0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r8;
    // 0x801CF2CC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801CF2D0:
    // 0x801CF2D0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801CF2D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801CF2D8: jr          $ra
    // 0x801CF2DC: nop

    TRACE_RETURN()
    return;
    // 0x801CF2DC: nop

;}
RECOMP_FUNC void func_801CCCAC_65FB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCCAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCCB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCCB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CCCB8: jal         0x80023A1C
    // 0x801CCCBC: addiu       $a1, $zero, 0x304
    ctx->r5 = ADD32(0, 0X304);
    func_80023A1C_2461C(rdram, ctx);
        goto after_0;
    // 0x801CCCBC: addiu       $a1, $zero, 0x304
    ctx->r5 = ADD32(0, 0X304);
    after_0:
    // 0x801CCCC0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801CCCC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CCCC8: lw          $t7, -0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, -0X4);
    // 0x801CCCCC: bnel        $v0, $t7, L_801CCCE0
    if (ctx->r2 != ctx->r15) {
        // 0x801CCCD0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801CCCE0;
    }
    goto skip_0;
    // 0x801CCCD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801CCCD4: b           L_801CCCE0
    // 0x801CCCD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801CCCE0;
    // 0x801CCCD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801CCCDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CCCE0:
    // 0x801CCCE0: jr          $ra
    // 0x801CCCE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x801CCCE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801CFF30_662DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CFF30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CFF34: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x801CFF38: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CFF3C: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x801CFF40: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x801CFF44: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x801CFF48: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x801CFF4C: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x801CFF50: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x801CFF54: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x801CFF58: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x801CFF5C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x801CFF60: or          $t3, $a0, $zero
    ctx->r11 = ctx->r4 | 0;
    // 0x801CFF64: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x801CFF68: lui         $t8, 0x708
    ctx->r24 = S32(0X708 << 16);
    // 0x801CFF6C: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x801CFF70: lui         $t1, 0xF510
    ctx->r9 = S32(0XF510 << 16);
    // 0x801CFF74: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x801CFF78: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x801CFF7C: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x801CFF80: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x801CFF84: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x801CFF88: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x801CFF8C: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    // 0x801CFF90: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801CFF94: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x801CFF98: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x801CFF9C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CFFA0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x801CFFA4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x801CFFA8: sll         $t3, $a3, 1
    ctx->r11 = S32(ctx->r7 << 1);
    // 0x801CFFAC: multu       $a3, $a1
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CFFB0: addiu       $t2, $zero, 0x7FF
    ctx->r10 = ADD32(0, 0X7FF);
    // 0x801CFFB4: mflo        $v1
    ctx->r3 = lo;
    // 0x801CFFB8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x801CFFBC: slti        $at, $v1, 0x7FF
    ctx->r1 = SIGNED(ctx->r3) < 0X7FF ? 1 : 0;
    // 0x801CFFC0: beq         $at, $zero, L_801CFFD0
    if (ctx->r1 == 0) {
        // 0x801CFFC4: nop
    
            goto L_801CFFD0;
    }
    // 0x801CFFC4: nop

    // 0x801CFFC8: b           L_801CFFD0
    // 0x801CFFCC: or          $t2, $v1, $zero
    ctx->r10 = ctx->r3 | 0;
        goto L_801CFFD0;
    // 0x801CFFCC: or          $t2, $v1, $zero
    ctx->r10 = ctx->r3 | 0;
L_801CFFD0:
    // 0x801CFFD0: bgez        $t3, L_801CFFE0
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801CFFD4: sra         $v1, $t3, 3
        ctx->r3 = S32(SIGNED(ctx->r11) >> 3);
            goto L_801CFFE0;
    }
    // 0x801CFFD4: sra         $v1, $t3, 3
    ctx->r3 = S32(SIGNED(ctx->r11) >> 3);
    // 0x801CFFD8: addiu       $at, $t3, 0x7
    ctx->r1 = ADD32(ctx->r11, 0X7);
    // 0x801CFFDC: sra         $v1, $at, 3
    ctx->r3 = S32(SIGNED(ctx->r1) >> 3);
L_801CFFE0:
    // 0x801CFFE0: bgtz        $v1, L_801CFFF0
    if (SIGNED(ctx->r3) > 0) {
        // 0x801CFFE4: or          $t4, $v1, $zero
        ctx->r12 = ctx->r3 | 0;
            goto L_801CFFF0;
    }
    // 0x801CFFE4: or          $t4, $v1, $zero
    ctx->r12 = ctx->r3 | 0;
    // 0x801CFFE8: b           L_801CFFF0
    // 0x801CFFEC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
        goto L_801CFFF0;
    // 0x801CFFEC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_801CFFF0:
    // 0x801CFFF0: bgtz        $v1, L_801D0000
    if (SIGNED(ctx->r3) > 0) {
        // 0x801CFFF4: addiu       $t7, $t4, 0x7FF
        ctx->r15 = ADD32(ctx->r12, 0X7FF);
            goto L_801D0000;
    }
    // 0x801CFFF4: addiu       $t7, $t4, 0x7FF
    ctx->r15 = ADD32(ctx->r12, 0X7FF);
    // 0x801CFFF8: b           L_801D0004
    // 0x801CFFFC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
        goto L_801D0004;
    // 0x801CFFFC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
L_801D0000:
    // 0x801D0000: or          $t5, $v1, $zero
    ctx->r13 = ctx->r3 | 0;
L_801D0004:
    // 0x801D0004: div         $zero, $t7, $t5
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r13)));
    // 0x801D0008: bne         $t5, $zero, L_801D0014
    if (ctx->r13 != 0) {
        // 0x801D000C: nop
    
            goto L_801D0014;
    }
    // 0x801D000C: nop

    // 0x801D0010: break       7
    do_break(2149384208);
L_801D0014:
    // 0x801D0014: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801D0018: bne         $t5, $at, L_801D002C
    if (ctx->r13 != ctx->r1) {
        // 0x801D001C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801D002C;
    }
    // 0x801D001C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D0020: bne         $t7, $at, L_801D002C
    if (ctx->r15 != ctx->r1) {
        // 0x801D0024: nop
    
            goto L_801D002C;
    }
    // 0x801D0024: nop

    // 0x801D0028: break       6
    do_break(2149384232);
L_801D002C:
    // 0x801D002C: mflo        $t8
    ctx->r24 = lo;
    // 0x801D0030: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x801D0034: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x801D0038: andi        $t7, $t2, 0xFFF
    ctx->r15 = ctx->r10 & 0XFFF;
    // 0x801D003C: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x801D0040: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x801D0044: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x801D0048: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801D004C: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x801D0050: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x801D0054: addiu       $t6, $t3, 0x7
    ctx->r14 = ADD32(ctx->r11, 0X7);
    // 0x801D0058: sra         $t8, $t6, 3
    ctx->r24 = S32(SIGNED(ctx->r14) >> 3);
    // 0x801D005C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x801D0060: sw          $t0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r8;
    // 0x801D0064: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x801D0068: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x801D006C: andi        $t9, $t8, 0x1FF
    ctx->r25 = ctx->r24 & 0X1FF;
    // 0x801D0070: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x801D0074: sll         $t7, $t9, 9
    ctx->r15 = S32(ctx->r25 << 9);
    // 0x801D0078: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x801D007C: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x801D0080: or          $t6, $t7, $t1
    ctx->r14 = ctx->r15 | ctx->r9;
    // 0x801D0084: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x801D0088: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
    // 0x801D008C: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x801D0090: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D0094: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x801D0098: addiu       $t9, $a3, -0x1
    ctx->r25 = ADD32(ctx->r7, -0X1);
    // 0x801D009C: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x801D00A0: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x801D00A4: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
    // 0x801D00A8: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x801D00AC: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x801D00B0: addiu       $t8, $a1, -0x1
    ctx->r24 = ADD32(ctx->r5, -0X1);
    // 0x801D00B4: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x801D00B8: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x801D00BC: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x801D00C0: sw          $t7, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r15;
    // 0x801D00C4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x801D00C8: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x801D00CC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x801D00D0: addu        $t9, $t2, $a3
    ctx->r25 = ADD32(ctx->r10, ctx->r7);
    // 0x801D00D4: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x801D00D8: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x801D00DC: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x801D00E0: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x801D00E4: addu        $t7, $a2, $a1
    ctx->r15 = ADD32(ctx->r6, ctx->r5);
    // 0x801D00E8: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x801D00EC: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x801D00F0: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x801D00F4: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x801D00F8: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x801D00FC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x801D0100: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x801D0104: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x801D0108: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801D010C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x801D0110: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x801D0114: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x801D0118: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x801D011C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x801D0120: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x801D0124: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x801D0128: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x801D012C: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x801D0130: lui         $t6, 0xB400
    ctx->r14 = S32(0XB400 << 16);
    // 0x801D0134: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x801D0138: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x801D013C: lui         $t9, 0x1000
    ctx->r25 = S32(0X1000 << 16);
    // 0x801D0140: ori         $t9, $t9, 0x400
    ctx->r25 = ctx->r25 | 0X400;
    // 0x801D0144: lui         $t7, 0xB300
    ctx->r15 = S32(0XB300 << 16);
    // 0x801D0148: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x801D014C: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x801D0150: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x801D0154: lui         $t8, 0xB800
    ctx->r24 = S32(0XB800 << 16);
    // 0x801D0158: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801D015C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x801D0160: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801D0164: jr          $ra
    // 0x801D0168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801D0168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801CBDA4_65EC54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBDA4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801CBDA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CBDAC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801CBDB0: jal         0x8001136C
    // 0x801CBDB4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    func_8001136C_11F6C(rdram, ctx);
        goto after_0;
    // 0x801CBDB4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_0:
    // 0x801CBDB8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801CBDBC: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x801CBDC0: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801CBDC4: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x801CBDC8: lw          $a1, 0x20($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X20);
    // 0x801CBDCC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CBDD0: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x801CBDD4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801CBDD8: nop

    // 0x801CBDDC: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CBDE0: bgez        $a1, L_801CBDF0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801CBDE4: sra         $t7, $a1, 1
        ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
            goto L_801CBDF0;
    }
    // 0x801CBDE4: sra         $t7, $a1, 1
    ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
    // 0x801CBDE8: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x801CBDEC: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_801CBDF0:
    // 0x801CBDF0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x801CBDF4: nop

    // 0x801CBDF8: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x801CBDFC: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x801CBE00: sub.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f6.d - ctx->f16.d;
    // 0x801CBE04: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x801CBE08: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x801CBE0C: lw          $a2, 0x24($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X24);
    // 0x801CBE10: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x801CBE14: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x801CBE18: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x801CBE1C: nop

    // 0x801CBE20: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x801CBE24: bgez        $a2, L_801CBE34
    if (SIGNED(ctx->r6) >= 0) {
        // 0x801CBE28: sra         $t1, $a2, 1
        ctx->r9 = S32(SIGNED(ctx->r6) >> 1);
            goto L_801CBE34;
    }
    // 0x801CBE28: sra         $t1, $a2, 1
    ctx->r9 = S32(SIGNED(ctx->r6) >> 1);
    // 0x801CBE2C: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x801CBE30: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_801CBE34:
    // 0x801CBE34: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x801CBE38: nop

    // 0x801CBE3C: cvt.d.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.d = CVT_D_W(ctx->f6.u32l);
    // 0x801CBE40: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x801CBE44: div.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x801CBE48: cvt.d.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.d = CVT_D_W(ctx->f6.u32l);
    // 0x801CBE4C: sub.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d - ctx->f18.d;
    // 0x801CBE50: div.d       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x801CBE54: trunc.w.d   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x801CBE58: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x801CBE5C: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x801CBE60: cvt.d.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CBE64: div.d       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x801CBE68: trunc.w.d   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801CBE6C: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x801CBE70: trunc.w.d   $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x801CBE74: jal         0x801CBF30
    // 0x801CBE78: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    func_801CBF30_65EDE0(rdram, ctx);
        goto after_1;
    // 0x801CBE78: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x801CBE7C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x801CBE80: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x801CBE84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CBE88: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x801CBE8C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x801CBE90: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x801CBE94: jal         0x801CF3F0
    // 0x801CBE98: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_801CF3F0_6622A0(rdram, ctx);
        goto after_2;
    // 0x801CBE98: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_2:
    // 0x801CBE9C: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CBEA0: addiu       $t0, $t0, 0x4CE8
    ctx->r8 = ADD32(ctx->r8, 0X4CE8);
    // 0x801CBEA4: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x801CBEA8: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x801CBEAC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CBEB0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x801CBEB4: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801CBEB8: sw          $t7, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->r15;
    // 0x801CBEBC: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x801CBEC0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x801CBEC4: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x801CBEC8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801CBECC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801CBED0: lw          $t2, 0x28($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X28);
    // 0x801CBED4: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x801CBED8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801CBEDC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x801CBEE0: jal         0x801CF748
    // 0x801CBEE4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    func_801CF748_6625F8(rdram, ctx);
        goto after_3;
    // 0x801CBEE4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_3:
    // 0x801CBEE8: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CBEEC: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x801CBEF0: addiu       $t0, $t0, 0x4CE8
    ctx->r8 = ADD32(ctx->r8, 0X4CE8);
    // 0x801CBEF4: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x801CBEF8: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x801CBEFC: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x801CBF00: lw          $v1, 0x2C($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X2C);
    // 0x801CBF04: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    // 0x801CBF08: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x801CBF0C: subu        $t7, $a2, $v1
    ctx->r15 = SUB32(ctx->r6, ctx->r3);
    // 0x801CBF10: and         $t8, $t4, $t7
    ctx->r24 = ctx->r12 & ctx->r15;
    // 0x801CBF14: and         $a1, $t8, $a2
    ctx->r5 = ctx->r24 & ctx->r6;
    // 0x801CBF18: jal         0x80040620
    // 0x801CBF1C: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_4;
    // 0x801CBF1C: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    after_4:
    // 0x801CBF20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801CBF24: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801CBF28: jr          $ra
    // 0x801CBF2C: nop

    TRACE_RETURN()
    return;
    // 0x801CBF2C: nop

;}
RECOMP_FUNC void func_801D0D3C_663BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0D3C: jr          $ra
    // 0x801D0D40: sw          $a1, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801D0D40: sw          $a1, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_801D2150_665000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2150: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D2154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2158: beq         $a0, $zero, L_801D21A8
    if (ctx->r4 == 0) {
        // 0x801D215C: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_801D21A8;
    }
    // 0x801D215C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801D2160: beql        $a1, $zero, L_801D21AC
    if (ctx->r5 == 0) {
        // 0x801D2164: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D21AC;
    }
    goto skip_0;
    // 0x801D2164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D2168: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D216C: jal         0x80011610
    // 0x801D2170: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_80011610_12210(rdram, ctx);
        goto after_0;
    // 0x801D2170: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x801D2174: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801D2178: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x801D217C: jal         0x801CC5A8
    // 0x801D2180: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_801CC5A8_65F458(rdram, ctx);
        goto after_1;
    // 0x801D2180: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x801D2184: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801D2188: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801D218C: addiu       $a1, $zero, -0x10
    ctx->r5 = ADD32(0, -0X10);
    // 0x801D2190: bgez        $a2, L_801D21A0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x801D2194: sra         $t6, $a2, 1
        ctx->r14 = S32(SIGNED(ctx->r6) >> 1);
            goto L_801D21A0;
    }
    // 0x801D2194: sra         $t6, $a2, 1
    ctx->r14 = S32(SIGNED(ctx->r6) >> 1);
    // 0x801D2198: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x801D219C: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_801D21A0:
    // 0x801D21A0: jal         0x800115F8
    // 0x801D21A4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_800115F8_121F8(rdram, ctx);
        goto after_2;
    // 0x801D21A4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_2:
L_801D21A8:
    // 0x801D21A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D21AC:
    // 0x801D21AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D21B0: jr          $ra
    // 0x801D21B4: nop

    TRACE_RETURN()
    return;
    // 0x801D21B4: nop

;}
RECOMP_FUNC void func_801CF3F0_6622A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF3F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CF3F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CF3F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CF3FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CF400: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CF404: beq         $a0, $zero, L_801CF568
    if (ctx->r4 == 0) {
        // 0x801CF408: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_801CF568;
    }
    // 0x801CF408: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801CF40C: slti        $at, $a3, 0x101
    ctx->r1 = SIGNED(ctx->r7) < 0X101 ? 1 : 0;
    // 0x801CF410: bne         $at, $zero, L_801CF420
    if (ctx->r1 != 0) {
        // 0x801CF414: addiu       $t2, $zero, 0x80
        ctx->r10 = ADD32(0, 0X80);
            goto L_801CF420;
    }
    // 0x801CF414: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x801CF418: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x801CF41C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_801CF420:
    // 0x801CF420: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801CF424: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x801CF428: addu        $t9, $t9, $a2
    ctx->r25 = ADD32(ctx->r25, ctx->r6);
    // 0x801CF42C: slti        $at, $a0, 0x79
    ctx->r1 = SIGNED(ctx->r4) < 0X79 ? 1 : 0;
    // 0x801CF430: bne         $at, $zero, L_801CF43C
    if (ctx->r1 != 0) {
        // 0x801CF434: lw          $t8, 0x24($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X24);
            goto L_801CF43C;
    }
    // 0x801CF434: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x801CF438: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
L_801CF43C:
    // 0x801CF43C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x801CF440: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x801CF444: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x801CF448: sll         $t9, $t9, 6
    ctx->r25 = S32(ctx->r25 << 6);
    // 0x801CF44C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x801CF450: lh          $t6, -0x5250($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X5250);
    // 0x801CF454: addu        $t3, $t8, $t9
    ctx->r11 = ADD32(ctx->r24, ctx->r25);
    // 0x801CF458: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x801CF45C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801CF460: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801CF464: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801CF468: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801CF46C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801CF470: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801CF474: sll         $t7, $t7, 11
    ctx->r15 = S32(ctx->r15 << 11);
    // 0x801CF478: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x801CF47C: addiu       $t9, $t9, 0x1000
    ctx->r25 = ADD32(ctx->r25, 0X1000);
    // 0x801CF480: addu        $t8, $t7, $t4
    ctx->r24 = ADD32(ctx->r15, ctx->r12);
    // 0x801CF484: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x801CF488: andi        $t3, $v0, 0x7
    ctx->r11 = ctx->r2 & 0X7;
    // 0x801CF48C: sll         $t5, $t3, 5
    ctx->r13 = S32(ctx->r11 << 5);
    // 0x801CF490: addiu       $v1, $t5, 0x100
    ctx->r3 = ADD32(ctx->r13, 0X100);
    // 0x801CF494: addiu       $t0, $a0, -0x2
    ctx->r8 = ADD32(ctx->r4, -0X2);
    // 0x801CF498: sll         $a1, $a0, 6
    ctx->r5 = S32(ctx->r4 << 6);
    // 0x801CF49C: sll         $t6, $t0, 6
    ctx->r14 = S32(ctx->r8 << 6);
    // 0x801CF4A0: sh          $a1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r5;
    // 0x801CF4A4: sh          $t5, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r13;
    // 0x801CF4A8: sh          $t5, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r13;
    // 0x801CF4AC: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x801CF4B0: sh          $v1, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r3;
    // 0x801CF4B4: sh          $t2, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r10;
    // 0x801CF4B8: sh          $t6, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r14;
    // 0x801CF4BC: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    // 0x801CF4C0: sh          $t5, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r13;
    // 0x801CF4C4: sh          $zero, 0x4A($s0)
    MEM_H(0X4A, ctx->r16) = 0;
    // 0x801CF4C8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x801CF4CC: sh          $zero, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = 0;
    // 0x801CF4D0: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
    // 0x801CF4D4: sll         $t4, $t7, 6
    ctx->r12 = S32(ctx->r15 << 6);
    // 0x801CF4D8: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x801CF4DC: sh          $a0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r4;
    // 0x801CF4E0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x801CF4E4: sh          $v1, 0xA8($s0)
    MEM_H(0XA8, ctx->r16) = ctx->r3;
    // 0x801CF4E8: sh          $v1, 0xB8($s0)
    MEM_H(0XB8, ctx->r16) = ctx->r3;
    // 0x801CF4EC: addiu       $t9, $t8, -0x2
    ctx->r25 = ADD32(ctx->r24, -0X2);
    // 0x801CF4F0: sll         $t3, $t9, 6
    ctx->r11 = S32(ctx->r25 << 6);
    // 0x801CF4F4: lui         $v1, 0x8FFF
    ctx->r3 = S32(0X8FFF << 16);
    // 0x801CF4F8: addu        $a3, $t3, $t5
    ctx->r7 = ADD32(ctx->r11, ctx->r13);
    // 0x801CF4FC: addiu       $a2, $t5, 0x80
    ctx->r6 = ADD32(ctx->r13, 0X80);
    // 0x801CF500: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x801CF504: sh          $t5, 0x88($s0)
    MEM_H(0X88, ctx->r16) = ctx->r13;
    // 0x801CF508: sh          $t5, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r13;
    // 0x801CF50C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x801CF510: sh          $t5, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r13;
    // 0x801CF514: addiu       $t5, $s0, 0xFA
    ctx->r13 = ADD32(ctx->r16, 0XFA);
    // 0x801CF518: subu        $t6, $v1, $s0
    ctx->r14 = SUB32(ctx->r3, ctx->r16);
    // 0x801CF51C: sh          $a1, 0xBA($s0)
    MEM_H(0XBA, ctx->r16) = ctx->r5;
    // 0x801CF520: sh          $a0, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r4;
    // 0x801CF524: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    // 0x801CF528: and         $t7, $t5, $t6
    ctx->r15 = ctx->r13 & ctx->r14;
    // 0x801CF52C: sh          $a3, 0x68($s0)
    MEM_H(0X68, ctx->r16) = ctx->r7;
    // 0x801CF530: sh          $t1, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r9;
    // 0x801CF534: sh          $a2, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r6;
    // 0x801CF538: sh          $t1, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r9;
    // 0x801CF53C: sh          $t2, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r10;
    // 0x801CF540: sh          $zero, 0xAA($s0)
    MEM_H(0XAA, ctx->r16) = 0;
    // 0x801CF544: sh          $t1, 0xCA($s0)
    MEM_H(0XCA, ctx->r16) = ctx->r9;
    // 0x801CF548: sh          $t1, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r9;
    // 0x801CF54C: sh          $t0, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r8;
    // 0x801CF550: sh          $a2, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r6;
    // 0x801CF554: sh          $t0, 0xFA($s0)
    MEM_H(0XFA, ctx->r16) = ctx->r8;
    // 0x801CF558: sh          $a3, 0xF8($s0)
    MEM_H(0XF8, ctx->r16) = ctx->r7;
    // 0x801CF55C: and         $a1, $t7, $v1
    ctx->r5 = ctx->r15 & ctx->r3;
    // 0x801CF560: jal         0x80040620
    // 0x801CF564: and         $a0, $s0, $v1
    ctx->r4 = ctx->r16 & ctx->r3;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x801CF564: and         $a0, $s0, $v1
    ctx->r4 = ctx->r16 & ctx->r3;
    after_0:
L_801CF568:
    // 0x801CF568: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CF56C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CF570: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CF574: jr          $ra
    // 0x801CF578: nop

    TRACE_RETURN()
    return;
    // 0x801CF578: nop

;}
RECOMP_FUNC void func_801CD24C_6600FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD24C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CD250: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801CD254: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801CD258: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CD25C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CD260: addiu       $s0, $a0, 0x5C
    ctx->r16 = ADD32(ctx->r4, 0X5C);
    // 0x801CD264: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801CD268: addiu       $s2, $zero, 0x20
    ctx->r18 = ADD32(0, 0X20);
L_801CD26C:
    // 0x801CD26C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x801CD270: beql        $a0, $zero, L_801CD288
    if (ctx->r4 == 0) {
        // 0x801CD274: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_801CD288;
    }
    goto skip_0;
    // 0x801CD274: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_0:
    // 0x801CD278: jal         0x800116AC
    // 0x801CD27C: nop

    func_800116AC_122AC(rdram, ctx);
        goto after_0;
    // 0x801CD27C: nop

    after_0:
    // 0x801CD280: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x801CD284: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_801CD288:
    // 0x801CD288: bne         $s1, $s2, L_801CD26C
    if (ctx->r17 != ctx->r18) {
        // 0x801CD28C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_801CD26C;
    }
    // 0x801CD28C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x801CD290: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801CD294: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CD298: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD29C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801CD2A0: jr          $ra
    // 0x801CD2A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801CD2A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801CD890_660740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CD894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CD898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CD89C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CD8A0: sw          $zero, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = 0;
    // 0x801CD8A4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CD8A8: jal         0x8003521C
    // 0x801CD8AC: addiu       $a0, $a0, -0x2874
    ctx->r4 = ADD32(ctx->r4, -0X2874);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801CD8AC: addiu       $a0, $a0, -0x2874
    ctx->r4 = ADD32(ctx->r4, -0X2874);
    after_0:
    // 0x801CD8B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CD8B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CD8B8: jr          $ra
    // 0x801CD8BC: nop

    TRACE_RETURN()
    return;
    // 0x801CD8BC: nop

;}
RECOMP_FUNC void func_801CBCE0_65EB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBCE0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801CBCE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CBCE8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801CBCEC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CBCF0: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x801CBCF4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801CBCF8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801CBCFC: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801CBD00: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801CBD04: addiu       $a2, $a2, 0x180
    ctx->r6 = ADD32(ctx->r6, 0X180);
    // 0x801CBD08: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x801CBD0C: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CBD10: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CBD14: addiu       $t6, $zero, 0x4CD
    ctx->r14 = ADD32(0, 0X4CD);
    // 0x801CBD18: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801CBD1C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x801CBD20: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801CBD24: addiu       $a1, $a1, -0x4378
    ctx->r5 = ADD32(ctx->r5, -0X4378);
    // 0x801CBD28: addiu       $a3, $a3, -0x2768
    ctx->r7 = ADD32(ctx->r7, -0X2768);
    // 0x801CBD2C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CBD30: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CBD34: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801CBD38: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801CBD3C: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801CBD40: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801CBD44: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x801CBD48: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801CBD4C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801CBD50: jal         0x800358E8
    // 0x801CBD54: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801CBD54: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801CBD58: bne         $v0, $zero, L_801CBD68
    if (ctx->r2 != 0) {
        // 0x801CBD5C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801CBD68;
    }
    // 0x801CBD5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CBD60: b           L_801CBD94
    // 0x801CBD64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801CBD94;
    // 0x801CBD64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CBD68:
    // 0x801CBD68: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801CBD6C: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x801CBD70: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x801CBD74: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x801CBD78: addiu       $t9, $t8, 0x5C
    ctx->r25 = ADD32(ctx->r24, 0X5C);
    // 0x801CBD7C: sw          $t9, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r25;
    // 0x801CBD80: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x801CBD84: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x801CBD88: jal         0x800115F8
    // 0x801CBD8C: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_800115F8_121F8(rdram, ctx);
        goto after_1;
    // 0x801CBD8C: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_1:
    // 0x801CBD90: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
L_801CBD94:
    // 0x801CBD94: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801CBD98: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801CBD9C: jr          $ra
    // 0x801CBDA0: nop

    TRACE_RETURN()
    return;
    // 0x801CBDA0: nop

;}
RECOMP_FUNC void func_801CB5C4_65E474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB5C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB5C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CB5CC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801CB5D0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801CB5D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801CB5D8: jal         0x8001136C
    // 0x801CB5DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8001136C_11F6C(rdram, ctx);
        goto after_0;
    // 0x801CB5DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CB5E0: lui         $s1, 0x801D
    ctx->r17 = S32(0X801D << 16);
    // 0x801CB5E4: addiu       $s1, $s1, 0x4CE8
    ctx->r17 = ADD32(ctx->r17, 0X4CE8);
    // 0x801CB5E8: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x801CB5EC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801CB5F0: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x801CB5F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801CB5F8: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x801CB5FC: lw          $a3, 0x2C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X2C);
    // 0x801CB600: lw          $a2, 0x28($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X28);
    // 0x801CB604: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x801CB608: jal         0x80010980
    // 0x801CB60C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80010980_11580(rdram, ctx);
        goto after_1;
    // 0x801CB60C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_1:
    // 0x801CB610: jal         0x80010B60
    // 0x801CB614: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_80010B60_11760(rdram, ctx);
        goto after_2;
    // 0x801CB614: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_2:
    // 0x801CB618: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x801CB61C: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x801CB620: jal         0x800109A4
    // 0x801CB624: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800109A4_115A4(rdram, ctx);
        goto after_3;
    // 0x801CB624: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x801CB628: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x801CB62C: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    // 0x801CB630: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x801CB634: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x801CB638: jal         0x80010E9C
    // 0x801CB63C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80010E9C_11A9C(rdram, ctx);
        goto after_4;
    // 0x801CB63C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x801CB640: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801CB644: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x801CB648: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CB64C: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x801CB650: lw          $v1, 0x30($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X30);
    // 0x801CB654: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    // 0x801CB658: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x801CB65C: subu        $t2, $a2, $v1
    ctx->r10 = SUB32(ctx->r6, ctx->r3);
    // 0x801CB660: and         $t3, $t9, $t2
    ctx->r11 = ctx->r25 & ctx->r10;
    // 0x801CB664: and         $a1, $t3, $a2
    ctx->r5 = ctx->r11 & ctx->r6;
    // 0x801CB668: jal         0x80040620
    // 0x801CB66C: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_5;
    // 0x801CB66C: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    after_5:
    // 0x801CB670: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CB674: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801CB678: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801CB67C: jr          $ra
    // 0x801CB680: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801CB680: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801CFCF0_662BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CFCF0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801CFCF4: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x801CFCF8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801CFCFC: addiu       $t8, $t8, 0x7C78
    ctx->r24 = ADD32(ctx->r24, 0X7C78);
    // 0x801CFD00: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x801CFD04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CFD08: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x801CFD0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CFD10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CFD14: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801CFD18: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x801CFD1C: lhu         $a1, 0xC($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0XC);
    // 0x801CFD20: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    // 0x801CFD24: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x801CFD28: jal         0x80014840
    // 0x801CFD2C: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    func_80014840_15440(rdram, ctx);
        goto after_0;
    // 0x801CFD2C: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    after_0:
    // 0x801CFD30: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801CFD34: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x801CFD38: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x801CFD3C: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x801CFD40: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x801CFD44: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x801CFD48: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x801CFD4C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x801CFD50: lhu         $t9, 0x0($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X0);
    // 0x801CFD54: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x801CFD58: lui         $at, 0xFD10
    ctx->r1 = S32(0XFD10 << 16);
    // 0x801CFD5C: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x801CFD60: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x801CFD64: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x801CFD68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CFD6C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801CFD70: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x801CFD74: lhu         $t9, 0x0($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X0);
    // 0x801CFD78: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x801CFD7C: sll         $a2, $a3, 1
    ctx->r6 = S32(ctx->r7 << 1);
    // 0x801CFD80: multu       $t9, $t6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CFD84: addiu       $a2, $a2, 0x7
    ctx->r6 = ADD32(ctx->r6, 0X7);
    // 0x801CFD88: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x801CFD8C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801CFD90: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x801CFD94: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x801CFD98: or          $t1, $s0, $zero
    ctx->r9 = ctx->r16 | 0;
    // 0x801CFD9C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x801CFDA0: mflo        $t7
    ctx->r15 = lo;
    // 0x801CFDA4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x801CFDA8: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x801CFDAC: sra         $t8, $a2, 3
    ctx->r24 = S32(SIGNED(ctx->r6) >> 3);
    // 0x801CFDB0: andi        $t9, $t8, 0x1FF
    ctx->r25 = ctx->r24 & 0X1FF;
    // 0x801CFDB4: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x801CFDB8: lui         $t8, 0x708
    ctx->r24 = S32(0X708 << 16);
    // 0x801CFDBC: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x801CFDC0: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x801CFDC4: sll         $t6, $t9, 9
    ctx->r14 = S32(ctx->r25 << 9);
    // 0x801CFDC8: or          $a2, $t6, $at
    ctx->r6 = ctx->r14 | ctx->r1;
    // 0x801CFDCC: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x801CFDD0: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x801CFDD4: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x801CFDD8: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x801CFDDC: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x801CFDE0: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x801CFDE4: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x801CFDE8: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x801CFDEC: lui         $t6, 0xF400
    ctx->r14 = S32(0XF400 << 16);
    // 0x801CFDF0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x801CFDF4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CFDF8: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x801CFDFC: addiu       $t0, $t3, -0x1
    ctx->r8 = ADD32(ctx->r11, -0X1);
    // 0x801CFE00: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x801CFE04: sll         $a1, $t8, 12
    ctx->r5 = S32(ctx->r24 << 12);
    // 0x801CFE08: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x801CFE0C: or          $t8, $a1, $at
    ctx->r24 = ctx->r5 | ctx->r1;
    // 0x801CFE10: andi        $t0, $t6, 0xFFF
    ctx->r8 = ctx->r14 & 0XFFF;
    // 0x801CFE14: or          $t9, $t8, $t0
    ctx->r25 = ctx->r24 | ctx->r8;
    // 0x801CFE18: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x801CFE1C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x801CFE20: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801CFE24: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x801CFE28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CFE2C: lui         $t6, 0x8
    ctx->r14 = S32(0X8 << 16);
    // 0x801CFE30: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x801CFE34: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x801CFE38: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x801CFE3C: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x801CFE40: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x801CFE44: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x801CFE48: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x801CFE4C: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x801CFE50: addu        $t9, $t5, $a3
    ctx->r25 = ADD32(ctx->r13, ctx->r7);
    // 0x801CFE54: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x801CFE58: or          $t8, $a1, $t0
    ctx->r24 = ctx->r5 | ctx->r8;
    // 0x801CFE5C: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x801CFE60: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x801CFE64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801CFE68: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x801CFE6C: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x801CFE70: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x801CFE74: addu        $t7, $ra, $t3
    ctx->r15 = ADD32(ctx->r31, ctx->r11);
    // 0x801CFE78: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801CFE7C: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x801CFE80: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801CFE84: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x801CFE88: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x801CFE8C: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x801CFE90: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x801CFE94: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x801CFE98: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x801CFE9C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CFEA0: sll         $t8, $ra, 2
    ctx->r24 = S32(ctx->r31 << 2);
    // 0x801CFEA4: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x801CFEA8: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x801CFEAC: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x801CFEB0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x801CFEB4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x801CFEB8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801CFEBC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x801CFEC0: lui         $t8, 0xB400
    ctx->r24 = S32(0XB400 << 16);
    // 0x801CFEC4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x801CFEC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CFECC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x801CFED0: lui         $t9, 0x1000
    ctx->r25 = S32(0X1000 << 16);
    // 0x801CFED4: ori         $t9, $t9, 0x400
    ctx->r25 = ctx->r25 | 0X400;
    // 0x801CFED8: lui         $t7, 0xB300
    ctx->r15 = S32(0XB300 << 16);
    // 0x801CFEDC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801CFEE0: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x801CFEE4: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x801CFEE8: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x801CFEEC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CFEF0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CFEF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CFEF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CFEFC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801CFF00: jr          $ra
    // 0x801CFF04: nop

    TRACE_RETURN()
    return;
    // 0x801CFF04: nop

;}
RECOMP_FUNC void func_801D21B8_665068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D21B8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D21BC: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x801D21C0: addiu       $a3, $a3, -0x3A38
    ctx->r7 = ADD32(ctx->r7, -0X3A38);
    // 0x801D21C4: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x801D21C8: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x801D21CC: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x801D21D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D21D4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801D21D8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801D21DC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801D21E0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801D21E4: addu        $v0, $t6, $a2
    ctx->r2 = ADD32(ctx->r14, ctx->r6);
    // 0x801D21E8: lhu         $t7, 0x307A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X307A);
    // 0x801D21EC: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801D21F0: lh          $v1, 0x307E($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X307E);
    // 0x801D21F4: ori         $t9, $t7, 0x200
    ctx->r25 = ctx->r15 | 0X200;
    // 0x801D21F8: slti        $at, $v1, -0x28
    ctx->r1 = SIGNED(ctx->r3) < -0X28 ? 1 : 0;
    // 0x801D21FC: beql        $at, $zero, L_801D2210
    if (ctx->r1 == 0) {
        // 0x801D2200: slti        $at, $v1, 0x29
        ctx->r1 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
            goto L_801D2210;
    }
    goto skip_0;
    // 0x801D2200: slti        $at, $v1, 0x29
    ctx->r1 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    skip_0:
    // 0x801D2204: b           L_801D2220
    // 0x801D2208: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
        goto L_801D2220;
    // 0x801D2208: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801D220C: slti        $at, $v1, 0x29
    ctx->r1 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
L_801D2210:
    // 0x801D2210: bne         $at, $zero, L_801D2220
    if (ctx->r1 != 0) {
        // 0x801D2214: lw          $t1, 0x30($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X30);
            goto L_801D2220;
    }
    // 0x801D2214: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x801D2218: ori         $t2, $t1, 0x100
    ctx->r10 = ctx->r9 | 0X100;
    // 0x801D221C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
L_801D2220:
    // 0x801D2220: lh          $v1, 0x3080($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X3080);
    // 0x801D2224: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x801D2228: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801D222C: slti        $at, $v1, -0x28
    ctx->r1 = SIGNED(ctx->r3) < -0X28 ? 1 : 0;
    // 0x801D2230: beq         $at, $zero, L_801D2240
    if (ctx->r1 == 0) {
        // 0x801D2234: ori         $t4, $t3, 0x400
        ctx->r12 = ctx->r11 | 0X400;
            goto L_801D2240;
    }
    // 0x801D2234: ori         $t4, $t3, 0x400
    ctx->r12 = ctx->r11 | 0X400;
    // 0x801D2238: b           L_801D2254
    // 0x801D223C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
        goto L_801D2254;
    // 0x801D223C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
L_801D2240:
    // 0x801D2240: slti        $at, $v1, 0x29
    ctx->r1 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x801D2244: bne         $at, $zero, L_801D2254
    if (ctx->r1 != 0) {
        // 0x801D2248: lw          $t5, 0x30($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X30);
            goto L_801D2254;
    }
    // 0x801D2248: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x801D224C: ori         $t6, $t5, 0x800
    ctx->r14 = ctx->r13 | 0X800;
    // 0x801D2250: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
L_801D2254:
    // 0x801D2254: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x801D2258: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x801D225C: lw          $t8, 0x84($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X84);
    // 0x801D2260: addiu       $s1, $s1, 0x5C
    ctx->r17 = ADD32(ctx->r17, 0X5C);
    // 0x801D2264: bnel        $t7, $t8, L_801D2280
    if (ctx->r15 != ctx->r24) {
        // 0x801D2268: sh          $t2, 0x24($s1)
        MEM_H(0X24, ctx->r17) = ctx->r10;
            goto L_801D2280;
    }
    goto skip_1;
    // 0x801D2268: sh          $t2, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r10;
    skip_1:
    // 0x801D226C: lh          $t9, 0x24($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X24);
    // 0x801D2270: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x801D2274: b           L_801D2280
    // 0x801D2278: sh          $t1, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r9;
        goto L_801D2280;
    // 0x801D2278: sh          $t1, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r9;
    // 0x801D227C: sh          $t2, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r10;
L_801D2280:
    // 0x801D2280: lbu         $t3, 0x1C($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X1C);
    // 0x801D2284: sltiu       $at, $t3, 0xA
    ctx->r1 = ctx->r11 < 0XA ? 1 : 0;
    // 0x801D2288: beq         $at, $zero, L_801D318C
    if (ctx->r1 == 0) {
        // 0x801D228C: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_801D318C;
    }
    // 0x801D228C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x801D2290: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801D2294: addu        $at, $at, $t3
    gpr jr_addend_801D229C = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801D2298: lw          $t3, 0x4CB0($at)
    ctx->r11 = ADD32(ctx->r1, 0X4CB0);
    // 0x801D229C: jr          $t3
    // 0x801D22A0: nop

    switch (jr_addend_801D229C >> 2) {
        case 0: goto L_801D22A4; break;
        case 1: goto L_801D2428; break;
        case 2: goto L_801D25F0; break;
        case 3: goto L_801D2768; break;
        case 4: goto L_801D2BF8; break;
        case 5: goto L_801D2788; break;
        case 6: goto L_801D27A8; break;
        case 7: goto L_801D29EC; break;
        case 8: goto L_801D2C18; break;
        case 9: goto L_801D2E30; break;
        default: switch_error(__func__, 0x801D229C, 0x801D4CB0);
    }
    // 0x801D22A0: nop

L_801D22A4:
    // 0x801D22A4: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    // 0x801D22A8: jal         0x801D1B50
    // 0x801D22AC: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_801D1B50_664A00(rdram, ctx);
        goto after_0;
    // 0x801D22AC: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_0:
    // 0x801D22B0: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    // 0x801D22B4: jal         0x801D1B6C
    // 0x801D22B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_801D1B6C_664A1C(rdram, ctx);
        goto after_1;
    // 0x801D22B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x801D22BC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D22C0: addiu       $a1, $zero, -0x10
    ctx->r5 = ADD32(0, -0X10);
    // 0x801D22C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D22C8: jal         0x801CBBC4
    // 0x801D22CC: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_801CBBC4_65EA74(rdram, ctx);
        goto after_2;
    // 0x801D22CC: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_2:
    // 0x801D22D0: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x801D22D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801D22D8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D22DC: addiu       $a1, $zero, 0xF4
    ctx->r5 = ADD32(0, 0XF4);
    // 0x801D22E0: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x801D22E4: jal         0x801CC5C8
    // 0x801D22E8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_3;
    // 0x801D22E8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_3:
    // 0x801D22EC: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x801D22F0: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x801D22F4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D22F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D22FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D2300: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D2304: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D2308: jal         0x801CC56C
    // 0x801D230C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801CC56C_65F41C(rdram, ctx);
        goto after_4;
    // 0x801D230C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x801D2310: lui         $t5, 0x801D
    ctx->r13 = S32(0X801D << 16);
    // 0x801D2314: lw          $t5, 0x3510($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3510);
    // 0x801D2318: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x801D231C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801D2320: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801D2324: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801D2328: jal         0x801CB6AC
    // 0x801D232C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_5;
    // 0x801D232C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_5:
    // 0x801D2330: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801D2334: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D2338: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D233C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x801D2340: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801D2344: jal         0x801CB684
    // 0x801D2348: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801CB684_65E534(rdram, ctx);
        goto after_6;
    // 0x801D2348: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x801D234C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801D2350: addiu       $v0, $v0, -0x33E8
    ctx->r2 = ADD32(ctx->r2, -0X33E8);
    // 0x801D2354: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x801D2358: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x801D235C: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x801D2360: bne         $t7, $zero, L_801D2380
    if (ctx->r15 != 0) {
        // 0x801D2364: addiu       $t8, $a0, 0x7FFF
        ctx->r24 = ADD32(ctx->r4, 0X7FFF);
            goto L_801D2380;
    }
    // 0x801D2364: addiu       $t8, $a0, 0x7FFF
    ctx->r24 = ADD32(ctx->r4, 0X7FFF);
    // 0x801D2368: lw          $t8, 0x78A9($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X78A9);
    // 0x801D236C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801D2370: addiu       $v1, $v1, 0x3534
    ctx->r3 = ADD32(ctx->r3, 0X3534);
    // 0x801D2374: bne         $t8, $zero, L_801D2380
    if (ctx->r24 != 0) {
        // 0x801D2378: addiu       $t9, $zero, 0xFF
        ctx->r25 = ADD32(0, 0XFF);
            goto L_801D2380;
    }
    // 0x801D2378: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x801D237C: sb          $t9, 0x24($v1)
    MEM_B(0X24, ctx->r3) = ctx->r25;
L_801D2380:
    // 0x801D2380: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x801D2384: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801D2388: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x801D238C: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x801D2390: bne         $t1, $zero, L_801D23B0
    if (ctx->r9 != 0) {
        // 0x801D2394: addiu       $v1, $v1, 0x3534
        ctx->r3 = ADD32(ctx->r3, 0X3534);
            goto L_801D23B0;
    }
    // 0x801D2394: addiu       $v1, $v1, 0x3534
    ctx->r3 = ADD32(ctx->r3, 0X3534);
    // 0x801D2398: addiu       $t2, $a0, 0x7FFF
    ctx->r10 = ADD32(ctx->r4, 0X7FFF);
    // 0x801D239C: lw          $t2, 0x78AD($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X78AD);
    // 0x801D23A0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801D23A4: bnel        $t2, $zero, L_801D23B4
    if (ctx->r10 != 0) {
        // 0x801D23A8: lw          $t4, 0x0($v0)
        ctx->r12 = MEM_W(ctx->r2, 0X0);
            goto L_801D23B4;
    }
    goto skip_2;
    // 0x801D23A8: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    skip_2:
    // 0x801D23AC: sb          $t3, 0x48($v1)
    MEM_B(0X48, ctx->r3) = ctx->r11;
L_801D23B0:
    // 0x801D23B0: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
L_801D23B4:
    // 0x801D23B4: addiu       $t5, $a0, 0x7FFF
    ctx->r13 = ADD32(ctx->r4, 0X7FFF);
    // 0x801D23B8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x801D23BC: bne         $t4, $zero, L_801D23D8
    if (ctx->r12 != 0) {
        // 0x801D23C0: nop
    
            goto L_801D23D8;
    }
    // 0x801D23C0: nop

    // 0x801D23C4: lw          $t5, 0x78A5($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X78A5);
    // 0x801D23C8: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x801D23CC: ori         $at, $at, 0x6FFF
    ctx->r1 = ctx->r1 | 0X6FFF;
    // 0x801D23D0: beq         $t5, $zero, L_801D23E0
    if (ctx->r13 == 0) {
        // 0x801D23D4: lw          $t7, 0x30($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X30);
            goto L_801D23E0;
    }
    // 0x801D23D4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
L_801D23D8:
    // 0x801D23D8: b           L_801D2420
    // 0x801D23DC: sb          $t6, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r14;
        goto L_801D2420;
    // 0x801D23DC: sb          $t6, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r14;
L_801D23E0:
    // 0x801D23E0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x801D23E4: addiu       $at, $zero, 0x2003
    ctx->r1 = ADD32(0, 0X2003);
    // 0x801D23E8: bne         $t8, $at, L_801D2418
    if (ctx->r24 != ctx->r1) {
        // 0x801D23EC: lui         $t9, 0x8016
        ctx->r25 = S32(0X8016 << 16);
            goto L_801D2418;
    }
    // 0x801D23EC: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801D23F0: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801D23F4: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x801D23F8: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x801D23FC: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x801D2400: lhu         $t1, -0x51EC($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X51EC);
    // 0x801D2404: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x801D2408: bnel        $t1, $at, L_801D241C
    if (ctx->r9 != ctx->r1) {
        // 0x801D240C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_801D241C;
    }
    goto skip_3;
    // 0x801D240C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    skip_3:
    // 0x801D2410: b           L_801D2420
    // 0x801D2414: sb          $t2, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r10;
        goto L_801D2420;
    // 0x801D2414: sb          $t2, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r10;
L_801D2418:
    // 0x801D2418: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_801D241C:
    // 0x801D241C: sb          $t3, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r11;
L_801D2420:
    // 0x801D2420: b           L_801D318C
    // 0x801D2424: sh          $zero, 0x20($s1)
    MEM_H(0X20, ctx->r17) = 0;
        goto L_801D318C;
    // 0x801D2424: sh          $zero, 0x20($s1)
    MEM_H(0X20, ctx->r17) = 0;
L_801D2428:
    // 0x801D2428: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D242C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_801D2430:
    // 0x801D2430: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x801D2434: jal         0x800116AC
    // 0x801D2438: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_800116AC_122AC(rdram, ctx);
        goto after_7;
    // 0x801D2438: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_7:
    // 0x801D243C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801D2440: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801D2444: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x801D2448: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801D244C: bne         $v1, $at, L_801D2430
    if (ctx->r3 != ctx->r1) {
        // 0x801D2450: sw          $v0, 0x38($s0)
        MEM_W(0X38, ctx->r16) = ctx->r2;
            goto L_801D2430;
    }
    // 0x801D2450: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x801D2454: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801D2458: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D245C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D2460: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    // 0x801D2464: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x801D2468: jal         0x801CC5C8
    // 0x801D246C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_8;
    // 0x801D246C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_8:
    // 0x801D2470: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x801D2474: addiu       $t5, $zero, 0x60
    ctx->r13 = ADD32(0, 0X60);
    // 0x801D2478: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801D247C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D2480: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D2484: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801D2488: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D248C: jal         0x801CC56C
    // 0x801D2490: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_9;
    // 0x801D2490: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_9:
    // 0x801D2494: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801D2498: lw          $t6, 0x3514($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3514);
    // 0x801D249C: lw          $a0, 0x3C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X3C);
    // 0x801D24A0: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x801D24A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801D24A8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x801D24AC: jal         0x801CB6AC
    // 0x801D24B0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_10;
    // 0x801D24B0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_10:
    // 0x801D24B4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x801D24B8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801D24BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D24C0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x801D24C4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801D24C8: jal         0x801CB684
    // 0x801D24CC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_801CB684_65E534(rdram, ctx);
        goto after_11;
    // 0x801D24CC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_11:
    // 0x801D24D0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x801D24D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D24D8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D24DC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D24E0: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    // 0x801D24E4: jal         0x801CC5C8
    // 0x801D24E8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_12;
    // 0x801D24E8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_12:
    // 0x801D24EC: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x801D24F0: addiu       $t9, $zero, 0x60
    ctx->r25 = ADD32(0, 0X60);
    // 0x801D24F4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801D24F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D24FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D2500: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801D2504: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D2508: jal         0x801CC56C
    // 0x801D250C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_13;
    // 0x801D250C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_13:
    // 0x801D2510: lui         $t1, 0x801D
    ctx->r9 = S32(0X801D << 16);
    // 0x801D2514: lw          $t1, 0x3518($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3518);
    // 0x801D2518: lw          $a0, 0x40($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X40);
    // 0x801D251C: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x801D2520: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801D2524: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x801D2528: jal         0x801CB6AC
    // 0x801D252C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_14;
    // 0x801D252C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_14:
    // 0x801D2530: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x801D2534: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801D2538: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D253C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D2540: addiu       $a2, $zero, 0x90
    ctx->r6 = ADD32(0, 0X90);
    // 0x801D2544: jal         0x801CC5C8
    // 0x801D2548: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_15;
    // 0x801D2548: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_15:
    // 0x801D254C: sw          $v0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r2;
    // 0x801D2550: addiu       $t3, $zero, 0x60
    ctx->r11 = ADD32(0, 0X60);
    // 0x801D2554: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D2558: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D255C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D2560: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801D2564: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D2568: jal         0x801CC56C
    // 0x801D256C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_16;
    // 0x801D256C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_16:
    // 0x801D2570: lui         $t4, 0x801D
    ctx->r12 = S32(0X801D << 16);
    // 0x801D2574: lw          $t4, 0x351C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X351C);
    // 0x801D2578: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x801D257C: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    // 0x801D2580: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801D2584: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x801D2588: jal         0x801CB6AC
    // 0x801D258C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_17;
    // 0x801D258C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_17:
    // 0x801D2590: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801D2594: sb          $t5, 0x1E($s1)
    MEM_B(0X1E, ctx->r17) = ctx->r13;
    // 0x801D2598: lb          $t6, 0x1E($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X1E);
    // 0x801D259C: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x801D25A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801D25A4: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x801D25A8: jal         0x801D2150
    // 0x801D25AC: lw          $a1, 0x3C($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X3C);
    func_801D2150_665000(rdram, ctx);
        goto after_18;
    // 0x801D25AC: lw          $a1, 0x3C($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X3C);
    after_18:
    // 0x801D25B0: lb          $t9, 0x1E($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X1E);
    // 0x801D25B4: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x801D25B8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801D25BC: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x801D25C0: addu        $t2, $s1, $t1
    ctx->r10 = ADD32(ctx->r17, ctx->r9);
    // 0x801D25C4: lw          $a0, 0x3C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X3C);
    // 0x801D25C8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801D25CC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D25D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D25D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D25D8: jal         0x801CC56C
    // 0x801D25DC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_19;
    // 0x801D25DC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_19:
    // 0x801D25E0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x801D25E4: sh          $zero, 0x20($s1)
    MEM_H(0X20, ctx->r17) = 0;
    // 0x801D25E8: b           L_801D318C
    // 0x801D25EC: sb          $t5, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r13;
        goto L_801D318C;
    // 0x801D25EC: sb          $t5, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r13;
L_801D25F0:
    // 0x801D25F0: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
    // 0x801D25F4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x801D25F8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x801D25FC: sll         $t0, $v1, 24
    ctx->r8 = S32(ctx->r3 << 24);
    // 0x801D2600: sra         $t6, $t0, 24
    ctx->r14 = S32(SIGNED(ctx->r8) >> 24);
    // 0x801D2604: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x801D2608: beq         $t8, $zero, L_801D2620
    if (ctx->r24 == 0) {
        // 0x801D260C: or          $t0, $t6, $zero
        ctx->r8 = ctx->r14 | 0;
            goto L_801D2620;
    }
    // 0x801D260C: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
    // 0x801D2610: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D2614: sb          $t9, 0x1E($s1)
    MEM_B(0X1E, ctx->r17) = ctx->r25;
    // 0x801D2618: b           L_801D2634
    // 0x801D261C: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
        goto L_801D2634;
    // 0x801D261C: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
L_801D2620:
    // 0x801D2620: andi        $t2, $t1, 0x400
    ctx->r10 = ctx->r9 & 0X400;
    // 0x801D2624: beq         $t2, $zero, L_801D2634
    if (ctx->r10 == 0) {
        // 0x801D2628: addiu       $t3, $zero, 0x2
        ctx->r11 = ADD32(0, 0X2);
            goto L_801D2634;
    }
    // 0x801D2628: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x801D262C: sb          $t3, 0x1E($s1)
    MEM_B(0X1E, ctx->r17) = ctx->r11;
    // 0x801D2630: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
L_801D2634:
    // 0x801D2634: beq         $t0, $v1, L_801D26B8
    if (ctx->r8 == ctx->r3) {
        // 0x801D2638: addiu       $a0, $zero, 0x2A6
        ctx->r4 = ADD32(0, 0X2A6);
            goto L_801D26B8;
    }
    // 0x801D2638: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    // 0x801D263C: jal         0x80038B98
    // 0x801D2640: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    func_80038B98_39798(rdram, ctx);
        goto after_20;
    // 0x801D2640: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    after_20:
    // 0x801D2644: lb          $t0, 0x37($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X37);
    // 0x801D2648: addiu       $t6, $zero, 0x60
    ctx->r14 = ADD32(0, 0X60);
    // 0x801D264C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801D2650: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x801D2654: addu        $t5, $s1, $t4
    ctx->r13 = ADD32(ctx->r17, ctx->r12);
    // 0x801D2658: lw          $a0, 0x3C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X3C);
    // 0x801D265C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D2660: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D2664: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D2668: jal         0x801CC56C
    // 0x801D266C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_21;
    // 0x801D266C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_21:
    // 0x801D2670: lb          $t7, 0x1E($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X1E);
    // 0x801D2674: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801D2678: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801D267C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801D2680: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x801D2684: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    // 0x801D2688: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801D268C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801D2690: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D2694: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D2698: jal         0x801CC56C
    // 0x801D269C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_22;
    // 0x801D269C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_22:
    // 0x801D26A0: lb          $t3, 0x1E($s1)
    ctx->r11 = MEM_B(ctx->r17, 0X1E);
    // 0x801D26A4: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x801D26A8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801D26AC: addu        $t5, $s1, $t4
    ctx->r13 = ADD32(ctx->r17, ctx->r12);
    // 0x801D26B0: jal         0x801D2150
    // 0x801D26B4: lw          $a1, 0x3C($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X3C);
    func_801D2150_665000(rdram, ctx);
        goto after_23;
    // 0x801D26B4: lw          $a1, 0x3C($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X3C);
    after_23:
L_801D26B8:
    // 0x801D26B8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x801D26BC: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x801D26C0: beql        $t7, $zero, L_801D2730
    if (ctx->r15 == 0) {
        // 0x801D26C4: lw          $t3, 0x30($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X30);
            goto L_801D2730;
    }
    goto skip_4;
    // 0x801D26C4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    skip_4:
    // 0x801D26C8: lh          $t8, 0x24($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X24);
    // 0x801D26CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D26D0: bnel        $t8, $at, L_801D2730
    if (ctx->r24 != ctx->r1) {
        // 0x801D26D4: lw          $t3, 0x30($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X30);
            goto L_801D2730;
    }
    goto skip_5;
    // 0x801D26D4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    skip_5:
    // 0x801D26D8: jal         0x80038B98
    // 0x801D26DC: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    func_80038B98_39798(rdram, ctx);
        goto after_24;
    // 0x801D26DC: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_24:
    // 0x801D26E0: lb          $v0, 0x1E($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1E);
    // 0x801D26E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D26E8: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x801D26EC: beq         $v0, $at, L_801D2704
    if (ctx->r2 == ctx->r1) {
        // 0x801D26F0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801D2704;
    }
    // 0x801D26F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D26F4: beq         $v0, $at, L_801D271C
    if (ctx->r2 == ctx->r1) {
        // 0x801D26F8: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_801D271C;
    }
    // 0x801D26F8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801D26FC: b           L_801D2730
    // 0x801D2700: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
        goto L_801D2730;
    // 0x801D2700: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
L_801D2704:
    // 0x801D2704: jal         0x801D1B6C
    // 0x801D2708: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    func_801D1B6C_664A1C(rdram, ctx);
        goto after_25;
    // 0x801D2708: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    after_25:
    // 0x801D270C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x801D2710: sh          $zero, 0x20($s1)
    MEM_H(0X20, ctx->r17) = 0;
    // 0x801D2714: b           L_801D272C
    // 0x801D2718: sb          $t9, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r25;
        goto L_801D272C;
    // 0x801D2718: sb          $t9, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r25;
L_801D271C:
    // 0x801D271C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x801D2720: sh          $zero, 0x20($s1)
    MEM_H(0X20, ctx->r17) = 0;
    // 0x801D2724: sb          $t1, 0x1D($s1)
    MEM_B(0X1D, ctx->r17) = ctx->r9;
    // 0x801D2728: sb          $t2, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r10;
L_801D272C:
    // 0x801D272C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
L_801D2730:
    // 0x801D2730: andi        $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 & 0X4000;
    // 0x801D2734: beql        $t4, $zero, L_801D3190
    if (ctx->r12 == 0) {
        // 0x801D2738: lh          $t2, 0x20($s1)
        ctx->r10 = MEM_H(ctx->r17, 0X20);
            goto L_801D3190;
    }
    goto skip_6;
    // 0x801D2738: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
    skip_6:
    // 0x801D273C: lh          $t5, 0x24($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X24);
    // 0x801D2740: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D2744: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x801D2748: bnel        $t5, $at, L_801D3190
    if (ctx->r13 != ctx->r1) {
        // 0x801D274C: lh          $t2, 0x20($s1)
        ctx->r10 = MEM_H(ctx->r17, 0X20);
            goto L_801D3190;
    }
    goto skip_7;
    // 0x801D274C: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
    skip_7:
    // 0x801D2750: jal         0x801D1B6C
    // 0x801D2754: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    func_801D1B6C_664A1C(rdram, ctx);
        goto after_26;
    // 0x801D2754: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    after_26:
    // 0x801D2758: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x801D275C: sh          $zero, 0x20($s1)
    MEM_H(0X20, ctx->r17) = 0;
    // 0x801D2760: b           L_801D318C
    // 0x801D2764: sb          $t6, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r14;
        goto L_801D318C;
    // 0x801D2764: sb          $t6, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r14;
L_801D2768:
    // 0x801D2768: lh          $t7, 0x20($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X20);
    // 0x801D276C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x801D2770: bnel        $t7, $at, L_801D3190
    if (ctx->r15 != ctx->r1) {
        // 0x801D2774: lh          $t2, 0x20($s1)
        ctx->r10 = MEM_H(ctx->r17, 0X20);
            goto L_801D3190;
    }
    goto skip_8;
    // 0x801D2774: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
    skip_8:
    // 0x801D2778: jal         0x80037060
    // 0x801D277C: nop

    func_80037060_37C60(rdram, ctx);
        goto after_27;
    // 0x801D277C: nop

    after_27:
    // 0x801D2780: b           L_801D3190
    // 0x801D2784: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
        goto L_801D3190;
    // 0x801D2784: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
L_801D2788:
    // 0x801D2788: lh          $t8, 0x20($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X20);
    // 0x801D278C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x801D2790: bnel        $t8, $at, L_801D3190
    if (ctx->r24 != ctx->r1) {
        // 0x801D2794: lh          $t2, 0x20($s1)
        ctx->r10 = MEM_H(ctx->r17, 0X20);
            goto L_801D3190;
    }
    goto skip_9;
    // 0x801D2794: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
    skip_9:
    // 0x801D2798: jal         0x80037080
    // 0x801D279C: nop

    func_80037080_37C80(rdram, ctx);
        goto after_28;
    // 0x801D279C: nop

    after_28:
    // 0x801D27A0: b           L_801D3190
    // 0x801D27A4: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
        goto L_801D3190;
    // 0x801D27A4: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
L_801D27A8:
    // 0x801D27A8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D27AC: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_801D27B0:
    // 0x801D27B0: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x801D27B4: jal         0x800116AC
    // 0x801D27B8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_800116AC_122AC(rdram, ctx);
        goto after_29;
    // 0x801D27B8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_29:
    // 0x801D27BC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801D27C0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801D27C4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x801D27C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801D27CC: bne         $v1, $at, L_801D27B0
    if (ctx->r3 != ctx->r1) {
        // 0x801D27D0: sw          $v0, 0x38($s0)
        MEM_W(0X38, ctx->r16) = ctx->r2;
            goto L_801D27B0;
    }
    // 0x801D27D0: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x801D27D4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D27D8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801D27DC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D27E0: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    // 0x801D27E4: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x801D27E8: jal         0x801CC5C8
    // 0x801D27EC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_30;
    // 0x801D27EC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_30:
    // 0x801D27F0: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x801D27F4: addiu       $t1, $zero, 0x60
    ctx->r9 = ADD32(0, 0X60);
    // 0x801D27F8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801D27FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D2800: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D2804: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801D2808: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D280C: jal         0x801CC56C
    // 0x801D2810: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_31;
    // 0x801D2810: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_31:
    // 0x801D2814: lui         $t2, 0x801D
    ctx->r10 = S32(0X801D << 16);
    // 0x801D2818: lw          $t2, 0x3514($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3514);
    // 0x801D281C: lw          $a0, 0x3C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X3C);
    // 0x801D2820: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x801D2824: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801D2828: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x801D282C: jal         0x801CB6AC
    // 0x801D2830: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_32;
    // 0x801D2830: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_32:
    // 0x801D2834: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x801D2838: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D283C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D2840: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x801D2844: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801D2848: jal         0x801CB684
    // 0x801D284C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_801CB684_65E534(rdram, ctx);
        goto after_33;
    // 0x801D284C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_33:
    // 0x801D2850: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x801D2854: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D2858: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D285C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D2860: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x801D2864: jal         0x801CC5C8
    // 0x801D2868: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_34;
    // 0x801D2868: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_34:
    // 0x801D286C: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x801D2870: addiu       $t5, $zero, 0x60
    ctx->r13 = ADD32(0, 0X60);
    // 0x801D2874: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801D2878: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D287C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D2880: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801D2884: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D2888: jal         0x801CC56C
    // 0x801D288C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_35;
    // 0x801D288C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_35:
    // 0x801D2890: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801D2894: lw          $t6, 0x3518($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3518);
    // 0x801D2898: lw          $a0, 0x40($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X40);
    // 0x801D289C: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x801D28A0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801D28A4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x801D28A8: jal         0x801CB6AC
    // 0x801D28AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_36;
    // 0x801D28AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_36:
    // 0x801D28B0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x801D28B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801D28B8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D28BC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D28C0: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x801D28C4: jal         0x801CC5C8
    // 0x801D28C8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_37;
    // 0x801D28C8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_37:
    // 0x801D28CC: sw          $v0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r2;
    // 0x801D28D0: addiu       $t8, $zero, 0x60
    ctx->r24 = ADD32(0, 0X60);
    // 0x801D28D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D28D8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D28DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D28E0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801D28E4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D28E8: jal         0x801CC56C
    // 0x801D28EC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_38;
    // 0x801D28EC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_38:
    // 0x801D28F0: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x801D28F4: lw          $t9, 0x351C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X351C);
    // 0x801D28F8: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x801D28FC: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    // 0x801D2900: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801D2904: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x801D2908: jal         0x801CB6AC
    // 0x801D290C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_39;
    // 0x801D290C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_39:
    // 0x801D2910: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x801D2914: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801D2918: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D291C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D2920: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    // 0x801D2924: jal         0x801CC5C8
    // 0x801D2928: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_40;
    // 0x801D2928: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_40:
    // 0x801D292C: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x801D2930: addiu       $t2, $zero, 0x60
    ctx->r10 = ADD32(0, 0X60);
    // 0x801D2934: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801D2938: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D293C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D2940: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801D2944: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D2948: jal         0x801CC56C
    // 0x801D294C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_41;
    // 0x801D294C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_41:
    // 0x801D2950: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801D2954: lw          $t3, 0x3520($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3520);
    // 0x801D2958: lw          $a0, 0x48($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X48);
    // 0x801D295C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x801D2960: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801D2964: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x801D2968: jal         0x801CB6AC
    // 0x801D296C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_42;
    // 0x801D296C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_42:
    // 0x801D2970: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x801D2974: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D2978: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D297C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x801D2980: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801D2984: jal         0x801CB684
    // 0x801D2988: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801CB684_65E534(rdram, ctx);
        goto after_43;
    // 0x801D2988: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_43:
    // 0x801D298C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801D2990: sb          $t5, 0x1E($s1)
    MEM_B(0X1E, ctx->r17) = ctx->r13;
    // 0x801D2994: lb          $t6, 0x1E($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X1E);
    // 0x801D2998: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x801D299C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801D29A0: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x801D29A4: jal         0x801D2150
    // 0x801D29A8: lw          $a1, 0x3C($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X3C);
    func_801D2150_665000(rdram, ctx);
        goto after_44;
    // 0x801D29A8: lw          $a1, 0x3C($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X3C);
    after_44:
    // 0x801D29AC: lb          $t9, 0x1E($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X1E);
    // 0x801D29B0: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x801D29B4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801D29B8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x801D29BC: addu        $t2, $s1, $t1
    ctx->r10 = ADD32(ctx->r17, ctx->r9);
    // 0x801D29C0: lw          $a0, 0x3C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X3C);
    // 0x801D29C4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801D29C8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D29CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D29D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D29D4: jal         0x801CC56C
    // 0x801D29D8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_45;
    // 0x801D29D8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_45:
    // 0x801D29DC: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x801D29E0: sh          $zero, 0x20($s1)
    MEM_H(0X20, ctx->r17) = 0;
    // 0x801D29E4: b           L_801D318C
    // 0x801D29E8: sb          $t5, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r13;
        goto L_801D318C;
    // 0x801D29E8: sb          $t5, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r13;
L_801D29EC:
    // 0x801D29EC: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
    // 0x801D29F0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x801D29F4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x801D29F8: sll         $t0, $v1, 24
    ctx->r8 = S32(ctx->r3 << 24);
    // 0x801D29FC: sra         $t6, $t0, 24
    ctx->r14 = S32(SIGNED(ctx->r8) >> 24);
    // 0x801D2A00: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x801D2A04: beq         $t8, $zero, L_801D2A4C
    if (ctx->r24 == 0) {
        // 0x801D2A08: or          $t0, $t6, $zero
        ctx->r8 = ctx->r14 | 0;
            goto L_801D2A4C;
    }
    // 0x801D2A08: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
    // 0x801D2A0C: lh          $v0, 0x24($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X24);
    // 0x801D2A10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D2A14: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x801D2A18: beq         $a1, $v0, L_801D2A30
    if (ctx->r5 == ctx->r2) {
        // 0x801D2A1C: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_801D2A30;
    }
    // 0x801D2A1C: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x801D2A20: bne         $at, $zero, L_801D2A4C
    if (ctx->r1 != 0) {
        // 0x801D2A24: andi        $t9, $v0, 0x3
        ctx->r25 = ctx->r2 & 0X3;
            goto L_801D2A4C;
    }
    // 0x801D2A24: andi        $t9, $v0, 0x3
    ctx->r25 = ctx->r2 & 0X3;
    // 0x801D2A28: bnel        $t9, $zero, L_801D2A50
    if (ctx->r25 != 0) {
        // 0x801D2A2C: andi        $t3, $t2, 0x400
        ctx->r11 = ctx->r10 & 0X400;
            goto L_801D2A50;
    }
    goto skip_10;
    // 0x801D2A2C: andi        $t3, $t2, 0x400
    ctx->r11 = ctx->r10 & 0X400;
    skip_10:
L_801D2A30:
    // 0x801D2A30: sb          $t1, 0x1E($s1)
    MEM_B(0X1E, ctx->r17) = ctx->r9;
    // 0x801D2A34: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
    // 0x801D2A38: bgtz        $v1, L_801D2A98
    if (SIGNED(ctx->r3) > 0) {
        // 0x801D2A3C: nop
    
            goto L_801D2A98;
    }
    // 0x801D2A3C: nop

    // 0x801D2A40: sb          $a1, 0x1E($s1)
    MEM_B(0X1E, ctx->r17) = ctx->r5;
    // 0x801D2A44: b           L_801D2A98
    // 0x801D2A48: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
        goto L_801D2A98;
    // 0x801D2A48: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
L_801D2A4C:
    // 0x801D2A4C: andi        $t3, $t2, 0x400
    ctx->r11 = ctx->r10 & 0X400;
L_801D2A50:
    // 0x801D2A50: beq         $t3, $zero, L_801D2A98
    if (ctx->r11 == 0) {
        // 0x801D2A54: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_801D2A98;
    }
    // 0x801D2A54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D2A58: lh          $v0, 0x24($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X24);
    // 0x801D2A5C: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    // 0x801D2A60: beq         $a1, $v0, L_801D2A78
    if (ctx->r5 == ctx->r2) {
        // 0x801D2A64: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_801D2A78;
    }
    // 0x801D2A64: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x801D2A68: bne         $at, $zero, L_801D2A98
    if (ctx->r1 != 0) {
        // 0x801D2A6C: andi        $t4, $v0, 0x3
        ctx->r12 = ctx->r2 & 0X3;
            goto L_801D2A98;
    }
    // 0x801D2A6C: andi        $t4, $v0, 0x3
    ctx->r12 = ctx->r2 & 0X3;
    // 0x801D2A70: bne         $t4, $zero, L_801D2A98
    if (ctx->r12 != 0) {
        // 0x801D2A74: nop
    
            goto L_801D2A98;
    }
    // 0x801D2A74: nop

L_801D2A78:
    // 0x801D2A78: sb          $t5, 0x1E($s1)
    MEM_B(0X1E, ctx->r17) = ctx->r13;
    // 0x801D2A7C: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
    // 0x801D2A80: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x801D2A84: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x801D2A88: bne         $at, $zero, L_801D2A98
    if (ctx->r1 != 0) {
        // 0x801D2A8C: nop
    
            goto L_801D2A98;
    }
    // 0x801D2A8C: nop

    // 0x801D2A90: sb          $t6, 0x1E($s1)
    MEM_B(0X1E, ctx->r17) = ctx->r14;
    // 0x801D2A94: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
L_801D2A98:
    // 0x801D2A98: beq         $t0, $v1, L_801D2B20
    if (ctx->r8 == ctx->r3) {
        // 0x801D2A9C: addiu       $a0, $zero, 0x2A6
        ctx->r4 = ADD32(0, 0X2A6);
            goto L_801D2B20;
    }
    // 0x801D2A9C: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    // 0x801D2AA0: jal         0x80038B98
    // 0x801D2AA4: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    func_80038B98_39798(rdram, ctx);
        goto after_46;
    // 0x801D2AA4: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    after_46:
    // 0x801D2AA8: lb          $t0, 0x37($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X37);
    // 0x801D2AAC: addiu       $t9, $zero, 0x60
    ctx->r25 = ADD32(0, 0X60);
    // 0x801D2AB0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801D2AB4: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x801D2AB8: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x801D2ABC: lw          $a0, 0x3C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X3C);
    // 0x801D2AC0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D2AC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801D2AC8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D2ACC: jal         0x801CC56C
    // 0x801D2AD0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_47;
    // 0x801D2AD0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_47:
    // 0x801D2AD4: lb          $t1, 0x1E($s1)
    ctx->r9 = MEM_B(ctx->r17, 0X1E);
    // 0x801D2AD8: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x801D2ADC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801D2AE0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801D2AE4: addu        $t3, $s1, $t2
    ctx->r11 = ADD32(ctx->r17, ctx->r10);
    // 0x801D2AE8: lw          $a0, 0x3C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X3C);
    // 0x801D2AEC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801D2AF0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D2AF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D2AF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D2AFC: jal         0x801CC56C
    // 0x801D2B00: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_48;
    // 0x801D2B00: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_48:
    // 0x801D2B04: lb          $t6, 0x1E($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X1E);
    // 0x801D2B08: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x801D2B0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801D2B10: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x801D2B14: jal         0x801D2150
    // 0x801D2B18: lw          $a1, 0x3C($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X3C);
    func_801D2150_665000(rdram, ctx);
        goto after_49;
    // 0x801D2B18: lw          $a1, 0x3C($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X3C);
    after_49:
    // 0x801D2B1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_801D2B20:
    // 0x801D2B20: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x801D2B24: andi        $t1, $t9, 0x8000
    ctx->r9 = ctx->r25 & 0X8000;
    // 0x801D2B28: beql        $t1, $zero, L_801D2BC4
    if (ctx->r9 == 0) {
        // 0x801D2B2C: lw          $t7, 0x30($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X30);
            goto L_801D2BC4;
    }
    goto skip_11;
    // 0x801D2B2C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    skip_11:
    // 0x801D2B30: lh          $t2, 0x24($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X24);
    // 0x801D2B34: bnel        $a1, $t2, L_801D2BC4
    if (ctx->r5 != ctx->r10) {
        // 0x801D2B38: lw          $t7, 0x30($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X30);
            goto L_801D2BC4;
    }
    goto skip_12;
    // 0x801D2B38: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    skip_12:
    // 0x801D2B3C: jal         0x80038B98
    // 0x801D2B40: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    func_80038B98_39798(rdram, ctx);
        goto after_50;
    // 0x801D2B40: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_50:
    // 0x801D2B44: lb          $v0, 0x1E($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1E);
    // 0x801D2B48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D2B4C: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x801D2B50: beq         $v0, $at, L_801D2B74
    if (ctx->r2 == ctx->r1) {
        // 0x801D2B54: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801D2B74;
    }
    // 0x801D2B54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D2B58: beq         $v0, $at, L_801D2B90
    if (ctx->r2 == ctx->r1) {
        // 0x801D2B5C: addiu       $t4, $zero, 0x6
        ctx->r12 = ADD32(0, 0X6);
            goto L_801D2B90;
    }
    // 0x801D2B5C: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x801D2B60: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801D2B64: beq         $v0, $at, L_801D2BA8
    if (ctx->r2 == ctx->r1) {
        // 0x801D2B68: lui         $a1, 0x437F
        ctx->r5 = S32(0X437F << 16);
            goto L_801D2BA8;
    }
    // 0x801D2B68: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x801D2B6C: b           L_801D2BC0
    // 0x801D2B70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_801D2BC0;
    // 0x801D2B70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_801D2B74:
    // 0x801D2B74: jal         0x801D1B6C
    // 0x801D2B78: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    func_801D1B6C_664A1C(rdram, ctx);
        goto after_51;
    // 0x801D2B78: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    after_51:
    // 0x801D2B7C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x801D2B80: sh          $zero, 0x20($s1)
    MEM_H(0X20, ctx->r17) = 0;
    // 0x801D2B84: sb          $t3, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r11;
    // 0x801D2B88: b           L_801D2BC0
    // 0x801D2B8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_801D2BC0;
    // 0x801D2B8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_801D2B90:
    // 0x801D2B90: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x801D2B94: sh          $zero, 0x20($s1)
    MEM_H(0X20, ctx->r17) = 0;
    // 0x801D2B98: sb          $t4, 0x1D($s1)
    MEM_B(0X1D, ctx->r17) = ctx->r12;
    // 0x801D2B9C: sb          $t5, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r13;
    // 0x801D2BA0: b           L_801D2BC0
    // 0x801D2BA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_801D2BC0;
    // 0x801D2BA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_801D2BA8:
    // 0x801D2BA8: jal         0x801D1B6C
    // 0x801D2BAC: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    func_801D1B6C_664A1C(rdram, ctx);
        goto after_52;
    // 0x801D2BAC: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    after_52:
    // 0x801D2BB0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x801D2BB4: sh          $zero, 0x20($s1)
    MEM_H(0X20, ctx->r17) = 0;
    // 0x801D2BB8: sb          $t6, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r14;
    // 0x801D2BBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_801D2BC0:
    // 0x801D2BC0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
L_801D2BC4:
    // 0x801D2BC4: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x801D2BC8: beql        $t8, $zero, L_801D3190
    if (ctx->r24 == 0) {
        // 0x801D2BCC: lh          $t2, 0x20($s1)
        ctx->r10 = MEM_H(ctx->r17, 0X20);
            goto L_801D3190;
    }
    goto skip_13;
    // 0x801D2BCC: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
    skip_13:
    // 0x801D2BD0: lh          $t9, 0x24($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X24);
    // 0x801D2BD4: bnel        $a1, $t9, L_801D3190
    if (ctx->r5 != ctx->r25) {
        // 0x801D2BD8: lh          $t2, 0x20($s1)
        ctx->r10 = MEM_H(ctx->r17, 0X20);
            goto L_801D3190;
    }
    goto skip_14;
    // 0x801D2BD8: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
    skip_14:
    // 0x801D2BDC: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    // 0x801D2BE0: jal         0x801D1B6C
    // 0x801D2BE4: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    func_801D1B6C_664A1C(rdram, ctx);
        goto after_53;
    // 0x801D2BE4: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    after_53:
    // 0x801D2BE8: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x801D2BEC: sh          $zero, 0x20($s1)
    MEM_H(0X20, ctx->r17) = 0;
    // 0x801D2BF0: b           L_801D318C
    // 0x801D2BF4: sb          $t1, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r9;
        goto L_801D318C;
    // 0x801D2BF4: sb          $t1, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r9;
L_801D2BF8:
    // 0x801D2BF8: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
    // 0x801D2BFC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x801D2C00: bnel        $t2, $at, L_801D3190
    if (ctx->r10 != ctx->r1) {
        // 0x801D2C04: lh          $t2, 0x20($s1)
        ctx->r10 = MEM_H(ctx->r17, 0X20);
            goto L_801D3190;
    }
    goto skip_15;
    // 0x801D2C04: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
    skip_15:
    // 0x801D2C08: jal         0x800370B0
    // 0x801D2C0C: nop

    func_800370B0_37CB0(rdram, ctx);
        goto after_54;
    // 0x801D2C0C: nop

    after_54:
    // 0x801D2C10: b           L_801D3190
    // 0x801D2C14: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
        goto L_801D3190;
    // 0x801D2C14: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
L_801D2C18:
    // 0x801D2C18: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x801D2C1C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D2C20: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x801D2C24: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x801D2C28: lbu         $t5, 0x2DE5($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X2DE5);
    // 0x801D2C2C: sb          $t5, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r13;
L_801D2C30:
    // 0x801D2C30: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x801D2C34: jal         0x800116AC
    // 0x801D2C38: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_800116AC_122AC(rdram, ctx);
        goto after_55;
    // 0x801D2C38: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_55:
    // 0x801D2C3C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801D2C40: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801D2C44: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x801D2C48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801D2C4C: bne         $v1, $at, L_801D2C30
    if (ctx->r3 != ctx->r1) {
        // 0x801D2C50: sw          $v0, 0x38($s0)
        MEM_W(0X38, ctx->r16) = ctx->r2;
            goto L_801D2C30;
    }
    // 0x801D2C50: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x801D2C54: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D2C58: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D2C5C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D2C60: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    // 0x801D2C64: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x801D2C68: jal         0x801CC5C8
    // 0x801D2C6C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_56;
    // 0x801D2C6C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_56:
    // 0x801D2C70: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x801D2C74: addiu       $t7, $zero, 0x60
    ctx->r15 = ADD32(0, 0X60);
    // 0x801D2C78: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801D2C7C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D2C80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D2C84: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801D2C88: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D2C8C: jal         0x801CC56C
    // 0x801D2C90: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_57;
    // 0x801D2C90: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_57:
    // 0x801D2C94: lui         $t8, 0x801D
    ctx->r24 = S32(0X801D << 16);
    // 0x801D2C98: lw          $t8, 0x351C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X351C);
    // 0x801D2C9C: lw          $a0, 0x3C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X3C);
    // 0x801D2CA0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x801D2CA4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801D2CA8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x801D2CAC: jal         0x801CB6AC
    // 0x801D2CB0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_58;
    // 0x801D2CB0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_58:
    // 0x801D2CB4: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x801D2CB8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801D2CBC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D2CC0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x801D2CC4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801D2CC8: jal         0x801CB684
    // 0x801D2CCC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_801CB684_65E534(rdram, ctx);
        goto after_59;
    // 0x801D2CCC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_59:
    // 0x801D2CD0: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x801D2CD4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801D2CD8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D2CDC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D2CE0: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x801D2CE4: jal         0x801CC5C8
    // 0x801D2CE8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_60;
    // 0x801D2CE8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_60:
    // 0x801D2CEC: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x801D2CF0: addiu       $t2, $zero, 0x60
    ctx->r10 = ADD32(0, 0X60);
    // 0x801D2CF4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801D2CF8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D2CFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D2D00: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801D2D04: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D2D08: jal         0x801CC56C
    // 0x801D2D0C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_61;
    // 0x801D2D0C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_61:
    // 0x801D2D10: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801D2D14: lw          $t3, 0x3524($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3524);
    // 0x801D2D18: lw          $a0, 0x40($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X40);
    // 0x801D2D1C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x801D2D20: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801D2D24: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x801D2D28: jal         0x801CB6AC
    // 0x801D2D2C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_62;
    // 0x801D2D2C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_62:
    // 0x801D2D30: lb          $t4, 0x22($s1)
    ctx->r12 = MEM_B(ctx->r17, 0X22);
    // 0x801D2D34: lw          $a0, 0x40($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X40);
    // 0x801D2D38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D2D3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D2D40: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x801D2D44: jal         0x801D1DEC
    // 0x801D2D48: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_801D1DEC_664C9C(rdram, ctx);
        goto after_63;
    // 0x801D2D48: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_63:
    // 0x801D2D4C: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x801D2D50: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x801D2D54: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801D2D58: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D2D5C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D2D60: addiu       $a2, $zero, 0x88
    ctx->r6 = ADD32(0, 0X88);
    // 0x801D2D64: jal         0x801CC5C8
    // 0x801D2D68: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_64;
    // 0x801D2D68: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_64:
    // 0x801D2D6C: sw          $v0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r2;
    // 0x801D2D70: addiu       $t6, $zero, 0x60
    ctx->r14 = ADD32(0, 0X60);
    // 0x801D2D74: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D2D78: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D2D7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D2D80: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801D2D84: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D2D88: jal         0x801CC56C
    // 0x801D2D8C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_65;
    // 0x801D2D8C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_65:
    // 0x801D2D90: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801D2D94: lw          $t7, 0x3530($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3530);
    // 0x801D2D98: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x801D2D9C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x801D2DA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x801D2DA4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x801D2DA8: jal         0x801CB6AC
    // 0x801D2DAC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_66;
    // 0x801D2DAC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_66:
    // 0x801D2DB0: lb          $t8, 0x23($s1)
    ctx->r24 = MEM_B(ctx->r17, 0X23);
    // 0x801D2DB4: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x801D2DB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D2DBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D2DC0: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x801D2DC4: jal         0x801D206C
    // 0x801D2DC8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_801D206C_664F1C(rdram, ctx);
        goto after_67;
    // 0x801D2DC8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_67:
    // 0x801D2DCC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D2DD0: sb          $t9, 0x1E($s1)
    MEM_B(0X1E, ctx->r17) = ctx->r25;
    // 0x801D2DD4: lb          $t1, 0x1E($s1)
    ctx->r9 = MEM_B(ctx->r17, 0X1E);
    // 0x801D2DD8: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x801D2DDC: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x801D2DE0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801D2DE4: addu        $t3, $s1, $t2
    ctx->r11 = ADD32(ctx->r17, ctx->r10);
    // 0x801D2DE8: jal         0x801D2150
    // 0x801D2DEC: lw          $a1, 0x3C($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X3C);
    func_801D2150_665000(rdram, ctx);
        goto after_68;
    // 0x801D2DEC: lw          $a1, 0x3C($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X3C);
    after_68:
    // 0x801D2DF0: lb          $t4, 0x1E($s1)
    ctx->r12 = MEM_B(ctx->r17, 0X1E);
    // 0x801D2DF4: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x801D2DF8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D2DFC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x801D2E00: addu        $t6, $s1, $t5
    ctx->r14 = ADD32(ctx->r17, ctx->r13);
    // 0x801D2E04: lw          $a0, 0x3C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X3C);
    // 0x801D2E08: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801D2E0C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801D2E10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D2E14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D2E18: jal         0x801CC56C
    // 0x801D2E1C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_69;
    // 0x801D2E1C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_69:
    // 0x801D2E20: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x801D2E24: sh          $zero, 0x20($s1)
    MEM_H(0X20, ctx->r17) = 0;
    // 0x801D2E28: b           L_801D318C
    // 0x801D2E2C: sb          $t9, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r25;
        goto L_801D318C;
    // 0x801D2E2C: sb          $t9, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r25;
L_801D2E30:
    // 0x801D2E30: lb          $a1, 0x22($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X22);
    // 0x801D2E34: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
    // 0x801D2E38: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x801D2E3C: sb          $a1, 0x36($sp)
    MEM_B(0X36, ctx->r29) = ctx->r5;
    // 0x801D2E40: lb          $t2, 0x23($s1)
    ctx->r10 = MEM_B(ctx->r17, 0X23);
    // 0x801D2E44: sll         $t0, $v1, 24
    ctx->r8 = S32(ctx->r3 << 24);
    // 0x801D2E48: sra         $t1, $t0, 24
    ctx->r9 = S32(SIGNED(ctx->r8) >> 24);
    // 0x801D2E4C: andi        $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 & 0X4000;
    // 0x801D2E50: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x801D2E54: beq         $t4, $zero, L_801D2E94
    if (ctx->r12 == 0) {
        // 0x801D2E58: sb          $t2, 0x35($sp)
        MEM_B(0X35, ctx->r29) = ctx->r10;
            goto L_801D2E94;
    }
    // 0x801D2E58: sb          $t2, 0x35($sp)
    MEM_B(0X35, ctx->r29) = ctx->r10;
    // 0x801D2E5C: lh          $t5, 0x24($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X24);
    // 0x801D2E60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D2E64: bnel        $a2, $t5, L_801D2E98
    if (ctx->r6 != ctx->r13) {
        // 0x801D2E68: lw          $t8, 0x30($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X30);
            goto L_801D2E98;
    }
    goto skip_16;
    // 0x801D2E68: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    skip_16:
    // 0x801D2E6C: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x801D2E70: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801D2E74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801D2E78: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801D2E7C: jal         0x80038B98
    // 0x801D2E80: sb          $a1, -0x521B($at)
    MEM_B(-0X521B, ctx->r1) = ctx->r5;
    func_80038B98_39798(rdram, ctx);
        goto after_70;
    // 0x801D2E80: sb          $a1, -0x521B($at)
    MEM_B(-0X521B, ctx->r1) = ctx->r5;
    after_70:
    // 0x801D2E84: lbu         $t7, 0x1D($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X1D);
    // 0x801D2E88: sh          $zero, 0x20($s1)
    MEM_H(0X20, ctx->r17) = 0;
    // 0x801D2E8C: b           L_801D318C
    // 0x801D2E90: sb          $t7, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r15;
        goto L_801D318C;
    // 0x801D2E90: sb          $t7, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r15;
L_801D2E94:
    // 0x801D2E94: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
L_801D2E98:
    // 0x801D2E98: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x801D2E9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D2EA0: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x801D2EA4: beq         $t9, $zero, L_801D2EB8
    if (ctx->r25 == 0) {
        // 0x801D2EA8: andi        $t2, $t1, 0x400
        ctx->r10 = ctx->r9 & 0X400;
            goto L_801D2EB8;
    }
    // 0x801D2EA8: andi        $t2, $t1, 0x400
    ctx->r10 = ctx->r9 & 0X400;
    // 0x801D2EAC: sb          $a2, 0x1E($s1)
    MEM_B(0X1E, ctx->r17) = ctx->r6;
    // 0x801D2EB0: b           L_801D2EC8
    // 0x801D2EB4: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
        goto L_801D2EC8;
    // 0x801D2EB4: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
L_801D2EB8:
    // 0x801D2EB8: beq         $t2, $zero, L_801D2EC8
    if (ctx->r10 == 0) {
        // 0x801D2EBC: addiu       $t3, $zero, 0x2
        ctx->r11 = ADD32(0, 0X2);
            goto L_801D2EC8;
    }
    // 0x801D2EBC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x801D2EC0: sb          $t3, 0x1E($s1)
    MEM_B(0X1E, ctx->r17) = ctx->r11;
    // 0x801D2EC4: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
L_801D2EC8:
    // 0x801D2EC8: beq         $v1, $a2, L_801D2EE4
    if (ctx->r3 == ctx->r6) {
        // 0x801D2ECC: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_801D2EE4;
    }
    // 0x801D2ECC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801D2ED0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D2ED4: beq         $v0, $at, L_801D2F5C
    if (ctx->r2 == ctx->r1) {
        // 0x801D2ED8: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_801D2F5C;
    }
    // 0x801D2ED8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x801D2EDC: b           L_801D30D8
    // 0x801D2EE0: nop

        goto L_801D30D8;
    // 0x801D2EE0: nop

L_801D2EE4:
    // 0x801D2EE4: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x801D2EE8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x801D2EEC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x801D2EF0: andi        $t5, $t4, 0x200
    ctx->r13 = ctx->r12 & 0X200;
    // 0x801D2EF4: beq         $t5, $zero, L_801D2F18
    if (ctx->r13 == 0) {
        // 0x801D2EF8: andi        $t7, $t6, 0x100
        ctx->r15 = ctx->r14 & 0X100;
            goto L_801D2F18;
    }
    // 0x801D2EF8: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x801D2EFC: sb          $zero, 0x22($s1)
    MEM_B(0X22, ctx->r17) = 0;
    // 0x801D2F00: jal         0x80038B98
    // 0x801D2F04: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    func_80038B98_39798(rdram, ctx);
        goto after_71;
    // 0x801D2F04: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    after_71:
    // 0x801D2F08: lb          $t0, 0x37($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X37);
    // 0x801D2F0C: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
    // 0x801D2F10: b           L_801D2F38
    // 0x801D2F14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_801D2F38;
    // 0x801D2F14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_801D2F18:
    // 0x801D2F18: beq         $t7, $zero, L_801D2F38
    if (ctx->r15 == 0) {
        // 0x801D2F1C: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_801D2F38;
    }
    // 0x801D2F1C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x801D2F20: sb          $a2, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r6;
    // 0x801D2F24: jal         0x80038B98
    // 0x801D2F28: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    func_80038B98_39798(rdram, ctx);
        goto after_72;
    // 0x801D2F28: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    after_72:
    // 0x801D2F2C: lb          $t0, 0x37($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X37);
    // 0x801D2F30: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
    // 0x801D2F34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_801D2F38:
    // 0x801D2F38: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x801D2F3C: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x801D2F40: beq         $t9, $zero, L_801D30D8
    if (ctx->r25 == 0) {
        // 0x801D2F44: nop
    
            goto L_801D30D8;
    }
    // 0x801D2F44: nop

    // 0x801D2F48: lh          $t1, 0x24($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X24);
    // 0x801D2F4C: bne         $a2, $t1, L_801D30D8
    if (ctx->r6 != ctx->r9) {
        // 0x801D2F50: nop
    
            goto L_801D30D8;
    }
    // 0x801D2F50: nop

    // 0x801D2F54: b           L_801D30D8
    // 0x801D2F58: nop

        goto L_801D30D8;
    // 0x801D2F58: nop

L_801D2F5C:
    // 0x801D2F5C: andi        $t3, $t2, 0x200
    ctx->r11 = ctx->r10 & 0X200;
    // 0x801D2F60: beql        $t3, $zero, L_801D2FF0
    if (ctx->r11 == 0) {
        // 0x801D2F64: lw          $t5, 0x30($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X30);
            goto L_801D2FF0;
    }
    goto skip_17;
    // 0x801D2F64: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    skip_17:
    // 0x801D2F68: lh          $v0, 0x24($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X24);
    // 0x801D2F6C: beq         $a2, $v0, L_801D2F84
    if (ctx->r6 == ctx->r2) {
        // 0x801D2F70: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_801D2F84;
    }
    // 0x801D2F70: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x801D2F74: bne         $at, $zero, L_801D2FEC
    if (ctx->r1 != 0) {
        // 0x801D2F78: andi        $t4, $v0, 0x3
        ctx->r12 = ctx->r2 & 0X3;
            goto L_801D2FEC;
    }
    // 0x801D2F78: andi        $t4, $v0, 0x3
    ctx->r12 = ctx->r2 & 0X3;
    // 0x801D2F7C: bnel        $t4, $zero, L_801D2FF0
    if (ctx->r12 != 0) {
        // 0x801D2F80: lw          $t5, 0x30($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X30);
            goto L_801D2FF0;
    }
    goto skip_18;
    // 0x801D2F80: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    skip_18:
L_801D2F84:
    // 0x801D2F84: lb          $t5, 0x23($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X23);
    // 0x801D2F88: addiu       $s0, $zero, 0x24
    ctx->r16 = ADD32(0, 0X24);
    // 0x801D2F8C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801D2F90: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x801D2F94: sb          $t6, 0x23($s1)
    MEM_B(0X23, ctx->r17) = ctx->r14;
    // 0x801D2F98: lb          $a1, 0x23($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X23);
    // 0x801D2F9C: addiu       $v1, $v1, 0x3534
    ctx->r3 = ADD32(ctx->r3, 0X3534);
    // 0x801D2FA0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x801D2FA4: multu       $a1, $s0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D2FA8: mflo        $t7
    ctx->r15 = lo;
    // 0x801D2FAC: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x801D2FB0: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x801D2FB4: bne         $v0, $t9, L_801D2FDC
    if (ctx->r2 != ctx->r25) {
        // 0x801D2FB8: addiu       $t1, $a1, -0x1
        ctx->r9 = ADD32(ctx->r5, -0X1);
            goto L_801D2FDC;
    }
    // 0x801D2FB8: addiu       $t1, $a1, -0x1
    ctx->r9 = ADD32(ctx->r5, -0X1);
L_801D2FBC:
    // 0x801D2FBC: sb          $t1, 0x23($s1)
    MEM_B(0X23, ctx->r17) = ctx->r9;
    // 0x801D2FC0: lb          $a1, 0x23($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X23);
    // 0x801D2FC4: multu       $a1, $s0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D2FC8: mflo        $t2
    ctx->r10 = lo;
    // 0x801D2FCC: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x801D2FD0: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x801D2FD4: beql        $v0, $t4, L_801D2FBC
    if (ctx->r2 == ctx->r12) {
        // 0x801D2FD8: addiu       $t1, $a1, -0x1
        ctx->r9 = ADD32(ctx->r5, -0X1);
            goto L_801D2FBC;
    }
    goto skip_19;
    // 0x801D2FD8: addiu       $t1, $a1, -0x1
    ctx->r9 = ADD32(ctx->r5, -0X1);
    skip_19:
L_801D2FDC:
    // 0x801D2FDC: bgezl       $a1, L_801D3088
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801D2FE0: lw          $t9, 0x30($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X30);
            goto L_801D3088;
    }
    goto skip_20;
    // 0x801D2FE0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    skip_20:
    // 0x801D2FE4: b           L_801D3084
    // 0x801D2FE8: sb          $zero, 0x23($s1)
    MEM_B(0X23, ctx->r17) = 0;
        goto L_801D3084;
    // 0x801D2FE8: sb          $zero, 0x23($s1)
    MEM_B(0X23, ctx->r17) = 0;
L_801D2FEC:
    // 0x801D2FEC: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
L_801D2FF0:
    // 0x801D2FF0: andi        $t6, $t5, 0x100
    ctx->r14 = ctx->r13 & 0X100;
    // 0x801D2FF4: beql        $t6, $zero, L_801D3088
    if (ctx->r14 == 0) {
        // 0x801D2FF8: lw          $t9, 0x30($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X30);
            goto L_801D3088;
    }
    goto skip_21;
    // 0x801D2FF8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    skip_21:
    // 0x801D2FFC: lh          $v0, 0x24($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X24);
    // 0x801D3000: beq         $a2, $v0, L_801D3018
    if (ctx->r6 == ctx->r2) {
        // 0x801D3004: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_801D3018;
    }
    // 0x801D3004: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x801D3008: bne         $at, $zero, L_801D3084
    if (ctx->r1 != 0) {
        // 0x801D300C: andi        $t7, $v0, 0x3
        ctx->r15 = ctx->r2 & 0X3;
            goto L_801D3084;
    }
    // 0x801D300C: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x801D3010: bnel        $t7, $zero, L_801D3088
    if (ctx->r15 != 0) {
        // 0x801D3014: lw          $t9, 0x30($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X30);
            goto L_801D3088;
    }
    goto skip_22;
    // 0x801D3014: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    skip_22:
L_801D3018:
    // 0x801D3018: lb          $t8, 0x23($s1)
    ctx->r24 = MEM_B(ctx->r17, 0X23);
    // 0x801D301C: addiu       $s0, $zero, 0x24
    ctx->r16 = ADD32(0, 0X24);
    // 0x801D3020: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801D3024: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801D3028: sb          $t9, 0x23($s1)
    MEM_B(0X23, ctx->r17) = ctx->r25;
    // 0x801D302C: lb          $a1, 0x23($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X23);
    // 0x801D3030: addiu       $v1, $v1, 0x3534
    ctx->r3 = ADD32(ctx->r3, 0X3534);
    // 0x801D3034: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x801D3038: multu       $a1, $s0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D303C: addiu       $t8, $zero, 0x44
    ctx->r24 = ADD32(0, 0X44);
    // 0x801D3040: mflo        $t1
    ctx->r9 = lo;
    // 0x801D3044: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x801D3048: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x801D304C: bne         $v0, $t3, L_801D3074
    if (ctx->r2 != ctx->r11) {
        // 0x801D3050: addiu       $t4, $a1, 0x1
        ctx->r12 = ADD32(ctx->r5, 0X1);
            goto L_801D3074;
    }
    // 0x801D3050: addiu       $t4, $a1, 0x1
    ctx->r12 = ADD32(ctx->r5, 0X1);
L_801D3054:
    // 0x801D3054: sb          $t4, 0x23($s1)
    MEM_B(0X23, ctx->r17) = ctx->r12;
    // 0x801D3058: lb          $a1, 0x23($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X23);
    // 0x801D305C: multu       $a1, $s0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D3060: mflo        $t5
    ctx->r13 = lo;
    // 0x801D3064: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x801D3068: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x801D306C: beql        $v0, $t7, L_801D3054
    if (ctx->r2 == ctx->r15) {
        // 0x801D3070: addiu       $t4, $a1, 0x1
        ctx->r12 = ADD32(ctx->r5, 0X1);
            goto L_801D3054;
    }
    goto skip_23;
    // 0x801D3070: addiu       $t4, $a1, 0x1
    ctx->r12 = ADD32(ctx->r5, 0X1);
    skip_23:
L_801D3074:
    // 0x801D3074: slti        $at, $a1, 0x45
    ctx->r1 = SIGNED(ctx->r5) < 0X45 ? 1 : 0;
    // 0x801D3078: bnel        $at, $zero, L_801D3088
    if (ctx->r1 != 0) {
        // 0x801D307C: lw          $t9, 0x30($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X30);
            goto L_801D3088;
    }
    goto skip_24;
    // 0x801D307C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    skip_24:
    // 0x801D3080: sb          $t8, 0x23($s1)
    MEM_B(0X23, ctx->r17) = ctx->r24;
L_801D3084:
    // 0x801D3084: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
L_801D3088:
    // 0x801D3088: addiu       $s0, $zero, 0x24
    ctx->r16 = ADD32(0, 0X24);
    // 0x801D308C: andi        $t1, $t9, 0x8000
    ctx->r9 = ctx->r25 & 0X8000;
    // 0x801D3090: beql        $t1, $zero, L_801D30D8
    if (ctx->r9 == 0) {
        // 0x801D3094: lb          $v1, 0x1E($s1)
        ctx->r3 = MEM_B(ctx->r17, 0X1E);
            goto L_801D30D8;
    }
    goto skip_25;
    // 0x801D3094: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
    skip_25:
    // 0x801D3098: lh          $t2, 0x24($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X24);
    // 0x801D309C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801D30A0: bnel        $a2, $t2, L_801D30D8
    if (ctx->r6 != ctx->r10) {
        // 0x801D30A4: lb          $v1, 0x1E($s1)
        ctx->r3 = MEM_B(ctx->r17, 0X1E);
            goto L_801D30D8;
    }
    goto skip_26;
    // 0x801D30A4: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
    skip_26:
    // 0x801D30A8: jal         0x80038B98
    // 0x801D30AC: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    func_80038B98_39798(rdram, ctx);
        goto after_73;
    // 0x801D30AC: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    after_73:
    // 0x801D30B0: lb          $t3, 0x23($s1)
    ctx->r11 = MEM_B(ctx->r17, 0X23);
    // 0x801D30B4: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801D30B8: addiu       $v1, $v1, 0x3534
    ctx->r3 = ADD32(ctx->r3, 0X3534);
    // 0x801D30BC: multu       $t3, $s0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D30C0: mflo        $t4
    ctx->r12 = lo;
    // 0x801D30C4: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x801D30C8: jal         0x80038B98
    // 0x801D30CC: lbu         $a0, 0x0($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X0);
    func_80038B98_39798(rdram, ctx);
        goto after_74;
    // 0x801D30CC: lbu         $a0, 0x0($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X0);
    after_74:
    // 0x801D30D0: lb          $t0, 0x37($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X37);
    // 0x801D30D4: lb          $v1, 0x1E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1E);
L_801D30D8:
    // 0x801D30D8: beq         $t0, $v1, L_801D315C
    if (ctx->r8 == ctx->r3) {
        // 0x801D30DC: addiu       $a0, $zero, 0x2A6
        ctx->r4 = ADD32(0, 0X2A6);
            goto L_801D315C;
    }
    // 0x801D30DC: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    // 0x801D30E0: jal         0x80038B98
    // 0x801D30E4: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    func_80038B98_39798(rdram, ctx);
        goto after_75;
    // 0x801D30E4: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    after_75:
    // 0x801D30E8: lb          $t0, 0x37($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X37);
    // 0x801D30EC: addiu       $t8, $zero, 0x60
    ctx->r24 = ADD32(0, 0X60);
    // 0x801D30F0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801D30F4: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x801D30F8: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x801D30FC: lw          $a0, 0x3C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X3C);
    // 0x801D3100: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D3104: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D3108: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D310C: jal         0x801CC56C
    // 0x801D3110: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_76;
    // 0x801D3110: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_76:
    // 0x801D3114: lb          $t9, 0x1E($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X1E);
    // 0x801D3118: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x801D311C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801D3120: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x801D3124: addu        $t2, $s1, $t1
    ctx->r10 = ADD32(ctx->r17, ctx->r9);
    // 0x801D3128: lw          $a0, 0x3C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X3C);
    // 0x801D312C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801D3130: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D3134: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D3138: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D313C: jal         0x801CC56C
    // 0x801D3140: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_77;
    // 0x801D3140: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_77:
    // 0x801D3144: lb          $t5, 0x1E($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X1E);
    // 0x801D3148: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x801D314C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801D3150: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x801D3154: jal         0x801D2150
    // 0x801D3158: lw          $a1, 0x3C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X3C);
    func_801D2150_665000(rdram, ctx);
        goto after_78;
    // 0x801D3158: lw          $a1, 0x3C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X3C);
    after_78:
L_801D315C:
    // 0x801D315C: lb          $a1, 0x22($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X22);
    // 0x801D3160: lb          $t8, 0x36($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X36);
    // 0x801D3164: beql        $t8, $a1, L_801D3178
    if (ctx->r24 == ctx->r5) {
        // 0x801D3168: lb          $a1, 0x23($s1)
        ctx->r5 = MEM_B(ctx->r17, 0X23);
            goto L_801D3178;
    }
    goto skip_27;
    // 0x801D3168: lb          $a1, 0x23($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X23);
    skip_27:
    // 0x801D316C: jal         0x801D1DE4
    // 0x801D3170: lw          $a0, 0x4C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4C);
    func_801D1DE4_664C94(rdram, ctx);
        goto after_79;
    // 0x801D3170: lw          $a0, 0x4C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4C);
    after_79:
    // 0x801D3174: lb          $a1, 0x23($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X23);
L_801D3178:
    // 0x801D3178: lb          $t9, 0x35($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X35);
    // 0x801D317C: beql        $t9, $a1, L_801D3190
    if (ctx->r25 == ctx->r5) {
        // 0x801D3180: lh          $t2, 0x20($s1)
        ctx->r10 = MEM_H(ctx->r17, 0X20);
            goto L_801D3190;
    }
    goto skip_28;
    // 0x801D3180: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
    skip_28:
    // 0x801D3184: jal         0x801D2064
    // 0x801D3188: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    func_801D2064_664F14(rdram, ctx);
        goto after_80;
    // 0x801D3188: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    after_80:
L_801D318C:
    // 0x801D318C: lh          $t2, 0x20($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X20);
L_801D3190:
    // 0x801D3190: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x801D3194: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801D3198: sh          $t3, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r11;
    // 0x801D319C: sw          $t1, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r9;
    // 0x801D31A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D31A4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801D31A8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801D31AC: jr          $ra
    // 0x801D31B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801D31B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801CBAE8_65E998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBAE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CBAEC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CBAF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CBAF4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801CBAF8: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CBAFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CBB00: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801CBB04: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801CBB08: addiu       $a1, $a1, -0x48AC
    ctx->r5 = ADD32(ctx->r5, -0X48AC);
    // 0x801CBB0C: jal         0x80034E08
    // 0x801CBB10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801CBB10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801CBB14: bne         $v0, $zero, L_801CBB24
    if (ctx->r2 != 0) {
        // 0x801CBB18: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801CBB24;
    }
    // 0x801CBB18: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801CBB1C: b           L_801CBB80
    // 0x801CBB20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801CBB80;
    // 0x801CBB20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CBB24:
    // 0x801CBB24: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x801CBB28: lui         $t8, 0x801D
    ctx->r24 = S32(0X801D << 16);
    // 0x801CBB2C: addiu       $t8, $t8, -0x4538
    ctx->r24 = ADD32(ctx->r24, -0X4538);
    // 0x801CBB30: addiu       $t7, $t6, 0x5C
    ctx->r15 = ADD32(ctx->r14, 0X5C);
    // 0x801CBB34: sw          $t7, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r15;
    // 0x801CBB38: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x801CBB3C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x801CBB40: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801CBB44: jal         0x800115F8
    // 0x801CBB48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800115F8_121F8(rdram, ctx);
        goto after_1;
    // 0x801CBB48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801CBB4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBB50: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x801CBB54: jal         0x800103DC
    // 0x801CBB58: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_800103DC_10FDC(rdram, ctx);
        goto after_2;
    // 0x801CBB58: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x801CBB5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CBB60: bne         $v0, $at, L_801CBB70
    if (ctx->r2 != ctx->r1) {
        // 0x801CBB64: sw          $v0, 0x78($s0)
        MEM_W(0X78, ctx->r16) = ctx->r2;
            goto L_801CBB70;
    }
    // 0x801CBB64: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x801CBB68: b           L_801CBB80
    // 0x801CBB6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801CBB80;
    // 0x801CBB6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CBB70:
    // 0x801CBB70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBB74: jal         0x800119D4
    // 0x801CBB78: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800119D4_125D4(rdram, ctx);
        goto after_3;
    // 0x801CBB78: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x801CBB7C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801CBB80:
    // 0x801CBB80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CBB84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CBB88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CBB8C: jr          $ra
    // 0x801CBB90: nop

    TRACE_RETURN()
    return;
    // 0x801CBB90: nop

;}
RECOMP_FUNC void func_801D1B6C_664A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1B6C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D1B70: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D1B74: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x801D1B78: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x801D1B7C: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x801D1B80: nop

    // 0x801D1B84: bc1fl       L_801D1BA8
    if (!c1cs) {
        // 0x801D1B88: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_801D1BA8;
    }
    goto skip_0;
    // 0x801D1B88: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x801D1B8C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x801D1B90: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D1B94: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D1B98: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801D1B9C: b           L_801D1BB0
    // 0x801D1BA0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_801D1BB0;
    // 0x801D1BA0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x801D1BA4: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
L_801D1BA8:
    // 0x801D1BA8: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D1BAC: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_801D1BB0:
    // 0x801D1BB0: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D1BB4: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x801D1BB8: jr          $ra
    // 0x801D1BBC: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x801D1BBC: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_801D09B4_663864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D09B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D09B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D09BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D09C0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801D09C4: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D09C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D09CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D09D0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801D09D4: addiu       $a1, $a1, 0x840
    ctx->r5 = ADD32(ctx->r5, 0X840);
    // 0x801D09D8: jal         0x80034E08
    // 0x801D09DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801D09DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801D09E0: bne         $v0, $zero, L_801D09F0
    if (ctx->r2 != 0) {
        // 0x801D09E4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801D09F0;
    }
    // 0x801D09E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D09E8: b           L_801D0A1C
    // 0x801D09EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D0A1C;
    // 0x801D09EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D09F0:
    // 0x801D09F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D09F4: jal         0x80011610
    // 0x801D09F8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_80011610_12210(rdram, ctx);
        goto after_1;
    // 0x801D09F8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801D09FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0A00: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D0A04: jal         0x800115F8
    // 0x801D0A08: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_800115F8_121F8(rdram, ctx);
        goto after_2;
    // 0x801D0A08: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x801D0A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0A10: jal         0x800119D4
    // 0x801D0A14: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800119D4_125D4(rdram, ctx);
        goto after_3;
    // 0x801D0A14: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
    // 0x801D0A18: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801D0A1C:
    // 0x801D0A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D0A20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D0A24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D0A28: jr          $ra
    // 0x801D0A2C: nop

    TRACE_RETURN()
    return;
    // 0x801D0A2C: nop

;}
RECOMP_FUNC void func_801CC710_65F5C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC710: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801CC714: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x801CC718: sw          $s7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r23;
    // 0x801CC71C: sw          $s6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r22;
    // 0x801CC720: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x801CC724: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x801CC728: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x801CC72C: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x801CC730: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801CC734: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801CC738: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x801CC73C: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x801CC740: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x801CC744: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x801CC748: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x801CC74C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x801CC750: lw          $s1, 0xD0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XD0);
    // 0x801CC754: lui         $s6, 0x3
    ctx->r22 = S32(0X3 << 16);
    // 0x801CC758: ori         $s6, $s6, 0x8000
    ctx->r22 = ctx->r22 | 0X8000;
    // 0x801CC75C: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x801CC760: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x801CC764: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x801CC768: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x801CC76C: blez        $v1, L_801CC918
    if (SIGNED(ctx->r3) <= 0) {
        // 0x801CC770: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_801CC918;
    }
    // 0x801CC770: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801CC774: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x801CC778: lui         $at, 0x402C
    ctx->r1 = S32(0X402C << 16);
    // 0x801CC77C: mtc1        $at, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r1;
    // 0x801CC780: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    // 0x801CC784: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x801CC788: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x801CC78C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC790: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x801CC794: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC798: lui         $s5, 0x8016
    ctx->r21 = S32(0X8016 << 16);
    // 0x801CC79C: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x801CC7A0: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x801CC7A4: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801CC7A8: addiu       $s5, $s5, -0x3A38
    ctx->r21 = ADD32(ctx->r21, -0X3A38);
    // 0x801CC7AC: ldc1        $f20, 0x42E0($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, 0X42E0);
    // 0x801CC7B0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_801CC7B4:
    // 0x801CC7B4: blez        $v0, L_801CC908
    if (SIGNED(ctx->r2) <= 0) {
        // 0x801CC7B8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_801CC908;
    }
    // 0x801CC7B8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801CC7BC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801CC7C0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x801CC7C4: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
L_801CC7C8:
    // 0x801CC7C8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CC7CC: addu        $t7, $t6, $s6
    ctx->r15 = ADD32(ctx->r14, ctx->r22);
    // 0x801CC7D0: lhu         $t8, 0x2DCE($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2DCE);
    // 0x801CC7D4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801CC7D8: bgez        $t8, L_801CC7F0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801CC7DC: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_801CC7F0;
    }
    // 0x801CC7DC: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CC7E0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801CC7E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CC7E8: nop

    // 0x801CC7EC: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_801CC7F0:
    // 0x801CC7F0: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x801CC7F4: mul.d       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x801CC7F8: mtc1        $s2, $f18
    ctx->f18.u32l = ctx->r18;
    // 0x801CC7FC: subu        $t0, $t9, $s4
    ctx->r8 = SUB32(ctx->r25, ctx->r20);
    // 0x801CC800: multu       $t0, $s7
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CC804: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x801CC808: mul.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x801CC80C: mflo        $t1
    ctx->r9 = lo;
    // 0x801CC810: addiu       $t2, $t1, 0x5
    ctx->r10 = ADD32(ctx->r9, 0X5);
    // 0x801CC814: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x801CC818: add.d       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f16.d + ctx->f4.d;
    // 0x801CC81C: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x801CC820: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x801CC824: mul.d       $f16, $f18, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f26.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f26.d);
    // 0x801CC828: trunc.w.d   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x801CC82C: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x801CC830: jal         0x80003E10
    // 0x801CC834: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_0;
    // 0x801CC834: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    after_0:
    // 0x801CC838: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x801CC83C: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x801CC840: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CC844: addu        $t7, $t6, $s6
    ctx->r15 = ADD32(ctx->r14, ctx->r22);
    // 0x801CC848: lhu         $t8, 0x2DCE($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2DCE);
    // 0x801CC84C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x801CC850: bgez        $t8, L_801CC868
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801CC854: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_801CC868;
    }
    // 0x801CC854: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x801CC858: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801CC85C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CC860: nop

    // 0x801CC864: add.d       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f8.d + ctx->f10.d;
L_801CC868:
    // 0x801CC868: mul.d       $f18, $f8, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x801CC86C: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x801CC870: mtc1        $s3, $f4
    ctx->f4.u32l = ctx->r19;
    // 0x801CC874: subu        $t0, $t9, $s4
    ctx->r8 = SUB32(ctx->r25, ctx->r20);
    // 0x801CC878: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x801CC87C: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x801CC880: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CC884: mul.d       $f16, $f18, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f22.d);
    // 0x801CC888: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x801CC88C: nop

    // 0x801CC890: cvt.d.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.d = CVT_D_W(ctx->f8.u32l);
    // 0x801CC894: add.d       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f16.d + ctx->f6.d;
    // 0x801CC898: add.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d + ctx->f18.d;
    // 0x801CC89C: mul.d       $f16, $f4, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f28.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f28.d);
    // 0x801CC8A0: trunc.w.d   $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x801CC8A4: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x801CC8A8: jal         0x80003E10
    // 0x801CC8AC: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x801CC8AC: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    after_1:
    // 0x801CC8B0: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x801CC8B4: add.s       $f8, $f0, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f24.fl;
    // 0x801CC8B8: lw          $t6, 0x58($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X58);
    // 0x801CC8BC: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x801CC8C0: multu       $s4, $t0
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CC8C4: mul.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x801CC8C8: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x801CC8CC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x801CC8D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801CC8D4: addiu       $s2, $s2, 0x5
    ctx->r18 = ADD32(ctx->r18, 0X5);
    // 0x801CC8D8: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x801CC8DC: mflo        $t1
    ctx->r9 = lo;
    // 0x801CC8E0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801CC8E4: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x801CC8E8: swc1        $f10, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f10.u32l;
    // 0x801CC8EC: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x801CC8F0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x801CC8F4: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801CC8F8: bnel        $at, $zero, L_801CC7C8
    if (ctx->r1 != 0) {
        // 0x801CC8FC: lw          $t6, 0x0($s5)
        ctx->r14 = MEM_W(ctx->r21, 0X0);
            goto L_801CC7C8;
    }
    goto skip_0;
    // 0x801CC8FC: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    skip_0:
    // 0x801CC900: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x801CC904: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_801CC908:
    // 0x801CC908: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x801CC90C: slt         $at, $s4, $v1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801CC910: bne         $at, $zero, L_801CC7B4
    if (ctx->r1 != 0) {
        // 0x801CC914: nop
    
            goto L_801CC7B4;
    }
    // 0x801CC914: nop

L_801CC918:
    // 0x801CC918: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x801CC91C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x801CC920: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x801CC924: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x801CC928: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x801CC92C: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x801CC930: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x801CC934: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801CC938: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801CC93C: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x801CC940: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x801CC944: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x801CC948: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x801CC94C: lw          $s6, 0x5C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X5C);
    // 0x801CC950: lw          $s7, 0x60($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X60);
    // 0x801CC954: jr          $ra
    // 0x801CC958: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x801CC958: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_801D016C_66301C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D016C: jr          $ra
    // 0x801D0170: nop

    TRACE_RETURN()
    return;
    // 0x801D0170: nop

;}
RECOMP_FUNC void func_801CDFCC_66A6FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDFCC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CDFD0: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CDFD4: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x801CDFD8: addiu       $a0, $a0, -0x4E0
    ctx->r4 = ADD32(ctx->r4, -0X4E0);
    // 0x801CDFDC: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801CDFE0: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    // 0x801CDFE4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x801CDFE8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801CDFEC: bne         $v1, $v0, L_801CE000
    if (ctx->r3 != ctx->r2) {
        // 0x801CDFF0: nop
    
            goto L_801CE000;
    }
    // 0x801CDFF0: nop

    // 0x801CDFF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CDFF8: nop

    // 0x801CDFFC: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
L_801CE000:
    // 0x801CE000: beql        $v0, $zero, L_801CE014
    if (ctx->r2 == 0) {
        // 0x801CE004: lh          $v0, 0x1A($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X1A);
            goto L_801CE014;
    }
    goto skip_0;
    // 0x801CE004: lh          $v0, 0x1A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1A);
    skip_0:
    // 0x801CE008: bne         $v1, $v0, L_801CE0DC
    if (ctx->r3 != ctx->r2) {
        // 0x801CE00C: nop
    
            goto L_801CE0DC;
    }
    // 0x801CE00C: nop

    // 0x801CE010: lh          $v0, 0x1A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1A);
L_801CE014:
    // 0x801CE014: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CE018: beq         $v1, $v0, L_801CE0DC
    if (ctx->r3 == ctx->r2) {
        // 0x801CE01C: nop
    
            goto L_801CE0DC;
    }
    // 0x801CE01C: nop

    // 0x801CE020: beq         $v0, $at, L_801CE0DC
    if (ctx->r2 == ctx->r1) {
        // 0x801CE024: nop
    
            goto L_801CE0DC;
    }
    // 0x801CE024: nop

    // 0x801CE028: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x801CE02C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CE030: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x801CE034: bgez        $t7, L_801CE048
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801CE038: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_801CE048;
    }
    // 0x801CE038: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801CE03C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CE040: nop

    // 0x801CE044: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_801CE048:
    // 0x801CE048: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801CE04C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CE050: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CE054: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801CE058: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801CE05C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801CE060: nop

    // 0x801CE064: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801CE068: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801CE06C: nop

    // 0x801CE070: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x801CE074: beql        $t9, $zero, L_801CE0C4
    if (ctx->r25 == 0) {
        // 0x801CE078: mfc1        $t9, $f4
        ctx->r25 = (int32_t)ctx->f4.u32l;
            goto L_801CE0C4;
    }
    goto skip_1;
    // 0x801CE078: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    skip_1:
    // 0x801CE07C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CE080: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CE084: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801CE088: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801CE08C: nop

    // 0x801CE090: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801CE094: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801CE098: nop

    // 0x801CE09C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x801CE0A0: bne         $t9, $zero, L_801CE0B8
    if (ctx->r25 != 0) {
        // 0x801CE0A4: nop
    
            goto L_801CE0B8;
    }
    // 0x801CE0A4: nop

    // 0x801CE0A8: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x801CE0AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CE0B0: b           L_801CE0D0
    // 0x801CE0B4: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_801CE0D0;
    // 0x801CE0B4: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_801CE0B8:
    // 0x801CE0B8: b           L_801CE0D0
    // 0x801CE0BC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_801CE0D0;
    // 0x801CE0BC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x801CE0C0: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
L_801CE0C4:
    // 0x801CE0C4: nop

    // 0x801CE0C8: bltz        $t9, L_801CE0B8
    if (SIGNED(ctx->r25) < 0) {
        // 0x801CE0CC: nop
    
            goto L_801CE0B8;
    }
    // 0x801CE0CC: nop

L_801CE0D0:
    // 0x801CE0D0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801CE0D4: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x801CE0D8: nop

L_801CE0DC:
    // 0x801CE0DC: jr          $ra
    // 0x801CE0E0: nop

    TRACE_RETURN()
    return;
    // 0x801CE0E0: nop

;}
RECOMP_FUNC void func_801CED80_66B4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CED80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CED84: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801CED88: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801CED8C: jal         0x800101AC
    // 0x801CED90: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_800101AC_10DAC(rdram, ctx);
        goto after_0;
    // 0x801CED90: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x801CED94: lui         $t6, 0x801
    ctx->r14 = S32(0X801 << 16);
    // 0x801CED98: addiu       $t6, $t6, 0x4350
    ctx->r14 = ADD32(ctx->r14, 0X4350);
    // 0x801CED9C: addiu       $t7, $zero, 0x4D6
    ctx->r15 = ADD32(0, 0X4D6);
    // 0x801CEDA0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801CEDA4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CEDA8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x801CEDAC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CEDB0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801CEDB4: jal         0x80010230
    // 0x801CEDB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_1;
    // 0x801CEDB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x801CEDBC: lui         $t8, 0x801
    ctx->r24 = S32(0X801 << 16);
    // 0x801CEDC0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEDC4: addiu       $t8, $t8, 0x5350
    ctx->r24 = ADD32(ctx->r24, 0X5350);
    // 0x801CEDC8: addiu       $t9, $zero, 0x4D6
    ctx->r25 = ADD32(0, 0X4D6);
    // 0x801CEDCC: sw          $v0, 0x3D58($at)
    MEM_W(0X3D58, ctx->r1) = ctx->r2;
    // 0x801CEDD0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801CEDD4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CEDD8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x801CEDDC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CEDE0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801CEDE4: jal         0x80010230
    // 0x801CEDE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_2;
    // 0x801CEDE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x801CEDEC: lui         $t0, 0x801
    ctx->r8 = S32(0X801 << 16);
    // 0x801CEDF0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEDF4: addiu       $t0, $t0, 0x6350
    ctx->r8 = ADD32(ctx->r8, 0X6350);
    // 0x801CEDF8: addiu       $t1, $zero, 0x4D6
    ctx->r9 = ADD32(0, 0X4D6);
    // 0x801CEDFC: sw          $v0, 0x3D5C($at)
    MEM_W(0X3D5C, ctx->r1) = ctx->r2;
    // 0x801CEE00: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801CEE04: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801CEE08: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x801CEE0C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CEE10: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801CEE14: jal         0x80010230
    // 0x801CEE18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_3;
    // 0x801CEE18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x801CEE1C: lui         $t2, 0x801
    ctx->r10 = S32(0X801 << 16);
    // 0x801CEE20: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEE24: addiu       $t2, $t2, 0x7350
    ctx->r10 = ADD32(ctx->r10, 0X7350);
    // 0x801CEE28: addiu       $t3, $zero, 0x4D6
    ctx->r11 = ADD32(0, 0X4D6);
    // 0x801CEE2C: sw          $v0, 0x3D60($at)
    MEM_W(0X3D60, ctx->r1) = ctx->r2;
    // 0x801CEE30: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801CEE34: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801CEE38: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x801CEE3C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CEE40: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801CEE44: jal         0x80010230
    // 0x801CEE48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_4;
    // 0x801CEE48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x801CEE4C: lui         $t4, 0x802
    ctx->r12 = S32(0X802 << 16);
    // 0x801CEE50: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEE54: addiu       $t4, $t4, -0x7CB0
    ctx->r12 = ADD32(ctx->r12, -0X7CB0);
    // 0x801CEE58: addiu       $t5, $zero, 0x4D6
    ctx->r13 = ADD32(0, 0X4D6);
    // 0x801CEE5C: sw          $v0, 0x3D64($at)
    MEM_W(0X3D64, ctx->r1) = ctx->r2;
    // 0x801CEE60: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801CEE64: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801CEE68: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x801CEE6C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CEE70: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801CEE74: jal         0x80010230
    // 0x801CEE78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_5;
    // 0x801CEE78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x801CEE7C: lui         $t6, 0x802
    ctx->r14 = S32(0X802 << 16);
    // 0x801CEE80: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEE84: addiu       $t6, $t6, -0x6CB0
    ctx->r14 = ADD32(ctx->r14, -0X6CB0);
    // 0x801CEE88: addiu       $t7, $zero, 0x4D6
    ctx->r15 = ADD32(0, 0X4D6);
    // 0x801CEE8C: sw          $v0, 0x3D68($at)
    MEM_W(0X3D68, ctx->r1) = ctx->r2;
    // 0x801CEE90: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801CEE94: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CEE98: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x801CEE9C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CEEA0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801CEEA4: jal         0x80010230
    // 0x801CEEA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_6;
    // 0x801CEEA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x801CEEAC: lui         $t8, 0x802
    ctx->r24 = S32(0X802 << 16);
    // 0x801CEEB0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEEB4: addiu       $t8, $t8, -0x5CB0
    ctx->r24 = ADD32(ctx->r24, -0X5CB0);
    // 0x801CEEB8: addiu       $t9, $zero, 0x4D6
    ctx->r25 = ADD32(0, 0X4D6);
    // 0x801CEEBC: sw          $v0, 0x3D6C($at)
    MEM_W(0X3D6C, ctx->r1) = ctx->r2;
    // 0x801CEEC0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801CEEC4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CEEC8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x801CEECC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CEED0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801CEED4: jal         0x80010230
    // 0x801CEED8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_7;
    // 0x801CEED8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x801CEEDC: lui         $t0, 0x802
    ctx->r8 = S32(0X802 << 16);
    // 0x801CEEE0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEEE4: addiu       $t0, $t0, -0x4CB0
    ctx->r8 = ADD32(ctx->r8, -0X4CB0);
    // 0x801CEEE8: addiu       $t1, $zero, 0x4D6
    ctx->r9 = ADD32(0, 0X4D6);
    // 0x801CEEEC: sw          $v0, 0x3D70($at)
    MEM_W(0X3D70, ctx->r1) = ctx->r2;
    // 0x801CEEF0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801CEEF4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801CEEF8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x801CEEFC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CEF00: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801CEF04: jal         0x80010230
    // 0x801CEF08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_8;
    // 0x801CEF08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x801CEF0C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEF10: sw          $v0, 0x3D74($at)
    MEM_W(0X3D74, ctx->r1) = ctx->r2;
    // 0x801CEF14: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801CEF18: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x801CEF1C: jal         0x800103DC
    // 0x801CEF20: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_800103DC_10FDC(rdram, ctx);
        goto after_9;
    // 0x801CEF20: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_9:
    // 0x801CEF24: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x801CEF28: addiu       $s0, $s0, 0x3D78
    ctx->r16 = ADD32(ctx->r16, 0X3D78);
    // 0x801CEF2C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CEF30: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801CEF34: beq         $v0, $at, L_801CEF7C
    if (ctx->r2 == ctx->r1) {
        // 0x801CEF38: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801CEF7C;
    }
    // 0x801CEF38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CEF3C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x801CEF40: lw          $v0, 0x1C($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X1C);
    // 0x801CEF44: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x801CEF48: srl         $t3, $v1, 15
    ctx->r11 = S32(U32(ctx->r3) >> 15);
    // 0x801CEF4C: xori        $t4, $t3, 0x6
    ctx->r12 = ctx->r11 ^ 0X6;
    // 0x801CEF50: sll         $t5, $t4, 28
    ctx->r13 = S32(ctx->r12 << 28);
    // 0x801CEF54: srl         $t6, $t5, 13
    ctx->r14 = S32(U32(ctx->r13) >> 13);
    // 0x801CEF58: xor         $t7, $t6, $v1
    ctx->r15 = ctx->r14 ^ ctx->r3;
    // 0x801CEF5C: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x801CEF60: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x801CEF64: lw          $v0, 0x1C($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X1C);
    // 0x801CEF68: lbu         $t9, 0xA($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XA);
    // 0x801CEF6C: andi        $t0, $t9, 0xFF87
    ctx->r8 = ctx->r25 & 0XFF87;
    // 0x801CEF70: ori         $t1, $t0, 0x28
    ctx->r9 = ctx->r8 | 0X28;
    // 0x801CEF74: sb          $t1, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r9;
    // 0x801CEF78: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_801CEF7C:
    // 0x801CEF7C: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801CEF80: lw          $t3, 0x3D58($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3D58);
    // 0x801CEF84: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x801CEF88: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801CEF8C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CEF90: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x801CEF94: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x801CEF98: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CEF9C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CEFA0: jal         0x800106F0
    // 0x801CEFA4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800106F0_112F0(rdram, ctx);
        goto after_10;
    // 0x801CEFA4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_10:
    // 0x801CEFA8: lui         $t5, 0x801D
    ctx->r13 = S32(0X801D << 16);
    // 0x801CEFAC: lw          $t5, 0x3D5C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3D5C);
    // 0x801CEFB0: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x801CEFB4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801CEFB8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CEFBC: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x801CEFC0: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x801CEFC4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x801CEFC8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CEFCC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CEFD0: jal         0x800106F0
    // 0x801CEFD4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_800106F0_112F0(rdram, ctx);
        goto after_11;
    // 0x801CEFD4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_11:
    // 0x801CEFD8: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801CEFDC: lw          $t7, 0x3D60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3D60);
    // 0x801CEFE0: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x801CEFE4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CEFE8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CEFEC: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x801CEFF0: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x801CEFF4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x801CEFF8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CEFFC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CF000: jal         0x800106F0
    // 0x801CF004: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_12;
    // 0x801CF004: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_12:
    // 0x801CF008: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x801CF00C: lw          $t9, 0x3D64($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3D64);
    // 0x801CF010: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x801CF014: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CF018: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CF01C: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x801CF020: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x801CF024: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x801CF028: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CF02C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CF030: jal         0x800106F0
    // 0x801CF034: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_800106F0_112F0(rdram, ctx);
        goto after_13;
    // 0x801CF034: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_13:
    // 0x801CF038: lui         $t1, 0x801D
    ctx->r9 = S32(0X801D << 16);
    // 0x801CF03C: lw          $t1, 0x3D68($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3D68);
    // 0x801CF040: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x801CF044: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801CF048: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CF04C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CF050: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    // 0x801CF054: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x801CF058: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CF05C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CF060: jal         0x800106F0
    // 0x801CF064: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_800106F0_112F0(rdram, ctx);
        goto after_14;
    // 0x801CF064: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_14:
    // 0x801CF068: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801CF06C: lw          $t3, 0x3D68($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3D68);
    // 0x801CF070: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x801CF074: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x801CF078: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801CF07C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801CF080: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CF084: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x801CF088: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    // 0x801CF08C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x801CF090: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CF094: jal         0x800106F0
    // 0x801CF098: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800106F0_112F0(rdram, ctx);
        goto after_15;
    // 0x801CF098: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_15:
    // 0x801CF09C: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801CF0A0: lw          $t6, 0x3D6C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3D6C);
    // 0x801CF0A4: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x801CF0A8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801CF0AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CF0B0: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x801CF0B4: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    // 0x801CF0B8: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x801CF0BC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CF0C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CF0C4: jal         0x800106F0
    // 0x801CF0C8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_800106F0_112F0(rdram, ctx);
        goto after_16;
    // 0x801CF0C8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_16:
    // 0x801CF0CC: lui         $t8, 0x801D
    ctx->r24 = S32(0X801D << 16);
    // 0x801CF0D0: lw          $t8, 0x3D6C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3D6C);
    // 0x801CF0D4: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x801CF0D8: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x801CF0DC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801CF0E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CF0E4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CF0E8: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x801CF0EC: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    // 0x801CF0F0: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x801CF0F4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CF0F8: jal         0x800106F0
    // 0x801CF0FC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_800106F0_112F0(rdram, ctx);
        goto after_17;
    // 0x801CF0FC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_17:
    // 0x801CF100: lui         $t1, 0x801D
    ctx->r9 = S32(0X801D << 16);
    // 0x801CF104: lw          $t1, 0x3D70($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3D70);
    // 0x801CF108: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x801CF10C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801CF110: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CF114: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x801CF118: addiu       $a2, $zero, 0x9D
    ctx->r6 = ADD32(0, 0X9D);
    // 0x801CF11C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x801CF120: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CF124: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CF128: jal         0x800106F0
    // 0x801CF12C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_800106F0_112F0(rdram, ctx);
        goto after_18;
    // 0x801CF12C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_18:
    // 0x801CF130: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801CF134: lw          $t3, 0x3D74($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3D74);
    // 0x801CF138: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CF13C: sw          $v0, 0x3D7C($at)
    MEM_W(0X3D7C, ctx->r1) = ctx->r2;
    // 0x801CF140: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x801CF144: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801CF148: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CF14C: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    // 0x801CF150: addiu       $a2, $zero, 0x9D
    ctx->r6 = ADD32(0, 0X9D);
    // 0x801CF154: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x801CF158: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CF15C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CF160: jal         0x800106F0
    // 0x801CF164: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800106F0_112F0(rdram, ctx);
        goto after_19;
    // 0x801CF164: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_19:
    // 0x801CF168: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CF16C: sw          $v0, 0x3D80($at)
    MEM_W(0X3D80, ctx->r1) = ctx->r2;
    // 0x801CF170: jal         0x800105AC
    // 0x801CF174: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800105AC_111AC(rdram, ctx);
        goto after_20;
    // 0x801CF174: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_20:
    // 0x801CF178: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801CF17C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801CF180: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801CF184: jr          $ra
    // 0x801CF188: nop

    TRACE_RETURN()
    return;
    // 0x801CF188: nop

;}
