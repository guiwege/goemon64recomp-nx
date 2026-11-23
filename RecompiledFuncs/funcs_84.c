#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801CDE24_660CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDE24: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CDE28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CDE2C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801CDE30: jal         0x801CD2A8
    // 0x801CDE34: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_801CD2A8_660158(rdram, ctx);
        goto after_0;
    // 0x801CDE34: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CDE38: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x801CDE3C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CDE40: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801CDE44: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801CDE48: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    // 0x801CDE4C: jal         0x801CC5C8
    // 0x801CDE50: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_1;
    // 0x801CDE50: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_1:
    // 0x801CDE54: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801CDE58: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x801CDE5C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CDE60: sw          $v0, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->r2;
    // 0x801CDE64: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x801CDE68: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x801CDE6C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CDE70: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CDE74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CDE78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CDE7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CDE80: jal         0x801CC56C
    // 0x801CDE84: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_2;
    // 0x801CDE84: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x801CDE88: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x801CDE8C: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CDE90: lw          $t0, 0x3328($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3328);
    // 0x801CDE94: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    // 0x801CDE98: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CDE9C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x801CDEA0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801CDEA4: jal         0x801CB6AC
    // 0x801CDEA8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_3;
    // 0x801CDEA8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_3:
    // 0x801CDEAC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CDEB0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801CDEB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CDEB8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x801CDEBC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801CDEC0: jal         0x801CB684
    // 0x801CDEC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801CB684_65E534(rdram, ctx);
        goto after_4;
    // 0x801CDEC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x801CDEC8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x801CDECC: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x801CDED0: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CDED4: addiu       $a0, $a0, -0x2230
    ctx->r4 = ADD32(ctx->r4, -0X2230);
    // 0x801CDED8: jal         0x8003521C
    // 0x801CDEDC: sw          $t2, 0x50($t3)
    MEM_W(0X50, ctx->r11) = ctx->r10;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801CDEDC: sw          $t2, 0x50($t3)
    MEM_W(0X50, ctx->r11) = ctx->r10;
    after_5:
    // 0x801CDEE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CDEE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801CDEE8: jr          $ra
    // 0x801CDEEC: nop

    TRACE_RETURN()
    return;
    // 0x801CDEEC: nop

;}
RECOMP_FUNC void func_801CC95C_65F80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC95C: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CC960: lw          $v0, -0x78FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X78FC);
    // 0x801CC964: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CC968: beq         $v0, $zero, L_801CC970
    if (ctx->r2 == 0) {
        // 0x801CC96C: nop
    
            goto L_801CC970;
    }
    // 0x801CC96C: nop

L_801CC970:
    // 0x801CC970: jr          $ra
    // 0x801CC974: nop

    TRACE_RETURN()
    return;
    // 0x801CC974: nop

;}
RECOMP_FUNC void func_801D1480_664330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1480: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D1484: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x801D1488: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x801D148C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x801D1490: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x801D1494: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x801D1498: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801D149C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801D14A0: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x801D14A4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x801D14A8: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x801D14AC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D14B0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x801D14B4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x801D14B8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D14BC: blez        $s7, L_801D1544
    if (SIGNED(ctx->r23) <= 0) {
        // 0x801D14C0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_801D1544;
    }
    // 0x801D14C0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801D14C4: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x801D14C8: lui         $s5, 0x801D
    ctx->r21 = S32(0X801D << 16);
    // 0x801D14CC: addiu       $s5, $s5, 0x3440
    ctx->r21 = ADD32(ctx->r21, 0X3440);
    // 0x801D14D0: beq         $v0, $zero, L_801D1544
    if (ctx->r2 == 0) {
        // 0x801D14D4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801D1544;
    }
    // 0x801D14D4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D14D8: addiu       $s4, $zero, 0xF
    ctx->r20 = ADD32(0, 0XF);
L_801D14DC:
    // 0x801D14DC: bne         $s4, $v1, L_801D14F8
    if (ctx->r20 != ctx->r3) {
        // 0x801D14E0: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_801D14F8;
    }
    // 0x801D14E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801D14E4: lui         $v1, 0x8006
    ctx->r3 = S32(0X8006 << 16);
    // 0x801D14E8: lui         $a0, 0x8006
    ctx->r4 = S32(0X8006 << 16);
    // 0x801D14EC: lw          $a0, 0x3924($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3924);
    // 0x801D14F0: b           L_801D1520
    // 0x801D14F4: lw          $v1, 0x391C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X391C);
        goto L_801D1520;
    // 0x801D14F4: lw          $v1, 0x391C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X391C);
L_801D14F8:
    // 0x801D14F8: addu        $t6, $s5, $v0
    ctx->r14 = ADD32(ctx->r21, ctx->r2);
    // 0x801D14FC: lbu         $a3, 0x0($t6)
    ctx->r7 = MEM_BU(ctx->r14, 0X0);
    // 0x801D1500: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801D1504: jal         0x80010C6C
    // 0x801D1508: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_80010C6C_1186C(rdram, ctx);
        goto after_0;
    // 0x801D1508: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_0:
    // 0x801D150C: lui         $v1, 0x8006
    ctx->r3 = S32(0X8006 << 16);
    // 0x801D1510: lui         $a0, 0x8006
    ctx->r4 = S32(0X8006 << 16);
    // 0x801D1514: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x801D1518: lw          $a0, 0x3924($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3924);
    // 0x801D151C: lw          $v1, 0x391C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X391C);
L_801D1520:
    // 0x801D1520: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801D1524: slt         $at, $s1, $s7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x801D1528: addu        $t7, $s0, $v1
    ctx->r15 = ADD32(ctx->r16, ctx->r3);
    // 0x801D152C: addu        $s0, $t7, $a0
    ctx->r16 = ADD32(ctx->r15, ctx->r4);
    // 0x801D1530: beq         $at, $zero, L_801D1544
    if (ctx->r1 == 0) {
        // 0x801D1534: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_801D1544;
    }
    // 0x801D1534: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801D1538: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x801D153C: bne         $v0, $zero, L_801D14DC
    if (ctx->r2 != 0) {
        // 0x801D1540: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801D14DC;
    }
    // 0x801D1540: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801D1544:
    // 0x801D1544: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801D1548: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x801D154C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x801D1550: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801D1554: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801D1558: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x801D155C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x801D1560: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x801D1564: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x801D1568: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x801D156C: jr          $ra
    // 0x801D1570: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801D1570: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801D068C_66353C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D068C: sw          $a1, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r5;
    // 0x801D0690: jr          $ra
    // 0x801D0694: sw          $a2, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r6;
    TRACE_RETURN()
    return;
    // 0x801D0694: sw          $a2, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void func_801D2044_664EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2044: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D204C: jal         0x80010374
    // 0x801D2050: lw          $a0, 0x90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X90);
    func_80010374_10F74(rdram, ctx);
        goto after_0;
    // 0x801D2050: lw          $a0, 0x90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X90);
    after_0:
    // 0x801D2054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D205C: jr          $ra
    // 0x801D2060: nop

    TRACE_RETURN()
    return;
    // 0x801D2060: nop

;}
RECOMP_FUNC void func_801CD9C0_660870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD9C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CD9C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CD9C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CD9CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CD9D0: lw          $t6, 0xAC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XAC);
    // 0x801CD9D4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801CD9D8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CD9DC: bne         $t6, $zero, L_801CD9F0
    if (ctx->r14 != 0) {
        // 0x801CD9E0: addiu       $a0, $a0, -0xE8C
        ctx->r4 = ADD32(ctx->r4, -0XE8C);
            goto L_801CD9F0;
    }
    // 0x801CD9E0: addiu       $a0, $a0, -0xE8C
    ctx->r4 = ADD32(ctx->r4, -0XE8C);
    // 0x801CD9E4: jal         0x8003521C
    // 0x801CD9E8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801CD9E8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CD9EC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_801CD9F0:
    // 0x801CD9F0: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
    // 0x801CD9F4: lw          $t7, 0x50($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X50);
    // 0x801CD9F8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801CD9FC: sw          $t8, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r24;
    // 0x801CDA00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CDA04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CDA08: jr          $ra
    // 0x801CDA0C: nop

    TRACE_RETURN()
    return;
    // 0x801CDA0C: nop

;}
RECOMP_FUNC void func_801CE87C_66172C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE87C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801CE880: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801CE884: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801CE888: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801CE88C: jal         0x801CD028
    // 0x801CE890: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    func_801CD028_65FED8(rdram, ctx);
        goto after_0;
    // 0x801CE890: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CE894: lui         $a3, 0x801F
    ctx->r7 = S32(0X801F << 16);
    // 0x801CE898: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801CE89C: lw          $t6, -0x66E8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X66E8);
    // 0x801CE8A0: lw          $a3, -0x66EC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X66EC);
    // 0x801CE8A4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801CE8A8: beq         $t6, $a3, L_801CE8B8
    if (ctx->r14 == ctx->r7) {
        // 0x801CE8AC: nop
    
            goto L_801CE8B8;
    }
    // 0x801CE8AC: nop

    // 0x801CE8B0: jal         0x801CD4E0
    // 0x801CE8B4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_801CD4E0_660390(rdram, ctx);
        goto after_1;
    // 0x801CE8B4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
L_801CE8B8:
    // 0x801CE8B8: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CE8BC: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CE8C0: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801CE8C4: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x801CE8C8: lhu         $v0, -0x4F86($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F86);
    // 0x801CE8CC: andi        $t8, $v0, 0x9000
    ctx->r24 = ctx->r2 & 0X9000;
    // 0x801CE8D0: beql        $t8, $zero, L_801CEB70
    if (ctx->r24 == 0) {
        // 0x801CE8D4: andi        $t7, $v0, 0x4000
        ctx->r15 = ctx->r2 & 0X4000;
            goto L_801CEB70;
    }
    goto skip_0;
    // 0x801CE8D4: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    skip_0:
    // 0x801CE8D8: jal         0x80038B98
    // 0x801CE8DC: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    func_80038B98_39798(rdram, ctx);
        goto after_2;
    // 0x801CE8DC: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_2:
    // 0x801CE8E0: lui         $a3, 0x801F
    ctx->r7 = S32(0X801F << 16);
    // 0x801CE8E4: lw          $a3, -0x66EC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X66EC);
    // 0x801CE8E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CE8EC: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801CE8F0: beq         $a3, $at, L_801CE92C
    if (ctx->r7 == ctx->r1) {
        // 0x801CE8F4: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_801CE92C;
    }
    // 0x801CE8F4: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x801CE8F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CE8FC: beq         $v0, $at, L_801CE92C
    if (ctx->r2 == ctx->r1) {
        // 0x801CE900: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_801CE92C;
    }
    // 0x801CE900: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801CE904: beq         $v0, $at, L_801CE92C
    if (ctx->r2 == ctx->r1) {
        // 0x801CE908: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_801CE92C;
    }
    // 0x801CE908: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801CE90C: beq         $v0, $at, L_801CEB64
    if (ctx->r2 == ctx->r1) {
        // 0x801CE910: lw          $s0, 0x50($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X50);
            goto L_801CEB64;
    }
    // 0x801CE910: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x801CE914: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CE918: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801CE91C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801CE920: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x801CE924: b           L_801CEB6C
    // 0x801CE928: lhu         $v0, -0x4F86($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F86);
        goto L_801CEB6C;
    // 0x801CE928: lhu         $v0, -0x4F86($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F86);
L_801CE92C:
    // 0x801CE92C: addiu       $t0, $a3, -0x2
    ctx->r8 = ADD32(ctx->r7, -0X2);
    // 0x801CE930: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x801CE934: addiu       $t3, $t3, 0x32F0
    ctx->r11 = ADD32(ctx->r11, 0X32F0);
    // 0x801CE938: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x801CE93C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x801CE940: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x801CE944: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801CE948: lw          $t4, 0x6C($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X6C);
    // 0x801CE94C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x801CE950: bnel        $t4, $zero, L_801CE970
    if (ctx->r12 != 0) {
        // 0x801CE954: lw          $t5, 0xB0($s0)
        ctx->r13 = MEM_W(ctx->r16, 0XB0);
            goto L_801CE970;
    }
    goto skip_1;
    // 0x801CE954: lw          $t5, 0xB0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XB0);
    skip_1:
    // 0x801CE958: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CE95C: jal         0x80011734
    // 0x801CE960: addiu       $a1, $a1, -0x1784
    ctx->r5 = ADD32(ctx->r5, -0X1784);
    func_80011734_12334(rdram, ctx);
        goto after_3;
    // 0x801CE960: addiu       $a1, $a1, -0x1784
    ctx->r5 = ADD32(ctx->r5, -0X1784);
    after_3:
    // 0x801CE964: b           L_801CEC28
    // 0x801CE968: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801CEC28;
    // 0x801CE968: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801CE96C: lw          $t5, 0xB0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XB0);
L_801CE970:
    // 0x801CE970: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CE974: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x801CE978: bne         $t5, $at, L_801CEA84
    if (ctx->r13 != ctx->r1) {
        // 0x801CE97C: lui         $t1, 0x801F
        ctx->r9 = S32(0X801F << 16);
            goto L_801CEA84;
    }
    // 0x801CE97C: lui         $t1, 0x801F
    ctx->r9 = S32(0X801F << 16);
    // 0x801CE980: jal         0x801CCCAC
    // 0x801CE984: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801CCCAC_65FB5C(rdram, ctx);
        goto after_4;
    // 0x801CE984: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_4:
    // 0x801CE988: bne         $v0, $zero, L_801CE9A4
    if (ctx->r2 != 0) {
        // 0x801CE98C: lui         $at, 0x801F
        ctx->r1 = S32(0X801F << 16);
            goto L_801CE9A4;
    }
    // 0x801CE98C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CE990: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CE994: jal         0x8003521C
    // 0x801CE998: addiu       $a0, $a0, -0x21DC
    ctx->r4 = ADD32(ctx->r4, -0X21DC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801CE998: addiu       $a0, $a0, -0x21DC
    ctx->r4 = ADD32(ctx->r4, -0X21DC);
    after_5:
    // 0x801CE99C: b           L_801CEC28
    // 0x801CE9A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801CEC28;
    // 0x801CE9A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801CE9A4:
    // 0x801CE9A4: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x801CE9A8: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CE9AC: addiu       $v0, $v0, -0x66EC
    ctx->r2 = ADD32(ctx->r2, -0X66EC);
    // 0x801CE9B0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801CE9B4: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x801CE9B8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x801CE9BC: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x801CE9C0: sw          $t6, -0x66E4($at)
    MEM_W(-0X66E4, ctx->r1) = ctx->r14;
    // 0x801CE9C4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CE9C8: sw          $t0, -0x66E8($at)
    MEM_W(-0X66E8, ctx->r1) = ctx->r8;
    // 0x801CE9CC: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x801CE9D0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801CE9D4: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x801CE9D8: lw          $a0, 0x1C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X1C);
    // 0x801CE9DC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x801CE9E0: jal         0x800115B8
    // 0x801CE9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800115B8_121B8(rdram, ctx);
        goto after_6;
    // 0x801CE9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x801CE9E8: lw          $t4, 0x40($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X40);
    // 0x801CE9EC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801CE9F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CE9F4: sw          $t4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r12;
    // 0x801CE9F8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801CE9FC: jal         0x801CBBC4
    // 0x801CEA00: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_801CBBC4_65EA74(rdram, ctx);
        goto after_7;
    // 0x801CEA00: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_7:
    // 0x801CEA04: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x801CEA08: lui         $t5, 0x801F
    ctx->r13 = S32(0X801F << 16);
    // 0x801CEA0C: lw          $t5, -0x66EC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X66EC);
    // 0x801CEA10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CEA14: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801CEA18: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x801CEA1C: jal         0x801CD3B8
    // 0x801CEA20: lw          $a1, 0x1C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X1C);
    func_801CD3B8_660268(rdram, ctx);
        goto after_8;
    // 0x801CEA20: lw          $a1, 0x1C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X1C);
    after_8:
    // 0x801CEA24: lui         $t8, 0x801D
    ctx->r24 = S32(0X801D << 16);
    // 0x801CEA28: lw          $t8, 0x3330($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3330);
    // 0x801CEA2C: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    // 0x801CEA30: addiu       $a1, $zero, -0x28
    ctx->r5 = ADD32(0, -0X28);
    // 0x801CEA34: addiu       $a2, $zero, -0x5
    ctx->r6 = ADD32(0, -0X5);
    // 0x801CEA38: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801CEA3C: jal         0x801CB6AC
    // 0x801CEA40: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_9;
    // 0x801CEA40: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_9:
    // 0x801CEA44: lw          $t9, 0x1C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C);
    // 0x801CEA48: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CEA4C: lw          $a1, 0x3334($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3334);
    // 0x801CEA50: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x801CEA54: jal         0x801CB6A4
    // 0x801CEA58: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_801CB6A4_65E554(rdram, ctx);
        goto after_10;
    // 0x801CEA58: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_10:
    // 0x801CEA5C: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801CEA60: lw          $a1, -0x66EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X66EC);
    // 0x801CEA64: jal         0x801CD624
    // 0x801CEA68: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_801CD624_6604D4(rdram, ctx);
        goto after_11;
    // 0x801CEA68: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_11:
    // 0x801CEA6C: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CEA70: addiu       $a1, $a1, -0x1A78
    ctx->r5 = ADD32(ctx->r5, -0X1A78);
    // 0x801CEA74: jal         0x80011734
    // 0x801CEA78: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_80011734_12334(rdram, ctx);
        goto after_12;
    // 0x801CEA78: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_12:
    // 0x801CEA7C: b           L_801CEC28
    // 0x801CEA80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801CEC28;
    // 0x801CEA80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801CEA84:
    // 0x801CEA84: addiu       $t1, $t1, -0x69F0
    ctx->r9 = ADD32(ctx->r9, -0X69F0);
    // 0x801CEA88: addiu       $t3, $t1, 0x300
    ctx->r11 = ADD32(ctx->r9, 0X300);
    // 0x801CEA8C: or          $t4, $a1, $zero
    ctx->r12 = ctx->r5 | 0;
L_801CEA90:
    // 0x801CEA90: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x801CEA94: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x801CEA98: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x801CEA9C: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x801CEAA0: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x801CEAA4: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x801CEAA8: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x801CEAAC: bne         $t1, $t3, L_801CEA90
    if (ctx->r9 != ctx->r11) {
        // 0x801CEAB0: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_801CEA90;
    }
    // 0x801CEAB0: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x801CEAB4: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x801CEAB8: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x801CEABC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x801CEAC0: jal         0x801CCC80
    // 0x801CEAC4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_801CCC80_65FB30(rdram, ctx);
        goto after_13;
    // 0x801CEAC4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_13:
    // 0x801CEAC8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x801CEACC: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801CEAD0: addiu       $t6, $t6, -0x78F0
    ctx->r14 = ADD32(ctx->r14, -0X78F0);
    // 0x801CEAD4: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x801CEAD8: addu        $t5, $t5, $a1
    ctx->r13 = ADD32(ctx->r13, ctx->r5);
    // 0x801CEADC: sll         $t5, $t5, 8
    ctx->r13 = S32(ctx->r13 << 8);
    // 0x801CEAE0: jal         0x80023610
    // 0x801CEAE4: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    func_80023610_24210(rdram, ctx);
        goto after_14;
    // 0x801CEAE4: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    after_14:
    // 0x801CEAE8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801CEAEC: jal         0x801CE16C
    // 0x801CEAF0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_801CE16C_66101C(rdram, ctx);
        goto after_15;
    // 0x801CEAF0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_15:
    // 0x801CEAF4: bne         $v0, $zero, L_801CEC24
    if (ctx->r2 != 0) {
        // 0x801CEAF8: lui         $t7, 0x801F
        ctx->r15 = S32(0X801F << 16);
            goto L_801CEC24;
    }
    // 0x801CEAF8: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801CEAFC: lw          $t7, -0x66EC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X66EC);
    // 0x801CEB00: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x801CEB04: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x801CEB08: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801CEB0C: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x801CEB10: lw          $t0, 0x1C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1C);
    // 0x801CEB14: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x801CEB18: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x801CEB1C: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x801CEB20: lw          $t1, 0x294($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X294);
    // 0x801CEB24: lw          $a2, 0x6C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X6C);
    // 0x801CEB28: lw          $a3, 0x74($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X74);
    // 0x801CEB2C: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x801CEB30: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801CEB34: lw          $t4, 0x78($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X78);
    // 0x801CEB38: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x801CEB3C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801CEB40: lw          $t5, 0x264($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X264);
    // 0x801CEB44: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x801CEB48: mflo        $t6
    ctx->r14 = lo;
    // 0x801CEB4C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801CEB50: jal         0x801CB9F8
    // 0x801CEB54: nop

    func_801CB9F8_65E8A8(rdram, ctx);
        goto after_16;
    // 0x801CEB54: nop

    after_16:
    // 0x801CEB58: lui         $a3, 0x801F
    ctx->r7 = S32(0X801F << 16);
    // 0x801CEB5C: b           L_801CEBB4
    // 0x801CEB60: lw          $a3, -0x66EC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X66EC);
        goto L_801CEBB4;
    // 0x801CEB60: lw          $a3, -0x66EC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X66EC);
L_801CEB64:
    // 0x801CEB64: b           L_801CEBD4
    // 0x801CEB68: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
        goto L_801CEBD4;
    // 0x801CEB68: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
L_801CEB6C:
    // 0x801CEB6C: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
L_801CEB70:
    // 0x801CEB70: beq         $t7, $zero, L_801CEC24
    if (ctx->r15 == 0) {
        // 0x801CEB74: lui         $a3, 0x801F
        ctx->r7 = S32(0X801F << 16);
            goto L_801CEC24;
    }
    // 0x801CEB74: lui         $a3, 0x801F
    ctx->r7 = S32(0X801F << 16);
    // 0x801CEB78: lw          $a3, -0x66EC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X66EC);
    // 0x801CEB7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CEB80: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x801CEB84: beq         $a3, $at, L_801CEBB0
    if (ctx->r7 == ctx->r1) {
        // 0x801CEB88: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_801CEBB0;
    }
    // 0x801CEB88: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x801CEB8C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CEB90: beq         $v0, $at, L_801CEBB0
    if (ctx->r2 == ctx->r1) {
        // 0x801CEB94: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_801CEBB0;
    }
    // 0x801CEB94: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801CEB98: beq         $v0, $at, L_801CEBB0
    if (ctx->r2 == ctx->r1) {
        // 0x801CEB9C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_801CEBB0;
    }
    // 0x801CEB9C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801CEBA0: beql        $v0, $at, L_801CEBD0
    if (ctx->r2 == ctx->r1) {
        // 0x801CEBA4: lw          $s0, 0x50($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X50);
            goto L_801CEBD0;
    }
    goto skip_2;
    // 0x801CEBA4: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    skip_2:
    // 0x801CEBA8: b           L_801CEC28
    // 0x801CEBAC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801CEC28;
    // 0x801CEBAC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801CEBB0:
    // 0x801CEBB0: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
L_801CEBB4:
    // 0x801CEBB4: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x801CEBB8: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x801CEBBC: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    // 0x801CEBC0: addiu       $a1, $zero, -0x1E
    ctx->r5 = ADD32(0, -0X1E);
    // 0x801CEBC4: jal         0x800115B8
    // 0x801CEBC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800115B8_121B8(rdram, ctx);
        goto after_17;
    // 0x801CEBC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x801CEBCC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
L_801CEBD0:
    // 0x801CEBD0: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
L_801CEBD4:
    // 0x801CEBD4: lw          $t0, 0x40($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X40);
    // 0x801CEBD8: jal         0x800116AC
    // 0x801CEBDC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_800116AC_122AC(rdram, ctx);
        goto after_18;
    // 0x801CEBDC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_18:
    // 0x801CEBE0: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CEBE4: addiu       $a1, $a1, -0x13C8
    ctx->r5 = ADD32(ctx->r5, -0X13C8);
    // 0x801CEBE8: jal         0x80011734
    // 0x801CEBEC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_80011734_12334(rdram, ctx);
        goto after_19;
    // 0x801CEBEC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_19:
    // 0x801CEBF0: lw          $t2, 0x1C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1C);
    // 0x801CEBF4: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x801CEBF8: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CEBFC: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x801CEC00: lw          $a1, 0x32FC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X32FC);
    // 0x801CEC04: jal         0x801CB6A4
    // 0x801CEC08: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    func_801CB6A4_65E554(rdram, ctx);
        goto after_20;
    // 0x801CEC08: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    after_20:
    // 0x801CEC0C: lw          $t1, 0x30($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X30);
    // 0x801CEC10: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CEC14: lw          $a1, 0x3300($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3300);
    // 0x801CEC18: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    // 0x801CEC1C: jal         0x801CB6A4
    // 0x801CEC20: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    func_801CB6A4_65E554(rdram, ctx);
        goto after_21;
    // 0x801CEC20: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    after_21:
L_801CEC24:
    // 0x801CEC24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801CEC28:
    // 0x801CEC28: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801CEC2C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801CEC30: jr          $ra
    // 0x801CEC34: nop

    TRACE_RETURN()
    return;
    // 0x801CEC34: nop

;}
RECOMP_FUNC void func_801CD410_6602C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD410: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801CD414: lw          $t8, -0x66E8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X66E8);
    // 0x801CD418: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CD41C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CD420: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801CD424: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CD428: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801CD42C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801CD430: sw          $a1, -0x66EC($at)
    MEM_W(-0X66EC, ctx->r1) = ctx->r5;
    // 0x801CD434: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x801CD438: lw          $a0, 0x78($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X78);
    // 0x801CD43C: addiu       $t1, $zero, 0x60
    ctx->r9 = ADD32(0, 0X60);
    // 0x801CD440: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801CD444: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801CD448: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CD44C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801CD450: jal         0x801CC56C
    // 0x801CD454: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_0;
    // 0x801CD454: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_0:
    // 0x801CD458: lui         $t2, 0x801F
    ctx->r10 = S32(0X801F << 16);
    // 0x801CD45C: lw          $t2, -0x66EC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X66EC);
    // 0x801CD460: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x801CD464: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x801CD468: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801CD46C: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x801CD470: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x801CD474: lw          $a0, 0x1C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X1C);
    // 0x801CD478: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CD47C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801CD480: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x801CD484: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801CD488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CD48C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CD490: jal         0x801CC56C
    // 0x801CD494: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_1;
    // 0x801CD494: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x801CD498: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801CD49C: lw          $t8, -0x66EC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X66EC);
    // 0x801CD4A0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x801CD4A4: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x801CD4A8: addu        $t9, $v0, $t7
    ctx->r25 = ADD32(ctx->r2, ctx->r15);
    // 0x801CD4AC: lw          $a1, 0x1C($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X1C);
    // 0x801CD4B0: jal         0x801CD3B8
    // 0x801CD4B4: lw          $a0, 0x40($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X40);
    func_801CD3B8_660268(rdram, ctx);
        goto after_2;
    // 0x801CD4B4: lw          $a0, 0x40($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X40);
    after_2:
    // 0x801CD4B8: lui         $t0, 0x801F
    ctx->r8 = S32(0X801F << 16);
    // 0x801CD4BC: lw          $t0, -0x66EC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X66EC);
    // 0x801CD4C0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CD4C4: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    // 0x801CD4C8: jal         0x80038B98
    // 0x801CD4CC: sw          $t0, -0x66E8($at)
    MEM_W(-0X66E8, ctx->r1) = ctx->r8;
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801CD4CC: sw          $t0, -0x66E8($at)
    MEM_W(-0X66E8, ctx->r1) = ctx->r8;
    after_3:
    // 0x801CD4D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD4D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801CD4D8: jr          $ra
    // 0x801CD4DC: nop

    TRACE_RETURN()
    return;
    // 0x801CD4DC: nop

