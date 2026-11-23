#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80037284_37E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037284: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80037288: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x8003728C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80037290: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x80037294: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80037298: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003729C: lbu         $v0, -0x521C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X521C);
    // 0x800372A0: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x800372A4: addiu       $t7, $zero, 0x226
    ctx->r15 = ADD32(0, 0X226);
    // 0x800372A8: beq         $v0, $at, L_800372C0
    if (ctx->r2 == ctx->r1) {
        // 0x800372AC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800372C0;
    }
    // 0x800372AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800372B0: beql        $v0, $at, L_800372C4
    if (ctx->r2 == ctx->r1) {
        // 0x800372B4: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_800372C4;
    }
    goto skip_0;
    // 0x800372B4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    skip_0:
    // 0x800372B8: jr          $ra
    // 0x800372BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x800372BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800372C0:
    // 0x800372C0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
L_800372C4:
    // 0x800372C4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800372C8: sb          $t6, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r14;
    // 0x800372CC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x800372D0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800372D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800372D8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800372DC: sh          $t7, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r15;
    // 0x800372E0: jr          $ra
    // 0x800372E4: nop

    TRACE_RETURN()
    return;
    // 0x800372E4: nop

;}
RECOMP_FUNC void func_8000EEAC_FAAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000EEAC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8000EEB0: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8000EEB4: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8000EEB8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8000EEBC: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8000EEC0: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8000EEC4: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8000EEC8: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8000EECC: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x8000EED0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8000EED4: addiu       $a2, $a2, 0x48
    ctx->r6 = ADD32(ctx->r6, 0X48);
    // 0x8000EED8: lui         $a3, 0x8006
    ctx->r7 = S32(0X8006 << 16);
    // 0x8000EEDC: lui         $a1, 0x8001
    ctx->r5 = S32(0X8001 << 16);
    // 0x8000EEE0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8000EEE4: addiu       $t6, $zero, 0x4AE
    ctx->r14 = ADD32(0, 0X4AE);
    // 0x8000EEE8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8000EEEC: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x8000EEF0: addiu       $a1, $a1, -0x1030
    ctx->r5 = ADD32(ctx->r5, -0X1030);
    // 0x8000EEF4: addiu       $a3, $a3, 0x36E0
    ctx->r7 = ADD32(ctx->r7, 0X36E0);
    // 0x8000EEF8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8000EEFC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8000EF00: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8000EF04: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8000EF08: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x8000EF0C: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x8000EF10: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x8000EF14: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8000EF18: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8000EF1C: jal         0x800358E8
    // 0x8000EF20: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x8000EF20: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8000EF24: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8000EF28: beq         $v0, $zero, L_8000EFC0
    if (ctx->r2 == 0) {
        // 0x8000EF2C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8000EFC0;
    }
    // 0x8000EF2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8000EF30: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8000EF34: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8000EF38: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8000EF3C: swc1        $f10, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f10.u32l;
    // 0x8000EF40: lbu         $t7, 0x6B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6B);
    // 0x8000EF44: addiu       $a1, $a1, 0x170
    ctx->r5 = ADD32(ctx->r5, 0X170);
    // 0x8000EF48: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8000EF4C: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x8000EF50: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8000EF54: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8000EF58: lui         $a2, 0x8006
    ctx->r6 = S32(0X8006 << 16);
    // 0x8000EF5C: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x8000EF60: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x8000EF64: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x8000EF68: addiu       $t1, $zero, 0x4AE
    ctx->r9 = ADD32(0, 0X4AE);
    // 0x8000EF6C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8000EF70: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8000EF74: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8000EF78: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8000EF7C: addiu       $a2, $a2, 0x36E0
    ctx->r6 = ADD32(ctx->r6, 0X36E0);
    // 0x8000EF80: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x8000EF84: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8000EF88: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x8000EF8C: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x8000EF90: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x8000EF94: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x8000EF98: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8000EF9C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x8000EFA0: jal         0x8000DBF0
    // 0x8000EFA4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8000EFA4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x8000EFA8: beq         $v0, $zero, L_8000EFB8
    if (ctx->r2 == 0) {
        // 0x8000EFAC: lw          $a0, 0x4C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X4C);
            goto L_8000EFB8;
    }
    // 0x8000EFAC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8000EFB0: lbu         $t2, 0x6F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X6F);
    // 0x8000EFB4: sb          $t2, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r10;
L_8000EFB8:
    // 0x8000EFB8: jal         0x8000F178
    // 0x8000EFBC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8000F178_FD78(rdram, ctx);
        goto after_2;
    // 0x8000EFBC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_2:
L_8000EFC0:
    // 0x8000EFC0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8000EFC4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8000EFC8: jr          $ra
    // 0x8000EFCC: nop

    TRACE_RETURN()
    return;
    // 0x8000EFCC: nop

;}
RECOMP_FUNC void func_8000DB38_E738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000DB38: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000DB3C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000DB40: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000DB44: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000DB48: beq         $v0, $zero, L_8000DB70
    if (ctx->r2 == 0) {
        // 0x8000DB4C: nop
    
            goto L_8000DB70;
    }
    // 0x8000DB4C: nop

    // 0x8000DB50: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x8000DB54: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x8000DB58: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000DB5C: ori         $t1, $t9, 0x2
    ctx->r9 = ctx->r25 | 0X2;
    // 0x8000DB60: sw          $t1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r9;
    // 0x8000DB64: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x8000DB68: lwc1        $f4, -0x53A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X53A8);
    // 0x8000DB6C: swc1        $f4, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f4.u32l;
L_8000DB70:
    // 0x8000DB70: jr          $ra
    // 0x8000DB74: nop

    TRACE_RETURN()
    return;
    // 0x8000DB74: nop

;}
RECOMP_FUNC void func_80010374_10F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80010374: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80010378: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001037C: beq         $a0, $at, L_800103CC
    if (ctx->r4 == ctx->r1) {
        // 0x80010380: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800103CC;
    }
    // 0x80010380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80010384: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80010388: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8001038C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80010390: addiu       $t7, $t7, 0x7EF8
    ctx->r15 = ADD32(ctx->r15, 0X7EF8);
    // 0x80010394: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80010398: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8001039C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x800103A0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x800103A4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x800103A8: beq         $a1, $zero, L_800103C4
    if (ctx->r5 == 0) {
        // 0x800103AC: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_800103C4;
    }
    // 0x800103AC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800103B0: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x800103B4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800103B8: jal         0x80014B74
    // 0x800103BC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80014B74_15774(rdram, ctx);
        goto after_0;
    // 0x800103BC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x800103C0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_800103C4:
    // 0x800103C4: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x800103C8: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
L_800103CC:
    // 0x800103CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800103D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800103D4: jr          $ra
    // 0x800103D8: nop

    TRACE_RETURN()
    return;
    // 0x800103D8: nop

;}
RECOMP_FUNC void func_8003E234_3EE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E234: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8003E238: addiu       $v1, $v1, -0x3A34
    ctx->r3 = ADD32(ctx->r3, -0X3A34);
    // 0x8003E23C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003E240: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x8003E244: addiu       $t8, $t8, 0x77F0
    ctx->r24 = ADD32(ctx->r24, 0X77F0);
    // 0x8003E248: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8003E24C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8003E250: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8003E254: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8003E258: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8003E25C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003E260: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x8003E264: addiu       $t7, $t7, 0x7150
    ctx->r15 = ADD32(ctx->r15, 0X7150);
    // 0x8003E268: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8003E26C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8003E270: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x8003E274: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8003E278: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8003E27C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003E280: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x8003E284: lui         $t9, 0xF510
    ctx->r25 = S32(0XF510 << 16);
    // 0x8003E288: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8003E28C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8003E290: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8003E294: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8003E298: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003E29C: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x8003E2A0: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x8003E2A4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8003E2A8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8003E2AC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8003E2B0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8003E2B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003E2B8: lui         $t7, 0x71F
    ctx->r15 = S32(0X71F << 16);
    // 0x8003E2BC: ori         $t7, $t7, 0xF100
    ctx->r15 = ctx->r15 | 0XF100;
    // 0x8003E2C0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8003E2C4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8003E2C8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8003E2CC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8003E2D0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003E2D4: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8003E2D8: lui         $t7, 0xF510
    ctx->r15 = S32(0XF510 << 16);
    // 0x8003E2DC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8003E2E0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8003E2E4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8003E2E8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8003E2EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003E2F0: ori         $t7, $t7, 0x1000
    ctx->r15 = ctx->r15 | 0X1000;
    // 0x8003E2F4: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x8003E2F8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8003E2FC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8003E300: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8003E304: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8003E308: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003E30C: lui         $t6, 0x7
    ctx->r14 = S32(0X7 << 16);
    // 0x8003E310: ori         $t6, $t6, 0xC03C
    ctx->r14 = ctx->r14 | 0XC03C;
    // 0x8003E314: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8003E318: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8003E31C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8003E320: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8003E324: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003E328: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003E32C: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8003E330: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8003E334: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8003E338: lw          $t8, 0x78D8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X78D8);
    // 0x8003E33C: addiu       $t9, $t8, 0xF
    ctx->r25 = ADD32(ctx->r24, 0XF);
    // 0x8003E340: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8003E344: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8003E348: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003E34C: lw          $t6, 0x78DC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X78DC);
    // 0x8003E350: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x8003E354: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8003E358: addiu       $t7, $t6, 0xF
    ctx->r15 = ADD32(ctx->r14, 0XF);
    // 0x8003E35C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8003E360: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x8003E364: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x8003E368: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003E36C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8003E370: lw          $t8, 0x78D8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X78D8);
    // 0x8003E374: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8003E378: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003E37C: lw          $t8, 0x78DC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X78DC);
    // 0x8003E380: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8003E384: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8003E388: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8003E38C: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8003E390: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x8003E394: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8003E398: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003E39C: lui         $t7, 0xB400
    ctx->r15 = S32(0XB400 << 16);
    // 0x8003E3A0: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x8003E3A4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8003E3A8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8003E3AC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8003E3B0: lw          $t6, 0x7860($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7860);
    // 0x8003E3B4: lbu         $t8, 0x5D($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X5D);
    // 0x8003E3B8: lui         $t6, 0xB300
    ctx->r14 = S32(0XB300 << 16);
    // 0x8003E3BC: andi        $t7, $t8, 0x1
    ctx->r15 = ctx->r24 & 0X1;
    // 0x8003E3C0: or          $t8, $t7, $zero
    ctx->r24 = ctx->r15 | 0;
    // 0x8003E3C4: sll         $t9, $t8, 25
    ctx->r25 = S32(ctx->r24 << 25);
    // 0x8003E3C8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8003E3CC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003E3D0: lui         $t8, 0x1000
    ctx->r24 = S32(0X1000 << 16);
    // 0x8003E3D4: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x8003E3D8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8003E3DC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8003E3E0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8003E3E4: jr          $ra
    // 0x8003E3E8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8003E3E8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_8003C860_3D460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C860: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003C864: addiu       $a2, $a2, 0x1728
    ctx->r6 = ADD32(ctx->r6, 0X1728);
    // 0x8003C868: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8003C86C: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x8003C870: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x8003C874: sb          $t7, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r15;
    // 0x8003C878: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8003C87C: lw          $a0, 0x28($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X28);
    // 0x8003C880: lw          $t8, 0x80($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X80);
    // 0x8003C884: subu        $v1, $t8, $a0
    ctx->r3 = SUB32(ctx->r24, ctx->r4);
    // 0x8003C888: bgez        $v1, L_8003C894
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8003C88C: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_8003C894;
    }
    // 0x8003C88C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x8003C890: negu        $a1, $v1
    ctx->r5 = SUB32(0, ctx->r3);
L_8003C894:
    // 0x8003C894: lh          $t9, 0x8A($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X8A);
    // 0x8003C898: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003C89C: mflo        $a1
    ctx->r5 = lo;
    // 0x8003C8A0: sra         $t0, $a1, 8
    ctx->r8 = S32(SIGNED(ctx->r5) >> 8);
    // 0x8003C8A4: bne         $t0, $zero, L_8003C8B0
    if (ctx->r8 != 0) {
        // 0x8003C8A8: or          $a1, $t0, $zero
        ctx->r5 = ctx->r8 | 0;
            goto L_8003C8B0;
    }
    // 0x8003C8A8: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8003C8AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8003C8B0:
    // 0x8003C8B0: bgez        $v1, L_8003C8F0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8003C8B4: addu        $t2, $a0, $a1
        ctx->r10 = ADD32(ctx->r4, ctx->r5);
            goto L_8003C8F0;
    }
    // 0x8003C8B4: addu        $t2, $a0, $a1
    ctx->r10 = ADD32(ctx->r4, ctx->r5);
    // 0x8003C8B8: subu        $t1, $a0, $a1
    ctx->r9 = SUB32(ctx->r4, ctx->r5);
    // 0x8003C8BC: sw          $t1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r9;
    // 0x8003C8C0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8003C8C4: lw          $a0, 0x28($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X28);
    // 0x8003C8C8: lw          $v1, 0x80($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X80);
    // 0x8003C8CC: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003C8D0: beq         $at, $zero, L_8003C920
    if (ctx->r1 == 0) {
        // 0x8003C8D4: nop
    
            goto L_8003C920;
    }
    // 0x8003C8D4: nop

    // 0x8003C8D8: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    // 0x8003C8DC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003C8E0: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003C8E4: lw          $v1, 0x80($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X80);
    // 0x8003C8E8: b           L_8003C920
    // 0x8003C8EC: lw          $a0, 0x28($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X28);
        goto L_8003C920;
    // 0x8003C8EC: lw          $a0, 0x28($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X28);
L_8003C8F0:
    // 0x8003C8F0: sw          $t2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r10;
    // 0x8003C8F4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8003C8F8: lw          $v1, 0x80($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X80);
    // 0x8003C8FC: lw          $a0, 0x28($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X28);
    // 0x8003C900: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8003C904: beq         $at, $zero, L_8003C920
    if (ctx->r1 == 0) {
        // 0x8003C908: nop
    
            goto L_8003C920;
    }
    // 0x8003C908: nop

    // 0x8003C90C: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    // 0x8003C910: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003C914: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003C918: lw          $v1, 0x80($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X80);
    // 0x8003C91C: lw          $a0, 0x28($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X28);
L_8003C920:
    // 0x8003C920: bne         $v1, $a0, L_8003C92C
    if (ctx->r3 != ctx->r4) {
        // 0x8003C924: nop
    
            goto L_8003C92C;
    }
    // 0x8003C924: nop

    // 0x8003C928: sb          $zero, 0x7D($v0)
    MEM_B(0X7D, ctx->r2) = 0;
L_8003C92C:
    // 0x8003C92C: jr          $ra
    // 0x8003C930: nop

    TRACE_RETURN()
    return;
    // 0x8003C930: nop

;}
RECOMP_FUNC void func_8003F5C8_401C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F5C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003F5CC: lw          $v0, -0x39F8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F8);
    // 0x8003F5D0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8003F5D4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F5D8: beq         $v0, $zero, L_8003F5F0
    if (ctx->r2 == 0) {
        // 0x8003F5DC: nop
    
            goto L_8003F5F0;
    }
    // 0x8003F5DC: nop

    // 0x8003F5E0: lbu         $t6, 0x60($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X60);
    // 0x8003F5E4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F5E8: jr          $ra
    // 0x8003F5EC: sw          $t6, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8003F5EC: sw          $t6, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r14;
L_8003F5F0:
    // 0x8003F5F0: sw          $t7, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r15;
    // 0x8003F5F4: jr          $ra
    // 0x8003F5F8: nop

    TRACE_RETURN()
    return;
    // 0x8003F5F8: nop

;}
RECOMP_FUNC void func_8003E6C0_3F2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E6C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003E6C4: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003E6C8: lw          $a2, 0x78D0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X78D0);
    // 0x8003E6CC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003E6D0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8003E6D4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8003E6D8: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8003E6DC: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8003E6E0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8003E6E4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8003E6E8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003E6EC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003E6F0: beq         $a2, $zero, L_8003E704
    if (ctx->r6 == 0) {
        // 0x8003E6F4: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_8003E704;
    }
    // 0x8003E6F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003E6F8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8003E6FC: jal         0x80034B24
    // 0x8003E700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034B24_35724(rdram, ctx);
        goto after_0;
    // 0x8003E700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_8003E704:
    // 0x8003E704: lui         $s6, 0x801C
    ctx->r22 = S32(0X801C << 16);
    // 0x8003E708: addiu       $s6, $s6, 0x7754
    ctx->r22 = ADD32(ctx->r22, 0X7754);
    // 0x8003E70C: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x8003E710: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8003E714: lui         $s1, 0x8016
    ctx->r17 = S32(0X8016 << 16);
    // 0x8003E718: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003E71C: ori         $s7, $zero, 0x8012
    ctx->r23 = 0 | 0X8012;
    // 0x8003E720: addu        $s1, $s1, $t7
    ctx->r17 = ADD32(ctx->r17, ctx->r15);
    // 0x8003E724: lw          $s1, 0x7C48($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X7C48);
    // 0x8003E728: beq         $s7, $t8, L_8003E7BC
    if (ctx->r23 == ctx->r24) {
        // 0x8003E72C: or          $s5, $zero, $zero
        ctx->r21 = 0 | 0;
            goto L_8003E7BC;
    }
    // 0x8003E72C: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8003E730: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8003E734: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x8003E738: lui         $s4, 0x801C
    ctx->r20 = S32(0X801C << 16);
    // 0x8003E73C: addiu       $s4, $s4, 0x781C
    ctx->r20 = ADD32(ctx->r20, 0X781C);
    // 0x8003E740: addiu       $s3, $s3, 0x77F4
    ctx->r19 = ADD32(ctx->r19, 0X77F4);
    // 0x8003E744: addiu       $s0, $s0, 0x7808
    ctx->r16 = ADD32(ctx->r16, 0X7808);
L_8003E748:
    // 0x8003E748: lh          $t9, 0x32($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X32);
    // 0x8003E74C: lh          $t0, 0x6E($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X6E);
    // 0x8003E750: lw          $t2, 0x50($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X50);
    // 0x8003E754: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8003E758: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8003E75C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8003E760: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x8003E764: lh          $t5, 0x74($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X74);
    // 0x8003E768: lh          $t4, 0x34($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X34);
    // 0x8003E76C: lw          $t7, 0x54($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X54);
    // 0x8003E770: sw          $s3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r19;
    // 0x8003E774: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8003E778: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8003E77C: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x8003E780: sw          $s4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r20;
    // 0x8003E784: jal         0x8003DE48
    // 0x8003E788: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    func_8003DE48_3EA48(rdram, ctx);
        goto after_1;
    // 0x8003E788: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_1:
    // 0x8003E78C: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x8003E790: jal         0x8003EB34
    // 0x8003E794: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8003EB34_3F734(rdram, ctx);
        goto after_2;
    // 0x8003E794: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x8003E798: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8003E79C: sw          $s2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r18;
    // 0x8003E7A0: lw          $t9, 0x8($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X8);
    // 0x8003E7A4: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8003E7A8: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8003E7AC: addiu       $s3, $s3, 0x14
    ctx->r19 = ADD32(ctx->r19, 0X14);
    // 0x8003E7B0: addiu       $s4, $s4, 0x14
    ctx->r20 = ADD32(ctx->r20, 0X14);
    // 0x8003E7B4: bne         $s7, $t9, L_8003E748
    if (ctx->r23 != ctx->r25) {
        // 0x8003E7B8: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_8003E748;
    }
    // 0x8003E7B8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_8003E7BC:
    // 0x8003E7BC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E7C0: sll         $t0, $s5, 2
    ctx->r8 = S32(ctx->r21 << 2);
    // 0x8003E7C4: addiu       $a0, $a0, 0x7808
    ctx->r4 = ADD32(ctx->r4, 0X7808);
    // 0x8003E7C8: addu        $t0, $t0, $s5
    ctx->r8 = ADD32(ctx->r8, ctx->r21);
    // 0x8003E7CC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003E7D0: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x8003E7D4: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x8003E7D8: jal         0x8003E9E8
    // 0x8003E7DC: sw          $zero, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = 0;
    func_8003E9E8_3F5E8(rdram, ctx);
        goto after_3;
    // 0x8003E7DC: sw          $zero, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = 0;
    after_3:
    // 0x8003E7E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8003E7E4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x8003E7E8: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8003E7EC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E7F0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E7F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003E7F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003E7FC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003E800: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8003E804: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8003E808: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8003E80C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8003E810: sw          $t2, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r10;
    // 0x8003E814: jr          $ra
    // 0x8003E818: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8003E818: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80011A9C_1269C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80011A9C: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x80011AA0: lw          $v0, -0x2CD8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2CD8);
    // 0x80011AA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80011AA8: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x80011AAC: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x80011AB0: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x80011AB4: beq         $v0, $zero, L_80011B40
    if (ctx->r2 == 0) {
        // 0x80011AB8: sw          $s0, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r16;
            goto L_80011B40;
    }
    // 0x80011AB8: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x80011ABC: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x80011AC0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80011AC4: lui         $t0, 0x7000
    ctx->r8 = S32(0X7000 << 16);
    // 0x80011AC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80011ACC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80011AD0: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
L_80011AD4:
    // 0x80011AD4: beql        $v1, $zero, L_80011B38
    if (ctx->r3 == 0) {
        // 0x80011AD8: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_80011B38;
    }
    goto skip_0;
    // 0x80011AD8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x80011ADC: lbu         $a0, 0x4($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X4);
L_80011AE0:
    // 0x80011AE0: andi        $t6, $a0, 0x80
    ctx->r14 = ctx->r4 & 0X80;
    // 0x80011AE4: bnel        $t6, $zero, L_80011B2C
    if (ctx->r14 != 0) {
        // 0x80011AE8: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_80011B2C;
    }
    goto skip_1;
    // 0x80011AE8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x80011AEC: bne         $a2, $a0, L_80011B18
    if (ctx->r6 != ctx->r4) {
        // 0x80011AF0: nop
    
            goto L_80011B18;
    }
    // 0x80011AF0: nop

    // 0x80011AF4: lbu         $t7, 0x64($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X64);
    // 0x80011AF8: beql        $a3, $t7, L_80011B2C
    if (ctx->r7 == ctx->r15) {
        // 0x80011AFC: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_80011B2C;
    }
    goto skip_2;
    // 0x80011AFC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_2:
    // 0x80011B00: lw          $t9, 0x30($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X30);
    // 0x80011B04: and         $t6, $t9, $t1
    ctx->r14 = ctx->r25 & ctx->r9;
    // 0x80011B08: beql        $t6, $zero, L_80011B2C
    if (ctx->r14 == 0) {
        // 0x80011B0C: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_80011B2C;
    }
    goto skip_3;
    // 0x80011B0C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x80011B10: b           L_80011B2C
    // 0x80011B14: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
        goto L_80011B2C;
    // 0x80011B14: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_80011B18:
    // 0x80011B18: beql        $a0, $a3, L_80011B2C
    if (ctx->r4 == ctx->r7) {
        // 0x80011B1C: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_80011B2C;
    }
    goto skip_4;
    // 0x80011B1C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_4:
    // 0x80011B20: beql        $a0, $s1, L_80011B2C
    if (ctx->r4 == ctx->r17) {
        // 0x80011B24: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_80011B2C;
    }
    goto skip_5;
    // 0x80011B24: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_5:
    // 0x80011B28: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_80011B2C:
    // 0x80011B2C: bnel        $v1, $zero, L_80011AE0
    if (ctx->r3 != 0) {
        // 0x80011B30: lbu         $a0, 0x4($v1)
        ctx->r4 = MEM_BU(ctx->r3, 0X4);
            goto L_80011AE0;
    }
    goto skip_6;
    // 0x80011B30: lbu         $a0, 0x4($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X4);
    skip_6:
    // 0x80011B34: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_80011B38:
    // 0x80011B38: bnel        $v0, $zero, L_80011AD4
    if (ctx->r2 != 0) {
        // 0x80011B3C: lw          $v1, 0x18($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X18);
            goto L_80011AD4;
    }
    goto skip_7;
    // 0x80011B3C: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    skip_7:
L_80011B40:
    // 0x80011B40: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x80011B44: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x80011B48: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x80011B4C: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x80011B50: jr          $ra
    // 0x80011B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80011B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003B9B8_3C5B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B9B8: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003B9BC: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003B9C0: addiu       $a2, $a2, 0x172C
    ctx->r6 = ADD32(ctx->r6, 0X172C);
    // 0x8003B9C4: addiu       $a1, $a1, 0x1728
    ctx->r5 = ADD32(ctx->r5, 0X1728);
    // 0x8003B9C8: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8003B9CC: lui         $t0, 0x8007
    ctx->r8 = S32(0X8007 << 16);
    // 0x8003B9D0: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x8003B9D4: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003B9D8: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8003B9DC: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x8003B9E0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8003B9E4: lhu         $t0, -0x1702($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1702);
    // 0x8003B9E8: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x8003B9EC: sh          $t0, 0x4E($t1)
    MEM_H(0X4E, ctx->r9) = ctx->r8;
    // 0x8003B9F0: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x8003B9F4: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x8003B9F8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8003B9FC: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x8003BA00: lbu         $v1, 0x0($t3)
    ctx->r3 = MEM_BU(ctx->r11, 0X0);
    // 0x8003BA04: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8003BA08: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x8003BA0C: andi        $t5, $v1, 0xF0
    ctx->r13 = ctx->r3 & 0XF0;
    // 0x8003BA10: sra         $t6, $t5, 2
    ctx->r14 = S32(SIGNED(ctx->r13) >> 2);
    // 0x8003BA14: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8003BA18: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x8003BA1C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8003BA20: lhu         $t9, -0x1786($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1786);
    // 0x8003BA24: andi        $t1, $v1, 0xF
    ctx->r9 = ctx->r3 & 0XF;
    // 0x8003BA28: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8003BA2C: sh          $t9, 0x50($t0)
    MEM_H(0X50, ctx->r8) = ctx->r25;
    // 0x8003BA30: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x8003BA34: sh          $t2, 0x54($t3)
    MEM_H(0X54, ctx->r11) = ctx->r10;
    // 0x8003BA38: jr          $ra
    // 0x8003BA3C: nop

    TRACE_RETURN()
    return;
    // 0x8003BA3C: nop

;}
RECOMP_FUNC void func_8001E9B0_1F5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001E9B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001E9B4: lhu         $v0, 0x52($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X52);
    // 0x8001E9B8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8001E9BC: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x8001E9C0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8001E9C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E9C8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8001E9CC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8001E9D0: bne         $v1, $v0, L_8001E9E0
    if (ctx->r3 != ctx->r2) {
        // 0x8001E9D4: sw          $a3, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r7;
            goto L_8001E9E0;
    }
    // 0x8001E9D4: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8001E9D8: b           L_8001E9E4
    // 0x8001E9DC: sh          $zero, 0x52($sp)
    MEM_H(0X52, ctx->r29) = 0;
        goto L_8001E9E4;
    // 0x8001E9DC: sh          $zero, 0x52($sp)
    MEM_H(0X52, ctx->r29) = 0;
L_8001E9E0:
    // 0x8001E9E0: sh          $v0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r2;
L_8001E9E4:
    // 0x8001E9E4: lhu         $v0, 0x56($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X56);
    // 0x8001E9E8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8001E9EC: bne         $v1, $v0, L_8001E9FC
    if (ctx->r3 != ctx->r2) {
        // 0x8001E9F0: andi        $a3, $v0, 0xFFFF
        ctx->r7 = ctx->r2 & 0XFFFF;
            goto L_8001E9FC;
    }
    // 0x8001E9F0: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x8001E9F4: b           L_8001E9FC
    // 0x8001E9F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_8001E9FC;
    // 0x8001E9F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8001E9FC:
    // 0x8001E9FC: lhu         $v0, 0x5A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X5A);
    // 0x8001EA00: bnel        $v1, $v0, L_8001EA14
    if (ctx->r3 != ctx->r2) {
        // 0x8001EA04: sh          $v0, 0x5A($sp)
        MEM_H(0X5A, ctx->r29) = ctx->r2;
            goto L_8001EA14;
    }
    goto skip_0;
    // 0x8001EA04: sh          $v0, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r2;
    skip_0:
    // 0x8001EA08: b           L_8001EA14
    // 0x8001EA0C: sh          $zero, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = 0;
        goto L_8001EA14;
    // 0x8001EA0C: sh          $zero, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = 0;
    // 0x8001EA10: sh          $v0, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r2;
L_8001EA14:
    // 0x8001EA14: lhu         $a0, 0x52($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X52);
    // 0x8001EA18: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8001EA1C: jal         0x80003F30
    // 0x8001EA20: sh          $a3, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r7;
    func_80003F30_4B30(rdram, ctx);
        goto after_0;
    // 0x8001EA20: sh          $a3, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r7;
    after_0:
    // 0x8001EA24: lhu         $a0, 0x56($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X56);
    // 0x8001EA28: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8001EA2C: jal         0x80003F30
    // 0x8001EA30: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_1;
    // 0x8001EA30: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8001EA34: lhu         $a0, 0x5A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X5A);
    // 0x8001EA38: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8001EA3C: jal         0x80003F30
    // 0x8001EA40: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_2;
    // 0x8001EA40: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x8001EA44: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8001EA48: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8001EA4C: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8001EA50: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001EA54: mul.s       $f16, $f4, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8001EA58: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8001EA5C: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8001EA60: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001EA64: neg.s       $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = -ctx->f14.fl;
    // 0x8001EA68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001EA6C: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x8001EA70: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8001EA74: swc1        $f6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f6.u32l;
    // 0x8001EA78: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8001EA7C: swc1        $f4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f4.u32l;
    // 0x8001EA80: mul.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8001EA84: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001EA88: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8001EA8C: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8001EA90: nop

    // 0x8001EA94: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8001EA98: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8001EA9C: swc1        $f6, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f6.u32l;
    // 0x8001EAA0: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8001EAA4: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001EAA8: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8001EAAC: nop

    // 0x8001EAB0: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8001EAB4: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8001EAB8: swc1        $f6, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f6.u32l;
    // 0x8001EABC: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8001EAC0: mul.s       $f18, $f12, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8001EAC4: swc1        $f18, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f18.u32l;
    // 0x8001EAC8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001EACC: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8001EAD0: nop

    // 0x8001EAD4: mul.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8001EAD8: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8001EADC: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8001EAE0: swc1        $f8, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f8.u32l;
    // 0x8001EAE4: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001EAE8: mul.s       $f10, $f12, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8001EAEC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8001EAF0: sub.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x8001EAF4: swc1        $f6, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f6.u32l;
    // 0x8001EAF8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8001EAFC: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8001EB00: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8001EB04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001EB08: swc1        $f18, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f18.u32l;
    // 0x8001EB0C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001EB10: swc1        $f10, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f10.u32l;
    // 0x8001EB14: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001EB18: swc1        $f6, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f6.u32l;
    // 0x8001EB1C: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8001EB20: swc1        $f4, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f4.u32l;
    // 0x8001EB24: lwc1        $f0, 0x2C($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X2C);
    // 0x8001EB28: swc1        $f8, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->f8.u32l;
    // 0x8001EB2C: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8001EB30: swc1        $f12, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->f12.u32l;
    // 0x8001EB34: swc1        $f0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f0.u32l;
    // 0x8001EB38: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x8001EB3C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x8001EB40: bc1t        L_8001EB74
    if (c1cs) {
        // 0x8001EB44: nop
    
            goto L_8001EB74;
    }
    // 0x8001EB44: nop

    // 0x8001EB48: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8001EB4C: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8001EB50: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8001EB54: mul.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8001EB58: nop

    // 0x8001EB5C: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8001EB60: nop

    // 0x8001EB64: mul.s       $f18, $f4, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8001EB68: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x8001EB6C: swc1        $f8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f8.u32l;
    // 0x8001EB70: swc1        $f18, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f18.u32l;
L_8001EB74:
    // 0x8001EB74: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8001EB78: c.eq.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
    // 0x8001EB7C: nop

    // 0x8001EB80: bc1tl       L_8001EBB8
    if (c1cs) {
        // 0x8001EB84: lwc1        $f0, 0x64($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
            goto L_8001EBB8;
    }
    goto skip_1;
    // 0x8001EB84: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    skip_1:
    // 0x8001EB88: lwc1        $f10, 0x10($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8001EB8C: lwc1        $f8, 0x14($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X14);
    // 0x8001EB90: lwc1        $f18, 0x18($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X18);
    // 0x8001EB94: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001EB98: nop

    // 0x8001EB9C: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8001EBA0: nop

    // 0x8001EBA4: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8001EBA8: swc1        $f6, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f6.u32l;
    // 0x8001EBAC: swc1        $f4, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f4.u32l;
    // 0x8001EBB0: swc1        $f10, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f10.u32l;
    // 0x8001EBB4: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
L_8001EBB8:
    // 0x8001EBB8: c.eq.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
    // 0x8001EBBC: nop

    // 0x8001EBC0: bc1tl       L_8001EBF8
    if (c1cs) {
        // 0x8001EBC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001EBF8;
    }
    goto skip_2;
    // 0x8001EBC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8001EBC8: lwc1        $f6, 0x20($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X20);
    // 0x8001EBCC: lwc1        $f4, 0x24($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X24);
    // 0x8001EBD0: lwc1        $f10, 0x28($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X28);
    // 0x8001EBD4: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001EBD8: nop

    // 0x8001EBDC: mul.s       $f18, $f4, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8001EBE0: nop

    // 0x8001EBE4: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001EBE8: swc1        $f8, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f8.u32l;
    // 0x8001EBEC: swc1        $f18, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f18.u32l;
    // 0x8001EBF0: swc1        $f6, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f6.u32l;
    // 0x8001EBF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001EBF8:
    // 0x8001EBF8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8001EBFC: jr          $ra
    // 0x8001EC00: nop

    TRACE_RETURN()
    return;
    // 0x8001EC00: nop

