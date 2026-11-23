#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80215074_5D0544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215074: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80215078: jr          $ra
    // 0x8021507C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8021507C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8020FB5C_5CB02C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FB5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FB60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FB64: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FB68: jal         0x80013AC4
    // 0x8020FB6C: addiu       $a0, $a0, -0x298C
    ctx->r4 = ADD32(ctx->r4, -0X298C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FB6C: addiu       $a0, $a0, -0x298C
    ctx->r4 = ADD32(ctx->r4, -0X298C);
    after_0:
    // 0x8020FB70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FB74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FB78: jr          $ra
    // 0x8020FB7C: nop

    TRACE_RETURN()
    return;
    // 0x8020FB7C: nop

;}
RECOMP_FUNC void func_80210534_5CBA04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021053C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210540: jal         0x80013AC4
    // 0x80210544: addiu       $a0, $a0, -0x1EF8
    ctx->r4 = ADD32(ctx->r4, -0X1EF8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210544: addiu       $a0, $a0, -0x1EF8
    ctx->r4 = ADD32(ctx->r4, -0X1EF8);
    after_0:
    // 0x80210548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021054C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210550: jr          $ra
    // 0x80210554: nop

    TRACE_RETURN()
    return;
    // 0x80210554: nop

;}
RECOMP_FUNC void func_80215830_5D0D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215830: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80215834: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80215838: lw          $a3, -0x39F4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X39F4);
    // 0x8021583C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80215840: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80215844: lw          $t7, 0xD8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD8);
    // 0x80215848: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021584C: beq         $a3, $zero, L_80215898
    if (ctx->r7 == 0) {
        // 0x80215850: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_80215898;
    }
    // 0x80215850: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80215854: lb          $t8, 0x1E($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X1E);
    // 0x80215858: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8021585C: sb          $zero, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = 0;
    // 0x80215860: jal         0x802159A4
    // 0x80215864: andi        $a2, $t8, 0xF0
    ctx->r6 = ctx->r24 & 0XF0;
    func_802159A4_5D0E74(rdram, ctx);
        goto after_0;
    // 0x80215864: andi        $a2, $t8, 0xF0
    ctx->r6 = ctx->r24 & 0XF0;
    after_0:
    // 0x80215868: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8021586C: bne         $v0, $at, L_80215898
    if (ctx->r2 != ctx->r1) {
        // 0x80215870: lbu         $v1, 0x1B($sp)
        ctx->r3 = MEM_BU(ctx->r29, 0X1B);
            goto L_80215898;
    }
    // 0x80215870: lbu         $v1, 0x1B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1B);
    // 0x80215874: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80215878: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x8021587C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80215880: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80215884: lw          $t0, -0x39F4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39F4);
    // 0x80215888: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x8021588C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80215890: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80215894: sw          $t0, -0x76C($at)
    MEM_W(-0X76C, ctx->r1) = ctx->r8;
L_80215898:
    // 0x80215898: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8021589C: beq         $v1, $zero, L_8021598C
    if (ctx->r3 == 0) {
        // 0x802158A0: addiu       $v0, $v0, -0x3A38
        ctx->r2 = ADD32(ctx->r2, -0X3A38);
            goto L_8021598C;
    }
    // 0x802158A0: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x802158A4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x802158A8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x802158AC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802158B0: lw          $t3, 0xD0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XD0);
    // 0x802158B4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802158B8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802158BC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x802158C0: lw          $t4, 0xD4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0XD4);
    // 0x802158C4: lh          $t6, 0x24($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X24);
    // 0x802158C8: addiu       $a0, $a0, 0x54F0
    ctx->r4 = ADD32(ctx->r4, 0X54F0);
    // 0x802158CC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x802158D0: lw          $t5, 0xD8($t2)
    ctx->r13 = MEM_W(ctx->r10, 0XD8);
    // 0x802158D4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x802158D8: sh          $t6, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r14;
    // 0x802158DC: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x802158E0: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x802158E4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802158E8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x802158EC: sh          $t8, -0x501C($at)
    MEM_H(-0X501C, ctx->r1) = ctx->r24;
    // 0x802158F0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x802158F4: lh          $t0, 0x20($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X20);
    // 0x802158F8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802158FC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80215900: sh          $t0, -0x501A($at)
    MEM_H(-0X501A, ctx->r1) = ctx->r8;
    // 0x80215904: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80215908: lh          $t3, 0x22($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X22);
    // 0x8021590C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80215910: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80215914: sh          $t3, -0x5018($at)
    MEM_H(-0X5018, ctx->r1) = ctx->r11;
    // 0x80215918: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x8021591C: lh          $t2, 0x1C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1C);
    // 0x80215920: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80215924: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80215928: sh          $t2, -0x5016($at)
    MEM_H(-0X5016, ctx->r1) = ctx->r10;
    // 0x8021592C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80215930: lb          $t6, 0x1E($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1E);
    // 0x80215934: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80215938: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8021593C: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x80215940: sh          $t7, -0x5200($at)
    MEM_H(-0X5200, ctx->r1) = ctx->r15;
    // 0x80215944: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80215948: lb          $t9, 0x1F($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X1F);
    // 0x8021594C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80215950: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80215954: sh          $t9, -0x501E($at)
    MEM_H(-0X501E, ctx->r1) = ctx->r25;
    // 0x80215958: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8021595C: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x80215960: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x80215964: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80215968: sb          $zero, -0x767($at)
    MEM_B(-0X767, ctx->r1) = 0;
    // 0x8021596C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80215970: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80215974: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x80215978: lbu         $t3, -0x51D7($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X51D7);
    // 0x8021597C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80215980: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80215984: jal         0x8003521C
    // 0x80215988: sb          $t4, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r12;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80215988: sb          $t4, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r12;
    after_1:
L_8021598C:
    // 0x8021598C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80215990: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80215994: jr          $ra
    // 0x80215998: nop

    TRACE_RETURN()
    return;
    // 0x80215998: nop

    // 0x8021599C: jr          $ra
    // 0x802159A0: nop

    TRACE_RETURN()
    return;
    // 0x802159A0: nop

;}
RECOMP_FUNC void func_80216640_5D1B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216640: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80216644: jr          $ra
    // 0x80216648: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80216648: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8020EA58_5C9F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EA58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EA5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EA60: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EA64: jal         0x80013AC4
    // 0x8020EA68: addiu       $a0, $a0, -0x363C
    ctx->r4 = ADD32(ctx->r4, -0X363C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EA68: addiu       $a0, $a0, -0x363C
    ctx->r4 = ADD32(ctx->r4, -0X363C);
    after_0:
    // 0x8020EA6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EA70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EA74: jr          $ra
    // 0x8020EA78: nop

    TRACE_RETURN()
    return;
    // 0x8020EA78: nop

;}
RECOMP_FUNC void func_8020EF68_5CA438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EF68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EF6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EF70: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EF74: jal         0x80013AC4
    // 0x8020EF78: addiu       $a0, $a0, -0x323C
    ctx->r4 = ADD32(ctx->r4, -0X323C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EF78: addiu       $a0, $a0, -0x323C
    ctx->r4 = ADD32(ctx->r4, -0X323C);
    after_0:
    // 0x8020EF7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EF80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EF84: jr          $ra
    // 0x8020EF88: nop

    TRACE_RETURN()
    return;
    // 0x8020EF88: nop

;}
RECOMP_FUNC void func_80214C2C_5D00FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214C2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80214C30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80214C34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80214C38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80214C3C: jal         0x80221A90
    // 0x80214C40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80221A90_5DCF60(rdram, ctx);
        goto after_0;
    // 0x80214C40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80214C44: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x80214C48: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80214C4C: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x80214C50: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80214C54: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x80214C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214C5C: jal         0x80216E1C
    // 0x80214C60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80216E1C_5D22EC(rdram, ctx);
        goto after_1;
    // 0x80214C60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80214C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214C68: jal         0x80219E08
    // 0x80214C6C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_80219E08_5D52D8(rdram, ctx);
        goto after_2;
    // 0x80214C6C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_2:
    // 0x80214C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214C74: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x80214C78: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80214C7C: jal         0x80218DA8
    // 0x80214C80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80218DA8_5D4278(rdram, ctx);
        goto after_3;
    // 0x80214C80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x80214C84: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x80214C88: lui         $at, 0xF7FF
    ctx->r1 = S32(0XF7FF << 16);
    // 0x80214C8C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80214C90: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80214C94: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80214C98: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
    // 0x80214C9C: jal         0x8003521C
    // 0x80214CA0: addiu       $a0, $a0, 0x4C0C
    ctx->r4 = ADD32(ctx->r4, 0X4C0C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x80214CA0: addiu       $a0, $a0, 0x4C0C
    ctx->r4 = ADD32(ctx->r4, 0X4C0C);
    after_4:
    // 0x80214CA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80214CA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80214CAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80214CB0: jr          $ra
    // 0x80214CB4: nop

    TRACE_RETURN()
    return;
    // 0x80214CB4: nop

;}
RECOMP_FUNC void func_80213504_5CE9D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213504: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80213508: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021350C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80213510: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80213514: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x80213518: lui         $at, 0x280
    ctx->r1 = S32(0X280 << 16);
    // 0x8021351C: ori         $at, $at, 0x300
    ctx->r1 = ctx->r1 | 0X300;
    // 0x80213520: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80213524: addiu       $t8, $zero, 0xE1
    ctx->r24 = ADD32(0, 0XE1);
    // 0x80213528: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x8021352C: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x80213530: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80213534: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80213538: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8021353C: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x80213540: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80213544: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x80213548: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021354C: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80213550: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80213554: sub.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80213558: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8021355C: jalr        $t9
    // 0x80213560: sub.s       $f14, $f8, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f16.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80213560: sub.s       $f14, $f8, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f16.fl;
    after_0:
    // 0x80213564: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80213568: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021356C: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80213570: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x80213574: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x80213578: sb          $t0, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r8;
    // 0x8021357C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x80213580: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x80213584: swc1        $f0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f0.u32l;
    // 0x80213588: jalr        $t9
    // 0x8021358C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8021358C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_1:
    // 0x80213590: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80213594: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80213598: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x8021359C: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x802135A0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802135A4: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x802135A8: jalr        $t9
    // 0x802135AC: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802135AC: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_2:
    // 0x802135B0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802135B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802135B8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x802135BC: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x802135C0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802135C4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802135C8: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x802135CC: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    // 0x802135D0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x802135D4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x802135D8: jalr        $t9
    // 0x802135DC: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802135DC: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    after_3:
    // 0x802135E0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x802135E4: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x802135E8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802135EC: addiu       $a1, $a1, 0x3B20
    ctx->r5 = ADD32(ctx->r5, 0X3B20);
    // 0x802135F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802135F4: jalr        $t9
    // 0x802135F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802135F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x802135FC: beq         $v0, $zero, L_8021361C
    if (ctx->r2 == 0) {
        // 0x80213600: addiu       $t1, $zero, 0x60
        ctx->r9 = ADD32(0, 0X60);
            goto L_8021361C;
    }
    // 0x80213600: addiu       $t1, $zero, 0x60
    ctx->r9 = ADD32(0, 0X60);
    // 0x80213604: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x80213608: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x8021360C: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x80213610: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x80213614: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x80213618: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_8021361C:
    // 0x8021361C: lw          $t2, 0x64($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X64);
    // 0x80213620: lwc1        $f8, 0x1C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x80213624: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80213628: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x8021362C: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x80213630: sw          $t3, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r11;
    // 0x80213634: addiu       $a0, $a0, 0x3654
    ctx->r4 = ADD32(ctx->r4, 0X3654);
    // 0x80213638: jal         0x8003521C
    // 0x8021363C: swc1        $f8, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f8.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x8021363C: swc1        $f8, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f8.u32l;
    after_5:
    // 0x80213640: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80213644: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80213648: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8021364C: jr          $ra
    // 0x80213650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80213650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8020EC50_5CA120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EC50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EC54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EC58: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EC5C: jal         0x80013AC4
    // 0x8020EC60: addiu       $a0, $a0, -0x3488
    ctx->r4 = ADD32(ctx->r4, -0X3488);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EC60: addiu       $a0, $a0, -0x3488
    ctx->r4 = ADD32(ctx->r4, -0X3488);
    after_0:
    // 0x8020EC64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EC68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EC6C: jr          $ra
    // 0x8020EC70: nop

    TRACE_RETURN()
    return;
    // 0x8020EC70: nop

;}
RECOMP_FUNC void func_802228CC_5DDD9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802228CC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802228D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802228D4: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x802228D8: addiu       $t2, $zero, 0x24
    ctx->r10 = ADD32(0, 0X24);
    // 0x802228DC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
L_802228E0:
    // 0x802228E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802228E4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x802228E8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
L_802228EC:
    // 0x802228EC: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802228F0: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x802228F4: lwc1        $f14, 0xC($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0XC);
    // 0x802228F8: lwc1        $f12, 0x4($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X4);
    // 0x802228FC: mul.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80222900: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80222904: lwc1        $f10, 0x18($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X18);
    // 0x80222908: mul.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x8022290C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80222910: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80222914: mul.s       $f10, $f18, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80222918: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8022291C: add.s       $f12, $f16, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x80222920: add.s       $f12, $f10, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x80222924: bne         $v0, $t1, L_802228EC
    if (ctx->r2 != ctx->r9) {
        // 0x80222928: swc1        $f12, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->f12.u32l;
            goto L_802228EC;
    }
    // 0x80222928: swc1        $f12, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f12.u32l;
    // 0x8022292C: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x80222930: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x80222934: bne         $a3, $t2, L_802228E0
    if (ctx->r7 != ctx->r10) {
        // 0x80222938: addiu       $t0, $t0, 0xC
        ctx->r8 = ADD32(ctx->r8, 0XC);
            goto L_802228E0;
    }
    // 0x80222938: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8022293C: jr          $ra
    // 0x80222940: nop

    TRACE_RETURN()
    return;
    // 0x80222940: nop

;}
RECOMP_FUNC void func_8021C744_5D7C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C744: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x8021C748: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x8021C74C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8021C750: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8021C754: lui         $s2, 0x8016
    ctx->r18 = S32(0X8016 << 16);
    // 0x8021C758: addiu       $s2, $s2, -0x33D0
    ctx->r18 = ADD32(ctx->r18, -0X33D0);
    // 0x8021C75C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8021C760: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8021C764: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8021C768: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8021C76C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8021C770: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x8021C774: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x8021C778: sh          $zero, 0x134($s2)
    MEM_H(0X134, ctx->r18) = 0;
    // 0x8021C77C: swc1        $f20, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f20.u32l;
    // 0x8021C780: swc1        $f20, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f20.u32l;
    // 0x8021C784: swc1        $f20, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f20.u32l;
    // 0x8021C788: swc1        $f20, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f20.u32l;
    // 0x8021C78C: swc1        $f20, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f20.u32l;
    // 0x8021C790: swc1        $f20, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f20.u32l;
    // 0x8021C794: swc1        $f20, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->f20.u32l;
    // 0x8021C798: swc1        $f20, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->f20.u32l;
    // 0x8021C79C: swc1        $f20, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f20.u32l;
    // 0x8021C7A0: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x8021C7A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8021C7A8: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8021C7AC: swc1        $f4, 0x68($s2)
    MEM_W(0X68, ctx->r18) = ctx->f4.u32l;
    // 0x8021C7B0: lwc1        $f6, 0x7C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x8021C7B4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8021C7B8: addiu       $s0, $s0, -0x7B9C
    ctx->r16 = ADD32(ctx->r16, -0X7B9C);
    // 0x8021C7BC: swc1        $f6, 0x6C($s2)
    MEM_W(0X6C, ctx->r18) = ctx->f6.u32l;
    // 0x8021C7C0: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    // 0x8021C7C4: swc1        $f8, 0x70($s2)
    MEM_W(0X70, ctx->r18) = ctx->f8.u32l;
    // 0x8021C7C8: lw          $t6, -0x709C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X709C);
    // 0x8021C7CC: bnel        $t6, $zero, L_8021C7E0
    if (ctx->r14 != 0) {
        // 0x8021C7D0: lw          $s3, 0x18($s1)
        ctx->r19 = MEM_W(ctx->r17, 0X18);
            goto L_8021C7E0;
    }
    goto skip_0;
    // 0x8021C7D0: lw          $s3, 0x18($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X18);
    skip_0:
    // 0x8021C7D4: b           L_8021D580
    // 0x8021C7D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021D580;
    // 0x8021C7D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021C7DC: lw          $s3, 0x18($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X18);
L_8021C7E0:
    // 0x8021C7E0: lui         $t7, 0x8024
    ctx->r15 = S32(0X8024 << 16);
    // 0x8021C7E4: beql        $s3, $zero, L_8021D580
    if (ctx->r19 == 0) {
        // 0x8021C7E8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8021D580;
    }
    goto skip_1;
    // 0x8021C7E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x8021C7EC: lhu         $t7, -0x7B9C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X7B9C);
    // 0x8021C7F0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021C7F4: addiu       $s4, $zero, 0x7FFF
    ctx->r20 = ADD32(0, 0X7FFF);
    // 0x8021C7F8: beql        $t7, $zero, L_8021D538
    if (ctx->r15 == 0) {
        // 0x8021C7FC: lw          $t3, 0x60($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X60);
            goto L_8021D538;
    }
    goto skip_2;
    // 0x8021C7FC: lw          $t3, 0x60($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X60);
    skip_2:
    // 0x8021C800: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8021C804: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8021C808: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8021C80C: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8021C810: lhu         $t8, 0x136($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X136);