;}
RECOMP_FUNC void func_801D0174_663024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0174: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801D0178: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801D017C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D0180: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801D0184: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D0188: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D018C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D0190: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801D0194: lhu         $t7, -0x4F86($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X4F86);
    // 0x801D0198: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x801D019C: beql        $t8, $zero, L_801D01B8
    if (ctx->r24 == 0) {
        // 0x801D01A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D01B8;
    }
    goto skip_0;
    // 0x801D01A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D01A4: sw          $zero, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = 0;
    // 0x801D01A8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D01AC: jal         0x8003521C
    // 0x801D01B0: addiu       $a0, $a0, 0xDC0
    ctx->r4 = ADD32(ctx->r4, 0XDC0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801D01B0: addiu       $a0, $a0, 0xDC0
    ctx->r4 = ADD32(ctx->r4, 0XDC0);
    after_0:
    // 0x801D01B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D01B8:
    // 0x801D01B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D01BC: jr          $ra
    // 0x801D01C0: nop

    TRACE_RETURN()
    return;
    // 0x801D01C0: nop

;}
RECOMP_FUNC void func_801D0D44_663BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0D44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D0D48: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D0D4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D0D50: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801D0D54: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D0D58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D0D5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D0D60: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801D0D64: addiu       $a1, $a1, 0xBE0
    ctx->r5 = ADD32(ctx->r5, 0XBE0);
    // 0x801D0D68: jal         0x80034E08
    // 0x801D0D6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801D0D6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801D0D70: bne         $v0, $zero, L_801D0D80
    if (ctx->r2 != 0) {
        // 0x801D0D74: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801D0D80;
    }
    // 0x801D0D74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D0D78: b           L_801D0DAC
    // 0x801D0D7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D0DAC;
    // 0x801D0D7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D0D80:
    // 0x801D0D80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0D84: jal         0x80011610
    // 0x801D0D88: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_80011610_12210(rdram, ctx);
        goto after_1;
    // 0x801D0D88: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801D0D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0D90: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D0D94: jal         0x800115F8
    // 0x801D0D98: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_800115F8_121F8(rdram, ctx);
        goto after_2;
    // 0x801D0D98: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x801D0D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0DA0: jal         0x800119D4
    // 0x801D0DA4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800119D4_125D4(rdram, ctx);
        goto after_3;
    // 0x801D0DA4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x801D0DA8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801D0DAC:
    // 0x801D0DAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D0DB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D0DB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D0DB8: jr          $ra
    // 0x801D0DBC: nop

    TRACE_RETURN()
    return;
    // 0x801D0DBC: nop

;}
RECOMP_FUNC void func_801CB6A4_65E554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB6A4: jr          $ra
    // 0x801CB6A8: sw          $a1, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801CB6A8: sw          $a1, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_801CEF08_661DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CEF08: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801CEF0C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801CEF10: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x801CEF14: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x801CEF18: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x801CEF1C: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x801CEF20: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x801CEF24: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x801CEF28: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x801CEF2C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801CEF30: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801CEF34: jal         0x801CD24C
    // 0x801CEF38: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_801CD24C_6600FC(rdram, ctx);
        goto after_0;
    // 0x801CEF38: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CEF3C: lui         $s3, 0x801D
    ctx->r19 = S32(0X801D << 16);
    // 0x801CEF40: addiu       $s3, $s3, 0x3340
    ctx->r19 = ADD32(ctx->r19, 0X3340);
    // 0x801CEF44: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801CEF48: addiu       $s6, $s7, 0x5C
    ctx->r22 = ADD32(ctx->r23, 0X5C);
    // 0x801CEF4C: addiu       $s4, $zero, 0xC
    ctx->r20 = ADD32(0, 0XC);
    // 0x801CEF50: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_801CEF54:
    // 0x801CEF54: beql        $s0, $s2, L_801CEFB4
    if (ctx->r16 == ctx->r18) {
        // 0x801CEF58: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_801CEFB4;
    }
    goto skip_0;
    // 0x801CEF58: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x801CEF5C: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CEF60: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x801CEF64: addu        $s1, $s6, $t8
    ctx->r17 = ADD32(ctx->r22, ctx->r24);
    // 0x801CEF68: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x801CEF6C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801CEF70: mflo        $t6
    ctx->r14 = lo;
    // 0x801CEF74: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x801CEF78: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x801CEF7C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x801CEF80: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x801CEF84: jal         0x801CC5C8
    // 0x801CEF88: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_801CC5C8_65F478(rdram, ctx);
        goto after_1;
    // 0x801CEF88: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x801CEF8C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x801CEF90: addiu       $t9, $zero, 0x60
    ctx->r25 = ADD32(0, 0X60);
    // 0x801CEF94: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801CEF98: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801CEF9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CEFA0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CEFA4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801CEFA8: jal         0x801CC56C
    // 0x801CEFAC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_2;
    // 0x801CEFAC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_2:
    // 0x801CEFB0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_801CEFB4:
    // 0x801CEFB4: slti        $at, $s0, 0x7
    ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x801CEFB8: bne         $at, $zero, L_801CEF54
    if (ctx->r1 != 0) {
        // 0x801CEFBC: nop
    
            goto L_801CEF54;
    }
    // 0x801CEFBC: nop

    // 0x801CEFC0: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CEFC4: lw          $t0, 0x32FC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X32FC);
    // 0x801CEFC8: lw          $a0, 0x1C($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X1C);
    // 0x801CEFCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CEFD0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801CEFD4: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801CEFD8: jal         0x801CB6AC
    // 0x801CEFDC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_3;
    // 0x801CEFDC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_3:
    // 0x801CEFE0: lui         $t1, 0x801D
    ctx->r9 = S32(0X801D << 16);
    // 0x801CEFE4: lw          $t1, 0x3300($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3300);
    // 0x801CEFE8: lw          $a0, 0x30($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X30);
    // 0x801CEFEC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x801CEFF0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801CEFF4: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801CEFF8: jal         0x801CB6AC
    // 0x801CEFFC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_4;
    // 0x801CEFFC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_4:
    // 0x801CF000: lui         $t2, 0x801D
    ctx->r10 = S32(0X801D << 16);
    // 0x801CF004: lw          $t2, 0x3304($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3304);
    // 0x801CF008: lw          $a0, 0x34($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X34);
    // 0x801CF00C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x801CF010: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801CF014: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801CF018: jal         0x801CB6AC
    // 0x801CF01C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_5;
    // 0x801CF01C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_5:
    // 0x801CF020: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x801CF024: addiu       $s2, $s2, 0x32F0
    ctx->r18 = ADD32(ctx->r18, 0X32F0);
    // 0x801CF028: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801CF02C: or          $s1, $s6, $zero
    ctx->r17 = ctx->r22 | 0;
    // 0x801CF030: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x801CF034: addiu       $s4, $zero, 0x3C
    ctx->r20 = ADD32(0, 0X3C);
L_801CF038:
    // 0x801CF038: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x801CF03C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CF040: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801CF044: jal         0x801CBAE8
    // 0x801CF048: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_801CBAE8_65E998(rdram, ctx);
        goto after_6;
    // 0x801CF048: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_6:
    // 0x801CF04C: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x801CF050: addiu       $s3, $s0, 0x1
    ctx->r19 = ADD32(ctx->r16, 0X1);
    // 0x801CF054: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x801CF058: lw          $t3, 0x200($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X200);
    // 0x801CF05C: lw          $a2, 0x6C($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X6C);
    // 0x801CF060: lw          $a3, 0x74($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X74);
    // 0x801CF064: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801CF068: lw          $t4, 0x78($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X78);
    // 0x801CF06C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CF070: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801CF074: lw          $t5, 0x264($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X264);
    // 0x801CF078: div         $zero, $t5, $s4
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r20)));
    // 0x801CF07C: mflo        $t6
    ctx->r14 = lo;
    // 0x801CF080: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801CF084: bne         $s4, $zero, L_801CF090
    if (ctx->r20 != 0) {
        // 0x801CF088: nop
    
            goto L_801CF090;
    }
    // 0x801CF088: nop

    // 0x801CF08C: break       7
    do_break(2149380236);
L_801CF090:
    // 0x801CF090: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CF094: bne         $s4, $at, L_801CF0A8
    if (ctx->r20 != ctx->r1) {
        // 0x801CF098: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CF0A8;
    }
    // 0x801CF098: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CF09C: bne         $t5, $at, L_801CF0A8
    if (ctx->r13 != ctx->r1) {
        // 0x801CF0A0: nop
    
            goto L_801CF0A8;
    }
    // 0x801CF0A0: nop

    // 0x801CF0A4: break       6
    do_break(2149380260);
L_801CF0A8:
    // 0x801CF0A8: jal         0x801CB9F8
    // 0x801CF0AC: nop

    func_801CB9F8_65E8A8(rdram, ctx);
        goto after_7;
    // 0x801CF0AC: nop

    after_7:
    // 0x801CF0B0: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x801CF0B4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x801CF0B8: bne         $s3, $s5, L_801CF038
    if (ctx->r19 != ctx->r21) {
        // 0x801CF0BC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_801CF038;
    }
    // 0x801CF0BC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x801CF0C0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801CF0C4: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CF0C8: lui         $s0, 0x801F
    ctx->r16 = S32(0X801F << 16);
    // 0x801CF0CC: addiu       $s0, $s0, -0x66EC
    ctx->r16 = ADD32(ctx->r16, -0X66EC);
    // 0x801CF0D0: addiu       $v0, $v0, -0x66E8
    ctx->r2 = ADD32(ctx->r2, -0X66E8);
    // 0x801CF0D4: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x801CF0D8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x801CF0DC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x801CF0E0: addu        $t1, $s6, $t0
    ctx->r9 = ADD32(ctx->r22, ctx->r8);
    // 0x801CF0E4: lw          $a0, 0x1C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1C);
    // 0x801CF0E8: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x801CF0EC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CF0F0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801CF0F4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801CF0F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CF0FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CF100: jal         0x801CC56C
    // 0x801CF104: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_8;
    // 0x801CF104: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_8:
    // 0x801CF108: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x801CF10C: lw          $a0, 0x40($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X40);
    // 0x801CF110: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x801CF114: addu        $t6, $s6, $t5
    ctx->r14 = ADD32(ctx->r22, ctx->r13);
    // 0x801CF118: jal         0x80011610
    // 0x801CF11C: lw          $a1, 0x1C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X1C);
    func_80011610_12210(rdram, ctx);
        goto after_9;
    // 0x801CF11C: lw          $a1, 0x1C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X1C);
    after_9:
    // 0x801CF120: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x801CF124: lw          $a0, 0x40($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X40);
    // 0x801CF128: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801CF12C: addu        $t9, $s6, $t8
    ctx->r25 = ADD32(ctx->r22, ctx->r24);
    // 0x801CF130: jal         0x801CD3B8
    // 0x801CF134: lw          $a1, 0x1C($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X1C);
    func_801CD3B8_660268(rdram, ctx);
        goto after_10;
    // 0x801CF134: lw          $a1, 0x1C($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X1C);
    after_10:
    // 0x801CF138: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CF13C: addiu       $a1, $a1, -0x13C8
    ctx->r5 = ADD32(ctx->r5, -0X13C8);
    // 0x801CF140: jal         0x80011734
    // 0x801CF144: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_80011734_12334(rdram, ctx);
        goto after_11;
    // 0x801CF144: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_11:
    // 0x801CF148: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801CF14C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801CF150: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801CF154: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x801CF158: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x801CF15C: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x801CF160: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x801CF164: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x801CF168: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x801CF16C: jr          $ra
    // 0x801CF170: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801CF170: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801CB9F8_65E8A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB9F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB9FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBA00: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801CBA04: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CBA08: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801CBA0C: beq         $a0, $zero, L_801CBAB8
    if (ctx->r4 == 0) {
        // 0x801CBA10: or          $t6, $a0, $zero
        ctx->r14 = ctx->r4 | 0;
            goto L_801CBAB8;
    }
    // 0x801CBA10: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x801CBA14: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x801CBA18: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x801CBA1C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801CBA20: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x801CBA24: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x801CBA28: sw          $t7, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r15;
    // 0x801CBA2C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x801CBA30: sw          $a3, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r7;
    // 0x801CBA34: mflo        $t1
    ctx->r9 = lo;
    // 0x801CBA38: sw          $t8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r24;
    // 0x801CBA3C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x801CBA40: mfhi        $t2
    ctx->r10 = hi;
    // 0x801CBA44: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    // 0x801CBA48: sw          $t9, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r25;
    // 0x801CBA4C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x801CBA50: sw          $t1, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r9;
    // 0x801CBA54: sw          $t2, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r10;
    // 0x801CBA58: sw          $t0, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r8;
    // 0x801CBA5C: bne         $a1, $zero, L_801CBA68
    if (ctx->r5 != 0) {
        // 0x801CBA60: nop
    
            goto L_801CBA68;
    }
    // 0x801CBA60: nop

    // 0x801CBA64: break       7
    do_break(2149366372);
L_801CBA68:
    // 0x801CBA68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CBA6C: bne         $a1, $at, L_801CBA80
    if (ctx->r5 != ctx->r1) {
        // 0x801CBA70: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CBA80;
    }
    // 0x801CBA70: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CBA74: bne         $v1, $at, L_801CBA80
    if (ctx->r3 != ctx->r1) {
        // 0x801CBA78: nop
    
            goto L_801CBA80;
    }
    // 0x801CBA78: nop

    // 0x801CBA7C: break       6
    do_break(2149366396);
L_801CBA80:
    // 0x801CBA80: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x801CBA84: jal         0x80010358
    // 0x801CBA88: nop

    func_80010358_10F58(rdram, ctx);
        goto after_0;
    // 0x801CBA88: nop

    after_0:
    // 0x801CBA8C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x801CBA90: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801CBA94: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x801CBA98: beq         $a3, $zero, L_801CBAB0
    if (ctx->r7 == 0) {
        // 0x801CBA9C: addiu       $a2, $zero, -0x1
        ctx->r6 = ADD32(0, -0X1);
            goto L_801CBAB0;
    }
    // 0x801CBA9C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x801CBAA0: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    // 0x801CBAA4: jal         0x801CB4E0
    // 0x801CBAA8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_801CB4E0_65E390(rdram, ctx);
        goto after_1;
    // 0x801CBAA8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x801CBAAC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
L_801CBAB0:
    // 0x801CBAB0: jal         0x800105AC
    // 0x801CBAB4: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    func_800105AC_111AC(rdram, ctx);
        goto after_2;
    // 0x801CBAB4: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    after_2:
L_801CBAB8:
    // 0x801CBAB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CBABC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CBAC0: jr          $ra
    // 0x801CBAC4: nop

    TRACE_RETURN()
    return;
    // 0x801CBAC4: nop