;}
RECOMP_FUNC void func_8000236C_2F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000236C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80002370: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80002374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002378: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x8000237C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002380: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80002384: lbu         $v0, -0x522A($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X522A);
    // 0x80002388: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000238C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80002390: beq         $v0, $zero, L_800023B8
    if (ctx->r2 == 0) {
        // 0x80002394: lui         $a1, 0x801D
        ctx->r5 = S32(0X801D << 16);
            goto L_800023B8;
    }
    // 0x80002394: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x80002398: beq         $v0, $at, L_800023E8
    if (ctx->r2 == ctx->r1) {
        // 0x8000239C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800023E8;
    }
    // 0x8000239C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800023A0: beq         $v0, $at, L_80002408
    if (ctx->r2 == ctx->r1) {
        // 0x800023A4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80002408;
    }
    // 0x800023A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800023A8: beq         $v0, $at, L_8000243C
    if (ctx->r2 == ctx->r1) {
        // 0x800023AC: nop
    
            goto L_8000243C;
    }
    // 0x800023AC: nop

    // 0x800023B0: b           L_80002448
    // 0x800023B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002448;
    // 0x800023B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800023B8:
    // 0x800023B8: jal         0x80001C00
    // 0x800023BC: addiu       $a1, $a1, -0x4BA0
    ctx->r5 = ADD32(ctx->r5, -0X4BA0);
    func_80001C00_2800(rdram, ctx);
        goto after_0;
    // 0x800023BC: addiu       $a1, $a1, -0x4BA0
    ctx->r5 = ADD32(ctx->r5, -0X4BA0);
    after_0:
    // 0x800023C0: ori         $v1, $zero, 0xFFFF
    ctx->r3 = 0 | 0XFFFF;
    // 0x800023C4: beq         $v1, $zero, L_800023DC
    if (ctx->r3 == 0) {
        // 0x800023C8: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_800023DC;
    }
    // 0x800023C8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
L_800023CC:
    // 0x800023CC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800023D0: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x800023D4: bne         $t7, $zero, L_800023CC
    if (ctx->r15 != 0) {
        // 0x800023D8: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_800023CC;
    }
    // 0x800023D8: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_800023DC:
    // 0x800023DC: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x800023E0: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x800023E4: sh          $zero, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = 0;
L_800023E8:
    // 0x800023E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800023EC: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x800023F0: addiu       $t8, $v0, 0x7FFF
    ctx->r24 = ADD32(ctx->r2, 0X7FFF);
    // 0x800023F4: lbu         $t8, 0x2DD7($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X2DD7);
    // 0x800023F8: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x800023FC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80002400: b           L_80002444
    // 0x80002404: sb          $t9, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r25;
        goto L_80002444;
    // 0x80002404: sb          $t9, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r25;
L_80002408:
    // 0x80002408: jal         0x801D1580
    // 0x8000240C: nop

    func_801D1580_664430(rdram, ctx);
        goto after_1;
    // 0x8000240C: nop

    after_1:
    // 0x80002410: beq         $v0, $zero, L_80002444
    if (ctx->r2 == 0) {
        // 0x80002414: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_80002444;
    }
    // 0x80002414: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80002418: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x8000241C: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80002420: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80002424: sh          $t0, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r8;
    // 0x80002428: addiu       $t1, $v0, 0x7FFF
    ctx->r9 = ADD32(ctx->r2, 0X7FFF);
    // 0x8000242C: lbu         $t1, 0x2DD7($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X2DD7);
    // 0x80002430: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80002434: b           L_80002444
    // 0x80002438: sb          $t2, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r10;
        goto L_80002444;
    // 0x80002438: sb          $t2, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r10;
L_8000243C:
    // 0x8000243C: jal         0x80003728
    // 0x80002440: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80003728_4328(rdram, ctx);
        goto after_2;
    // 0x80002440: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
L_80002444:
    // 0x80002444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002448:
    // 0x80002448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000244C: jr          $ra
    // 0x80002450: nop

    TRACE_RETURN()
    return;
    // 0x80002450: nop

;}
RECOMP_FUNC void func_80014DD8_159D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80014DD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80014DDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80014DE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80014DE4: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x80014DE8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80014DEC: jal         0x80015FDC
    // 0x80014DF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80015FDC_16BDC(rdram, ctx);
        goto after_0;
    // 0x80014DF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80014DF4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80014DF8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80014DFC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80014E00: beq         $v0, $at, L_80014F00
    if (ctx->r2 == ctx->r1) {
        // 0x80014E04: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_80014F00;
    }
    // 0x80014E04: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80014E08: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80014E0C: beq         $v0, $at, L_80014EF0
    if (ctx->r2 == ctx->r1) {
        // 0x80014E10: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_80014EF0;
    }
    // 0x80014E10: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80014E14: beq         $v0, $at, L_80014E24
    if (ctx->r2 == ctx->r1) {
        // 0x80014E18: lui         $v1, 0x8017
        ctx->r3 = S32(0X8017 << 16);
            goto L_80014E24;
    }
    // 0x80014E18: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80014E1C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80014E20: bne         $v0, $at, L_80014F08
    if (ctx->r2 != ctx->r1) {
        // 0x80014E24: addiu       $v1, $v1, -0x7B74
        ctx->r3 = ADD32(ctx->r3, -0X7B74);
            goto L_80014F08;
    }
L_80014E24:
    // 0x80014E24: addiu       $v1, $v1, -0x7B74
    ctx->r3 = ADD32(ctx->r3, -0X7B74);
    // 0x80014E28: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x80014E2C: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x80014E30: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80014E34: sw          $a1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r5;
    // 0x80014E38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80014E3C: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80014E40: mflo        $a2
    ctx->r6 = lo;
    // 0x80014E44: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x80014E48: blez        $a2, L_80014EB8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80014E4C: nop
    
            goto L_80014EB8;
    }
    // 0x80014E4C: nop

    // 0x80014E50: beq         $a3, $zero, L_80014E78
    if (ctx->r7 == 0) {
        // 0x80014E54: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_80014E78;
    }
    // 0x80014E54: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80014E58: sll         $v0, $zero, 1
    ctx->r2 = S32(0 << 1);
L_80014E5C:
    // 0x80014E5C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80014E60: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80014E64: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x80014E68: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80014E6C: bne         $a1, $a0, L_80014E5C
    if (ctx->r5 != ctx->r4) {
        // 0x80014E70: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_80014E5C;
    }
    // 0x80014E70: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80014E74: beq         $a0, $a2, L_80014EB8
    if (ctx->r4 == ctx->r6) {
        // 0x80014E78: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_80014EB8;
    }
L_80014E78:
    // 0x80014E78: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80014E7C: sll         $a1, $a2, 1
    ctx->r5 = S32(ctx->r6 << 1);
L_80014E80:
    // 0x80014E80: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80014E84: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x80014E88: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
    // 0x80014E8C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80014E90: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x80014E94: sh          $zero, 0x2($t4)
    MEM_H(0X2, ctx->r12) = 0;
    // 0x80014E98: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80014E9C: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x80014EA0: sh          $zero, 0x4($t6)
    MEM_H(0X4, ctx->r14) = 0;
    // 0x80014EA4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80014EA8: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80014EAC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80014EB0: bne         $v0, $a1, L_80014E80
    if (ctx->r2 != ctx->r5) {
        // 0x80014EB4: sh          $zero, 0x6($t8)
        MEM_H(0X6, ctx->r24) = 0;
            goto L_80014E80;
    }
    // 0x80014EB4: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
L_80014EB8:
    // 0x80014EB8: jal         0x8001570C
    // 0x80014EBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001570C_1630C(rdram, ctx);
        goto after_1;
    // 0x80014EBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80014EC0: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x80014EC4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80014EC8: bnel        $t9, $at, L_80014F0C
    if (ctx->r25 != ctx->r1) {
        // 0x80014ECC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80014F0C;
    }
    goto skip_0;
    // 0x80014ECC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80014ED0: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x80014ED4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80014ED8: beql        $t0, $at, L_80014F0C
    if (ctx->r8 == ctx->r1) {
        // 0x80014EDC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80014F0C;
    }
    goto skip_1;
    // 0x80014EDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80014EE0: jal         0x800165C4
    // 0x80014EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800165C4_171C4(rdram, ctx);
        goto after_2;
    // 0x80014EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80014EE8: b           L_80014F0C
    // 0x80014EEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80014F0C;
    // 0x80014EEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80014EF0:
    // 0x80014EF0: jal         0x80014F1C
    // 0x80014EF4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80014F1C_15B1C(rdram, ctx);
        goto after_3;
    // 0x80014EF4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x80014EF8: b           L_80014F0C
    // 0x80014EFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80014F0C;
    // 0x80014EFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80014F00:
    // 0x80014F00: jal         0x80015118
    // 0x80014F04: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80015118_15D18(rdram, ctx);
        goto after_4;
    // 0x80014F04: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
L_80014F08:
    // 0x80014F08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80014F0C:
    // 0x80014F0C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80014F10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80014F14: jr          $ra
    // 0x80014F18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80014F18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8000B3E4_BFE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B3E4: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x8000B3E8: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x8000B3EC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8000B3F0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000B3F4: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x8000B3F8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8000B3FC: sb          $zero, -0x521C($at)
    MEM_B(-0X521C, ctx->r1) = 0;
    // 0x8000B400: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8000B404: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000B408: lui         $a2, 0x8006
    ctx->r6 = S32(0X8006 << 16);
    // 0x8000B40C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8000B410: sh          $zero, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = 0;
    // 0x8000B414: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8000B418: addiu       $a2, $a2, -0x45F0
    ctx->r6 = ADD32(ctx->r6, -0X45F0);
    // 0x8000B41C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8000B420: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8000B424: lhu         $a0, -0x520E($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X520E);
L_8000B428:
    // 0x8000B428: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x8000B42C: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x8000B430: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x8000B434: slt         $at, $a0, $t0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8000B438: beq         $at, $zero, L_8000B484
    if (ctx->r1 == 0) {
        // 0x8000B43C: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_8000B484;
    }
    // 0x8000B43C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000B440: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8000B444: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x8000B448: sb          $t1, -0x521C($at)
    MEM_B(-0X521C, ctx->r1) = ctx->r9;
    // 0x8000B44C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8000B450: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8000B454: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8000B458: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
    // 0x8000B45C: lbu         $t3, 0x2DE4($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X2DE4);
    // 0x8000B460: lhu         $t2, 0x2DF2($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X2DF2);
    // 0x8000B464: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000B468: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8000B46C: addu        $t5, $a2, $t4
    ctx->r13 = ADD32(ctx->r6, ctx->r12);
    // 0x8000B470: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x8000B474: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8000B478: subu        $t7, $t2, $t6
    ctx->r15 = SUB32(ctx->r10, ctx->r14);
    // 0x8000B47C: jr          $ra
    // 0x8000B480: sh          $t7, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x8000B480: sh          $t7, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = ctx->r15;
L_8000B484:
    // 0x8000B484: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8000B488: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x8000B48C: slti        $at, $t8, 0xE
    ctx->r1 = SIGNED(ctx->r24) < 0XE ? 1 : 0;
    // 0x8000B490: bne         $at, $zero, L_8000B428
    if (ctx->r1 != 0) {
        // 0x8000B494: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_8000B428;
    }
    // 0x8000B494: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x8000B498: jr          $ra
    // 0x8000B49C: nop

    TRACE_RETURN()
    return;
    // 0x8000B49C: nop

;}
RECOMP_FUNC void func_80016254_16E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80016254: bltz        $a1, L_800162EC
    if (SIGNED(ctx->r5) < 0) {
        // 0x80016258: lui         $v0, 0x8017
        ctx->r2 = S32(0X8017 << 16);
            goto L_800162EC;
    }
    // 0x80016258: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8001625C: lw          $v0, -0x7E8C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E8C);
    // 0x80016260: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80016264: beq         $at, $zero, L_800162EC
    if (ctx->r1 == 0) {
        // 0x80016268: nop
    
            goto L_800162EC;
    }
    // 0x80016268: nop

    // 0x8001626C: bltz        $a2, L_800162EC
    if (SIGNED(ctx->r6) < 0) {
        // 0x80016270: lui         $t6, 0x8017
        ctx->r14 = S32(0X8017 << 16);
            goto L_800162EC;
    }
    // 0x80016270: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80016274: lw          $t6, -0x7E88($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7E88);
    // 0x80016278: andi        $t8, $a3, 0x3E
    ctx->r24 = ctx->r7 & 0X3E;
    // 0x8001627C: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x80016280: slt         $at, $t6, $a2
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80016284: bne         $at, $zero, L_800162EC
    if (ctx->r1 != 0) {
        // 0x80016288: sll         $t0, $t9, 11
        ctx->r8 = S32(ctx->r25 << 11);
            goto L_800162EC;
    }
    // 0x80016288: sll         $t0, $t9, 11
    ctx->r8 = S32(ctx->r25 << 11);
    // 0x8001628C: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x80016290: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80016294: andi        $t1, $a3, 0x7C0
    ctx->r9 = ctx->r7 & 0X7C0;
    // 0x80016298: bne         $t7, $at, L_800162A8
    if (ctx->r15 != ctx->r1) {
        // 0x8001629C: sra         $t2, $t1, 6
        ctx->r10 = S32(SIGNED(ctx->r9) >> 6);
            goto L_800162A8;
    }
    // 0x8001629C: sra         $t2, $t1, 6
    ctx->r10 = S32(SIGNED(ctx->r9) >> 6);
    // 0x800162A0: b           L_800162AC
    // 0x800162A4: andi        $v1, $a3, 0x1
    ctx->r3 = ctx->r7 & 0X1;
        goto L_800162AC;
    // 0x800162A4: andi        $v1, $a3, 0x1
    ctx->r3 = ctx->r7 & 0X1;
L_800162A8:
    // 0x800162A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800162AC:
    // 0x800162AC: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800162B0: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x800162B4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800162B8: lw          $t1, -0x7B74($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X7B74);
    // 0x800162BC: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x800162C0: andi        $t5, $a3, 0xF800
    ctx->r13 = ctx->r7 & 0XF800;
    // 0x800162C4: sra         $t6, $t5, 11
    ctx->r14 = S32(SIGNED(ctx->r13) >> 11);
    // 0x800162C8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800162CC: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x800162D0: sll         $t5, $a1, 1
    ctx->r13 = S32(ctx->r5 << 1);
    // 0x800162D4: mflo        $t2
    ctx->r10 = lo;
    // 0x800162D8: sll         $t0, $t2, 1
    ctx->r8 = S32(ctx->r10 << 1);
    // 0x800162DC: addu        $t3, $t1, $t0
    ctx->r11 = ADD32(ctx->r9, ctx->r8);
    // 0x800162E0: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x800162E4: or          $t9, $t8, $v1
    ctx->r25 = ctx->r24 | ctx->r3;
    // 0x800162E8: sh          $t9, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r25;
L_800162EC:
    // 0x800162EC: jr          $ra
    // 0x800162F0: nop

    TRACE_RETURN()
    return;
    // 0x800162F0: nop

;}
RECOMP_FUNC void func_80036D0C_3790C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036D0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036D10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036D14: jal         0x80036E2C
    // 0x80036D18: nop

    func_80036E2C_37A2C(rdram, ctx);
        goto after_0;
    // 0x80036D18: nop

    after_0:
    // 0x80036D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036D24: jr          $ra
    // 0x80036D28: nop

    TRACE_RETURN()
    return;
    // 0x80036D28: nop

;}
RECOMP_FUNC void alHeapInit(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047F30: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80047F34: andi        $t6, $a1, 0xF
    ctx->r14 = ctx->r5 & 0XF;
    // 0x80047F38: subu        $v0, $v1, $t6
    ctx->r2 = SUB32(ctx->r3, ctx->r14);
    // 0x80047F3C: beq         $v1, $v0, L_80047F4C
    if (ctx->r3 == ctx->r2) {
        // 0x80047F40: addu        $t7, $a1, $v0
        ctx->r15 = ADD32(ctx->r5, ctx->r2);
            goto L_80047F4C;
    }
    // 0x80047F40: addu        $t7, $a1, $v0
    ctx->r15 = ADD32(ctx->r5, ctx->r2);
    // 0x80047F44: b           L_80047F50
    // 0x80047F48: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
        goto L_80047F50;
    // 0x80047F48: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
L_80047F4C:
    // 0x80047F4C: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_80047F50:
    // 0x80047F50: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80047F54: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x80047F58: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80047F5C: jr          $ra
    // 0x80047F60: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x80047F60: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_80021894_22494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80021894: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80021898: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8002189C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800218A0: trunc.w.s   $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x800218A4: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x800218A8: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x800218AC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x800218B0: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x800218B4: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x800218B8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800218BC: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800218C0: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x800218C4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x800218C8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800218CC: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x800218D0: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x800218D4: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x800218D8: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x800218DC: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x800218E0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x800218E4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x800218E8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x800218EC: bc1f        L_80021934
    if (!c1cs) {
        // 0x800218F0: sub.s       $f0, $f12, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f8.fl;
            goto L_80021934;
    }
    // 0x800218F0: sub.s       $f0, $f12, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x800218F4: negu        $t7, $v0
    ctx->r15 = SUB32(0, ctx->r2);
    // 0x800218F8: addiu       $at, $zero, 0x500
    ctx->r1 = ADD32(0, 0X500);
    // 0x800218FC: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x80021900: mflo        $t8
    ctx->r24 = lo;
    // 0x80021904: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80021908: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8002190C: lui         $at, 0x4420
    ctx->r1 = S32(0X4420 << 16);
    // 0x80021910: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80021914: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80021918: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8002191C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80021920: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80021924: nop

    // 0x80021928: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8002192C: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x80021930: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
L_80021934:
    // 0x80021934: lui         $at, 0x44A0
    ctx->r1 = S32(0X44A0 << 16);
    // 0x80021938: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002193C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80021940: lui         $s4, 0x8007
    ctx->r20 = S32(0X8007 << 16);
    // 0x80021944: c.le.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl <= ctx->f12.fl;
    // 0x80021948: addiu       $a0, $a0, -0x3A34
    ctx->r4 = ADD32(ctx->r4, -0X3A34);
    // 0x8002194C: addiu       $s4, $s4, -0x2EA0
    ctx->r20 = ADD32(ctx->r20, -0X2EA0);
    // 0x80021950: bc1fl       L_80021984
    if (!c1cs) {
        // 0x80021954: lui         $at, 0x4370
        ctx->r1 = S32(0X4370 << 16);
            goto L_80021984;
    }
    goto skip_0;
    // 0x80021954: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    skip_0:
    // 0x80021958: trunc.w.s   $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x8002195C: addiu       $at, $zero, 0x500
    ctx->r1 = ADD32(0, 0X500);
    // 0x80021960: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x80021964: nop

    // 0x80021968: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x8002196C: mfhi        $t5
    ctx->r13 = hi;
    // 0x80021970: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x80021974: nop

    // 0x80021978: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8002197C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x80021980: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
L_80021984:
    // 0x80021984: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80021988: nop

    // 0x8002198C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80021990: nop

    // 0x80021994: bc1fl       L_800219A8
    if (!c1cs) {
        // 0x80021998: c.lt.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
            goto L_800219A8;
    }
    goto skip_1;
    // 0x80021998: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    skip_1:
    // 0x8002199C: b           L_800219B8
    // 0x800219A0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_800219B8;
    // 0x800219A0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x800219A4: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
L_800219A8:
    // 0x800219A8: nop

    // 0x800219AC: bc1fl       L_800219BC
    if (!c1cs) {
        // 0x800219B0: lw          $v0, 0x0($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X0);
            goto L_800219BC;
    }
    goto skip_2;
    // 0x800219B0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    skip_2:
    // 0x800219B4: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
L_800219B8:
    // 0x800219B8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
L_800219BC:
    // 0x800219BC: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x800219C0: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x800219C4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800219C8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800219CC: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x800219D0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800219D4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800219D8: lui         $t4, 0xF500
    ctx->r12 = S32(0XF500 << 16);
    // 0x800219DC: ori         $t4, $t4, 0x100
    ctx->r12 = ctx->r12 | 0X100;
    // 0x800219E0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800219E4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800219E8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800219EC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800219F0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800219F4: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x800219F8: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x800219FC: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x80021A00: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80021A04: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x80021A08: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80021A0C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80021A10: lui         $t3, 0x73F
    ctx->r11 = S32(0X73F << 16);
    // 0x80021A14: ori         $t3, $t3, 0xC000
    ctx->r11 = ctx->r11 | 0XC000;
    // 0x80021A18: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80021A1C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80021A20: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80021A24: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80021A28: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80021A2C: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x80021A30: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x80021A34: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80021A38: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80021A3C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80021A40: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80021A44: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80021A48: lui         $s3, 0x8007
    ctx->r19 = S32(0X8007 << 16);
    // 0x80021A4C: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x80021A50: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80021A54: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x80021A58: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80021A5C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80021A60: lw          $v1, -0x2E9C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2E9C);
    // 0x80021A64: lw          $s3, -0x2EA4($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X2EA4);
    // 0x80021A68: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80021A6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80021A70: slt         $at, $s3, $v1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80021A74: beq         $at, $zero, L_80021B64
    if (ctx->r1 == 0) {
        // 0x80021A78: div.s       $f22, $f14, $f4
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = DIV_S(ctx->f14.fl, ctx->f4.fl);
            goto L_80021B64;
    }
    // 0x80021A78: div.s       $f22, $f14, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = DIV_S(ctx->f14.fl, ctx->f4.fl);
    // 0x80021A7C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80021A80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80021A84: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80021A88: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x80021A8C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80021A90: lw          $v0, -0x2EA0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2EA0);
    // 0x80021A94: div.s       $f24, $f12, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = DIV_S(ctx->f12.fl, ctx->f6.fl);
L_80021A98:
    // 0x80021A98: addiu       $t6, $v1, -0x18
    ctx->r14 = ADD32(ctx->r3, -0X18);
    // 0x80021A9C: slt         $at, $t6, $s3
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80021AA0: lui         $s1, 0x8007
    ctx->r17 = S32(0X8007 << 16);
    // 0x80021AA4: lw          $s1, -0x2EA8($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X2EA8);
    // 0x80021AA8: beq         $at, $zero, L_80021AD0
    if (ctx->r1 == 0) {
        // 0x80021AAC: mov.s       $f20, $f24
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
            goto L_80021AD0;
    }
    // 0x80021AAC: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    // 0x80021AB0: subu        $s2, $v1, $s3
    ctx->r18 = SUB32(ctx->r3, ctx->r19);
    // 0x80021AB4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80021AB8: bgez        $s2, L_80021AC8
    if (SIGNED(ctx->r18) >= 0) {
        // 0x80021ABC: sra         $t7, $s2, 1
        ctx->r15 = S32(SIGNED(ctx->r18) >> 1);
            goto L_80021AC8;
    }
    // 0x80021ABC: sra         $t7, $s2, 1
    ctx->r15 = S32(SIGNED(ctx->r18) >> 1);
    // 0x80021AC0: addiu       $at, $s2, 0x1
    ctx->r1 = ADD32(ctx->r18, 0X1);
    // 0x80021AC4: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_80021AC8:
    // 0x80021AC8: b           L_80021AD4
    // 0x80021ACC: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
        goto L_80021AD4;
    // 0x80021ACC: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
L_80021AD0:
    // 0x80021AD0: addiu       $s2, $zero, 0xC
    ctx->r18 = ADD32(0, 0XC);
L_80021AD4:
    // 0x80021AD4: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80021AD8: beq         $at, $zero, L_80021B54
    if (ctx->r1 == 0) {
        // 0x80021ADC: addiu       $t8, $v0, -0x148
        ctx->r24 = ADD32(ctx->r2, -0X148);
            goto L_80021B54;
    }
L_80021ADC:
    // 0x80021ADC: addiu       $t8, $v0, -0x148
    ctx->r24 = ADD32(ctx->r2, -0X148);
    // 0x80021AE0: slt         $at, $t8, $s1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80021AE4: beq         $at, $zero, L_80021B0C
    if (ctx->r1 == 0) {
        // 0x80021AE8: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80021B0C;
    }
    // 0x80021AE8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80021AEC: subu        $s0, $v0, $s1
    ctx->r16 = SUB32(ctx->r2, ctx->r17);
    // 0x80021AF0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80021AF4: bgez        $s0, L_80021B04
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80021AF8: sra         $t9, $s0, 1
        ctx->r25 = S32(SIGNED(ctx->r16) >> 1);
            goto L_80021B04;
    }
    // 0x80021AF8: sra         $t9, $s0, 1
    ctx->r25 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80021AFC: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x80021B00: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_80021B04:
    // 0x80021B04: b           L_80021B10
    // 0x80021B08: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
        goto L_80021B10;
    // 0x80021B08: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_80021B0C:
    // 0x80021B0C: addiu       $s0, $zero, 0xA4
    ctx->r16 = ADD32(0, 0XA4);
L_80021B10:
    // 0x80021B10: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80021B14: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80021B18: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80021B1C: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x80021B20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80021B24: jal         0x80021B98
    // 0x80021B28: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_80021B98_22798(rdram, ctx);
        goto after_0;
    // 0x80021B28: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_0:
    // 0x80021B2C: addiu       $t3, $s0, -0x1
    ctx->r11 = ADD32(ctx->r16, -0X1);
    // 0x80021B30: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80021B34: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x80021B38: addiu       $s1, $s1, 0x146
    ctx->r17 = ADD32(ctx->r17, 0X146);
    // 0x80021B3C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80021B40: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80021B44: bne         $at, $zero, L_80021ADC
    if (ctx->r1 != 0) {
        // 0x80021B48: add.s       $f20, $f20, $f10
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f10.fl;
            goto L_80021ADC;
    }
    // 0x80021B48: add.s       $f20, $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f10.fl;
    // 0x80021B4C: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x80021B50: lw          $v1, -0x2E9C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2E9C);
L_80021B54:
    // 0x80021B54: addiu       $s3, $s3, 0x14
    ctx->r19 = ADD32(ctx->r19, 0X14);
    // 0x80021B58: slt         $at, $s3, $v1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80021B5C: bne         $at, $zero, L_80021A98
    if (ctx->r1 != 0) {
        // 0x80021B60: add.s       $f22, $f22, $f26
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f26.fl;
            goto L_80021A98;
    }
    // 0x80021B60: add.s       $f22, $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f26.fl;
L_80021B64:
    // 0x80021B64: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80021B68: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80021B6C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80021B70: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x80021B74: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x80021B78: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x80021B7C: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x80021B80: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x80021B84: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x80021B88: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x80021B8C: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x80021B90: jr          $ra
    // 0x80021B94: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80021B94: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8003DF68_3EB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003DF68: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003DF6C: addiu       $a0, $a0, 0x77A0
    ctx->r4 = ADD32(ctx->r4, 0X77A0);
    // 0x8003DF70: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8003DF74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003DF78: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8003DF7C: bne         $at, $zero, L_8003DF8C
    if (ctx->r1 != 0) {
        // 0x8003DF80: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_8003DF8C;
    }
    // 0x8003DF80: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x8003DF84: jr          $ra
    // 0x8003DF88: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8003DF88: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
L_8003DF8C:
    // 0x8003DF8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003DF90: jr          $ra
    // 0x8003DF94: nop

    TRACE_RETURN()
    return;
    // 0x8003DF94: nop

;}
RECOMP_FUNC void func_80005FDC_6BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80005FDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80005FE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80005FE4: jal         0x80002EFC
    // 0x80005FE8: nop

    func_80002EFC_3AFC(rdram, ctx);
        goto after_0;
    // 0x80005FE8: nop

    after_0:
    // 0x80005FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80005FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80005FF4: jr          $ra
    // 0x80005FF8: nop

    TRACE_RETURN()
    return;
    // 0x80005FF8: nop

;}
RECOMP_FUNC void func_80035044_35C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035044: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003504C: jal         0x800350C4
    // 0x80035050: nop

    func_800350C4_35CC4(rdram, ctx);
        goto after_0;
    // 0x80035050: nop

    after_0:
    // 0x80035054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003505C: jr          $ra
    // 0x80035060: nop

    TRACE_RETURN()
    return;
    // 0x80035060: nop

;}
RECOMP_FUNC void func_8001C7E4_1D3E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001C7E4: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8001C7E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001C7EC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8001C7F0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8001C7F4: lhu         $t8, 0x16($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X16);
    // 0x8001C7F8: lhu         $a0, 0x14($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X14);
    // 0x8001C7FC: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x8001C800: sh          $t8, 0x74($sp)
    MEM_H(0X74, ctx->r29) = ctx->r24;
    // 0x8001C804: lhu         $t9, 0x18($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X18);
    // 0x8001C808: jal         0x80003F30
    // 0x8001C80C: sh          $t9, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r25;
    func_80003F30_4B30(rdram, ctx);
        goto after_0;
    // 0x8001C80C: sh          $t9, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r25;
    after_0:
    // 0x8001C810: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8001C814: lhu         $a0, 0x74($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X74);
    // 0x8001C818: jal         0x80003F30
    // 0x8001C81C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_80003F30_4B30(rdram, ctx);
        goto after_1;
    // 0x8001C81C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x8001C820: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x8001C824: lhu         $a0, 0x72($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X72);
    // 0x8001C828: jal         0x80003F30
    // 0x8001C82C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_80003F30_4B30(rdram, ctx);
        goto after_2;
    // 0x8001C82C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_2:
    // 0x8001C830: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8001C834: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8001C838: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001C83C: mul.s       $f18, $f20, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x8001C840: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8001C844: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8001C848: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8001C84C: addiu       $v1, $v1, -0x767C
    ctx->r3 = ADD32(ctx->r3, -0X767C);
    // 0x8001C850: lwc1        $f14, 0x0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8001C854: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8001C858: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8001C85C: addiu       $v0, $v0, -0x7680
    ctx->r2 = ADD32(ctx->r2, -0X7680);
    // 0x8001C860: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8001C864: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001C868: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8001C86C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x8001C870: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001C874: addiu       $a0, $a0, -0x7678
    ctx->r4 = ADD32(ctx->r4, -0X7678);
    // 0x8001C878: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001C87C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C880: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8001C884: mul.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8001C888: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8001C88C: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8001C890: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x8001C894: mul.s       $f6, $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8001C898: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8001C89C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8001C8A0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x8001C8A4: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8001C8A8: nop

    // 0x8001C8AC: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8001C8B0: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001C8B4: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8001C8B8: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8001C8BC: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8001C8C0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8001C8C4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x8001C8C8: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x8001C8CC: mul.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8001C8D0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8001C8D4: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8001C8D8: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001C8DC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x8001C8E0: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001C8E4: nop

    // 0x8001C8E8: mul.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8001C8EC: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8001C8F0: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8001C8F4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8001C8F8: mul.s       $f8, $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8001C8FC: nop

    // 0x8001C900: mul.s       $f4, $f20, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x8001C904: sub.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8001C908: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8001C90C: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001C910: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8001C914: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x8001C918: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x8001C91C: mul.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8001C920: nop

    // 0x8001C924: mul.s       $f10, $f20, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x8001C928: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8001C92C: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8001C930: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8001C934: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8001C938: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8001C93C: nop

    // 0x8001C940: mul.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8001C944: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001C948: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8001C94C: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8001C950: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001C954: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8001C958: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001C95C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x8001C960: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x8001C964: jr          $ra
    // 0x8001C968: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8001C968: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8000B880_C480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B880: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8000B884: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000B888: addiu       $v0, $v0, 0x7C54
    ctx->r2 = ADD32(ctx->r2, 0X7C54);
    // 0x8000B88C: addiu       $v1, $v1, 0x7C48
    ctx->r3 = ADD32(ctx->r3, 0X7C48);
L_8000B890:
    // 0x8000B890: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000B894: bne         $v1, $v0, L_8000B890
    if (ctx->r3 != ctx->r2) {
        // 0x8000B898: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_8000B890;
    }
    // 0x8000B898: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8000B89C: jr          $ra
    // 0x8000B8A0: nop

    TRACE_RETURN()
    return;
    // 0x8000B8A0: nop

;}
RECOMP_FUNC void func_80001DF4_29F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001DFC: jal         0x80001E50
    // 0x80001E00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80001E50_2A50(rdram, ctx);
        goto after_0;
    // 0x80001E00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80001E04: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80001E08: bne         $v0, $at, L_80001E18
    if (ctx->r2 != ctx->r1) {
        // 0x80001E0C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80001E18;
    }
    // 0x80001E0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80001E10: b           L_80001E40
    // 0x80001E14: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
        goto L_80001E40;
    // 0x80001E14: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
L_80001E18:
    // 0x80001E18: beq         $a0, $zero, L_80001E40
    if (ctx->r4 == 0) {
        // 0x80001E1C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80001E40;
    }
    // 0x80001E1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80001E20: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x80001E24: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x80001E28: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80001E2C: lw          $v0, 0x4AC4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4AC4);
    // 0x80001E30: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80001E34: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x80001E38: b           L_80001E40
    // 0x80001E3C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_80001E40;
    // 0x80001E3C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80001E40:
    // 0x80001E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001E44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001E48: jr          $ra
    // 0x80001E4C: nop

    TRACE_RETURN()
    return;
    // 0x80001E4C: nop

;}
RECOMP_FUNC void func_80035728_36328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035728: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8003572C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80035730: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80035734: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80035738: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8003573C: lhu         $t6, 0x62($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X62);
    // 0x80035740: lhu         $t7, 0x66($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X66);
    // 0x80035744: lhu         $t8, 0x6A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X6A);
    // 0x80035748: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8003574C: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80035750: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80035754: lhu         $t9, 0x7A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X7A);
    // 0x80035758: lhu         $t0, 0x7E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X7E);
    // 0x8003575C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80035760: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80035764: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80035768: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8003576C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80035770: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x80035774: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x80035778: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    // 0x8003577C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80035780: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x80035784: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80035788: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8003578C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80035790: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80035794: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80035798: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x8003579C: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x800357A0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800357A4: jal         0x800357BC
    // 0x800357A8: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    func_800357BC_363BC(rdram, ctx);
        goto after_0;
    // 0x800357A8: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    after_0:
    // 0x800357AC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800357B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800357B4: jr          $ra
    // 0x800357B8: nop

    TRACE_RETURN()
    return;
    // 0x800357B8: nop