L_8021C814:
    // 0x8021C814: slti        $at, $v1, 0x81
    ctx->r1 = SIGNED(ctx->r3) < 0X81 ? 1 : 0;
    // 0x8021C818: and         $t9, $t8, $v1
    ctx->r25 = ctx->r24 & ctx->r3;
    // 0x8021C81C: beql        $t9, $zero, L_8021D528
    if (ctx->r25 == 0) {
        // 0x8021C820: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_8021D528;
    }
    goto skip_3;
    // 0x8021C820: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    skip_3:
    // 0x8021C824: bne         $at, $zero, L_8021C850
    if (ctx->r1 != 0) {
        // 0x8021C828: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8021C850;
    }
    // 0x8021C828: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8021C82C: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x8021C830: beq         $v1, $at, L_8021CC34
    if (ctx->r3 == ctx->r1) {
        // 0x8021C834: addiu       $at, $zero, 0x200
        ctx->r1 = ADD32(0, 0X200);
            goto L_8021CC34;
    }
    // 0x8021C834: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x8021C838: beq         $v1, $at, L_8021CCA8
    if (ctx->r3 == ctx->r1) {
        // 0x8021C83C: addiu       $at, $zero, 0x400
        ctx->r1 = ADD32(0, 0X400);
            goto L_8021CCA8;
    }
    // 0x8021C83C: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x8021C840: beql        $v1, $at, L_8021CD1C
    if (ctx->r3 == ctx->r1) {
        // 0x8021C844: swc1        $f20, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
            goto L_8021CD1C;
    }
    goto skip_4;
    // 0x8021C844: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    skip_4:
    // 0x8021C848: b           L_8021CE68
    // 0x8021C84C: lw          $t1, 0x64($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X64);
        goto L_8021CE68;
    // 0x8021C84C: lw          $t1, 0x64($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X64);
L_8021C850:
    // 0x8021C850: slti        $at, $v0, 0x41
    ctx->r1 = SIGNED(ctx->r2) < 0X41 ? 1 : 0;
    // 0x8021C854: bne         $at, $zero, L_8021C86C
    if (ctx->r1 != 0) {
        // 0x8021C858: addiu       $at, $zero, 0x80
        ctx->r1 = ADD32(0, 0X80);
            goto L_8021C86C;
    }
    // 0x8021C858: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x8021C85C: beql        $v0, $at, L_8021CBC4
    if (ctx->r2 == ctx->r1) {
        // 0x8021C860: lbu         $t8, 0x99($s1)
        ctx->r24 = MEM_BU(ctx->r17, 0X99);
            goto L_8021CBC4;
    }
    goto skip_5;
    // 0x8021C860: lbu         $t8, 0x99($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X99);
    skip_5:
    // 0x8021C864: b           L_8021CE68
    // 0x8021C868: lw          $t1, 0x64($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X64);
        goto L_8021CE68;
    // 0x8021C868: lw          $t1, 0x64($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X64);
L_8021C86C:
    // 0x8021C86C: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8021C870: bne         $at, $zero, L_8021C88C
    if (ctx->r1 != 0) {
        // 0x8021C874: addiu       $t0, $v0, -0x1
        ctx->r8 = ADD32(ctx->r2, -0X1);
            goto L_8021C88C;
    }
    // 0x8021C874: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x8021C878: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x8021C87C: beql        $v0, $at, L_8021CB4C
    if (ctx->r2 == ctx->r1) {
        // 0x8021C880: lbu         $t5, 0x99($s1)
        ctx->r13 = MEM_BU(ctx->r17, 0X99);
            goto L_8021CB4C;
    }
    goto skip_6;
    // 0x8021C880: lbu         $t5, 0x99($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X99);
    skip_6:
    // 0x8021C884: b           L_8021CE68
    // 0x8021C888: lw          $t1, 0x64($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X64);
        goto L_8021CE68;
    // 0x8021C888: lw          $t1, 0x64($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X64);
L_8021C88C:
    // 0x8021C88C: sltiu       $at, $t0, 0x20
    ctx->r1 = ctx->r8 < 0X20 ? 1 : 0;
    // 0x8021C890: beq         $at, $zero, L_8021CE64
    if (ctx->r1 == 0) {
        // 0x8021C894: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_8021CE64;
    }
    // 0x8021C894: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8021C898: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021C89C: addu        $at, $at, $t0
    gpr jr_addend_8021C8A4 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8021C8A0: lw          $t0, -0x5948($at)
    ctx->r8 = ADD32(ctx->r1, -0X5948);
    // 0x8021C8A4: jr          $t0
    // 0x8021C8A8: nop

    switch (jr_addend_8021C8A4 >> 2) {
        case 0: goto L_8021C8AC; break;
        case 1: goto L_8021C930; break;
        case 2: goto L_8021CE64; break;
        case 3: goto L_8021C998; break;
        case 4: goto L_8021CE64; break;
        case 5: goto L_8021CE64; break;
        case 6: goto L_8021CE64; break;
        case 7: goto L_8021C9FC; break;
        case 8: goto L_8021CE64; break;
        case 9: goto L_8021CE64; break;
        case 10: goto L_8021CE64; break;
        case 11: goto L_8021CE64; break;
        case 12: goto L_8021CE64; break;
        case 13: goto L_8021CE64; break;
        case 14: goto L_8021CE64; break;
        case 15: goto L_8021CA64; break;
        case 16: goto L_8021CE64; break;
        case 17: goto L_8021CE64; break;
        case 18: goto L_8021CE64; break;
        case 19: goto L_8021CE64; break;
        case 20: goto L_8021CE64; break;
        case 21: goto L_8021CE64; break;
        case 22: goto L_8021CE64; break;
        case 23: goto L_8021CE64; break;
        case 24: goto L_8021CE64; break;
        case 25: goto L_8021CE64; break;
        case 26: goto L_8021CE64; break;
        case 27: goto L_8021CE64; break;
        case 28: goto L_8021CE64; break;
        case 29: goto L_8021CE64; break;
        case 30: goto L_8021CE64; break;
        case 31: goto L_8021CAD0; break;
        default: switch_error(__func__, 0x8021C8A4, 0x8023A6B8);
    }
    // 0x8021C8A8: nop

L_8021C8AC:
    // 0x8021C8AC: lw          $t1, 0x60($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X60);
    // 0x8021C8B0: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x8021C8B4: bgezl       $t2, L_8021C8F0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8021C8B8: lwc1        $f4, 0x7C($s1)
        ctx->f4.u32l = MEM_W(ctx->r17, 0X7C);
            goto L_8021C8F0;
    }
    goto skip_7;
    // 0x8021C8B8: lwc1        $f4, 0x7C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X7C);
    skip_7:
    // 0x8021C8BC: lwc1        $f10, 0x8($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8021C8C0: lwc1        $f16, 0x5C($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X5C);
    // 0x8021C8C4: lwc1        $f4, 0xC($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0XC);
    // 0x8021C8C8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8021C8CC: lwc1        $f10, 0x10($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X10);
    // 0x8021C8D0: swc1        $f18, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f18.u32l;
    // 0x8021C8D4: lwc1        $f6, 0x60($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X60);
    // 0x8021C8D8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021C8DC: swc1        $f8, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->f8.u32l;
    // 0x8021C8E0: lwc1        $f16, 0x64($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X64);
    // 0x8021C8E4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8021C8E8: swc1        $f18, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->f18.u32l;
    // 0x8021C8EC: lwc1        $f4, 0x7C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X7C);
L_8021C8F0:
    // 0x8021C8F0: c.le.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl <= ctx->f4.fl;
    // 0x8021C8F4: nop

    // 0x8021C8F8: bc1fl       L_8021C90C
    if (!c1cs) {
        // 0x8021C8FC: swc1        $f20, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
            goto L_8021C90C;
    }
    goto skip_8;
    // 0x8021C8FC: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    skip_8:
    // 0x8021C900: b           L_8021D528
    // 0x8021C904: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
        goto L_8021D528;
    // 0x8021C904: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8021C908: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
L_8021C90C:
    // 0x8021C90C: lb          $t3, 0x9B($s1)
    ctx->r11 = MEM_B(ctx->r17, 0X9B);
    // 0x8021C910: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x8021C914: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x8021C918: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x8021C91C: swc1        $f22, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f22.u32l;
    // 0x8021C920: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
    // 0x8021C924: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021C928: b           L_8021CE64
    // 0x8021C92C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
        goto L_8021CE64;
    // 0x8021C92C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
L_8021C930:
    // 0x8021C930: lwc1        $f10, 0x7C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x8021C934: c.le.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl <= ctx->f10.fl;
    // 0x8021C938: nop

    // 0x8021C93C: bc1fl       L_8021C950
    if (!c1cs) {
        // 0x8021C940: swc1        $f20, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
            goto L_8021C950;
    }
    goto skip_9;
    // 0x8021C940: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    skip_9:
    // 0x8021C944: b           L_8021D528
    // 0x8021C948: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
        goto L_8021D528;
    // 0x8021C948: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8021C94C: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
L_8021C950:
    // 0x8021C950: lb          $t4, 0x9B($s1)
    ctx->r12 = MEM_B(ctx->r17, 0X9B);
    // 0x8021C954: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021C958: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8021C95C: nop

    // 0x8021C960: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8021C964: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x8021C968: lbu         $t5, 0x9A($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X9A);
    // 0x8021C96C: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8021C970: bgez        $t5, L_8021C984
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8021C974: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021C984;
    }
    // 0x8021C974: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021C978: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021C97C: nop

    // 0x8021C980: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8021C984:
    // 0x8021C984: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x8021C988: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x8021C98C: swc1        $f22, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f22.u32l;
    // 0x8021C990: b           L_8021CE64
    // 0x8021C994: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
        goto L_8021CE64;
    // 0x8021C994: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
L_8021C998:
    // 0x8021C998: lwc1        $f10, 0x7C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x8021C99C: c.le.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl <= ctx->f10.fl;
    // 0x8021C9A0: nop

    // 0x8021C9A4: bc1fl       L_8021C9B8
    if (!c1cs) {
        // 0x8021C9A8: lbu         $t6, 0x99($s1)
        ctx->r14 = MEM_BU(ctx->r17, 0X99);
            goto L_8021C9B8;
    }
    goto skip_10;
    // 0x8021C9A8: lbu         $t6, 0x99($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X99);
    skip_10:
    // 0x8021C9AC: b           L_8021D528
    // 0x8021C9B0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
        goto L_8021D528;
    // 0x8021C9B0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8021C9B4: lbu         $t6, 0x99($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X99);
L_8021C9B8:
    // 0x8021C9B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021C9BC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8021C9C0: bgez        $t6, L_8021C9D4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021C9C4: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8021C9D4;
    }
    // 0x8021C9C4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8021C9C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021C9CC: nop

    // 0x8021C9D0: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_8021C9D4:
    // 0x8021C9D4: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x8021C9D8: lb          $t7, 0x9B($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X9B);
    // 0x8021C9DC: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x8021C9E0: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x8021C9E4: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8021C9E8: swc1        $f22, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f22.u32l;
    // 0x8021C9EC: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
    // 0x8021C9F0: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021C9F4: b           L_8021CE64
    // 0x8021C9F8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
        goto L_8021CE64;
    // 0x8021C9F8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
L_8021C9FC:
    // 0x8021C9FC: lwc1        $f10, 0x7C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x8021CA00: c.le.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl <= ctx->f10.fl;
    // 0x8021CA04: nop

    // 0x8021CA08: bc1fl       L_8021CA1C
    if (!c1cs) {
        // 0x8021CA0C: lbu         $t8, 0x99($s1)
        ctx->r24 = MEM_BU(ctx->r17, 0X99);
            goto L_8021CA1C;
    }
    goto skip_11;
    // 0x8021CA0C: lbu         $t8, 0x99($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X99);
    skip_11:
    // 0x8021CA10: b           L_8021D528
    // 0x8021CA14: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
        goto L_8021D528;
    // 0x8021CA14: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8021CA18: lbu         $t8, 0x99($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X99);
L_8021CA1C:
    // 0x8021CA1C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021CA20: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8021CA24: bgez        $t8, L_8021CA38
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8021CA28: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8021CA38;
    }
    // 0x8021CA28: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8021CA2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021CA30: nop

    // 0x8021CA34: add.s       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f18.fl;
L_8021CA38:
    // 0x8021CA38: neg.s       $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = -ctx->f4.fl;
    // 0x8021CA3C: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x8021CA40: lb          $t9, 0x9B($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X9B);
    // 0x8021CA44: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x8021CA48: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x8021CA4C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8021CA50: swc1        $f22, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f22.u32l;
    // 0x8021CA54: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
    // 0x8021CA58: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021CA5C: b           L_8021CE64
    // 0x8021CA60: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
        goto L_8021CE64;
    // 0x8021CA60: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
L_8021CA64:
    // 0x8021CA64: lwc1        $f16, 0x7C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x8021CA68: c.le.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl <= ctx->f16.fl;
    // 0x8021CA6C: nop

    // 0x8021CA70: bc1fl       L_8021CA84
    if (!c1cs) {
        // 0x8021CA74: swc1        $f20, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
            goto L_8021CA84;
    }
    goto skip_12;
    // 0x8021CA74: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    skip_12:
    // 0x8021CA78: b           L_8021D528
    // 0x8021CA7C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
        goto L_8021D528;
    // 0x8021CA7C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8021CA80: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
L_8021CA84:
    // 0x8021CA84: lb          $t0, 0x9B($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X9B);
    // 0x8021CA88: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021CA8C: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x8021CA90: nop

    // 0x8021CA94: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8021CA98: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x8021CA9C: lbu         $t1, 0x9A($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X9A);
    // 0x8021CAA0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8021CAA4: bgez        $t1, L_8021CAB8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8021CAA8: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8021CAB8;
    }
    // 0x8021CAA8: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021CAAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021CAB0: nop

    // 0x8021CAB4: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_8021CAB8:
    // 0x8021CAB8: neg.s       $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = -ctx->f6.fl;
    // 0x8021CABC: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x8021CAC0: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x8021CAC4: swc1        $f22, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f22.u32l;
    // 0x8021CAC8: b           L_8021CE64
    // 0x8021CACC: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
        goto L_8021CE64;
    // 0x8021CACC: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
L_8021CAD0:
    // 0x8021CAD0: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    // 0x8021CAD4: lbu         $t3, 0x98($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X98);
    // 0x8021CAD8: lb          $t2, 0x9B($s1)
    ctx->r10 = MEM_B(ctx->r17, 0X9B);
    // 0x8021CADC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021CAE0: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x8021CAE4: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8021CAE8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021CAEC: bgez        $t3, L_8021CB00
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8021CAF0: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_8021CB00;
    }
    // 0x8021CAF0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8021CAF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021CAF8: nop

    // 0x8021CAFC: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_8021CB00:
    // 0x8021CB00: div.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f24.fl);
    // 0x8021CB04: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021CB08: add.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8021CB0C: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x8021CB10: lbu         $t4, 0x9A($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X9A);
    // 0x8021CB14: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8021CB18: bgez        $t4, L_8021CB2C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8021CB1C: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8021CB2C;
    }
    // 0x8021CB1C: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021CB20: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021CB24: nop

    // 0x8021CB28: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_8021CB2C:
    // 0x8021CB2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021CB30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021CB34: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x8021CB38: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x8021CB3C: swc1        $f20, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f20.u32l;
    // 0x8021CB40: b           L_8021CE64
    // 0x8021CB44: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
        goto L_8021CE64;
    // 0x8021CB44: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x8021CB48: lbu         $t5, 0x99($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X99);
L_8021CB4C:
    // 0x8021CB4C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021CB50: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8021CB54: bgez        $t5, L_8021CB68
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8021CB58: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8021CB68;
    }
    // 0x8021CB58: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8021CB5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021CB60: nop

    // 0x8021CB64: add.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f8.fl;
L_8021CB68:
    // 0x8021CB68: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x8021CB6C: lbu         $t7, 0x98($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X98);
    // 0x8021CB70: lb          $t6, 0x9B($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X9B);
    // 0x8021CB74: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021CB78: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8021CB7C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8021CB80: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021CB84: bgez        $t7, L_8021CB98
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8021CB88: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8021CB98;
    }
    // 0x8021CB88: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021CB8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021CB90: nop

    // 0x8021CB94: add.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f8.fl;
L_8021CB98:
    // 0x8021CB98: div.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f24.fl);
    // 0x8021CB9C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021CBA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021CBA4: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x8021CBA8: swc1        $f20, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f20.u32l;
    // 0x8021CBAC: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
    // 0x8021CBB0: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x8021CBB4: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8021CBB8: b           L_8021CE64
    // 0x8021CBBC: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
        goto L_8021CE64;
    // 0x8021CBBC: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x8021CBC0: lbu         $t8, 0x99($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X99);
L_8021CBC4:
    // 0x8021CBC4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021CBC8: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8021CBCC: bgez        $t8, L_8021CBE0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8021CBD0: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8021CBE0;
    }
    // 0x8021CBD0: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021CBD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021CBD8: nop

    // 0x8021CBDC: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_8021CBE0:
    // 0x8021CBE0: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x8021CBE4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021CBE8: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x8021CBEC: lbu         $t0, 0x98($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X98);
    // 0x8021CBF0: lb          $t9, 0x9B($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X9B);
    // 0x8021CBF4: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8021CBF8: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8021CBFC: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021CC00: bgez        $t0, L_8021CC14
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8021CC04: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8021CC14;
    }
    // 0x8021CC04: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021CC08: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021CC0C: nop

    // 0x8021CC10: add.s       $f6, $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f16.fl;
L_8021CC14:
    // 0x8021CC14: div.s       $f18, $f6, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f24.fl);
    // 0x8021CC18: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x8021CC1C: swc1        $f22, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f22.u32l;
    // 0x8021CC20: swc1        $f20, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f20.u32l;
    // 0x8021CC24: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
    // 0x8021CC28: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x8021CC2C: b           L_8021CE64
    // 0x8021CC30: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
        goto L_8021CE64;
    // 0x8021CC30: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
L_8021CC34:
    // 0x8021CC34: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    // 0x8021CC38: lbu         $t2, 0x98($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X98);
    // 0x8021CC3C: lb          $t1, 0x9B($s1)
    ctx->r9 = MEM_B(ctx->r17, 0X9B);
    // 0x8021CC40: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021CC44: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8021CC48: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8021CC4C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021CC50: bgez        $t2, L_8021CC64
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8021CC54: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8021CC64;
    }
    // 0x8021CC54: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021CC58: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021CC5C: nop

    // 0x8021CC60: add.s       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f18.fl;