;}
RECOMP_FUNC void func_801CDC70_660B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDC70: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CDC74: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CDC78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CDC7C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801CDC80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CDC84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CDC88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CDC8C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801CDC90: lhu         $v0, -0x4F86($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F86);
    // 0x801CDC94: andi        $t7, $v0, 0x9000
    ctx->r15 = ctx->r2 & 0X9000;
    // 0x801CDC98: beq         $t7, $zero, L_801CDCE0
    if (ctx->r15 == 0) {
        // 0x801CDC9C: andi        $t0, $v0, 0x4000
        ctx->r8 = ctx->r2 & 0X4000;
            goto L_801CDCE0;
    }
    // 0x801CDC9C: andi        $t0, $v0, 0x4000
    ctx->r8 = ctx->r2 & 0X4000;
    // 0x801CDCA0: jal         0x80038B98
    // 0x801CDCA4: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x801CDCA4: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_0:
    // 0x801CDCA8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CDCAC: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801CDCB0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CDCB4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x801CDCB8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801CDCBC: jal         0x8000B640
    // 0x801CDCC0: sw          $t8, -0x4FC0($at)
    MEM_W(-0X4FC0, ctx->r1) = ctx->r24;
    func_8000B640_C240(rdram, ctx);
        goto after_1;
    // 0x801CDCC0: sw          $t8, -0x4FC0($at)
    MEM_W(-0X4FC0, ctx->r1) = ctx->r24;
    after_1:
    // 0x801CDCC4: jal         0x8000B5D0
    // 0x801CDCC8: nop

    func_8000B5D0_C1D0(rdram, ctx);
        goto after_2;
    // 0x801CDCC8: nop

    after_2:
    // 0x801CDCCC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CDCD0: jal         0x8003521C
    // 0x801CDCD4: addiu       $a0, $a0, -0x2770
    ctx->r4 = ADD32(ctx->r4, -0X2770);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801CDCD4: addiu       $a0, $a0, -0x2770
    ctx->r4 = ADD32(ctx->r4, -0X2770);
    after_3:
    // 0x801CDCD8: b           L_801CDCF4
    // 0x801CDCDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CDCF4;
    // 0x801CDCDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CDCE0:
    // 0x801CDCE0: beq         $t0, $zero, L_801CDCF0
    if (ctx->r8 == 0) {
        // 0x801CDCE4: lui         $a0, 0x801D
        ctx->r4 = S32(0X801D << 16);
            goto L_801CDCF0;
    }
    // 0x801CDCE4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CDCE8: jal         0x8003521C
    // 0x801CDCEC: addiu       $a0, $a0, -0x2898
    ctx->r4 = ADD32(ctx->r4, -0X2898);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801CDCEC: addiu       $a0, $a0, -0x2898
    ctx->r4 = ADD32(ctx->r4, -0X2898);
    after_4:
L_801CDCF0:
    // 0x801CDCF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CDCF4:
    // 0x801CDCF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CDCF8: jr          $ra
    // 0x801CDCFC: nop

    TRACE_RETURN()
    return;
    // 0x801CDCFC: nop

;}
RECOMP_FUNC void func_801CF748_6625F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF748: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x801CF74C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801CF750: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801CF754: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CF758: sw          $a2, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r6;
    // 0x801CF75C: bne         $a1, $zero, L_801CF778
    if (ctx->r5 != 0) {
        // 0x801CF760: sw          $a3, 0x134($sp)
        MEM_W(0X134, ctx->r29) = ctx->r7;
            goto L_801CF778;
    }
    // 0x801CF760: sw          $a3, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r7;
    // 0x801CF764: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x801CF768: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801CF76C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x801CF770: b           L_801CFC18
    // 0x801CF774: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_801CFC18;
    // 0x801CF774: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_801CF778:
    // 0x801CF778: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801CF77C: lui         $t8, 0x801D
    ctx->r24 = S32(0X801D << 16);
    // 0x801CF780: addiu       $t8, $t8, 0x33B0
    ctx->r24 = ADD32(ctx->r24, 0X33B0);
    // 0x801CF784: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x801CF788: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x801CF78C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801CF790: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CF794: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801CF798: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x801CF79C: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x801CF7A0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x801CF7A4: lhu         $t6, -0x523E($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X523E);
    // 0x801CF7A8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x801CF7AC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x801CF7B0: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x801CF7B4: sll         $t8, $t7, 19
    ctx->r24 = S32(ctx->r15 << 19);
    // 0x801CF7B8: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801CF7BC: ori         $t6, $t9, 0x7
    ctx->r14 = ctx->r25 | 0X7;
    // 0x801CF7C0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801CF7C4: lw          $t0, 0x140($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X140);
    // 0x801CF7C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CF7CC: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x801CF7D0: addu        $t0, $t0, $at
    ctx->r8 = ADD32(ctx->r8, ctx->r1);
    // 0x801CF7D4: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x801CF7D8: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x801CF7DC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x801CF7E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CF7E4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x801CF7E8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CF7EC: lw          $a3, 0x134($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X134);
    // 0x801CF7F0: lw          $a2, 0x130($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X130);
    // 0x801CF7F4: jal         0x801CF57C
    // 0x801CF7F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801CF57C_66242C(rdram, ctx);
        goto after_0;
    // 0x801CF7F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801CF7FC: lw          $t9, 0x130($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X130);
    // 0x801CF800: lw          $t6, 0x138($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X138);
    // 0x801CF804: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x801CF808: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x801CF80C: addu        $a2, $t9, $t6
    ctx->r6 = ADD32(ctx->r25, ctx->r14);
    // 0x801CF810: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x801CF814: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CF818: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CF81C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CF820: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801CF824: jal         0x801CF57C
    // 0x801CF828: lw          $a3, 0x134($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X134);
    func_801CF57C_66242C(rdram, ctx);
        goto after_1;
    // 0x801CF828: lw          $a3, 0x134($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X134);
    after_1:
    // 0x801CF82C: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CF830: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801CF834: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x801CF838: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x801CF83C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x801CF840: lhu         $t6, -0x523E($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X523E);
    // 0x801CF844: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x801CF848: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801CF84C: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x801CF850: sll         $t8, $t7, 19
    ctx->r24 = S32(ctx->r15 << 19);
    // 0x801CF854: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801CF858: ori         $t6, $t9, 0xFF
    ctx->r14 = ctx->r25 | 0XFF;
    // 0x801CF85C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CF860: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x801CF864: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x801CF868: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x801CF86C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801CF870: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801CF874: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CF878: lw          $a3, 0x134($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X134);
    // 0x801CF87C: jal         0x801CF57C
    // 0x801CF880: lw          $a2, 0x130($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X130);
    func_801CF57C_66242C(rdram, ctx);
        goto after_2;
    // 0x801CF880: lw          $a2, 0x130($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X130);
    after_2:
    // 0x801CF884: lw          $t6, 0x134($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X134);
    // 0x801CF888: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x801CF88C: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x801CF890: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x801CF894: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    // 0x801CF898: addiu       $a3, $a3, -0x8
    ctx->r7 = ADD32(ctx->r7, -0X8);
    // 0x801CF89C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801CF8A0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CF8A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CF8A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801CF8AC: jal         0x801CF57C
    // 0x801CF8B0: lw          $a2, 0x130($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X130);
    func_801CF57C_66242C(rdram, ctx);
        goto after_3;
    // 0x801CF8B0: lw          $a2, 0x130($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X130);
    after_3:
    // 0x801CF8B4: lw          $ra, 0x140($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X140);
    // 0x801CF8B8: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x801CF8BC: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x801CF8C0: addiu       $t7, $t7, -0x2768
    ctx->r15 = ADD32(ctx->r15, -0X2768);
    // 0x801CF8C4: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x801CF8C8: ori         $t8, $t8, 0x1402
    ctx->r24 = ctx->r24 | 0X1402;
    // 0x801CF8CC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CF8D0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801CF8D4: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
    // 0x801CF8D8: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x801CF8DC: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CF8E0: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801CF8E4: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x801CF8E8: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x801CF8EC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x801CF8F0: lhu         $t6, -0x523E($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X523E);
    // 0x801CF8F4: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x801CF8F8: lui         $a2, 0x708
    ctx->r6 = S32(0X708 << 16);
    // 0x801CF8FC: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x801CF900: sll         $t8, $t7, 19
    ctx->r24 = S32(ctx->r15 << 19);
    // 0x801CF904: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801CF908: ori         $t6, $t9, 0x13F
    ctx->r14 = ctx->r25 | 0X13F;
    // 0x801CF90C: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x801CF910: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CF914: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CF918: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801CF91C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CF920: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801CF924: lh          $t8, -0x5250($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X5250);
    // 0x801CF928: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x801CF92C: addiu       $t7, $t7, 0x1000
    ctx->r15 = ADD32(ctx->r15, 0X1000);
    // 0x801CF930: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801CF934: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801CF938: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x801CF93C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801CF940: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x801CF944: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801CF948: sll         $t9, $t9, 11
    ctx->r25 = S32(ctx->r25 << 11);
    // 0x801CF94C: addu        $t6, $t9, $at
    ctx->r14 = ADD32(ctx->r25, ctx->r1);
    // 0x801CF950: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x801CF954: sw          $t8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r24;
    // 0x801CF958: lui         $t6, 0xC
    ctx->r14 = S32(0XC << 16);
    // 0x801CF95C: sw          $t6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r14;
    // 0x801CF960: lui         $t9, 0xB600
    ctx->r25 = S32(0XB600 << 16);
    // 0x801CF964: lui         $t8, 0x2
    ctx->r24 = S32(0X2 << 16);
    // 0x801CF968: sw          $t9, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r25;
    // 0x801CF96C: ori         $t8, $t8, 0x2000
    ctx->r24 = ctx->r24 | 0X2000;
    // 0x801CF970: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x801CF974: sw          $t8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r24;
    // 0x801CF978: lui         $t7, 0xB700
    ctx->r15 = S32(0XB700 << 16);
    // 0x801CF97C: ori         $t6, $t6, 0x8000
    ctx->r14 = ctx->r14 | 0X8000;
    // 0x801CF980: lui         $t9, 0xBB00
    ctx->r25 = S32(0XBB00 << 16);
    // 0x801CF984: sw          $t7, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r15;
    // 0x801CF988: ori         $t9, $t9, 0x1
    ctx->r25 = ctx->r25 | 0X1;
    // 0x801CF98C: sw          $t6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r14;
    // 0x801CF990: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x801CF994: sw          $t9, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r25;
    // 0x801CF998: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x801CF99C: ori         $t8, $t8, 0x1102
    ctx->r24 = ctx->r24 | 0X1102;
    // 0x801CF9A0: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x801CF9A4: ori         $t7, $t7, 0x1001
    ctx->r15 = ctx->r15 | 0X1001;
    // 0x801CF9A8: sw          $t8, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r24;
    // 0x801CF9AC: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x801CF9B0: ori         $t6, $t6, 0xC02
    ctx->r14 = ctx->r14 | 0XC02;
    // 0x801CF9B4: sw          $t7, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r15;
    // 0x801CF9B8: ori         $t9, $t9, 0xE02
    ctx->r25 = ctx->r25 | 0XE02;
    // 0x801CF9BC: sw          $t6, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r14;
    // 0x801CF9C0: lui         $t8, 0xFC32
    ctx->r24 = S32(0XFC32 << 16);
    // 0x801CF9C4: sw          $t9, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r25;
    // 0x801CF9C8: addiu       $t7, $zero, 0x2000
    ctx->r15 = ADD32(0, 0X2000);
    // 0x801CF9CC: ori         $t8, $t8, 0x7E64
    ctx->r24 = ctx->r24 | 0X7E64;
    // 0x801CF9D0: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x801CF9D4: sw          $t7, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r15;
    // 0x801CF9D8: sw          $t8, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r24;
    // 0x801CF9DC: lui         $t9, 0xFFFC
    ctx->r25 = S32(0XFFFC << 16);
    // 0x801CF9E0: sw          $t6, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r14;
    // 0x801CF9E4: ori         $t9, $t9, 0xF279
    ctx->r25 = ctx->r25 | 0XF279;
    // 0x801CF9E8: lui         $t7, 0x1010
    ctx->r15 = S32(0X1010 << 16);
    // 0x801CF9EC: lui         $t6, 0xF510
    ctx->r14 = S32(0XF510 << 16);
    // 0x801CF9F0: addiu       $t8, $ra, 0x780
    ctx->r24 = ADD32(ctx->r31, 0X780);
    // 0x801CF9F4: sw          $t9, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->r25;
    // 0x801CF9F8: ori         $t7, $t7, 0x10FF
    ctx->r15 = ctx->r15 | 0X10FF;
    // 0x801CF9FC: sw          $t8, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r24;
    // 0x801CFA00: ori         $t6, $t6, 0x400
    ctx->r14 = ctx->r14 | 0X400;
    // 0x801CFA04: sw          $t7, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->r15;
    // 0x801CFA08: sw          $t6, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r14;
    // 0x801CFA0C: lui         $t9, 0x73B
    ctx->r25 = S32(0X73B << 16);
    // 0x801CFA10: addiu       $t8, $s0, 0x80
    ctx->r24 = ADD32(ctx->r16, 0X80);
    // 0x801CFA14: ori         $t9, $t9, 0xF400
    ctx->r25 = ctx->r25 | 0XF400;
    // 0x801CFA18: lui         $t7, 0x1
    ctx->r15 = S32(0X1 << 16);
    // 0x801CFA1C: sw          $t8, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r24;
    // 0x801CFA20: lui         $t6, 0x77F
    ctx->r14 = S32(0X77F << 16);
    // 0x801CFA24: ori         $t7, $t7, 0xC1DC
    ctx->r15 = ctx->r15 | 0XC1DC;
    // 0x801CFA28: sw          $t9, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r25;
    // 0x801CFA2C: ori         $t6, $t6, 0xF020
    ctx->r14 = ctx->r14 | 0XF020;
    // 0x801CFA30: lui         $t8, 0x3F
    ctx->r24 = S32(0X3F << 16);
    // 0x801CFA34: sw          $t7, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r15;
    // 0x801CFA38: ori         $t8, $t8, 0xC01C
    ctx->r24 = ctx->r24 | 0XC01C;
    // 0x801CFA3C: sw          $t6, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r14;
    // 0x801CFA40: addiu       $t9, $ra, 0x2000
    ctx->r25 = ADD32(ctx->r31, 0X2000);
    // 0x801CFA44: sw          $t9, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->r25;
    // 0x801CFA48: sw          $t8, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r24;
    // 0x801CFA4C: lui         $t7, 0xF510
    ctx->r15 = S32(0XF510 << 16);
    // 0x801CFA50: lui         $t6, 0xFC12
    ctx->r14 = S32(0XFC12 << 16);
    // 0x801CFA54: ori         $t7, $t7, 0x8000
    ctx->r15 = ctx->r15 | 0X8000;
    // 0x801CFA58: addiu       $t9, $s0, 0x40
    ctx->r25 = ADD32(ctx->r16, 0X40);
    // 0x801CFA5C: ori         $t6, $t6, 0x7E24
    ctx->r14 = ctx->r14 | 0X7E24;
    // 0x801CFA60: lui         $t8, 0x73B
    ctx->r24 = S32(0X73B << 16);
    // 0x801CFA64: sw          $t7, 0xE0($v0)
    MEM_W(0XE0, ctx->r2) = ctx->r15;
    // 0x801CFA68: sw          $t9, 0xF4($v0)
    MEM_W(0XF4, ctx->r2) = ctx->r25;
    // 0x801CFA6C: sw          $t6, 0x100($v0)
    MEM_W(0X100, ctx->r2) = ctx->r14;
    // 0x801CFA70: ori         $t8, $t8, 0xF400
    ctx->r24 = ctx->r24 | 0XF400;
    // 0x801CFA74: lui         $t1, 0x8
    ctx->r9 = S32(0X8 << 16);
    // 0x801CFA78: lui         $t3, 0x400
    ctx->r11 = S32(0X400 << 16);
    // 0x801CFA7C: lui         $t4, 0xB104
    ctx->r12 = S32(0XB104 << 16);
    // 0x801CFA80: lui         $t5, 0x6
    ctx->r13 = S32(0X6 << 16);
    // 0x801CFA84: addiu       $t7, $zero, -0xC07
    ctx->r15 = ADD32(0, -0XC07);
    // 0x801CFA88: sw          $t8, 0x12C($v0)
    MEM_W(0X12C, ctx->r2) = ctx->r24;
    // 0x801CFA8C: lui         $t6, 0x1
    ctx->r14 = S32(0X1 << 16);
    // 0x801CFA90: lui         $t9, 0xF510
    ctx->r25 = S32(0XF510 << 16);
    // 0x801CFA94: ori         $t5, $t5, 0x400
    ctx->r13 = ctx->r13 | 0X400;
    // 0x801CFA98: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x801CFA9C: ori         $t3, $t3, 0x103F
    ctx->r11 = ctx->r11 | 0X103F;
    // 0x801CFAA0: ori         $t1, $t1, 0x200
    ctx->r9 = ctx->r9 | 0X200;
    // 0x801CFAA4: ori         $a2, $a2, 0x200
    ctx->r6 = ctx->r6 | 0X200;
    // 0x801CFAA8: lui         $a0, 0xFD10
    ctx->r4 = S32(0XFD10 << 16);
    // 0x801CFAAC: lui         $a1, 0xF510
    ctx->r5 = S32(0XF510 << 16);
    // 0x801CFAB0: lui         $a3, 0xE600
    ctx->r7 = S32(0XE600 << 16);
    // 0x801CFAB4: lui         $t0, 0xF300
    ctx->r8 = S32(0XF300 << 16);
    // 0x801CFAB8: lui         $t2, 0xF200
    ctx->r10 = S32(0XF200 << 16);
    // 0x801CFABC: sw          $t7, 0x104($v0)
    MEM_W(0X104, ctx->r2) = ctx->r15;
    // 0x801CFAC0: ori         $t9, $t9, 0x400
    ctx->r25 = ctx->r25 | 0X400;
    // 0x801CFAC4: ori         $t6, $t6, 0xC1DC
    ctx->r14 = ctx->r14 | 0XC1DC;
    // 0x801CFAC8: lui         $t8, 0x77F
    ctx->r24 = S32(0X77F << 16);
    // 0x801CFACC: sw          $t6, 0x144($v0)
    MEM_W(0X144, ctx->r2) = ctx->r14;
    // 0x801CFAD0: sw          $t9, 0x138($v0)
    MEM_W(0X138, ctx->r2) = ctx->r25;
    // 0x801CFAD4: ori         $t8, $t8, 0xF020
    ctx->r24 = ctx->r24 | 0XF020;
    // 0x801CFAD8: addiu       $t7, $ra, 0x3000
    ctx->r15 = ADD32(ctx->r31, 0X3000);
    // 0x801CFADC: sw          $t7, 0x164($v0)
    MEM_W(0X164, ctx->r2) = ctx->r15;
    // 0x801CFAE0: sw          $t8, 0x17C($v0)
    MEM_W(0X17C, ctx->r2) = ctx->r24;
    // 0x801CFAE4: lui         $t9, 0xF510
    ctx->r25 = S32(0XF510 << 16);
    // 0x801CFAE8: lui         $t6, 0x3F
    ctx->r14 = S32(0X3F << 16);
    // 0x801CFAEC: ori         $t6, $t6, 0xC01C
    ctx->r14 = ctx->r14 | 0XC01C;
    // 0x801CFAF0: ori         $t9, $t9, 0x8000
    ctx->r25 = ctx->r25 | 0X8000;
    // 0x801CFAF4: addiu       $t7, $s0, 0xC0
    ctx->r15 = ADD32(ctx->r16, 0XC0);
    // 0x801CFAF8: lui         $t8, 0xB800
    ctx->r24 = S32(0XB800 << 16);
    // 0x801CFAFC: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x801CFB00: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x801CFB04: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x801CFB08: sw          $zero, 0x64($v0)
    MEM_W(0X64, ctx->r2) = 0;
    // 0x801CFB0C: sw          $v1, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r3;
    // 0x801CFB10: sw          $t2, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r10;
    // 0x801CFB14: sw          $t0, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r8;
    // 0x801CFB18: sw          $a3, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r7;
    // 0x801CFB1C: sw          $a1, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r5;
    // 0x801CFB20: sw          $a0, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r4;
    // 0x801CFB24: sw          $a2, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->r6;
    // 0x801CFB28: sw          $t1, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r9;
    // 0x801CFB2C: sw          $zero, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = 0;
    // 0x801CFB30: sw          $v1, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->r3;
    // 0x801CFB34: sw          $zero, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = 0;
    // 0x801CFB38: sw          $t3, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r11;
    // 0x801CFB3C: sw          $t4, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r12;
    // 0x801CFB40: sw          $t5, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r13;
    // 0x801CFB44: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x801CFB48: sw          $v1, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r3;
    // 0x801CFB4C: sw          $t2, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r10;
    // 0x801CFB50: sw          $t0, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->r8;
    // 0x801CFB54: sw          $a3, 0xC8($v0)
    MEM_W(0XC8, ctx->r2) = ctx->r7;
    // 0x801CFB58: sw          $a1, 0xC0($v0)
    MEM_W(0XC0, ctx->r2) = ctx->r5;
    // 0x801CFB5C: sw          $a0, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->r4;
    // 0x801CFB60: sw          $a2, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->r6;
    // 0x801CFB64: sw          $t1, 0xE4($v0)
    MEM_W(0XE4, ctx->r2) = ctx->r9;
    // 0x801CFB68: sw          $zero, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = 0;
    // 0x801CFB6C: sw          $v1, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->r3;
    // 0x801CFB70: sw          $zero, 0xCC($v0)
    MEM_W(0XCC, ctx->r2) = 0;
    // 0x801CFB74: sw          $t3, 0xF0($v0)
    MEM_W(0XF0, ctx->r2) = ctx->r11;
    // 0x801CFB78: sw          $t4, 0xF8($v0)
    MEM_W(0XF8, ctx->r2) = ctx->r12;
    // 0x801CFB7C: sw          $t5, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->r13;
    // 0x801CFB80: sw          $zero, 0x10C($v0)
    MEM_W(0X10C, ctx->r2) = 0;
    // 0x801CFB84: sw          $v1, 0x108($v0)
    MEM_W(0X108, ctx->r2) = ctx->r3;
    // 0x801CFB88: sw          $t2, 0x140($v0)
    MEM_W(0X140, ctx->r2) = ctx->r10;
    // 0x801CFB8C: sw          $t0, 0x128($v0)
    MEM_W(0X128, ctx->r2) = ctx->r8;
    // 0x801CFB90: sw          $a3, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r7;
    // 0x801CFB94: sw          $a1, 0x118($v0)
    MEM_W(0X118, ctx->r2) = ctx->r5;
    // 0x801CFB98: sw          $a0, 0x110($v0)
    MEM_W(0X110, ctx->r2) = ctx->r4;
    // 0x801CFB9C: sw          $a2, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->r6;
    // 0x801CFBA0: sw          $t1, 0x13C($v0)
    MEM_W(0X13C, ctx->r2) = ctx->r9;
    // 0x801CFBA4: sw          $zero, 0x134($v0)
    MEM_W(0X134, ctx->r2) = 0;
    // 0x801CFBA8: sw          $v1, 0x130($v0)
    MEM_W(0X130, ctx->r2) = ctx->r3;
    // 0x801CFBAC: sw          $zero, 0x124($v0)
    MEM_W(0X124, ctx->r2) = 0;
    // 0x801CFBB0: sw          $t3, 0x148($v0)
    MEM_W(0X148, ctx->r2) = ctx->r11;
    // 0x801CFBB4: sw          $s0, 0x14C($v0)
    MEM_W(0X14C, ctx->r2) = ctx->r16;
    // 0x801CFBB8: sw          $t4, 0x150($v0)
    MEM_W(0X150, ctx->r2) = ctx->r12;
    // 0x801CFBBC: sw          $t5, 0x154($v0)
    MEM_W(0X154, ctx->r2) = ctx->r13;
    // 0x801CFBC0: sw          $zero, 0x15C($v0)
    MEM_W(0X15C, ctx->r2) = 0;
    // 0x801CFBC4: sw          $v1, 0x158($v0)
    MEM_W(0X158, ctx->r2) = ctx->r3;
    // 0x801CFBC8: sw          $t9, 0x188($v0)
    MEM_W(0X188, ctx->r2) = ctx->r25;
    // 0x801CFBCC: sw          $t6, 0x194($v0)
    MEM_W(0X194, ctx->r2) = ctx->r14;
    // 0x801CFBD0: sw          $t2, 0x190($v0)
    MEM_W(0X190, ctx->r2) = ctx->r10;
    // 0x801CFBD4: sw          $t0, 0x178($v0)
    MEM_W(0X178, ctx->r2) = ctx->r8;
    // 0x801CFBD8: sw          $a3, 0x170($v0)
    MEM_W(0X170, ctx->r2) = ctx->r7;
    // 0x801CFBDC: sw          $a1, 0x168($v0)
    MEM_W(0X168, ctx->r2) = ctx->r5;
    // 0x801CFBE0: sw          $a0, 0x160($v0)
    MEM_W(0X160, ctx->r2) = ctx->r4;
    // 0x801CFBE4: sw          $a2, 0x16C($v0)
    MEM_W(0X16C, ctx->r2) = ctx->r6;
    // 0x801CFBE8: sw          $t1, 0x18C($v0)
    MEM_W(0X18C, ctx->r2) = ctx->r9;
    // 0x801CFBEC: sw          $zero, 0x184($v0)
    MEM_W(0X184, ctx->r2) = 0;
    // 0x801CFBF0: sw          $v1, 0x180($v0)
    MEM_W(0X180, ctx->r2) = ctx->r3;
    // 0x801CFBF4: sw          $zero, 0x174($v0)
    MEM_W(0X174, ctx->r2) = 0;
    // 0x801CFBF8: sw          $t7, 0x19C($v0)
    MEM_W(0X19C, ctx->r2) = ctx->r15;
    // 0x801CFBFC: sw          $t3, 0x198($v0)
    MEM_W(0X198, ctx->r2) = ctx->r11;
    // 0x801CFC00: sw          $t4, 0x1A0($v0)
    MEM_W(0X1A0, ctx->r2) = ctx->r12;
    // 0x801CFC04: sw          $t5, 0x1A4($v0)
    MEM_W(0X1A4, ctx->r2) = ctx->r13;
    // 0x801CFC08: sw          $t8, 0x1A8($v0)
    MEM_W(0X1A8, ctx->r2) = ctx->r24;
    // 0x801CFC0C: sw          $zero, 0x1AC($v0)
    MEM_W(0X1AC, ctx->r2) = 0;
    // 0x801CFC10: addiu       $v0, $v0, 0x1A8
    ctx->r2 = ADD32(ctx->r2, 0X1A8);
    // 0x801CFC14: sw          $ra, -0x94($v0)
    MEM_W(-0X94, ctx->r2) = ctx->r31;