;}
RECOMP_FUNC void func_80001C00_2800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001C00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80001C04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80001C08: sltiu       $at, $a0, 0x520
    ctx->r1 = ctx->r4 < 0X520 ? 1 : 0;
    // 0x80001C0C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80001C10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80001C14: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80001C18: bne         $at, $zero, L_80001C28
    if (ctx->r1 != 0) {
        // 0x80001C1C: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_80001C28;
    }
    // 0x80001C1C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80001C20: b           L_80001D54
    // 0x80001C24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80001D54;
    // 0x80001C24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80001C28:
    // 0x80001C28: beq         $a2, $zero, L_80001D54
    if (ctx->r6 == 0) {
        // 0x80001C2C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80001D54;
    }
    // 0x80001C2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80001C30: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80001C34: addiu       $v0, $a2, -0x1
    ctx->r2 = ADD32(ctx->r6, -0X1);
    // 0x80001C38: addiu       $t2, $t2, 0x73C8
    ctx->r10 = ADD32(ctx->r10, 0X73C8);
    // 0x80001C3C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80001C40: addu        $a0, $t2, $t6
    ctx->r4 = ADD32(ctx->r10, ctx->r14);
    // 0x80001C44: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x80001C48: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x80001C4C: lui         $t1, 0x7FFF
    ctx->r9 = S32(0X7FFF << 16);
    // 0x80001C50: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80001C54: and         $t8, $t7, $t1
    ctx->r24 = ctx->r15 & ctx->r9;
    // 0x80001C58: and         $t4, $t9, $t1
    ctx->r12 = ctx->r25 & ctx->r9;
    // 0x80001C5C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80001C60: subu        $t0, $t4, $t8
    ctx->r8 = SUB32(ctx->r12, ctx->r24);
    // 0x80001C64: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80001C68: addiu       $t8, $t8, 0x4ACC
    ctx->r24 = ADD32(ctx->r24, 0X4ACC);
    // 0x80001C6C: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x80001C70: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x80001C74: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x80001C78: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x80001C7C: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80001C80: addiu       $t3, $t3, -0x3A2C
    ctx->r11 = ADD32(ctx->r11, -0X3A2C);
    // 0x80001C84: lbu         $t6, 0x0($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X0);
    // 0x80001C88: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80001C8C: subu        $t5, $t9, $t4
    ctx->r13 = SUB32(ctx->r25, ctx->r12);
    // 0x80001C90: addu        $a3, $t5, $s0
    ctx->r7 = ADD32(ctx->r13, ctx->r16);
    // 0x80001C94: sb          $t7, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r15;
    // 0x80001C98: beq         $t0, $zero, L_80001D1C
    if (ctx->r8 == 0) {
        // 0x80001C9C: sb          $t6, 0x37($sp)
        MEM_B(0X37, ctx->r29) = ctx->r14;
            goto L_80001D1C;
    }
    // 0x80001C9C: sb          $t6, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r14;
    // 0x80001CA0: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x80001CA4: addu        $v0, $t2, $t8
    ctx->r2 = ADD32(ctx->r10, ctx->r24);
    // 0x80001CA8: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x80001CAC: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80001CB0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80001CB4: sll         $t9, $a0, 0
    ctx->r25 = S32(ctx->r4 << 0);
    // 0x80001CB8: bltz        $t9, L_80001CF4
    if (SIGNED(ctx->r25) < 0) {
        // 0x80001CBC: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_80001CF4;
    }
    // 0x80001CBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80001CC0: addiu       $v0, $t0, 0x1
    ctx->r2 = ADD32(ctx->r8, 0X1);
    // 0x80001CC4: and         $a2, $v0, $at
    ctx->r6 = ctx->r2 & ctx->r1;
    // 0x80001CC8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x80001CCC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80001CD0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80001CD4: jal         0x80001640
    // 0x80001CD8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_80001640_2240(rdram, ctx);
        goto after_0;
    // 0x80001CD8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x80001CDC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80001CE0: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80001CE4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80001CE8: addiu       $t3, $t3, -0x3A2C
    ctx->r11 = ADD32(ctx->r11, -0X3A2C);
    // 0x80001CEC: b           L_80001D1C
    // 0x80001CF0: addu        $v1, $s0, $v0
    ctx->r3 = ADD32(ctx->r16, ctx->r2);
        goto L_80001D1C;
    // 0x80001CF0: addu        $v1, $s0, $v0
    ctx->r3 = ADD32(ctx->r16, ctx->r2);
L_80001CF4:
    // 0x80001CF4: lw          $t5, 0x14($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X14);
    // 0x80001CF8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80001CFC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80001D00: and         $t6, $t5, $t1
    ctx->r14 = ctx->r13 & ctx->r9;
    // 0x80001D04: jal         0x80005394
    // 0x80001D08: subu        $a2, $t6, $a0
    ctx->r6 = SUB32(ctx->r14, ctx->r4);
    func_80005394_5F94(rdram, ctx);
        goto after_1;
    // 0x80001D08: subu        $a2, $t6, $a0
    ctx->r6 = SUB32(ctx->r14, ctx->r4);
    after_1:
    // 0x80001D0C: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80001D10: addiu       $t3, $t3, -0x3A2C
    ctx->r11 = ADD32(ctx->r11, -0X3A2C);
    // 0x80001D14: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80001D18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80001D1C:
    // 0x80001D1C: lbu         $t8, 0x37($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X37);
    // 0x80001D20: sltu        $at, $v1, $a3
    ctx->r1 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x80001D24: beq         $at, $zero, L_80001D3C
    if (ctx->r1 == 0) {
        // 0x80001D28: sb          $t8, 0x0($t3)
        MEM_B(0X0, ctx->r11) = ctx->r24;
            goto L_80001D3C;
    }
    // 0x80001D28: sb          $t8, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r24;
L_80001D2C:
    // 0x80001D2C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80001D30: sltu        $at, $v1, $a3
    ctx->r1 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x80001D34: bne         $at, $zero, L_80001D2C
    if (ctx->r1 != 0) {
        // 0x80001D38: sb          $zero, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = 0;
            goto L_80001D2C;
    }
    // 0x80001D38: sb          $zero, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = 0;
L_80001D3C:
    // 0x80001D3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001D40: subu        $a1, $a3, $s0
    ctx->r5 = SUB32(ctx->r7, ctx->r16);
    // 0x80001D44: jal         0x80040620
    // 0x80001D48: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x80001D48: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_2:
    // 0x80001D4C: b           L_80001D54
    // 0x80001D50: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
        goto L_80001D54;
    // 0x80001D50: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_80001D54:
    // 0x80001D54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80001D58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80001D5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80001D60: jr          $ra
    // 0x80001D64: nop

    TRACE_RETURN()
    return;
    // 0x80001D64: nop

;}
RECOMP_FUNC void func_80003628_4228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003628: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000362C: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80003630: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80003634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003638: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000363C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003640: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80003644: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80003648: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8000364C: sb          $a1, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r5;
    // 0x80003650: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80003654: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80003658: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000365C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80003660: jal         0x80003528
    // 0x80003664: sb          $zero, -0x5229($at)
    MEM_B(-0X5229, ctx->r1) = 0;
    func_80003528_4128(rdram, ctx);
        goto after_0;
    // 0x80003664: sb          $zero, -0x5229($at)
    MEM_B(-0X5229, ctx->r1) = 0;
    after_0:
    // 0x80003668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000366C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003670: jr          $ra
    // 0x80003674: nop

    TRACE_RETURN()
    return;
    // 0x80003674: nop

;}
RECOMP_FUNC void func_80010B60_11760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80010B60: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80010B64: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x80010B68: addiu       $t7, $t7, 0x38A8
    ctx->r15 = ADD32(ctx->r15, 0X38A8);
    // 0x80010B6C: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80010B70: lui         $v0, 0xFD10
    ctx->r2 = S32(0XFD10 << 16);
    // 0x80010B74: lui         $v1, 0x8006
    ctx->r3 = S32(0X8006 << 16);
    // 0x80010B78: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80010B7C: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x80010B80: addiu       $t1, $a0, 0x8
    ctx->r9 = ADD32(ctx->r4, 0X8);
    // 0x80010B84: addiu       $v1, $v1, 0x3918
    ctx->r3 = ADD32(ctx->r3, 0X3918);
    // 0x80010B88: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x80010B8C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80010B90: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80010B94: lui         $a1, 0xE800
    ctx->r5 = S32(0XE800 << 16);
    // 0x80010B98: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x80010B9C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x80010BA0: sw          $a1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r5;
    // 0x80010BA4: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80010BA8: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x80010BAC: lui         $a2, 0x700
    ctx->r6 = S32(0X700 << 16);
    // 0x80010BB0: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x80010BB4: addiu       $a0, $t3, 0x8
    ctx->r4 = ADD32(ctx->r11, 0X8);
    // 0x80010BB8: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80010BBC: sw          $a2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r6;
    // 0x80010BC0: lui         $a3, 0xE600
    ctx->r7 = S32(0XE600 << 16);
    // 0x80010BC4: addiu       $t0, $a0, 0x8
    ctx->r8 = ADD32(ctx->r4, 0X8);
    // 0x80010BC8: sw          $a3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r7;
    // 0x80010BCC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80010BD0: lui         $t6, 0x703
    ctx->r14 = S32(0X703 << 16);
    // 0x80010BD4: ori         $t6, $t6, 0xC000
    ctx->r14 = ctx->r14 | 0XC000;
    // 0x80010BD8: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80010BDC: lui         $t5, 0xF000
    ctx->r13 = S32(0XF000 << 16);
    // 0x80010BE0: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    // 0x80010BE4: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x80010BE8: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80010BEC: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x80010BF0: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80010BF4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80010BF8: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x80010BFC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80010C00: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80010C04: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80010C08: addiu       $t9, $t8, 0x20
    ctx->r25 = ADD32(ctx->r24, 0X20);
    // 0x80010C0C: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x80010C10: sw          $a1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r5;
    // 0x80010C14: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x80010C18: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x80010C1C: ori         $t6, $t6, 0x110
    ctx->r14 = ctx->r14 | 0X110;
    // 0x80010C20: sw          $a2, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r6;
    // 0x80010C24: addiu       $v1, $t4, 0x8
    ctx->r3 = ADD32(ctx->r12, 0X8);
    // 0x80010C28: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x80010C2C: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x80010C30: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80010C34: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x80010C38: lui         $t7, 0x703
    ctx->r15 = S32(0X703 << 16);
    // 0x80010C3C: ori         $t7, $t7, 0xC000
    ctx->r15 = ctx->r15 | 0XC000;
    // 0x80010C40: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x80010C44: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x80010C48: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x80010C4C: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80010C50: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80010C54: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80010C58: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x80010C5C: lui         $t9, 0xB800
    ctx->r25 = S32(0XB800 << 16);
    // 0x80010C60: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80010C64: jr          $ra
    // 0x80010C68: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x80010C68: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
;}
RECOMP_FUNC void func_80036E34_37A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036E34: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80036E38: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x80036E3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80036E40: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80036E44: beq         $v1, $zero, L_80036E6C
    if (ctx->r3 == 0) {
        // 0x80036E48: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_80036E6C;
    }
    // 0x80036E48: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80036E4C: beq         $v1, $at, L_80036EB0
    if (ctx->r3 == ctx->r1) {
        // 0x80036E50: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80036EB0;
    }
    // 0x80036E50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80036E54: beq         $v1, $at, L_80036F1C
    if (ctx->r3 == ctx->r1) {
        // 0x80036E58: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80036F1C;
    }
    // 0x80036E58: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80036E5C: beql        $v1, $at, L_80036F5C
    if (ctx->r3 == ctx->r1) {
        // 0x80036E60: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80036F5C;
    }
    goto skip_0;
    // 0x80036E60: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x80036E64: b           L_80036F64
    // 0x80036E68: lwc1        $f0, 0x74($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X74);
        goto L_80036F64;
    // 0x80036E68: lwc1        $f0, 0x74($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X74);
L_80036E6C:
    // 0x80036E6C: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80036E70: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80036E74: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80036E78: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80036E7C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80036E80: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x80036E84: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80036E88: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x80036E8C: nop

    // 0x80036E90: bc1fl       L_80036F68
    if (!c1cs) {
        // 0x80036E94: cfc1        $t4, $FpcCsr
        ctx->r12 = get_cop1_cs();
            goto L_80036F68;
    }
    goto skip_1;
    // 0x80036E94: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    skip_1:
    // 0x80036E98: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80036E9C: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x80036EA0: swc1        $f2, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f2.u32l;
    // 0x80036EA4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80036EA8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80036EAC: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
L_80036EB0:
    // 0x80036EB0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80036EB4: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x80036EB8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80036EBC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80036EC0: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80036EC4: addiu       $t9, $a1, -0x1
    ctx->r25 = ADD32(ctx->r5, -0X1);
    // 0x80036EC8: sw          $t9, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r25;
    // 0x80036ECC: beq         $v1, $zero, L_80036F14
    if (ctx->r3 == 0) {
        // 0x80036ED0: swc1        $f2, 0x18($v0)
        MEM_W(0X18, ctx->r2) = ctx->f2.u32l;
            goto L_80036F14;
    }
    // 0x80036ED0: swc1        $f2, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f2.u32l;
    // 0x80036ED4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80036ED8: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80036EDC: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80036EE0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80036EE4: beq         $v1, $zero, L_80036F08
    if (ctx->r3 == 0) {
        // 0x80036EE8: sw          $t1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r9;
            goto L_80036F08;
    }
    // 0x80036EE8: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80036EEC: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x80036EF0: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80036EF4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80036EF8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80036EFC: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80036F00: b           L_80036F1C
    // 0x80036F04: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
        goto L_80036F1C;
    // 0x80036F04: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
L_80036F08:
    // 0x80036F08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80036F0C: b           L_80036F1C
    // 0x80036F10: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
        goto L_80036F1C;
    // 0x80036F10: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
L_80036F14:
    // 0x80036F14: b           L_80036F64
    // 0x80036F18: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
        goto L_80036F64;
    // 0x80036F18: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
L_80036F1C:
    // 0x80036F1C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80036F20: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80036F24: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80036F28: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80036F2C: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80036F30: swc1        $f10, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f10.u32l;
    // 0x80036F34: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80036F38: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x80036F3C: nop

    // 0x80036F40: bc1fl       L_80036F68
    if (!c1cs) {
        // 0x80036F44: cfc1        $t4, $FpcCsr
        ctx->r12 = get_cop1_cs();
            goto L_80036F68;
    }
    goto skip_2;
    // 0x80036F44: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    skip_2:
    // 0x80036F48: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x80036F4C: swc1        $f2, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f2.u32l;
    // 0x80036F50: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80036F54: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80036F58: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_80036F5C:
    // 0x80036F5C: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x80036F60: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
L_80036F64:
    // 0x80036F64: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
L_80036F68:
    // 0x80036F68: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80036F6C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80036F70: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80036F74: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80036F78: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80036F7C: nop

    // 0x80036F80: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80036F84: beql        $t5, $zero, L_80036FD4
    if (ctx->r13 == 0) {
        // 0x80036F88: mfc1        $t5, $f18
        ctx->r13 = (int32_t)ctx->f18.u32l;
            goto L_80036FD4;
    }
    goto skip_3;
    // 0x80036F88: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    skip_3:
    // 0x80036F8C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80036F90: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80036F94: sub.s       $f18, $f0, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x80036F98: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80036F9C: nop

    // 0x80036FA0: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80036FA4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80036FA8: nop

    // 0x80036FAC: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80036FB0: bne         $t5, $zero, L_80036FC8
    if (ctx->r13 != 0) {
        // 0x80036FB4: nop
    
            goto L_80036FC8;
    }
    // 0x80036FB4: nop

    // 0x80036FB8: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x80036FBC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80036FC0: b           L_80036FE0
    // 0x80036FC4: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_80036FE0;
    // 0x80036FC4: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_80036FC8:
    // 0x80036FC8: b           L_80036FE0
    // 0x80036FCC: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_80036FE0;
    // 0x80036FCC: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80036FD0: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
L_80036FD4:
    // 0x80036FD4: nop

    // 0x80036FD8: bltz        $t5, L_80036FC8
    if (SIGNED(ctx->r13) < 0) {
        // 0x80036FDC: nop
    
            goto L_80036FC8;
    }
    // 0x80036FDC: nop

L_80036FE0:
    // 0x80036FE0: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80036FE4: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80036FE8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80036FEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80036FF0: lw          $t7, -0x4FE8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4FE8);
    // 0x80036FF4: jr          $ra
    // 0x80036FF8: sb          $t5, 0x10($t7)
    MEM_B(0X10, ctx->r15) = ctx->r13;
    TRACE_RETURN()
    return;
    // 0x80036FF8: sb          $t5, 0x10($t7)
    MEM_B(0X10, ctx->r15) = ctx->r13;
;}
RECOMP_FUNC void func_80021B98_22798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80021B98: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80021B9C: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x80021BA0: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x80021BA4: mtc1        $s1, $f6
    ctx->f6.u32l = ctx->r17;
    // 0x80021BA8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80021BAC: lui         $at, 0x4420
    ctx->r1 = S32(0X4420 << 16);
    // 0x80021BB0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80021BB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80021BB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80021BBC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80021BC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80021BC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80021BC8: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x80021BCC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80021BD0: lui         $t7, 0xFD48
    ctx->r15 = S32(0XFD48 << 16);
    // 0x80021BD4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80021BD8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80021BDC: lui         $t6, 0xFD48
    ctx->r14 = S32(0XFD48 << 16);
    // 0x80021BE0: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x80021BE4: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x80021BE8: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80021BEC: ori         $t7, $t7, 0x27F
    ctx->r15 = ctx->r15 | 0X27F;
    // 0x80021BF0: addiu       $v1, $v1, -0x3A34
    ctx->r3 = ADD32(ctx->r3, -0X3A34);
    // 0x80021BF4: ori         $t6, $t6, 0x27F
    ctx->r14 = ctx->r14 | 0X27F;
    // 0x80021BF8: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80021BFC: nop

    // 0x80021C00: bc1fl       L_80021FE4
    if (!c1cs) {
        // 0x80021C04: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_80021FE4;
    }
    goto skip_0;
    // 0x80021C04: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x80021C08: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80021C0C: addiu       $v1, $v1, -0x3A34
    ctx->r3 = ADD32(ctx->r3, -0X3A34);
    // 0x80021C10: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021C14: trunc.w.s   $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    ctx->f10.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x80021C18: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x80021C1C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80021C20: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80021C24: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80021C28: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
    // 0x80021C2C: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80021C30: addiu       $t7, $zero, 0x288
    ctx->r15 = ADD32(0, 0X288);
    // 0x80021C34: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80021C38: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021C3C: subu        $t8, $t7, $a0
    ctx->r24 = SUB32(ctx->r15, ctx->r4);
    // 0x80021C40: trunc.w.s   $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x80021C44: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80021C48: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80021C4C: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x80021C50: andi        $t6, $t9, 0x1FF
    ctx->r14 = ctx->r25 & 0X1FF;
    // 0x80021C54: sll         $t7, $t6, 9
    ctx->r15 = S32(ctx->r14 << 9);
    // 0x80021C58: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80021C5C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80021C60: lui         $t9, 0x708
    ctx->r25 = S32(0X708 << 16);
    // 0x80021C64: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x80021C68: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80021C6C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80021C70: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021C74: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x80021C78: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80021C7C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80021C80: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80021C84: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80021C88: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80021C8C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021C90: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x80021C94: andi        $t9, $t5, 0xFFF
    ctx->r25 = ctx->r13 & 0XFFF;
    // 0x80021C98: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80021C9C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80021CA0: sll         $t5, $t9, 12
    ctx->r13 = S32(ctx->r25 << 12);
    // 0x80021CA4: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80021CA8: sll         $a1, $a2, 2
    ctx->r5 = S32(ctx->r6 << 2);
    // 0x80021CAC: andi        $t8, $a1, 0xFFF
    ctx->r24 = ctx->r5 & 0XFFF;
    // 0x80021CB0: or          $t9, $t5, $at
    ctx->r25 = ctx->r13 | ctx->r1;
    // 0x80021CB4: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x80021CB8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80021CBC: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x80021CC0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80021CC4: lui         $at, 0x7A0
    ctx->r1 = S32(0X7A0 << 16);
    // 0x80021CC8: addu        $s0, $a2, $t7
    ctx->r16 = ADD32(ctx->r6, ctx->r15);
    // 0x80021CCC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80021CD0: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80021CD4: andi        $s0, $t8, 0xFFF
    ctx->r16 = ctx->r24 & 0XFFF;
    // 0x80021CD8: or          $t6, $s0, $at
    ctx->r14 = ctx->r16 | ctx->r1;
    // 0x80021CDC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80021CE0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021CE4: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80021CE8: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80021CEC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80021CF0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80021CF4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80021CF8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80021CFC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021D00: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80021D04: lui         $t7, 0x8
    ctx->r15 = S32(0X8 << 16);
    // 0x80021D08: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80021D0C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80021D10: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x80021D14: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80021D18: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80021D1C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021D20: or          $t9, $t5, $at
    ctx->r25 = ctx->r13 | ctx->r1;
    // 0x80021D24: or          $t6, $t9, $a1
    ctx->r14 = ctx->r25 | ctx->r5;
    // 0x80021D28: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80021D2C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80021D30: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80021D34: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x80021D38: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80021D3C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80021D40: lui         $at, 0xA0
    ctx->r1 = S32(0XA0 << 16);
    // 0x80021D44: lw          $t2, 0xCC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XCC);
    // 0x80021D48: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x80021D4C: or          $t8, $s0, $at
    ctx->r24 = ctx->r16 | ctx->r1;
    // 0x80021D50: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80021D54: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x80021D58: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021D5C: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x80021D60: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x80021D64: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80021D68: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x80021D6C: addu        $t5, $t3, $t7
    ctx->r13 = ADD32(ctx->r11, ctx->r15);
    // 0x80021D70: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80021D74: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80021D78: addiu       $t5, $t5, -0x1
    ctx->r13 = ADD32(ctx->r13, -0X1);
    // 0x80021D7C: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x80021D80: andi        $t5, $t9, 0xFFF
    ctx->r13 = ctx->r25 & 0XFFF;
    // 0x80021D84: subu        $t7, $t2, $t8
    ctx->r15 = SUB32(ctx->r10, ctx->r24);
    // 0x80021D88: addiu       $t9, $t7, 0x4FF
    ctx->r25 = ADD32(ctx->r15, 0X4FF);
    // 0x80021D8C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80021D90: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x80021D94: mul.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80021D98: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x80021D9C: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80021DA0: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x80021DA4: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x80021DA8: mul.s       $f4, $f14, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80021DAC: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x80021DB0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80021DB4: andi        $t8, $t4, 0xFFF
    ctx->r24 = ctx->r12 & 0XFFF;
    // 0x80021DB8: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x80021DBC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80021DC0: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x80021DC4: or          $t4, $t8, $zero
    ctx->r12 = ctx->r24 | 0;
    // 0x80021DC8: or          $t8, $t6, $t8
    ctx->r24 = ctx->r14 | ctx->r24;
    // 0x80021DCC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80021DD0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021DD4: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80021DD8: lui         $t9, 0xB400
    ctx->r25 = S32(0XB400 << 16);
    // 0x80021DDC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80021DE0: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80021DE4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80021DE8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80021DEC: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x80021DF0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80021DF4: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x80021DF8: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x80021DFC: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80021E00: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x80021E04: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80021E08: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80021E0C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80021E10: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021E14: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x80021E18: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x80021E1C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80021E20: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80021E24: lui         $t9, 0xB300
    ctx->r25 = S32(0XB300 << 16);
    // 0x80021E28: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80021E2C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80021E30: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021E34: lui         $t7, 0xFD48
    ctx->r15 = S32(0XFD48 << 16);
    // 0x80021E38: ori         $t7, $t7, 0x27F
    ctx->r15 = ctx->r15 | 0X27F;
    // 0x80021E3C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80021E40: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80021E44: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80021E48: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
    // 0x80021E4C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80021E50: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x80021E54: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021E58: addu        $t4, $a0, $s1
    ctx->r12 = ADD32(ctx->r4, ctx->r17);
    // 0x80021E5C: addiu       $t3, $t4, -0x279
    ctx->r11 = ADD32(ctx->r12, -0X279);
    // 0x80021E60: sra         $t8, $t3, 3
    ctx->r24 = S32(SIGNED(ctx->r11) >> 3);
    // 0x80021E64: andi        $t7, $t8, 0x1FF
    ctx->r15 = ctx->r24 & 0X1FF;
    // 0x80021E68: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80021E6C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80021E70: sll         $t9, $t7, 9
    ctx->r25 = S32(ctx->r15 << 9);
    // 0x80021E74: or          $t3, $t9, $at
    ctx->r11 = ctx->r25 | ctx->r1;
    // 0x80021E78: lui         $t8, 0x708
    ctx->r24 = S32(0X708 << 16);
    // 0x80021E7C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80021E80: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80021E84: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021E88: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x80021E8C: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80021E90: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80021E94: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80021E98: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80021E9C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80021EA0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021EA4: addiu       $t7, $t4, -0x281
    ctx->r15 = ADD32(ctx->r12, -0X281);
    // 0x80021EA8: or          $t8, $a1, $at
    ctx->r24 = ctx->r5 | ctx->r1;
    // 0x80021EAC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80021EB0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80021EB4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80021EB8: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x80021EBC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80021EC0: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x80021EC4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80021EC8: or          $t7, $t8, $at
    ctx->r15 = ctx->r24 | ctx->r1;
    // 0x80021ECC: or          $t9, $t7, $s0
    ctx->r25 = ctx->r15 | ctx->r16;
    // 0x80021ED0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80021ED4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80021ED8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021EDC: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80021EE0: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x80021EE4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80021EE8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80021EEC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80021EF0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80021EF4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021EF8: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80021EFC: or          $t8, $a1, $at
    ctx->r24 = ctx->r5 | ctx->r1;
    // 0x80021F00: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80021F04: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80021F08: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80021F0C: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80021F10: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021F14: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80021F18: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80021F1C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80021F20: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x80021F24: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80021F28: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80021F2C: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x80021F30: or          $t6, $t9, $s0
    ctx->r14 = ctx->r25 | ctx->r16;
    // 0x80021F34: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80021F38: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021F3C: sll         $t9, $s1, 1
    ctx->r25 = S32(ctx->r17 << 1);
    // 0x80021F40: addu        $t6, $t9, $t0
    ctx->r14 = ADD32(ctx->r25, ctx->r8);
    // 0x80021F44: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80021F48: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80021F4C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80021F50: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80021F54: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x80021F58: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x80021F5C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80021F60: or          $t8, $t7, $t5
    ctx->r24 = ctx->r15 | ctx->r13;
    // 0x80021F64: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80021F68: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80021F6C: subu        $t6, $t0, $t9
    ctx->r14 = SUB32(ctx->r8, ctx->r25);
    // 0x80021F70: addiu       $t7, $t6, 0x4FE
    ctx->r15 = ADD32(ctx->r14, 0X4FE);
    // 0x80021F74: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80021F78: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80021F7C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x80021F80: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x80021F84: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80021F88: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80021F8C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021F90: lui         $t6, 0xB400
    ctx->r14 = S32(0XB400 << 16);
    // 0x80021F94: sll         $t8, $a0, 5
    ctx->r24 = S32(ctx->r4 << 5);
    // 0x80021F98: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80021F9C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80021FA0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80021FA4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80021FA8: subu        $t6, $t7, $t8
    ctx->r14 = SUB32(ctx->r15, ctx->r24);
    // 0x80021FAC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80021FB0: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80021FB4: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80021FB8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80021FBC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80021FC0: lui         $t8, 0x200
    ctx->r24 = S32(0X200 << 16);
    // 0x80021FC4: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x80021FC8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80021FCC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80021FD0: lui         $t7, 0xB300
    ctx->r15 = S32(0XB300 << 16);
    // 0x80021FD4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80021FD8: b           L_80022204
    // 0x80021FDC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
        goto L_80022204;
    // 0x80021FDC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80021FE0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_80021FE4:
    // 0x80021FE4: trunc.w.s   $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    ctx->f10.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x80021FE8: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x80021FEC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80021FF0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80021FF4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80021FF8: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x80021FFC: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80022000: trunc.w.s   $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x80022004: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80022008: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8002200C: addu        $t4, $a0, $s1
    ctx->r12 = ADD32(ctx->r4, ctx->r17);
    // 0x80022010: subu        $t6, $t4, $a0
    ctx->r14 = SUB32(ctx->r12, ctx->r4);
    // 0x80022014: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80022018: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8002201C: addiu       $t7, $t6, 0x7
    ctx->r15 = ADD32(ctx->r14, 0X7);
    // 0x80022020: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x80022024: andi        $t9, $t8, 0x1FF
    ctx->r25 = ctx->r24 & 0X1FF;
    // 0x80022028: sll         $t6, $t9, 9
    ctx->r14 = S32(ctx->r25 << 9);
    // 0x8002202C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80022030: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x80022034: lui         $t8, 0x708
    ctx->r24 = S32(0X708 << 16);
    // 0x80022038: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x8002203C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80022040: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80022044: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022048: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8002204C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80022050: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80022054: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80022058: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8002205C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80022060: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022064: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x80022068: andi        $t8, $t5, 0xFFF
    ctx->r24 = ctx->r13 & 0XFFF;
    // 0x8002206C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80022070: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80022074: sll         $t5, $t8, 12
    ctx->r13 = S32(ctx->r24 << 12);
    // 0x80022078: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8002207C: sll         $a1, $a2, 2
    ctx->r5 = S32(ctx->r6 << 2);
    // 0x80022080: andi        $t7, $a1, 0xFFF
    ctx->r15 = ctx->r5 & 0XFFF;
    // 0x80022084: or          $t8, $t5, $at
    ctx->r24 = ctx->r13 | ctx->r1;
    // 0x80022088: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8002208C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80022090: addiu       $t6, $t4, -0x1
    ctx->r14 = ADD32(ctx->r12, -0X1);
    // 0x80022094: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80022098: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8002209C: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x800220A0: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x800220A4: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x800220A8: addu        $s0, $a2, $t6
    ctx->r16 = ADD32(ctx->r6, ctx->r14);
    // 0x800220AC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800220B0: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x800220B4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800220B8: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x800220BC: andi        $s0, $t7, 0xFFF
    ctx->r16 = ctx->r15 & 0XFFF;
    // 0x800220C0: or          $t7, $t6, $s0
    ctx->r15 = ctx->r14 | ctx->r16;
    // 0x800220C4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800220C8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800220CC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800220D0: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x800220D4: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x800220D8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800220DC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800220E0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800220E4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800220E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800220EC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800220F0: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x800220F4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800220F8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800220FC: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x80022100: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x80022104: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80022108: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8002210C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022110: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80022114: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x80022118: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8002211C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80022120: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80022124: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80022128: sll         $t7, $s1, 1
    ctx->r15 = S32(ctx->r17 << 1);
    // 0x8002212C: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80022130: or          $t9, $t8, $s0
    ctx->r25 = ctx->r24 | ctx->r16;
    // 0x80022134: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80022138: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8002213C: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x80022140: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80022144: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80022148: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002214C: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80022150: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80022154: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80022158: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x8002215C: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80022160: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80022164: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80022168: addu        $t9, $t3, $t8
    ctx->r25 = ADD32(ctx->r11, ctx->r24);
    // 0x8002216C: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x80022170: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80022174: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x80022178: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8002217C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80022180: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x80022184: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80022188: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x8002218C: mul.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80022190: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80022194: mul.s       $f4, $f14, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80022198: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8002219C: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x800221A0: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x800221A4: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x800221A8: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x800221AC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800221B0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800221B4: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800221B8: lui         $t7, 0xB400
    ctx->r15 = S32(0XB400 << 16);
    // 0x800221BC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800221C0: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800221C4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800221C8: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800221CC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800221D0: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x800221D4: sll         $t7, $t8, 16
    ctx->r15 = S32(ctx->r24 << 16);
    // 0x800221D8: andi        $t8, $t9, 0xFFFF
    ctx->r24 = ctx->r25 & 0XFFFF;
    // 0x800221DC: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x800221E0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800221E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800221E8: lui         $t8, 0x200
    ctx->r24 = S32(0X200 << 16);
    // 0x800221EC: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x800221F0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800221F4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800221F8: lui         $t7, 0xB300
    ctx->r15 = S32(0XB300 << 16);
    // 0x800221FC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80022200: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_80022204:
    // 0x80022204: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x80022208: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x8002220C: jr          $ra
    // 0x80022210: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    TRACE_RETURN()
    return;
    // 0x80022210: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_80016120_16D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80016120: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80016124: addiu       $a3, $a3, -0x7B78
    ctx->r7 = ADD32(ctx->r7, -0X7B78);
    // 0x80016128: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8001612C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80016130: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x80016134: beq         $a1, $v0, L_800161B4
    if (ctx->r5 == ctx->r2) {
        // 0x80016138: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_800161B4;
    }
    // 0x80016138: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8001613C: multu       $a1, $t1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016140: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80016144: addiu       $t0, $t0, -0x7E78
    ctx->r8 = ADD32(ctx->r8, -0X7E78);
    // 0x80016148: mflo        $t6
    ctx->r14 = lo;
    // 0x8001614C: addu        $v1, $t0, $t6
    ctx->r3 = ADD32(ctx->r8, ctx->r14);
    // 0x80016150: lh          $t8, 0x4($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X4);
    // 0x80016154: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
    // 0x80016158: multu       $t8, $t1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001615C: mflo        $t9
    ctx->r25 = lo;
    // 0x80016160: addu        $t2, $t0, $t9
    ctx->r10 = ADD32(ctx->r8, ctx->r25);
    // 0x80016164: sh          $t7, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r15;
    // 0x80016168: lh          $t4, 0x2($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X2);
    // 0x8001616C: lh          $t3, 0x4($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X4);
    // 0x80016170: multu       $t4, $t1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016174: mflo        $t5
    ctx->r13 = lo;
    // 0x80016178: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x8001617C: sh          $t3, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r11;
    // 0x80016180: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016184: mflo        $t8
    ctx->r24 = lo;
    // 0x80016188: addu        $a0, $t0, $t8
    ctx->r4 = ADD32(ctx->r8, ctx->r24);
    // 0x8001618C: lh          $t9, 0x4($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X4);
    // 0x80016190: multu       $t9, $t1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016194: mflo        $t7
    ctx->r15 = lo;
    // 0x80016198: addu        $t2, $t0, $t7
    ctx->r10 = ADD32(ctx->r8, ctx->r15);
    // 0x8001619C: sh          $a1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r5;
    // 0x800161A0: lh          $t4, 0x4($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X4);
    // 0x800161A4: sw          $a1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r5;
    // 0x800161A8: sh          $t4, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r12;
    // 0x800161AC: sh          $a1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r5;
    // 0x800161B0: sh          $v0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r2;
L_800161B4:
    // 0x800161B4: lw          $t6, 0x8($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X8);
    // 0x800161B8: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x800161BC: subu        $t5, $t5, $a1
    ctx->r13 = SUB32(ctx->r13, ctx->r5);
    // 0x800161C0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800161C4: addiu       $t3, $t3, -0x7E78
    ctx->r11 = ADD32(ctx->r11, -0X7E78);
    // 0x800161C8: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x800161CC: bne         $t6, $at, L_800161DC
    if (ctx->r14 != ctx->r1) {
        // 0x800161D0: addu        $v1, $t5, $t3
        ctx->r3 = ADD32(ctx->r13, ctx->r11);
            goto L_800161DC;
    }
    // 0x800161D0: addu        $v1, $t5, $t3
    ctx->r3 = ADD32(ctx->r13, ctx->r11);
    // 0x800161D4: jr          $ra
    // 0x800161D8: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    TRACE_RETURN()
    return;
    // 0x800161D8: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