L_8021CC64:
    // 0x8021CC64: div.s       $f10, $f4, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f24.fl);
    // 0x8021CC68: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021CC6C: add.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8021CC70: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x8021CC74: lbu         $t3, 0x9A($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X9A);
    // 0x8021CC78: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x8021CC7C: bgez        $t3, L_8021CC90
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8021CC80: cvt.s.w     $f18, $f6
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8021CC90;
    }
    // 0x8021CC80: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021CC84: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021CC88: nop

    // 0x8021CC8C: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_8021CC90:
    // 0x8021CC90: neg.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = -ctx->f18.fl;
    // 0x8021CC94: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x8021CC98: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x8021CC9C: swc1        $f20, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f20.u32l;
    // 0x8021CCA0: b           L_8021CE64
    // 0x8021CCA4: swc1        $f22, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f22.u32l;
        goto L_8021CE64;
    // 0x8021CCA4: swc1        $f22, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f22.u32l;
L_8021CCA8:
    // 0x8021CCA8: lwc1        $f10, 0x7C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x8021CCAC: c.le.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl <= ctx->f20.fl;
    // 0x8021CCB0: nop

    // 0x8021CCB4: bc1fl       L_8021CCC8
    if (!c1cs) {
        // 0x8021CCB8: swc1        $f20, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
            goto L_8021CCC8;
    }
    goto skip_13;
    // 0x8021CCB8: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    skip_13:
    // 0x8021CCBC: b           L_8021D528
    // 0x8021CCC0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
        goto L_8021D528;
    // 0x8021CCC0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8021CCC4: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
L_8021CCC8:
    // 0x8021CCC8: lbu         $t5, 0x98($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X98);
    // 0x8021CCCC: lb          $t4, 0x9B($s1)
    ctx->r12 = MEM_B(ctx->r17, 0X9B);
    // 0x8021CCD0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021CCD4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8021CCD8: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8021CCDC: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021CCE0: bgez        $t5, L_8021CCF4
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8021CCE4: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8021CCF4;
    }
    // 0x8021CCE4: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021CCE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021CCEC: nop

    // 0x8021CCF0: add.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f16.fl;
L_8021CCF4:
    // 0x8021CCF4: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8021CCF8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021CCFC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021CD00: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x8021CD04: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x8021CD08: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x8021CD0C: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
    // 0x8021CD10: b           L_8021CE64
    // 0x8021CD14: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
        goto L_8021CE64;
    // 0x8021CD14: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x8021CD18: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
L_8021CD1C:
    // 0x8021CD1C: lb          $t6, 0x9B($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X9B);
    // 0x8021CD20: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x8021CD24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8021CD28: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8021CD2C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021CD30: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021CD34: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x8021CD38: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021CD3C: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x8021CD40: lwc1        $f6, 0x78($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X78);
    // 0x8021CD44: cvt.w.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8021CD48: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x8021CD4C: nop

    // 0x8021CD50: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x8021CD54: beql        $a0, $zero, L_8021CDA4
    if (ctx->r4 == 0) {
        // 0x8021CD58: mfc1        $a0, $f18
        ctx->r4 = (int32_t)ctx->f18.u32l;
            goto L_8021CDA4;
    }
    goto skip_14;
    // 0x8021CD58: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    skip_14:
    // 0x8021CD5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021CD60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8021CD64: sub.s       $f18, $f6, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x8021CD68: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x8021CD6C: nop

    // 0x8021CD70: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8021CD74: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x8021CD78: nop

    // 0x8021CD7C: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x8021CD80: bne         $a0, $zero, L_8021CD98
    if (ctx->r4 != 0) {
        // 0x8021CD84: nop
    
            goto L_8021CD98;
    }
    // 0x8021CD84: nop

    // 0x8021CD88: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x8021CD8C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021CD90: b           L_8021CDB0
    // 0x8021CD94: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_8021CDB0;
    // 0x8021CD94: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_8021CD98:
    // 0x8021CD98: b           L_8021CDB0
    // 0x8021CD9C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_8021CDB0;
    // 0x8021CD9C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8021CDA0: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
L_8021CDA4:
    // 0x8021CDA4: nop

    // 0x8021CDA8: bltz        $a0, L_8021CD98
    if (SIGNED(ctx->r4) < 0) {
        // 0x8021CDAC: nop
    
            goto L_8021CD98;
    }
    // 0x8021CDAC: nop

L_8021CDB0:
    // 0x8021CDB0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021CDB4: andi        $t8, $a0, 0xFFFF
    ctx->r24 = ctx->r4 & 0XFFFF;
    // 0x8021CDB8: jal         0x80003E10
    // 0x8021CDBC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80003E10_4A10(rdram, ctx);
        goto after_0;
    // 0x8021CDBC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
    // 0x8021CDC0: mul.s       $f10, $f0, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x8021CDC4: swc1        $f22, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f22.u32l;
    // 0x8021CDC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8021CDCC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021CDD0: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    // 0x8021CDD4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021CDD8: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x8021CDDC: lwc1        $f8, 0x7C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x8021CDE0: cvt.w.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8021CDE4: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x8021CDE8: nop

    // 0x8021CDEC: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x8021CDF0: beql        $a0, $zero, L_8021CE40
    if (ctx->r4 == 0) {
        // 0x8021CDF4: mfc1        $a0, $f4
        ctx->r4 = (int32_t)ctx->f4.u32l;
            goto L_8021CE40;
    }
    goto skip_15;
    // 0x8021CDF4: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    skip_15:
    // 0x8021CDF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021CDFC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8021CE00: sub.s       $f4, $f8, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8021CE04: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x8021CE08: nop

    // 0x8021CE0C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8021CE10: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x8021CE14: nop

    // 0x8021CE18: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x8021CE1C: bne         $a0, $zero, L_8021CE34
    if (ctx->r4 != 0) {
        // 0x8021CE20: nop
    
            goto L_8021CE34;
    }
    // 0x8021CE20: nop

    // 0x8021CE24: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x8021CE28: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021CE2C: b           L_8021CE4C
    // 0x8021CE30: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_8021CE4C;
    // 0x8021CE30: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_8021CE34:
    // 0x8021CE34: b           L_8021CE4C
    // 0x8021CE38: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_8021CE4C;
    // 0x8021CE38: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8021CE3C: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
L_8021CE40:
    // 0x8021CE40: nop

    // 0x8021CE44: bltz        $a0, L_8021CE34
    if (SIGNED(ctx->r4) < 0) {
        // 0x8021CE48: nop
    
            goto L_8021CE34;
    }
    // 0x8021CE48: nop

L_8021CE4C:
    // 0x8021CE4C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021CE50: andi        $t0, $a0, 0xFFFF
    ctx->r8 = ctx->r4 & 0XFFFF;
    // 0x8021CE54: jal         0x80003EA0
    // 0x8021CE58: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_1;
    // 0x8021CE58: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x8021CE5C: mul.s       $f16, $f0, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x8021CE60: swc1        $f16, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f16.u32l;
L_8021CE64:
    // 0x8021CE64: lw          $t1, 0x64($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X64);
L_8021CE68:
    // 0x8021CE68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8021CE6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021CE70: andi        $t2, $t1, 0x400
    ctx->r10 = ctx->r9 & 0X400;
    // 0x8021CE74: beq         $t2, $zero, L_8021CECC
    if (ctx->r10 == 0) {
        // 0x8021CE78: addiu       $a3, $s0, 0x4
        ctx->r7 = ADD32(ctx->r16, 0X4);
            goto L_8021CECC;
    }
    // 0x8021CE78: addiu       $a3, $s0, 0x4
    ctx->r7 = ADD32(ctx->r16, 0X4);
    // 0x8021CE7C: lhu         $a0, 0x14($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X14);
    // 0x8021CE80: lhu         $a1, 0x16($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X16);
    // 0x8021CE84: addiu       $t3, $s0, 0x8
    ctx->r11 = ADD32(ctx->r16, 0X8);
    // 0x8021CE88: addiu       $t4, $s0, 0xC
    ctx->r12 = ADD32(ctx->r16, 0XC);
    // 0x8021CE8C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8021CE90: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8021CE94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021CE98: jal         0x80033898
    // 0x8021CE9C: addiu       $a3, $s0, 0x4
    ctx->r7 = ADD32(ctx->r16, 0X4);
    func_80033898_34498(rdram, ctx);
        goto after_2;
    // 0x8021CE9C: addiu       $a3, $s0, 0x4
    ctx->r7 = ADD32(ctx->r16, 0X4);
    after_2:
    // 0x8021CEA0: lhu         $a0, 0x14($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X14);
    // 0x8021CEA4: lhu         $a1, 0x16($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X16);
    // 0x8021CEA8: addiu       $t5, $sp, 0xC0
    ctx->r13 = ADD32(ctx->r29, 0XC0);
    // 0x8021CEAC: addiu       $t6, $sp, 0xBC
    ctx->r14 = ADD32(ctx->r29, 0XBC);
    // 0x8021CEB0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8021CEB4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8021CEB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021CEBC: jal         0x80033898
    // 0x8021CEC0: addiu       $a3, $sp, 0xC4
    ctx->r7 = ADD32(ctx->r29, 0XC4);
    func_80033898_34498(rdram, ctx);
        goto after_3;
    // 0x8021CEC0: addiu       $a3, $sp, 0xC4
    ctx->r7 = ADD32(ctx->r29, 0XC4);
    after_3:
    // 0x8021CEC4: b           L_8021CF0C
    // 0x8021CEC8: lw          $t1, 0x60($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X60);
        goto L_8021CF0C;
    // 0x8021CEC8: lw          $t1, 0x60($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X60);
L_8021CECC:
    // 0x8021CECC: lhu         $a1, 0x16($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X16);
    // 0x8021CED0: addiu       $t7, $s0, 0x8
    ctx->r15 = ADD32(ctx->r16, 0X8);
    // 0x8021CED4: addiu       $t8, $s0, 0xC
    ctx->r24 = ADD32(ctx->r16, 0XC);
    // 0x8021CED8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8021CEDC: jal         0x80033898
    // 0x8021CEE0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80033898_34498(rdram, ctx);
        goto after_4;
    // 0x8021CEE0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_4:
    // 0x8021CEE4: lhu         $a1, 0x16($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X16);
    // 0x8021CEE8: addiu       $t9, $sp, 0xC0
    ctx->r25 = ADD32(ctx->r29, 0XC0);
    // 0x8021CEEC: addiu       $t0, $sp, 0xBC
    ctx->r8 = ADD32(ctx->r29, 0XBC);
    // 0x8021CEF0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8021CEF4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8021CEF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8021CEFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021CF00: jal         0x80033898
    // 0x8021CF04: addiu       $a3, $sp, 0xC4
    ctx->r7 = ADD32(ctx->r29, 0XC4);
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x8021CF04: addiu       $a3, $sp, 0xC4
    ctx->r7 = ADD32(ctx->r29, 0XC4);
    after_5:
    // 0x8021CF08: lw          $t1, 0x60($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X60);
L_8021CF0C:
    // 0x8021CF0C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x8021CF10: sll         $t2, $t1, 5
    ctx->r10 = S32(ctx->r9 << 5);
    // 0x8021CF14: bgezl       $t2, L_8021D228
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8021CF18: lwc1        $f8, 0x8($s3)
        ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
            goto L_8021D228;
    }
    goto skip_16;
    // 0x8021CF18: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    skip_16:
    // 0x8021CF1C: lwc1        $f6, 0x8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8021CF20: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8021CF24: lwc1        $f8, 0xC($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0XC);
    // 0x8021CF28: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8021CF2C: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8021CF30: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8021CF34: lwc1        $f6, 0x10($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X10);
    // 0x8021CF38: add.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8021CF3C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8021CF40: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x8021CF44: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8021CF48: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8021CF4C: lwc1        $f16, 0xBC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8021CF50: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8021CF54: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8021CF58: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x8021CF5C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8021CF60: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8021CF64: jal         0x8002A458
    // 0x8021CF68: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8002A458_2B058(rdram, ctx);
        goto after_6;
    // 0x8021CF68: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x8021CF6C: lh          $t3, 0xAC($sp)
    ctx->r11 = MEM_H(ctx->r29, 0XAC);
    // 0x8021CF70: bnel        $t3, $s4, L_8021D528
    if (ctx->r11 != ctx->r20) {
        // 0x8021CF74: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_8021D528;
    }
    goto skip_17;
    // 0x8021CF74: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    skip_17:
    // 0x8021CF78: lw          $t4, 0x64($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X64);
    // 0x8021CF7C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x8021CF80: andi        $t5, $t4, 0x20
    ctx->r13 = ctx->r12 & 0X20;
    // 0x8021CF84: beql        $t5, $zero, L_8021CFC0
    if (ctx->r13 == 0) {
        // 0x8021CF88: lhu         $t9, 0x0($s0)
        ctx->r25 = MEM_HU(ctx->r16, 0X0);
            goto L_8021CFC0;
    }
    goto skip_18;
    // 0x8021CF88: lhu         $t9, 0x0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X0);
    skip_18:
    // 0x8021CF8C: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x8021CF90: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8021CF94: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8021CF98: beql        $t7, $zero, L_8021CFC0
    if (ctx->r15 == 0) {
        // 0x8021CF9C: lhu         $t9, 0x0($s0)
        ctx->r25 = MEM_HU(ctx->r16, 0X0);
            goto L_8021CFC0;
    }
    goto skip_19;
    // 0x8021CF9C: lhu         $t9, 0x0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X0);
    skip_19:
    // 0x8021CFA0: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8021CFA4: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8021CFA8: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8021CFAC: sw          $t8, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->r24;
    // 0x8021CFB0: swc1        $f6, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->f6.u32l;
    // 0x8021CFB4: swc1        $f18, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->f18.u32l;
    // 0x8021CFB8: swc1        $f10, 0x58($s2)
    MEM_W(0X58, ctx->r18) = ctx->f10.u32l;
    // 0x8021CFBC: lhu         $t9, 0x0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X0);
L_8021CFC0:
    // 0x8021CFC0: andi        $t0, $t9, 0x1E0
    ctx->r8 = ctx->r25 & 0X1E0;
    // 0x8021CFC4: beql        $t0, $zero, L_8021D028
    if (ctx->r8 == 0) {
        // 0x8021CFC8: lh          $t1, 0xAC($sp)
        ctx->r9 = MEM_H(ctx->r29, 0XAC);
            goto L_8021D028;
    }
    goto skip_20;
    // 0x8021CFC8: lh          $t1, 0xAC($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XAC);
    skip_20:
    // 0x8021CFCC: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8021CFD0: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8021CFD4: lwc1        $f6, 0xC($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XC);
    // 0x8021CFD8: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8021CFDC: add.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8021CFE0: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8021CFE4: lwc1        $f8, 0x10($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X10);
    // 0x8021CFE8: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8021CFEC: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8021CFF0: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8021CFF4: add.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8021CFF8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8021CFFC: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8021D000: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8021D004: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8021D008: neg.s       $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = -ctx->f6.fl;
    // 0x8021D00C: neg.s       $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = -ctx->f10.fl;
    // 0x8021D010: neg.s       $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = -ctx->f4.fl;
    // 0x8021D014: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x8021D018: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8021D01C: jal         0x8002A458
    // 0x8021D020: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_8002A458_2B058(rdram, ctx);
        goto after_7;
    // 0x8021D020: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x8021D024: lh          $t1, 0xAC($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XAC);
L_8021D028:
    // 0x8021D028: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8021D02C: bnel        $t1, $s4, L_8021D528
    if (ctx->r9 != ctx->r20) {
        // 0x8021D030: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_8021D528;
    }
    goto skip_21;
    // 0x8021D030: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    skip_21:
    // 0x8021D034: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8021D038: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021D03C: bc1fl       L_8021D050
    if (!c1cs) {
        // 0x8021D040: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_8021D050;
    }
    goto skip_22;
    // 0x8021D040: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    skip_22:
    // 0x8021D044: b           L_8021D050
    // 0x8021D048: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_8021D050;
    // 0x8021D048: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x8021D04C: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8021D050:
    // 0x8021D050: lbu         $t2, 0x99($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X99);
    // 0x8021D054: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8021D058: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8021D05C: bgez        $t2, L_8021D070
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8021D060: cvt.s.w     $f18, $f6
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8021D070;
    }
    // 0x8021D060: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021D064: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021D068: nop

    // 0x8021D06C: add.s       $f18, $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f10.fl;
L_8021D070:
    // 0x8021D070: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8021D074: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021D078: bc1fl       L_8021D0D4
    if (!c1cs) {
        // 0x8021D07C: lwc1        $f14, 0x90($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
            goto L_8021D0D4;
    }
    goto skip_23;
    // 0x8021D07C: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    skip_23:
    // 0x8021D080: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8021D084: nop

    // 0x8021D088: bc1fl       L_8021D09C
    if (!c1cs) {
        // 0x8021D08C: mov.s       $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
            goto L_8021D09C;
    }
    goto skip_24;
    // 0x8021D08C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    skip_24:
    // 0x8021D090: b           L_8021D09C
    // 0x8021D094: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
        goto L_8021D09C;
    // 0x8021D094: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    // 0x8021D098: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_8021D09C:
    // 0x8021D09C: lwc1        $f2, 0x5C($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X5C);
    // 0x8021D0A0: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x8021D0A4: nop

    // 0x8021D0A8: bc1fl       L_8021D0BC
    if (!c1cs) {
        // 0x8021D0AC: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_8021D0BC;
    }
    goto skip_25;
    // 0x8021D0AC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_25:
    // 0x8021D0B0: b           L_8021D0BC
    // 0x8021D0B4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_8021D0BC;
    // 0x8021D0B4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x8021D0B8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8021D0BC:
    // 0x8021D0BC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8021D0C0: nop

    // 0x8021D0C4: bc1fl       L_8021D0D4
    if (!c1cs) {
        // 0x8021D0C8: lwc1        $f14, 0x90($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
            goto L_8021D0D4;
    }
    goto skip_26;
    // 0x8021D0C8: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    skip_26:
    // 0x8021D0CC: swc1        $f14, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->f14.u32l;
    // 0x8021D0D0: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