L_801CFC18:
    // 0x801CFC18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801CFC1C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801CFC20: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    // 0x801CFC24: jr          $ra
    // 0x801CFC28: nop

    TRACE_RETURN()
    return;
    // 0x801CFC28: nop

;}
RECOMP_FUNC void func_801D206C_664F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D206C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D2070: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801D2074: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D2078: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801D207C: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D2080: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D2084: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801D2088: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x801D208C: addiu       $a1, $a1, 0x1ED0
    ctx->r5 = ADD32(ctx->r5, 0X1ED0);
    // 0x801D2090: jal         0x80034E08
    // 0x801D2094: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801D2094: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801D2098: bne         $v0, $zero, L_801D20A8
    if (ctx->r2 != 0) {
        // 0x801D209C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801D20A8;
    }
    // 0x801D209C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D20A0: b           L_801D213C
    // 0x801D20A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D213C;
    // 0x801D20A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D20A8:
    // 0x801D20A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D20AC: jal         0x80011610
    // 0x801D20B0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_80011610_12210(rdram, ctx);
        goto after_1;
    // 0x801D20B0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x801D20B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D20B8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801D20BC: jal         0x800115F8
    // 0x801D20C0: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    func_800115F8_121F8(rdram, ctx);
        goto after_2;
    // 0x801D20C0: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x801D20C4: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801D20C8: addiu       $t6, $t6, 0x2044
    ctx->r14 = ADD32(ctx->r14, 0X2044);
    // 0x801D20CC: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x801D20D0: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x801D20D4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x801D20D8: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x801D20DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D20E0: jal         0x800103DC
    // 0x801D20E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800103DC_10FDC(rdram, ctx);
        goto after_3;
    // 0x801D20E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x801D20E8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801D20EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801D20F0: bne         $v0, $at, L_801D2100
    if (ctx->r2 != ctx->r1) {
        // 0x801D20F4: sw          $v0, 0x34($v1)
        MEM_W(0X34, ctx->r3) = ctx->r2;
            goto L_801D2100;
    }
    // 0x801D20F4: sw          $v0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r2;
    // 0x801D20F8: b           L_801D213C
    // 0x801D20FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D213C;
    // 0x801D20FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D2100:
    // 0x801D2100: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x801D2104: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x801D2108: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x801D210C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x801D2110: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x801D2114: sw          $t8, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r24;
    // 0x801D2118: sw          $t9, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r25;
    // 0x801D211C: sw          $t0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r8;
    // 0x801D2120: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
    // 0x801D2124: sw          $zero, 0x30($v1)
    MEM_W(0X30, ctx->r3) = 0;
    // 0x801D2128: sw          $t7, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r15;
    // 0x801D212C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x801D2130: jal         0x800119D4
    // 0x801D2134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800119D4_125D4(rdram, ctx);
        goto after_4;
    // 0x801D2134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801D2138: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801D213C:
    // 0x801D213C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D2140: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D2144: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801D2148: jr          $ra
    // 0x801D214C: nop

    TRACE_RETURN()
    return;
    // 0x801D214C: nop

;}
RECOMP_FUNC void func_801D1580_664430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1580: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801D1584: lbu         $t6, -0x66A0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X66A0);
    // 0x801D1588: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D158C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D1590: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x801D1594: beq         $at, $zero, L_801D19B0
    if (ctx->r1 == 0) {
        // 0x801D1598: sw          $s0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r16;
            goto L_801D19B0;
    }
    // 0x801D1598: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801D159C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801D15A0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801D15A4: addu        $at, $at, $t6
    gpr jr_addend_801D15AC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801D15A8: lw          $t6, 0x4ADC($at)
    ctx->r14 = ADD32(ctx->r1, 0X4ADC);
    // 0x801D15AC: jr          $t6
    // 0x801D15B0: nop

    switch (jr_addend_801D15AC >> 2) {
        case 0: goto L_801D15B4; break;
        case 1: goto L_801D1624; break;
        case 2: goto L_801D16BC; break;
        case 3: goto L_801D1900; break;
        case 4: goto L_801D1948; break;
        default: switch_error(__func__, 0x801D15AC, 0x801D4ADC);
    }
    // 0x801D15B0: nop

L_801D15B4:
    // 0x801D15B4: jal         0x800231E0
    // 0x801D15B8: nop

    func_800231E0_23DE0(rdram, ctx);
        goto after_0;
    // 0x801D15B8: nop

    after_0:
    // 0x801D15BC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801D15C0: lbu         $t7, 0x7193($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7193);
    // 0x801D15C4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D15C8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D15CC: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x801D15D0: beq         $t8, $zero, L_801D15E0
    if (ctx->r24 == 0) {
        // 0x801D15D4: nop
    
            goto L_801D15E0;
    }
    // 0x801D15D4: nop

    // 0x801D15D8: b           L_801D19B0
    // 0x801D15DC: sb          $t9, -0x66A0($at)
    MEM_B(-0X66A0, ctx->r1) = ctx->r25;
        goto L_801D19B0;
    // 0x801D15DC: sb          $t9, -0x66A0($at)
    MEM_B(-0X66A0, ctx->r1) = ctx->r25;
L_801D15E0:
    // 0x801D15E0: beq         $v0, $zero, L_801D1610
    if (ctx->r2 == 0) {
        // 0x801D15E4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_801D1610;
    }
    // 0x801D15E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D15E8: beq         $v0, $at, L_801D1610
    if (ctx->r2 == ctx->r1) {
        // 0x801D15EC: addiu       $at, $zero, 0x101
        ctx->r1 = ADD32(0, 0X101);
            goto L_801D1610;
    }
    // 0x801D15EC: addiu       $at, $zero, 0x101
    ctx->r1 = ADD32(0, 0X101);
    // 0x801D15F0: beq         $v0, $at, L_801D1618
    if (ctx->r2 == ctx->r1) {
        // 0x801D15F4: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_801D1618;
    }
    // 0x801D15F4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801D15F8: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x801D15FC: beq         $v0, $at, L_801D1610
    if (ctx->r2 == ctx->r1) {
        // 0x801D1600: addiu       $t0, $zero, 0x2
        ctx->r8 = ADD32(0, 0X2);
            goto L_801D1610;
    }
    // 0x801D1600: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x801D1604: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D1608: b           L_801D19B0
    // 0x801D160C: sb          $t0, -0x66A0($at)
    MEM_B(-0X66A0, ctx->r1) = ctx->r8;
        goto L_801D19B0;
    // 0x801D160C: sb          $t0, -0x66A0($at)
    MEM_B(-0X66A0, ctx->r1) = ctx->r8;
L_801D1610:
    // 0x801D1610: b           L_801D19B4
    // 0x801D1614: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D19B4;
    // 0x801D1614: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D1618:
    // 0x801D1618: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D161C: b           L_801D19B0
    // 0x801D1620: sb          $t1, -0x66A0($at)
    MEM_B(-0X66A0, ctx->r1) = ctx->r9;
        goto L_801D19B0;
    // 0x801D1620: sb          $t1, -0x66A0($at)
    MEM_B(-0X66A0, ctx->r1) = ctx->r9;
L_801D1624:
    // 0x801D1624: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x801D1628: addiu       $s0, $s0, -0x3A34
    ctx->r16 = ADD32(ctx->r16, -0X3A34);
    // 0x801D162C: jal         0x80010B60
    // 0x801D1630: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_80010B60_11760(rdram, ctx);
        goto after_1;
    // 0x801D1630: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x801D1634: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D1638: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801D163C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801D1640: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801D1644: jal         0x80010980
    // 0x801D1648: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80010980_11580(rdram, ctx);
        goto after_2;
    // 0x801D1648: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x801D164C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801D1650: jal         0x800109A4
    // 0x801D1654: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800109A4_115A4(rdram, ctx);
        goto after_3;
    // 0x801D1654: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_3:
    // 0x801D1658: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801D165C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D1660: addiu       $a3, $a3, 0x4A94
    ctx->r7 = ADD32(ctx->r7, 0X4A94);
    // 0x801D1664: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D1668: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    // 0x801D166C: jal         0x80010E9C
    // 0x801D1670: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_4;
    // 0x801D1670: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    after_4:
    // 0x801D1674: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D1678: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801D167C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801D1680: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D1684: jal         0x80010980
    // 0x801D1688: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80010980_11580(rdram, ctx);
        goto after_5;
    // 0x801D1688: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_5:
    // 0x801D168C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801D1690: jal         0x800109A4
    // 0x801D1694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800109A4_115A4(rdram, ctx);
        goto after_6;
    // 0x801D1694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x801D1698: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801D169C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D16A0: addiu       $a3, $a3, 0x4AA4
    ctx->r7 = ADD32(ctx->r7, 0X4AA4);
    // 0x801D16A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D16A8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x801D16AC: jal         0x80010E9C
    // 0x801D16B0: addiu       $a2, $zero, 0x6E
    ctx->r6 = ADD32(0, 0X6E);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_7;
    // 0x801D16B0: addiu       $a2, $zero, 0x6E
    ctx->r6 = ADD32(0, 0X6E);
    after_7:
    // 0x801D16B4: b           L_801D19B0
    // 0x801D16B8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_801D19B0;
    // 0x801D16B8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_801D16BC:
    // 0x801D16BC: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x801D16C0: addiu       $s0, $s0, -0x3A34
    ctx->r16 = ADD32(ctx->r16, -0X3A34);
    // 0x801D16C4: jal         0x800108BC
    // 0x801D16C8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800108BC_114BC(rdram, ctx);
        goto after_8;
    // 0x801D16C8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_8:
    // 0x801D16CC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D16D0: lui         $a2, 0x801F
    ctx->r6 = S32(0X801F << 16);
    // 0x801D16D4: lbu         $a2, -0x669F($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X669F);
    // 0x801D16D8: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x801D16DC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x801D16E0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x801D16E4: sll         $t2, $a2, 4
    ctx->r10 = S32(ctx->r6 << 4);
    // 0x801D16E8: addiu       $a2, $t2, 0x87
    ctx->r6 = ADD32(ctx->r10, 0X87);
    // 0x801D16EC: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x801D16F0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801D16F4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D16F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D16FC: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    // 0x801D1700: addiu       $a3, $zero, 0xAC
    ctx->r7 = ADD32(0, 0XAC);
    // 0x801D1704: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D1708: jal         0x800108E4
    // 0x801D170C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_800108E4_114E4(rdram, ctx);
        goto after_9;
    // 0x801D170C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_9:
    // 0x801D1710: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D1714: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D1718: jal         0x800109A4
    // 0x801D171C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800109A4_115A4(rdram, ctx);
        goto after_10;
    // 0x801D171C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x801D1720: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D1724: jal         0x80010B60
    // 0x801D1728: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80010B60_11760(rdram, ctx);
        goto after_11;
    // 0x801D1728: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_11:
    // 0x801D172C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D1730: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801D1734: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801D1738: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801D173C: jal         0x80010980
    // 0x801D1740: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80010980_11580(rdram, ctx);
        goto after_12;
    // 0x801D1740: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_12:
    // 0x801D1744: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801D1748: lw          $a3, 0x34F0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X34F0);
    // 0x801D174C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801D1750: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    // 0x801D1754: jal         0x80010E9C
    // 0x801D1758: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_13;
    // 0x801D1758: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_13:
    // 0x801D175C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D1760: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801D1764: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801D1768: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D176C: jal         0x80010980
    // 0x801D1770: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80010980_11580(rdram, ctx);
        goto after_14;
    // 0x801D1770: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_14:
    // 0x801D1774: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801D1778: lw          $a3, 0x34F4($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X34F4);
    // 0x801D177C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801D1780: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x801D1784: jal         0x80010E9C
    // 0x801D1788: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_15;
    // 0x801D1788: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_15:
    // 0x801D178C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D1790: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801D1794: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801D1798: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D179C: jal         0x80010980
    // 0x801D17A0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80010980_11580(rdram, ctx);
        goto after_16;
    // 0x801D17A0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_16:
    // 0x801D17A4: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801D17A8: lw          $a3, 0x34F8($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X34F8);
    // 0x801D17AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801D17B0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x801D17B4: jal         0x80010E9C
    // 0x801D17B8: addiu       $a2, $zero, 0x88
    ctx->r6 = ADD32(0, 0X88);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_17;
    // 0x801D17B8: addiu       $a2, $zero, 0x88
    ctx->r6 = ADD32(0, 0X88);
    after_17:
    // 0x801D17BC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D17C0: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801D17C4: lw          $a3, 0x34FC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X34FC);
    // 0x801D17C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D17CC: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x801D17D0: jal         0x80010E9C
    // 0x801D17D4: addiu       $a2, $zero, 0x98
    ctx->r6 = ADD32(0, 0X98);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_18;
    // 0x801D17D4: addiu       $a2, $zero, 0x98
    ctx->r6 = ADD32(0, 0X98);
    after_18:
    // 0x801D17D8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D17DC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801D17E0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801D17E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D17E8: jal         0x80010980
    // 0x801D17EC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80010980_11580(rdram, ctx);
        goto after_19;
    // 0x801D17EC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_19:
    // 0x801D17F0: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801D17F4: lw          $a3, 0x3500($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3500);
    // 0x801D17F8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801D17FC: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x801D1800: jal         0x80010E9C
    // 0x801D1804: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_20;
    // 0x801D1804: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    after_20:
    // 0x801D1808: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D180C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801D1810: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801D1814: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801D1818: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801D181C: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801D1820: lhu         $a0, 0x307C($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X307C);
    // 0x801D1824: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801D1828: andi        $t6, $a0, 0x8000
    ctx->r14 = ctx->r4 & 0X8000;
    // 0x801D182C: beql        $t6, $zero, L_801D18AC
    if (ctx->r14 == 0) {
        // 0x801D1830: lh          $v0, 0x3080($v1)
        ctx->r2 = MEM_H(ctx->r3, 0X3080);
            goto L_801D18AC;
    }
    goto skip_0;
    // 0x801D1830: lh          $v0, 0x3080($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X3080);
    skip_0:
    // 0x801D1834: lbu         $v0, -0x669F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X669F);
    // 0x801D1838: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x801D183C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D1840: beq         $v0, $zero, L_801D185C
    if (ctx->r2 == 0) {
        // 0x801D1844: nop
    
            goto L_801D185C;
    }
    // 0x801D1844: nop

    // 0x801D1848: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D184C: beq         $v0, $at, L_801D1864
    if (ctx->r2 == ctx->r1) {
        // 0x801D1850: nop
    
            goto L_801D1864;
    }
    // 0x801D1850: nop

    // 0x801D1854: b           L_801D18AC
    // 0x801D1858: lh          $v0, 0x3080($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X3080);
        goto L_801D18AC;
    // 0x801D1858: lh          $v0, 0x3080($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X3080);
L_801D185C:
    // 0x801D185C: b           L_801D18A8
    // 0x801D1860: sb          $t7, -0x66A0($at)
    MEM_B(-0X66A0, ctx->r1) = ctx->r15;
        goto L_801D18A8;
    // 0x801D1860: sb          $t7, -0x66A0($at)
    MEM_B(-0X66A0, ctx->r1) = ctx->r15;
L_801D1864:
    // 0x801D1864: jal         0x80023880
    // 0x801D1868: nop

    func_80023880_24480(rdram, ctx);
        goto after_21;
    // 0x801D1868: nop

    after_21:
    // 0x801D186C: bne         $v0, $zero, L_801D1880
    if (ctx->r2 != 0) {
        // 0x801D1870: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_801D1880;
    }
    // 0x801D1870: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801D1874: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D1878: b           L_801D1894
    // 0x801D187C: sb          $zero, -0x66A0($at)
    MEM_B(-0X66A0, ctx->r1) = 0;
        goto L_801D1894;
    // 0x801D187C: sb          $zero, -0x66A0($at)
    MEM_B(-0X66A0, ctx->r1) = 0;
L_801D1880:
    // 0x801D1880: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x801D1884: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D1888: sb          $t8, -0x66A0($at)
    MEM_B(-0X66A0, ctx->r1) = ctx->r24;
    // 0x801D188C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D1890: sh          $zero, -0x669E($at)
    MEM_H(-0X669E, ctx->r1) = 0;
L_801D1894:
    // 0x801D1894: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801D1898: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801D189C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801D18A0: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801D18A4: lhu         $a0, 0x307C($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X307C);
L_801D18A8:
    // 0x801D18A8: lh          $v0, 0x3080($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X3080);