L_800161DC:
    // 0x800161DC: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x800161E0: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x800161E4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800161E8: jr          $ra
    // 0x800161EC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    TRACE_RETURN()
    return;
    // 0x800161EC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8000643C_703C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000643C: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x80006440: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x80006444: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80006448: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8000644C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80006450: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x80006454: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x80006458: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x8000645C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80006460: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80006464: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80006468: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x8000646C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80006470: addiu       $t4, $t4, 0x73C8
    ctx->r12 = ADD32(ctx->r12, 0X73C8);
    // 0x80006474: addiu       $t3, $t3, 0x73D0
    ctx->r11 = ADD32(ctx->r11, 0X73D0);
    // 0x80006478: addiu       $t2, $t2, 0x73D8
    ctx->r10 = ADD32(ctx->r10, 0X73D8);
    // 0x8000647C: addiu       $t1, $t1, 0x73E0
    ctx->r9 = ADD32(ctx->r9, 0X73E0);
    // 0x80006480: addiu       $t0, $t0, 0x73E8
    ctx->r8 = ADD32(ctx->r8, 0X73E8);
    // 0x80006484: addiu       $a3, $a3, 0x73F0
    ctx->r7 = ADD32(ctx->r7, 0X73F0);
    // 0x80006488: addiu       $a2, $a2, 0x73F8
    ctx->r6 = ADD32(ctx->r6, 0X73F8);
    // 0x8000648C: addiu       $a1, $a1, 0x7400
    ctx->r5 = ADD32(ctx->r5, 0X7400);
    // 0x80006490: addiu       $a0, $a0, 0x7408
    ctx->r4 = ADD32(ctx->r4, 0X7408);
    // 0x80006494: addiu       $v1, $v1, 0x7410
    ctx->r3 = ADD32(ctx->r3, 0X7410);
    // 0x80006498: addiu       $v0, $v0, 0x7418
    ctx->r2 = ADD32(ctx->r2, 0X7418);
    // 0x8000649C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800064A0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800064A4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800064A8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800064AC: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x800064B0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800064B4: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x800064B8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x800064BC: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x800064C0: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x800064C4: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x800064C8: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x800064CC: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x800064D0: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x800064D4: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x800064D8: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x800064DC: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x800064E0: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x800064E4: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x800064E8: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x800064EC: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x800064F0: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x800064F4: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x800064F8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800064FC: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80006500: addiu       $t5, $t5, 0x7438
    ctx->r13 = ADD32(ctx->r13, 0X7438);
    // 0x80006504: sw          $t6, 0x73C0($at)
    MEM_W(0X73C0, ctx->r1) = ctx->r14;
    // 0x80006508: sw          $t7, 0x73C4($at)
    MEM_W(0X73C4, ctx->r1) = ctx->r15;
    // 0x8000650C: swc1        $f0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f0.u32l;
    // 0x80006510: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80006514: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006518: swc1        $f4, 0x7434($at)
    MEM_W(0X7434, ctx->r1) = ctx->f4.u32l;
    // 0x8000651C: lwc1        $f6, 0x7434($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7434);
    // 0x80006520: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006524: swc1        $f6, 0x7430($at)
    MEM_W(0X7430, ctx->r1) = ctx->f6.u32l;
    // 0x80006528: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8000652C: swc1        $f6, 0x742C($at)
    MEM_W(0X742C, ctx->r1) = ctx->f6.u32l;
    // 0x80006530: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006534: swc1        $f6, 0x7428($at)
    MEM_W(0X7428, ctx->r1) = ctx->f6.u32l;
    // 0x80006538: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8000653C: swc1        $f6, 0x7424($at)
    MEM_W(0X7424, ctx->r1) = ctx->f6.u32l;
    // 0x80006540: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006544: swc1        $f0, 0x7448($at)
    MEM_W(0X7448, ctx->r1) = ctx->f0.u32l;
    // 0x80006548: lwc1        $f8, 0x7448($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7448);
    // 0x8000654C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006550: swc1        $f8, 0x7444($at)
    MEM_W(0X7444, ctx->r1) = ctx->f8.u32l;
    // 0x80006554: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006558: swc1        $f8, 0x7440($at)
    MEM_W(0X7440, ctx->r1) = ctx->f8.u32l;
    // 0x8000655C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006560: jr          $ra
    // 0x80006564: swc1        $f8, 0x743C($at)
    MEM_W(0X743C, ctx->r1) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80006564: swc1        $f8, 0x743C($at)
    MEM_W(0X743C, ctx->r1) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8000B8F0_C4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B8F0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8000B8F4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8000B8F8: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x8000B8FC: addiu       $t7, $t7, 0x7C48
    ctx->r15 = ADD32(ctx->r15, 0X7C48);
    // 0x8000B900: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000B904: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x8000B908: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x8000B90C: lw          $s2, 0x0($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X0);
    // 0x8000B910: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x8000B914: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x8000B918: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x8000B91C: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x8000B920: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x8000B924: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x8000B928: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x8000B92C: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x8000B930: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x8000B934: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x8000B938: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x8000B93C: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x8000B940: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x8000B944: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x8000B948: beq         $s2, $zero, L_8000C218
    if (ctx->r18 == 0) {
        // 0x8000B94C: sdc1        $f20, 0x28($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
            goto L_8000C218;
    }
    // 0x8000B94C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x8000B950: lw          $t8, 0x78($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X78);
    // 0x8000B954: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x8000B958: addiu       $s3, $s3, -0x3A34
    ctx->r19 = ADD32(ctx->r19, -0X3A34);
    // 0x8000B95C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8000B960: sw          $t9, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->r25;
    // 0x8000B964: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8000B968: lui         $t6, 0x8006
    ctx->r14 = S32(0X8006 << 16);
    // 0x8000B96C: lui         $s1, 0x8016
    ctx->r17 = S32(0X8016 << 16);
    // 0x8000B970: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x8000B974: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
    // 0x8000B978: lui         $s6, 0x600
    ctx->r22 = S32(0X600 << 16);
    // 0x8000B97C: addiu       $t6, $t6, 0x3480
    ctx->r14 = ADD32(ctx->r14, 0X3480);
    // 0x8000B980: addiu       $s1, $s1, -0x3A38
    ctx->r17 = ADD32(ctx->r17, -0X3A38);
    // 0x8000B984: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000B988: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x8000B98C: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8000B990: lui         $s4, 0x3
    ctx->r20 = S32(0X3 << 16);
    // 0x8000B994: ori         $s4, $s4, 0x8000
    ctx->r20 = ctx->r20 | 0X8000;
    // 0x8000B998: addu        $t8, $t7, $s4
    ctx->r24 = ADD32(ctx->r15, ctx->r20);
    // 0x8000B99C: lh          $t9, 0x2DB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2DB2);
    // 0x8000B9A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000B9A4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8000B9A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8000B9AC: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x8000B9B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000B9B4: sll         $t5, $t9, 6
    ctx->r13 = S32(ctx->r25 << 6);
    // 0x8000B9B8: addu        $a0, $s2, $t5
    ctx->r4 = ADD32(ctx->r18, ctx->r13);
    // 0x8000B9BC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8000B9C0: addiu       $a0, $a0, 0x98
    ctx->r4 = ADD32(ctx->r4, 0X98);
    // 0x8000B9C4: lui         $a2, 0x43A0
    ctx->r6 = S32(0X43A0 << 16);
    // 0x8000B9C8: lui         $a3, 0x4370
    ctx->r7 = S32(0X4370 << 16);
    // 0x8000B9CC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8000B9D0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x8000B9D4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x8000B9D8: jal         0x80042CF4
    // 0x8000B9DC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    guFrustum(rdram, ctx);
        goto after_0;
    // 0x8000B9DC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8000B9E0: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8000B9E4: lui         $t7, 0x103
    ctx->r15 = S32(0X103 << 16);
    // 0x8000B9E8: ori         $t7, $t7, 0x40
    ctx->r15 = ctx->r15 | 0X40;
    // 0x8000B9EC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000B9F0: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
    // 0x8000B9F4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000B9F8: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8000B9FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000BA00: ori         $at, $at, 0x98
    ctx->r1 = ctx->r1 | 0X98;
    // 0x8000BA04: addu        $t9, $t8, $s4
    ctx->r25 = ADD32(ctx->r24, ctx->r20);
    // 0x8000BA08: lh          $t5, 0x2DB2($t9)
    ctx->r13 = MEM_H(ctx->r25, 0X2DB2);
    // 0x8000BA0C: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x8000BA10: addu        $t7, $s2, $t6
    ctx->r15 = ADD32(ctx->r18, ctx->r14);
    // 0x8000BA14: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8000BA18: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8000BA1C: lh          $t9, 0x30($s2)
    ctx->r25 = MEM_H(ctx->r18, 0X30);
    // 0x8000BA20: addiu       $t5, $t9, -0x1
    ctx->r13 = ADD32(ctx->r25, -0X1);
    // 0x8000BA24: sltiu       $at, $t5, 0x6
    ctx->r1 = ctx->r13 < 0X6 ? 1 : 0;
    // 0x8000BA28: beq         $at, $zero, L_8000BAA4
    if (ctx->r1 == 0) {
        // 0x8000BA2C: sll         $t5, $t5, 2
        ctx->r13 = S32(ctx->r13 << 2);
            goto L_8000BAA4;
    }
    // 0x8000BA2C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8000BA30: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000BA34: addu        $at, $at, $t5
    gpr jr_addend_8000BA3C = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8000BA38: lw          $t5, -0x541C($at)
    ctx->r13 = ADD32(ctx->r1, -0X541C);
    // 0x8000BA3C: jr          $t5
    // 0x8000BA40: nop

    switch (jr_addend_8000BA3C >> 2) {
        case 0: goto L_8000BA44; break;
        case 1: goto L_8000BA54; break;
        case 2: goto L_8000BA64; break;
        case 3: goto L_8000BA74; break;
        case 4: goto L_8000BA84; break;
        case 5: goto L_8000BA94; break;
        default: switch_error(__func__, 0x8000BA3C, 0x8007ABE4);
    }
    // 0x8000BA40: nop

L_8000BA44:
    // 0x8000BA44: jal         0x8000D400
    // 0x8000BA48: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8000D400_E000(rdram, ctx);
        goto after_1;
    // 0x8000BA48: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x8000BA4C: b           L_8000BAAC
    // 0x8000BA50: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
        goto L_8000BAAC;
    // 0x8000BA50: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
L_8000BA54:
    // 0x8000BA54: jal         0x8000D4E0
    // 0x8000BA58: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8000D4E0_E0E0(rdram, ctx);
        goto after_2;
    // 0x8000BA58: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x8000BA5C: b           L_8000BAAC
    // 0x8000BA60: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
        goto L_8000BAAC;
    // 0x8000BA60: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
L_8000BA64:
    // 0x8000BA64: jal         0x8000D66C
    // 0x8000BA68: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8000D66C_E26C(rdram, ctx);
        goto after_3;
    // 0x8000BA68: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x8000BA6C: b           L_8000BAAC
    // 0x8000BA70: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
        goto L_8000BAAC;
    // 0x8000BA70: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
L_8000BA74:
    // 0x8000BA74: jal         0x8000DA94
    // 0x8000BA78: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8000DA94_E694(rdram, ctx);
        goto after_4;
    // 0x8000BA78: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x8000BA7C: b           L_8000BAAC
    // 0x8000BA80: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
        goto L_8000BAAC;
    // 0x8000BA80: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
L_8000BA84:
    // 0x8000BA84: jal         0x8000D6D0
    // 0x8000BA88: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8000D6D0_E2D0(rdram, ctx);
        goto after_5;
    // 0x8000BA88: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
    // 0x8000BA8C: b           L_8000BAAC
    // 0x8000BA90: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
        goto L_8000BAAC;
    // 0x8000BA90: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
L_8000BA94:
    // 0x8000BA94: jal         0x8000D79C
    // 0x8000BA98: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8000D79C_E39C(rdram, ctx);
        goto after_6;
    // 0x8000BA98: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x8000BA9C: b           L_8000BAAC
    // 0x8000BAA0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
        goto L_8000BAAC;
    // 0x8000BAA0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
L_8000BAA4:
    // 0x8000BAA4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x8000BAA8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
L_8000BAAC:
    // 0x8000BAAC: bnel        $t6, $zero, L_8000BAC8
    if (ctx->r14 != 0) {
        // 0x8000BAB0: lw          $t7, 0x4($s2)
        ctx->r15 = MEM_W(ctx->r18, 0X4);
            goto L_8000BAC8;
    }
    goto skip_0;
    // 0x8000BAB0: lw          $t7, 0x4($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X4);
    skip_0:
    // 0x8000BAB4: jal         0x8000C878
    // 0x8000BAB8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8000C878_D478(rdram, ctx);
        goto after_7;
    // 0x8000BAB8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_7:
    // 0x8000BABC: b           L_8000C218
    // 0x8000BAC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000C218;
    // 0x8000BAC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000BAC4: lw          $t7, 0x4($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X4);
L_8000BAC8:
    // 0x8000BAC8: beql        $t7, $zero, L_8000BB60
    if (ctx->r15 == 0) {
        // 0x8000BACC: lw          $v0, 0x0($s3)
        ctx->r2 = MEM_W(ctx->r19, 0X0);
            goto L_8000BB60;
    }
    goto skip_1;
    // 0x8000BACC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    skip_1:
    // 0x8000BAD0: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8000BAD4: lui         $t9, 0x8006
    ctx->r25 = S32(0X8006 << 16);
    // 0x8000BAD8: addiu       $t9, $t9, 0x3528
    ctx->r25 = ADD32(ctx->r25, 0X3528);
    // 0x8000BADC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000BAE0: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
    // 0x8000BAE4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000BAE8: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x8000BAEC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8000BAF0: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x8000BAF4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8000BAF8: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x8000BAFC: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
    // 0x8000BB00: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000BB04: lw          $t8, 0x28($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X28);
    // 0x8000BB08: lw          $t7, 0x7C54($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7C54);
    // 0x8000BB0C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8000BB10: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8000BB14: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8000BB18: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8000BB1C: addu        $v1, $t7, $t9
    ctx->r3 = ADD32(ctx->r15, ctx->r25);
    // 0x8000BB20: lw          $t7, 0x14($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X14);
    // 0x8000BB24: lw          $t5, 0x20($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X20);
    // 0x8000BB28: lw          $t8, 0x18($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X18);
    // 0x8000BB2C: sll         $t9, $t7, 24
    ctx->r25 = S32(ctx->r15 << 24);
    // 0x8000BB30: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x8000BB34: andi        $t7, $t8, 0xFF
    ctx->r15 = ctx->r24 & 0XFF;
    // 0x8000BB38: lw          $t8, 0x1C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1C);
    // 0x8000BB3C: or          $t5, $t6, $t9
    ctx->r13 = ctx->r14 | ctx->r25;
    // 0x8000BB40: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x8000BB44: or          $t9, $t5, $t6
    ctx->r25 = ctx->r13 | ctx->r14;
    // 0x8000BB48: andi        $t7, $t8, 0xFF
    ctx->r15 = ctx->r24 & 0XFF;
    // 0x8000BB4C: sll         $t5, $t7, 8
    ctx->r13 = S32(ctx->r15 << 8);
    // 0x8000BB50: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x8000BB54: jal         0x8000C904
    // 0x8000BB58: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    func_8000C904_D504(rdram, ctx);
        goto after_8;
    // 0x8000BB58: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    after_8:
    // 0x8000BB5C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
L_8000BB60:
    // 0x8000BB60: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x8000BB64: addiu       $t7, $t7, 0x3588
    ctx->r15 = ADD32(ctx->r15, 0X3588);
    // 0x8000BB68: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000BB6C: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
    // 0x8000BB70: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8000BB74: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x8000BB78: lw          $t7, 0x14($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X14);
    // 0x8000BB7C: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x8000BB80: or          $s7, $s2, $zero
    ctx->r23 = ctx->r18 | 0;
    // 0x8000BB84: andi        $t9, $t7, 0x1
    ctx->r25 = ctx->r15 & 0X1;
    // 0x8000BB88: beql        $t9, $zero, L_8000BC70
    if (ctx->r25 == 0) {
        // 0x8000BB8C: lui         $at, 0x4480
        ctx->r1 = S32(0X4480 << 16);
            goto L_8000BC70;
    }
    goto skip_2;
    // 0x8000BB8C: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    skip_2:
    // 0x8000BB90: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8000BB94: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8000BB98: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8000BB9C: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x8000BBA0: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
    // 0x8000BBA4: lh          $t7, 0x32($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X32);
    // 0x8000BBA8: lh          $t6, 0x64($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X64);
    // 0x8000BBAC: lh          $t9, 0x66($s2)
    ctx->r25 = MEM_H(ctx->r18, 0X66);
    // 0x8000BBB0: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x8000BBB4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8000BBB8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8000BBBC: nop

    // 0x8000BBC0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000BBC4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8000BBC8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8000BBCC: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x8000BBD0: nop

    // 0x8000BBD4: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8000BBD8: lh          $t5, 0x34($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X34);
    // 0x8000BBDC: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8000BBE0: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8000BBE4: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x8000BBE8: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x8000BBEC: nop

    // 0x8000BBF0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8000BBF4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8000BBF8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8000BBFC: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x8000BC00: nop

    // 0x8000BC04: andi        $t5, $t9, 0xFFF
    ctx->r13 = ctx->r25 & 0XFFF;
    // 0x8000BC08: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x8000BC0C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000BC10: lh          $t9, 0x32($s2)
    ctx->r25 = MEM_H(ctx->r18, 0X32);
    // 0x8000BC14: lh          $t7, 0x68($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X68);
    // 0x8000BC18: lh          $t5, 0x34($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X34);
    // 0x8000BC1C: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x8000BC20: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8000BC24: lh          $t8, 0x6A($s2)
    ctx->r24 = MEM_H(ctx->r18, 0X6A);
    // 0x8000BC28: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000BC2C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8000BC30: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8000BC34: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x8000BC38: nop

    // 0x8000BC3C: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8000BC40: addu        $t6, $t8, $t5
    ctx->r14 = ADD32(ctx->r24, ctx->r13);
    // 0x8000BC44: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8000BC48: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x8000BC4C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000BC50: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8000BC54: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8000BC58: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x8000BC5C: nop

    // 0x8000BC60: andi        $t5, $t8, 0xFFF
    ctx->r13 = ctx->r24 & 0XFFF;
    // 0x8000BC64: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x8000BC68: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000BC6C: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
L_8000BC70:
    // 0x8000BC70: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x8000BC74: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8000BC78: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8000BC7C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8000BC80: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8000BC84: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8000BC88: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8000BC8C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8000BC90: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8000BC94: addiu       $s6, $zero, -0x81
    ctx->r22 = ADD32(0, -0X81);
    // 0x8000BC98: addiu       $s5, $zero, -0x2
    ctx->r21 = ADD32(0, -0X2);
    // 0x8000BC9C: addiu       $s4, $zero, 0x40
    ctx->r20 = ADD32(0, 0X40);
L_8000BCA0:
    // 0x8000BCA0: lh          $t7, 0x19C($s7)
    ctx->r15 = MEM_H(ctx->r23, 0X19C);
    // 0x8000BCA4: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x8000BCA8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8000BCAC: beq         $t7, $zero, L_8000C1FC
    if (ctx->r15 == 0) {
        // 0x8000BCB0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8000C1FC;
    }
    // 0x8000BCB0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8000BCB4: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
    // 0x8000BCB8: sw          $t9, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r25;
    // 0x8000BCBC: addiu       $s0, $s7, 0x198
    ctx->r16 = ADD32(ctx->r23, 0X198);
L_8000BCC0:
    // 0x8000BCC0: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x8000BCC4: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x8000BCC8: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
    // 0x8000BCCC: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x8000BCD0: and         $t6, $t6, $t8
    ctx->r14 = ctx->r14 & ctx->r24;
    // 0x8000BCD4: bne         $t6, $zero, L_8000BCE0
    if (ctx->r14 != 0) {
        // 0x8000BCD8: and         $t7, $t7, $t9
        ctx->r15 = ctx->r15 & ctx->r25;
            goto L_8000BCE0;
    }
    // 0x8000BCD8: and         $t7, $t7, $t9
    ctx->r15 = ctx->r15 & ctx->r25;
    // 0x8000BCDC: beq         $t7, $zero, L_8000BD94
    if (ctx->r15 == 0) {
        // 0x8000BCE0: sltiu       $at, $s1, 0x7
        ctx->r1 = ctx->r17 < 0X7 ? 1 : 0;
            goto L_8000BD94;
    }
L_8000BCE0:
    // 0x8000BCE0: sltiu       $at, $s1, 0x7
    ctx->r1 = ctx->r17 < 0X7 ? 1 : 0;
    // 0x8000BCE4: beq         $at, $zero, L_8000BD94
    if (ctx->r1 == 0) {
        // 0x8000BCE8: sll         $t5, $s1, 2
        ctx->r13 = S32(ctx->r17 << 2);
            goto L_8000BD94;
    }
    // 0x8000BCE8: sll         $t5, $s1, 2
    ctx->r13 = S32(ctx->r17 << 2);
    // 0x8000BCEC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000BCF0: addu        $at, $at, $t5
    gpr jr_addend_8000BCF8 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8000BCF4: lw          $t5, -0x5404($at)
    ctx->r13 = ADD32(ctx->r1, -0X5404);
    // 0x8000BCF8: jr          $t5
    // 0x8000BCFC: nop

    switch (jr_addend_8000BCF8 >> 2) {
        case 0: goto L_8000BD00; break;
        case 1: goto L_8000BD14; break;
        case 2: goto L_8000BD4C; break;
        case 3: goto L_8000BD94; break;
        case 4: goto L_8000BD84; break;
        case 5: goto L_8000BD94; break;
        case 6: goto L_8000BD94; break;
        default: switch_error(__func__, 0x8000BCF8, 0x8007ABFC);
    }
    // 0x8000BCFC: nop

L_8000BD00:
    // 0x8000BD00: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8000BD04: jal         0x8000DBC0
    // 0x8000BD08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000DBC0_E7C0(rdram, ctx);
        goto after_9;
    // 0x8000BD08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8000BD0C: b           L_8000BD98
    // 0x8000BD10: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
        goto L_8000BD98;
    // 0x8000BD10: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
L_8000BD14:
    // 0x8000BD14: lw          $v0, 0x78($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X78);
    // 0x8000BD18: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x8000BD1C: bne         $t8, $zero, L_8000BD94
    if (ctx->r24 != 0) {
        // 0x8000BD20: andi        $t9, $v0, 0x2
        ctx->r25 = ctx->r2 & 0X2;
            goto L_8000BD94;
    }
    // 0x8000BD20: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x8000BD24: beql        $t9, $zero, L_8000BD40
    if (ctx->r25 == 0) {
        // 0x8000BD28: lh          $t5, 0x6($s0)
        ctx->r13 = MEM_H(ctx->r16, 0X6);
            goto L_8000BD40;
    }
    goto skip_3;
    // 0x8000BD28: lh          $t5, 0x6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X6);
    skip_3:
    // 0x8000BD2C: lh          $t6, 0x6($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X6);
    // 0x8000BD30: and         $t7, $t6, $s6
    ctx->r15 = ctx->r14 & ctx->r22;
    // 0x8000BD34: b           L_8000BD94
    // 0x8000BD38: sh          $t7, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r15;
        goto L_8000BD94;
    // 0x8000BD38: sh          $t7, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r15;
    // 0x8000BD3C: lh          $t5, 0x6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X6);
L_8000BD40:
    // 0x8000BD40: ori         $t8, $t5, 0x80
    ctx->r24 = ctx->r13 | 0X80;
    // 0x8000BD44: b           L_8000BD94
    // 0x8000BD48: sh          $t8, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r24;
        goto L_8000BD94;
    // 0x8000BD48: sh          $t8, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r24;
L_8000BD4C:
    // 0x8000BD4C: lw          $v0, 0x78($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X78);
    // 0x8000BD50: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x8000BD54: beq         $t9, $zero, L_8000BD94
    if (ctx->r25 == 0) {
        // 0x8000BD58: andi        $t6, $v0, 0x2
        ctx->r14 = ctx->r2 & 0X2;
            goto L_8000BD94;
    }
    // 0x8000BD58: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x8000BD5C: beql        $t6, $zero, L_8000BD78
    if (ctx->r14 == 0) {
        // 0x8000BD60: lh          $t8, 0x6($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X6);
            goto L_8000BD78;
    }
    goto skip_4;
    // 0x8000BD60: lh          $t8, 0x6($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X6);
    skip_4:
    // 0x8000BD64: lh          $t7, 0x6($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X6);
    // 0x8000BD68: and         $t5, $t7, $s5
    ctx->r13 = ctx->r15 & ctx->r21;
    // 0x8000BD6C: b           L_8000BD94
    // 0x8000BD70: sh          $t5, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r13;
        goto L_8000BD94;
    // 0x8000BD70: sh          $t5, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r13;
    // 0x8000BD74: lh          $t8, 0x6($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X6);
L_8000BD78:
    // 0x8000BD78: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x8000BD7C: b           L_8000BD94
    // 0x8000BD80: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
        goto L_8000BD94;
    // 0x8000BD80: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
L_8000BD84:
    // 0x8000BD84: lwc1        $f18, 0x88($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X88);
    // 0x8000BD88: swc1        $f18, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f18.u32l;
    // 0x8000BD8C: lwc1        $f4, 0x88($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X88);
    // 0x8000BD90: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
L_8000BD94:
    // 0x8000BD94: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
L_8000BD98:
    // 0x8000BD98: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x8000BD9C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8000BDA0: jal         0x80042E04
    // 0x8000BDA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    __ll_lshift_recomp(rdram, ctx);
        goto after_10;
    // 0x8000BDA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x8000BDA8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8000BDAC: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x8000BDB0: bne         $s1, $s4, L_8000BCC0
    if (ctx->r17 != ctx->r20) {
        // 0x8000BDB4: sw          $v1, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r3;
            goto L_8000BCC0;
    }
    // 0x8000BDB4: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
    // 0x8000BDB8: lh          $t6, 0x6($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X6);
    // 0x8000BDBC: lui         $t8, 0xF548
    ctx->r24 = S32(0XF548 << 16);
    // 0x8000BDC0: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x8000BDC4: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x8000BDC8: bne         $t7, $zero, L_8000C1FC
    if (ctx->r15 != 0) {
        // 0x8000BDCC: lui         $t6, 0xFD48
        ctx->r14 = S32(0XFD48 << 16);
            goto L_8000C1FC;
    }
    // 0x8000BDCC: lui         $t6, 0xFD48
    ctx->r14 = S32(0XFD48 << 16);
    // 0x8000BDD0: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8000BDD4: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8000BDD8: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8000BDDC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000BDE0: sw          $t9, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r25;
    // 0x8000BDE4: ori         $t6, $t6, 0x3
    ctx->r14 = ctx->r14 | 0X3;
    // 0x8000BDE8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000BDEC: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8000BDF0: lui         $t9, 0x700
    ctx->r25 = S32(0X700 << 16);
    // 0x8000BDF4: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8000BDF8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8000BDFC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8000BE00: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x8000BE04: mul.s       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x8000BE08: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x8000BE0C: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
    // 0x8000BE10: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000BE14: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000BE18: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8000BE1C: lui         $t8, 0xF400
    ctx->r24 = S32(0XF400 << 16);
    // 0x8000BE20: ori         $t9, $t9, 0xE02C
    ctx->r25 = ctx->r25 | 0XE02C;
    // 0x8000BE24: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000BE28: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
    // 0x8000BE2C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000BE30: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000BE34: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8000BE38: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8000BE3C: div.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f24.fl);
    // 0x8000BE40: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x8000BE44: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
    // 0x8000BE48: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000BE4C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000BE50: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8000BE54: lui         $t8, 0xF540
    ctx->r24 = S32(0XF540 << 16);
    // 0x8000BE58: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x8000BE5C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000BE60: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
    // 0x8000BE64: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000BE68: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000BE6C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8000BE70: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000BE74: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x8000BE78: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
    // 0x8000BE7C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000BE80: lh          $t9, 0x6($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X6);
    // 0x8000BE84: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x8000BE88: andi        $t6, $t9, 0xF
    ctx->r14 = ctx->r25 & 0XF;
    // 0x8000BE8C: div.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f24.fl);
    // 0x8000BE90: sll         $t7, $t6, 20
    ctx->r15 = S32(ctx->r14 << 20);
    // 0x8000BE94: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8000BE98: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8000BE9C: lui         $t9, 0x1
    ctx->r25 = S32(0X1 << 16);
    // 0x8000BEA0: ori         $t9, $t9, 0xC02C
    ctx->r25 = ctx->r25 | 0XC02C;
    // 0x8000BEA4: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x8000BEA8: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
    // 0x8000BEAC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000BEB0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000BEB4: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x8000BEB8: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x8000BEBC: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
    // 0x8000BEC0: lh          $t5, 0x8($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X8);
    // 0x8000BEC4: lh          $t7, 0x32($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X32);
    // 0x8000BEC8: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8000BECC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8000BED0: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x8000BED4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8000BED8: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8000BEDC: mul.s       $f4, $f22, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x8000BEE0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8000BEE4: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8000BEE8: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x8000BEEC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000BEF0: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8000BEF4: nop

    // 0x8000BEF8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000BEFC: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8000BF00: sub.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8000BF04: mul.s       $f16, $f18, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f28.fl);
    // 0x8000BF08: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8000BF0C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000BF10: nop

    // 0x8000BF14: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8000BF18: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000BF1C: nop

    // 0x8000BF20: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8000BF24: beql        $t6, $zero, L_8000BF74
    if (ctx->r14 == 0) {
        // 0x8000BF28: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_8000BF74;
    }
    goto skip_5;
    // 0x8000BF28: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_5:
    // 0x8000BF2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000BF30: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8000BF34: sub.s       $f4, $f16, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x8000BF38: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000BF3C: nop

    // 0x8000BF40: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000BF44: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000BF48: nop

    // 0x8000BF4C: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8000BF50: bne         $t6, $zero, L_8000BF68
    if (ctx->r14 != 0) {
        // 0x8000BF54: nop
    
            goto L_8000BF68;
    }
    // 0x8000BF54: nop

    // 0x8000BF58: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x8000BF5C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000BF60: b           L_8000BF80
    // 0x8000BF64: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8000BF80;
    // 0x8000BF64: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8000BF68:
    // 0x8000BF68: b           L_8000BF80
    // 0x8000BF6C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8000BF80;
    // 0x8000BF6C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8000BF70: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_8000BF74:
    // 0x8000BF74: nop

    // 0x8000BF78: bltz        $t6, L_8000BF68
    if (SIGNED(ctx->r14) < 0) {
        // 0x8000BF7C: nop
    
            goto L_8000BF68;
    }
    // 0x8000BF7C: nop

L_8000BF80:
    // 0x8000BF80: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000BF84: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8000BF88: lh          $t6, 0xA($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA);
    // 0x8000BF8C: lh          $t9, 0x34($s2)
    ctx->r25 = MEM_H(ctx->r18, 0X34);
    // 0x8000BF90: sll         $t5, $t7, 12
    ctx->r13 = S32(ctx->r15 << 12);
    // 0x8000BF94: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8000BF98: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8000BF9C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8000BFA0: mul.s       $f18, $f26, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f26.fl, ctx->f10.fl);
    // 0x8000BFA4: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8000BFA8: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8000BFAC: or          $t8, $t5, $at
    ctx->r24 = ctx->r13 | ctx->r1;
    // 0x8000BFB0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8000BFB4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000BFB8: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000BFBC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000BFC0: add.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8000BFC4: sub.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x8000BFC8: mul.s       $f6, $f10, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x8000BFCC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8000BFD0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000BFD4: nop

    // 0x8000BFD8: cvt.w.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000BFDC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8000BFE0: nop

    // 0x8000BFE4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8000BFE8: beql        $t9, $zero, L_8000C038
    if (ctx->r25 == 0) {
        // 0x8000BFEC: mfc1        $t9, $f18
        ctx->r25 = (int32_t)ctx->f18.u32l;
            goto L_8000C038;
    }
    goto skip_6;
    // 0x8000BFEC: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    skip_6:
    // 0x8000BFF0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000BFF4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8000BFF8: sub.s       $f18, $f6, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x8000BFFC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000C000: nop

    // 0x8000C004: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8000C008: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8000C00C: nop

    // 0x8000C010: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8000C014: bne         $t9, $zero, L_8000C02C
    if (ctx->r25 != 0) {
        // 0x8000C018: nop
    
            goto L_8000C02C;
    }
    // 0x8000C018: nop

    // 0x8000C01C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8000C020: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000C024: b           L_8000C044
    // 0x8000C028: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8000C044;
    // 0x8000C028: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8000C02C:
    // 0x8000C02C: b           L_8000C044
    // 0x8000C030: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8000C044;
    // 0x8000C030: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8000C034: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
L_8000C038:
    // 0x8000C038: nop

    // 0x8000C03C: bltz        $t9, L_8000C02C
    if (SIGNED(ctx->r25) < 0) {
        // 0x8000C040: nop
    
            goto L_8000C02C;
    }
    // 0x8000C040: nop