L_8021D0D4:
    // 0x8021D0D4: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8021D0D8: nop

    // 0x8021D0DC: bc1fl       L_8021D0F0
    if (!c1cs) {
        // 0x8021D0E0: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_8021D0F0;
    }
    goto skip_27;
    // 0x8021D0E0: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    skip_27:
    // 0x8021D0E4: b           L_8021D0F0
    // 0x8021D0E8: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_8021D0F0;
    // 0x8021D0E8: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x8021D0EC: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8021D0F0:
    // 0x8021D0F0: lbu         $t3, 0x98($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X98);
    // 0x8021D0F4: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8021D0F8: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x8021D0FC: bgez        $t3, L_8021D110
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8021D100: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8021D110;
    }
    // 0x8021D100: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021D104: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021D108: nop

    // 0x8021D10C: add.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f16.fl;
L_8021D110:
    // 0x8021D110: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8021D114: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021D118: bc1fl       L_8021D174
    if (!c1cs) {
        // 0x8021D11C: lwc1        $f14, 0x94($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
            goto L_8021D174;
    }
    goto skip_28;
    // 0x8021D11C: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    skip_28:
    // 0x8021D120: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8021D124: nop

    // 0x8021D128: bc1fl       L_8021D13C
    if (!c1cs) {
        // 0x8021D12C: mov.s       $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
            goto L_8021D13C;
    }
    goto skip_29;
    // 0x8021D12C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    skip_29:
    // 0x8021D130: b           L_8021D13C
    // 0x8021D134: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
        goto L_8021D13C;
    // 0x8021D134: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    // 0x8021D138: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_8021D13C:
    // 0x8021D13C: lwc1        $f2, 0x60($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X60);
    // 0x8021D140: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x8021D144: nop

    // 0x8021D148: bc1fl       L_8021D15C
    if (!c1cs) {
        // 0x8021D14C: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_8021D15C;
    }
    goto skip_30;
    // 0x8021D14C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_30:
    // 0x8021D150: b           L_8021D15C
    // 0x8021D154: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_8021D15C;
    // 0x8021D154: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x8021D158: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8021D15C:
    // 0x8021D15C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8021D160: nop

    // 0x8021D164: bc1fl       L_8021D174
    if (!c1cs) {
        // 0x8021D168: lwc1        $f14, 0x94($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
            goto L_8021D174;
    }
    goto skip_31;
    // 0x8021D168: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    skip_31:
    // 0x8021D16C: swc1        $f14, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->f14.u32l;
    // 0x8021D170: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
L_8021D174:
    // 0x8021D174: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8021D178: nop

    // 0x8021D17C: bc1fl       L_8021D190
    if (!c1cs) {
        // 0x8021D180: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_8021D190;
    }
    goto skip_32;
    // 0x8021D180: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    skip_32:
    // 0x8021D184: b           L_8021D190
    // 0x8021D188: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_8021D190;
    // 0x8021D188: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x8021D18C: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8021D190:
    // 0x8021D190: lbu         $t4, 0x9A($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X9A);
    // 0x8021D194: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8021D198: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8021D19C: bgez        $t4, L_8021D1B0
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8021D1A0: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8021D1B0;
    }
    // 0x8021D1A0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021D1A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021D1A8: nop

    // 0x8021D1AC: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_8021D1B0:
    // 0x8021D1B0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8021D1B4: nop

    // 0x8021D1B8: bc1fl       L_8021D214
    if (!c1cs) {
        // 0x8021D1BC: lhu         $t5, 0x134($s2)
        ctx->r13 = MEM_HU(ctx->r18, 0X134);
            goto L_8021D214;
    }
    goto skip_33;
    // 0x8021D1BC: lhu         $t5, 0x134($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X134);
    skip_33:
    // 0x8021D1C0: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8021D1C4: nop

    // 0x8021D1C8: bc1fl       L_8021D1DC
    if (!c1cs) {
        // 0x8021D1CC: mov.s       $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
            goto L_8021D1DC;
    }
    goto skip_34;
    // 0x8021D1CC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    skip_34:
    // 0x8021D1D0: b           L_8021D1DC
    // 0x8021D1D4: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
        goto L_8021D1DC;
    // 0x8021D1D4: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    // 0x8021D1D8: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_8021D1DC:
    // 0x8021D1DC: lwc1        $f2, 0x64($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X64);
    // 0x8021D1E0: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x8021D1E4: nop

    // 0x8021D1E8: bc1fl       L_8021D1FC
    if (!c1cs) {
        // 0x8021D1EC: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_8021D1FC;
    }
    goto skip_35;
    // 0x8021D1EC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_35:
    // 0x8021D1F0: b           L_8021D1FC
    // 0x8021D1F4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_8021D1FC;
    // 0x8021D1F4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x8021D1F8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8021D1FC:
    // 0x8021D1FC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8021D200: nop

    // 0x8021D204: bc1fl       L_8021D214
    if (!c1cs) {
        // 0x8021D208: lhu         $t5, 0x134($s2)
        ctx->r13 = MEM_HU(ctx->r18, 0X134);
            goto L_8021D214;
    }
    goto skip_36;
    // 0x8021D208: lhu         $t5, 0x134($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X134);
    skip_36:
    // 0x8021D20C: swc1        $f14, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f14.u32l;
    // 0x8021D210: lhu         $t5, 0x134($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X134);
L_8021D214:
    // 0x8021D214: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x8021D218: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x8021D21C: b           L_8021D524
    // 0x8021D220: sh          $t7, 0x134($s2)
    MEM_H(0X134, ctx->r18) = ctx->r15;
        goto L_8021D524;
    // 0x8021D220: sh          $t7, 0x134($s2)
    MEM_H(0X134, ctx->r18) = ctx->r15;
    // 0x8021D224: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
L_8021D228:
    // 0x8021D228: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8021D22C: lwc1        $f6, 0xC($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XC);
    // 0x8021D230: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8021D234: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8021D238: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8021D23C: lwc1        $f8, 0x10($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X10);
    // 0x8021D240: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8021D244: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8021D248: lwc1        $f18, 0xC0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x8021D24C: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8021D250: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8021D254: lwc1        $f10, 0xBC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8021D258: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8021D25C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8021D260: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x8021D264: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x8021D268: jal         0x80028B28
    // 0x8021D26C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80028B28_29728(rdram, ctx);
        goto after_8;
    // 0x8021D26C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x8021D270: lh          $t8, 0xAC($sp)
    ctx->r24 = MEM_H(ctx->r29, 0XAC);
    // 0x8021D274: bnel        $t8, $s4, L_8021D528
    if (ctx->r24 != ctx->r20) {
        // 0x8021D278: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_8021D528;
    }
    goto skip_37;
    // 0x8021D278: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    skip_37:
    // 0x8021D27C: lw          $t9, 0x64($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X64);
    // 0x8021D280: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x8021D284: andi        $t0, $t9, 0x20
    ctx->r8 = ctx->r25 & 0X20;
    // 0x8021D288: beql        $t0, $zero, L_8021D2C4
    if (ctx->r8 == 0) {
        // 0x8021D28C: lhu         $t4, 0x0($s0)
        ctx->r12 = MEM_HU(ctx->r16, 0X0);
            goto L_8021D2C4;
    }
    goto skip_38;
    // 0x8021D28C: lhu         $t4, 0x0($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X0);
    skip_38:
    // 0x8021D290: lhu         $t1, 0x0($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X0);
    // 0x8021D294: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8021D298: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8021D29C: beql        $t2, $zero, L_8021D2C4
    if (ctx->r10 == 0) {
        // 0x8021D2A0: lhu         $t4, 0x0($s0)
        ctx->r12 = MEM_HU(ctx->r16, 0X0);
            goto L_8021D2C4;
    }
    goto skip_39;
    // 0x8021D2A0: lhu         $t4, 0x0($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X0);
    skip_39:
    // 0x8021D2A4: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8021D2A8: lwc1        $f16, 0x9C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8021D2AC: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8021D2B0: sw          $t3, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->r11;
    // 0x8021D2B4: swc1        $f8, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->f8.u32l;
    // 0x8021D2B8: swc1        $f16, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->f16.u32l;
    // 0x8021D2BC: swc1        $f4, 0x58($s2)
    MEM_W(0X58, ctx->r18) = ctx->f4.u32l;
    // 0x8021D2C0: lhu         $t4, 0x0($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X0);
L_8021D2C4:
    // 0x8021D2C4: andi        $t5, $t4, 0x1E0
    ctx->r13 = ctx->r12 & 0X1E0;
    // 0x8021D2C8: beql        $t5, $zero, L_8021D32C
    if (ctx->r13 == 0) {
        // 0x8021D2CC: lh          $t6, 0xAC($sp)
        ctx->r14 = MEM_H(ctx->r29, 0XAC);
            goto L_8021D32C;
    }
    goto skip_40;
    // 0x8021D2CC: lh          $t6, 0xAC($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XAC);
    skip_40:
    // 0x8021D2D0: lwc1        $f6, 0x8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8021D2D4: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8021D2D8: lwc1        $f8, 0xC($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0XC);
    // 0x8021D2DC: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8021D2E0: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8021D2E4: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8021D2E8: lwc1        $f6, 0x10($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X10);
    // 0x8021D2EC: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8021D2F0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8021D2F4: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8021D2F8: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8021D2FC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8021D300: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8021D304: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8021D308: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8021D30C: neg.s       $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = -ctx->f8.fl;
    // 0x8021D310: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8021D314: neg.s       $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = -ctx->f18.fl;
    // 0x8021D318: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8021D31C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x8021D320: jal         0x80028B28
    // 0x8021D324: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80028B28_29728(rdram, ctx);
        goto after_9;
    // 0x8021D324: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x8021D328: lh          $t6, 0xAC($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XAC);
L_8021D32C:
    // 0x8021D32C: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8021D330: bnel        $t6, $s4, L_8021D528
    if (ctx->r14 != ctx->r20) {
        // 0x8021D334: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_8021D528;
    }
    goto skip_41;
    // 0x8021D334: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    skip_41:
    // 0x8021D338: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8021D33C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021D340: bc1fl       L_8021D354
    if (!c1cs) {
        // 0x8021D344: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_8021D354;
    }
    goto skip_42;
    // 0x8021D344: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    skip_42:
    // 0x8021D348: b           L_8021D354
    // 0x8021D34C: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_8021D354;
    // 0x8021D34C: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x8021D350: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8021D354:
    // 0x8021D354: lbu         $t7, 0x99($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X99);
    // 0x8021D358: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8021D35C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8021D360: bgez        $t7, L_8021D374
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8021D364: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8021D374;
    }
    // 0x8021D364: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021D368: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021D36C: nop

    // 0x8021D370: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
L_8021D374:
    // 0x8021D374: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8021D378: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021D37C: bc1fl       L_8021D3D8
    if (!c1cs) {
        // 0x8021D380: lwc1        $f14, 0x90($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
            goto L_8021D3D8;
    }
    goto skip_43;
    // 0x8021D380: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    skip_43:
    // 0x8021D384: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8021D388: nop

    // 0x8021D38C: bc1fl       L_8021D3A0
    if (!c1cs) {
        // 0x8021D390: mov.s       $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
            goto L_8021D3A0;
    }
    goto skip_44;
    // 0x8021D390: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    skip_44:
    // 0x8021D394: b           L_8021D3A0
    // 0x8021D398: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
        goto L_8021D3A0;
    // 0x8021D398: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    // 0x8021D39C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_8021D3A0:
    // 0x8021D3A0: lwc1        $f2, 0x5C($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X5C);
    // 0x8021D3A4: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x8021D3A8: nop

    // 0x8021D3AC: bc1fl       L_8021D3C0
    if (!c1cs) {
        // 0x8021D3B0: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_8021D3C0;
    }
    goto skip_45;
    // 0x8021D3B0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_45:
    // 0x8021D3B4: b           L_8021D3C0
    // 0x8021D3B8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_8021D3C0;
    // 0x8021D3B8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x8021D3BC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8021D3C0:
    // 0x8021D3C0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8021D3C4: nop

    // 0x8021D3C8: bc1fl       L_8021D3D8
    if (!c1cs) {
        // 0x8021D3CC: lwc1        $f14, 0x90($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
            goto L_8021D3D8;
    }
    goto skip_46;
    // 0x8021D3CC: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    skip_46:
    // 0x8021D3D0: swc1        $f14, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->f14.u32l;
    // 0x8021D3D4: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
L_8021D3D8:
    // 0x8021D3D8: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8021D3DC: nop

    // 0x8021D3E0: bc1fl       L_8021D3F4
    if (!c1cs) {
        // 0x8021D3E4: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_8021D3F4;
    }
    goto skip_47;
    // 0x8021D3E4: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    skip_47:
    // 0x8021D3E8: b           L_8021D3F4
    // 0x8021D3EC: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_8021D3F4;
    // 0x8021D3EC: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x8021D3F0: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8021D3F4:
    // 0x8021D3F4: lbu         $t8, 0x98($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X98);
    // 0x8021D3F8: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8021D3FC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8021D400: bgez        $t8, L_8021D414
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8021D404: cvt.s.w     $f18, $f6
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8021D414;
    }
    // 0x8021D404: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021D408: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021D40C: nop

    // 0x8021D410: add.s       $f18, $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f10.fl;
L_8021D414:
    // 0x8021D414: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8021D418: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021D41C: bc1fl       L_8021D478
    if (!c1cs) {
        // 0x8021D420: lwc1        $f14, 0x94($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
            goto L_8021D478;
    }
    goto skip_48;
    // 0x8021D420: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    skip_48:
    // 0x8021D424: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8021D428: nop

    // 0x8021D42C: bc1fl       L_8021D440
    if (!c1cs) {
        // 0x8021D430: mov.s       $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
            goto L_8021D440;
    }
    goto skip_49;
    // 0x8021D430: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    skip_49:
    // 0x8021D434: b           L_8021D440
    // 0x8021D438: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
        goto L_8021D440;
    // 0x8021D438: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    // 0x8021D43C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_8021D440:
    // 0x8021D440: lwc1        $f2, 0x60($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X60);
    // 0x8021D444: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x8021D448: nop

    // 0x8021D44C: bc1fl       L_8021D460
    if (!c1cs) {
        // 0x8021D450: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_8021D460;
    }
    goto skip_50;
    // 0x8021D450: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_50:
    // 0x8021D454: b           L_8021D460
    // 0x8021D458: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_8021D460;
    // 0x8021D458: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x8021D45C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8021D460:
    // 0x8021D460: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8021D464: nop

    // 0x8021D468: bc1fl       L_8021D478
    if (!c1cs) {
        // 0x8021D46C: lwc1        $f14, 0x94($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
            goto L_8021D478;
    }
    goto skip_51;
    // 0x8021D46C: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    skip_51:
    // 0x8021D470: swc1        $f14, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->f14.u32l;
    // 0x8021D474: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
L_8021D478:
    // 0x8021D478: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8021D47C: nop

    // 0x8021D480: bc1fl       L_8021D494
    if (!c1cs) {
        // 0x8021D484: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_8021D494;
    }
    goto skip_52;
    // 0x8021D484: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    skip_52:
    // 0x8021D488: b           L_8021D494
    // 0x8021D48C: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_8021D494;
    // 0x8021D48C: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x8021D490: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8021D494:
    // 0x8021D494: lbu         $t9, 0x9A($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X9A);
    // 0x8021D498: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8021D49C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8021D4A0: bgez        $t9, L_8021D4B4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8021D4A4: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8021D4B4;
    }
    // 0x8021D4A4: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021D4A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021D4AC: nop

    // 0x8021D4B0: add.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f16.fl;
L_8021D4B4:
    // 0x8021D4B4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8021D4B8: nop

    // 0x8021D4BC: bc1fl       L_8021D518
    if (!c1cs) {
        // 0x8021D4C0: lhu         $t0, 0x134($s2)
        ctx->r8 = MEM_HU(ctx->r18, 0X134);
            goto L_8021D518;
    }
    goto skip_53;
    // 0x8021D4C0: lhu         $t0, 0x134($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X134);
    skip_53:
    // 0x8021D4C4: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8021D4C8: nop

    // 0x8021D4CC: bc1fl       L_8021D4E0
    if (!c1cs) {
        // 0x8021D4D0: mov.s       $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
            goto L_8021D4E0;
    }
    goto skip_54;
    // 0x8021D4D0: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    skip_54:
    // 0x8021D4D4: b           L_8021D4E0
    // 0x8021D4D8: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
        goto L_8021D4E0;
    // 0x8021D4D8: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    // 0x8021D4DC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_8021D4E0:
    // 0x8021D4E0: lwc1        $f2, 0x64($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X64);
    // 0x8021D4E4: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x8021D4E8: nop

    // 0x8021D4EC: bc1fl       L_8021D500
    if (!c1cs) {
        // 0x8021D4F0: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_8021D500;
    }
    goto skip_55;
    // 0x8021D4F0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_55:
    // 0x8021D4F4: b           L_8021D500
    // 0x8021D4F8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_8021D500;
    // 0x8021D4F8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x8021D4FC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8021D500:
    // 0x8021D500: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8021D504: nop

    // 0x8021D508: bc1fl       L_8021D518
    if (!c1cs) {
        // 0x8021D50C: lhu         $t0, 0x134($s2)
        ctx->r8 = MEM_HU(ctx->r18, 0X134);
            goto L_8021D518;
    }
    goto skip_56;
    // 0x8021D50C: lhu         $t0, 0x134($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X134);
    skip_56:
    // 0x8021D510: swc1        $f14, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f14.u32l;
    // 0x8021D514: lhu         $t0, 0x134($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X134);
L_8021D518:
    // 0x8021D518: lhu         $t1, 0x0($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X0);
    // 0x8021D51C: or          $t2, $t0, $t1
    ctx->r10 = ctx->r8 | ctx->r9;
    // 0x8021D520: sh          $t2, 0x134($s2)
    MEM_H(0X134, ctx->r18) = ctx->r10;
L_8021D524:
    // 0x8021D524: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_8021D528:
    // 0x8021D528: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8021D52C: bnel        $v1, $zero, L_8021C814
    if (ctx->r3 != 0) {
        // 0x8021D530: lhu         $t8, 0x136($s2)
        ctx->r24 = MEM_HU(ctx->r18, 0X136);
            goto L_8021C814;
    }
    goto skip_57;
    // 0x8021D530: lhu         $t8, 0x136($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X136);
    skip_57:
    // 0x8021D534: lw          $t3, 0x60($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X60);