L_801D18AC:
    // 0x801D18AC: andi        $t0, $a0, 0x800
    ctx->r8 = ctx->r4 & 0X800;
    // 0x801D18B0: andi        $t1, $a0, 0x400
    ctx->r9 = ctx->r4 & 0X400;
    // 0x801D18B4: slti        $at, $v0, 0x29
    ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x801D18B8: bne         $at, $zero, L_801D18C8
    if (ctx->r1 != 0) {
        // 0x801D18BC: lui         $at, 0x801F
        ctx->r1 = S32(0X801F << 16);
            goto L_801D18C8;
    }
    // 0x801D18BC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D18C0: b           L_801D18DC
    // 0x801D18C4: sb          $zero, -0x669F($at)
    MEM_B(-0X669F, ctx->r1) = 0;
        goto L_801D18DC;
    // 0x801D18C4: sb          $zero, -0x669F($at)
    MEM_B(-0X669F, ctx->r1) = 0;
L_801D18C8:
    // 0x801D18C8: slti        $at, $v0, -0x28
    ctx->r1 = SIGNED(ctx->r2) < -0X28 ? 1 : 0;
    // 0x801D18CC: beq         $at, $zero, L_801D18DC
    if (ctx->r1 == 0) {
        // 0x801D18D0: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_801D18DC;
    }
    // 0x801D18D0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D18D4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D18D8: sb          $t9, -0x669F($at)
    MEM_B(-0X669F, ctx->r1) = ctx->r25;
L_801D18DC:
    // 0x801D18DC: beq         $t0, $zero, L_801D18EC
    if (ctx->r8 == 0) {
        // 0x801D18E0: lui         $at, 0x801F
        ctx->r1 = S32(0X801F << 16);
            goto L_801D18EC;
    }
    // 0x801D18E0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D18E4: b           L_801D19B0
    // 0x801D18E8: sb          $zero, -0x669F($at)
    MEM_B(-0X669F, ctx->r1) = 0;
        goto L_801D19B0;
    // 0x801D18E8: sb          $zero, -0x669F($at)
    MEM_B(-0X669F, ctx->r1) = 0;
L_801D18EC:
    // 0x801D18EC: beq         $t1, $zero, L_801D19B0
    if (ctx->r9 == 0) {
        // 0x801D18F0: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_801D19B0;
    }
    // 0x801D18F0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801D18F4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D18F8: b           L_801D19B0
    // 0x801D18FC: sb          $t2, -0x669F($at)
    MEM_B(-0X669F, ctx->r1) = ctx->r10;
        goto L_801D19B0;
    // 0x801D18FC: sb          $t2, -0x669F($at)
    MEM_B(-0X669F, ctx->r1) = ctx->r10;
L_801D1900:
    // 0x801D1900: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x801D1904: addiu       $s0, $s0, -0x3A34
    ctx->r16 = ADD32(ctx->r16, -0X3A34);
    // 0x801D1908: jal         0x80010B60
    // 0x801D190C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_80010B60_11760(rdram, ctx);
        goto after_22;
    // 0x801D190C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_22:
    // 0x801D1910: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D1914: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801D1918: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801D191C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D1920: jal         0x80010980
    // 0x801D1924: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80010980_11580(rdram, ctx);
        goto after_23;
    // 0x801D1924: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_23:
    // 0x801D1928: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801D192C: lw          $a3, 0x3508($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3508);
    // 0x801D1930: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801D1934: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x801D1938: jal         0x80010E9C
    // 0x801D193C: addiu       $a2, $zero, 0x6A
    ctx->r6 = ADD32(0, 0X6A);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_24;
    // 0x801D193C: addiu       $a2, $zero, 0x6A
    ctx->r6 = ADD32(0, 0X6A);
    after_24:
    // 0x801D1940: b           L_801D19B0
    // 0x801D1944: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_801D19B0;
    // 0x801D1944: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_801D1948:
    // 0x801D1948: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x801D194C: addiu       $s0, $s0, -0x3A34
    ctx->r16 = ADD32(ctx->r16, -0X3A34);
    // 0x801D1950: jal         0x80010B60
    // 0x801D1954: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_80010B60_11760(rdram, ctx);
        goto after_25;
    // 0x801D1954: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_25:
    // 0x801D1958: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D195C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801D1960: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801D1964: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D1968: jal         0x80010980
    // 0x801D196C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80010980_11580(rdram, ctx);
        goto after_26;
    // 0x801D196C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_26:
    // 0x801D1970: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801D1974: lw          $a3, 0x3504($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3504);
    // 0x801D1978: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801D197C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x801D1980: jal         0x80010E9C
    // 0x801D1984: addiu       $a2, $zero, 0x72
    ctx->r6 = ADD32(0, 0X72);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_27;
    // 0x801D1984: addiu       $a2, $zero, 0x72
    ctx->r6 = ADD32(0, 0X72);
    after_27:
    // 0x801D1988: lui         $v1, 0x801F
    ctx->r3 = S32(0X801F << 16);
    // 0x801D198C: lh          $v1, -0x669E($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X669E);
    // 0x801D1990: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D1994: slti        $at, $v1, 0x5B
    ctx->r1 = SIGNED(ctx->r3) < 0X5B ? 1 : 0;
    // 0x801D1998: bne         $at, $zero, L_801D19A8
    if (ctx->r1 != 0) {
        // 0x801D199C: addiu       $t4, $v1, 0x1
        ctx->r12 = ADD32(ctx->r3, 0X1);
            goto L_801D19A8;
    }
    // 0x801D199C: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x801D19A0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D19A4: sb          $zero, -0x66A0($at)
    MEM_B(-0X66A0, ctx->r1) = 0;
L_801D19A8:
    // 0x801D19A8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D19AC: sh          $t4, -0x669E($at)
    MEM_H(-0X669E, ctx->r1) = ctx->r12;
L_801D19B0:
    // 0x801D19B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D19B4:
    // 0x801D19B4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801D19B8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801D19BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D19C0: jr          $ra
    // 0x801D19C4: nop

    TRACE_RETURN()
    return;
    // 0x801D19C4: nop

;}
RECOMP_FUNC void func_801D19D0_664880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D19D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D19D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D19D8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801D19DC: lwc1        $f6, 0x6C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x801D19E0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801D19E4: ldc1        $f4, 0x4CA8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X4CA8);
    // 0x801D19E8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D19EC: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801D19F0: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x801D19F4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D19F8: addiu       $t0, $a0, 0x5C
    ctx->r8 = ADD32(ctx->r4, 0X5C);
    // 0x801D19FC: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801D1A00: bc1fl       L_801D1A7C
    if (!c1cs) {
        // 0x801D1A04: lw          $t6, 0x0($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X0);
            goto L_801D1A7C;
    }
    goto skip_0;
    // 0x801D1A04: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x801D1A08: lwc1        $f2, 0xC($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801D1A0C: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801D1A10: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801D1A14: nop

    // 0x801D1A18: bc1fl       L_801D1A30
    if (!c1cs) {
        // 0x801D1A1C: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_801D1A30;
    }
    goto skip_1;
    // 0x801D1A1C: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_1:
    // 0x801D1A20: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x801D1A24: b           L_801D1A30
    // 0x801D1A28: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_801D1A30;
    // 0x801D1A28: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x801D1A2C: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_801D1A30:
    // 0x801D1A30: lwc1        $f12, 0x10($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X10);
    // 0x801D1A34: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x801D1A38: nop

    // 0x801D1A3C: bc1fl       L_801D1A58
    if (!c1cs) {
        // 0x801D1A40: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_801D1A58;
    }
    goto skip_2;
    // 0x801D1A40: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_2:
    // 0x801D1A44: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D1A48: swc1        $f2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f2.u32l;
    // 0x801D1A4C: b           L_801D1A78
    // 0x801D1A50: swc1        $f10, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f10.u32l;
        goto L_801D1A78;
    // 0x801D1A50: swc1        $f10, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f10.u32l;
    // 0x801D1A54: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_801D1A58:
    // 0x801D1A58: nop

    // 0x801D1A5C: bc1fl       L_801D1A74
    if (!c1cs) {
        // 0x801D1A60: add.s       $f18, $f0, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_801D1A74;
    }
    goto skip_3;
    // 0x801D1A60: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
    skip_3:
    // 0x801D1A64: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801D1A68: b           L_801D1A78
    // 0x801D1A6C: swc1        $f16, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f16.u32l;
        goto L_801D1A78;
    // 0x801D1A6C: swc1        $f16, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f16.u32l;
    // 0x801D1A70: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
L_801D1A74:
    // 0x801D1A74: swc1        $f18, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f18.u32l;
L_801D1A78:
    // 0x801D1A78: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
L_801D1A7C:
    // 0x801D1A7C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x801D1A80: addiu       $t0, $a2, 0x5C
    ctx->r8 = ADD32(ctx->r6, 0X5C);
    // 0x801D1A84: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x801D1A88: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x801D1A8C: jal         0x800108BC
    // 0x801D1A90: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    func_800108BC_114BC(rdram, ctx);
        goto after_0;
    // 0x801D1A90: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_0:
    // 0x801D1A94: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x801D1A98: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801D1A9C: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801D1AA0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801D1AA4: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801D1AA8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801D1AAC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801D1AB0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D1AB4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801D1AB8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D1ABC: c.le.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d <= ctx->f6.d;
    // 0x801D1AC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D1AC4: addiu       $t8, $zero, 0xF0
    ctx->r24 = ADD32(0, 0XF0);
    // 0x801D1AC8: bc1fl       L_801D1B14
    if (!c1cs) {
        // 0x801D1ACC: lw          $t5, 0x0($v1)
        ctx->r13 = MEM_W(ctx->r3, 0X0);
            goto L_801D1B14;
    }
    goto skip_4;
    // 0x801D1ACC: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    skip_4:
    // 0x801D1AD0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D1AD4: lbu         $t9, 0x14($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X14);
    // 0x801D1AD8: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x801D1ADC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1AE0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801D1AE4: lbu         $t1, 0x15($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X15);
    // 0x801D1AE8: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x801D1AEC: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    // 0x801D1AF0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x801D1AF4: lbu         $t2, 0x16($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X16);
    // 0x801D1AF8: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801D1AFC: jal         0x800108E4
    // 0x801D1B00: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    func_800108E4_114E4(rdram, ctx);
        goto after_1;
    // 0x801D1B00: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    after_1:
    // 0x801D1B04: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801D1B08: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801D1B0C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801D1B10: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
L_801D1B14:
    // 0x801D1B14: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x801D1B18: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    // 0x801D1B1C: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x801D1B20: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801D1B24: lw          $v0, 0x30($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X30);
    // 0x801D1B28: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x801D1B2C: subu        $t9, $a2, $v0
    ctx->r25 = SUB32(ctx->r6, ctx->r2);
    // 0x801D1B30: and         $t1, $t6, $t9
    ctx->r9 = ctx->r14 & ctx->r25;
    // 0x801D1B34: and         $a1, $t1, $a2
    ctx->r5 = ctx->r9 & ctx->r6;
    // 0x801D1B38: jal         0x80040620
    // 0x801D1B3C: and         $a0, $v0, $a2
    ctx->r4 = ctx->r2 & ctx->r6;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x801D1B3C: and         $a0, $v0, $a2
    ctx->r4 = ctx->r2 & ctx->r6;
    after_2:
    // 0x801D1B40: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801D1B44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D1B48: jr          $ra
    // 0x801D1B4C: nop

    TRACE_RETURN()
    return;
    // 0x801D1B4C: nop

;}
RECOMP_FUNC void func_801D0DC0_663C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0DC0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D0DC4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D0DC8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801D0DCC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801D0DD0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801D0DD4: lw          $t6, 0x8C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8C);
    // 0x801D0DD8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801D0DDC: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x801D0DE0: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x801D0DE4: bne         $at, $zero, L_801D0DFC
    if (ctx->r1 != 0) {
        // 0x801D0DE8: nop
    
            goto L_801D0DFC;
    }
    // 0x801D0DE8: nop

    // 0x801D0DEC: sw          $t7, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r15;
    // 0x801D0DF0: jal         0x80037070
    // 0x801D0DF4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80037070_37C70(rdram, ctx);
        goto after_0;
    // 0x801D0DF4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D0DF8: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
L_801D0DFC:
    // 0x801D0DFC: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801D0E00: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801D0E04: addiu       $s0, $a1, 0x5C
    ctx->r16 = ADD32(ctx->r5, 0X5C);
    // 0x801D0E08: lw          $t9, 0x2C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2C);
    // 0x801D0E0C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801D0E10: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    // 0x801D0E14: jal         0x800108BC
    // 0x801D0E18: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    func_800108BC_114BC(rdram, ctx);
        goto after_1;
    // 0x801D0E18: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_1:
    // 0x801D0E1C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801D0E20: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801D0E24: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x801D0E28: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801D0E2C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801D0E30: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D0E34: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D0E38: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D0E3C: lw          $t1, 0x30($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X30);
    // 0x801D0E40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D0E44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D0E48: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x801D0E4C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x801D0E50: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x801D0E54: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x801D0E58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D0E5C: jal         0x800108E4
    // 0x801D0E60: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_800108E4_114E4(rdram, ctx);
        goto after_2;
    // 0x801D0E60: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_2:
    // 0x801D0E64: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801D0E68: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801D0E6C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801D0E70: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x801D0E74: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x801D0E78: lw          $t5, 0x2C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X2C);
    // 0x801D0E7C: lui         $a3, 0x8FFF
    ctx->r7 = S32(0X8FFF << 16);
    // 0x801D0E80: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x801D0E84: lw          $a2, 0x30($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X30);
    // 0x801D0E88: subu        $t7, $a3, $a2
    ctx->r15 = SUB32(ctx->r7, ctx->r6);
    // 0x801D0E8C: and         $t8, $t4, $t7
    ctx->r24 = ctx->r12 & ctx->r15;
    // 0x801D0E90: and         $a1, $t8, $a3
    ctx->r5 = ctx->r24 & ctx->r7;
    // 0x801D0E94: jal         0x80040620
    // 0x801D0E98: and         $a0, $a2, $a3
    ctx->r4 = ctx->r6 & ctx->r7;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_3;
    // 0x801D0E98: and         $a0, $a2, $a3
    ctx->r4 = ctx->r6 & ctx->r7;
    after_3:
    // 0x801D0E9C: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x801D0EA0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x801D0EA4: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x801D0EA8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801D0EAC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801D0EB0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D0EB4: jr          $ra
    // 0x801D0EB8: nop

    TRACE_RETURN()
    return;
    // 0x801D0EB8: nop

;}
RECOMP_FUNC void func_801CE098_660F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE098: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CE09C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CE0A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801CE0A4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801CE0A8: jal         0x801CD24C
    // 0x801CE0AC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801CD24C_6600FC(rdram, ctx);
        goto after_0;
    // 0x801CE0AC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CE0B0: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x801CE0B4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CE0B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801CE0BC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801CE0C0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x801CE0C4: jal         0x801CC5C8
    // 0x801CE0C8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_1;
    // 0x801CE0C8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_1:
    // 0x801CE0CC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801CE0D0: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x801CE0D4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CE0D8: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x801CE0DC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CE0E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CE0E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CE0E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CE0EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CE0F0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x801CE0F4: jal         0x801CC56C
    // 0x801CE0F8: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_2;
    // 0x801CE0F8: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    after_2:
    // 0x801CE0FC: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x801CE100: lw          $t9, 0x332C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X332C);
    // 0x801CE104: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x801CE108: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x801CE10C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801CE110: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801CE114: jal         0x801CB6AC
    // 0x801CE118: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_3;
    // 0x801CE118: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_3:
    // 0x801CE11C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x801CE120: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801CE124: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CE128: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x801CE12C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801CE130: jal         0x801CB684
    // 0x801CE134: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801CB684_65E534(rdram, ctx);
        goto after_4;
    // 0x801CE134: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x801CE138: addiu       $t1, $zero, 0x5A
    ctx->r9 = ADD32(0, 0X5A);
    // 0x801CE13C: sw          $t1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r9;
    // 0x801CE140: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x801CE144: jal         0x801CD3B8
    // 0x801CE148: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    func_801CD3B8_660268(rdram, ctx);
        goto after_5;
    // 0x801CE148: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    after_5:
    // 0x801CE14C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CE150: jal         0x8003521C
    // 0x801CE154: addiu       $a0, $a0, -0x2110
    ctx->r4 = ADD32(ctx->r4, -0X2110);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801CE154: addiu       $a0, $a0, -0x2110
    ctx->r4 = ADD32(ctx->r4, -0X2110);
    after_6:
    // 0x801CE158: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801CE15C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801CE160: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801CE164: jr          $ra
    // 0x801CE168: nop

    TRACE_RETURN()
    return;
    // 0x801CE168: nop

;}
RECOMP_FUNC void func_801D12B8_664168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D12B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D12BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D12C0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801D12C4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D12C8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801D12CC: jal         0x801CFC30
    // 0x801D12D0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801CFC30_662AE0(rdram, ctx);
        goto after_0;
    // 0x801D12D0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D12D4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D12D8: lw          $a0, 0x4CE8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4CE8);
    // 0x801D12DC: jal         0x800109A4
    // 0x801D12E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800109A4_115A4(rdram, ctx);
        goto after_1;
    // 0x801D12E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x801D12E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D12E8: jal         0x800119D4
    // 0x801D12EC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800119D4_125D4(rdram, ctx);
        goto after_2;
    // 0x801D12EC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_2:
    // 0x801D12F0: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x801D12F4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x801D12F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D12FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D1300: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1304: jal         0x801D09B4
    // 0x801D1308: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_801D09B4_663864(rdram, ctx);
        goto after_3;
    // 0x801D1308: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_3:
    // 0x801D130C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x801D1310: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D1314: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    // 0x801D1318: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x801D131C: jal         0x801D07C4
    // 0x801D1320: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_801D07C4_663674(rdram, ctx);
        goto after_4;
    // 0x801D1320: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_4:
    // 0x801D1324: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x801D1328: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D132C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D1330: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1334: jal         0x801D0B64
    // 0x801D1338: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_801D0B64_663A14(rdram, ctx);
        goto after_5;
    // 0x801D1338: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_5:
    // 0x801D133C: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801D1340: lw          $t6, 0x3428($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3428);
    // 0x801D1344: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D1348: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    // 0x801D134C: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    // 0x801D1350: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801D1354: jal         0x801CB6AC
    // 0x801D1358: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_6;
    // 0x801D1358: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_6:
    // 0x801D135C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x801D1360: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801D1364: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D1368: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801D136C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801D1370: jal         0x801CB684
    // 0x801D1374: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801CB684_65E534(rdram, ctx);
        goto after_7;
    // 0x801D1374: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x801D1378: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x801D137C: jal         0x801CB69C
    // 0x801D1380: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801CB69C_65E54C(rdram, ctx);
        goto after_8;
    // 0x801D1380: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x801D1384: jal         0x800232EC
    // 0x801D1388: nop

    func_800232EC_23EEC(rdram, ctx);
        goto after_9;
    // 0x801D1388: nop

    after_9:
    // 0x801D138C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D1390: jal         0x801D01C4
    // 0x801D1394: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_801D01C4_663074(rdram, ctx);
        goto after_10;
    // 0x801D1394: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_10:
    // 0x801D1398: bnel        $v0, $zero, L_801D1464
    if (ctx->r2 != 0) {
        // 0x801D139C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801D1464;
    }
    goto skip_0;
    // 0x801D139C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801D13A0: jal         0x800238D0
    // 0x801D13A4: nop

    func_800238D0_244D0(rdram, ctx);
        goto after_11;
    // 0x801D13A4: nop

    after_11:
    // 0x801D13A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D13AC: jal         0x801D01C4
    // 0x801D13B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_801D01C4_663074(rdram, ctx);
        goto after_12;
    // 0x801D13B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_12:
    // 0x801D13B4: bnel        $v0, $zero, L_801D1464
    if (ctx->r2 != 0) {
        // 0x801D13B8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801D1464;
    }
    goto skip_1;
    // 0x801D13B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801D13BC: jal         0x80023788
    // 0x801D13C0: nop

    func_80023788_24388(rdram, ctx);
        goto after_13;
    // 0x801D13C0: nop

    after_13:
    // 0x801D13C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D13C8: jal         0x801D01C4
    // 0x801D13CC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_801D01C4_663074(rdram, ctx);
        goto after_14;
    // 0x801D13CC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_14:
    // 0x801D13D0: bne         $v0, $zero, L_801D1460
    if (ctx->r2 != 0) {
        // 0x801D13D4: lui         $t7, 0x8017
        ctx->r15 = S32(0X8017 << 16);
            goto L_801D1460;
    }
    // 0x801D13D4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x801D13D8: lw          $t7, -0x717C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X717C);
    // 0x801D13DC: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x801D13E0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D13E4: lw          $t8, 0x408($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X408);
    // 0x801D13E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D13EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D13F0: subu        $t0, $t9, $t8
    ctx->r8 = SUB32(ctx->r25, ctx->r24);
    // 0x801D13F4: sw          $t0, -0x66B8($at)
    MEM_W(-0X66B8, ctx->r1) = ctx->r8;
    // 0x801D13F8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x801D13FC: jal         0x801D0D44
    // 0x801D1400: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_801D0D44_663BF4(rdram, ctx);
        goto after_15;
    // 0x801D1400: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_15:
    // 0x801D1404: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x801D1408: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801D140C: lw          $a1, -0x66B8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X66B8);
    // 0x801D1410: jal         0x801D0D3C
    // 0x801D1414: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_801D0D3C_663BEC(rdram, ctx);
        goto after_16;
    // 0x801D1414: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_16:
    // 0x801D1418: lui         $t1, 0x801F
    ctx->r9 = S32(0X801F << 16);
    // 0x801D141C: lw          $t1, -0x66B8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X66B8);
    // 0x801D1420: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D1424: bgtzl       $t1, L_801D143C
    if (SIGNED(ctx->r9) > 0) {
        // 0x801D1428: addiu       $t2, $zero, 0x9
        ctx->r10 = ADD32(0, 0X9);
            goto L_801D143C;
    }
    goto skip_2;
    // 0x801D1428: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    skip_2:
    // 0x801D142C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x801D1430: jal         0x801CB6A4
    // 0x801D1434: lw          $a1, 0x3430($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3430);
    func_801CB6A4_65E554(rdram, ctx);
        goto after_17;
    // 0x801D1434: lw          $a1, 0x3430($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3430);
    after_17:
    // 0x801D1438: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