L_8000C044:
    // 0x8000C044: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8000C048: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8000C04C: sw          $t7, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r15;
    // 0x8000C050: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8000C054: lh          $t5, 0x32($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X32);
    // 0x8000C058: lh          $t9, 0x8($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X8);
    // 0x8000C05C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000C060: addu        $t8, $t5, $t9
    ctx->r24 = ADD32(ctx->r13, ctx->r25);
    // 0x8000C064: subu        $t6, $t8, $t2
    ctx->r14 = SUB32(ctx->r24, ctx->r10);
    // 0x8000C068: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000C06C: lh          $t6, 0xA($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA);
    // 0x8000C070: lh          $t8, 0x34($s2)
    ctx->r24 = MEM_H(ctx->r18, 0X34);
    // 0x8000C074: andi        $t5, $t7, 0xFFF
    ctx->r13 = ctx->r15 & 0XFFF;
    // 0x8000C078: sll         $t9, $t5, 12
    ctx->r25 = S32(ctx->r13 << 12);
    // 0x8000C07C: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x8000C080: subu        $t5, $t7, $t3
    ctx->r13 = SUB32(ctx->r15, ctx->r11);
    // 0x8000C084: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x8000C088: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x8000C08C: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x8000C090: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x8000C094: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8000C098: lui         $t8, 0xB400
    ctx->r24 = S32(0XB400 << 16);
    // 0x8000C09C: lui         $t6, 0xB300
    ctx->r14 = S32(0XB300 << 16);
    // 0x8000C0A0: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x8000C0A4: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
    // 0x8000C0A8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000C0AC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000C0B0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8000C0B4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8000C0B8: addiu       $t9, $a0, 0x8
    ctx->r25 = ADD32(ctx->r4, 0X8);
    // 0x8000C0BC: sw          $t9, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r25;
    // 0x8000C0C0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8000C0C4: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8000C0C8: div.s       $f16, $f30, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = DIV_S(ctx->f30.fl, ctx->f4.fl);
    // 0x8000C0CC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000C0D0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8000C0D4: nop

    // 0x8000C0D8: cvt.w.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8000C0DC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8000C0E0: nop

    // 0x8000C0E4: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8000C0E8: beql        $t5, $zero, L_8000C138
    if (ctx->r13 == 0) {
        // 0x8000C0EC: mfc1        $t5, $f8
        ctx->r13 = (int32_t)ctx->f8.u32l;
            goto L_8000C138;
    }
    goto skip_7;
    // 0x8000C0EC: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    skip_7:
    // 0x8000C0F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000C0F4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8000C0F8: sub.s       $f8, $f16, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x8000C0FC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8000C100: nop

    // 0x8000C104: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8000C108: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8000C10C: nop

    // 0x8000C110: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8000C114: bne         $t5, $zero, L_8000C12C
    if (ctx->r13 != 0) {
        // 0x8000C118: nop
    
            goto L_8000C12C;
    }
    // 0x8000C118: nop

    // 0x8000C11C: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8000C120: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000C124: b           L_8000C144
    // 0x8000C128: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8000C144;
    // 0x8000C128: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8000C12C:
    // 0x8000C12C: b           L_8000C144
    // 0x8000C130: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8000C144;
    // 0x8000C130: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8000C134: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
L_8000C138:
    // 0x8000C138: nop

    // 0x8000C13C: bltz        $t5, L_8000C12C
    if (SIGNED(ctx->r13) < 0) {
        // 0x8000C140: nop
    
            goto L_8000C12C;
    }
    // 0x8000C140: nop

L_8000C144:
    // 0x8000C144: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000C148: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8000C14C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000C150: sll         $t9, $t5, 16
    ctx->r25 = S32(ctx->r13 << 16);
    // 0x8000C154: div.s       $f6, $f30, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = DIV_S(ctx->f30.fl, ctx->f10.fl);
    // 0x8000C158: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000C15C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000C160: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000C164: nop

    // 0x8000C168: cvt.w.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000C16C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000C170: nop

    // 0x8000C174: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8000C178: beql        $t7, $zero, L_8000C1C8
    if (ctx->r15 == 0) {
        // 0x8000C17C: mfc1        $t7, $f18
        ctx->r15 = (int32_t)ctx->f18.u32l;
            goto L_8000C1C8;
    }
    goto skip_8;
    // 0x8000C17C: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    skip_8:
    // 0x8000C180: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000C184: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000C188: sub.s       $f18, $f6, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x8000C18C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000C190: nop

    // 0x8000C194: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8000C198: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000C19C: nop

    // 0x8000C1A0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8000C1A4: bne         $t7, $zero, L_8000C1BC
    if (ctx->r15 != 0) {
        // 0x8000C1A8: nop
    
            goto L_8000C1BC;
    }
    // 0x8000C1A8: nop

    // 0x8000C1AC: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8000C1B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000C1B4: b           L_8000C1D4
    // 0x8000C1B8: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8000C1D4;
    // 0x8000C1B8: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8000C1BC:
    // 0x8000C1BC: b           L_8000C1D4
    // 0x8000C1C0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8000C1D4;
    // 0x8000C1C0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8000C1C4: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
L_8000C1C8:
    // 0x8000C1C8: nop

    // 0x8000C1CC: bltz        $t7, L_8000C1BC
    if (SIGNED(ctx->r15) < 0) {
        // 0x8000C1D0: nop
    
            goto L_8000C1BC;
    }
    // 0x8000C1D0: nop

L_8000C1D4:
    // 0x8000C1D4: andi        $t5, $t7, 0xFFFF
    ctx->r13 = ctx->r15 & 0XFFFF;
    // 0x8000C1D8: or          $t8, $t9, $t5
    ctx->r24 = ctx->r25 | ctx->r13;
    // 0x8000C1DC: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8000C1E0: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8000C1E4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000C1E8: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8000C1EC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000C1F0: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
    // 0x8000C1F4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000C1F8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_8000C1FC:
    // 0x8000C1FC: addiu       $fp, $fp, 0x30
    ctx->r30 = ADD32(ctx->r30, 0X30);
    // 0x8000C200: addiu       $at, $zero, 0x1680
    ctx->r1 = ADD32(0, 0X1680);
    // 0x8000C204: bne         $fp, $at, L_8000BCA0
    if (ctx->r30 != ctx->r1) {
        // 0x8000C208: addiu       $s7, $s7, 0x30
        ctx->r23 = ADD32(ctx->r23, 0X30);
            goto L_8000BCA0;
    }
    // 0x8000C208: addiu       $s7, $s7, 0x30
    ctx->r23 = ADD32(ctx->r23, 0X30);
    // 0x8000C20C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8000C210: jal         0x80040620
    // 0x8000C214: addiu       $a1, $zero, 0x1818
    ctx->r5 = ADD32(0, 0X1818);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_11;
    // 0x8000C214: addiu       $a1, $zero, 0x1818
    ctx->r5 = ADD32(0, 0X1818);
    after_11:
L_8000C218:
    // 0x8000C218: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x8000C21C: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x8000C220: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x8000C224: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x8000C228: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x8000C22C: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x8000C230: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x8000C234: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x8000C238: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x8000C23C: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x8000C240: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x8000C244: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x8000C248: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x8000C24C: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x8000C250: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x8000C254: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x8000C258: jr          $ra
    // 0x8000C25C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    TRACE_RETURN()
    return;
    // 0x8000C25C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_8000C560_D160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C560: jr          $ra
    // 0x8000C564: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8000C564: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80008920_9520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80008920: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x80008924: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80008928: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8000892C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80008930: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80008934: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80008938: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8000893C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80008940: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80008944: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80008948: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8000894C: lw          $t3, 0x34($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X34);
    // 0x80008950: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80008954: beql        $t3, $zero, L_800093DC
    if (ctx->r11 == 0) {
        // 0x80008958: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_800093DC;
    }
    goto skip_0;
    // 0x80008958: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x8000895C: lhu         $v1, 0x18($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X18);
    // 0x80008960: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80008964: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x80008968: andi        $t6, $v1, 0x400
    ctx->r14 = ctx->r3 & 0X400;
    // 0x8000896C: beq         $t6, $zero, L_800089FC
    if (ctx->r14 == 0) {
        // 0x80008970: addiu       $a0, $a0, -0x3340
        ctx->r4 = ADD32(ctx->r4, -0X3340);
            goto L_800089FC;
    }
    // 0x80008970: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x80008974: andi        $t7, $v1, 0xF0
    ctx->r15 = ctx->r3 & 0XF0;
    // 0x80008978: sra         $t8, $t7, 4
    ctx->r24 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8000897C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80008980: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80008984: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80008988: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8000898C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80008990: ori         $at, $at, 0xB668
    ctx->r1 = ctx->r1 | 0XB668;
    // 0x80008994: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80008998: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8000899C: addiu       $t7, $t7, -0x3340
    ctx->r15 = ADD32(ctx->r15, -0X3340);
    // 0x800089A0: addu        $t6, $t9, $at
    ctx->r14 = ADD32(ctx->r25, ctx->r1);
    // 0x800089A4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800089A8: lhu         $s6, 0x34($v0)
    ctx->r22 = MEM_HU(ctx->r2, 0X34);
    // 0x800089AC: lhu         $s7, 0x36($v0)
    ctx->r23 = MEM_HU(ctx->r2, 0X36);
    // 0x800089B0: sll         $t8, $s6, 2
    ctx->r24 = S32(ctx->r22 << 2);
    // 0x800089B4: sll         $t9, $s7, 2
    ctx->r25 = S32(ctx->r23 << 2);
    // 0x800089B8: addiu       $t6, $t8, 0x4
    ctx->r14 = ADD32(ctx->r24, 0X4);
    // 0x800089BC: addiu       $t7, $t9, 0x4
    ctx->r15 = ADD32(ctx->r25, 0X4);
    // 0x800089C0: or          $s6, $t8, $zero
    ctx->r22 = ctx->r24 | 0;
    // 0x800089C4: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
    // 0x800089C8: sw          $t7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r15;
    // 0x800089CC: lhu         $t8, 0x38($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X38);
    // 0x800089D0: or          $s7, $t9, $zero
    ctx->r23 = ctx->r25 | 0;
    // 0x800089D4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800089D8: sw          $t9, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r25;
    // 0x800089DC: lhu         $t6, 0x3A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X3A);
    // 0x800089E0: addiu       $t9, $t9, -0x4
    ctx->r25 = ADD32(ctx->r25, -0X4);
    // 0x800089E4: sw          $t9, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r25;
    // 0x800089E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800089EC: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    // 0x800089F0: addiu       $t7, $t7, -0x4
    ctx->r15 = ADD32(ctx->r15, -0X4);
    // 0x800089F4: b           L_80008A30
    // 0x800089F8: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
        goto L_80008A30;
    // 0x800089F8: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
L_800089FC:
    // 0x800089FC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80008A00: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80008A04: sw          $t8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r24;
    // 0x80008A08: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
    // 0x80008A0C: addiu       $t6, $zero, 0x4FC
    ctx->r14 = ADD32(0, 0X4FC);
    // 0x80008A10: addiu       $t7, $zero, 0x3BC
    ctx->r15 = ADD32(0, 0X3BC);
    // 0x80008A14: addiu       $t8, $zero, 0x4F8
    ctx->r24 = ADD32(0, 0X4F8);
    // 0x80008A18: addiu       $t9, $zero, 0x3B8
    ctx->r25 = ADD32(0, 0X3B8);
    // 0x80008A1C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80008A20: sw          $t6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r14;
    // 0x80008A24: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    // 0x80008A28: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
    // 0x80008A2C: sw          $t9, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r25;
L_80008A30:
    // 0x80008A30: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x80008A34: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80008A38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80008A3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80008A40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80008A44: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80008A48: ori         $at, $at, 0xB668
    ctx->r1 = ctx->r1 | 0XB668;
    // 0x80008A4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80008A50: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80008A54: addiu       $t9, $t9, -0x3340
    ctx->r25 = ADD32(ctx->r25, -0X3340);
    // 0x80008A58: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80008A5C: andi        $t6, $v1, 0x100
    ctx->r14 = ctx->r3 & 0X100;
    // 0x80008A60: beq         $t6, $zero, L_80008A7C
    if (ctx->r14 == 0) {
        // 0x80008A64: addu        $v0, $t8, $t9
        ctx->r2 = ADD32(ctx->r24, ctx->r25);
            goto L_80008A7C;
    }
    // 0x80008A64: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80008A68: lh          $t7, 0x1C($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X1C);
    // 0x80008A6C: lh          $t8, 0xC($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XC);
    // 0x80008A70: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x80008A74: b           L_80008A84
    // 0x80008A78: sw          $t9, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r25;
        goto L_80008A84;
    // 0x80008A78: sw          $t9, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r25;
L_80008A7C:
    // 0x80008A7C: lh          $t6, 0x1C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X1C);
    // 0x80008A80: sw          $t6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r14;
L_80008A84:
    // 0x80008A84: andi        $t7, $v1, 0x200
    ctx->r15 = ctx->r3 & 0X200;
    // 0x80008A88: beql        $t7, $zero, L_80008AA4
    if (ctx->r15 == 0) {
        // 0x80008A8C: lh          $fp, 0x20($s0)
        ctx->r30 = MEM_H(ctx->r16, 0X20);
            goto L_80008AA4;
    }
    goto skip_1;
    // 0x80008A8C: lh          $fp, 0x20($s0)
    ctx->r30 = MEM_H(ctx->r16, 0X20);
    skip_1:
    // 0x80008A90: lh          $t8, 0x20($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X20);
    // 0x80008A94: lh          $t9, 0x10($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X10);
    // 0x80008A98: b           L_80008AA4
    // 0x80008A9C: subu        $fp, $t8, $t9
    ctx->r30 = SUB32(ctx->r24, ctx->r25);
        goto L_80008AA4;
    // 0x80008A9C: subu        $fp, $t8, $t9
    ctx->r30 = SUB32(ctx->r24, ctx->r25);
    // 0x80008AA0: lh          $fp, 0x20($s0)
    ctx->r30 = MEM_H(ctx->r16, 0X20);
L_80008AA4:
    // 0x80008AA4: lw          $v0, 0x5D10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5D10);
    // 0x80008AA8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80008AAC: addiu       $s1, $zero, 0x400
    ctx->r17 = ADD32(0, 0X400);
    // 0x80008AB0: sll         $t6, $v0, 6
    ctx->r14 = S32(ctx->r2 << 6);
    // 0x80008AB4: srl         $t7, $t6, 31
    ctx->r15 = S32(U32(ctx->r14) >> 31);
    // 0x80008AB8: bne         $v1, $t7, L_80008BA0
    if (ctx->r3 != ctx->r15) {
        // 0x80008ABC: srl         $t8, $v0, 29
        ctx->r24 = S32(U32(ctx->r2) >> 29);
            goto L_80008BA0;
    }
    // 0x80008ABC: srl         $t8, $v0, 29
    ctx->r24 = S32(U32(ctx->r2) >> 29);
    // 0x80008AC0: bne         $t8, $zero, L_80008AE0
    if (ctx->r24 != 0) {
        // 0x80008AC4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80008AE0;
    }
    // 0x80008AC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80008AC8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80008ACC: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x80008AD0: addiu       $s1, $zero, 0x1000
    ctx->r17 = ADD32(0, 0X1000);
    // 0x80008AD4: sh          $t9, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r25;
    // 0x80008AD8: b           L_80008C00
    // 0x80008ADC: addiu       $s3, $s3, -0x3A34
    ctx->r19 = ADD32(ctx->r19, -0X3A34);
        goto L_80008C00;
    // 0x80008ADC: addiu       $s3, $s3, -0x3A34
    ctx->r19 = ADD32(ctx->r19, -0X3A34);
L_80008AE0:
    // 0x80008AE0: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80008AE4: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x80008AE8: sh          $zero, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = 0;
    // 0x80008AEC: sll         $t6, $a1, 5
    ctx->r14 = S32(ctx->r5 << 5);
    // 0x80008AF0: srl         $t7, $t6, 31
    ctx->r15 = S32(U32(ctx->r14) >> 31);
    // 0x80008AF4: srl         $t6, $t9, 31
    ctx->r14 = S32(U32(ctx->r25) >> 31);
    // 0x80008AF8: bne         $v1, $t6, L_80008B94
    if (ctx->r3 != ctx->r14) {
        // 0x80008AFC: andi        $a1, $t7, 0xFFFF
        ctx->r5 = ctx->r15 & 0XFFFF;
            goto L_80008B94;
    }
    // 0x80008AFC: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x80008B00: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x80008B04: addiu       $s3, $s3, -0x3A34
    ctx->r19 = ADD32(ctx->r19, -0X3A34);
    // 0x80008B08: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80008B0C: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x80008B10: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80008B14: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    // 0x80008B18: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80008B1C: lh          $t6, 0x5D06($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X5D06);
    // 0x80008B20: lbu         $t9, 0xD($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XD);
    // 0x80008B24: lh          $t8, 0x5D08($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X5D08);
    // 0x80008B28: multu       $t9, $t6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008B2C: mflo        $t7
    ctx->r15 = lo;
    // 0x80008B30: sra         $t9, $t7, 8
    ctx->r25 = S32(SIGNED(ctx->r15) >> 8);
    // 0x80008B34: lbu         $t7, 0xE($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XE);
    // 0x80008B38: sll         $t6, $t9, 24
    ctx->r14 = S32(ctx->r25 << 24);
    // 0x80008B3C: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008B40: mflo        $t9
    ctx->r25 = lo;
    // 0x80008B44: sra         $t7, $t9, 8
    ctx->r15 = S32(SIGNED(ctx->r25) >> 8);
    // 0x80008B48: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x80008B4C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80008B50: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x80008B54: lh          $t6, 0x5D0A($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X5D0A);
    // 0x80008B58: lbu         $t8, 0xF($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XF);
    // 0x80008B5C: multu       $t8, $t6
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008B60: mflo        $t9
    ctx->r25 = lo;
    // 0x80008B64: sra         $t8, $t9, 8
    ctx->r24 = S32(SIGNED(ctx->r25) >> 8);
    // 0x80008B68: andi        $t6, $t8, 0xFF
    ctx->r14 = ctx->r24 & 0XFF;
    // 0x80008B6C: sll         $t9, $t6, 8
    ctx->r25 = S32(ctx->r14 << 8);
    // 0x80008B70: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x80008B74: lh          $t7, 0x5D0C($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X5D0C);
    // 0x80008B78: lbu         $t6, 0x10($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X10);
    // 0x80008B7C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008B80: mflo        $t9
    ctx->r25 = lo;
    // 0x80008B84: sra         $t6, $t9, 8
    ctx->r14 = S32(SIGNED(ctx->r25) >> 8);
    // 0x80008B88: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80008B8C: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x80008B90: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_80008B94:
    // 0x80008B94: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x80008B98: b           L_80008C00
    // 0x80008B9C: addiu       $s3, $s3, -0x3A34
    ctx->r19 = ADD32(ctx->r19, -0X3A34);
        goto L_80008C00;
    // 0x80008B9C: addiu       $s3, $s3, -0x3A34
    ctx->r19 = ADD32(ctx->r19, -0X3A34);
L_80008BA0:
    // 0x80008BA0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80008BA4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80008BA8: lbu         $t7, 0x10($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X10);
    // 0x80008BAC: lbu         $a3, 0xF($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XF);
    // 0x80008BB0: lbu         $a2, 0xE($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XE);
    // 0x80008BB4: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80008BB8: sw          $t3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r11;
    // 0x80008BBC: jal         0x80009408
    // 0x80008BC0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80009408_A008(rdram, ctx);
        goto after_0;
    // 0x80008BC0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x80008BC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80008BC8: lw          $t3, 0xCC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XCC);
    // 0x80008BCC: bne         $v0, $at, L_80008BE8
    if (ctx->r2 != ctx->r1) {
        // 0x80008BD0: sh          $v0, 0xB4($sp)
        MEM_H(0XB4, ctx->r29) = ctx->r2;
            goto L_80008BE8;
    }
    // 0x80008BD0: sh          $v0, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r2;
    // 0x80008BD4: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x80008BD8: addiu       $s1, $zero, 0x1000
    ctx->r17 = ADD32(0, 0X1000);
    // 0x80008BDC: addiu       $s3, $s3, -0x3A34
    ctx->r19 = ADD32(ctx->r19, -0X3A34);
    // 0x80008BE0: b           L_80008C00
    // 0x80008BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_80008C00;
    // 0x80008BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80008BE8:
    // 0x80008BE8: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80008BEC: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x80008BF0: addiu       $s3, $s3, -0x3A34
    ctx->r19 = ADD32(ctx->r19, -0X3A34);
    // 0x80008BF4: sll         $t9, $a1, 5
    ctx->r25 = S32(ctx->r5 << 5);
    // 0x80008BF8: srl         $t6, $t9, 31
    ctx->r14 = S32(U32(ctx->r25) >> 31);
    // 0x80008BFC: andi        $a1, $t6, 0xFFFF
    ctx->r5 = ctx->r14 & 0XFFFF;
L_80008C00:
    // 0x80008C00: bne         $a1, $zero, L_80008C18
    if (ctx->r5 != 0) {
        // 0x80008C04: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_80008C18;
    }
    // 0x80008C04: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80008C08: or          $s4, $s1, $zero
    ctx->r20 = ctx->r17 | 0;
    // 0x80008C0C: addiu       $s5, $zero, 0x400
    ctx->r21 = ADD32(0, 0X400);
    // 0x80008C10: b           L_80008C78
    // 0x80008C14: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
        goto L_80008C78;
    // 0x80008C14: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
L_80008C18:
    // 0x80008C18: lwc1        $f0, 0x2C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x80008C1C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80008C20: ldc1        $f12, -0x5520($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, -0X5520);
    // 0x80008C24: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80008C28: c.le.d      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.d <= ctx->f12.d;
    // 0x80008C2C: nop

    // 0x80008C30: bc1tl       L_800093DC
    if (c1cs) {
        // 0x80008C34: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_800093DC;
    }
    goto skip_2;
    // 0x80008C34: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_2:
    // 0x80008C38: lwc1        $f2, 0x30($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X30);
    // 0x80008C3C: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x80008C40: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x80008C44: c.le.d      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.d <= ctx->f12.d;
    // 0x80008C48: nop

    // 0x80008C4C: bc1tl       L_800093DC
    if (c1cs) {
        // 0x80008C50: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_800093DC;
    }
    goto skip_3;
    // 0x80008C50: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_3:
    // 0x80008C54: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80008C58: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80008C5C: div.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80008C60: div.s       $f16, $f12, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f12.fl, ctx->f2.fl);
    // 0x80008C64: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80008C68: mfc1        $s4, $f10
    ctx->r20 = (int32_t)ctx->f10.u32l;
    // 0x80008C6C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80008C70: mfc1        $s5, $f18
    ctx->r21 = (int32_t)ctx->f18.u32l;
    // 0x80008C74: nop

L_80008C78:
    // 0x80008C78: sll         $t8, $v0, 21
    ctx->r24 = S32(ctx->r2 << 21);
    // 0x80008C7C: bgez        $t8, L_80008C8C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80008C80: sll         $t9, $v0, 22
        ctx->r25 = S32(ctx->r2 << 22);
            goto L_80008C8C;
    }
    // 0x80008C80: sll         $t9, $v0, 22
    ctx->r25 = S32(ctx->r2 << 22);
    // 0x80008C84: b           L_80008C90
    // 0x80008C88: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
        goto L_80008C90;
    // 0x80008C88: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_80008C8C:
    // 0x80008C8C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_80008C90:
    // 0x80008C90: bgez        $t9, L_80008CA0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80008C94: lui         $at, 0x4080
        ctx->r1 = S32(0X4080 << 16);
            goto L_80008CA0;
    }
    // 0x80008C94: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80008C98: b           L_80008CA4
    // 0x80008C9C: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
        goto L_80008CA4;
    // 0x80008C9C: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_80008CA0:
    // 0x80008CA0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80008CA4:
    // 0x80008CA4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80008CA8: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
L_80008CAC:
    // 0x80008CAC: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
    // 0x80008CB0: addiu       $at, $zero, 0x4000
    ctx->r1 = ADD32(0, 0X4000);
    // 0x80008CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80008CB8: andi        $t6, $t4, 0x4000
    ctx->r14 = ctx->r12 & 0X4000;
    // 0x80008CBC: bne         $t6, $at, L_80008D1C
    if (ctx->r14 != ctx->r1) {
        // 0x80008CC0: andi        $t7, $t4, 0x1FFF
        ctx->r15 = ctx->r12 & 0X1FFF;
            goto L_80008D1C;
    }
    // 0x80008CC0: andi        $t7, $t4, 0x1FFF
    ctx->r15 = ctx->r12 & 0X1FFF;
    // 0x80008CC4: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80008CC8: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x80008CCC: sw          $t3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r11;
    // 0x80008CD0: jal         0x80009548
    // 0x80008CD4: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    func_80009548_A148(rdram, ctx);
        goto after_1;
    // 0x80008CD4: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    after_1:
    // 0x80008CD8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80008CDC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80008CE0: lw          $t3, 0xCC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XCC);
    // 0x80008CE4: sll         $t6, $v0, 13
    ctx->r14 = S32(ctx->r2 << 13);
    // 0x80008CE8: srl         $t7, $t6, 28
    ctx->r15 = S32(U32(ctx->r14) >> 28);
    // 0x80008CEC: sllv        $t9, $t8, $t7
    ctx->r25 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x80008CF0: sll         $t6, $t9, 5
    ctx->r14 = S32(ctx->r25 << 5);
    // 0x80008CF4: sll         $t8, $v0, 17
    ctx->r24 = S32(ctx->r2 << 17);
    // 0x80008CF8: sw          $t6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r14;
    // 0x80008CFC: srl         $t7, $t8, 28
    ctx->r15 = S32(U32(ctx->r24) >> 28);
    // 0x80008D00: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80008D04: sllv        $t6, $t9, $t7
    ctx->r14 = S32(ctx->r25 << (ctx->r15 & 31));
    // 0x80008D08: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80008D0C: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x80008D10: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
    // 0x80008D14: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80008D18: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
L_80008D1C:
    // 0x80008D1C: andi        $t9, $t4, 0x2000
    ctx->r25 = ctx->r12 & 0X2000;
    // 0x80008D20: beq         $t9, $zero, L_80008D38
    if (ctx->r25 == 0) {
        // 0x80008D24: andi        $t7, $t4, 0x8000
        ctx->r15 = ctx->r12 & 0X8000;
            goto L_80008D38;
    }
    // 0x80008D24: andi        $t7, $t4, 0x8000
    ctx->r15 = ctx->r12 & 0X8000;
    // 0x80008D28: beq         $t7, $zero, L_800093D0
    if (ctx->r15 == 0) {
        // 0x80008D2C: nop
    
            goto L_800093D0;
    }
    // 0x80008D2C: nop

    // 0x80008D30: b           L_800093DC
    // 0x80008D34: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_800093DC;
    // 0x80008D34: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80008D38:
    // 0x80008D38: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80008D3C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80008D40: lhu         $v1, 0x7A74($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X7A74);
    // 0x80008D44: sll         $a2, $v0, 21
    ctx->r6 = S32(ctx->r2 << 21);
    // 0x80008D48: sll         $a3, $v0, 22
    ctx->r7 = S32(ctx->r2 << 22);
    // 0x80008D4C: srl         $t8, $a3, 31
    ctx->r24 = S32(U32(ctx->r7) >> 31);
    // 0x80008D50: srl         $t6, $a2, 31
    ctx->r14 = S32(U32(ctx->r6) >> 31);
    // 0x80008D54: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80008D58: beq         $t6, $zero, L_80008D8C
    if (ctx->r14 == 0) {
        // 0x80008D5C: or          $a3, $t8, $zero
        ctx->r7 = ctx->r24 | 0;
            goto L_80008D8C;
    }
    // 0x80008D5C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80008D60: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    // 0x80008D64: lbu         $a0, 0x2($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X2);
    // 0x80008D68: lhu         $t9, 0x8($t3)
    ctx->r25 = MEM_HU(ctx->r11, 0X8);
    // 0x80008D6C: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x80008D70: subu        $t7, $t9, $v0
    ctx->r15 = SUB32(ctx->r25, ctx->r2);
    // 0x80008D74: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x80008D78: multu       $t8, $s2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008D7C: mflo        $t9
    ctx->r25 = lo;
    // 0x80008D80: addu        $t7, $t9, $v0
    ctx->r15 = ADD32(ctx->r25, ctx->r2);
    // 0x80008D84: b           L_80008D98
    // 0x80008D88: subu        $ra, $t7, $v1
    ctx->r31 = SUB32(ctx->r15, ctx->r3);
        goto L_80008D98;
    // 0x80008D88: subu        $ra, $t7, $v1
    ctx->r31 = SUB32(ctx->r15, ctx->r3);
L_80008D8C:
    // 0x80008D8C: lhu         $t6, 0x8($t3)
    ctx->r14 = MEM_HU(ctx->r11, 0X8);
    // 0x80008D90: lbu         $a0, 0x2($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X2);
    // 0x80008D94: subu        $ra, $t6, $v1
    ctx->r31 = SUB32(ctx->r14, ctx->r3);
L_80008D98:
    // 0x80008D98: beq         $a3, $zero, L_80008DC8
    if (ctx->r7 == 0) {
        // 0x80008D9C: lw          $v0, 0x9C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X9C);
            goto L_80008DC8;
    }
    // 0x80008D9C: lw          $v0, 0x9C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X9C);
    // 0x80008DA0: lbu         $a1, 0x3($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0X3);
    // 0x80008DA4: lhu         $t8, 0xA($t3)
    ctx->r24 = MEM_HU(ctx->r11, 0XA);
    // 0x80008DA8: sll         $t7, $a1, 5
    ctx->r15 = S32(ctx->r5 << 5);
    // 0x80008DAC: subu        $t9, $t8, $v0
    ctx->r25 = SUB32(ctx->r24, ctx->r2);
    // 0x80008DB0: addu        $t6, $t9, $t7
    ctx->r14 = ADD32(ctx->r25, ctx->r15);
    // 0x80008DB4: multu       $t6, $s1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008DB8: mflo        $t8
    ctx->r24 = lo;
    // 0x80008DBC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80008DC0: b           L_80008DD4
    // 0x80008DC4: subu        $t5, $t9, $v1
    ctx->r13 = SUB32(ctx->r25, ctx->r3);
        goto L_80008DD4;
    // 0x80008DC4: subu        $t5, $t9, $v1
    ctx->r13 = SUB32(ctx->r25, ctx->r3);
L_80008DC8:
    // 0x80008DC8: lhu         $t7, 0xA($t3)
    ctx->r15 = MEM_HU(ctx->r11, 0XA);
    // 0x80008DCC: lbu         $a1, 0x3($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0X3);
    // 0x80008DD0: subu        $t5, $t7, $v1
    ctx->r13 = SUB32(ctx->r15, ctx->r3);
L_80008DD4:
    // 0x80008DD4: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80008DD8: bnel        $t6, $zero, L_80008F44
    if (ctx->r14 != 0) {
        // 0x80008DDC: lw          $t6, 0xBC($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XBC);
            goto L_80008F44;
    }
    goto skip_4;
    // 0x80008DDC: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    skip_4:
    // 0x80008DE0: beq         $a2, $zero, L_80008E24
    if (ctx->r6 == 0) {
        // 0x80008DE4: lhu         $v1, 0xB4($sp)
        ctx->r3 = MEM_HU(ctx->r29, 0XB4);
            goto L_80008E24;
    }
    // 0x80008DE4: lhu         $v1, 0xB4($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0XB4);
    // 0x80008DE8: lh          $v0, 0x4($t3)
    ctx->r2 = MEM_H(ctx->r11, 0X4);
    // 0x80008DEC: lw          $a2, 0xBC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XBC);
    // 0x80008DF0: addu        $t8, $v0, $a0
    ctx->r24 = ADD32(ctx->r2, ctx->r4);
    // 0x80008DF4: multu       $t8, $s2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008DF8: subu        $t6, $a2, $v1
    ctx->r14 = SUB32(ctx->r6, ctx->r3);
    // 0x80008DFC: mflo        $t9
    ctx->r25 = lo;
    // 0x80008E00: addu        $t0, $t9, $a2
    ctx->r8 = ADD32(ctx->r25, ctx->r6);
    // 0x80008E04: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x80008E08: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008E0C: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x80008E10: mflo        $t8
    ctx->r24 = lo;
    // 0x80008E14: addu        $t2, $t6, $t8
    ctx->r10 = ADD32(ctx->r14, ctx->r24);
    // 0x80008E18: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x80008E1C: b           L_80008E54
    // 0x80008E20: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
        goto L_80008E54;
    // 0x80008E20: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
L_80008E24:
    // 0x80008E24: lh          $t7, 0x4($t3)
    ctx->r15 = MEM_H(ctx->r11, 0X4);
    // 0x80008E28: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x80008E2C: multu       $t7, $s2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008E30: subu        $t7, $a0, $v1
    ctx->r15 = SUB32(ctx->r4, ctx->r3);
    // 0x80008E34: mflo        $t6
    ctx->r14 = lo;
    // 0x80008E38: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x80008E3C: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x80008E40: multu       $t7, $s2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008E44: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x80008E48: mflo        $t6
    ctx->r14 = lo;
    // 0x80008E4C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80008E50: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
L_80008E54:
    // 0x80008E54: beq         $a3, $zero, L_80008E94
    if (ctx->r7 == 0) {
        // 0x80008E58: slt         $at, $t0, $s6
        ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r22) ? 1 : 0;
            goto L_80008E94;
    }
    // 0x80008E58: slt         $at, $t0, $s6
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80008E5C: lh          $v0, 0x6($t3)
    ctx->r2 = MEM_H(ctx->r11, 0X6);
    // 0x80008E60: subu        $t8, $fp, $v1
    ctx->r24 = SUB32(ctx->r30, ctx->r3);
    // 0x80008E64: addu        $t9, $v0, $a1
    ctx->r25 = ADD32(ctx->r2, ctx->r5);
    // 0x80008E68: multu       $t9, $s1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008E6C: mflo        $t7
    ctx->r15 = lo;
    // 0x80008E70: addu        $a3, $t7, $fp
    ctx->r7 = ADD32(ctx->r15, ctx->r30);
    // 0x80008E74: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x80008E78: multu       $v0, $s1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008E7C: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x80008E80: mflo        $t9
    ctx->r25 = lo;
    // 0x80008E84: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x80008E88: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x80008E8C: b           L_80008EC0
    // 0x80008E90: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
        goto L_80008EC0;
    // 0x80008E90: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
L_80008E94:
    // 0x80008E94: lh          $t6, 0x6($t3)
    ctx->r14 = MEM_H(ctx->r11, 0X6);
    // 0x80008E98: subu        $t7, $a1, $v1
    ctx->r15 = SUB32(ctx->r5, ctx->r3);
    // 0x80008E9C: multu       $t6, $s1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008EA0: mflo        $t8
    ctx->r24 = lo;
    // 0x80008EA4: addu        $a3, $t8, $fp
    ctx->r7 = ADD32(ctx->r24, ctx->r30);
    // 0x80008EA8: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x80008EAC: multu       $t7, $s1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008EB0: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x80008EB4: mflo        $t6
    ctx->r14 = lo;
    // 0x80008EB8: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80008EBC: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
L_80008EC0:
    // 0x80008EC0: beq         $at, $zero, L_80008EFC
    if (ctx->r1 == 0) {
        // 0x80008EC4: lw          $t9, 0x90($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X90);
            goto L_80008EFC;
    }
    // 0x80008EC4: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x80008EC8: slt         $at, $t2, $t9
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80008ECC: beq         $at, $zero, L_80008EF0
    if (ctx->r1 == 0) {
        // 0x80008ED0: subu        $t8, $s6, $t0
        ctx->r24 = SUB32(ctx->r22, ctx->r8);
            goto L_80008EF0;
    }
    // 0x80008ED0: subu        $t8, $s6, $t0
    ctx->r24 = SUB32(ctx->r22, ctx->r8);
    // 0x80008ED4: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
    // 0x80008ED8: andi        $t6, $t7, 0x2000
    ctx->r14 = ctx->r15 & 0X2000;
    // 0x80008EDC: beql        $t6, $zero, L_800093C4
    if (ctx->r14 == 0) {
        // 0x80008EE0: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_800093C4;
    }
    goto skip_5;
    // 0x80008EE0: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    skip_5:
    // 0x80008EE4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x80008EE8: b           L_800093C0
    // 0x80008EEC: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
        goto L_800093C0;
    // 0x80008EEC: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