L_8021D538:
    // 0x8021D538: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x8021D53C: bgezl       $t4, L_8021D580
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8021D540: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8021D580;
    }
    goto skip_58;
    // 0x8021D540: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_58:
    // 0x8021D544: lwc1        $f6, 0x8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8021D548: lwc1        $f10, 0x5C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X5C);
    // 0x8021D54C: lwc1        $f8, 0xC($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0XC);
    // 0x8021D550: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8021D554: lwc1        $f6, 0x10($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X10);
    // 0x8021D558: swc1        $f18, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f18.u32l;
    // 0x8021D55C: lwc1        $f16, 0x60($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X60);
    // 0x8021D560: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8021D564: swc1        $f4, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->f4.u32l;
    // 0x8021D568: lwc1        $f10, 0x64($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X64);
    // 0x8021D56C: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8021D570: swc1        $f18, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->f18.u32l;
    // 0x8021D574: b           L_8021D580
    // 0x8021D578: lhu         $v0, 0x134($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X134);
        goto L_8021D580;
    // 0x8021D578: lhu         $v0, 0x134($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X134);
    // 0x8021D57C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021D580:
    // 0x8021D580: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8021D584: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x8021D588: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x8021D58C: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x8021D590: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8021D594: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8021D598: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8021D59C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8021D5A0: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8021D5A4: jr          $ra
    // 0x8021D5A8: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    TRACE_RETURN()
    return;
    // 0x8021D5A8: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_80214F38_5D0408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214F38: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80214F3C: jr          $ra
    // 0x80214F40: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80214F40: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_802105E8_5CBAB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802105E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802105EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802105F0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802105F4: jal         0x80013AC4
    // 0x802105F8: addiu       $a0, $a0, -0x1E3C
    ctx->r4 = ADD32(ctx->r4, -0X1E3C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802105F8: addiu       $a0, $a0, -0x1E3C
    ctx->r4 = ADD32(ctx->r4, -0X1E3C);
    after_0:
    // 0x802105FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210604: jr          $ra
    // 0x80210608: nop

    TRACE_RETURN()
    return;
    // 0x80210608: nop

;}
RECOMP_FUNC void func_8021502C_5D04FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021502C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80215030: jr          $ra
    // 0x80215034: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80215034: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8021A858_5D5D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A858: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8021A85C: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8021A860: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8021A864: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8021A868: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021A86C: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8021A870: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8021A874: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8021A878: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8021A87C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8021A880: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8021A884: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8021A888: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x8021A88C: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8021A890: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8021A894: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8021A898: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8021A89C: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8021A8A0: nop

    // 0x8021A8A4: mul.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8021A8A8: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8021A8AC: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8021A8B0: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8021A8B4: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8021A8B8: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8021A8BC: swc1        $f18, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f18.u32l;
    // 0x8021A8C0: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8021A8C4: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8021A8C8: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8021A8CC: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8021A8D0: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8021A8D4: nop

    // 0x8021A8D8: mul.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8021A8DC: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8021A8E0: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8021A8E4: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8021A8E8: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8021A8EC: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8021A8F0: swc1        $f16, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f16.u32l;
    // 0x8021A8F4: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x8021A8F8: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8021A8FC: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x8021A900: lwc1        $f18, 0xC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8021A904: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8021A908: jr          $ra
    // 0x8021A90C: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x8021A90C: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_8020F1A8_5CA678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F1A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F1AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F1B0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F1B4: jal         0x80013AC4
    // 0x8020F1B8: addiu       $a0, $a0, -0x30DC
    ctx->r4 = ADD32(ctx->r4, -0X30DC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F1B8: addiu       $a0, $a0, -0x30DC
    ctx->r4 = ADD32(ctx->r4, -0X30DC);
    after_0:
    // 0x8020F1BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F1C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F1C4: jr          $ra
    // 0x8020F1C8: nop

    TRACE_RETURN()
    return;
    // 0x8020F1C8: nop

;}
RECOMP_FUNC void func_8020E884_5C9D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E884: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E888: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E88C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E890: jal         0x80013AC4
    // 0x8020E894: addiu       $a0, $a0, -0x36FC
    ctx->r4 = ADD32(ctx->r4, -0X36FC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E894: addiu       $a0, $a0, -0x36FC
    ctx->r4 = ADD32(ctx->r4, -0X36FC);
    after_0:
    // 0x8020E898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E89C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E8A0: jr          $ra
    // 0x8020E8A4: nop

    TRACE_RETURN()
    return;
    // 0x8020E8A4: nop

;}
RECOMP_FUNC void func_8020E014_5C94E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E014: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E01C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E020: jal         0x80013AC4
    // 0x8020E024: addiu       $a0, $a0, -0x3C28
    ctx->r4 = ADD32(ctx->r4, -0X3C28);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E024: addiu       $a0, $a0, -0x3C28
    ctx->r4 = ADD32(ctx->r4, -0X3C28);
    after_0:
    // 0x8020E028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E02C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E030: jr          $ra
    // 0x8020E034: nop

    TRACE_RETURN()
    return;
    // 0x8020E034: nop

;}
RECOMP_FUNC void func_802253A8_5E0878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802253AC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x802253B0: lw          $t6, -0x3278($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3278);
    // 0x802253B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802253B8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802253BC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802253C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802253C4: bne         $t6, $zero, L_802253D4
    if (ctx->r14 != 0) {
        // 0x802253C8: lw          $s1, 0x18($a0)
        ctx->r17 = MEM_W(ctx->r4, 0X18);
            goto L_802253D4;
    }
    // 0x802253C8: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x802253CC: b           L_802254B8
    // 0x802253D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802254B8;
    // 0x802253D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802253D4:
    // 0x802253D4: jal         0x80224E20
    // 0x802253D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80224E20_5E02F0(rdram, ctx);
        goto after_0;
    // 0x802253D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802253DC: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x802253E0: addiu       $t9, $zero, 0xFB
    ctx->r25 = ADD32(0, 0XFB);
    // 0x802253E4: sh          $t9, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r25;
    // 0x802253E8: ori         $t8, $t7, 0x221
    ctx->r24 = ctx->r15 | 0X221;
    // 0x802253EC: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x802253F0: jal         0x800141C4
    // 0x802253F4: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    func_800141C4_14DC4(rdram, ctx);
        goto after_1;
    // 0x802253F4: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    after_1:
    // 0x802253F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802253FC: bne         $v0, $at, L_8022540C
    if (ctx->r2 != ctx->r1) {
        // 0x80225400: nop
    
            goto L_8022540C;
    }
    // 0x80225400: nop

    // 0x80225404: jal         0x80013B14
    // 0x80225408: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    func_80013B14_14714(rdram, ctx);
        goto after_2;
    // 0x80225408: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    after_2:
L_8022540C:
    // 0x8022540C: jal         0x800141C4
    // 0x80225410: addiu       $a0, $zero, 0x159
    ctx->r4 = ADD32(0, 0X159);
    func_800141C4_14DC4(rdram, ctx);
        goto after_3;
    // 0x80225410: addiu       $a0, $zero, 0x159
    ctx->r4 = ADD32(0, 0X159);
    after_3:
    // 0x80225414: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80225418: bne         $v0, $at, L_80225428
    if (ctx->r2 != ctx->r1) {
        // 0x8022541C: nop
    
            goto L_80225428;
    }
    // 0x8022541C: nop

    // 0x80225420: jal         0x80013B14
    // 0x80225424: addiu       $a0, $zero, 0x159
    ctx->r4 = ADD32(0, 0X159);
    func_80013B14_14714(rdram, ctx);
        goto after_4;
    // 0x80225424: addiu       $a0, $zero, 0x159
    ctx->r4 = ADD32(0, 0X159);
    after_4:
L_80225428:
    // 0x80225428: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8022542C: lw          $v0, -0x3278($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3278);
    // 0x80225430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80225434: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80225438: lh          $t0, 0x0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X0);
    // 0x8022543C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80225440: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80225444: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80225448: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8022544C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225450: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    // 0x80225454: lh          $t1, -0x6($v0)
    ctx->r9 = MEM_H(ctx->r2, -0X6);
    // 0x80225458: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8022545C: nop

    // 0x80225460: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80225464: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x80225468: lh          $t2, -0x4($v0)
    ctx->r10 = MEM_H(ctx->r2, -0X4);
    // 0x8022546C: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80225470: nop

    // 0x80225474: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80225478: swc1        $f18, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f18.u32l;
    // 0x8022547C: lhu         $t3, -0x2($v0)
    ctx->r11 = MEM_HU(ctx->r2, -0X2);
    // 0x80225480: sh          $t3, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r11;
    // 0x80225484: lh          $t4, -0x8($v0)
    ctx->r12 = MEM_H(ctx->r2, -0X8);
    // 0x80225488: sh          $t4, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r12;
    // 0x8022548C: lh          $t5, -0x6($v0)
    ctx->r13 = MEM_H(ctx->r2, -0X6);
    // 0x80225490: sh          $t5, 0xCA($s0)
    MEM_H(0XCA, ctx->r16) = ctx->r13;
    // 0x80225494: lh          $t6, -0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, -0X4);
    // 0x80225498: sh          $t6, 0xCC($s0)
    MEM_H(0XCC, ctx->r16) = ctx->r14;
    // 0x8022549C: lhu         $t7, -0x2($v0)
    ctx->r15 = MEM_HU(ctx->r2, -0X2);
    // 0x802254A0: sw          $v0, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r2;
    // 0x802254A4: sb          $zero, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = 0;
    // 0x802254A8: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x802254AC: jal         0x8021664C
    // 0x802254B0: sb          $t8, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r24;
    func_8021664C_5D1B1C(rdram, ctx);
        goto after_5;
    // 0x802254B0: sb          $t8, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r24;
    after_5:
    // 0x802254B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802254B8:
    // 0x802254B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802254BC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802254C0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802254C4: jr          $ra
    // 0x802254C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802254C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80222168_5DD638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022216C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222170: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80222174: jal         0x801DCD48
    // 0x80222178: lb          $a0, 0x7743($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X7743);
    func_801DCD48_598C58(rdram, ctx);
        goto after_0;
    // 0x80222178: lb          $a0, 0x7743($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X7743);
    after_0:
    // 0x8022217C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80222180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80222184: jr          $ra
    // 0x80222188: nop

    TRACE_RETURN()
    return;
    // 0x80222188: nop

;}
RECOMP_FUNC void func_8020D36C_5C883C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D36C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x8020D370: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x8020D374: lui         $s4, 0x8016
    ctx->r20 = S32(0X8016 << 16);
    // 0x8020D378: addiu       $s4, $s4, -0x33D0
    ctx->r20 = ADD32(ctx->r20, -0X33D0);
    // 0x8020D37C: lw          $t0, 0x44($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X44);
    // 0x8020D380: lw          $t6, 0x1C($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X1C);
    // 0x8020D384: lw          $t7, 0x20($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X20);
    // 0x8020D388: lw          $t8, 0x24($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X24);
    // 0x8020D38C: subu        $t1, $a1, $t0
    ctx->r9 = SUB32(ctx->r5, ctx->r8);
    // 0x8020D390: addu        $v0, $a1, $t0
    ctx->r2 = ADD32(ctx->r5, ctx->r8);
    // 0x8020D394: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x8020D398: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8020D39C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x8020D3A0: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x8020D3A4: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x8020D3A8: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x8020D3AC: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x8020D3B0: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x8020D3B4: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x8020D3B8: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x8020D3BC: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x8020D3C0: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x8020D3C4: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x8020D3C8: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x8020D3CC: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x8020D3D0: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    // 0x8020D3D4: sw          $t1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r9;
    // 0x8020D3D8: sw          $t6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r14;
    // 0x8020D3DC: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    // 0x8020D3E0: bne         $at, $zero, L_8020D638
    if (ctx->r1 != 0) {
        // 0x8020D3E4: sw          $t8, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->r24;
            goto L_8020D638;
    }
    // 0x8020D3E4: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
    // 0x8020D3E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8020D3EC: lui         $fp, 0x8007
    ctx->r30 = S32(0X8007 << 16);
    // 0x8020D3F0: lui         $s7, 0x8023
    ctx->r23 = S32(0X8023 << 16);
    // 0x8020D3F4: lui         $s6, 0x8023
    ctx->r22 = S32(0X8023 << 16);
    // 0x8020D3F8: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x8020D3FC: lui         $s2, 0x8016
    ctx->r18 = S32(0X8016 << 16);
    // 0x8020D400: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020D404: addiu       $s2, $s2, -0x3224
    ctx->r18 = ADD32(ctx->r18, -0X3224);
    // 0x8020D408: addiu       $s3, $s3, -0x3220
    ctx->r19 = ADD32(ctx->r19, -0X3220);
    // 0x8020D40C: addiu       $s6, $s6, -0x601C
    ctx->r22 = ADD32(ctx->r22, -0X601C);
    // 0x8020D410: addiu       $s7, $s7, -0x7840
    ctx->r23 = ADD32(ctx->r23, -0X7840);
    // 0x8020D414: addiu       $fp, $fp, -0x26E0
    ctx->r30 = ADD32(ctx->r30, -0X26E0);
    // 0x8020D418: lwc1        $f22, -0x6580($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X6580);
L_8020D41C:
    // 0x8020D41C: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x8020D420: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x8020D424: bltz        $t2, L_8020D624
    if (SIGNED(ctx->r10) < 0) {
        // 0x8020D428: slt         $at, $t2, $t3
        ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
            goto L_8020D624;
    }
    // 0x8020D428: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8020D42C: beq         $at, $zero, L_8020D624
    if (ctx->r1 == 0) {
        // 0x8020D430: lw          $t4, 0xB8($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XB8);
            goto L_8020D624;
    }
    // 0x8020D430: lw          $t4, 0xB8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB8);
    // 0x8020D434: subu        $t5, $t4, $t0
    ctx->r13 = SUB32(ctx->r12, ctx->r8);
    // 0x8020D438: addu        $a0, $t4, $t0
    ctx->r4 = ADD32(ctx->r12, ctx->r8);
    // 0x8020D43C: slt         $at, $a0, $t5
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8020D440: bne         $at, $zero, L_8020D624
    if (ctx->r1 != 0) {
        // 0x8020D444: sw          $t5, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r13;
            goto L_8020D624;
    }
    // 0x8020D444: sw          $t5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r13;
L_8020D448:
    // 0x8020D448: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x8020D44C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8020D450: bltz        $t6, L_8020D608
    if (SIGNED(ctx->r14) < 0) {
        // 0x8020D454: slt         $at, $t6, $t7
        ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
            goto L_8020D608;
    }
    // 0x8020D454: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8020D458: beq         $at, $zero, L_8020D608
    if (ctx->r1 == 0) {
        // 0x8020D45C: lw          $t8, 0xBC($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XBC);
            goto L_8020D608;
    }
    // 0x8020D45C: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x8020D460: subu        $v1, $t8, $t0
    ctx->r3 = SUB32(ctx->r24, ctx->r8);
    // 0x8020D464: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
    // 0x8020D468: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8020D46C: bne         $at, $zero, L_8020D608
    if (ctx->r1 != 0) {
        // 0x8020D470: lw          $a2, 0x80($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X80);
            goto L_8020D608;
    }
    // 0x8020D470: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
L_8020D474:
    // 0x8020D474: bltz        $v1, L_8020D5F0
    if (SIGNED(ctx->r3) < 0) {
        // 0x8020D478: slt         $at, $v1, $a2
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_8020D5F0;
    }
    // 0x8020D478: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8020D47C: beq         $at, $zero, L_8020D5F0
    if (ctx->r1 == 0) {
        // 0x8020D480: lw          $t9, 0x98($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X98);
            goto L_8020D5F0;
    }
    // 0x8020D480: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x8020D484: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8020D488: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x8020D48C: lhu         $a1, 0x40($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X40);
    // 0x8020D490: multu       $t9, $t1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8020D494: lw          $t9, 0x38($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X38);
    // 0x8020D498: mflo        $t2
    ctx->r10 = lo;
    // 0x8020D49C: nop

    // 0x8020D4A0: nop

    // 0x8020D4A4: multu       $t2, $a2
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8020D4A8: mflo        $t3
    ctx->r11 = lo;
    // 0x8020D4AC: nop

    // 0x8020D4B0: nop

    // 0x8020D4B4: multu       $t4, $a2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8020D4B8: mflo        $t5
    ctx->r13 = lo;
    // 0x8020D4BC: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8020D4C0: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x8020D4C4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8020D4C8: addu        $t1, $t9, $t8
    ctx->r9 = ADD32(ctx->r25, ctx->r24);
    // 0x8020D4CC: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x8020D4D0: jal         0x80014840
    // 0x8020D4D4: sw          $v1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r3;
    func_80014840_15440(rdram, ctx);
        goto after_0;
    // 0x8020D4D4: sw          $v1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r3;
    after_0:
    // 0x8020D4D8: bne         $v0, $zero, L_8020D4F8
    if (ctx->r2 != 0) {
        // 0x8020D4DC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8020D4F8;
    }
    // 0x8020D4DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8020D4E0: lw          $t0, 0x44($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X44);
    // 0x8020D4E4: lw          $t2, 0xBC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XBC);
    // 0x8020D4E8: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8020D4EC: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x8020D4F0: b           L_8020D5F0
    // 0x8020D4F4: addu        $v0, $t2, $t0
    ctx->r2 = ADD32(ctx->r10, ctx->r8);
        goto L_8020D5F0;
    // 0x8020D4F4: addu        $v0, $t2, $t0
    ctx->r2 = ADD32(ctx->r10, ctx->r8);