L_801D143C:
    // 0x801D143C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D1440: sw          $t2, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r10;
    // 0x801D1444: jal         0x8003521C
    // 0x801D1448: addiu       $a0, $a0, 0x11BC
    ctx->r4 = ADD32(ctx->r4, 0X11BC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_18;
    // 0x801D1448: addiu       $a0, $a0, 0x11BC
    ctx->r4 = ADD32(ctx->r4, 0X11BC);
    after_18:
    // 0x801D144C: lw          $t9, 0xC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XC);
    // 0x801D1450: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D1454: lw          $a1, 0x18($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X18);
    // 0x801D1458: jalr        $t9
    // 0x801D145C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x801D145C: nop

    after_19:
L_801D1460:
    // 0x801D1460: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D1464:
    // 0x801D1464: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801D1468: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801D146C: jr          $ra
    // 0x801D1470: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801D1470: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801CCB7C_65FA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCB7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCB80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCB84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CCB88: jal         0x800101AC
    // 0x801CCB8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800101AC_10DAC(rdram, ctx);
        goto after_0;
    // 0x801CCB8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CCB90: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CCB94: addiu       $v0, $v0, 0x4CE0
    ctx->r2 = ADD32(ctx->r2, 0X4CE0);
    // 0x801CCB98: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801CCB9C: lui         $t7, 0x801E
    ctx->r15 = S32(0X801E << 16);
    // 0x801CCBA0: addiu       $t6, $t6, 0x4CF0
    ctx->r14 = ADD32(ctx->r14, 0X4CF0);
    // 0x801CCBA4: addiu       $t7, $t7, -0x3610
    ctx->r15 = ADD32(ctx->r15, -0X3610);
    // 0x801CCBA8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CCBAC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801CCBB0: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801CCBB4: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801CCBB8: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x801CCBBC: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CCBC0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801CCBC4: lh          $t9, -0x524E($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X524E);
    // 0x801CCBC8: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801CCBCC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CCBD0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801CCBD4: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x801CCBD8: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x801CCBDC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CCBE0: addiu       $a0, $a0, -0x34D8
    ctx->r4 = ADD32(ctx->r4, -0X34D8);
    // 0x801CCBE4: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x801CCBE8: jal         0x80035204
    // 0x801CCBEC: sw          $t2, -0x78F8($at)
    MEM_W(-0X78F8, ctx->r1) = ctx->r10;
    func_80035204_35E04(rdram, ctx);
        goto after_1;
    // 0x801CCBEC: sw          $t2, -0x78F8($at)
    MEM_W(-0X78F8, ctx->r1) = ctx->r10;
    after_1:
    // 0x801CCBF0: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x801CCBF4: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x801CCBF8: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801CCBFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CCC00: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x801CCC04: lhu         $v0, -0x520C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X520C);
    // 0x801CCC08: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CCC0C: beq         $v0, $zero, L_801CCC38
    if (ctx->r2 == 0) {
        // 0x801CCC10: nop
    
            goto L_801CCC38;
    }
    // 0x801CCC10: nop

    // 0x801CCC14: beq         $v0, $at, L_801CCC48
    if (ctx->r2 == ctx->r1) {
        // 0x801CCC18: lui         $a0, 0x801D
        ctx->r4 = S32(0X801D << 16);
            goto L_801CCC48;
    }
    // 0x801CCC18: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CCC1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CCC20: beq         $v0, $at, L_801CCC6C
    if (ctx->r2 == ctx->r1) {
        // 0x801CCC24: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801CCC6C;
    }
    // 0x801CCC24: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CCC28: beq         $v0, $at, L_801CCC58
    if (ctx->r2 == ctx->r1) {
        // 0x801CCC2C: nop
    
            goto L_801CCC58;
    }
    // 0x801CCC2C: nop

    // 0x801CCC30: b           L_801CCC70
    // 0x801CCC34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CCC70;
    // 0x801CCC34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CCC38:
    // 0x801CCC38: jal         0x8003521C
    // 0x801CCC3C: addiu       $a0, $a0, -0x355C
    ctx->r4 = ADD32(ctx->r4, -0X355C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801CCC3C: addiu       $a0, $a0, -0x355C
    ctx->r4 = ADD32(ctx->r4, -0X355C);
    after_2:
    // 0x801CCC40: b           L_801CCC70
    // 0x801CCC44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CCC70;
    // 0x801CCC44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CCC48:
    // 0x801CCC48: jal         0x8003521C
    // 0x801CCC4C: addiu       $a0, $a0, 0x12B8
    ctx->r4 = ADD32(ctx->r4, 0X12B8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801CCC4C: addiu       $a0, $a0, 0x12B8
    ctx->r4 = ADD32(ctx->r4, 0X12B8);
    after_3:
    // 0x801CCC50: b           L_801CCC70
    // 0x801CCC54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CCC70;
    // 0x801CCC54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CCC58:
    // 0x801CCC58: jal         0x801D31B4
    // 0x801CCC5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D31B4_666064(rdram, ctx);
        goto after_4;
    // 0x801CCC5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x801CCC60: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CCC64: jal         0x8003521C
    // 0x801CCC68: addiu       $a0, $a0, -0x3490
    ctx->r4 = ADD32(ctx->r4, -0X3490);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801CCC68: addiu       $a0, $a0, -0x3490
    ctx->r4 = ADD32(ctx->r4, -0X3490);
    after_5:
L_801CCC6C:
    // 0x801CCC6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CCC70:
    // 0x801CCC70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CCC74: jr          $ra
    // 0x801CCC78: nop

    TRACE_RETURN()
    return;
    // 0x801CCC78: nop

;}
RECOMP_FUNC void func_801D01C4_663074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D01C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D01C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D01CC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D01D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D01D4: beq         $a1, $zero, L_801D0244
    if (ctx->r5 == 0) {
        // 0x801D01D8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_801D0244;
    }
    // 0x801D01D8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D01DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D01E0: beq         $a1, $at, L_801D01F4
    if (ctx->r5 == ctx->r1) {
        // 0x801D01E4: addiu       $at, $zero, 0x100
        ctx->r1 = ADD32(0, 0X100);
            goto L_801D01F4;
    }
    // 0x801D01E4: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x801D01E8: beq         $a1, $at, L_801D01F4
    if (ctx->r5 == ctx->r1) {
        // 0x801D01EC: addiu       $at, $zero, 0x101
        ctx->r1 = ADD32(0, 0X101);
            goto L_801D01F4;
    }
    // 0x801D01EC: addiu       $at, $zero, 0x101
    ctx->r1 = ADD32(0, 0X101);
    // 0x801D01F0: bne         $a1, $at, L_801D0218
    if (ctx->r5 != ctx->r1) {
        // 0x801D01F4: lui         $a1, 0x801D
        ctx->r5 = S32(0X801D << 16);
            goto L_801D0218;
    }
L_801D01F4:
    // 0x801D01F4: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D01F8: lw          $a1, 0x33A0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X33A0);
    // 0x801D01FC: jal         0x801CB6A4
    // 0x801D0200: lw          $a0, 0x7C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X7C);
    func_801CB6A4_65E554(rdram, ctx);
        goto after_0;
    // 0x801D0200: lw          $a0, 0x7C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X7C);
    after_0:
    // 0x801D0204: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D0208: jal         0x8003521C
    // 0x801D020C: addiu       $a0, $a0, 0x174
    ctx->r4 = ADD32(ctx->r4, 0X174);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801D020C: addiu       $a0, $a0, 0x174
    ctx->r4 = ADD32(ctx->r4, 0X174);
    after_1:
    // 0x801D0210: b           L_801D0248
    // 0x801D0214: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D0248;
    // 0x801D0214: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D0218:
    // 0x801D0218: jal         0x80023840
    // 0x801D021C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80023840_24440(rdram, ctx);
        goto after_2;
    // 0x801D021C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_2:
    // 0x801D0220: beq         $v0, $zero, L_801D01F4
    if (ctx->r2 == 0) {
        // 0x801D0224: lw          $a2, 0x20($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X20);
            goto L_801D01F4;
    }
    // 0x801D0224: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801D0228: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D022C: lw          $a1, 0x33A8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X33A8);
    // 0x801D0230: jal         0x801CB6A4
    // 0x801D0234: lw          $a0, 0x7C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X7C);
    func_801CB6A4_65E554(rdram, ctx);
        goto after_3;
    // 0x801D0234: lw          $a0, 0x7C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X7C);
    after_3:
    // 0x801D0238: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D023C: jal         0x8003521C
    // 0x801D0240: addiu       $a0, $a0, 0x174
    ctx->r4 = ADD32(ctx->r4, 0X174);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801D0240: addiu       $a0, $a0, 0x174
    ctx->r4 = ADD32(ctx->r4, 0X174);
    after_4:
L_801D0244:
    // 0x801D0244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D0248:
    // 0x801D0248: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x801D024C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D0250: jr          $ra
    // 0x801D0254: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801D0254: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801CD2FC_6601AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD2FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CD300: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CD304: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801CD308: addiu       $a1, $zero, -0x10
    ctx->r5 = ADD32(0, -0X10);
    // 0x801CD30C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CD310: jal         0x801CBBC4
    // 0x801CD314: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_801CBBC4_65EA74(rdram, ctx);
        goto after_0;
    // 0x801CD314: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_0:
    // 0x801CD318: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801CD31C: addiu       $a1, $zero, 0xF4
    ctx->r5 = ADD32(0, 0XF4);
    // 0x801CD320: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x801CD324: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x801CD328: sw          $v0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r2;
    // 0x801CD32C: sw          $zero, 0x44($v1)
    MEM_W(0X44, ctx->r3) = 0;
    // 0x801CD330: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x801CD334: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801CD338: jal         0x801CC5C8
    // 0x801CD33C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_1;
    // 0x801CD33C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_1:
    // 0x801CD340: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x801CD344: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x801CD348: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CD34C: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    // 0x801CD350: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801CD354: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CD358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CD35C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CD360: jal         0x801CC56C
    // 0x801CD364: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801CC56C_65F41C(rdram, ctx);
        goto after_2;
    // 0x801CD364: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x801CD368: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x801CD36C: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801CD370: lw          $t7, 0x3310($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3310);
    // 0x801CD374: lw          $a0, 0x3C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X3C);
    // 0x801CD378: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801CD37C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801CD380: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801CD384: jal         0x801CB6AC
    // 0x801CD388: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_3;
    // 0x801CD388: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_3:
    // 0x801CD38C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801CD390: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CD394: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CD398: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x801CD39C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801CD3A0: jal         0x801CB684
    // 0x801CD3A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801CB684_65E534(rdram, ctx);
        goto after_4;
    // 0x801CD3A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x801CD3A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD3AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801CD3B0: jr          $ra
    // 0x801CD3B4: nop

    TRACE_RETURN()
    return;
    // 0x801CD3B4: nop

;}
RECOMP_FUNC void func_801CDAC0_660970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDAC0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CDAC4: jr          $ra
    // 0x801CDAC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801CDAC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801CDB98_660A48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDB98: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CDB9C: jr          $ra
    // 0x801CDBA0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801CDBA0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801CDDD0_660C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDDD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CDDD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CDDD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CDDDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CDDE0: lw          $t7, 0xAC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XAC);
    // 0x801CDDE4: bnel        $t7, $zero, L_801CDE04
    if (ctx->r15 != 0) {
        // 0x801CDDE8: lw          $v0, 0x18($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X18);
            goto L_801CDE04;
    }
    goto skip_0;
    // 0x801CDDE8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x801CDDEC: jal         0x801CD2FC
    // 0x801CDDF0: nop

    func_801CD2FC_6601AC(rdram, ctx);
        goto after_0;
    // 0x801CDDF0: nop

    after_0:
    // 0x801CDDF4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CDDF8: jal         0x8003521C
    // 0x801CDDFC: addiu       $a0, $a0, -0x10F8
    ctx->r4 = ADD32(ctx->r4, -0X10F8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801CDDFC: addiu       $a0, $a0, -0x10F8
    ctx->r4 = ADD32(ctx->r4, -0X10F8);
    after_1:
    // 0x801CDE00: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
L_801CDE04:
    // 0x801CDE04: lw          $t8, 0xAC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XAC);
    // 0x801CDE08: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x801CDE0C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801CDE10: sw          $t9, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r25;
    // 0x801CDE14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CDE18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CDE1C: jr          $ra
    // 0x801CDE20: nop

    TRACE_RETURN()
    return;
    // 0x801CDE20: nop

;}
RECOMP_FUNC void func_801CB460_65E310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB460: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB464: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CB468: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB46C: jal         0x80013AC4
    // 0x801CB470: addiu       $a0, $a0, 0x3290
    ctx->r4 = ADD32(ctx->r4, 0X3290);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x801CB470: addiu       $a0, $a0, 0x3290
    ctx->r4 = ADD32(ctx->r4, 0X3290);
    after_0:
    // 0x801CB474: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801CB478: addiu       $t6, $t6, 0xD10
    ctx->r14 = ADD32(ctx->r14, 0XD10);
    // 0x801CB47C: addiu       $t7, $zero, 0x4CD
    ctx->r15 = ADD32(0, 0X4CD);
    // 0x801CB480: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801CB484: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CB488: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x801CB48C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x801CB490: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801CB494: jal         0x80010230
    // 0x801CB498: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_1;
    // 0x801CB498: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x801CB49C: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x801CB4A0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CB4A4: addiu       $t8, $t8, 0x1D10
    ctx->r24 = ADD32(ctx->r24, 0X1D10);
    // 0x801CB4A8: addiu       $t9, $zero, 0x4CD
    ctx->r25 = ADD32(0, 0X4CD);
    // 0x801CB4AC: sw          $v0, -0x7904($at)
    MEM_W(-0X7904, ctx->r1) = ctx->r2;
    // 0x801CB4B0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801CB4B4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CB4B8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x801CB4BC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CB4C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801CB4C4: jal         0x80010230
    // 0x801CB4C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_2;
    // 0x801CB4C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x801CB4CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CB4D0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CB4D4: sw          $v0, -0x7900($at)
    MEM_W(-0X7900, ctx->r1) = ctx->r2;
    // 0x801CB4D8: jr          $ra
    // 0x801CB4DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801CB4DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801CD8C0_660770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD8C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CD8C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CD8C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CD8CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CD8D0: lw          $t6, 0xAC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XAC);
    // 0x801CD8D4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801CD8D8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CD8DC: bne         $t6, $zero, L_801CD8F0
    if (ctx->r14 != 0) {
        // 0x801CD8E0: addiu       $a0, $a0, -0xE8C
        ctx->r4 = ADD32(ctx->r4, -0XE8C);
            goto L_801CD8F0;
    }
    // 0x801CD8E0: addiu       $a0, $a0, -0xE8C
    ctx->r4 = ADD32(ctx->r4, -0XE8C);
    // 0x801CD8E4: jal         0x8003521C
    // 0x801CD8E8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801CD8E8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CD8EC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_801CD8F0:
    // 0x801CD8F0: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
    // 0x801CD8F4: lw          $t7, 0x50($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X50);
    // 0x801CD8F8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801CD8FC: sw          $t8, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r24;
    // 0x801CD900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CD904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CD908: jr          $ra
    // 0x801CD90C: nop

    TRACE_RETURN()
    return;
    // 0x801CD90C: nop

;}
RECOMP_FUNC void func_801D1DC4_664C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1DC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D1DC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D1DCC: jal         0x80010374
    // 0x801D1DD0: lw          $a0, 0x90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X90);
    func_80010374_10F74(rdram, ctx);
        goto after_0;
    // 0x801D1DD0: lw          $a0, 0x90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X90);
    after_0:
    // 0x801D1DD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D1DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D1DDC: jr          $ra
    // 0x801D1DE0: nop

    TRACE_RETURN()
    return;
    // 0x801D1DE0: nop

;}
RECOMP_FUNC void func_801CB4E0_65E390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB4E0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801CB4E4: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x801CB4E8: addiu       $s3, $a3, 0x1
    ctx->r19 = ADD32(ctx->r7, 0X1);
    // 0x801CB4EC: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x801CB4F0: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x801CB4F4: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x801CB4F8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801CB4FC: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x801CB500: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x801CB504: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801CB508: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x801CB50C: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x801CB510: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801CB514: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801CB518: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x801CB51C: bgez        $s3, L_801CB52C
    if (SIGNED(ctx->r19) >= 0) {
        // 0x801CB520: sra         $t6, $s3, 1
        ctx->r14 = S32(SIGNED(ctx->r19) >> 1);
            goto L_801CB52C;
    }
    // 0x801CB520: sra         $t6, $s3, 1
    ctx->r14 = S32(SIGNED(ctx->r19) >> 1);
    // 0x801CB524: addiu       $at, $s3, 0x1
    ctx->r1 = ADD32(ctx->r19, 0X1);
    // 0x801CB528: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_801CB52C:
    // 0x801CB52C: slti        $at, $t6, 0x15
    ctx->r1 = SIGNED(ctx->r14) < 0X15 ? 1 : 0;
    // 0x801CB530: bne         $at, $zero, L_801CB53C
    if (ctx->r1 != 0) {
        // 0x801CB534: or          $s3, $t6, $zero
        ctx->r19 = ctx->r14 | 0;
            goto L_801CB53C;
    }
    // 0x801CB534: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x801CB538: addiu       $s3, $zero, 0x14
    ctx->r19 = ADD32(0, 0X14);
L_801CB53C:
    // 0x801CB53C: blez        $s3, L_801CB598
    if (SIGNED(ctx->r19) <= 0) {
        // 0x801CB540: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_801CB598;
    }
    // 0x801CB540: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801CB544: lui         $s5, 0x801F
    ctx->r21 = S32(0X801F << 16);
    // 0x801CB548: addiu       $s5, $s5, -0x7904
    ctx->r21 = ADD32(ctx->r21, -0X7904);
    // 0x801CB54C: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
L_801CB550:
    // 0x801CB550: bne         $s1, $s4, L_801CB560
    if (ctx->r17 != ctx->r20) {
        // 0x801CB554: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_801CB560;
    }
    // 0x801CB554: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x801CB558: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
    // 0x801CB55C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_801CB560:
    // 0x801CB560: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x801CB564: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x801CB568: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x801CB56C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801CB570: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CB574: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801CB578: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x801CB57C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x801CB580: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CB584: jal         0x800106F0
    // 0x801CB588: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x801CB588: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x801CB58C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801CB590: bne         $s1, $s3, L_801CB550
    if (ctx->r17 != ctx->r19) {
        // 0x801CB594: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_801CB550;
    }
    // 0x801CB594: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_801CB598:
    // 0x801CB598: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801CB59C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801CB5A0: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801CB5A4: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x801CB5A8: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x801CB5AC: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x801CB5B0: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x801CB5B4: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x801CB5B8: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x801CB5BC: jr          $ra
    // 0x801CB5C0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801CB5C0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801CD768_660618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD768: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CD76C: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CD770: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CD774: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CD778: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801CD77C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CD780: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801CD784: jr          $ra
    // 0x801CD788: sb          $t6, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801CD788: sb          $t6, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_801CC3F8_65F2A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC3F8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801CC3FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801CC400: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801CC404: jal         0x8001136C
    // 0x801CC408: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_8001136C_11F6C(rdram, ctx);
        goto after_0;
    // 0x801CC408: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CC40C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x801CC410: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CC414: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CC418: lw          $t6, 0x90($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X90);
    // 0x801CC41C: addiu       $t0, $t0, 0x4CE8
    ctx->r8 = ADD32(ctx->r8, 0X4CE8);
    // 0x801CC420: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x801CC424: beql        $t6, $at, L_801CC444
    if (ctx->r14 == ctx->r1) {
        // 0x801CC428: lw          $a0, 0x3C($v1)
        ctx->r4 = MEM_W(ctx->r3, 0X3C);
            goto L_801CC444;
    }
    goto skip_0;
    // 0x801CC428: lw          $a0, 0x3C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X3C);
    skip_0:
    // 0x801CC42C: lw          $t1, 0x24($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X24);
    // 0x801CC430: lw          $t2, 0x28($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X28);
    // 0x801CC434: lw          $t3, 0x2C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X2C);
    // 0x801CC438: b           L_801CC4B0
    // 0x801CC43C: lw          $t4, 0x30($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X30);
        goto L_801CC4B0;
    // 0x801CC43C: lw          $t4, 0x30($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X30);
    // 0x801CC440: lw          $a0, 0x3C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X3C);