L_80008EF0:
    // 0x80008EF0: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80008EF4: addu        $ra, $ra, $t9
    ctx->r31 = ADD32(ctx->r31, ctx->r25);
    // 0x80008EF8: or          $t0, $s6, $zero
    ctx->r8 = ctx->r22 | 0;
L_80008EFC:
    // 0x80008EFC: slt         $at, $a3, $s7
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x80008F00: beq         $at, $zero, L_800092A8
    if (ctx->r1 == 0) {
        // 0x80008F04: lw          $t7, 0x8C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X8C);
            goto L_800092A8;
    }
    // 0x80008F04: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x80008F08: slt         $at, $t1, $t7
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80008F0C: beq         $at, $zero, L_80008F30
    if (ctx->r1 == 0) {
        // 0x80008F10: subu        $t9, $s7, $a3
        ctx->r25 = SUB32(ctx->r23, ctx->r7);
            goto L_80008F30;
    }
    // 0x80008F10: subu        $t9, $s7, $a3
    ctx->r25 = SUB32(ctx->r23, ctx->r7);
    // 0x80008F14: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x80008F18: andi        $t8, $t6, 0x4000
    ctx->r24 = ctx->r14 & 0X4000;
    // 0x80008F1C: beql        $t8, $zero, L_800093C4
    if (ctx->r24 == 0) {
        // 0x80008F20: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_800093C4;
    }
    goto skip_6;
    // 0x80008F20: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    skip_6:
    // 0x80008F24: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x80008F28: b           L_800093C0
    // 0x80008F2C: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
        goto L_800093C0;
    // 0x80008F2C: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
L_80008F30:
    // 0x80008F30: sll         $t7, $t9, 3
    ctx->r15 = S32(ctx->r25 << 3);
    // 0x80008F34: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x80008F38: b           L_800092A8
    // 0x80008F3C: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
        goto L_800092A8;
    // 0x80008F3C: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x80008F40: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
L_80008F44:
    // 0x80008F44: mtc1        $fp, $f6
    ctx->f6.u32l = ctx->r30;
    // 0x80008F48: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80008F4C: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80008F50: beq         $a2, $zero, L_80009008
    if (ctx->r6 == 0) {
        // 0x80008F54: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80009008;
    }
    // 0x80008F54: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80008F58: lh          $v0, 0x4($t3)
    ctx->r2 = MEM_H(ctx->r11, 0X4);
    // 0x80008F5C: multu       $s2, $v0
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008F60: mflo        $t8
    ctx->r24 = lo;
    // 0x80008F64: sll         $t9, $t8, 10
    ctx->r25 = S32(ctx->r24 << 10);
    // 0x80008F68: addu        $t8, $v0, $a0
    ctx->r24 = ADD32(ctx->r2, ctx->r4);
    // 0x80008F6C: div         $zero, $t9, $s4
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r20)));
    // 0x80008F70: mflo        $t7
    ctx->r15 = lo;
    // 0x80008F74: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80008F78: bne         $s4, $zero, L_80008F84
    if (ctx->r20 != 0) {
        // 0x80008F7C: nop
    
            goto L_80008F84;
    }
    // 0x80008F7C: nop

    // 0x80008F80: break       7
    do_break(2147520384);
L_80008F84:
    // 0x80008F84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80008F88: bne         $s4, $at, L_80008F9C
    if (ctx->r20 != ctx->r1) {
        // 0x80008F8C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80008F9C;
    }
    // 0x80008F8C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80008F90: bne         $t9, $at, L_80008F9C
    if (ctx->r25 != ctx->r1) {
        // 0x80008F94: nop
    
            goto L_80008F9C;
    }
    // 0x80008F94: nop

    // 0x80008F98: break       6
    do_break(2147520408);
L_80008F9C:
    // 0x80008F9C: multu       $s2, $t8
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80008FA0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80008FA4: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x80008FA8: mflo        $t9
    ctx->r25 = lo;
    // 0x80008FAC: sll         $t7, $t9, 10
    ctx->r15 = S32(ctx->r25 << 10);
    // 0x80008FB0: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80008FB4: div         $zero, $t7, $s4
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r20)));
    // 0x80008FB8: mflo        $t6
    ctx->r14 = lo;
    // 0x80008FBC: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80008FC0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80008FC4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80008FC8: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x80008FCC: bne         $s4, $zero, L_80008FD8
    if (ctx->r20 != 0) {
        // 0x80008FD0: nop
    
            goto L_80008FD8;
    }
    // 0x80008FD0: nop

    // 0x80008FD4: break       7
    do_break(2147520468);
L_80008FD8:
    // 0x80008FD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80008FDC: bne         $s4, $at, L_80008FF0
    if (ctx->r20 != ctx->r1) {
        // 0x80008FE0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80008FF0;
    }
    // 0x80008FE0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80008FE4: bne         $t7, $at, L_80008FF0
    if (ctx->r15 != ctx->r1) {
        // 0x80008FE8: nop
    
            goto L_80008FF0;
    }
    // 0x80008FE8: nop

    // 0x80008FEC: break       6
    do_break(2147520492);
L_80008FF0:
    // 0x80008FF0: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x80008FF4: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80008FF8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80008FFC: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x80009000: b           L_800090B4
    // 0x80009004: nop

        goto L_800090B4;
    // 0x80009004: nop

L_80009008:
    // 0x80009008: lh          $v0, 0x4($t3)
    ctx->r2 = MEM_H(ctx->r11, 0X4);
    // 0x8000900C: multu       $s2, $v0
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80009010: mflo        $t9
    ctx->r25 = lo;
    // 0x80009014: sll         $t7, $t9, 10
    ctx->r15 = S32(ctx->r25 << 10);
    // 0x80009018: addu        $t9, $v0, $a0
    ctx->r25 = ADD32(ctx->r2, ctx->r4);
    // 0x8000901C: div         $zero, $t7, $s4
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r20)));
    // 0x80009020: mflo        $t6
    ctx->r14 = lo;
    // 0x80009024: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80009028: bne         $s4, $zero, L_80009034
    if (ctx->r20 != 0) {
        // 0x8000902C: nop
    
            goto L_80009034;
    }
    // 0x8000902C: nop

    // 0x80009030: break       7
    do_break(2147520560);
L_80009034:
    // 0x80009034: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80009038: bne         $s4, $at, L_8000904C
    if (ctx->r20 != ctx->r1) {
        // 0x8000903C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8000904C;
    }
    // 0x8000903C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80009040: bne         $t7, $at, L_8000904C
    if (ctx->r15 != ctx->r1) {
        // 0x80009044: nop
    
            goto L_8000904C;
    }
    // 0x80009044: nop

    // 0x80009048: break       6
    do_break(2147520584);
L_8000904C:
    // 0x8000904C: multu       $s2, $t9
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80009050: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80009054: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x80009058: mflo        $t7
    ctx->r15 = lo;
    // 0x8000905C: sll         $t6, $t7, 10
    ctx->r14 = S32(ctx->r15 << 10);
    // 0x80009060: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80009064: div         $zero, $t6, $s4
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r20)));
    // 0x80009068: mflo        $t8
    ctx->r24 = lo;
    // 0x8000906C: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80009070: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80009074: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80009078: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x8000907C: bne         $s4, $zero, L_80009088
    if (ctx->r20 != 0) {
        // 0x80009080: nop
    
            goto L_80009088;
    }
    // 0x80009080: nop

    // 0x80009084: break       7
    do_break(2147520644);
L_80009088:
    // 0x80009088: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000908C: bne         $s4, $at, L_800090A0
    if (ctx->r20 != ctx->r1) {
        // 0x80009090: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800090A0;
    }
    // 0x80009090: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80009094: bne         $t6, $at, L_800090A0
    if (ctx->r14 != ctx->r1) {
        // 0x80009098: nop
    
            goto L_800090A0;
    }
    // 0x80009098: nop

    // 0x8000909C: break       6
    do_break(2147520668);
L_800090A0:
    // 0x800090A0: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x800090A4: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x800090A8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800090AC: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x800090B0: nop

L_800090B4:
    // 0x800090B4: beql        $a3, $zero, L_80009170
    if (ctx->r7 == 0) {
        // 0x800090B8: lh          $v0, 0x6($t3)
        ctx->r2 = MEM_H(ctx->r11, 0X6);
            goto L_80009170;
    }
    goto skip_7;
    // 0x800090B8: lh          $v0, 0x6($t3)
    ctx->r2 = MEM_H(ctx->r11, 0X6);
    skip_7:
    // 0x800090BC: lh          $v0, 0x6($t3)
    ctx->r2 = MEM_H(ctx->r11, 0X6);
    // 0x800090C0: multu       $s1, $v0
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800090C4: mflo        $t7
    ctx->r15 = lo;
    // 0x800090C8: sll         $t6, $t7, 10
    ctx->r14 = S32(ctx->r15 << 10);
    // 0x800090CC: addu        $t7, $v0, $a1
    ctx->r15 = ADD32(ctx->r2, ctx->r5);
    // 0x800090D0: div         $zero, $t6, $s5
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r21)));
    // 0x800090D4: mflo        $t8
    ctx->r24 = lo;
    // 0x800090D8: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800090DC: bne         $s5, $zero, L_800090E8
    if (ctx->r21 != 0) {
        // 0x800090E0: nop
    
            goto L_800090E8;
    }
    // 0x800090E0: nop

    // 0x800090E4: break       7
    do_break(2147520740);
L_800090E8:
    // 0x800090E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800090EC: bne         $s5, $at, L_80009100
    if (ctx->r21 != ctx->r1) {
        // 0x800090F0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80009100;
    }
    // 0x800090F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800090F4: bne         $t6, $at, L_80009100
    if (ctx->r14 != ctx->r1) {
        // 0x800090F8: nop
    
            goto L_80009100;
    }
    // 0x800090F8: nop

    // 0x800090FC: break       6
    do_break(2147520764);
L_80009100:
    // 0x80009100: multu       $s1, $t7
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80009104: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80009108: add.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x8000910C: mflo        $t6
    ctx->r14 = lo;
    // 0x80009110: sll         $t8, $t6, 10
    ctx->r24 = S32(ctx->r14 << 10);
    // 0x80009114: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80009118: div         $zero, $t8, $s5
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r21)));
    // 0x8000911C: mflo        $t9
    ctx->r25 = lo;
    // 0x80009120: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80009124: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80009128: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000912C: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x80009130: bne         $s5, $zero, L_8000913C
    if (ctx->r21 != 0) {
        // 0x80009134: nop
    
            goto L_8000913C;
    }
    // 0x80009134: nop

    // 0x80009138: break       7
    do_break(2147520824);
L_8000913C:
    // 0x8000913C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80009140: bne         $s5, $at, L_80009154
    if (ctx->r21 != ctx->r1) {
        // 0x80009144: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80009154;
    }
    // 0x80009144: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80009148: bne         $t8, $at, L_80009154
    if (ctx->r24 != ctx->r1) {
        // 0x8000914C: nop
    
            goto L_80009154;
    }
    // 0x8000914C: nop

    // 0x80009150: break       6
    do_break(2147520848);
L_80009154:
    // 0x80009154: add.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x80009158: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x8000915C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80009160: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80009164: b           L_8000921C
    // 0x80009168: slt         $at, $t0, $s6
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r22) ? 1 : 0;
        goto L_8000921C;
    // 0x80009168: slt         $at, $t0, $s6
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x8000916C: lh          $v0, 0x6($t3)
    ctx->r2 = MEM_H(ctx->r11, 0X6);
L_80009170:
    // 0x80009170: multu       $s1, $v0
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80009174: mflo        $t6
    ctx->r14 = lo;
    // 0x80009178: sll         $t8, $t6, 10
    ctx->r24 = S32(ctx->r14 << 10);
    // 0x8000917C: addu        $t6, $v0, $a1
    ctx->r14 = ADD32(ctx->r2, ctx->r5);
    // 0x80009180: div         $zero, $t8, $s5
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r21)));
    // 0x80009184: mflo        $t9
    ctx->r25 = lo;
    // 0x80009188: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8000918C: bne         $s5, $zero, L_80009198
    if (ctx->r21 != 0) {
        // 0x80009190: nop
    
            goto L_80009198;
    }
    // 0x80009190: nop

    // 0x80009194: break       7
    do_break(2147520916);
L_80009198:
    // 0x80009198: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000919C: bne         $s5, $at, L_800091B0
    if (ctx->r21 != ctx->r1) {
        // 0x800091A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800091B0;
    }
    // 0x800091A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800091A4: bne         $t8, $at, L_800091B0
    if (ctx->r24 != ctx->r1) {
        // 0x800091A8: nop
    
            goto L_800091B0;
    }
    // 0x800091A8: nop

    // 0x800091AC: break       6
    do_break(2147520940);
L_800091B0:
    // 0x800091B0: multu       $s1, $t6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800091B4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800091B8: add.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x800091BC: mflo        $t8
    ctx->r24 = lo;
    // 0x800091C0: sll         $t9, $t8, 10
    ctx->r25 = S32(ctx->r24 << 10);
    // 0x800091C4: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x800091C8: div         $zero, $t9, $s5
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r21)));
    // 0x800091CC: mflo        $t7
    ctx->r15 = lo;
    // 0x800091D0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800091D4: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800091D8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800091DC: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x800091E0: bne         $s5, $zero, L_800091EC
    if (ctx->r21 != 0) {
        // 0x800091E4: nop
    
            goto L_800091EC;
    }
    // 0x800091E4: nop

    // 0x800091E8: break       7
    do_break(2147521000);
L_800091EC:
    // 0x800091EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800091F0: bne         $s5, $at, L_80009204
    if (ctx->r21 != ctx->r1) {
        // 0x800091F4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80009204;
    }
    // 0x800091F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800091F8: bne         $t9, $at, L_80009204
    if (ctx->r25 != ctx->r1) {
        // 0x800091FC: nop
    
            goto L_80009204;
    }
    // 0x800091FC: nop

    // 0x80009200: break       6
    do_break(2147521024);
L_80009204:
    // 0x80009204: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x80009208: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8000920C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80009210: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80009214: nop

    // 0x80009218: slt         $at, $t0, $s6
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r22) ? 1 : 0;
L_8000921C:
    // 0x8000921C: beq         $at, $zero, L_80009260
    if (ctx->r1 == 0) {
        // 0x80009220: lw          $t8, 0x90($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X90);
            goto L_80009260;
    }
    // 0x80009220: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x80009224: slt         $at, $t2, $t8
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80009228: beq         $at, $zero, L_8000924C
    if (ctx->r1 == 0) {
        // 0x8000922C: subu        $t6, $s6, $t0
        ctx->r14 = SUB32(ctx->r22, ctx->r8);
            goto L_8000924C;
    }
    // 0x8000922C: subu        $t6, $s6, $t0
    ctx->r14 = SUB32(ctx->r22, ctx->r8);
    // 0x80009230: lhu         $t9, 0x18($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X18);
    // 0x80009234: andi        $t7, $t9, 0x2000
    ctx->r15 = ctx->r25 & 0X2000;
    // 0x80009238: beql        $t7, $zero, L_800093C4
    if (ctx->r15 == 0) {
        // 0x8000923C: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_800093C4;
    }
    goto skip_8;
    // 0x8000923C: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    skip_8:
    // 0x80009240: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x80009244: b           L_800093C0
    // 0x80009248: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
        goto L_800093C0;
    // 0x80009248: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
L_8000924C:
    // 0x8000924C: multu       $t6, $s4
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80009250: or          $t0, $s6, $zero
    ctx->r8 = ctx->r22 | 0;
    // 0x80009254: mflo        $t8
    ctx->r24 = lo;
    // 0x80009258: sra         $t9, $t8, 7
    ctx->r25 = S32(SIGNED(ctx->r24) >> 7);
    // 0x8000925C: addu        $ra, $ra, $t9
    ctx->r31 = ADD32(ctx->r31, ctx->r25);
L_80009260:
    // 0x80009260: slt         $at, $a3, $s7
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x80009264: beq         $at, $zero, L_800092A8
    if (ctx->r1 == 0) {
        // 0x80009268: lw          $t7, 0x8C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X8C);
            goto L_800092A8;
    }
    // 0x80009268: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x8000926C: slt         $at, $t1, $t7
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80009270: beq         $at, $zero, L_80009294
    if (ctx->r1 == 0) {
        // 0x80009274: subu        $t9, $s7, $a3
        ctx->r25 = SUB32(ctx->r23, ctx->r7);
            goto L_80009294;
    }
    // 0x80009274: subu        $t9, $s7, $a3
    ctx->r25 = SUB32(ctx->r23, ctx->r7);
    // 0x80009278: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x8000927C: andi        $t8, $t6, 0x4000
    ctx->r24 = ctx->r14 & 0X4000;
    // 0x80009280: beql        $t8, $zero, L_800093C4
    if (ctx->r24 == 0) {
        // 0x80009284: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_800093C4;
    }
    goto skip_9;
    // 0x80009284: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    skip_9:
    // 0x80009288: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8000928C: b           L_800093C0
    // 0x80009290: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
        goto L_800093C0;
    // 0x80009290: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
L_80009294:
    // 0x80009294: multu       $t9, $s5
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80009298: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x8000929C: mflo        $t7
    ctx->r15 = lo;
    // 0x800092A0: sra         $t6, $t7, 7
    ctx->r14 = S32(SIGNED(ctx->r15) >> 7);
    // 0x800092A4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
L_800092A8:
    // 0x800092A8: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x800092AC: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x800092B0: slt         $at, $t8, $t2
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800092B4: beq         $at, $zero, L_800092E8
    if (ctx->r1 == 0) {
        // 0x800092B8: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_800092E8;
    }
    // 0x800092B8: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x800092BC: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800092C0: beql        $at, $zero, L_800092E8
    if (ctx->r1 == 0) {
        // 0x800092C4: lw          $t2, 0x88($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X88);
            goto L_800092E8;
    }
    goto skip_10;
    // 0x800092C4: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    skip_10:
    // 0x800092C8: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
    // 0x800092CC: andi        $t6, $t7, 0x2000
    ctx->r14 = ctx->r15 & 0X2000;
    // 0x800092D0: beql        $t6, $zero, L_800093C4
    if (ctx->r14 == 0) {
        // 0x800092D4: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_800093C4;
    }
    goto skip_11;
    // 0x800092D4: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    skip_11:
    // 0x800092D8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x800092DC: b           L_800093C0
    // 0x800092E0: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
        goto L_800093C0;
    // 0x800092E0: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
    // 0x800092E4: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
L_800092E8:
    // 0x800092E8: slt         $at, $t8, $t1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800092EC: beq         $at, $zero, L_80009320
    if (ctx->r1 == 0) {
        // 0x800092F0: lw          $t9, 0x7C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X7C);
            goto L_80009320;
    }
    // 0x800092F0: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x800092F4: slt         $at, $t9, $a3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x800092F8: beql        $at, $zero, L_80009320
    if (ctx->r1 == 0) {
        // 0x800092FC: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80009320;
    }
    goto skip_12;
    // 0x800092FC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_12:
    // 0x80009300: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
    // 0x80009304: andi        $t6, $t7, 0x4000
    ctx->r14 = ctx->r15 & 0X4000;
    // 0x80009308: beql        $t6, $zero, L_800093C4
    if (ctx->r14 == 0) {
        // 0x8000930C: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_800093C4;
    }
    goto skip_13;
    // 0x8000930C: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    skip_13:
    // 0x80009310: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x80009314: b           L_800093C0
    // 0x80009318: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
        goto L_800093C0;
    // 0x80009318: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
    // 0x8000931C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80009320:
    // 0x80009320: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80009324: andi        $t9, $t2, 0xFFF
    ctx->r25 = ctx->r10 & 0XFFF;
    // 0x80009328: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x8000932C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80009330: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
    // 0x80009334: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80009338: or          $t6, $t7, $at
    ctx->r14 = ctx->r15 | ctx->r1;
    // 0x8000933C: andi        $t8, $t1, 0xFFF
    ctx->r24 = ctx->r9 & 0XFFF;
    // 0x80009340: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80009344: andi        $t7, $t0, 0xFFF
    ctx->r15 = ctx->r8 & 0XFFF;
    // 0x80009348: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x8000934C: andi        $t8, $a3, 0xFFF
    ctx->r24 = ctx->r7 & 0XFFF;
    // 0x80009350: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80009354: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80009358: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000935C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80009360: lui         $t6, 0xB400
    ctx->r14 = S32(0XB400 << 16);
    // 0x80009364: sll         $t9, $ra, 16
    ctx->r25 = S32(ctx->r31 << 16);
    // 0x80009368: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000936C: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    // 0x80009370: andi        $t7, $t5, 0xFFFF
    ctx->r15 = ctx->r13 & 0XFFFF;
    // 0x80009374: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80009378: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8000937C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80009380: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80009384: lui         $t9, 0xB300
    ctx->r25 = S32(0XB300 << 16);
    // 0x80009388: sll         $t6, $s4, 16
    ctx->r14 = S32(ctx->r20 << 16);
    // 0x8000938C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80009390: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
    // 0x80009394: andi        $t8, $s5, 0xFFFF
    ctx->r24 = ctx->r21 & 0XFFFF;
    // 0x80009398: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000939C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x800093A0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800093A4: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x800093A8: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x800093AC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800093B0: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    // 0x800093B4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800093B8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800093BC: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
L_800093C0:
    // 0x800093C0: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
L_800093C4:
    // 0x800093C4: slt         $at, $t4, $at
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x800093C8: beql        $at, $zero, L_800093DC
    if (ctx->r1 == 0) {
        // 0x800093CC: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_800093DC;
    }
    goto skip_14;
    // 0x800093CC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_14:
L_800093D0:
    // 0x800093D0: b           L_80008CAC
    // 0x800093D4: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
        goto L_80008CAC;
    // 0x800093D4: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x800093D8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_800093DC:
    // 0x800093DC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800093E0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800093E4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800093E8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800093EC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800093F0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800093F4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800093F8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x800093FC: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80009400: jr          $ra
    // 0x80009404: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    TRACE_RETURN()
    return;
    // 0x80009404: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_80034E98_35A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034E98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034E9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034EA0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80034EA4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80034EA8: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x80034EAC: andi        $t8, $a3, 0xFFFF
    ctx->r24 = ctx->r7 & 0XFFFF;
    // 0x80034EB0: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80034EB4: jal         0x80034CBC
    // 0x80034EB8: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    func_80034CBC_358BC(rdram, ctx);
        goto after_0;
    // 0x80034EB8: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x80034EBC: jal         0x80034D24
    // 0x80034EC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80034D24_35924(rdram, ctx);
        goto after_1;
    // 0x80034EC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80034EC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034EC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034ECC: jr          $ra
    // 0x80034ED0: nop

    TRACE_RETURN()
    return;
    // 0x80034ED0: nop

;}
RECOMP_FUNC void func_80014D70_15970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80014D70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80014D74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014D78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80014D7C: jal         0x80014C20
    // 0x80014D80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80014C20_15820(rdram, ctx);
        goto after_0;
    // 0x80014D80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80014D84: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80014D88: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80014D8C: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x80014D90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80014D94: sw          $t6, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r14;
    // 0x80014D98: sw          $t7, -0x7E90($at)
    MEM_W(-0X7E90, ctx->r1) = ctx->r15;
    // 0x80014D9C: lw          $t8, 0x18($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X18);
    // 0x80014DA0: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80014DA4: addiu       $v0, $v0, -0x7E80
    ctx->r2 = ADD32(ctx->r2, -0X7E80);
    // 0x80014DA8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80014DAC: lbu         $t0, 0x0($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X0);
    // 0x80014DB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80014DB4: jal         0x80015FDC
    // 0x80014DB8: sb          $t0, -0x7E7C($at)
    MEM_B(-0X7E7C, ctx->r1) = ctx->r8;
    func_80015FDC_16BDC(rdram, ctx);
        goto after_1;
    // 0x80014DB8: sb          $t0, -0x7E7C($at)
    MEM_B(-0X7E7C, ctx->r1) = ctx->r8;
    after_1:
    // 0x80014DBC: jal         0x800154B0
    // 0x80014DC0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800154B0_160B0(rdram, ctx);
        goto after_2;
    // 0x80014DC0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80014DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80014DC8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80014DCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80014DD0: jr          $ra
    // 0x80014DD4: nop

    TRACE_RETURN()
    return;
    // 0x80014DD4: nop

;}
RECOMP_FUNC void func_80012818_13418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80012818: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8001281C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80012820: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80012824: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80012828: swc1        $f0, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f0.u32l;
    // 0x8001282C: swc1        $f0, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f0.u32l;
    // 0x80012830: swc1        $f0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f0.u32l;
    // 0x80012834: swc1        $f12, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f12.u32l;
    // 0x80012838: swc1        $f14, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f14.u32l;
    // 0x8001283C: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80012840: jr          $ra
    // 0x80012844: swc1        $f4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80012844: swc1        $f4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80032320_32F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032320: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80032324: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80032328: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x8003232C: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x80032330: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x80032334: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x80032338: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8003233C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80032340: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80032344: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80032348: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x8003234C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80032350: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x80032354: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x80032358: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8003235C: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80032360: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80032364: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x80032368: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003236C: lbu         $t7, -0x521C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X521C);
    // 0x80032370: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80032374: andi        $s3, $a1, 0xFF
    ctx->r19 = ctx->r5 & 0XFF;
    // 0x80032378: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x8003237C: beq         $at, $zero, L_80032638
    if (ctx->r1 == 0) {
        // 0x80032380: lui         $t8, 0x8016
        ctx->r24 = S32(0X8016 << 16);
            goto L_80032638;
    }
    // 0x80032380: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80032384: lw          $t8, -0x3340($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3340);
    // 0x80032388: addiu       $s1, $sp, 0x54
    ctx->r17 = ADD32(ctx->r29, 0X54);
    // 0x8003238C: or          $t2, $s1, $zero
    ctx->r10 = ctx->r17 | 0;
    // 0x80032390: beq         $t8, $zero, L_80032638
    if (ctx->r24 == 0) {
        // 0x80032394: or          $t1, $a0, $zero
        ctx->r9 = ctx->r4 | 0;
            goto L_80032638;
    }
    // 0x80032394: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x80032398: addiu       $t0, $a0, 0x48
    ctx->r8 = ADD32(ctx->r4, 0X48);
L_8003239C:
    // 0x8003239C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x800323A0: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x800323A4: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x800323A8: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x800323AC: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x800323B0: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x800323B4: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x800323B8: bne         $t1, $t0, L_8003239C
    if (ctx->r9 != ctx->r8) {
        // 0x800323BC: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_8003239C;
    }
    // 0x800323BC: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x800323C0: bne         $s3, $zero, L_800323D4
    if (ctx->r19 != 0) {
        // 0x800323C4: lui         $s0, 0x8016
        ctx->r16 = S32(0X8016 << 16);
            goto L_800323D4;
    }
    // 0x800323C4: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x800323C8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800323CC: b           L_800323E0
    // 0x800323D0: nop

        goto L_800323E0;
    // 0x800323D0: nop

L_800323D4:
    // 0x800323D4: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x800323D8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800323DC: nop

L_800323E0:
    // 0x800323E0: lw          $s0, -0x3340($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3340);
    // 0x800323E4: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x800323E8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x800323EC: beq         $s0, $zero, L_80032504
    if (ctx->r16 == 0) {
        // 0x800323F0: nop
    
            goto L_80032504;
    }
    // 0x800323F0: nop

    // 0x800323F4: lhu         $t3, 0x20($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X20);
    // 0x800323F8: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x800323FC: addiu       $s7, $zero, 0x7FFF
    ctx->r23 = ADD32(0, 0X7FFF);
    // 0x80032400: slt         $at, $v0, $t3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80032404: beq         $at, $zero, L_80032504
    if (ctx->r1 == 0) {
        // 0x80032408: addiu       $s6, $zero, 0x2
        ctx->r22 = ADD32(0, 0X2);
            goto L_80032504;
    }
    // 0x80032408: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x8003240C: lui         $s5, 0x8000
    ctx->r21 = S32(0X8000 << 16);
    // 0x80032410: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
L_80032414:
    // 0x80032414: beql        $v0, $zero, L_800324EC
    if (ctx->r2 == 0) {
        // 0x80032418: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_800324EC;
    }
    goto skip_0;
    // 0x80032418: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x8003241C: lw          $t4, 0x60($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X60);
    // 0x80032420: and         $t5, $t4, $s5
    ctx->r13 = ctx->r12 & ctx->r21;
    // 0x80032424: beql        $t5, $zero, L_800324EC
    if (ctx->r13 == 0) {
        // 0x80032428: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_800324EC;
    }
    goto skip_1;
    // 0x80032428: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x8003242C: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    // 0x80032430: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80032434: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80032438: bnel        $s6, $t6, L_800324EC
    if (ctx->r22 != ctx->r14) {
        // 0x8003243C: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_800324EC;
    }
    goto skip_2;
    // 0x8003243C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x80032440: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80032444: jal         0x800273E0
    // 0x80032448: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    func_800273E0_27FE0(rdram, ctx);
        goto after_0;
    // 0x80032448: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    after_0:
    // 0x8003244C: lh          $t7, 0x8C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X8C);
    // 0x80032450: bnel        $s7, $t7, L_800324EC
    if (ctx->r23 != ctx->r15) {
        // 0x80032454: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_800324EC;
    }
    goto skip_3;
    // 0x80032454: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_3:
    // 0x80032458: bnel        $s3, $zero, L_800324AC
    if (ctx->r19 != 0) {
        // 0x8003245C: c.lt.s      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
            goto L_800324AC;
    }
    goto skip_4;
    // 0x8003245C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    skip_4:
    // 0x80032460: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x80032464: or          $t0, $s1, $zero
    ctx->r8 = ctx->r17 | 0;
    // 0x80032468: or          $t1, $s2, $zero
    ctx->r9 = ctx->r18 | 0;
    // 0x8003246C: addiu       $t9, $s1, 0x48
    ctx->r25 = ADD32(ctx->r17, 0X48);
    // 0x80032470: bc1fl       L_800324EC
    if (!c1cs) {
        // 0x80032474: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_800324EC;
    }
    goto skip_5;
    // 0x80032474: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_5:
    // 0x80032478: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8003247C:
    // 0x8003247C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80032480: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x80032484: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80032488: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x8003248C: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x80032490: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x80032494: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x80032498: bne         $t0, $t9, L_8003247C
    if (ctx->r8 != ctx->r25) {
        // 0x8003249C: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_8003247C;
    }
    // 0x8003249C: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x800324A0: b           L_800324EC
    // 0x800324A4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_800324EC;
    // 0x800324A4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x800324A8: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
L_800324AC:
    // 0x800324AC: or          $t4, $s1, $zero
    ctx->r12 = ctx->r17 | 0;
    // 0x800324B0: or          $t5, $s2, $zero
    ctx->r13 = ctx->r18 | 0;
    // 0x800324B4: addiu       $t3, $s1, 0x48
    ctx->r11 = ADD32(ctx->r17, 0X48);
    // 0x800324B8: bc1fl       L_800324EC
    if (!c1cs) {
        // 0x800324BC: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_800324EC;
    }
    goto skip_6;
    // 0x800324BC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_6:
    // 0x800324C0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_800324C4:
    // 0x800324C4: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x800324C8: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x800324CC: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x800324D0: sw          $at, -0xC($t5)
    MEM_W(-0XC, ctx->r13) = ctx->r1;
    // 0x800324D4: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x800324D8: sw          $at, -0x8($t5)
    MEM_W(-0X8, ctx->r13) = ctx->r1;
    // 0x800324DC: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x800324E0: bne         $t4, $t3, L_800324C4
    if (ctx->r12 != ctx->r11) {
        // 0x800324E4: sw          $at, -0x4($t5)
        MEM_W(-0X4, ctx->r13) = ctx->r1;
            goto L_800324C4;
    }
    // 0x800324E4: sw          $at, -0x4($t5)
    MEM_W(-0X4, ctx->r13) = ctx->r1;
    // 0x800324E8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_800324EC:
    // 0x800324EC: beq         $s0, $zero, L_80032504
    if (ctx->r16 == 0) {
        // 0x800324F0: nop
    
            goto L_80032504;
    }
    // 0x800324F0: nop

    // 0x800324F4: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
    // 0x800324F8: slt         $at, $s4, $t6
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800324FC: bnel        $at, $zero, L_80032414
    if (ctx->r1 != 0) {
        // 0x80032500: lw          $v0, 0x18($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X18);
            goto L_80032414;
    }
    goto skip_7;
    // 0x80032500: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    skip_7:
L_80032504:
    // 0x80032504: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80032508: lw          $v1, -0x3328($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3328);
    // 0x8003250C: lui         $s5, 0x8000
    ctx->r21 = S32(0X8000 << 16);
    // 0x80032510: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x80032514: beq         $v1, $zero, L_80032638
    if (ctx->r3 == 0) {
        // 0x80032518: addiu       $s7, $zero, 0x7FFF
        ctx->r23 = ADD32(0, 0X7FFF);
            goto L_80032638;
    }
    // 0x80032518: addiu       $s7, $zero, 0x7FFF
    ctx->r23 = ADD32(0, 0X7FFF);
    // 0x8003251C: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
    // 0x80032520: lhu         $v0, 0x20($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X20);
    // 0x80032524: beql        $s0, $zero, L_80032638
    if (ctx->r16 == 0) {
        // 0x80032528: swc1        $f20, 0x3C($s2)
        MEM_W(0X3C, ctx->r18) = ctx->f20.u32l;
            goto L_80032638;
    }
    goto skip_8;
    // 0x80032528: swc1        $f20, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->f20.u32l;
    skip_8:
    // 0x8003252C: lhu         $t7, 0x20($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X20);
    // 0x80032530: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80032534: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80032538: beql        $at, $zero, L_80032638
    if (ctx->r1 == 0) {
        // 0x8003253C: swc1        $f20, 0x3C($s2)
        MEM_W(0X3C, ctx->r18) = ctx->f20.u32l;
            goto L_80032638;
    }
    goto skip_9;
    // 0x8003253C: swc1        $f20, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->f20.u32l;
    skip_9:
    // 0x80032540: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