L_8020D4F8:
    // 0x8020D4F8: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_8020D4FC:
    // 0x8020D4FC: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
    // 0x8020D500: lbu         $t4, 0x10($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X10);
    // 0x8020D504: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x8020D508: bne         $t4, $zero, L_8020D5D4
    if (ctx->r12 != 0) {
        // 0x8020D50C: nop
    
            goto L_8020D5D4;
    }
    // 0x8020D50C: nop

    // 0x8020D510: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x8020D514: jal         0x80014840
    // 0x8020D518: lhu         $a1, 0x40($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X40);
    func_80014840_15440(rdram, ctx);
        goto after_1;
    // 0x8020D518: lhu         $a1, 0x40($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X40);
    after_1:
    // 0x8020D51C: beq         $v0, $zero, L_8020D5DC
    if (ctx->r2 == 0) {
        // 0x8020D520: sw          $v0, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r2;
            goto L_8020D5DC;
    }
    // 0x8020D520: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x8020D524: lhu         $t3, 0x0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X0);
    // 0x8020D528: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8020D52C: addu        $t5, $s6, $t3
    ctx->r13 = ADD32(ctx->r22, ctx->r11);
    // 0x8020D530: jal         0x80219CA0
    // 0x8020D534: lbu         $a1, -0x1($t5)
    ctx->r5 = MEM_BU(ctx->r13, -0X1);
    func_80219CA0_5D5170(rdram, ctx);
        goto after_2;
    // 0x8020D534: lbu         $a1, -0x1($t5)
    ctx->r5 = MEM_BU(ctx->r13, -0X1);
    after_2:
    // 0x8020D538: beq         $v0, $zero, L_8020D5D4
    if (ctx->r2 == 0) {
        // 0x8020D53C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8020D5D4;
    }
    // 0x8020D53C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020D540: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x8020D544: lui         $t1, 0x8023
    ctx->r9 = S32(0X8023 << 16);
    // 0x8020D548: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020D54C: lhu         $v0, 0x0($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X0);
    // 0x8020D550: or          $a3, $fp, $at
    ctx->r7 = ctx->r30 | ctx->r1;
    // 0x8020D554: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020D558: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8020D55C: addu        $t9, $s7, $t7
    ctx->r25 = ADD32(ctx->r23, ctx->r15);
    // 0x8020D560: lw          $a1, -0x4($t9)
    ctx->r5 = MEM_W(ctx->r25, -0X4);
    // 0x8020D564: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8020D568: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x8020D56C: lhu         $t1, -0x682A($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X682A);
    // 0x8020D570: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8020D574: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8020D578: swc1        $f22, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f22.u32l;
    // 0x8020D57C: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x8020D580: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x8020D584: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8020D588: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8020D58C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020D590: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x8020D594: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8020D598: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x8020D59C: jal         0x80035690
    // 0x8020D5A0: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    func_80035690_36290(rdram, ctx);
        goto after_3;
    // 0x8020D5A0: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    after_3:
    // 0x8020D5A4: beq         $v0, $zero, L_8020D5D4
    if (ctx->r2 == 0) {
        // 0x8020D5A8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8020D5D4;
    }
    // 0x8020D5A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8020D5AC: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x8020D5B0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020D5B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020D5B8: sb          $t2, 0x10($t4)
    MEM_B(0X10, ctx->r12) = ctx->r10;
    // 0x8020D5BC: jal         0x80218A54
    // 0x8020D5C0: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    func_80218A54_5D3F24(rdram, ctx);
        goto after_4;
    // 0x8020D5C0: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    after_4:
    // 0x8020D5C4: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8020D5C8: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x8020D5CC: sw          $t5, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r13;
    // 0x8020D5D0: sw          $t3, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r11;
L_8020D5D4:
    // 0x8020D5D4: b           L_8020D4FC
    // 0x8020D5D8: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
        goto L_8020D4FC;
    // 0x8020D5D8: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_8020D5DC:
    // 0x8020D5DC: lw          $t0, 0x44($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X44);
    // 0x8020D5E0: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x8020D5E4: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8020D5E8: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x8020D5EC: addu        $v0, $t6, $t0
    ctx->r2 = ADD32(ctx->r14, ctx->r8);
L_8020D5F0:
    // 0x8020D5F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8020D5F4: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8020D5F8: beq         $at, $zero, L_8020D474
    if (ctx->r1 == 0) {
        // 0x8020D5FC: nop
    
            goto L_8020D474;
    }
    // 0x8020D5FC: nop

    // 0x8020D600: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x8020D604: addu        $a0, $t7, $t0
    ctx->r4 = ADD32(ctx->r15, ctx->r8);
L_8020D608:
    // 0x8020D608: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x8020D60C: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x8020D610: slt         $at, $a0, $t8
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8020D614: beq         $at, $zero, L_8020D448
    if (ctx->r1 == 0) {
        // 0x8020D618: sw          $t8, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r24;
            goto L_8020D448;
    }
    // 0x8020D618: sw          $t8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r24;
    // 0x8020D61C: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x8020D620: addu        $v0, $t1, $t0
    ctx->r2 = ADD32(ctx->r9, ctx->r8);
L_8020D624:
    // 0x8020D624: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x8020D628: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x8020D62C: slt         $at, $v0, $t4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8020D630: beq         $at, $zero, L_8020D41C
    if (ctx->r1 == 0) {
        // 0x8020D634: sw          $t4, 0x98($sp)
        MEM_W(0X98, ctx->r29) = ctx->r12;
            goto L_8020D41C;
    }
    // 0x8020D634: sw          $t4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r12;
L_8020D638:
    // 0x8020D638: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x8020D63C: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x8020D640: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x8020D644: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x8020D648: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x8020D64C: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x8020D650: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x8020D654: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x8020D658: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x8020D65C: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x8020D660: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x8020D664: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x8020D668: jr          $ra
    // 0x8020D66C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    TRACE_RETURN()
    return;
    // 0x8020D66C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_8020ED4C_5CA21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020ED4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020ED50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020ED54: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020ED58: jal         0x80013AC4
    // 0x8020ED5C: addiu       $a0, $a0, -0x33A8
    ctx->r4 = ADD32(ctx->r4, -0X33A8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020ED5C: addiu       $a0, $a0, -0x33A8
    ctx->r4 = ADD32(ctx->r4, -0X33A8);
    after_0:
    // 0x8020ED60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020ED64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020ED68: jr          $ra
    // 0x8020ED6C: nop

    TRACE_RETURN()
    return;
    // 0x8020ED6C: nop

;}
RECOMP_FUNC void func_8020EAA0_5C9F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EAA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EAA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EAA8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EAAC: jal         0x80013AC4
    // 0x8020EAB0: addiu       $a0, $a0, -0x3610
    ctx->r4 = ADD32(ctx->r4, -0X3610);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EAB0: addiu       $a0, $a0, -0x3610
    ctx->r4 = ADD32(ctx->r4, -0X3610);
    after_0:
    // 0x8020EAB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EAB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EABC: jr          $ra
    // 0x8020EAC0: nop

    TRACE_RETURN()
    return;
    // 0x8020EAC0: nop

;}
RECOMP_FUNC void func_80224834_5DFD04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224834: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x80224838: lhu         $v0, 0x5E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X5E);
    // 0x8022483C: beq         $t6, $zero, L_80224AB4
    if (ctx->r14 == 0) {
        // 0x80224840: nop
    
            goto L_80224AB4;
    }
    // 0x80224840: nop

    // 0x80224844: lbu         $t7, 0x0($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X0);
    // 0x80224848: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x8022484C: lui         $t6, 0x8023
    ctx->r14 = S32(0X8023 << 16);
    // 0x80224850: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80224854: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x80224858: bne         $t9, $zero, L_80224AB4
    if (ctx->r25 != 0) {
        // 0x8022485C: sb          $t8, 0x0($a3)
        MEM_B(0X0, ctx->r7) = ctx->r24;
            goto L_80224AB4;
    }
    // 0x8022485C: sb          $t8, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r24;
    // 0x80224860: lbu         $t3, 0x0($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0X0);
    // 0x80224864: addiu       $t6, $t6, 0x6988
    ctx->r14 = ADD32(ctx->r14, 0X6988);
    // 0x80224868: addu        $t1, $t5, $t6
    ctx->r9 = ADD32(ctx->r13, ctx->r14);
    // 0x8022486C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80224870: sb          $t4, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r12;
    // 0x80224874: lw          $t7, -0x4($t1)
    ctx->r15 = MEM_W(ctx->r9, -0X4);
    // 0x80224878: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8022487C: andi        $t4, $t4, 0xFF
    ctx->r12 = ctx->r12 & 0XFF;
    // 0x80224880: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x80224884: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80224888: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x8022488C: addu        $t9, $t8, $t2
    ctx->r25 = ADD32(ctx->r24, ctx->r10);
    // 0x80224890: lw          $t3, 0x0($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X0);
    // 0x80224894: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x80224898: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8022489C: lbu         $t0, 0x4($t6)
    ctx->r8 = MEM_BU(ctx->r14, 0X4);
    // 0x802248A0: bne         $t0, $zero, L_802248C0
    if (ctx->r8 != 0) {
        // 0x802248A4: nop
    
            goto L_802248C0;
    }
    // 0x802248A4: nop

    // 0x802248A8: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x802248AC: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x802248B0: bne         $t8, $zero, L_802248C0
    if (ctx->r24 != 0) {
        // 0x802248B4: nop
    
            goto L_802248C0;
    }
    // 0x802248B4: nop

    // 0x802248B8: jr          $ra
    // 0x802248BC: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    TRACE_RETURN()
    return;
    // 0x802248BC: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_802248C0:
    // 0x802248C0: beq         $t0, $zero, L_802248D0
    if (ctx->r8 == 0) {
        // 0x802248C4: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_802248D0;
    }
    // 0x802248C4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802248C8: bnel        $t0, $at, L_802248F8
    if (ctx->r8 != ctx->r1) {
        // 0x802248CC: lbu         $t9, 0xAB($a0)
        ctx->r25 = MEM_BU(ctx->r4, 0XAB);
            goto L_802248F8;
    }
    goto skip_0;
    // 0x802248CC: lbu         $t9, 0xAB($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XAB);
    skip_0:
L_802248D0:
    // 0x802248D0: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x802248D4: lw          $t9, -0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, -0X4);
    // 0x802248D8: andi        $t6, $zero, 0xFF
    ctx->r14 = 0 & 0XFF;
    // 0x802248DC: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x802248E0: lw          $t4, 0x8($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X8);
    // 0x802248E4: addu        $t3, $t4, $t2
    ctx->r11 = ADD32(ctx->r12, ctx->r10);
    // 0x802248E8: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x802248EC: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x802248F0: lbu         $t0, 0x4($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X4);
    // 0x802248F4: lbu         $t9, 0xAB($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XAB);
L_802248F8:
    // 0x802248F8: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x802248FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80224900: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80224904: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80224908: bgez        $t9, L_8022491C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8022490C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8022491C;
    }
    // 0x8022490C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80224910: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80224914: nop

    // 0x80224918: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8022491C:
    // 0x8022491C: bgez        $t0, L_80224934
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80224920: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80224934;
    }
    // 0x80224920: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80224924: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80224928: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8022492C: nop

    // 0x80224930: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_80224934:
    // 0x80224934: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x80224938: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8022493C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80224940: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80224944: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80224948: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8022494C: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80224950: div.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x80224954: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80224958: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8022495C: nop

    // 0x80224960: cvt.w.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_D(ctx->f18.d);
    // 0x80224964: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80224968: nop

    // 0x8022496C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x80224970: beql        $t3, $zero, L_802249C4
    if (ctx->r11 == 0) {
        // 0x80224974: mfc1        $t3, $f6
        ctx->r11 = (int32_t)ctx->f6.u32l;
            goto L_802249C4;
    }
    goto skip_1;
    // 0x80224974: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x80224978: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8022497C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80224980: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80224984: sub.d       $f6, $f18, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f6.d = ctx->f18.d - ctx->f6.d;
    // 0x80224988: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8022498C: nop

    // 0x80224990: cvt.w.d     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_D(ctx->f6.d);
    // 0x80224994: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80224998: nop

    // 0x8022499C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x802249A0: bne         $t3, $zero, L_802249B8
    if (ctx->r11 != 0) {
        // 0x802249A4: nop
    
            goto L_802249B8;
    }
    // 0x802249A4: nop

    // 0x802249A8: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x802249AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802249B0: b           L_802249D0
    // 0x802249B4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_802249D0;
    // 0x802249B4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_802249B8:
    // 0x802249B8: b           L_802249D0
    // 0x802249BC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_802249D0;
    // 0x802249BC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x802249C0: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
L_802249C4:
    // 0x802249C4: nop

    // 0x802249C8: bltz        $t3, L_802249B8
    if (SIGNED(ctx->r11) < 0) {
        // 0x802249CC: nop
    
            goto L_802249B8;
    }
    // 0x802249CC: nop

L_802249D0:
    // 0x802249D0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802249D4: andi        $t6, $t3, 0xFF
    ctx->r14 = ctx->r11 & 0XFF;
    // 0x802249D8: bne         $t6, $zero, L_802249E4
    if (ctx->r14 != 0) {
        // 0x802249DC: sb          $t3, 0x0($a3)
        MEM_B(0X0, ctx->r7) = ctx->r11;
            goto L_802249E4;
    }
    // 0x802249DC: sb          $t3, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r11;
    // 0x802249E0: sb          $t5, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r13;
L_802249E4:
    // 0x802249E4: lw          $t7, -0x4($t1)
    ctx->r15 = MEM_W(ctx->r9, -0X4);
    // 0x802249E8: lbu         $t3, 0x0($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0X0);
    // 0x802249EC: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x802249F0: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x802249F4: sll         $t6, $t3, 3
    ctx->r14 = S32(ctx->r11 << 3);
    // 0x802249F8: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x802249FC: addu        $t9, $t8, $t2
    ctx->r25 = ADD32(ctx->r24, ctx->r10);
    // 0x80224A00: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x80224A04: andi        $t7, $v0, 0x18
    ctx->r15 = ctx->r2 & 0X18;
    // 0x80224A08: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x80224A0C: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x80224A10: bne         $t7, $at, L_80224A3C
    if (ctx->r15 != ctx->r1) {
        // 0x80224A14: lw          $v1, 0x0($t5)
        ctx->r3 = MEM_W(ctx->r13, 0X0);
            goto L_80224A3C;
    }
    // 0x80224A14: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x80224A18: lw          $t8, 0x48($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X48);
    // 0x80224A1C: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x80224A20: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80224A24: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80224A28: sll         $t6, $t4, 3
    ctx->r14 = S32(ctx->r12 << 3);
    // 0x80224A2C: addu        $t5, $a1, $t6
    ctx->r13 = ADD32(ctx->r5, ctx->r14);
    // 0x80224A30: addu        $t3, $t9, $at
    ctx->r11 = ADD32(ctx->r25, ctx->r1);
    // 0x80224A34: jr          $ra
    // 0x80224A38: sw          $t3, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r11;
    TRACE_RETURN()
    return;
    // 0x80224A38: sw          $t3, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r11;
L_80224A3C:
    // 0x80224A3C: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
    // 0x80224A40: beq         $t7, $zero, L_80224A68
    if (ctx->r15 == 0) {
        // 0x80224A44: lw          $t6, 0x10($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X10);
            goto L_80224A68;
    }
    // 0x80224A44: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80224A48: lw          $t8, 0x48($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X48);
    // 0x80224A4C: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80224A50: sll         $t3, $t6, 3
    ctx->r11 = S32(ctx->r14 << 3);
    // 0x80224A54: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80224A58: addu        $t4, $t9, $at
    ctx->r12 = ADD32(ctx->r25, ctx->r1);
    // 0x80224A5C: addu        $t5, $a1, $t3
    ctx->r13 = ADD32(ctx->r5, ctx->r11);
    // 0x80224A60: jr          $ra
    // 0x80224A64: sw          $t4, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r12;
    TRACE_RETURN()
    return;
    // 0x80224A64: sw          $t4, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r12;
L_80224A68:
    // 0x80224A68: andi        $t7, $v0, 0x10
    ctx->r15 = ctx->r2 & 0X10;
    // 0x80224A6C: beq         $t7, $zero, L_80224A98
    if (ctx->r15 == 0) {
        // 0x80224A70: lw          $t3, 0x10($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X10);
            goto L_80224A98;
    }
    // 0x80224A70: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x80224A74: lw          $t8, 0x40($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X40);
    // 0x80224A78: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x80224A7C: lui         $at, 0xF700
    ctx->r1 = S32(0XF700 << 16);
    // 0x80224A80: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80224A84: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x80224A88: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x80224A8C: addu        $t6, $t9, $at
    ctx->r14 = ADD32(ctx->r25, ctx->r1);
    // 0x80224A90: jr          $ra
    // 0x80224A94: sw          $t6, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80224A94: sw          $t6, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r14;
L_80224A98:
    // 0x80224A98: lw          $t7, 0x38($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X38);
    // 0x80224A9C: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x80224AA0: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x80224AA4: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x80224AA8: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80224AAC: addu        $t6, $a1, $t4
    ctx->r14 = ADD32(ctx->r5, ctx->r12);
    // 0x80224AB0: sw          $t9, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r25;
L_80224AB4:
    // 0x80224AB4: jr          $ra
    // 0x80224AB8: nop

    TRACE_RETURN()
    return;
    // 0x80224AB8: nop

;}
RECOMP_FUNC void func_8020F574_5CAA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F574: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F578: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F57C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F580: jal         0x80013AC4
    // 0x8020F584: addiu       $a0, $a0, -0x2E64
    ctx->r4 = ADD32(ctx->r4, -0X2E64);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F584: addiu       $a0, $a0, -0x2E64
    ctx->r4 = ADD32(ctx->r4, -0X2E64);
    after_0:
    // 0x8020F588: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F58C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F590: jr          $ra
    // 0x8020F594: nop

    TRACE_RETURN()
    return;
    // 0x8020F594: nop