L_801CC444:
    // 0x801CC444: lw          $t7, 0x38($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X38);
    // 0x801CC448: negu        $t6, $a0
    ctx->r14 = SUB32(0, ctx->r4);
    // 0x801CC44C: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x801CC450: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x801CC454: andi        $t5, $t9, 0xFFFF
    ctx->r13 = ctx->r25 & 0XFFFF;
    // 0x801CC458: slti        $at, $t5, 0x100
    ctx->r1 = SIGNED(ctx->r13) < 0X100 ? 1 : 0;
    // 0x801CC45C: sw          $t8, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r24;
    // 0x801CC460: bne         $at, $zero, L_801CC470
    if (ctx->r1 != 0) {
        // 0x801CC464: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_801CC470;
    }
    // 0x801CC464: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x801CC468: sw          $t6, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r14;
    // 0x801CC46C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_801CC470:
    // 0x801CC470: lw          $t7, 0x24($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X24);
    // 0x801CC474: lw          $t9, 0x28($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X28);
    // 0x801CC478: lw          $t6, 0x2C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X2C);
    // 0x801CC47C: multu       $t7, $v0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CC480: lw          $t4, 0x30($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X30);
    // 0x801CC484: mflo        $t1
    ctx->r9 = lo;
    // 0x801CC488: sra         $t8, $t1, 8
    ctx->r24 = S32(SIGNED(ctx->r9) >> 8);
    // 0x801CC48C: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x801CC490: multu       $t9, $v0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CC494: mflo        $t2
    ctx->r10 = lo;
    // 0x801CC498: sra         $t5, $t2, 8
    ctx->r13 = S32(SIGNED(ctx->r10) >> 8);
    // 0x801CC49C: or          $t2, $t5, $zero
    ctx->r10 = ctx->r13 | 0;
    // 0x801CC4A0: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CC4A4: mflo        $t3
    ctx->r11 = lo;
    // 0x801CC4A8: sra         $t7, $t3, 8
    ctx->r15 = S32(SIGNED(ctx->r11) >> 8);
    // 0x801CC4AC: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
L_801CC4B0:
    // 0x801CC4B0: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x801CC4B4: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x801CC4B8: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    // 0x801CC4BC: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x801CC4C0: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x801CC4C4: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x801CC4C8: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x801CC4CC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x801CC4D0: jal         0x800108BC
    // 0x801CC4D4: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_800108BC_114BC(rdram, ctx);
        goto after_1;
    // 0x801CC4D4: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_1:
    // 0x801CC4D8: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801CC4DC: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CC4E0: addiu       $t0, $t0, 0x4CE8
    ctx->r8 = ADD32(ctx->r8, 0X4CE8);
    // 0x801CC4E4: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x801CC4E8: lw          $t5, 0x20($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X20);
    // 0x801CC4EC: lw          $a3, 0x1C($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X1C);
    // 0x801CC4F0: lw          $a2, 0x14($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X14);
    // 0x801CC4F4: lw          $a1, 0x10($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X10);
    // 0x801CC4F8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x801CC4FC: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x801CC500: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x801CC504: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x801CC508: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CC50C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801CC510: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801CC514: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x801CC518: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x801CC51C: jal         0x800108E4
    // 0x801CC520: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    func_800108E4_114E4(rdram, ctx);
        goto after_2;
    // 0x801CC520: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_2:
    // 0x801CC524: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CC528: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x801CC52C: addiu       $t0, $t0, 0x4CE8
    ctx->r8 = ADD32(ctx->r8, 0X4CE8);
    // 0x801CC530: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x801CC534: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CC538: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x801CC53C: lw          $v1, 0x30($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X30);
    // 0x801CC540: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    // 0x801CC544: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x801CC548: subu        $t5, $a2, $v1
    ctx->r13 = SUB32(ctx->r6, ctx->r3);
    // 0x801CC54C: and         $t6, $t7, $t5
    ctx->r14 = ctx->r15 & ctx->r13;
    // 0x801CC550: and         $a1, $t6, $a2
    ctx->r5 = ctx->r14 & ctx->r6;
    // 0x801CC554: jal         0x80040620
    // 0x801CC558: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_3;
    // 0x801CC558: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    after_3:
    // 0x801CC55C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801CC560: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801CC564: jr          $ra
    // 0x801CC568: nop

    TRACE_RETURN()
    return;
    // 0x801CC568: nop

;}
RECOMP_FUNC void func_801D11BC_66406C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D11BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D11C0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D11C4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801D11C8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801D11CC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801D11D0: lw          $t6, 0x8C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8C);
    // 0x801D11D4: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801D11D8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801D11DC: bgez        $t6, L_801D1200
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D11E0: addiu       $v1, $v1, 0x4CE8
        ctx->r3 = ADD32(ctx->r3, 0X4CE8);
            goto L_801D1200;
    }
    // 0x801D11E0: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801D11E4: lw          $t7, 0x88($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X88);
    // 0x801D11E8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D11EC: addiu       $a0, $a0, 0xFF0
    ctx->r4 = ADD32(ctx->r4, 0XFF0);
    // 0x801D11F0: jal         0x8003521C
    // 0x801D11F4: sw          $zero, 0x30($t7)
    MEM_W(0X30, ctx->r15) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801D11F4: sw          $zero, 0x30($t7)
    MEM_W(0X30, ctx->r15) = 0;
    after_0:
    // 0x801D11F8: b           L_801D12A8
    // 0x801D11FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801D12A8;
    // 0x801D11FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801D1200:
    // 0x801D1200: addiu       $s0, $a1, 0x5C
    ctx->r16 = ADD32(ctx->r5, 0X5C);
    // 0x801D1204: lw          $t9, 0x2C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2C);
    // 0x801D1208: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801D120C: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    // 0x801D1210: jal         0x800108BC
    // 0x801D1214: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    func_800108BC_114BC(rdram, ctx);
        goto after_1;
    // 0x801D1214: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_1:
    // 0x801D1218: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801D121C: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801D1220: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x801D1224: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801D1228: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801D122C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D1230: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D1234: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D1238: lw          $t1, 0x30($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X30);
    // 0x801D123C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D1240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D1244: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x801D1248: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x801D124C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x801D1250: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x801D1254: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1258: jal         0x800108E4
    // 0x801D125C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_800108E4_114E4(rdram, ctx);
        goto after_2;
    // 0x801D125C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_2:
    // 0x801D1260: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801D1264: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801D1268: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801D126C: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x801D1270: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x801D1274: lw          $t5, 0x2C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X2C);
    // 0x801D1278: lui         $a3, 0x8FFF
    ctx->r7 = S32(0X8FFF << 16);
    // 0x801D127C: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x801D1280: lw          $a2, 0x30($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X30);
    // 0x801D1284: subu        $t7, $a3, $a2
    ctx->r15 = SUB32(ctx->r7, ctx->r6);
    // 0x801D1288: and         $t8, $t4, $t7
    ctx->r24 = ctx->r12 & ctx->r15;
    // 0x801D128C: and         $a1, $t8, $a3
    ctx->r5 = ctx->r24 & ctx->r7;
    // 0x801D1290: jal         0x80040620
    // 0x801D1294: and         $a0, $a2, $a3
    ctx->r4 = ctx->r6 & ctx->r7;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_3;
    // 0x801D1294: and         $a0, $a2, $a3
    ctx->r4 = ctx->r6 & ctx->r7;
    after_3:
    // 0x801D1298: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x801D129C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801D12A0: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x801D12A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801D12A8:
    // 0x801D12A8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801D12AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D12B0: jr          $ra
    // 0x801D12B4: nop

    TRACE_RETURN()
    return;
    // 0x801D12B4: nop

;}
RECOMP_FUNC void func_801CDA10_6608C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDA10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CDA14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CDA18: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801CDA1C: jal         0x801CD2A8
    // 0x801CDA20: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801CD2A8_660158(rdram, ctx);
        goto after_0;
    // 0x801CDA20: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CDA24: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x801CDA28: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CDA2C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801CDA30: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801CDA34: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    // 0x801CDA38: jal         0x801CC5C8
    // 0x801CDA3C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_1;
    // 0x801CDA3C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_1:
    // 0x801CDA40: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801CDA44: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x801CDA48: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CDA4C: sw          $v0, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->r2;
    // 0x801CDA50: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x801CDA54: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x801CDA58: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CDA5C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CDA60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CDA64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CDA68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CDA6C: jal         0x801CC56C
    // 0x801CDA70: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_2;
    // 0x801CDA70: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x801CDA74: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x801CDA78: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CDA7C: lw          $t0, 0x3318($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3318);
    // 0x801CDA80: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    // 0x801CDA84: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CDA88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CDA8C: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801CDA90: jal         0x801CB6AC
    // 0x801CDA94: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_3;
    // 0x801CDA94: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_3:
    // 0x801CDA98: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x801CDA9C: addiu       $t1, $zero, 0x5A
    ctx->r9 = ADD32(0, 0X5A);
    // 0x801CDAA0: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CDAA4: addiu       $a0, $a0, -0x2640
    ctx->r4 = ADD32(ctx->r4, -0X2640);
    // 0x801CDAA8: jal         0x8003521C
    // 0x801CDAAC: sw          $t1, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801CDAAC: sw          $t1, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->r9;
    after_4:
    // 0x801CDAB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CDAB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801CDAB8: jr          $ra
    // 0x801CDABC: nop

    TRACE_RETURN()
    return;
    // 0x801CDABC: nop

;}
RECOMP_FUNC void func_801CCAA4_65F954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCAA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCAA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCAAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CCAB0: jal         0x800232EC
    // 0x801CCAB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800232EC_23EEC(rdram, ctx);
        goto after_0;
    // 0x801CCAB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CCAB8: jal         0x801CB460
    // 0x801CCABC: nop

    func_801CB460_65E310(rdram, ctx);
        goto after_1;
    // 0x801CCABC: nop

    after_1:
    // 0x801CCAC0: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CCAC4: lw          $a0, 0x4CE8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4CE8);
    // 0x801CCAC8: jal         0x800109A4
    // 0x801CCACC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800109A4_115A4(rdram, ctx);
        goto after_2;
    // 0x801CCACC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x801CCAD0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x801CCAD4: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x801CCAD8: jal         0x8001B6A4
    // 0x801CCADC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8001B6A4_1C2A4(rdram, ctx);
        goto after_3;
    // 0x801CCADC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_3:
    // 0x801CCAE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CCAE4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801CCAE8: jal         0x800114B8
    // 0x801CCAEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800114B8_120B8(rdram, ctx);
        goto after_4;
    // 0x801CCAEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x801CCAF0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CCAF4: sw          $v0, -0x7910($at)
    MEM_W(-0X7910, ctx->r1) = ctx->r2;
    // 0x801CCAF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CCAFC: jal         0x800119D4
    // 0x801CCB00: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800119D4_125D4(rdram, ctx);
        goto after_5;
    // 0x801CCB00: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_5:
    // 0x801CCB04: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801CCB08: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CCB0C: addiu       $a0, $a0, -0xD20
    ctx->r4 = ADD32(ctx->r4, -0XD20);
    // 0x801CCB10: jal         0x8003521C
    // 0x801CCB14: sw          $v0, 0xA4($t6)
    MEM_W(0XA4, ctx->r14) = ctx->r2;
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801CCB14: sw          $v0, 0xA4($t6)
    MEM_W(0XA4, ctx->r14) = ctx->r2;
    after_6:
    // 0x801CCB18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CCB1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CCB20: jr          $ra
    // 0x801CCB24: nop

    TRACE_RETURN()
    return;
    // 0x801CCB24: nop

;}
RECOMP_FUNC void func_801CC56C_65F41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC56C: beq         $a0, $zero, L_801CC5A0
    if (ctx->r4 == 0) {
        // 0x801CC570: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_801CC5A0;
    }
    // 0x801CC570: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x801CC574: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x801CC578: addiu       $t7, $zero, -0x4
    ctx->r15 = ADD32(0, -0X4);
    // 0x801CC57C: sw          $t7, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r15;
    // 0x801CC580: sw          $t6, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r14;
    // 0x801CC584: sw          $a1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r5;
    // 0x801CC588: sw          $a2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r6;
    // 0x801CC58C: sw          $a3, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r7;
    // 0x801CC590: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x801CC594: sw          $t8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r24;
    // 0x801CC598: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x801CC59C: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
L_801CC5A0:
    // 0x801CC5A0: jr          $ra
    // 0x801CC5A4: nop

    TRACE_RETURN()
    return;
    // 0x801CC5A4: nop

;}
RECOMP_FUNC void func_801D2064_664F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2064: jr          $ra
    // 0x801D2068: sw          $a1, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801D2068: sw          $a1, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_801CCC80_65FB30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCC80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCC84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCC88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CCC8C: jal         0x80023A1C
    // 0x801CCC90: addiu       $a1, $zero, 0x304
    ctx->r5 = ADD32(0, 0X304);
    func_80023A1C_2461C(rdram, ctx);
        goto after_0;
    // 0x801CCC90: addiu       $a1, $zero, 0x304
    ctx->r5 = ADD32(0, 0X304);
    after_0:
    // 0x801CCC94: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801CCC98: sw          $v0, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r2;
    // 0x801CCC9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CCCA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CCCA4: jr          $ra
    // 0x801CCCA8: nop

    TRACE_RETURN()
    return;
    // 0x801CCCA8: nop

;}
RECOMP_FUNC void func_801D1BC0_664A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1BC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D1BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D1BC8: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D1BCC: addiu       $a1, $a1, 0x19D0
    ctx->r5 = ADD32(ctx->r5, 0X19D0);
    // 0x801D1BD0: jal         0x80034E08
    // 0x801D1BD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801D1BD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801D1BD8: bne         $v0, $zero, L_801D1BE8
    if (ctx->r2 != 0) {
        // 0x801D1BDC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801D1BE8;
    }
    // 0x801D1BDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D1BE0: b           L_801D1C14
    // 0x801D1BE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D1C14;
    // 0x801D1BE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D1BE8:
    // 0x801D1BE8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x801D1BEC: jal         0x800119D4
    // 0x801D1BF0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800119D4_125D4(rdram, ctx);
        goto after_1;
    // 0x801D1BF0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x801D1BF4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x801D1BF8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801D1BFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D1C00: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801D1C04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D1C08: addiu       $v1, $v0, 0x5C
    ctx->r3 = ADD32(ctx->r2, 0X5C);
    // 0x801D1C0C: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x801D1C10: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
L_801D1C14:
    // 0x801D1C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D1C18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D1C1C: jr          $ra
    // 0x801D1C20: nop

    TRACE_RETURN()
    return;
    // 0x801D1C20: nop

;}
RECOMP_FUNC void func_801D1B5C_664A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1B5C: jr          $ra
    // 0x801D1B60: nop

    TRACE_RETURN()
    return;
    // 0x801D1B60: nop

    // 0x801D1B64: jr          $ra
    // 0x801D1B68: nop

    TRACE_RETURN()
    return;
    // 0x801D1B68: nop

;}
RECOMP_FUNC void func_801CE16C_66101C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE16C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CE170: slti        $at, $a1, 0xC
    ctx->r1 = SIGNED(ctx->r5) < 0XC ? 1 : 0;
    // 0x801CE174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CE178: bne         $at, $zero, L_801CE194
    if (ctx->r1 != 0) {
        // 0x801CE17C: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_801CE194;
    }
    // 0x801CE17C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CE180: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x801CE184: beq         $a1, $at, L_801CE1B4
    if (ctx->r5 == ctx->r1) {
        // 0x801CE188: lui         $a0, 0x801D
        ctx->r4 = S32(0X801D << 16);
            goto L_801CE1B4;
    }
    // 0x801CE188: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CE18C: b           L_801CE1C8
    // 0x801CE190: nop

        goto L_801CE1C8;
    // 0x801CE190: nop

L_801CE194:
    // 0x801CE194: sltiu       $at, $a1, 0xC
    ctx->r1 = ctx->r5 < 0XC ? 1 : 0;
    // 0x801CE198: beq         $at, $zero, L_801CE1C8
    if (ctx->r1 == 0) {
        // 0x801CE19C: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_801CE1C8;
    }
    // 0x801CE19C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x801CE1A0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CE1A4: addu        $at, $at, $t6
    gpr jr_addend_801CE1AC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801CE1A8: lw          $t6, 0x4790($at)
    ctx->r14 = ADD32(ctx->r1, 0X4790);
    // 0x801CE1AC: jr          $t6
    // 0x801CE1B0: nop

    switch (jr_addend_801CE1AC >> 2) {
        case 0: goto L_801CE1DC; break;
        case 1: goto L_801CE1C8; break;
        case 2: goto L_801CE1C8; break;
        case 3: goto L_801CE1C8; break;
        case 4: goto L_801CE1C8; break;
        case 5: goto L_801CE1C8; break;
        case 6: goto L_801CE1C8; break;
        case 7: goto L_801CE1C8; break;
        case 8: goto L_801CE1C8; break;
        case 9: goto L_801CE1C8; break;
        case 10: goto L_801CE1C8; break;
        case 11: goto L_801CE1C8; break;
        default: switch_error(__func__, 0x801CE1AC, 0x801D4790);
    }
    // 0x801CE1B0: nop

L_801CE1B4:
    // 0x801CE1B4: addiu       $a0, $a0, -0x2300
    ctx->r4 = ADD32(ctx->r4, -0X2300);
    // 0x801CE1B8: jal         0x8003521C
    // 0x801CE1BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801CE1BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CE1C0: b           L_801CE1DC
    // 0x801CE1C4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
        goto L_801CE1DC;
    // 0x801CE1C4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
L_801CE1C8:
    // 0x801CE1C8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CE1CC: addiu       $a0, $a0, -0x2534
    ctx->r4 = ADD32(ctx->r4, -0X2534);
    // 0x801CE1D0: jal         0x8003521C
    // 0x801CE1D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801CE1D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x801CE1D8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
L_801CE1DC:
    // 0x801CE1DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CE1E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CE1E4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x801CE1E8: jr          $ra
    // 0x801CE1EC: nop

    TRACE_RETURN()
    return;
    // 0x801CE1EC: nop

;}
RECOMP_FUNC void func_801CBB94_65EA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBB94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CBB98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBB9C: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x801CBBA0: addiu       $t8, $t6, 0x40
    ctx->r24 = ADD32(ctx->r14, 0X40);
    // 0x801CBBA4: sh          $t8, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r24;
    // 0x801CBBA8: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x801CBBAC: jal         0x8001136C
    // 0x801CBBB0: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
    func_8001136C_11F6C(rdram, ctx);
        goto after_0;
    // 0x801CBBB0: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
    after_0:
    // 0x801CBBB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CBBB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CBBBC: jr          $ra
    // 0x801CBBC0: nop

    TRACE_RETURN()
    return;
    // 0x801CBBC0: nop

;}
RECOMP_FUNC void func_801CD78C_66063C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD78C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801CD790: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801CD794: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801CD798: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801CD79C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801CD7A0: lw          $t6, 0xAC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XAC);
    // 0x801CD7A4: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CD7A8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801CD7AC: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x801CD7B0: bne         $at, $zero, L_801CD7D8
    if (ctx->r1 != 0) {
        // 0x801CD7B4: addiu       $v1, $v1, 0x4CE8
        ctx->r3 = ADD32(ctx->r3, 0X4CE8);
            goto L_801CD7D8;
    }
    // 0x801CD7B4: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801CD7B8: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x801CD7BC: sw          $t7, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r15;
    // 0x801CD7C0: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CD7C4: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801CD7C8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CD7CC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801CD7D0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801CD7D4: sb          $t8, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r24;
L_801CD7D8:
    // 0x801CD7D8: addiu       $s0, $a1, 0x5C
    ctx->r16 = ADD32(ctx->r5, 0X5C);
    // 0x801CD7DC: lw          $t1, 0x48($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X48);
    // 0x801CD7E0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x801CD7E4: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
    // 0x801CD7E8: jal         0x800108BC
    // 0x801CD7EC: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    func_800108BC_114BC(rdram, ctx);
        goto after_0;
    // 0x801CD7EC: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_0:
    // 0x801CD7F0: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CD7F4: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801CD7F8: addiu       $t2, $zero, 0xF0
    ctx->r10 = ADD32(0, 0XF0);
    // 0x801CD7FC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801CD800: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801CD804: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801CD808: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CD80C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CD810: lw          $t3, 0x50($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X50);
    // 0x801CD814: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CD818: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CD81C: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x801CD820: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x801CD824: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x801CD828: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801CD82C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CD830: jal         0x800108E4
    // 0x801CD834: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_800108E4_114E4(rdram, ctx);
        goto after_1;
    // 0x801CD834: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_1:
    // 0x801CD838: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CD83C: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801CD840: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801CD844: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801CD848: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801CD84C: lw          $t7, 0x48($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X48);
    // 0x801CD850: lui         $a3, 0x8FFF
    ctx->r7 = S32(0X8FFF << 16);
    // 0x801CD854: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x801CD858: lw          $a2, 0x30($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X30);
    // 0x801CD85C: subu        $t9, $a3, $a2
    ctx->r25 = SUB32(ctx->r7, ctx->r6);
    // 0x801CD860: and         $t0, $t6, $t9
    ctx->r8 = ctx->r14 & ctx->r25;
    // 0x801CD864: and         $a1, $t0, $a3
    ctx->r5 = ctx->r8 & ctx->r7;
    // 0x801CD868: jal         0x80040620
    // 0x801CD86C: and         $a0, $a2, $a3
    ctx->r4 = ctx->r6 & ctx->r7;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x801CD86C: and         $a0, $a2, $a3
    ctx->r4 = ctx->r6 & ctx->r7;
    after_2:
    // 0x801CD870: lw          $t1, 0x50($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X50);
    // 0x801CD874: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x801CD878: sw          $t2, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r10;
    // 0x801CD87C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801CD880: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801CD884: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801CD888: jr          $ra
    // 0x801CD88C: nop

    TRACE_RETURN()
    return;
    // 0x801CD88C: nop