L_80032544:
    // 0x80032544: beql        $v0, $zero, L_8003261C
    if (ctx->r2 == 0) {
        // 0x80032548: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8003261C;
    }
    goto skip_10;
    // 0x80032548: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_10:
    // 0x8003254C: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x80032550: and         $t9, $t8, $s5
    ctx->r25 = ctx->r24 & ctx->r21;
    // 0x80032554: beql        $t9, $zero, L_8003261C
    if (ctx->r25 == 0) {
        // 0x80032558: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8003261C;
    }
    goto skip_11;
    // 0x80032558: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_11:
    // 0x8003255C: lbu         $t0, 0x4($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X4);
    // 0x80032560: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80032564: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80032568: bnel        $s6, $t0, L_8003261C
    if (ctx->r22 != ctx->r8) {
        // 0x8003256C: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8003261C;
    }
    goto skip_12;
    // 0x8003256C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_12:
    // 0x80032570: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80032574: jal         0x800273E0
    // 0x80032578: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    func_800273E0_27FE0(rdram, ctx);
        goto after_1;
    // 0x80032578: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    after_1:
    // 0x8003257C: lh          $t1, 0x8C($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X8C);
    // 0x80032580: bnel        $s7, $t1, L_8003261C
    if (ctx->r23 != ctx->r9) {
        // 0x80032584: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8003261C;
    }
    goto skip_13;
    // 0x80032584: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_13:
    // 0x80032588: bnel        $s3, $zero, L_800325DC
    if (ctx->r19 != 0) {
        // 0x8003258C: c.lt.s      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
            goto L_800325DC;
    }
    goto skip_14;
    // 0x8003258C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    skip_14:
    // 0x80032590: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x80032594: or          $t4, $s1, $zero
    ctx->r12 = ctx->r17 | 0;
    // 0x80032598: or          $t5, $s2, $zero
    ctx->r13 = ctx->r18 | 0;
    // 0x8003259C: addiu       $t3, $s1, 0x48
    ctx->r11 = ADD32(ctx->r17, 0X48);
    // 0x800325A0: bc1fl       L_8003261C
    if (!c1cs) {
        // 0x800325A4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8003261C;
    }
    goto skip_15;
    // 0x800325A4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_15:
    // 0x800325A8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_800325AC:
    // 0x800325AC: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x800325B0: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x800325B4: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x800325B8: sw          $at, -0xC($t5)
    MEM_W(-0XC, ctx->r13) = ctx->r1;
    // 0x800325BC: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x800325C0: sw          $at, -0x8($t5)
    MEM_W(-0X8, ctx->r13) = ctx->r1;
    // 0x800325C4: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x800325C8: bne         $t4, $t3, L_800325AC
    if (ctx->r12 != ctx->r11) {
        // 0x800325CC: sw          $at, -0x4($t5)
        MEM_W(-0X4, ctx->r13) = ctx->r1;
            goto L_800325AC;
    }
    // 0x800325CC: sw          $at, -0x4($t5)
    MEM_W(-0X4, ctx->r13) = ctx->r1;
    // 0x800325D0: b           L_8003261C
    // 0x800325D4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_8003261C;
    // 0x800325D4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x800325D8: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
L_800325DC:
    // 0x800325DC: or          $t8, $s1, $zero
    ctx->r24 = ctx->r17 | 0;
    // 0x800325E0: or          $t9, $s2, $zero
    ctx->r25 = ctx->r18 | 0;
    // 0x800325E4: addiu       $t7, $s1, 0x48
    ctx->r15 = ADD32(ctx->r17, 0X48);
    // 0x800325E8: bc1fl       L_8003261C
    if (!c1cs) {
        // 0x800325EC: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8003261C;
    }
    goto skip_16;
    // 0x800325EC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_16:
    // 0x800325F0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_800325F4:
    // 0x800325F4: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x800325F8: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x800325FC: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80032600: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x80032604: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x80032608: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x8003260C: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x80032610: bne         $t8, $t7, L_800325F4
    if (ctx->r24 != ctx->r15) {
        // 0x80032614: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_800325F4;
    }
    // 0x80032614: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x80032618: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8003261C:
    // 0x8003261C: beql        $s0, $zero, L_80032638
    if (ctx->r16 == 0) {
        // 0x80032620: swc1        $f20, 0x3C($s2)
        MEM_W(0X3C, ctx->r18) = ctx->f20.u32l;
            goto L_80032638;
    }
    goto skip_17;
    // 0x80032620: swc1        $f20, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->f20.u32l;
    skip_17:
    // 0x80032624: lhu         $t0, 0x20($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X20);
    // 0x80032628: slt         $at, $s4, $t0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8003262C: bnel        $at, $zero, L_80032544
    if (ctx->r1 != 0) {
        // 0x80032630: lw          $v0, 0x18($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X18);
            goto L_80032544;
    }
    goto skip_18;
    // 0x80032630: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    skip_18:
    // 0x80032634: swc1        $f20, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->f20.u32l;
L_80032638:
    // 0x80032638: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8003263C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80032640: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80032644: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80032648: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8003264C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80032650: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80032654: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x80032658: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x8003265C: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x80032660: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x80032664: jr          $ra
    // 0x80032668: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    TRACE_RETURN()
    return;
    // 0x80032668: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_8003AC0C_3B80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003AC0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AC10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AC14: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003AC18: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003AC1C: lbu         $t6, 0x7D($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X7D);
    // 0x8003AC20: beql        $t6, $zero, L_8003AC3C
    if (ctx->r14 == 0) {
        // 0x8003AC24: lhu         $t7, 0x9A($v0)
        ctx->r15 = MEM_HU(ctx->r2, 0X9A);
            goto L_8003AC3C;
    }
    goto skip_0;
    // 0x8003AC24: lhu         $t7, 0x9A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X9A);
    skip_0:
    // 0x8003AC28: jal         0x8003C620
    // 0x8003AC2C: nop

    func_8003C620_3D220(rdram, ctx);
        goto after_0;
    // 0x8003AC2C: nop

    after_0:
    // 0x8003AC30: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003AC34: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003AC38: lhu         $t7, 0x9A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X9A);
L_8003AC3C:
    // 0x8003AC3C: beql        $t7, $zero, L_8003AC58
    if (ctx->r15 == 0) {
        // 0x8003AC40: lbu         $t8, 0x6($v0)
        ctx->r24 = MEM_BU(ctx->r2, 0X6);
            goto L_8003AC58;
    }
    goto skip_1;
    // 0x8003AC40: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    skip_1:
    // 0x8003AC44: jal         0x8003C108
    // 0x8003AC48: nop

    func_8003C108_3CD08(rdram, ctx);
        goto after_1;
    // 0x8003AC48: nop

    after_1:
    // 0x8003AC4C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003AC50: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003AC54: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
L_8003AC58:
    // 0x8003AC58: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x8003AC5C: beql        $t9, $zero, L_8003AC78
    if (ctx->r25 == 0) {
        // 0x8003AC60: lbu         $t0, 0x22($v0)
        ctx->r8 = MEM_BU(ctx->r2, 0X22);
            goto L_8003AC78;
    }
    goto skip_2;
    // 0x8003AC60: lbu         $t0, 0x22($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X22);
    skip_2:
    // 0x8003AC64: jal         0x8003AEB0
    // 0x8003AC68: nop

    func_8003AEB0_3BAB0(rdram, ctx);
        goto after_2;
    // 0x8003AC68: nop

    after_2:
    // 0x8003AC6C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003AC70: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003AC74: lbu         $t0, 0x22($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X22);
L_8003AC78:
    // 0x8003AC78: beql        $t0, $zero, L_8003ACA4
    if (ctx->r8 == 0) {
        // 0x8003AC7C: lbu         $v1, 0x24($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X24);
            goto L_8003ACA4;
    }
    goto skip_3;
    // 0x8003AC7C: lbu         $v1, 0x24($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X24);
    skip_3:
    // 0x8003AC80: lbu         $t1, 0x21($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X21);
    // 0x8003AC84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003AC88: bnel        $t1, $at, L_8003ACA4
    if (ctx->r9 != ctx->r1) {
        // 0x8003AC8C: lbu         $v1, 0x24($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X24);
            goto L_8003ACA4;
    }
    goto skip_4;
    // 0x8003AC8C: lbu         $v1, 0x24($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X24);
    skip_4:
    // 0x8003AC90: jal         0x8003B348
    // 0x8003AC94: nop

    func_8003B348_3BF48(rdram, ctx);
        goto after_3;
    // 0x8003AC94: nop

    after_3:
    // 0x8003AC98: b           L_8003AD1C
    // 0x8003AC9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003AD1C;
    // 0x8003AC9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003ACA0: lbu         $v1, 0x24($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X24);
L_8003ACA4:
    // 0x8003ACA4: beq         $v1, $zero, L_8003ACD4
    if (ctx->r3 == 0) {
        // 0x8003ACA8: addiu       $t2, $v1, -0x1
        ctx->r10 = ADD32(ctx->r3, -0X1);
            goto L_8003ACD4;
    }
    // 0x8003ACA8: addiu       $t2, $v1, -0x1
    ctx->r10 = ADD32(ctx->r3, -0X1);
    // 0x8003ACAC: sb          $t2, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r10;
    // 0x8003ACB0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003ACB4: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003ACB8: lbu         $t3, 0x24($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X24);
    // 0x8003ACBC: bnel        $t3, $zero, L_8003ACD8
    if (ctx->r11 != 0) {
        // 0x8003ACC0: lhu         $t4, 0x4C($v0)
        ctx->r12 = MEM_HU(ctx->r2, 0X4C);
            goto L_8003ACD8;
    }
    goto skip_5;
    // 0x8003ACC0: lhu         $t4, 0x4C($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X4C);
    skip_5:
    // 0x8003ACC4: jal         0x8003B304
    // 0x8003ACC8: nop

    func_8003B304_3BF04(rdram, ctx);
        goto after_4;
    // 0x8003ACC8: nop

    after_4:
    // 0x8003ACCC: b           L_8003AD1C
    // 0x8003ACD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003AD1C;
    // 0x8003ACD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003ACD4:
    // 0x8003ACD4: lhu         $t4, 0x4C($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X4C);
L_8003ACD8:
    // 0x8003ACD8: beql        $t4, $zero, L_8003ACF4
    if (ctx->r12 == 0) {
        // 0x8003ACDC: lbu         $t5, 0x6($v0)
        ctx->r13 = MEM_BU(ctx->r2, 0X6);
            goto L_8003ACF4;
    }
    goto skip_6;
    // 0x8003ACDC: lbu         $t5, 0x6($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X6);
    skip_6:
    // 0x8003ACE0: jal         0x8003B394
    // 0x8003ACE4: nop

    func_8003B394_3BF94(rdram, ctx);
        goto after_5;
    // 0x8003ACE4: nop

    after_5:
    // 0x8003ACE8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003ACEC: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003ACF0: lbu         $t5, 0x6($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X6);
L_8003ACF4:
    // 0x8003ACF4: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8003ACF8: beq         $t6, $zero, L_8003AD10
    if (ctx->r14 == 0) {
        // 0x8003ACFC: nop
    
            goto L_8003AD10;
    }
    // 0x8003ACFC: nop

    // 0x8003AD00: jal         0x8003AFB0
    // 0x8003AD04: nop

    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_6;
    // 0x8003AD04: nop

    after_6:
    // 0x8003AD08: b           L_8003AD1C
    // 0x8003AD0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003AD1C;
    // 0x8003AD0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003AD10:
    // 0x8003AD10: jal         0x8003AD28
    // 0x8003AD14: nop

    func_8003AD28_3B928(rdram, ctx);
        goto after_7;
    // 0x8003AD14: nop

    after_7:
    // 0x8003AD18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003AD1C:
    // 0x8003AD1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AD20: jr          $ra
    // 0x8003AD24: nop

    TRACE_RETURN()
    return;
    // 0x8003AD24: nop

;}
RECOMP_FUNC void func_80016660_17260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80016660: sra         $t6, $a1, 3
    ctx->r14 = S32(SIGNED(ctx->r5) >> 3);
    // 0x80016664: addu        $v0, $t6, $a0
    ctx->r2 = ADD32(ctx->r14, ctx->r4);
    // 0x80016668: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x8001666C: andi        $t8, $a1, 0x7
    ctx->r24 = ctx->r5 & 0X7;
    // 0x80016670: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80016674: sllv        $t0, $t9, $t8
    ctx->r8 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x80016678: or          $t1, $t7, $t0
    ctx->r9 = ctx->r15 | ctx->r8;
    // 0x8001667C: jr          $ra
    // 0x80016680: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x80016680: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
;}
RECOMP_FUNC void func_8001E3E4_1EFE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001E3E4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8001E3E8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8001E3EC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8001E3F0: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
    // 0x8001E3F4: swc1        $f14, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f14.u32l;
    // 0x8001E3F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8001E3FC: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8001E400: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001E404: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001E408: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x8001E40C: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x8001E410: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x8001E414: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x8001E418: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x8001E41C: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x8001E420: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x8001E424: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x8001E428: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x8001E42C: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x8001E430: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x8001E434: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x8001E438: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    // 0x8001E43C: jr          $ra
    // 0x8001E440: swc1        $f6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x8001E440: swc1        $f6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80007C90_8890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007C90: lhu         $v1, 0x18($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X18);
    // 0x80007C94: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80007C98: andi        $t6, $v1, 0x8000
    ctx->r14 = ctx->r3 & 0X8000;
    // 0x80007C9C: beql        $t6, $zero, L_80007D38
    if (ctx->r14 == 0) {
        // 0x80007CA0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80007D38;
    }
    goto skip_0;
    // 0x80007CA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80007CA4: lbu         $a1, 0x4($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X4);
    // 0x80007CA8: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80007CAC: addiu       $t0, $t0, -0x3340
    ctx->r8 = ADD32(ctx->r8, -0X3340);
    // 0x80007CB0: andi        $t7, $a1, 0x18
    ctx->r15 = ctx->r5 & 0X18;
    // 0x80007CB4: beq         $t7, $zero, L_80007CD0
    if (ctx->r15 == 0) {
        // 0x80007CB8: addiu       $t2, $zero, 0xFF
        ctx->r10 = ADD32(0, 0XFF);
            goto L_80007CD0;
    }
    // 0x80007CB8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80007CBC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80007CC0: beq         $t7, $at, L_80007D20
    if (ctx->r15 == ctx->r1) {
        // 0x80007CC4: addiu       $t4, $zero, 0xFF
        ctx->r12 = ADD32(0, 0XFF);
            goto L_80007D20;
    }
    // 0x80007CC4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80007CC8: b           L_80007D38
    // 0x80007CCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80007D38;
    // 0x80007CCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80007CD0:
    // 0x80007CD0: lbu         $a1, 0xC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XC);
    // 0x80007CD4: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x80007CD8: bne         $at, $zero, L_80007CE8
    if (ctx->r1 != 0) {
        // 0x80007CDC: andi        $a2, $a1, 0xFF
        ctx->r6 = ctx->r5 & 0XFF;
            goto L_80007CE8;
    }
    // 0x80007CDC: andi        $a2, $a1, 0xFF
    ctx->r6 = ctx->r5 & 0XFF;
    // 0x80007CE0: b           L_80007CE8
    // 0x80007CE4: lbu         $a2, 0x5($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X5);
        goto L_80007CE8;
    // 0x80007CE4: lbu         $a2, 0x5($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X5);
L_80007CE8:
    // 0x80007CE8: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x80007CEC: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80007CF0: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80007CF4: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x80007CF8: lhu         $a1, 0x5F18($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X5F18);
    // 0x80007CFC: blez        $a1, L_80007D0C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80007D00: addiu       $t1, $a1, -0x1
        ctx->r9 = ADD32(ctx->r5, -0X1);
            goto L_80007D0C;
    }
    // 0x80007D00: addiu       $t1, $a1, -0x1
    ctx->r9 = ADD32(ctx->r5, -0X1);
    // 0x80007D04: sh          $t1, 0x5F18($v0)
    MEM_H(0X5F18, ctx->r2) = ctx->r9;
    // 0x80007D08: lhu         $v1, 0x18($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X18);
L_80007D0C:
    // 0x80007D0C: andi        $t3, $v1, 0x7FFF
    ctx->r11 = ctx->r3 & 0X7FFF;
    // 0x80007D10: sb          $t2, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r10;
    // 0x80007D14: sh          $t3, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r11;
    // 0x80007D18: jr          $ra
    // 0x80007D1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80007D1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80007D20:
    // 0x80007D20: andi        $t5, $v1, 0x7FFF
    ctx->r13 = ctx->r3 & 0X7FFF;
    // 0x80007D24: sb          $t4, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r12;
    // 0x80007D28: sh          $t5, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r13;
    // 0x80007D2C: jr          $ra
    // 0x80007D30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80007D30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80007D34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80007D38:
    // 0x80007D38: jr          $ra
    // 0x80007D3C: nop

    TRACE_RETURN()
    return;
    // 0x80007D3C: nop

;}
RECOMP_FUNC void func_800105AC_111AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800105AC: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x800105B0: multu       $a0, $t0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800105B4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800105B8: addiu       $t7, $t7, 0x7EF8
    ctx->r15 = ADD32(ctx->r15, 0X7EF8);
    // 0x800105BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800105C0: mflo        $t6
    ctx->r14 = lo;
    // 0x800105C4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800105C8: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x800105CC: beq         $t8, $zero, L_800106A8
    if (ctx->r24 == 0) {
        // 0x800105D0: nop
    
            goto L_800106A8;
    }
    // 0x800105D0: nop

    // 0x800105D4: lh          $v1, 0x4($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X4);
    // 0x800105D8: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    // 0x800105DC: lui         $t2, 0xFFFF
    ctx->r10 = S32(0XFFFF << 16);
    // 0x800105E0: ori         $t2, $t2, 0x7FFF
    ctx->r10 = ctx->r10 | 0X7FFF;
    // 0x800105E4: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800105E8: beq         $at, $zero, L_800105F8
    if (ctx->r1 == 0) {
        // 0x800105EC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_800105F8;
    }
    // 0x800105EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800105F0: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    // 0x800105F4: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
L_800105F8:
    // 0x800105F8: blez        $a0, L_8001065C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800105FC: addiu       $v1, $zero, 0xFFF
        ctx->r3 = ADD32(0, 0XFFF);
            goto L_8001065C;
    }
    // 0x800105FC: addiu       $v1, $zero, 0xFFF
    ctx->r3 = ADD32(0, 0XFFF);
    // 0x80010600: addiu       $t1, $zero, -0x5000
    ctx->r9 = ADD32(0, -0X5000);
    // 0x80010604: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
L_80010608:
    // 0x80010608: addu        $a0, $t9, $a2
    ctx->r4 = ADD32(ctx->r25, ctx->r6);
    // 0x8001060C: lhu         $a3, 0x0($a0)
    ctx->r7 = MEM_HU(ctx->r4, 0X0);
    // 0x80010610: xor         $t3, $v1, $a3
    ctx->r11 = ctx->r3 ^ ctx->r7;
    // 0x80010614: sltiu       $t3, $t3, 0x1
    ctx->r11 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x80010618: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x8001061C: beq         $t4, $zero, L_80010630
    if (ctx->r12 == 0) {
        // 0x80010620: and         $t5, $a3, $t1
        ctx->r13 = ctx->r7 & ctx->r9;
            goto L_80010630;
    }
    // 0x80010620: and         $t5, $a3, $t1
    ctx->r13 = ctx->r7 & ctx->r9;
    // 0x80010624: sh          $t5, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r13;
    // 0x80010628: b           L_8001063C
    // 0x8001062C: andi        $a3, $t5, 0xFFFF
    ctx->r7 = ctx->r13 & 0XFFFF;
        goto L_8001063C;
    // 0x8001062C: andi        $a3, $t5, 0xFFFF
    ctx->r7 = ctx->r13 & 0XFFFF;
L_80010630:
    // 0x80010630: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x80010634: andi        $t6, $v1, 0xFFF
    ctx->r14 = ctx->r3 & 0XFFF;
    // 0x80010638: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_8001063C:
    // 0x8001063C: and         $t7, $a3, $t2
    ctx->r15 = ctx->r7 & ctx->r10;
    // 0x80010640: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x80010644: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    // 0x80010648: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8001064C: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x80010650: slt         $at, $a1, $t8
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80010654: bnel        $at, $zero, L_80010608
    if (ctx->r1 != 0) {
        // 0x80010658: lw          $t9, 0x8($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X8);
            goto L_80010608;
    }
    goto skip_0;
    // 0x80010658: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    skip_0:
L_8001065C:
    // 0x8001065C: bne         $a1, $zero, L_8001068C
    if (ctx->r5 != 0) {
        // 0x80010660: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_8001068C;
    }
    // 0x80010660: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80010664: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80010668: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
L_8001066C:
    // 0x8001066C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80010670: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80010674: bne         $a1, $a0, L_8001066C
    if (ctx->r5 != ctx->r4) {
        // 0x80010678: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8001066C;
    }
    // 0x80010678: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8001067C: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x80010680: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x80010684: jr          $ra
    // 0x80010688: sh          $t9, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x80010688: sh          $t9, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r25;
L_8001068C:
    // 0x8001068C: multu       $a1, $t0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80010690: lw          $t4, 0x8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X8);
    // 0x80010694: mflo        $t5
    ctx->r13 = lo;
    // 0x80010698: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x8001069C: lhu         $t6, -0xC($v1)
    ctx->r14 = MEM_HU(ctx->r3, -0XC);
    // 0x800106A0: ori         $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 | 0X8000;
    // 0x800106A4: sh          $t7, -0xC($v1)
    MEM_H(-0XC, ctx->r3) = ctx->r15;
L_800106A8:
    // 0x800106A8: jr          $ra
    // 0x800106AC: nop

    TRACE_RETURN()
    return;
    // 0x800106AC: nop

;}
RECOMP_FUNC void func_8003521C_35E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003521C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80035220: lw          $t6, -0x254C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X254C);
    // 0x80035224: jr          $ra
    // 0x80035228: sw          $a0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80035228: sw          $a0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r4;
;}
RECOMP_FUNC void func_8001FA80_20680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001FA80: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8001FA84: addiu       $t2, $t2, -0x3A38
    ctx->r10 = ADD32(ctx->r10, -0X3A38);
    // 0x8001FA88: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x8001FA8C: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x8001FA90: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x8001FA94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001FA98: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8001FA9C: addu        $t0, $v1, $a3
    ctx->r8 = ADD32(ctx->r3, ctx->r7);
    // 0x8001FAA0: lbu         $t6, 0x2DE0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X2DE0);
    // 0x8001FAA4: sltiu       $at, $t6, 0xE
    ctx->r1 = ctx->r14 < 0XE ? 1 : 0;
    // 0x8001FAA8: beq         $at, $zero, L_800202F8
    if (ctx->r1 == 0) {
        // 0x8001FAAC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_800202F8;
    }
    // 0x8001FAAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001FAB0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001FAB4: addu        $at, $at, $t6
    gpr jr_addend_8001FABC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8001FAB8: lw          $t6, -0x45B4($at)
    ctx->r14 = ADD32(ctx->r1, -0X45B4);
    // 0x8001FABC: jr          $t6
    // 0x8001FAC0: nop

    switch (jr_addend_8001FABC >> 2) {
        case 0: goto L_8001FAC4; break;
        case 1: goto L_8001FB00; break;
        case 2: goto L_8001FB74; break;
        case 3: goto L_8001FC4C; break;
        case 4: goto L_8001FCA0; break;
        case 5: goto L_8001FE98; break;
        case 6: goto L_8001FFB8; break;
        case 7: goto L_80020008; break;
        case 8: goto L_80020098; break;
        case 9: goto L_800200E8; break;
        case 10: goto L_80020130; break;
        case 11: goto L_80020188; break;
        case 12: goto L_800201D8; break;
        case 13: goto L_800202AC; break;
        default: switch_error(__func__, 0x8001FABC, 0x8007BA4C);
    }
    // 0x8001FAC0: nop

L_8001FAC4:
    // 0x8001FAC4: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8001FAC8: jal         0x800369F0
    // 0x8001FACC: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    func_800369F0_375F0(rdram, ctx);
        goto after_0;
    // 0x8001FACC: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    after_0:
    // 0x8001FAD0: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8001FAD4: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x8001FAD8: addiu       $t7, $t1, 0x7FFF
    ctx->r15 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FADC: lhu         $t7, 0x2E25($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X2E25);
    // 0x8001FAE0: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FAE4: addiu       $t9, $t1, 0x7FFF
    ctx->r25 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FAE8: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x8001FAEC: sh          $t8, 0x2E25($at)
    MEM_H(0X2E25, ctx->r1) = ctx->r24;
    // 0x8001FAF0: lbu         $t9, 0x2DE1($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X2DE1);
    // 0x8001FAF4: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x8001FAF8: b           L_800202F8
    // 0x8001FAFC: sb          $t3, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r11;
        goto L_800202F8;
    // 0x8001FAFC: sb          $t3, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r11;
L_8001FB00:
    // 0x8001FB00: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8001FB04: jal         0x80036908
    // 0x8001FB08: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    func_80036908_37508(rdram, ctx);
        goto after_1;
    // 0x8001FB08: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    after_1:
    // 0x8001FB0C: bne         $v0, $zero, L_800202F8
    if (ctx->r2 != 0) {
        // 0x8001FB10: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_800202F8;
    }
    // 0x8001FB10: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8001FB14: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x8001FB18: lui         $t4, 0x4
    ctx->r12 = S32(0X4 << 16);
    // 0x8001FB1C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8001FB20: addu        $t4, $t4, $v1
    ctx->r12 = ADD32(ctx->r12, ctx->r3);
    // 0x8001FB24: lhu         $t4, -0x51DC($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X51DC);
    // 0x8001FB28: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8001FB2C: ori         $t5, $t4, 0x80
    ctx->r13 = ctx->r12 | 0X80;
    // 0x8001FB30: jal         0x8003D428
    // 0x8001FB34: sh          $t5, -0x51DC($at)
    MEM_H(-0X51DC, ctx->r1) = ctx->r13;
    func_8003D428_3E028(rdram, ctx);
        goto after_2;
    // 0x8001FB34: sh          $t5, -0x51DC($at)
    MEM_H(-0X51DC, ctx->r1) = ctx->r13;
    after_2:
    // 0x8001FB38: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8001FB3C: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x8001FB40: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FB44: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001FB48: sh          $t6, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r14;
    // 0x8001FB4C: jal         0x80041770
    // 0x8001FB50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_3;
    // 0x8001FB50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x8001FB54: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8001FB58: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x8001FB5C: addiu       $t7, $t1, 0x7FFF
    ctx->r15 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FB60: lbu         $t7, 0x2DE1($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2DE1);
    // 0x8001FB64: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FB68: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8001FB6C: b           L_800202F8
    // 0x8001FB70: sb          $t8, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r24;
        goto L_800202F8;
    // 0x8001FB70: sb          $t8, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r24;
L_8001FB74:
    // 0x8001FB74: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8001FB78: lw          $t9, 0x48D8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X48D8);
    // 0x8001FB7C: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8001FB80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8001FB84: bnel        $t9, $zero, L_800202FC
    if (ctx->r25 != 0) {
        // 0x8001FB88: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800202FC;
    }
    goto skip_0;
    // 0x8001FB88: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x8001FB8C: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    // 0x8001FB90: jal         0x80036158
    // 0x8001FB94: lw          $a1, 0x3014($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X3014);
    func_80036158_36D58(rdram, ctx);
        goto after_4;
    // 0x8001FB94: lw          $a1, 0x3014($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X3014);
    after_4:
    // 0x8001FB98: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001FB9C: jal         0x80034EF8
    // 0x8001FBA0: lw          $a0, -0x3A80($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A80);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_5;
    // 0x8001FBA0: lw          $a0, -0x3A80($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A80);
    after_5:
    // 0x8001FBA4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001FBA8: jal         0x80034EF8
    // 0x8001FBAC: lw          $a0, -0x3A7C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A7C);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_6;
    // 0x8001FBAC: lw          $a0, -0x3A7C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A7C);
    after_6:
    // 0x8001FBB0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001FBB4: jal         0x80034EF8
    // 0x8001FBB8: lw          $a0, -0x3A78($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A78);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_7;
    // 0x8001FBB8: lw          $a0, -0x3A78($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A78);
    after_7:
    // 0x8001FBBC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001FBC0: jal         0x80034EF8
    // 0x8001FBC4: lw          $a0, -0x3A74($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A74);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_8;
    // 0x8001FBC4: lw          $a0, -0x3A74($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A74);
    after_8:
    // 0x8001FBC8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001FBCC: jal         0x80034EF8
    // 0x8001FBD0: lw          $a0, -0x3A70($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A70);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_9;
    // 0x8001FBD0: lw          $a0, -0x3A70($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A70);
    after_9:
    // 0x8001FBD4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001FBD8: jal         0x80034EF8
    // 0x8001FBDC: lw          $a0, -0x3A6C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A6C);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_10;
    // 0x8001FBDC: lw          $a0, -0x3A6C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A6C);
    after_10:
    // 0x8001FBE0: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x8001FBE4: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x8001FBE8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8001FBEC: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x8001FBF0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8001FBF4: sw          $zero, -0x4FCC($at)
    MEM_W(-0X4FCC, ctx->r1) = 0;
    // 0x8001FBF8: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x8001FBFC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8001FC00: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8001FC04: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8001FC08: sb          $t4, -0x4FE3($at)
    MEM_B(-0X4FE3, ctx->r1) = ctx->r12;
    // 0x8001FC0C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8001FC10: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x8001FC14: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x8001FC18: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8001FC1C: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x8001FC20: lbu         $t6, -0x5220($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X5220);
    // 0x8001FC24: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8001FC28: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8001FC2C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001FC30: sb          $t7, -0x5220($at)
    MEM_B(-0X5220, ctx->r1) = ctx->r15;
    // 0x8001FC34: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x8001FC38: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8001FC3C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001FC40: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8001FC44: b           L_800202F8
    // 0x8001FC48: sb          $t8, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r24;
        goto L_800202F8;
    // 0x8001FC48: sb          $t8, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r24;
L_8001FC4C:
    // 0x8001FC4C: lbu         $v0, 0x301D($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X301D);
    // 0x8001FC50: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8001FC54: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8001FC58: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8001FC5C: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x8001FC60: beq         $a0, $zero, L_800202F8
    if (ctx->r4 == 0) {
        // 0x8001FC64: sb          $t3, -0x4FE3($at)
        MEM_B(-0X4FE3, ctx->r1) = ctx->r11;
            goto L_800202F8;
    }
    // 0x8001FC64: sb          $t3, -0x4FE3($at)
    MEM_B(-0X4FE3, ctx->r1) = ctx->r11;
    // 0x8001FC68: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8001FC6C: addiu       $a1, $a1, -0x2D60
    ctx->r5 = ADD32(ctx->r5, -0X2D60);
    // 0x8001FC70: jal         0x80001C00
    // 0x8001FC74: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_80001C00_2800(rdram, ctx);
        goto after_11;
    // 0x8001FC74: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_11:
    // 0x8001FC78: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8001FC7C: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x8001FC80: lui         $t4, 0x4
    ctx->r12 = S32(0X4 << 16);
    // 0x8001FC84: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8001FC88: addu        $t4, $t4, $v1
    ctx->r12 = ADD32(ctx->r12, ctx->r3);
    // 0x8001FC8C: lbu         $t4, -0x5220($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X5220);
    // 0x8001FC90: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8001FC94: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8001FC98: b           L_800202F8
    // 0x8001FC9C: sb          $t5, -0x5220($at)
    MEM_B(-0X5220, ctx->r1) = ctx->r13;
        goto L_800202F8;
    // 0x8001FC9C: sb          $t5, -0x5220($at)
    MEM_B(-0X5220, ctx->r1) = ctx->r13;
L_8001FCA0:
    // 0x8001FCA0: lhu         $t6, 0x301E($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X301E);
    // 0x8001FCA4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001FCA8: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8001FCAC: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x8001FCB0: jal         0x80020308
    // 0x8001FCB4: lw          $a0, 0x7FCC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7FCC);
    func_80020308_20F08(rdram, ctx);
        goto after_12;
    // 0x8001FCB4: lw          $a0, 0x7FCC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7FCC);
    after_12:
    // 0x8001FCB8: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8001FCBC: addiu       $t8, $zero, 0x42
    ctx->r24 = ADD32(0, 0X42);
    // 0x8001FCC0: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8001FCC4: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x8001FCC8: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x8001FCCC: sh          $t8, -0x2CDC($at)
    MEM_H(-0X2CDC, ctx->r1) = ctx->r24;
    // 0x8001FCD0: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x8001FCD4: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FCD8: sh          $zero, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = 0;
    // 0x8001FCDC: addiu       $t9, $a0, 0x7FFF
    ctx->r25 = ADD32(ctx->r4, 0X7FFF);
    // 0x8001FCE0: lbu         $t9, 0x78A2($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X78A2);
    // 0x8001FCE4: addiu       $v0, $t1, 0x7FFF
    ctx->r2 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FCE8: beql        $t9, $zero, L_8001FD44
    if (ctx->r25 == 0) {
        // 0x8001FCEC: addiu       $at, $a0, 0x7FFF
        ctx->r1 = ADD32(ctx->r4, 0X7FFF);
            goto L_8001FD44;
    }
    goto skip_1;
    // 0x8001FCEC: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
    skip_1:
    // 0x8001FCF0: lbu         $v0, 0x2DE5($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2DE5);
    // 0x8001FCF4: addiu       $t3, $t1, 0x7FFF
    ctx->r11 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FCF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001FCFC: bne         $v0, $zero, L_8001FD20
    if (ctx->r2 != 0) {
        // 0x8001FD00: nop
    
            goto L_8001FD20;
    }
    // 0x8001FD00: nop

    // 0x8001FD04: lw          $t3, 0x2DE9($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2DE9);
    // 0x8001FD08: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8001FD0C: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x8001FD10: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8001FD14: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x8001FD18: lw          $t6, 0x26C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X26C);
    // 0x8001FD1C: beq         $t6, $zero, L_8001FD40
    if (ctx->r14 == 0) {
        // 0x8001FD20: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_8001FD40;
    }
L_8001FD20:
    // 0x8001FD20: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8001FD24: beq         $v0, $at, L_8001FD38
    if (ctx->r2 == ctx->r1) {
        // 0x8001FD28: addiu       $v1, $v1, -0x39F8
        ctx->r3 = ADD32(ctx->r3, -0X39F8);
            goto L_8001FD38;
    }
    // 0x8001FD28: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x8001FD2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001FD30: bne         $v0, $at, L_8001FD64
    if (ctx->r2 != ctx->r1) {
        // 0x8001FD34: nop
    
            goto L_8001FD64;
    }
    // 0x8001FD34: nop