;}
RECOMP_FUNC void func_8022212C_5DD5FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022212C: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x80222130: lbu         $t6, 0x7743($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7743);
    // 0x80222134: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80222138: jr          $ra
    // 0x8022213C: sw          $t6, -0x3A0C($at)
    MEM_W(-0X3A0C, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8022213C: sw          $t6, -0x3A0C($at)
    MEM_W(-0X3A0C, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80217558_5D2A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217558: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021755C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80217560: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80217564: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80217568: lhu         $t6, 0x34($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X34);
    // 0x8021756C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80217570: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80217574: sh          $t6, 0x34($a1)
    MEM_H(0X34, ctx->r5) = ctx->r14;
    // 0x80217578: jal         0x800141C4
    // 0x8021757C: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x8021757C: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    after_0:
    // 0x80217580: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80217584: bne         $v0, $at, L_8021759C
    if (ctx->r2 != ctx->r1) {
        // 0x80217588: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8021759C;
    }
    // 0x80217588: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8021758C: jal         0x80216640
    // 0x80217590: lhu         $a1, 0x34($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X34);
    func_80216640_5D1B10(rdram, ctx);
        goto after_1;
    // 0x80217590: lhu         $a1, 0x34($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X34);
    after_1:
    // 0x80217594: jal         0x80013B14
    // 0x80217598: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    func_80013B14_14714(rdram, ctx);
        goto after_2;
    // 0x80217598: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    after_2:
L_8021759C:
    // 0x8021759C: lhu         $t7, 0x3C($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X3C);
    // 0x802175A0: sh          $t7, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r15;
    // 0x802175A4: jal         0x800141C4
    // 0x802175A8: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
    func_800141C4_14DC4(rdram, ctx);
        goto after_3;
    // 0x802175A8: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
    after_3:
    // 0x802175AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802175B0: bne         $v0, $at, L_802175C8
    if (ctx->r2 != ctx->r1) {
        // 0x802175B4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802175C8;
    }
    // 0x802175B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802175B8: jal         0x80216640
    // 0x802175BC: lhu         $a1, 0x3C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X3C);
    func_80216640_5D1B10(rdram, ctx);
        goto after_4;
    // 0x802175BC: lhu         $a1, 0x3C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X3C);
    after_4:
    // 0x802175C0: jal         0x80013B14
    // 0x802175C4: lhu         $a0, 0x3C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3C);
    func_80013B14_14714(rdram, ctx);
        goto after_5;
    // 0x802175C4: lhu         $a0, 0x3C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3C);
    after_5:
L_802175C8:
    // 0x802175C8: lhu         $t8, 0x44($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X44);
    // 0x802175CC: sh          $t8, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r24;
    // 0x802175D0: lhu         $t9, 0x3C($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X3C);
    // 0x802175D4: lhu         $v0, 0x34($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X34);
    // 0x802175D8: beql        $v0, $t9, L_802175F0
    if (ctx->r2 == ctx->r25) {
        // 0x802175DC: sh          $zero, 0x34($s1)
        MEM_H(0X34, ctx->r17) = 0;
            goto L_802175F0;
    }
    goto skip_0;
    // 0x802175DC: sh          $zero, 0x34($s1)
    MEM_H(0X34, ctx->r17) = 0;
    skip_0:
    // 0x802175E0: lhu         $t0, 0x44($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X44);
    // 0x802175E4: bne         $v0, $t0, L_802175F0
    if (ctx->r2 != ctx->r8) {
        // 0x802175E8: nop
    
            goto L_802175F0;
    }
    // 0x802175E8: nop

    // 0x802175EC: sh          $zero, 0x34($s1)
    MEM_H(0X34, ctx->r17) = 0;
L_802175F0:
    // 0x802175F0: jal         0x80014218
    // 0x802175F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014218_14E18(rdram, ctx);
        goto after_6;
    // 0x802175F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802175F8: lbu         $t1, 0x5($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X5);
    // 0x802175FC: sb          $t1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r9;
    // 0x80217600: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80217604: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x80217608: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x8021760C: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x80217610: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80217614: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x80217618: lhu         $t2, 0x14($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X14);
    // 0x8021761C: sh          $t2, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r10;
    // 0x80217620: lhu         $t3, 0x16($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X16);
    // 0x80217624: sh          $t3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r11;
    // 0x80217628: lhu         $t4, 0x18($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X18);
    // 0x8021762C: sh          $t4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r12;
    // 0x80217630: lwc1        $f10, 0x1C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x80217634: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x80217638: lwc1        $f16, 0x20($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X20);
    // 0x8021763C: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
    // 0x80217640: lwc1        $f18, 0x24($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X24);
    // 0x80217644: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x80217648: lwc1        $f4, 0x28($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X28);
    // 0x8021764C: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x80217650: lw          $t5, 0x2C($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X2C);
    // 0x80217654: sw          $t5, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r13;
    // 0x80217658: lw          $t6, 0x30($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X30);
    // 0x8021765C: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x80217660: lw          $at, 0x64($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X64);
    // 0x80217664: sw          $at, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r1;
    // 0x80217668: lw          $t8, 0x68($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X68);
    // 0x8021766C: sw          $t8, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r24;
    // 0x80217670: lbu         $t9, 0x64($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X64);
    // 0x80217674: sb          $t9, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r25;
    // 0x80217678: lb          $t0, 0x65($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X65);
    // 0x8021767C: sb          $t0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r8;
    // 0x80217680: lwc1        $f6, 0x68($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X68);
    // 0x80217684: swc1        $f6, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f6.u32l;
    // 0x80217688: lwc1        $f8, 0x6C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x8021768C: swc1        $f8, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f8.u32l;
    // 0x80217690: lwc1        $f10, 0x70($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X70);
    // 0x80217694: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x80217698: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8021769C: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
    // 0x802176A0: lbu         $t1, 0x7C($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X7C);
    // 0x802176A4: sb          $t1, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = ctx->r9;
    // 0x802176A8: lhu         $t2, 0x7E($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X7E);
    // 0x802176AC: sh          $t2, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r10;
    // 0x802176B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802176B4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802176B8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802176BC: jr          $ra
    // 0x802176C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802176C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8021A26C_5D573C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A26C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021A270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021A274: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8021A278: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021A27C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021A280: lui         $t9, 0x8023
    ctx->r25 = S32(0X8023 << 16);
    // 0x8021A284: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x8021A288: addiu       $t9, $t9, 0x7AE8
    ctx->r25 = ADD32(ctx->r25, 0X7AE8);
    // 0x8021A28C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8021A290: lui         $t0, 0xFB00
    ctx->r8 = S32(0XFB00 << 16);
    // 0x8021A294: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x8021A298: sw          $t8, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r24;
    // 0x8021A29C: sw          $t9, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r25;
    // 0x8021A2A0: sw          $t0, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->r8;
    // 0x8021A2A4: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8021A2A8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8021A2AC: andi        $t3, $a3, 0xFF
    ctx->r11 = ctx->r7 & 0XFF;
    // 0x8021A2B0: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x8021A2B4: sll         $t2, $a2, 24
    ctx->r10 = S32(ctx->r6 << 24);
    // 0x8021A2B8: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8021A2BC: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8021A2C0: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8021A2C4: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x8021A2C8: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x8021A2CC: or          $t3, $t9, $t1
    ctx->r11 = ctx->r25 | ctx->r9;
    // 0x8021A2D0: lui         $t2, 0xB800
    ctx->r10 = S32(0XB800 << 16);
    // 0x8021A2D4: sw          $t3, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r11;
    // 0x8021A2D8: sw          $t2, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r10;
    // 0x8021A2DC: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x8021A2E0: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    // 0x8021A2E4: subu        $a1, $v0, $v0
    ctx->r5 = SUB32(ctx->r2, ctx->r2);
    // 0x8021A2E8: addiu       $a1, $a1, -0x18
    ctx->r5 = ADD32(ctx->r5, -0X18);
    // 0x8021A2EC: jal         0x80040620
    // 0x8021A2F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8021A2F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8021A2F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021A2F8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8021A2FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8021A300: jr          $ra
    // 0x8021A304: nop

    TRACE_RETURN()
    return;
    // 0x8021A304: nop

;}
RECOMP_FUNC void func_8020EFD4_5CA4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EFD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EFD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EFDC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EFE0: jal         0x80013AC4
    // 0x8020EFE4: addiu       $a0, $a0, -0x3224
    ctx->r4 = ADD32(ctx->r4, -0X3224);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EFE4: addiu       $a0, $a0, -0x3224
    ctx->r4 = ADD32(ctx->r4, -0X3224);
    after_0:
    // 0x8020EFE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EFEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EFF0: jr          $ra
    // 0x8020EFF4: nop

    TRACE_RETURN()
    return;
    // 0x8020EFF4: nop

;}
RECOMP_FUNC void func_8020E524_5C99F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E52C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E530: jal         0x80013AC4
    // 0x8020E534: addiu       $a0, $a0, -0x39A0
    ctx->r4 = ADD32(ctx->r4, -0X39A0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E534: addiu       $a0, $a0, -0x39A0
    ctx->r4 = ADD32(ctx->r4, -0X39A0);
    after_0:
    // 0x8020E538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E53C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E540: jr          $ra
    // 0x8020E544: nop

    TRACE_RETURN()
    return;
    // 0x8020E544: nop

;}
RECOMP_FUNC void func_80210D5C_5CC22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210D5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210D60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210D64: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210D68: jal         0x80013AC4
    // 0x80210D6C: addiu       $a0, $a0, -0x1910
    ctx->r4 = ADD32(ctx->r4, -0X1910);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210D6C: addiu       $a0, $a0, -0x1910
    ctx->r4 = ADD32(ctx->r4, -0X1910);
    after_0:
    // 0x80210D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210D78: jr          $ra
    // 0x80210D7C: nop

    TRACE_RETURN()
    return;
    // 0x80210D7C: nop

;}
RECOMP_FUNC void func_8020E8CC_5C9D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E8CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E8D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E8D4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E8D8: jal         0x80013AC4
    // 0x8020E8DC: addiu       $a0, $a0, -0x36BC
    ctx->r4 = ADD32(ctx->r4, -0X36BC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E8DC: addiu       $a0, $a0, -0x36BC
    ctx->r4 = ADD32(ctx->r4, -0X36BC);
    after_0:
    // 0x8020E8E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E8E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E8E8: jr          $ra
    // 0x8020E8EC: nop

    TRACE_RETURN()
    return;
    // 0x8020E8EC: nop

;}
RECOMP_FUNC void func_8020E44C_5C991C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E44C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E454: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E458: jal         0x80013AC4
    // 0x8020E45C: addiu       $a0, $a0, -0x3A08
    ctx->r4 = ADD32(ctx->r4, -0X3A08);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E45C: addiu       $a0, $a0, -0x3A08
    ctx->r4 = ADD32(ctx->r4, -0X3A08);
    after_0:
    // 0x8020E460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E468: jr          $ra
    // 0x8020E46C: nop

    TRACE_RETURN()
    return;
    // 0x8020E46C: nop

;}
RECOMP_FUNC void func_8021F1F8_5DA6C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F1F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021F1FC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021F200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F204: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021F208: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8021F20C: lhu         $a2, 0x14($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X14);
    // 0x8021F210: jal         0x8021F154
    // 0x8021F214: lhu         $a3, 0x16($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X16);
    func_8021F154_5DA624(rdram, ctx);
        goto after_0;
    // 0x8021F214: lhu         $a3, 0x16($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X16);
    after_0:
    // 0x8021F218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F21C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021F220: jr          $ra
    // 0x8021F224: nop

    TRACE_RETURN()
    return;
    // 0x8021F224: nop

;}
RECOMP_FUNC void func_8020F964_5CAE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F96C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F970: jal         0x80013AC4
    // 0x8020F974: addiu       $a0, $a0, -0x2AE0
    ctx->r4 = ADD32(ctx->r4, -0X2AE0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F974: addiu       $a0, $a0, -0x2AE0
    ctx->r4 = ADD32(ctx->r4, -0X2AE0);
    after_0:
    // 0x8020F978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F97C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F980: jr          $ra
    // 0x8020F984: nop

    TRACE_RETURN()
    return;
    // 0x8020F984: nop

;}
RECOMP_FUNC void func_80214054_5CF524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214054: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80214058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021405C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80214060: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80214064: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x80214068: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8021406C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80214070: andi        $t6, $v0, 0x200
    ctx->r14 = ctx->r2 & 0X200;
    // 0x80214074: beq         $t6, $zero, L_80214094
    if (ctx->r14 == 0) {
        // 0x80214078: addiu       $a0, $a0, 0x3FF0
        ctx->r4 = ADD32(ctx->r4, 0X3FF0);
            goto L_80214094;
    }
    // 0x80214078: addiu       $a0, $a0, 0x3FF0
    ctx->r4 = ADD32(ctx->r4, 0X3FF0);
    // 0x8021407C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x80214080: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x80214084: jalr        $t9
    // 0x80214088: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80214088: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x8021408C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80214090: lw          $v0, 0x68($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X68);
L_80214094:
    // 0x80214094: andi        $t7, $v0, 0x2000
    ctx->r15 = ctx->r2 & 0X2000;
    // 0x80214098: beql        $t7, $zero, L_802140BC
    if (ctx->r15 == 0) {
        // 0x8021409C: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_802140BC;
    }
    goto skip_0;
    // 0x8021409C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_0:
    // 0x802140A0: lwc1        $f4, 0x78($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X78);
    // 0x802140A4: lwc1        $f8, 0x80($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X80);
    // 0x802140A8: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x802140AC: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x802140B0: swc1        $f6, 0x78($a1)
    MEM_W(0X78, ctx->r5) = ctx->f6.u32l;
    // 0x802140B4: swc1        $f10, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->f10.u32l;
    // 0x802140B8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_802140BC:
    // 0x802140BC: lwc1        $f16, 0x7C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X7C);
    // 0x802140C0: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x802140C4: nop

    // 0x802140C8: bc1fl       L_8021412C
    if (!c1cs) {
        // 0x802140CC: lhu         $v0, 0x8A($a1)
        ctx->r2 = MEM_HU(ctx->r5, 0X8A);
            goto L_8021412C;
    }
    goto skip_1;
    // 0x802140CC: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    skip_1:
    // 0x802140D0: lw          $t8, 0x68($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X68);
    // 0x802140D4: andi        $t0, $t8, 0x1000
    ctx->r8 = ctx->r24 & 0X1000;
    // 0x802140D8: beql        $t0, $zero, L_8021412C
    if (ctx->r8 == 0) {
        // 0x802140DC: lhu         $v0, 0x8A($a1)
        ctx->r2 = MEM_HU(ctx->r5, 0X8A);
            goto L_8021412C;
    }
    goto skip_2;
    // 0x802140DC: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    skip_2:
    // 0x802140E0: lwc1        $f18, 0xD0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XD0);
    // 0x802140E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802140E8: ldc1        $f6, -0x6098($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X6098);
    // 0x802140EC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802140F0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802140F4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802140F8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802140FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80214100: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80214104: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80214108: swc1        $f0, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f0.u32l;
    // 0x8021410C: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x80214110: nop

    // 0x80214114: bc1fl       L_8021412C
    if (!c1cs) {
        // 0x80214118: lhu         $v0, 0x8A($a1)
        ctx->r2 = MEM_HU(ctx->r5, 0X8A);
            goto L_8021412C;
    }
    goto skip_3;
    // 0x80214118: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    skip_3:
    // 0x8021411C: swc1        $f2, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->f2.u32l;
    // 0x80214120: swc1        $f2, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f2.u32l;
    // 0x80214124: swc1        $f2, 0x78($a1)
    MEM_W(0X78, ctx->r5) = ctx->f2.u32l;
    // 0x80214128: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
L_8021412C:
    // 0x8021412C: lwc1        $f18, 0x7C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X7C);
    // 0x80214130: slti        $v1, $v0, 0x78
    ctx->r3 = SIGNED(ctx->r2) < 0X78 ? 1 : 0;
    // 0x80214134: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x80214138: sh          $t1, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r9;
    // 0x8021413C: beq         $v1, $zero, L_8021419C
    if (ctx->r3 == 0) {
        // 0x80214140: swc1        $f18, 0xD0($a1)
        MEM_W(0XD0, ctx->r5) = ctx->f18.u32l;
            goto L_8021419C;
    }
    // 0x80214140: swc1        $f18, 0xD0($a1)
    MEM_W(0XD0, ctx->r5) = ctx->f18.u32l;
    // 0x80214144: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x80214148: bgez        $t2, L_8021415C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8021414C: andi        $t3, $t2, 0x1
        ctx->r11 = ctx->r10 & 0X1;
            goto L_8021415C;
    }
    // 0x8021414C: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80214150: beq         $t3, $zero, L_8021415C
    if (ctx->r11 == 0) {
        // 0x80214154: nop
    
            goto L_8021415C;
    }
    // 0x80214154: nop

    // 0x80214158: addiu       $t3, $t3, -0x2
    ctx->r11 = ADD32(ctx->r11, -0X2);
L_8021415C:
    // 0x8021415C: bgtzl       $t3, L_8021417C
    if (SIGNED(ctx->r11) > 0) {
        // 0x80214160: lw          $t6, 0x60($a1)
        ctx->r14 = MEM_W(ctx->r5, 0X60);
            goto L_8021417C;
    }
    goto skip_4;
    // 0x80214160: lw          $t6, 0x60($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X60);
    skip_4:
    // 0x80214164: lw          $t4, 0x60($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X60);
    // 0x80214168: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x8021416C: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x80214170: b           L_80214184
    // 0x80214174: sw          $t5, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r13;
        goto L_80214184;
    // 0x80214174: sw          $t5, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r13;
    // 0x80214178: lw          $t6, 0x60($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X60);
L_8021417C:
    // 0x8021417C: ori         $t9, $t6, 0x20
    ctx->r25 = ctx->r14 | 0X20;
    // 0x80214180: sw          $t9, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r25;
L_80214184:
    // 0x80214184: lhu         $t7, 0x8A($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X8A);
    // 0x80214188: bnel        $t7, $zero, L_802141A0
    if (ctx->r15 != 0) {
        // 0x8021418C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802141A0;
    }
    goto skip_5;
    // 0x8021418C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x80214190: lw          $t8, 0x68($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X68);
    // 0x80214194: ori         $t0, $t8, 0x2
    ctx->r8 = ctx->r24 | 0X2;
    // 0x80214198: sw          $t0, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r8;
L_8021419C:
    // 0x8021419C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802141A0:
    // 0x802141A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802141A4: jr          $ra
    // 0x802141A8: nop

    TRACE_RETURN()
    return;
    // 0x802141A8: nop