;}
RECOMP_FUNC void func_801CB69C_65E54C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB69C: jr          $ra
    // 0x801CB6A0: sw          $a1, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801CB6A0: sw          $a1, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_801CFC30_662AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CFC30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CFC34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CFC38: jal         0x8003FF50
    // 0x801CFC3C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_0;
    // 0x801CFC3C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x801CFC40: jal         0x80013940
    // 0x801CFC44: nop

    func_80013940_14540(rdram, ctx);
        goto after_1;
    // 0x801CFC44: nop

    after_1:
    // 0x801CFC48: jal         0x80038BC8
    // 0x801CFC4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801CFC4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x801CFC50: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CFC54: jal         0x80013AC4
    // 0x801CFC58: addiu       $a0, $a0, 0x33AC
    ctx->r4 = ADD32(ctx->r4, 0X33AC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_3;
    // 0x801CFC58: addiu       $a0, $a0, 0x33AC
    ctx->r4 = ADD32(ctx->r4, 0X33AC);
    after_3:
    // 0x801CFC5C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801CFC60: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x801CFC64: addiu       $t7, $zero, 0x4CE
    ctx->r15 = ADD32(0, 0X4CE);
    // 0x801CFC68: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801CFC6C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CFC70: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x801CFC74: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x801CFC78: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801CFC7C: jal         0x80010230
    // 0x801CFC80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_4;
    // 0x801CFC80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x801CFC84: lui         $t8, 0x801
    ctx->r24 = S32(0X801 << 16);
    // 0x801CFC88: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CFC8C: addiu       $t8, $t8, 0x2C00
    ctx->r24 = ADD32(ctx->r24, 0X2C00);
    // 0x801CFC90: addiu       $t9, $zero, 0x4CE
    ctx->r25 = ADD32(0, 0X4CE);
    // 0x801CFC94: sw          $v0, -0x66C0($at)
    MEM_W(-0X66C0, ctx->r1) = ctx->r2;
    // 0x801CFC98: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801CFC9C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CFCA0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x801CFCA4: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x801CFCA8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801CFCAC: jal         0x80010230
    // 0x801CFCB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_5;
    // 0x801CFCB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x801CFCB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CFCB8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CFCBC: sw          $v0, -0x66BC($at)
    MEM_W(-0X66BC, ctx->r1) = ctx->r2;
    // 0x801CFCC0: jr          $ra
    // 0x801CFCC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801CFCC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801CD4E0_660390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD4E0: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801CD4E4: lw          $t7, -0x66E8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X66E8);
    // 0x801CD4E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CD4EC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CD4F0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801CD4F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CD4F8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801CD4FC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801CD500: sw          $a1, -0x66EC($at)
    MEM_W(-0X66EC, ctx->r1) = ctx->r5;
    // 0x801CD504: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x801CD508: lw          $a0, 0x78($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X78);
    // 0x801CD50C: addiu       $t0, $zero, 0x60
    ctx->r8 = ADD32(0, 0X60);
    // 0x801CD510: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801CD514: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801CD518: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CD51C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801CD520: jal         0x801CC56C
    // 0x801CD524: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_0;
    // 0x801CD524: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_0:
    // 0x801CD528: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CD52C: lw          $v0, -0x66E8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X66E8);
    // 0x801CD530: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x801CD534: addiu       $a1, $zero, -0x1E
    ctx->r5 = ADD32(0, -0X1E);
    // 0x801CD538: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x801CD53C: beq         $at, $zero, L_801CD554
    if (ctx->r1 == 0) {
        // 0x801CD540: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_801CD554;
    }
    // 0x801CD540: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x801CD544: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x801CD548: lw          $a0, 0x78($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X78);
    // 0x801CD54C: jal         0x800115B8
    // 0x801CD550: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800115B8_121B8(rdram, ctx);
        goto after_1;
    // 0x801CD550: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_801CD554:
    // 0x801CD554: lui         $t4, 0x801F
    ctx->r12 = S32(0X801F << 16);
    // 0x801CD558: lw          $t4, -0x66EC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X66EC);
    // 0x801CD55C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801CD560: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x801CD564: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x801CD568: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x801CD56C: addu        $t7, $s0, $t5
    ctx->r15 = ADD32(ctx->r16, ctx->r13);
    // 0x801CD570: lw          $a0, 0x1C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C);
    // 0x801CD574: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CD578: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CD57C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CD580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CD584: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CD588: jal         0x801CC56C
    // 0x801CD58C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_2;
    // 0x801CD58C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x801CD590: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CD594: lw          $v0, -0x66EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X66EC);
    // 0x801CD598: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x801CD59C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CD5A0: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x801CD5A4: beq         $at, $zero, L_801CD5CC
    if (ctx->r1 == 0) {
        // 0x801CD5A8: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_801CD5CC;
    }
    // 0x801CD5A8: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x801CD5AC: addu        $t0, $s0, $t9
    ctx->r8 = ADD32(ctx->r16, ctx->r25);
    // 0x801CD5B0: jal         0x800115B8
    // 0x801CD5B4: lw          $a0, 0x1C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1C);
    func_800115B8_121B8(rdram, ctx);
        goto after_3;
    // 0x801CD5B4: lw          $a0, 0x1C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1C);
    after_3:
    // 0x801CD5B8: lw          $a1, 0x40($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X40);
    // 0x801CD5BC: jal         0x80011610
    // 0x801CD5C0: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    func_80011610_12210(rdram, ctx);
        goto after_4;
    // 0x801CD5C0: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    after_4:
    // 0x801CD5C4: b           L_801CD5DC
    // 0x801CD5C8: nop

        goto L_801CD5DC;
    // 0x801CD5C8: nop

L_801CD5CC:
    // 0x801CD5CC: lw          $t1, 0x40($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X40);
    // 0x801CD5D0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x801CD5D4: jal         0x80011610
    // 0x801CD5D8: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    func_80011610_12210(rdram, ctx);
        goto after_5;
    // 0x801CD5D8: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_5:
L_801CD5DC:
    // 0x801CD5DC: lui         $t2, 0x801F
    ctx->r10 = S32(0X801F << 16);
    // 0x801CD5E0: lw          $t2, -0x66EC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X66EC);
    // 0x801CD5E4: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    // 0x801CD5E8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801CD5EC: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x801CD5F0: jal         0x801CD3B8
    // 0x801CD5F4: lw          $a1, 0x1C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X1C);
    func_801CD3B8_660268(rdram, ctx);
        goto after_6;
    // 0x801CD5F4: lw          $a1, 0x1C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X1C);
    after_6:
    // 0x801CD5F8: lui         $t5, 0x801F
    ctx->r13 = S32(0X801F << 16);
    // 0x801CD5FC: lw          $t5, -0x66EC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X66EC);
    // 0x801CD600: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CD604: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    // 0x801CD608: jal         0x80038B98
    // 0x801CD60C: sw          $t5, -0x66E8($at)
    MEM_W(-0X66E8, ctx->r1) = ctx->r13;
    func_80038B98_39798(rdram, ctx);
        goto after_7;
    // 0x801CD60C: sw          $t5, -0x66E8($at)
    MEM_W(-0X66E8, ctx->r1) = ctx->r13;
    after_7:
    // 0x801CD610: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801CD614: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801CD618: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801CD61C: jr          $ra
    // 0x801CD620: nop

    TRACE_RETURN()
    return;
    // 0x801CD620: nop

;}
RECOMP_FUNC void func_801CDD00_660BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDD00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801CDD04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CDD08: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801CDD0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CDD10: jal         0x801CD2A8
    // 0x801CDD14: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_801CD2A8_660158(rdram, ctx);
        goto after_0;
    // 0x801CDD14: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CDD18: jal         0x801CD2FC
    // 0x801CDD1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD2FC_6601AC(rdram, ctx);
        goto after_1;
    // 0x801CDD1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801CDD20: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x801CDD24: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CDD28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CDD2C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801CDD30: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    // 0x801CDD34: jal         0x801CC5C8
    // 0x801CDD38: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_2;
    // 0x801CDD38: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_2:
    // 0x801CDD3C: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x801CDD40: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x801CDD44: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x801CDD48: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CDD4C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CDD50: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CDD54: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x801CDD58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CDD5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CDD60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CDD64: jal         0x801CC56C
    // 0x801CDD68: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_3;
    // 0x801CDD68: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
    // 0x801CDD6C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x801CDD70: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x801CDD74: lw          $t9, 0x3324($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3324);
    // 0x801CDD78: lw          $a0, 0x1C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1C);
    // 0x801CDD7C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CDD80: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801CDD84: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801CDD88: jal         0x801CB6AC
    // 0x801CDD8C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_4;
    // 0x801CDD8C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_4:
    // 0x801CDD90: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x801CDD94: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801CDD98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CDD9C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x801CDDA0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801CDDA4: jal         0x801CB684
    // 0x801CDDA8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801CB684_65E534(rdram, ctx);
        goto after_5;
    // 0x801CDDA8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x801CDDAC: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CDDB0: addiu       $a1, $a1, -0x2390
    ctx->r5 = ADD32(ctx->r5, -0X2390);
    // 0x801CDDB4: jal         0x80011734
    // 0x801CDDB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80011734_12334(rdram, ctx);
        goto after_6;
    // 0x801CDDB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801CDDBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801CDDC0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801CDDC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801CDDC8: jr          $ra
    // 0x801CDDCC: nop

    TRACE_RETURN()
    return;
    // 0x801CDDCC: nop

;}
RECOMP_FUNC void func_801D0A30_6638E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0A30: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801D0A34: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801D0A38: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x801D0A3C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x801D0A40: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x801D0A44: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801D0A48: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801D0A4C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801D0A50: jal         0x8001136C
    // 0x801D0A54: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_8001136C_11F6C(rdram, ctx);
        goto after_0;
    // 0x801D0A54: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D0A58: lui         $s3, 0x801D
    ctx->r19 = S32(0X801D << 16);
    // 0x801D0A5C: addiu       $s3, $s3, 0x4CE8
    ctx->r19 = ADD32(ctx->r19, 0X4CE8);
    // 0x801D0A60: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x801D0A64: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x801D0A68: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x801D0A6C: jal         0x800108BC
    // 0x801D0A70: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    func_800108BC_114BC(rdram, ctx);
        goto after_1;
    // 0x801D0A70: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_1:
    // 0x801D0A74: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x801D0A78: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801D0A7C: addiu       $s2, $s4, 0x5C
    ctx->r18 = ADD32(ctx->r20, 0X5C);
    // 0x801D0A80: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_801D0A84:
    // 0x801D0A84: lw          $t8, 0x14($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X14);
    // 0x801D0A88: lw          $a1, 0x10($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X10);
    // 0x801D0A8C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D0A90: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801D0A94: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801D0A98: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D0A9C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D0AA0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D0AA4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x801D0AA8: addiu       $a3, $zero, 0xAC
    ctx->r7 = ADD32(0, 0XAC);
    // 0x801D0AAC: jal         0x800108E4
    // 0x801D0AB0: addu        $a2, $t8, $s0
    ctx->r6 = ADD32(ctx->r24, ctx->r16);
    func_800108E4_114E4(rdram, ctx);
        goto after_2;
    // 0x801D0AB0: addu        $a2, $t8, $s0
    ctx->r6 = ADD32(ctx->r24, ctx->r16);
    after_2:
    // 0x801D0AB4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801D0AB8: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x801D0ABC: addiu       $s1, $s1, -0x8
    ctx->r17 = ADD32(ctx->r17, -0X8);
    // 0x801D0AC0: bne         $at, $zero, L_801D0A84
    if (ctx->r1 != 0) {
        // 0x801D0AC4: sw          $v0, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r2;
            goto L_801D0A84;
    }
    // 0x801D0AC4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x801D0AC8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801D0ACC: addiu       $s1, $zero, 0x7F
    ctx->r17 = ADD32(0, 0X7F);
    // 0x801D0AD0: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
L_801D0AD4:
    // 0x801D0AD4: lw          $t0, 0x14($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X14);
    // 0x801D0AD8: lw          $a1, 0x10($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X10);
    // 0x801D0ADC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801D0AE0: addu        $a2, $t0, $s0
    ctx->r6 = ADD32(ctx->r8, ctx->r16);
    // 0x801D0AE4: addiu       $a2, $a2, 0x34
    ctx->r6 = ADD32(ctx->r6, 0X34);
    // 0x801D0AE8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801D0AEC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801D0AF0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D0AF4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D0AF8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D0AFC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x801D0B00: jal         0x800108E4
    // 0x801D0B04: addiu       $a3, $zero, 0xAC
    ctx->r7 = ADD32(0, 0XAC);
    func_800108E4_114E4(rdram, ctx);
        goto after_3;
    // 0x801D0B04: addiu       $a3, $zero, 0xAC
    ctx->r7 = ADD32(0, 0XAC);
    after_3:
    // 0x801D0B08: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801D0B0C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x801D0B10: bne         $s0, $s4, L_801D0AD4
    if (ctx->r16 != ctx->r20) {
        // 0x801D0B14: sw          $v0, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r2;
            goto L_801D0AD4;
    }
    // 0x801D0B14: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x801D0B18: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x801D0B1C: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x801D0B20: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
    // 0x801D0B24: lw          $v0, 0x30($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X30);
    // 0x801D0B28: lui         $v1, 0x8FFF
    ctx->r3 = S32(0X8FFF << 16);
    // 0x801D0B2C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x801D0B30: subu        $t6, $v1, $v0
    ctx->r14 = SUB32(ctx->r3, ctx->r2);
    // 0x801D0B34: and         $t7, $t3, $t6
    ctx->r15 = ctx->r11 & ctx->r14;
    // 0x801D0B38: and         $a1, $t7, $v1
    ctx->r5 = ctx->r15 & ctx->r3;
    // 0x801D0B3C: jal         0x80040620
    // 0x801D0B40: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_4;
    // 0x801D0B40: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    after_4:
    // 0x801D0B44: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801D0B48: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801D0B4C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801D0B50: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801D0B54: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x801D0B58: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x801D0B5C: jr          $ra
    // 0x801D0B60: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801D0B60: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801CC22C_65F0DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC22C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801CC230: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x801CC234: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801CC238: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801CC23C: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x801CC240: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x801CC244: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x801CC248: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x801CC24C: beq         $at, $zero, L_801CC26C
    if (ctx->r1 == 0) {
        // 0x801CC250: sw          $a3, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r7;
            goto L_801CC26C;
    }
    // 0x801CC250: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x801CC254: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801CC258: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC25C: addu        $at, $at, $t6
    gpr jr_addend_801CC264 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801CC260: lw          $t6, 0x42B8($at)
    ctx->r14 = ADD32(ctx->r1, 0X42B8);
    // 0x801CC264: jr          $t6
    // 0x801CC268: nop

    switch (jr_addend_801CC264 >> 2) {
        case 0: goto L_801CC280; break;
        case 1: goto L_801CC294; break;
        case 2: goto L_801CC2A8; break;
        case 3: goto L_801CC2BC; break;
        case 4: goto L_801CC2D0; break;
        case 5: goto L_801CC2E4; break;
        case 6: goto L_801CC2F8; break;
        case 7: goto L_801CC30C; break;
        default: switch_error(__func__, 0x801CC264, 0x801D42B8);
    }
    // 0x801CC268: nop

L_801CC26C:
    // 0x801CC26C: lui         $a2, 0x8006
    ctx->r6 = S32(0X8006 << 16);
    // 0x801CC270: addiu       $a2, $a2, 0x3930
    ctx->r6 = ADD32(ctx->r6, 0X3930);
    // 0x801CC274: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC278: b           L_801CC31C
    // 0x801CC27C: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
        goto L_801CC31C;
    // 0x801CC27C: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
L_801CC280:
    // 0x801CC280: lui         $a2, 0x8006
    ctx->r6 = S32(0X8006 << 16);
    // 0x801CC284: addiu       $a2, $a2, 0x3930
    ctx->r6 = ADD32(ctx->r6, 0X3930);
    // 0x801CC288: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC28C: b           L_801CC31C
    // 0x801CC290: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
        goto L_801CC31C;
    // 0x801CC290: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
L_801CC294:
    // 0x801CC294: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801CC298: addiu       $a2, $a2, 0x2F0
    ctx->r6 = ADD32(ctx->r6, 0X2F0);
    // 0x801CC29C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC2A0: b           L_801CC31C
    // 0x801CC2A4: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
        goto L_801CC31C;
    // 0x801CC2A4: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
L_801CC2A8:
    // 0x801CC2A8: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801CC2AC: addiu       $a2, $a2, 0x450
    ctx->r6 = ADD32(ctx->r6, 0X450);
    // 0x801CC2B0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC2B4: b           L_801CC31C
    // 0x801CC2B8: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
        goto L_801CC31C;
    // 0x801CC2B8: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
L_801CC2BC:
    // 0x801CC2BC: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801CC2C0: addiu       $a2, $a2, 0x5B0
    ctx->r6 = ADD32(ctx->r6, 0X5B0);
    // 0x801CC2C4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC2C8: b           L_801CC31C
    // 0x801CC2CC: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
        goto L_801CC31C;
    // 0x801CC2CC: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
L_801CC2D0:
    // 0x801CC2D0: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801CC2D4: addiu       $a2, $a2, 0x710
    ctx->r6 = ADD32(ctx->r6, 0X710);
    // 0x801CC2D8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC2DC: b           L_801CC31C
    // 0x801CC2E0: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
        goto L_801CC31C;
    // 0x801CC2E0: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
L_801CC2E4:
    // 0x801CC2E4: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801CC2E8: addiu       $a2, $a2, 0x9F0
    ctx->r6 = ADD32(ctx->r6, 0X9F0);
    // 0x801CC2EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC2F0: b           L_801CC31C
    // 0x801CC2F4: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
        goto L_801CC31C;
    // 0x801CC2F4: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
L_801CC2F8:
    // 0x801CC2F8: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801CC2FC: addiu       $a2, $a2, 0xB50
    ctx->r6 = ADD32(ctx->r6, 0XB50);
    // 0x801CC300: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC304: b           L_801CC31C
    // 0x801CC308: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
        goto L_801CC31C;
    // 0x801CC308: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
L_801CC30C:
    // 0x801CC30C: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801CC310: addiu       $a2, $a2, 0xCB0
    ctx->r6 = ADD32(ctx->r6, 0XCB0);
    // 0x801CC314: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC318: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
L_801CC31C:
    // 0x801CC31C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC320: lwc1        $f2, 0x42D8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X42D8);
    // 0x801CC324: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CC328: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CC32C: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x801CC330: addiu       $t7, $zero, 0x4CD
    ctx->r15 = ADD32(0, 0X4CD);
    // 0x801CC334: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x801CC338: addiu       $a3, $a3, -0x2768
    ctx->r7 = ADD32(ctx->r7, -0X2768);
    // 0x801CC33C: addiu       $a1, $a1, -0x425C
    ctx->r5 = ADD32(ctx->r5, -0X425C);
    // 0x801CC340: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x801CC344: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CC348: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CC34C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801CC350: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801CC354: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801CC358: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801CC35C: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x801CC360: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801CC364: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801CC368: jal         0x800358E8
    // 0x801CC36C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801CC36C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801CC370: bne         $v0, $zero, L_801CC380
    if (ctx->r2 != 0) {
        // 0x801CC374: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801CC380;
    }
    // 0x801CC374: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801CC378: b           L_801CC3E4
    // 0x801CC37C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801CC3E4;
    // 0x801CC37C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CC380:
    // 0x801CC380: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x801CC384: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x801CC388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CC38C: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
    // 0x801CC390: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x801CC394: addiu       $t0, $t9, 0x5C
    ctx->r8 = ADD32(ctx->r25, 0X5C);
    // 0x801CC398: sw          $t0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r8;
    // 0x801CC39C: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x801CC3A0: jal         0x800115F8
    // 0x801CC3A4: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    func_800115F8_121F8(rdram, ctx);
        goto after_1;
    // 0x801CC3A4: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    after_1:
    // 0x801CC3A8: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x801CC3AC: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x801CC3B0: addiu       $a1, $v1, 0x20
    ctx->r5 = ADD32(ctx->r3, 0X20);
    // 0x801CC3B4: sw          $t1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r9;
    // 0x801CC3B8: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x801CC3BC: addiu       $a2, $v1, 0x24
    ctx->r6 = ADD32(ctx->r3, 0X24);
    // 0x801CC3C0: jal         0x801CBFCC
    // 0x801CC3C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CBFCC_65EE7C(rdram, ctx);
        goto after_2;
    // 0x801CC3C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801CC3C8: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x801CC3CC: lui         $t2, 0x801E
    ctx->r10 = S32(0X801E << 16);
    // 0x801CC3D0: addiu       $t2, $t2, 0x46F0
    ctx->r10 = ADD32(ctx->r10, 0X46F0);
    // 0x801CC3D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CC3D8: jal         0x801CBF30
    // 0x801CC3DC: sw          $t2, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r10;
    func_801CBF30_65EDE0(rdram, ctx);
        goto after_3;
    // 0x801CC3DC: sw          $t2, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r10;
    after_3:
    // 0x801CC3E0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801CC3E4:
    // 0x801CC3E4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801CC3E8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801CC3EC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x801CC3F0: jr          $ra
    // 0x801CC3F4: nop

    TRACE_RETURN()
    return;
    // 0x801CC3F4: nop

;}