L_8001FD38:
    // 0x8001FD38: lw          $t7, 0x268($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X268);
    // 0x8001FD3C: bne         $t7, $zero, L_8001FD64
    if (ctx->r15 != 0) {
        // 0x8001FD40: addiu       $at, $a0, 0x7FFF
        ctx->r1 = ADD32(ctx->r4, 0X7FFF);
            goto L_8001FD64;
    }
L_8001FD40:
    // 0x8001FD40: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
L_8001FD44:
    // 0x8001FD44: jal         0x800101AC
    // 0x8001FD48: sb          $zero, 0x78A2($at)
    MEM_B(0X78A2, ctx->r1) = 0;
    func_800101AC_10DAC(rdram, ctx);
        goto after_13;
    // 0x8001FD48: sb          $zero, 0x78A2($at)
    MEM_B(0X78A2, ctx->r1) = 0;
    after_13:
    // 0x8001FD4C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001FD50: jal         0x8021433C
    // 0x8001FD54: lw          $a0, -0x3A84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A84);
    func_8021433C_6732EC(rdram, ctx);
        goto after_14;
    // 0x8001FD54: lw          $a0, -0x3A84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A84);
    after_14:
    // 0x8001FD58: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8001FD5C: b           L_8001FE78
    // 0x8001FD60: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
        goto L_8001FE78;
    // 0x8001FD60: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
L_8001FD64:
    // 0x8001FD64: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8001FD68: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x8001FD6C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8001FD70: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8001FD74: addu        $t0, $t0, $at
    ctx->r8 = ADD32(ctx->r8, ctx->r1);
    // 0x8001FD78: lbu         $t8, 0x2DE4($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X2DE4);
    // 0x8001FD7C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001FD80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001FD84: bnel        $t8, $zero, L_8001FE10
    if (ctx->r24 != 0) {
        // 0x8001FD88: lw          $t7, 0x2A4($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X2A4);
            goto L_8001FE10;
    }
    goto skip_2;
    // 0x8001FD88: lw          $t7, 0x2A4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X2A4);
    skip_2:
    // 0x8001FD8C: jal         0x800101AC
    // 0x8001FD90: nop

    func_800101AC_10DAC(rdram, ctx);
        goto after_15;
    // 0x8001FD90: nop

    after_15:
    // 0x8001FD94: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8001FD98: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x8001FD9C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8001FDA0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8001FDA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8001FDA8: addu        $t0, $t0, $at
    ctx->r8 = ADD32(ctx->r8, ctx->r1);
    // 0x8001FDAC: lw          $v0, 0x2DE8($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X2DE8);
    // 0x8001FDB0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8001FDB4: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x8001FDB8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8001FDBC: lhu         $t9, 0x2DEC($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X2DEC);
    // 0x8001FDC0: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x8001FDC4: addu        $t4, $t4, $v0
    ctx->r12 = ADD32(ctx->r12, ctx->r2);
    // 0x8001FDC8: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8001FDCC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8001FDD0: lhu         $t3, 0x2DEE($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X2DEE);
    // 0x8001FDD4: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x8001FDD8: addiu       $t6, $t5, 0x138
    ctx->r14 = ADD32(ctx->r13, 0X138);
    // 0x8001FDDC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001FDE0: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x8001FDE4: lw          $a1, -0x3A24($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A24);
    // 0x8001FDE8: lw          $a0, -0x3A84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A84);
    // 0x8001FDEC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8001FDF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001FDF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8001FDF8: jal         0x802160A0
    // 0x8001FDFC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    func_802160A0_675050(rdram, ctx);
        goto after_16;
    // 0x8001FDFC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    after_16:
    // 0x8001FE00: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8001FE04: b           L_8001FE78
    // 0x8001FE08: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
        goto L_8001FE78;
    // 0x8001FE08: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x8001FE0C: lw          $t7, 0x2A4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X2A4);
L_8001FE10:
    // 0x8001FE10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001FE14: beql        $t7, $zero, L_8001FE40
    if (ctx->r15 == 0) {
        // 0x8001FE18: lhu         $t5, 0x2DF2($t0)
        ctx->r13 = MEM_HU(ctx->r8, 0X2DF2);
            goto L_8001FE40;
    }
    goto skip_3;
    // 0x8001FE18: lhu         $t5, 0x2DF2($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0X2DF2);
    skip_3:
    // 0x8001FE1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8001FE20:
    // 0x8001FE20: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x8001FE24: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8001FE28: addu        $t3, $v1, $t9
    ctx->r11 = ADD32(ctx->r3, ctx->r25);
    // 0x8001FE2C: lw          $t4, 0x2A4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X2A4);
    // 0x8001FE30: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8001FE34: bnel        $t4, $zero, L_8001FE20
    if (ctx->r12 != 0) {
        // 0x8001FE38: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8001FE20;
    }
    goto skip_4;
    // 0x8001FE38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_4:
    // 0x8001FE3C: lhu         $t5, 0x2DF2($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0X2DF2);
L_8001FE40:
    // 0x8001FE40: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8001FE44: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x8001FE48: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8001FE4C: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x8001FE50: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8001FE54: lw          $a3, -0x3A24($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3A24);
    // 0x8001FE58: lw          $a0, -0x3A84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A84);
    // 0x8001FE5C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8001FE60: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8001FE64: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8001FE68: jal         0x8020F170
    // 0x8001FE6C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_8020F170_66E120(rdram, ctx);
        goto after_17;
    // 0x8001FE6C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_17:
    // 0x8001FE70: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8001FE74: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
L_8001FE78:
    // 0x8001FE78: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8001FE7C: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FE80: sb          $t6, 0x301E($at)
    MEM_B(0X301E, ctx->r1) = ctx->r14;
    // 0x8001FE84: addiu       $t7, $t1, 0x7FFF
    ctx->r15 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FE88: lbu         $t7, 0x2DE1($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2DE1);
    // 0x8001FE8C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8001FE90: b           L_800202F8
    // 0x8001FE94: sb          $t8, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r24;
        goto L_800202F8;
    // 0x8001FE94: sb          $t8, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r24;
L_8001FE98:
    // 0x8001FE98: lbu         $v0, 0x301D($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X301D);
    // 0x8001FE9C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8001FEA0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8001FEA4: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8001FEA8: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x8001FEAC: beq         $a0, $zero, L_8001FECC
    if (ctx->r4 == 0) {
        // 0x8001FEB0: sb          $t9, -0x4FE3($at)
        MEM_B(-0X4FE3, ctx->r1) = ctx->r25;
            goto L_8001FECC;
    }
    // 0x8001FEB0: sb          $t9, -0x4FE3($at)
    MEM_B(-0X4FE3, ctx->r1) = ctx->r25;
    // 0x8001FEB4: jal         0x80041770
    // 0x8001FEB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    osViBlack_recomp(rdram, ctx);
        goto after_18;
    // 0x8001FEB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_18:
    // 0x8001FEBC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8001FEC0: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x8001FEC4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x8001FEC8: addiu       $t2, $t2, -0x3A38
    ctx->r10 = ADD32(ctx->r10, -0X3A38);
L_8001FECC:
    // 0x8001FECC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8001FED0: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x8001FED4: addiu       $v0, $t1, 0x7FFF
    ctx->r2 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FED8: lbu         $v0, 0x2DE5($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2DE5);
    // 0x8001FEDC: bne         $v0, $zero, L_8001FF00
    if (ctx->r2 != 0) {
        // 0x8001FEE0: addiu       $t3, $t1, 0x7FFF
        ctx->r11 = ADD32(ctx->r9, 0X7FFF);
            goto L_8001FF00;
    }
    // 0x8001FEE0: addiu       $t3, $t1, 0x7FFF
    ctx->r11 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FEE4: lw          $t3, 0x2DE9($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2DE9);
    // 0x8001FEE8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8001FEEC: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x8001FEF0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8001FEF4: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x8001FEF8: lw          $t6, 0x26C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X26C);
    // 0x8001FEFC: bne         $t6, $zero, L_8001FF28
    if (ctx->r14 != 0) {
        // 0x8001FF00: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_8001FF28;
    }
L_8001FF00:
    // 0x8001FF00: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8001FF04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001FF08: beq         $v0, $at, L_8001FF1C
    if (ctx->r2 == ctx->r1) {
        // 0x8001FF0C: addiu       $v1, $v1, -0x39F8
        ctx->r3 = ADD32(ctx->r3, -0X39F8);
            goto L_8001FF1C;
    }
    // 0x8001FF0C: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x8001FF10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001FF14: bnel        $v0, $at, L_8001FF80
    if (ctx->r2 != ctx->r1) {
        // 0x8001FF18: lw          $t3, 0x0($t2)
        ctx->r11 = MEM_W(ctx->r10, 0X0);
            goto L_8001FF80;
    }
    goto skip_5;
    // 0x8001FF18: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    skip_5:
L_8001FF1C:
    // 0x8001FF1C: lw          $t7, 0x268($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X268);
    // 0x8001FF20: beql        $t7, $zero, L_8001FF80
    if (ctx->r15 == 0) {
        // 0x8001FF24: lw          $t3, 0x0($t2)
        ctx->r11 = MEM_W(ctx->r10, 0X0);
            goto L_8001FF80;
    }
    goto skip_6;
    // 0x8001FF24: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    skip_6:
L_8001FF28:
    // 0x8001FF28: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x8001FF2C: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x8001FF30: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x8001FF34: addu        $t8, $v1, $a3
    ctx->r24 = ADD32(ctx->r3, ctx->r7);
    // 0x8001FF38: lhu         $t9, 0x307C($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X307C);
    // 0x8001FF3C: lui         $t4, 0xD
    ctx->r12 = S32(0XD << 16);
    // 0x8001FF40: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
    // 0x8001FF44: andi        $t3, $t9, 0x2000
    ctx->r11 = ctx->r25 & 0X2000;
    // 0x8001FF48: beq         $t3, $zero, L_8001FF7C
    if (ctx->r11 == 0) {
        // 0x8001FF4C: addu        $t4, $t4, $v1
        ctx->r12 = ADD32(ctx->r12, ctx->r3);
            goto L_8001FF7C;
    }
    // 0x8001FF4C: addu        $t4, $t4, $v1
    ctx->r12 = ADD32(ctx->r12, ctx->r3);
    // 0x8001FF50: lbu         $t4, -0x75F($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X75F);
    // 0x8001FF54: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8001FF58: addiu       $t8, $t1, 0x7FFF
    ctx->r24 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FF5C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x8001FF60: xori        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 ^ 0X1;
    // 0x8001FF64: sb          $t6, 0x78A2($at)
    MEM_B(0X78A2, ctx->r1) = ctx->r14;
    // 0x8001FF68: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FF6C: sb          $t7, 0x2DE2($at)
    MEM_B(0X2DE2, ctx->r1) = ctx->r15;
    // 0x8001FF70: lbu         $t8, 0x2DE1($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X2DE1);
    // 0x8001FF74: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8001FF78: sb          $t9, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r25;
L_8001FF7C:
    // 0x8001FF7C: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
L_8001FF80:
    // 0x8001FF80: addu        $t0, $t3, $a3
    ctx->r8 = ADD32(ctx->r11, ctx->r7);
    // 0x8001FF84: lhu         $t4, 0x307C($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X307C);
    // 0x8001FF88: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x8001FF8C: beql        $t5, $zero, L_800202FC
    if (ctx->r13 == 0) {
        // 0x8001FF90: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800202FC;
    }
    goto skip_7;
    // 0x8001FF90: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_7:
    // 0x8001FF94: lbu         $t6, 0x2DE1($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X2DE1);
    // 0x8001FF98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001FF9C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8001FFA0: beq         $t6, $at, L_800202F8
    if (ctx->r14 == ctx->r1) {
        // 0x8001FFA4: addiu       $t8, $zero, 0x8
        ctx->r24 = ADD32(0, 0X8);
            goto L_800202F8;
    }
    // 0x8001FFA4: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x8001FFA8: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FFAC: sb          $t7, 0x2DE2($at)
    MEM_B(0X2DE2, ctx->r1) = ctx->r15;
    // 0x8001FFB0: b           L_800202F8
    // 0x8001FFB4: sb          $t8, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r24;
        goto L_800202F8;
    // 0x8001FFB4: sb          $t8, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r24;
L_8001FFB8:
    // 0x8001FFB8: lbu         $t9, 0x2DE1($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X2DE1);
    // 0x8001FFBC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001FFC0: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8001FFC4: bne         $t9, $at, L_800202F8
    if (ctx->r25 != ctx->r1) {
        // 0x8001FFC8: addiu       $t1, $t1, -0x3340
        ctx->r9 = ADD32(ctx->r9, -0X3340);
            goto L_800202F8;
    }
    // 0x8001FFC8: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x8001FFCC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8001FFD0: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FFD4: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x8001FFD8: sh          $t3, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r11;
    // 0x8001FFDC: sb          $t4, 0x301E($at)
    MEM_B(0X301E, ctx->r1) = ctx->r12;
    // 0x8001FFE0: jal         0x80041770
    // 0x8001FFE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_19;
    // 0x8001FFE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_19:
    // 0x8001FFE8: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8001FFEC: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x8001FFF0: addiu       $t5, $t1, 0x7FFF
    ctx->r13 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FFF4: lbu         $t5, 0x2DE1($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X2DE1);
    // 0x8001FFF8: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x8001FFFC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80020000: b           L_800202F8
    // 0x80020004: sb          $t6, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r14;
        goto L_800202F8;
    // 0x80020004: sb          $t6, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r14;
L_80020008:
    // 0x80020008: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8002000C: lw          $t7, 0x48D8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X48D8);
    // 0x80020010: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80020014: bnel        $t7, $zero, L_800202FC
    if (ctx->r15 != 0) {
        // 0x80020018: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800202FC;
    }
    goto skip_8;
    // 0x80020018: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_8:
    // 0x8002001C: jal         0x80034EF8
    // 0x80020020: lw          $a0, -0x3A84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A84);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_20;
    // 0x80020020: lw          $a0, -0x3A84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A84);
    after_20:
    // 0x80020024: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80020028: lui         $a1, 0x8002
    ctx->r5 = S32(0X8002 << 16);
    // 0x8002002C: addiu       $a1, $a1, 0x724
    ctx->r5 = ADD32(ctx->r5, 0X724);
    // 0x80020030: lw          $a0, -0x3A88($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A88);
    // 0x80020034: jal         0x80034E08
    // 0x80020038: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_21;
    // 0x80020038: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_21:
    // 0x8002003C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80020040: jal         0x80020364
    // 0x80020044: sw          $v0, -0x3A84($at)
    MEM_W(-0X3A84, ctx->r1) = ctx->r2;
    func_80020364_20F64(rdram, ctx);
        goto after_22;
    // 0x80020044: sw          $v0, -0x3A84($at)
    MEM_W(-0X3A84, ctx->r1) = ctx->r2;
    after_22:
    // 0x80020048: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8002004C: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x80020050: addiu       $t8, $t1, 0x7FFF
    ctx->r24 = ADD32(ctx->r9, 0X7FFF);
    // 0x80020054: lbu         $t8, 0x302F($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X302F);
    // 0x80020058: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002005C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80020060: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80020064: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80020068: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x8002006C: sh          $zero, 0x7FC0($at)
    MEM_H(0X7FC0, ctx->r1) = 0;
    // 0x80020070: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80020074: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80020078: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8002007C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80020080: sb          $t3, -0x5220($at)
    MEM_B(-0X5220, ctx->r1) = ctx->r11;
    // 0x80020084: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80020088: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8002008C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80020090: b           L_800202F8
    // 0x80020094: sb          $zero, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = 0;
        goto L_800202F8;
    // 0x80020094: sb          $zero, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = 0;
L_80020098:
    // 0x80020098: lbu         $t6, 0x2DE1($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X2DE1);
    // 0x8002009C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800200A0: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x800200A4: bne         $t6, $at, L_800202F8
    if (ctx->r14 != ctx->r1) {
        // 0x800200A8: addiu       $t1, $t1, -0x3340
        ctx->r9 = ADD32(ctx->r9, -0X3340);
            goto L_800202F8;
    }
    // 0x800200A8: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x800200AC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800200B0: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x800200B4: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x800200B8: sh          $t7, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r15;
    // 0x800200BC: sb          $t8, 0x301E($at)
    MEM_B(0X301E, ctx->r1) = ctx->r24;
    // 0x800200C0: jal         0x80041770
    // 0x800200C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_23;
    // 0x800200C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_23:
    // 0x800200C8: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x800200CC: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x800200D0: addiu       $t9, $t1, 0x7FFF
    ctx->r25 = ADD32(ctx->r9, 0X7FFF);
    // 0x800200D4: lbu         $t9, 0x2DE1($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X2DE1);
    // 0x800200D8: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x800200DC: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x800200E0: b           L_800202F8
    // 0x800200E4: sb          $t3, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r11;
        goto L_800202F8;
    // 0x800200E4: sb          $t3, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r11;
L_800200E8:
    // 0x800200E8: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x800200EC: lw          $t4, 0x48D8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X48D8);
    // 0x800200F0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800200F4: bnel        $t4, $zero, L_800202FC
    if (ctx->r12 != 0) {
        // 0x800200F8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800202FC;
    }
    goto skip_9;
    // 0x800200F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_9:
    // 0x800200FC: jal         0x80034EF8
    // 0x80020100: lw          $a0, -0x3A84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A84);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_24;
    // 0x80020100: lw          $a0, -0x3A84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A84);
    after_24:
    // 0x80020104: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x80020108: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x8002010C: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x80020110: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80020114: sb          $t5, 0x301E($at)
    MEM_B(0X301E, ctx->r1) = ctx->r13;
    // 0x80020118: sh          $zero, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = 0;
    // 0x8002011C: addiu       $t6, $t1, 0x7FFF
    ctx->r14 = ADD32(ctx->r9, 0X7FFF);
    // 0x80020120: lbu         $t6, 0x2DE1($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2DE1);
    // 0x80020124: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80020128: b           L_800202F8
    // 0x8002012C: sb          $t7, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r15;
        goto L_800202F8;
    // 0x8002012C: sb          $t7, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r15;
L_80020130:
    // 0x80020130: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80020134: addiu       $a1, $a1, -0x2D60
    ctx->r5 = ADD32(ctx->r5, -0X2D60);
    // 0x80020138: jal         0x80001C00
    // 0x8002013C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_80001C00_2800(rdram, ctx);
        goto after_25;
    // 0x8002013C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_25:
    // 0x80020140: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x80020144: beq         $v1, $zero, L_80020158
    if (ctx->r3 == 0) {
        // 0x80020148: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_80020158;
    }
L_80020148:
    // 0x80020148: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8002014C: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x80020150: bne         $t8, $zero, L_80020148
    if (ctx->r24 != 0) {
        // 0x80020154: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_80020148;
    }
    // 0x80020154: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_80020158:
    // 0x80020158: jal         0x801F9230
    // 0x8002015C: nop

    func_801F9230_5B5140(rdram, ctx);
        goto after_26;
    // 0x8002015C: nop

    after_26:
    // 0x80020160: jal         0x80020364
    // 0x80020164: nop

    func_80020364_20F64(rdram, ctx);
        goto after_27;
    // 0x80020164: nop

    after_27:
    // 0x80020168: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8002016C: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x80020170: addiu       $t9, $t1, 0x7FFF
    ctx->r25 = ADD32(ctx->r9, 0X7FFF);
    // 0x80020174: lbu         $t9, 0x2DE1($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X2DE1);
    // 0x80020178: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x8002017C: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x80020180: b           L_800202F8
    // 0x80020184: sb          $t3, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r11;
        goto L_800202F8;
    // 0x80020184: sb          $t3, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r11;
L_80020188:
    // 0x80020188: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8002018C: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x80020190: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x80020194: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80020198: sb          $t4, 0x3039($at)
    MEM_B(0X3039, ctx->r1) = ctx->r12;
    // 0x8002019C: addiu       $t5, $t1, 0x7FFF
    ctx->r13 = ADD32(ctx->r9, 0X7FFF);
    // 0x800201A0: lbu         $t5, 0x302F($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X302F);
    // 0x800201A4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800201A8: addiu       $t7, $t7, 0x7FC0
    ctx->r15 = ADD32(ctx->r15, 0X7FC0);
    // 0x800201AC: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x800201B0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800201B4: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x800201B8: addiu       $t8, $t1, 0x7FFF
    ctx->r24 = ADD32(ctx->r9, 0X7FFF);
    // 0x800201BC: lw          $t8, 0x3031($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3031);
    // 0x800201C0: addiu       $t9, $t1, 0x7FFF
    ctx->r25 = ADD32(ctx->r9, 0X7FFF);
    // 0x800201C4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800201C8: lbu         $t9, 0x2DE1($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X2DE1);
    // 0x800201CC: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x800201D0: b           L_800202F8
    // 0x800201D4: sb          $t3, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r11;
        goto L_800202F8;
    // 0x800201D4: sb          $t3, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r11;
L_800201D8:
    // 0x800201D8: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x800201DC: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x800201E0: addiu       $t5, $t1, 0x7FFF
    ctx->r13 = ADD32(ctx->r9, 0X7FFF);
    // 0x800201E4: lbu         $t5, 0x3039($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X3039);
    // 0x800201E8: lhu         $t4, 0x301E($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X301E);
    // 0x800201EC: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x800201F0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x800201F4: jal         0x80013C0C
    // 0x800201F8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80013C0C_1480C(rdram, ctx);
        goto after_28;
    // 0x800201F8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_28:
    // 0x800201FC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x80020200: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x80020204: addiu       $t7, $t1, 0x7FFF
    ctx->r15 = ADD32(ctx->r9, 0X7FFF);
    // 0x80020208: lbu         $t7, 0x3039($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3039);
    // 0x8002020C: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x80020210: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80020214: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80020218: sb          $t8, 0x3039($at)
    MEM_B(0X3039, ctx->r1) = ctx->r24;
    // 0x8002021C: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x80020220: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x80020224: addiu       $t5, $t1, 0x7FFF
    ctx->r13 = ADD32(ctx->r9, 0X7FFF);
    // 0x80020228: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x8002022C: lhu         $t3, -0x4FE2($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X4FE2);
    // 0x80020230: lbu         $t5, 0x3039($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X3039);
    // 0x80020234: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80020238: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8002023C: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80020240: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x80020244: addiu       $t8, $t8, 0x7FC0
    ctx->r24 = ADD32(ctx->r24, 0X7FC0);
    // 0x80020248: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8002024C: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80020250: addiu       $t5, $t1, 0x7FFF
    ctx->r13 = ADD32(ctx->r9, 0X7FFF);
    // 0x80020254: lw          $t5, 0x3035($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3035);
    // 0x80020258: lui         $at, 0xBFFF
    ctx->r1 = S32(0XBFFF << 16);
    // 0x8002025C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80020260: and         $t3, $t9, $at
    ctx->r11 = ctx->r25 & ctx->r1;
    // 0x80020264: sltu        $at, $t3, $t5
    ctx->r1 = ctx->r11 < ctx->r13 ? 1 : 0;
    // 0x80020268: beq         $at, $zero, L_80020278
    if (ctx->r1 == 0) {
        // 0x8002026C: nop
    
            goto L_80020278;
    }
    // 0x8002026C: nop

    // 0x80020270: lhu         $t4, 0x0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X0);
    // 0x80020274: bne         $t4, $zero, L_800202F8
    if (ctx->r12 != 0) {
        // 0x80020278: lui         $a0, 0x8007
        ctx->r4 = S32(0X8007 << 16);
            goto L_800202F8;
    }
L_80020278:
    // 0x80020278: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8002027C: jal         0x800369B4
    // 0x80020280: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    func_800369B4_375B4(rdram, ctx);
        goto after_29;
    // 0x80020280: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    after_29:
    // 0x80020284: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x80020288: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x8002028C: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x80020290: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x80020294: sh          $t6, 0x2E25($at)
    MEM_H(0X2E25, ctx->r1) = ctx->r14;
    // 0x80020298: addiu       $t7, $t1, 0x7FFF
    ctx->r15 = ADD32(ctx->r9, 0X7FFF);
    // 0x8002029C: lbu         $t7, 0x2DE1($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2DE1);
    // 0x800202A0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800202A4: b           L_800202F8
    // 0x800202A8: sb          $t8, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r24;
        goto L_800202F8;
    // 0x800202A8: sb          $t8, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = ctx->r24;
L_800202AC:
    // 0x800202AC: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800202B0: jal         0x80036840
    // 0x800202B4: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    func_80036840_37440(rdram, ctx);
        goto after_30;
    // 0x800202B4: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    after_30:
    // 0x800202B8: bne         $v0, $zero, L_800202F8
    if (ctx->r2 != 0) {
        // 0x800202BC: lui         $t1, 0x800C
        ctx->r9 = S32(0X800C << 16);
            goto L_800202F8;
    }
    // 0x800202BC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x800202C0: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x800202C4: addiu       $at, $t1, 0x7FFF
    ctx->r1 = ADD32(ctx->r9, 0X7FFF);
    // 0x800202C8: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x800202CC: sh          $zero, 0x2E27($at)
    MEM_H(0X2E27, ctx->r1) = 0;
    // 0x800202D0: sh          $t9, 0x2E25($at)
    MEM_H(0X2E25, ctx->r1) = ctx->r25;
    // 0x800202D4: sb          $zero, 0x301E($at)
    MEM_B(0X301E, ctx->r1) = 0;
    // 0x800202D8: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x800202DC: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x800202E0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800202E4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800202E8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800202EC: sb          $t3, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r11;
    // 0x800202F0: jal         0x80038BC8
    // 0x800202F4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80038BC8_397C8(rdram, ctx);
        goto after_31;
    // 0x800202F4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_31:
L_800202F8:
    // 0x800202F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800202FC:
    // 0x800202FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80020300: jr          $ra
    // 0x80020304: nop

    TRACE_RETURN()
    return;
    // 0x80020304: nop

;}
RECOMP_FUNC void guNormalize(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004BF50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BF54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BF58: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004BF5C: lwc1        $f14, 0x0($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004BF60: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004BF64: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8004BF68: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8004BF6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004BF70: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8004BF74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004BF78: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8004BF7C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004BF80: jal         0x800417E0
    // 0x8004BF84: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x8004BF84: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_0:
    // 0x8004BF88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004BF8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8004BF90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004BF94: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8004BF98: div.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8004BF9C: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004BFA0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8004BFA4: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8004BFA8: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x8004BFAC: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004BFB0: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8004BFB4: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x8004BFB8: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004BFBC: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8004BFC0: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
    // 0x8004BFC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BFC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BFCC: jr          $ra
    // 0x8004BFD0: nop

    TRACE_RETURN()
    return;
    // 0x8004BFD0: nop

;}
RECOMP_FUNC void func_8003BB70_3C770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BB70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003BB74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BB78: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003BB7C: lw          $t6, 0x1728($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1728);
    // 0x8003BB80: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x8003BB84: addiu       $t1, $t1, 0xA68
    ctx->r9 = ADD32(ctx->r9, 0XA68);
    // 0x8003BB88: lbu         $t7, 0x10($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X10);
    // 0x8003BB8C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8003BB90: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003BB94: beq         $t7, $zero, L_8003BBBC
    if (ctx->r15 == 0) {
        // 0x8003BB98: nop
    
            goto L_8003BBBC;
    }
    // 0x8003BB98: nop

    // 0x8003BB9C: lbu         $t8, 0x9CC($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X9CC);
    // 0x8003BBA0: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    // 0x8003BBA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003BBA8: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8003BBAC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8003BBB0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003BBB4: jal         0x80048640
    // 0x8003BBB8: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
    alSynSetFXMix(rdram, ctx);
        goto after_0;
    // 0x8003BBB8: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
    after_0:
L_8003BBBC:
    // 0x8003BBBC: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x8003BBC0: addiu       $t0, $t0, 0x172C
    ctx->r8 = ADD32(ctx->r8, 0X172C);
    // 0x8003BBC4: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x8003BBC8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8003BBCC: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003BBD0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8003BBD4: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x8003BBD8: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x8003BBDC: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x8003BBE0: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x8003BBE4: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8003BBE8: bne         $t3, $zero, L_8003BBFC
    if (ctx->r11 != 0) {
        // 0x8003BBEC: sw          $t3, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r11;
            goto L_8003BBFC;
    }
    // 0x8003BBEC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8003BBF0: lui         $t5, 0x8007
    ctx->r13 = S32(0X8007 << 16);
    // 0x8003BBF4: lw          $t5, -0x1D44($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1D44);
    // 0x8003BBF8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
L_8003BBFC:
    // 0x8003BBFC: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    // 0x8003BC00: lw          $a1, 0x7730($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7730);
    // 0x8003BC04: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8003BC08: jal         0x80048920
    // 0x8003BC0C: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    alSynSetFXParam(rdram, ctx);
        goto after_1;
    // 0x8003BC0C: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x8003BC10: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x8003BC14: addiu       $t0, $t0, 0x172C
    ctx->r8 = ADD32(ctx->r8, 0X172C);
    // 0x8003BC18: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x8003BC1C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8003BC20: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003BC24: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8003BC28: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x8003BC2C: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x8003BC30: sll         $t7, $v1, 7
    ctx->r15 = S32(ctx->r3 << 7);
    // 0x8003BC34: bne         $t7, $zero, L_8003BC48
    if (ctx->r15 != 0) {
        // 0x8003BC38: sw          $t7, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r15;
            goto L_8003BC48;
    }
    // 0x8003BC38: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8003BC3C: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x8003BC40: lw          $t9, -0x1D40($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1D40);
    // 0x8003BC44: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
L_8003BC48:
    // 0x8003BC48: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    // 0x8003BC4C: lw          $a1, 0x7730($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7730);
    // 0x8003BC50: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8003BC54: jal         0x80048920
    // 0x8003BC58: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    alSynSetFXParam(rdram, ctx);
        goto after_2;
    // 0x8003BC58: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x8003BC5C: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x8003BC60: lw          $t1, 0x1728($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1728);
    // 0x8003BC64: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8003BC68: lui         $t2, 0x801C
    ctx->r10 = S32(0X801C << 16);
    // 0x8003BC6C: lbu         $a2, 0x10($t1)
    ctx->r6 = MEM_BU(ctx->r9, 0X10);
    // 0x8003BC70: lui         $t4, 0x801C
    ctx->r12 = S32(0X801C << 16);
    // 0x8003BC74: beql        $a2, $zero, L_8003BCA0
    if (ctx->r6 == 0) {
        // 0x8003BC78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003BCA0;
    }
    goto skip_0;
    // 0x8003BC78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003BC7C: lbu         $t2, 0x9CC($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X9CC);
    // 0x8003BC80: addiu       $t4, $t4, 0xA68
    ctx->r12 = ADD32(ctx->r12, 0XA68);
    // 0x8003BC84: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    // 0x8003BC88: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8003BC8C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8003BC90: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003BC94: jal         0x80048640
    // 0x8003BC98: addu        $a1, $t3, $t4
    ctx->r5 = ADD32(ctx->r11, ctx->r12);
    alSynSetFXMix(rdram, ctx);
        goto after_3;
    // 0x8003BC98: addu        $a1, $t3, $t4
    ctx->r5 = ADD32(ctx->r11, ctx->r12);
    after_3:
    // 0x8003BC9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003BCA0:
    // 0x8003BCA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8003BCA4: jr          $ra
    // 0x8003BCA8: nop

    TRACE_RETURN()
    return;
    // 0x8003BCA8: nop

;}
RECOMP_FUNC void func_800033B0_3FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800033B0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800033B4: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x800033B8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800033BC: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x800033C0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800033C4: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x800033C8: lbu         $t6, -0x5220($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X5220);
    // 0x800033CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800033D0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800033D4: sb          $t7, -0x5220($at)
    MEM_B(-0X5220, ctx->r1) = ctx->r15;
    // 0x800033D8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800033DC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800033E0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800033E4: jr          $ra
    // 0x800033E8: sb          $zero, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x800033E8: sb          $zero, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8001CC38_1D838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001CC38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001CC3C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8001CC40: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8001CC44: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8001CC48: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8001CC4C: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x8001CC50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001CC54: addiu       $v0, $v0, -0x49D0
    ctx->r2 = ADD32(ctx->r2, -0X49D0);
    // 0x8001CC58: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8001CC5C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8001CC60: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001CC64: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8001CC68: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8001CC6C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8001CC70: jal         0x8001CB40
    // 0x8001CC74: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_8001CB40_1D740(rdram, ctx);
        goto after_0;
    // 0x8001CC74: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x8001CC78: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001CC7C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8001CC80: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8001CC84: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8001CC88: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8001CC8C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8001CC90: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8001CC94: bc1fl       L_8001CCA8
    if (!c1cs) {
        // 0x8001CC98: lw          $v1, 0x40($t8)
        ctx->r3 = MEM_W(ctx->r24, 0X40);
            goto L_8001CCA8;
    }
    goto skip_0;
    // 0x8001CC98: lw          $v1, 0x40($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X40);
    skip_0:
    // 0x8001CC9C: b           L_8001CD40
    // 0x8001CCA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8001CD40;
    // 0x8001CCA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CCA4: lw          $v1, 0x40($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X40);
L_8001CCA8:
    // 0x8001CCA8: beql        $v1, $zero, L_8001CCB8
    if (ctx->r3 == 0) {
        // 0x8001CCAC: lh          $t9, 0x0($v0)
        ctx->r25 = MEM_H(ctx->r2, 0X0);
            goto L_8001CCB8;
    }
    goto skip_1;
    // 0x8001CCAC: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    skip_1:
    // 0x8001CCB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8001CCB4: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
L_8001CCB8:
    // 0x8001CCB8: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001CCBC: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x8001CCC0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8001CCC4: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x8001CCC8: lh          $t0, 0x8($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X8);
    // 0x8001CCCC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8001CCD0: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x8001CCD4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8001CCD8: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8001CCDC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001CCE0: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x8001CCE4: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8001CCE8: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8001CCEC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8001CCF0: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8001CCF4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8001CCF8: mul.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f2.d);
    // 0x8001CCFC: cvt.s.d     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f8.fl = CVT_S_D(ctx->f18.d);
    // 0x8001CD00: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x8001CD04: lh          $t1, 0x2($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2);
    // 0x8001CD08: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8001CD0C: lh          $t2, 0xA($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XA);
    // 0x8001CD10: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8001CD14: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x8001CD18: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8001CD1C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8001CD20: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8001CD24: mul.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8001CD28: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8001CD2C: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x8001CD30: mul.d       $f16, $f4, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x8001CD34: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x8001CD38: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x8001CD3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8001CD40:
    // 0x8001CD40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001CD44: jr          $ra
    // 0x8001CD48: nop

    TRACE_RETURN()
    return;
    // 0x8001CD48: nop

;}