;}
RECOMP_FUNC void func_80218D7C_5D424C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218D7C: sh          $a1, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r5;
    // 0x80218D80: sh          $a2, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r6;
    // 0x80218D84: sh          $a3, 0x40($a0)
    MEM_H(0X40, ctx->r4) = ctx->r7;
    // 0x80218D88: jr          $ra
    // 0x80218D8C: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80218D8C: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8020D6BC_5C8B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D6BC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8020D6C0: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x8020D6C4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8020D6C8: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x8020D6CC: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x8020D6D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D6D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D6D8: addu        $t6, $v0, $a1
    ctx->r14 = ADD32(ctx->r2, ctx->r5);
    // 0x8020D6DC: lhu         $t7, 0x2DF2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X2DF2);
    // 0x8020D6E0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8020D6E4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020D6E8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8020D6EC: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x8020D6F0: lw          $v1, 0x1300($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1300);
    // 0x8020D6F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8020D6F8: lw          $t9, 0x18($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X18);
    // 0x8020D6FC: sw          $t9, -0x4FC4($at)
    MEM_W(-0X4FC4, ctx->r1) = ctx->r25;
    // 0x8020D700: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x8020D704: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x8020D708: lw          $t9, 0x303C($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X303C);
    // 0x8020D70C: jalr        $t9
    // 0x8020D710: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8020D710: nop

    after_0:
    // 0x8020D714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D71C: jr          $ra
    // 0x8020D720: nop

    TRACE_RETURN()
    return;
    // 0x8020D720: nop

;}
RECOMP_FUNC void func_8021DF60_5D9430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DF60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021DF64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021DF68: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8021DF6C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021DF70: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021DF74: lui         $t9, 0x8024
    ctx->r25 = S32(0X8024 << 16);
    // 0x8021DF78: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021DF7C: addiu       $t9, $t9, -0x7A20
    ctx->r25 = ADD32(ctx->r25, -0X7A20);
    // 0x8021DF80: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8021DF84: lui         $t0, 0xFB00
    ctx->r8 = S32(0XFB00 << 16);
    // 0x8021DF88: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x8021DF8C: sw          $t8, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r24;
    // 0x8021DF90: sw          $t9, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r25;
    // 0x8021DF94: sw          $t0, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->r8;
    // 0x8021DF98: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8021DF9C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8021DFA0: andi        $t3, $a3, 0xFF
    ctx->r11 = ctx->r7 & 0XFF;
    // 0x8021DFA4: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x8021DFA8: sll         $t2, $a2, 24
    ctx->r10 = S32(ctx->r6 << 24);
    // 0x8021DFAC: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8021DFB0: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8021DFB4: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8021DFB8: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x8021DFBC: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x8021DFC0: or          $t3, $t9, $t1
    ctx->r11 = ctx->r25 | ctx->r9;
    // 0x8021DFC4: lui         $t2, 0xB800
    ctx->r10 = S32(0XB800 << 16);
    // 0x8021DFC8: sw          $t3, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r11;
    // 0x8021DFCC: sw          $t2, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r10;
    // 0x8021DFD0: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x8021DFD4: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    // 0x8021DFD8: subu        $a1, $v0, $v0
    ctx->r5 = SUB32(ctx->r2, ctx->r2);
    // 0x8021DFDC: addiu       $a1, $a1, -0x18
    ctx->r5 = ADD32(ctx->r5, -0X18);
    // 0x8021DFE0: jal         0x80040620
    // 0x8021DFE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8021DFE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8021DFE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021DFEC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8021DFF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8021DFF4: jr          $ra
    // 0x8021DFF8: nop

    TRACE_RETURN()
    return;
    // 0x8021DFF8: nop

;}
RECOMP_FUNC void func_80213E34_5CF304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213E34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213E38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213E3C: lbu         $v0, 0xD9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD9);
    // 0x80213E40: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80213E44: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80213E48: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x80213E4C: beq         $t7, $zero, L_80213E60
    if (ctx->r15 == 0) {
        // 0x80213E50: sw          $t6, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->r14;
            goto L_80213E60;
    }
    // 0x80213E50: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x80213E54: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x80213E58: sh          $v1, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r3;
    // 0x80213E5C: lbu         $v0, 0xD9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD9);
L_80213E60:
    // 0x80213E60: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x80213E64: beq         $t8, $zero, L_80213E74
    if (ctx->r24 == 0) {
        // 0x80213E68: ori         $v1, $zero, 0x8000
        ctx->r3 = 0 | 0X8000;
            goto L_80213E74;
    }
    // 0x80213E68: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x80213E6C: sh          $v1, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r3;
    // 0x80213E70: lbu         $v0, 0xD9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD9);
L_80213E74:
    // 0x80213E74: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x80213E78: beql        $t9, $zero, L_80213E88
    if (ctx->r25 == 0) {
        // 0x80213E7C: lbu         $a1, 0xD8($a0)
        ctx->r5 = MEM_BU(ctx->r4, 0XD8);
            goto L_80213E88;
    }
    goto skip_0;
    // 0x80213E7C: lbu         $a1, 0xD8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XD8);
    skip_0:
    // 0x80213E80: sh          $v1, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r3;
    // 0x80213E84: lbu         $a1, 0xD8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XD8);
L_80213E88:
    // 0x80213E88: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80213E8C: jal         0x80216ED0
    // 0x80213E90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80216ED0_5D23A0(rdram, ctx);
        goto after_0;
    // 0x80213E90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80213E94: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80213E98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80213E9C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80213EA0: jal         0x80219E08
    // 0x80213EA4: sb          $zero, 0x65($a2)
    MEM_B(0X65, ctx->r6) = 0;
    func_80219E08_5D52D8(rdram, ctx);
        goto after_1;
    // 0x80213EA4: sb          $zero, 0x65($a2)
    MEM_B(0X65, ctx->r6) = 0;
    after_1:
    // 0x80213EA8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80213EAC: jal         0x8003521C
    // 0x80213EB0: addiu       $a0, $a0, 0x3EC4
    ctx->r4 = ADD32(ctx->r4, 0X3EC4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x80213EB0: addiu       $a0, $a0, 0x3EC4
    ctx->r4 = ADD32(ctx->r4, 0X3EC4);
    after_2:
    // 0x80213EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80213EBC: jr          $ra
    // 0x80213EC0: nop

    TRACE_RETURN()
    return;
    // 0x80213EC0: nop

;}
RECOMP_FUNC void func_8020EB0C_5C9FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EB0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EB10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EB14: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EB18: jal         0x80013AC4
    // 0x8020EB1C: addiu       $a0, $a0, -0x35D0
    ctx->r4 = ADD32(ctx->r4, -0X35D0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EB1C: addiu       $a0, $a0, -0x35D0
    ctx->r4 = ADD32(ctx->r4, -0X35D0);
    after_0:
    // 0x8020EB20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EB24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EB28: jr          $ra
    // 0x8020EB2C: nop

    TRACE_RETURN()
    return;
    // 0x8020EB2C: nop

;}
RECOMP_FUNC void func_80210E34_5CC304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210E34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210E38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210E3C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210E40: jal         0x80013AC4
    // 0x80210E44: addiu       $a0, $a0, -0x1890
    ctx->r4 = ADD32(ctx->r4, -0X1890);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210E44: addiu       $a0, $a0, -0x1890
    ctx->r4 = ADD32(ctx->r4, -0X1890);
    after_0:
    // 0x80210E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210E4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210E50: jr          $ra
    // 0x80210E54: nop

    TRACE_RETURN()
    return;
    // 0x80210E54: nop

;}
RECOMP_FUNC void func_802204FC_5DB9CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802204FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80220500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80220504: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80220508: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8022050C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80220510: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80220514: jal         0x8003F1FC
    // 0x80220518: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8003F1FC_3FDFC(rdram, ctx);
        goto after_0;
    // 0x80220518: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022051C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80220520: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80220524: beq         $v0, $at, L_802205E4
    if (ctx->r2 == ctx->r1) {
        // 0x80220528: lw          $a2, 0x20($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X20);
            goto L_802205E4;
    }
    // 0x80220528: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8022052C: lhu         $t6, 0xA8($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0XA8);
    // 0x80220530: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80220534: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80220538: bgez        $t6, L_8022054C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8022053C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8022054C;
    }
    // 0x8022053C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80220540: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80220544: nop

    // 0x80220548: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8022054C:
    // 0x8022054C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80220550: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80220554: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80220558: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022055C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80220560: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80220564: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80220568: nop

    // 0x8022056C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80220570: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80220574: nop

    // 0x80220578: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8022057C: beql        $t8, $zero, L_802205CC
    if (ctx->r24 == 0) {
        // 0x80220580: mfc1        $t8, $f18
        ctx->r24 = (int32_t)ctx->f18.u32l;
            goto L_802205CC;
    }
    goto skip_0;
    // 0x80220580: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    skip_0:
    // 0x80220584: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80220588: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8022058C: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80220590: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80220594: nop

    // 0x80220598: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8022059C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802205A0: nop

    // 0x802205A4: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x802205A8: bne         $t8, $zero, L_802205C0
    if (ctx->r24 != 0) {
        // 0x802205AC: nop
    
            goto L_802205C0;
    }
    // 0x802205AC: nop

    // 0x802205B0: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x802205B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802205B8: b           L_802205D8
    // 0x802205BC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_802205D8;
    // 0x802205BC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_802205C0:
    // 0x802205C0: b           L_802205D8
    // 0x802205C4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_802205D8;
    // 0x802205C4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802205C8: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
L_802205CC:
    // 0x802205CC: nop

    // 0x802205D0: bltz        $t8, L_802205C0
    if (SIGNED(ctx->r24) < 0) {
        // 0x802205D4: nop
    
            goto L_802205C0;
    }
    // 0x802205D4: nop

L_802205D8:
    // 0x802205D8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802205DC: b           L_8022069C
    // 0x802205E0: sh          $t8, 0x7E($v1)
    MEM_H(0X7E, ctx->r3) = ctx->r24;
        goto L_8022069C;
    // 0x802205E0: sh          $t8, 0x7E($v1)
    MEM_H(0X7E, ctx->r3) = ctx->r24;
L_802205E4:
    // 0x802205E4: lhu         $t9, 0xA8($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0XA8);
    // 0x802205E8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802205EC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802205F0: bgez        $t9, L_80220604
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802205F4: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80220604;
    }
    // 0x802205F4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802205F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802205FC: nop

    // 0x80220600: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_80220604:
    // 0x80220604: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80220608: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022060C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80220610: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80220614: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80220618: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8022061C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80220620: nop

    // 0x80220624: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80220628: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8022062C: nop

    // 0x80220630: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80220634: beql        $t1, $zero, L_80220684
    if (ctx->r9 == 0) {
        // 0x80220638: mfc1        $t1, $f18
        ctx->r9 = (int32_t)ctx->f18.u32l;
            goto L_80220684;
    }
    goto skip_1;
    // 0x80220638: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    skip_1:
    // 0x8022063C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80220640: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80220644: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80220648: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8022064C: nop

    // 0x80220650: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80220654: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80220658: nop

    // 0x8022065C: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80220660: bne         $t1, $zero, L_80220678
    if (ctx->r9 != 0) {
        // 0x80220664: nop
    
            goto L_80220678;
    }
    // 0x80220664: nop

    // 0x80220668: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8022066C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80220670: b           L_80220690
    // 0x80220674: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_80220690;
    // 0x80220674: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_80220678:
    // 0x80220678: b           L_80220690
    // 0x8022067C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_80220690;
    // 0x8022067C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80220680: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
L_80220684:
    // 0x80220684: nop

    // 0x80220688: bltz        $t1, L_80220678
    if (SIGNED(ctx->r9) < 0) {
        // 0x8022068C: nop
    
            goto L_80220678;
    }
    // 0x8022068C: nop

L_80220690:
    // 0x80220690: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80220694: sh          $t1, 0x7E($v1)
    MEM_H(0X7E, ctx->r3) = ctx->r9;
    // 0x80220698: nop

L_8022069C:
    // 0x8022069C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802206A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802206A4: jr          $ra
    // 0x802206A8: nop

    TRACE_RETURN()
    return;
    // 0x802206A8: nop

;}
RECOMP_FUNC void func_8020E29C_5C976C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E29C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E2A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E2A4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E2A8: jal         0x80013AC4
    // 0x8020E2AC: addiu       $a0, $a0, -0x3A88
    ctx->r4 = ADD32(ctx->r4, -0X3A88);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E2AC: addiu       $a0, $a0, -0x3A88
    ctx->r4 = ADD32(ctx->r4, -0X3A88);
    after_0:
    // 0x8020E2B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E2B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E2B8: jr          $ra
    // 0x8020E2BC: nop

    TRACE_RETURN()
    return;
    // 0x8020E2BC: nop

;}
RECOMP_FUNC void func_8020F8B0_5CAD80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F8B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F8B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F8B8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F8BC: jal         0x80013AC4
    // 0x8020F8C0: addiu       $a0, $a0, -0x2BA0
    ctx->r4 = ADD32(ctx->r4, -0X2BA0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F8C0: addiu       $a0, $a0, -0x2BA0
    ctx->r4 = ADD32(ctx->r4, -0X2BA0);
    after_0:
    // 0x8020F8C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F8C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F8CC: jr          $ra
    // 0x8020F8D0: nop

    TRACE_RETURN()
    return;
    // 0x8020F8D0: nop

;}
RECOMP_FUNC void func_8020E938_5C9E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E93C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E940: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E944: jal         0x80013AC4
    // 0x8020E948: addiu       $a0, $a0, -0x36A4
    ctx->r4 = ADD32(ctx->r4, -0X36A4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E948: addiu       $a0, $a0, -0x36A4
    ctx->r4 = ADD32(ctx->r4, -0X36A4);
    after_0:
    // 0x8020E94C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E954: jr          $ra
    // 0x8020E958: nop

    TRACE_RETURN()
    return;
    // 0x8020E958: nop

;}
RECOMP_FUNC void func_80210384_5CB854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210384: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021038C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210390: jal         0x80013AC4
    // 0x80210394: addiu       $a0, $a0, -0x20AC
    ctx->r4 = ADD32(ctx->r4, -0X20AC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210394: addiu       $a0, $a0, -0x20AC
    ctx->r4 = ADD32(ctx->r4, -0X20AC);
    after_0:
    // 0x80210398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021039C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802103A0: jr          $ra
    // 0x802103A4: nop

    TRACE_RETURN()
    return;
    // 0x802103A4: nop

;}
RECOMP_FUNC void func_8021C194_5D7664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C194: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021C198: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8021C19C: lw          $a1, 0x84($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X84);
    // 0x8021C1A0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8021C1A4: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021C1A8: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8021C1AC: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8021C1B0: nop

    // 0x8021C1B4: bc1fl       L_8021C1E0
    if (!c1cs) {
        // 0x8021C1B8: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_8021C1E0;
    }
    goto skip_0;
    // 0x8021C1B8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_0:
    // 0x8021C1BC: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021C1C0: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8021C1C4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8021C1C8: nop

    // 0x8021C1CC: bc1fl       L_8021C1E0
    if (!c1cs) {
        // 0x8021C1D0: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_8021C1E0;
    }
    goto skip_1;
    // 0x8021C1D0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_1:
    // 0x8021C1D4: jr          $ra
    // 0x8021C1D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8021C1D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021C1DC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_8021C1E0:
    // 0x8021C1E0: lwc1        $f12, 0x10($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021C1E4: lwc1        $f14, 0x10($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8021C1E8: bc1fl       L_8021C200
    if (!c1cs) {
        // 0x8021C1EC: sub.s       $f18, $f2, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_8021C200;
    }
    goto skip_2;
    // 0x8021C1EC: sub.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
    skip_2:
    // 0x8021C1F0: sub.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8021C1F4: b           L_8021C204
    // 0x8021C1F8: neg.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = -ctx->f18.fl;
        goto L_8021C204;
    // 0x8021C1F8: neg.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = -ctx->f18.fl;
    // 0x8021C1FC: sub.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
L_8021C200:
    // 0x8021C200: mov.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
L_8021C204:
    // 0x8021C204: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8021C208: nop

    // 0x8021C20C: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x8021C210: nop

    // 0x8021C214: bc1fl       L_8021C258
    if (!c1cs) {
        // 0x8021C218: sub.s       $f2, $f14, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f12.fl;
            goto L_8021C258;
    }
    goto skip_3;
    // 0x8021C218: sub.s       $f2, $f14, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f12.fl;
    skip_3:
    // 0x8021C21C: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8021C220: nop

    // 0x8021C224: bc1fl       L_8021C23C
    if (!c1cs) {
        // 0x8021C228: sub.s       $f0, $f14, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
            goto L_8021C23C;
    }
    goto skip_4;
    // 0x8021C228: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    skip_4:
    // 0x8021C22C: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x8021C230: b           L_8021C23C
    // 0x8021C234: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021C23C;
    // 0x8021C234: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021C238: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
L_8021C23C:
    // 0x8021C23C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8021C240: nop

    // 0x8021C244: bc1fl       L_8021C258
    if (!c1cs) {
        // 0x8021C248: sub.s       $f2, $f14, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f12.fl;
            goto L_8021C258;
    }
    goto skip_5;
    // 0x8021C248: sub.s       $f2, $f14, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f12.fl;
    skip_5:
    // 0x8021C24C: jr          $ra
    // 0x8021C250: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8021C250: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021C254: sub.s       $f2, $f14, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f12.fl;
L_8021C258:
    // 0x8021C258: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8021C25C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021C260: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021C264: nop

    // 0x8021C268: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8021C26C: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8021C270: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8021C274: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8021C278: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021C27C: swc1        $f8, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f8.u32l;
    // 0x8021C280: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021C284: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8021C288: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8021C28C: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8021C290: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021C294: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021C298: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    // 0x8021C29C: jr          $ra
    // 0x8021C2A0: nop

    TRACE_RETURN()
    return;
    // 0x8021C2A0: nop

;}
RECOMP_FUNC void func_802203C8_5DB898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802203C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802203CC: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x802203D0: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x802203D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802203D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802203DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802203E0: lw          $a0, 0x2C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2C);
    // 0x802203E4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x802203E8: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x802203EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x802203F0: addiu       $t9, $t9, 0x360
    ctx->r25 = ADD32(ctx->r25, 0X360);
    // 0x802203F4: and         $t7, $a0, $at
    ctx->r15 = ctx->r4 & ctx->r1;
    // 0x802203F8: jalr        $t9
    // 0x802203FC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802203FC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x80220400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80220404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80220408: jr          $ra
    // 0x8022040C: nop

    TRACE_RETURN()
    return;
    // 0x8022040C: nop

;}
