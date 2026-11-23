#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80039DE4_3A9E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80039DE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80039DE8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80039DEC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80039DF0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80039DF4: addiu       $a0, $a0, 0x9DC
    ctx->r4 = ADD32(ctx->r4, 0X9DC);
    // 0x80039DF8: addiu       $v1, $v1, 0x9DA
    ctx->r3 = ADD32(ctx->r3, 0X9DA);
    // 0x80039DFC: addiu       $v0, $v0, 0x9D8
    ctx->r2 = ADD32(ctx->r2, 0X9D8);
    // 0x80039E00: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80039E04: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80039E08: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80039E0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80039E10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80039E14: sb          $zero, 0x2971($at)
    MEM_B(0X2971, ctx->r1) = 0;
    // 0x80039E18: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039E1C: sh          $zero, 0xA24($at)
    MEM_H(0XA24, ctx->r1) = 0;
    // 0x80039E20: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039E24: sb          $zero, 0xA26($at)
    MEM_B(0XA26, ctx->r1) = 0;
    // 0x80039E28: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x80039E2C: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x80039E30: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039E34: sb          $zero, 0x9D3($at)
    MEM_B(0X9D3, ctx->r1) = 0;
    // 0x80039E38: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80039E3C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039E40: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80039E44: sb          $zero, 0x9DB($at)
    MEM_B(0X9DB, ctx->r1) = 0;
    // 0x80039E48: addiu       $s1, $s1, 0xC28
    ctx->r17 = ADD32(ctx->r17, 0XC28);
    // 0x80039E4C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80039E50: addiu       $s2, $zero, 0x10
    ctx->r18 = ADD32(0, 0X10);
L_80039E54:
    // 0x80039E54: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80039E58: andi        $t9, $v0, 0x7FFF
    ctx->r25 = ctx->r2 & 0X7FFF;
    // 0x80039E5C: sltiu       $at, $t9, 0x10
    ctx->r1 = ctx->r25 < 0X10 ? 1 : 0;
    // 0x80039E60: bne         $at, $zero, L_80039E78
    if (ctx->r1 != 0) {
        // 0x80039E64: sltiu       $at, $t9, 0x100
        ctx->r1 = ctx->r25 < 0X100 ? 1 : 0;
            goto L_80039E78;
    }
    // 0x80039E64: sltiu       $at, $t9, 0x100
    ctx->r1 = ctx->r25 < 0X100 ? 1 : 0;
    // 0x80039E68: beql        $at, $zero, L_80039E7C
    if (ctx->r1 == 0) {
        // 0x80039E6C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80039E7C;
    }
    goto skip_0;
    // 0x80039E6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80039E70: jal         0x80039E9C
    // 0x80039E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80039E9C_3AA9C(rdram, ctx);
        goto after_0;
    // 0x80039E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
L_80039E78:
    // 0x80039E78: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80039E7C:
    // 0x80039E7C: bne         $s0, $s2, L_80039E54
    if (ctx->r16 != ctx->r18) {
        // 0x80039E80: addiu       $s1, $s1, 0xB0
        ctx->r17 = ADD32(ctx->r17, 0XB0);
            goto L_80039E54;
    }
    // 0x80039E80: addiu       $s1, $s1, 0xB0
    ctx->r17 = ADD32(ctx->r17, 0XB0);
    // 0x80039E84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80039E88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80039E8C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80039E90: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80039E94: jr          $ra
    // 0x80039E98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80039E98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003A838_3B438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A838: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003A83C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003A840: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8003A844: addiu       $s1, $s1, 0x1728
    ctx->r17 = ADD32(ctx->r17, 0X1728);
    // 0x8003A848: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003A84C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003A850: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003A854: sb          $zero, 0x26($sp)
    MEM_B(0X26, ctx->r29) = 0;
    // 0x8003A858: lbu         $t6, 0x22($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X22);
    // 0x8003A85C: bne         $t6, $zero, L_8003A86C
    if (ctx->r14 != 0) {
        // 0x8003A860: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8003A86C;
    }
    // 0x8003A860: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003A864: b           L_8003A8B4
    // 0x8003A868: sb          $t7, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r15;
        goto L_8003A8B4;
    // 0x8003A868: sb          $t7, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r15;
L_8003A86C:
    // 0x8003A86C: lbu         $t8, 0xE($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XE);
    // 0x8003A870: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8003A874: beql        $t8, $zero, L_8003A8B8
    if (ctx->r24 == 0) {
        // 0x8003A878: lw          $t3, 0x8($a2)
        ctx->r11 = MEM_W(ctx->r6, 0X8);
            goto L_8003A8B8;
    }
    goto skip_0;
    // 0x8003A878: lw          $t3, 0x8($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X8);
    skip_0:
    // 0x8003A87C: sb          $zero, 0xF($a2)
    MEM_B(0XF, ctx->r6) = 0;
    // 0x8003A880: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8003A884: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x8003A888: lui         $t2, 0x801C
    ctx->r10 = S32(0X801C << 16);
    // 0x8003A88C: sb          $zero, 0xE($t9)
    MEM_B(0XE, ctx->r25) = 0;
    // 0x8003A890: lbu         $t0, 0x9CC($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X9CC);
    // 0x8003A894: addiu       $t2, $t2, 0xA68
    ctx->r10 = ADD32(ctx->r10, 0XA68);
    // 0x8003A898: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    // 0x8003A89C: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8003A8A0: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8003A8A4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8003A8A8: jal         0x80048780
    // 0x8003A8AC: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
    alSynStopVoice(rdram, ctx);
        goto after_0;
    // 0x8003A8AC: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
    after_0:
    // 0x8003A8B0: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
L_8003A8B4:
    // 0x8003A8B4: lw          $t3, 0x8($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X8);
L_8003A8B8:
    // 0x8003A8B8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003A8BC: addiu       $a0, $a0, 0x172C
    ctx->r4 = ADD32(ctx->r4, 0X172C);
    // 0x8003A8C0: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8003A8C4: lbu         $v1, 0x0($t3)
    ctx->r3 = MEM_BU(ctx->r11, 0X0);
    // 0x8003A8C8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8003A8CC: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8003A8D0: slti        $at, $v1, 0xD0
    ctx->r1 = SIGNED(ctx->r3) < 0XD0 ? 1 : 0;
    // 0x8003A8D4: bne         $at, $zero, L_8003A924
    if (ctx->r1 != 0) {
        // 0x8003A8D8: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_8003A924;
    }
    // 0x8003A8D8: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
L_8003A8DC:
    // 0x8003A8DC: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x8003A8E0: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x8003A8E4: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x8003A8E8: lw          $t9, -0x1D30($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1D30);
    // 0x8003A8EC: jalr        $t9
    // 0x8003A8F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8003A8F0: nop

    after_1:
    // 0x8003A8F4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003A8F8: slti        $at, $s0, 0xF2
    ctx->r1 = SIGNED(ctx->r16) < 0XF2 ? 1 : 0;
    // 0x8003A8FC: beq         $at, $zero, L_8003ABF8
    if (ctx->r1 == 0) {
        // 0x8003A900: addiu       $a0, $a0, 0x172C
        ctx->r4 = ADD32(ctx->r4, 0X172C);
            goto L_8003ABF8;
    }
    // 0x8003A900: addiu       $a0, $a0, 0x172C
    ctx->r4 = ADD32(ctx->r4, 0X172C);
    // 0x8003A904: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003A908: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8003A90C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x8003A910: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8003A914: slti        $at, $v1, 0xD0
    ctx->r1 = SIGNED(ctx->r3) < 0XD0 ? 1 : 0;
    // 0x8003A918: beq         $at, $zero, L_8003A8DC
    if (ctx->r1 == 0) {
        // 0x8003A91C: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_8003A8DC;
    }
    // 0x8003A91C: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8003A920: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
L_8003A924:
    // 0x8003A924: lw          $t7, 0x28($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X28);
    // 0x8003A928: slti        $at, $s0, 0x68
    ctx->r1 = SIGNED(ctx->r16) < 0X68 ? 1 : 0;
    // 0x8003A92C: beq         $at, $zero, L_8003A940
    if (ctx->r1 == 0) {
        // 0x8003A930: sw          $t7, 0x84($a2)
        MEM_W(0X84, ctx->r6) = ctx->r15;
            goto L_8003A940;
    }
    // 0x8003A930: sw          $t7, 0x84($a2)
    MEM_W(0X84, ctx->r6) = ctx->r15;
    // 0x8003A934: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8003A938: b           L_8003A94C
    // 0x8003A93C: sb          $v1, 0x25($t8)
    MEM_B(0X25, ctx->r24) = ctx->r3;
        goto L_8003A94C;
    // 0x8003A93C: sb          $v1, 0x25($t8)
    MEM_B(0X25, ctx->r24) = ctx->r3;
L_8003A940:
    // 0x8003A940: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x8003A944: addiu       $t0, $s0, -0x68
    ctx->r8 = ADD32(ctx->r16, -0X68);
    // 0x8003A948: sb          $t0, 0x25($t1)
    MEM_B(0X25, ctx->r9) = ctx->r8;
L_8003A94C:
    // 0x8003A94C: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003A950: lbu         $v0, 0x25($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X25);
    // 0x8003A954: slti        $at, $v0, 0x48
    ctx->r1 = SIGNED(ctx->r2) < 0X48 ? 1 : 0;
    // 0x8003A958: bne         $at, $zero, L_8003A9AC
    if (ctx->r1 != 0) {
        // 0x8003A95C: addiu       $at, $zero, 0x67
        ctx->r1 = ADD32(0, 0X67);
            goto L_8003A9AC;
    }
    // 0x8003A95C: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x8003A960: bnel        $v0, $at, L_8003A988
    if (ctx->r2 != ctx->r1) {
        // 0x8003A964: lbu         $t9, 0x6($a2)
        ctx->r25 = MEM_BU(ctx->r6, 0X6);
            goto L_8003A988;
    }
    goto skip_1;
    // 0x8003A964: lbu         $t9, 0x6($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X6);
    skip_1:
    // 0x8003A968: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8003A96C: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x8003A970: sb          $t3, 0x25($a2)
    MEM_B(0X25, ctx->r6) = ctx->r11;
    // 0x8003A974: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8003A978: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003A97C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8003A980: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8003A984: lbu         $t9, 0x6($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X6);
L_8003A988:
    // 0x8003A988: ori         $t6, $t9, 0x4
    ctx->r14 = ctx->r25 | 0X4;
    // 0x8003A98C: jal         0x8003B79C
    // 0x8003A990: sb          $t6, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r14;
    func_8003B79C_3C39C(rdram, ctx);
        goto after_2;
    // 0x8003A990: sb          $t6, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r14;
    after_2:
    // 0x8003A994: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8003A998: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003A99C: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x8003A9A0: addiu       $a0, $a0, 0x172C
    ctx->r4 = ADD32(ctx->r4, 0X172C);
    // 0x8003A9A4: b           L_8003A9B8
    // 0x8003A9A8: sb          $t7, 0x25($t8)
    MEM_B(0X25, ctx->r24) = ctx->r15;
        goto L_8003A9B8;
    // 0x8003A9A8: sb          $t7, 0x25($t8)
    MEM_B(0X25, ctx->r24) = ctx->r15;
L_8003A9AC:
    // 0x8003A9AC: lbu         $t0, 0x6($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X6);
    // 0x8003A9B0: andi        $t1, $t0, 0xFB
    ctx->r9 = ctx->r8 & 0XFB;
    // 0x8003A9B4: sb          $t1, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r9;
L_8003A9B8:
    // 0x8003A9B8: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003A9BC: slti        $at, $s0, 0x68
    ctx->r1 = SIGNED(ctx->r16) < 0X68 ? 1 : 0;
    // 0x8003A9C0: lbu         $t2, 0x25($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X25);
    // 0x8003A9C4: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x8003A9C8: sw          $t3, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r11;
    // 0x8003A9CC: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003A9D0: lw          $t4, 0x28($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X28);
    // 0x8003A9D4: lh          $t5, 0x2C($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X2C);
    // 0x8003A9D8: addu        $t9, $t4, $t5
    ctx->r25 = ADD32(ctx->r12, ctx->r13);
    // 0x8003A9DC: sw          $t9, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r25;
    // 0x8003A9E0: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003A9E4: lw          $t6, 0x28($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X28);
    // 0x8003A9E8: lh          $t7, 0x2E($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X2E);
    // 0x8003A9EC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8003A9F0: sw          $t8, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r24;
    // 0x8003A9F4: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003A9F8: lw          $t0, 0x28($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X28);
    // 0x8003A9FC: lh          $t1, 0x30($a2)
    ctx->r9 = MEM_H(ctx->r6, 0X30);
    // 0x8003AA00: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8003AA04: sw          $t2, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r10;
    // 0x8003AA08: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003AA0C: lw          $t3, 0x28($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X28);
    // 0x8003AA10: lh          $t4, 0x32($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X32);
    // 0x8003AA14: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8003AA18: sw          $t5, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r13;
    // 0x8003AA1C: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003AA20: lw          $t9, 0x28($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X28);
    // 0x8003AA24: lh          $t6, 0x34($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X34);
    // 0x8003AA28: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8003AA2C: beq         $at, $zero, L_8003AA50
    if (ctx->r1 == 0) {
        // 0x8003AA30: sw          $t7, 0x28($a2)
        MEM_W(0X28, ctx->r6) = ctx->r15;
            goto L_8003AA50;
    }
    // 0x8003AA30: sw          $t7, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r15;
    // 0x8003AA34: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8003AA38: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x8003AA3C: lbu         $t0, 0x0($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X0);
    // 0x8003AA40: sb          $t0, 0x20($t1)
    MEM_B(0X20, ctx->r9) = ctx->r8;
    // 0x8003AA44: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8003AA48: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8003AA4C: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
L_8003AA50:
    // 0x8003AA50: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003AA54: lbu         $t4, 0x20($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X20);
    // 0x8003AA58: sb          $t4, 0x21($a2)
    MEM_B(0X21, ctx->r6) = ctx->r12;
    // 0x8003AA5C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003AA60: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8003AA64: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x8003AA68: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8003AA6C: slti        $at, $v1, 0x80
    ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x8003AA70: beq         $at, $zero, L_8003AA90
    if (ctx->r1 == 0) {
        // 0x8003AA74: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_8003AA90;
    }
    // 0x8003AA74: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8003AA78: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8003AA7C: sb          $v1, 0x23($t9)
    MEM_B(0X23, ctx->r25) = ctx->r3;
    // 0x8003AA80: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003AA84: lbu         $s0, 0x0($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X0);
    // 0x8003AA88: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x8003AA8C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
L_8003AA90:
    // 0x8003AA90: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003AA94: andi        $t4, $s0, 0x7F
    ctx->r12 = ctx->r16 & 0X7F;
    // 0x8003AA98: lbu         $t7, 0x23($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X23);
    // 0x8003AA9C: sb          $t7, 0x22($a2)
    MEM_B(0X22, ctx->r6) = ctx->r15;
    // 0x8003AAA0: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003AAA4: lbu         $v0, 0x22($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X22);
    // 0x8003AAA8: bnel        $v0, $zero, L_8003AAC0
    if (ctx->r2 != 0) {
        // 0x8003AAAC: lbu         $t8, 0x21($a2)
        ctx->r24 = MEM_BU(ctx->r6, 0X21);
            goto L_8003AAC0;
    }
    goto skip_2;
    // 0x8003AAAC: lbu         $t8, 0x21($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X21);
    skip_2:
    // 0x8003AAB0: sb          $zero, 0x24($a2)
    MEM_B(0X24, ctx->r6) = 0;
    // 0x8003AAB4: b           L_8003AAEC
    // 0x8003AAB8: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
        goto L_8003AAEC;
    // 0x8003AAB8: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003AABC: lbu         $t8, 0x21($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X21);
L_8003AAC0:
    // 0x8003AAC0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8003AAC4: multu       $t8, $v0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003AAC8: mflo        $t0
    ctx->r8 = lo;
    // 0x8003AACC: sra         $t1, $t0, 7
    ctx->r9 = S32(SIGNED(ctx->r8) >> 7);
    // 0x8003AAD0: sb          $t1, 0x24($a2)
    MEM_B(0X24, ctx->r6) = ctx->r9;
    // 0x8003AAD4: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003AAD8: lbu         $t2, 0x24($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X24);
    // 0x8003AADC: bnel        $t2, $zero, L_8003AAF0
    if (ctx->r10 != 0) {
        // 0x8003AAE0: sb          $t4, 0x48($a2)
        MEM_B(0X48, ctx->r6) = ctx->r12;
            goto L_8003AAF0;
    }
    goto skip_3;
    // 0x8003AAE0: sb          $t4, 0x48($a2)
    MEM_B(0X48, ctx->r6) = ctx->r12;
    skip_3:
    // 0x8003AAE4: sb          $t3, 0x24($a2)
    MEM_B(0X24, ctx->r6) = ctx->r11;
    // 0x8003AAE8: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
L_8003AAEC:
    // 0x8003AAEC: sb          $t4, 0x48($a2)
    MEM_B(0X48, ctx->r6) = ctx->r12;
L_8003AAF0:
    // 0x8003AAF0: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8003AAF4: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8003AAF8: sw          $t5, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r13;
    // 0x8003AAFC: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003AB00: lh          $t6, 0x8A($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X8A);
    // 0x8003AB04: bne         $t6, $zero, L_8003AB14
    if (ctx->r14 != 0) {
        // 0x8003AB08: nop
    
            goto L_8003AB14;
    }
    // 0x8003AB08: nop

    // 0x8003AB0C: b           L_8003AB1C
    // 0x8003AB10: sb          $zero, 0x7D($a2)
    MEM_B(0X7D, ctx->r6) = 0;
        goto L_8003AB1C;
    // 0x8003AB10: sb          $zero, 0x7D($a2)
    MEM_B(0X7D, ctx->r6) = 0;
L_8003AB14:
    // 0x8003AB14: jal         0x8003C790
    // 0x8003AB18: nop

    func_8003C790_3D390(rdram, ctx);
        goto after_3;
    // 0x8003AB18: nop

    after_3:
L_8003AB1C:
    // 0x8003AB1C: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8003AB20: sh          $zero, 0x36($t7)
    MEM_H(0X36, ctx->r15) = 0;
    // 0x8003AB24: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003AB28: lhu         $t8, 0x9A($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X9A);
    // 0x8003AB2C: beql        $t8, $zero, L_8003AB44
    if (ctx->r24 == 0) {
        // 0x8003AB30: lbu         $t0, 0xAC($a2)
        ctx->r8 = MEM_BU(ctx->r6, 0XAC);
            goto L_8003AB44;
    }
    goto skip_4;
    // 0x8003AB30: lbu         $t0, 0xAC($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0XAC);
    skip_4:
    // 0x8003AB34: jal         0x8003C0AC
    // 0x8003AB38: nop

    func_8003C0AC_3CCAC(rdram, ctx);
        goto after_4;
    // 0x8003AB38: nop

    after_4:
    // 0x8003AB3C: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003AB40: lbu         $t0, 0xAC($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0XAC);
L_8003AB44:
    // 0x8003AB44: bnel        $t0, $zero, L_8003ABFC
    if (ctx->r8 != 0) {
        // 0x8003AB48: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8003ABFC;
    }
    goto skip_5;
    // 0x8003AB48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x8003AB4C: jal         0x8003AEB0
    // 0x8003AB50: nop

    func_8003AEB0_3BAB0(rdram, ctx);
        goto after_5;
    // 0x8003AB50: nop

    after_5:
    // 0x8003AB54: lbu         $t1, 0x26($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X26);
    // 0x8003AB58: bnel        $t1, $zero, L_8003ABBC
    if (ctx->r9 != 0) {
        // 0x8003AB5C: lw          $t0, 0x0($s1)
        ctx->r8 = MEM_W(ctx->r17, 0X0);
            goto L_8003ABBC;
    }
    goto skip_6;
    // 0x8003AB5C: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    skip_6:
    // 0x8003AB60: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x8003AB64: ori         $t2, $zero, 0xFFFF
    ctx->r10 = 0 | 0XFFFF;
    // 0x8003AB68: jal         0x8003B1BC
    // 0x8003AB6C: sh          $t2, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r10;
    func_8003B1BC_3BDBC(rdram, ctx);
        goto after_6;
    // 0x8003AB6C: sh          $t2, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r10;
    after_6:
    // 0x8003AB70: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x8003AB74: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8003AB78: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x8003AB7C: sb          $t4, 0xE($t5)
    MEM_B(0XE, ctx->r13) = ctx->r12;
    // 0x8003AB80: lbu         $t9, 0x9CC($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X9CC);
    // 0x8003AB84: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8003AB88: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003AB8C: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x8003AB90: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x8003AB94: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003AB98: addiu       $t7, $t7, 0xA68
    ctx->r15 = ADD32(ctx->r15, 0XA68);
    // 0x8003AB9C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8003ABA0: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    // 0x8003ABA4: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x8003ABA8: jal         0x80048800
    // 0x8003ABAC: lw          $a2, 0x14($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X14);
    alSynStartVoice(rdram, ctx);
        goto after_7;
    // 0x8003ABAC: lw          $a2, 0x14($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X14);
    after_7:
    // 0x8003ABB0: b           L_8003ABFC
    // 0x8003ABB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8003ABFC;
    // 0x8003ABB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003ABB8: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
L_8003ABBC:
    // 0x8003ABBC: lhu         $t1, 0x4C($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X4C);
    // 0x8003ABC0: beq         $t1, $zero, L_8003ABF0
    if (ctx->r9 == 0) {
        // 0x8003ABC4: nop
    
            goto L_8003ABF0;
    }
    // 0x8003ABC4: nop

    // 0x8003ABC8: jal         0x8003B394
    // 0x8003ABCC: nop

    func_8003B394_3BF94(rdram, ctx);
        goto after_8;
    // 0x8003ABCC: nop

    after_8:
    // 0x8003ABD0: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x8003ABD4: lhu         $t3, 0x4C($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X4C);
    // 0x8003ABD8: beql        $t3, $zero, L_8003ABFC
    if (ctx->r11 == 0) {
        // 0x8003ABDC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8003ABFC;
    }
    goto skip_7;
    // 0x8003ABDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x8003ABE0: jal         0x8003AFB0
    // 0x8003ABE4: nop

    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_9;
    // 0x8003ABE4: nop

    after_9:
    // 0x8003ABE8: b           L_8003ABFC
    // 0x8003ABEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8003ABFC;
    // 0x8003ABEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8003ABF0:
    // 0x8003ABF0: jal         0x8003AFB0
    // 0x8003ABF4: nop

    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_10;
    // 0x8003ABF4: nop

    after_10:
L_8003ABF8:
    // 0x8003ABF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8003ABFC:
    // 0x8003ABFC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003AC00: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003AC04: jr          $ra
    // 0x8003AC08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8003AC08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800039C0_45C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800039C0: sltiu       $at, $a0, 0xD42
    ctx->r1 = ctx->r4 < 0XD42 ? 1 : 0;
    // 0x800039C4: beq         $at, $zero, L_80003A1C
    if (ctx->r1 == 0) {
        // 0x800039C8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80003A1C;
    }
    // 0x800039C8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800039CC: lui         $v0, 0x8006
    ctx->r2 = S32(0X8006 << 16);
    // 0x800039D0: addiu       $v0, $v0, -0x4EA4
    ctx->r2 = ADD32(ctx->r2, -0X4EA4);
L_800039D4:
    // 0x800039D4: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x800039D8: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x800039DC: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x800039E0: sltu        $at, $a0, $t8
    ctx->r1 = ctx->r4 < ctx->r24 ? 1 : 0;
    // 0x800039E4: beq         $at, $zero, L_80003A08
    if (ctx->r1 == 0) {
        // 0x800039E8: lui         $t9, 0x8006
        ctx->r25 = S32(0X8006 << 16);
            goto L_80003A08;
    }
    // 0x800039E8: lui         $t9, 0x8006
    ctx->r25 = S32(0X8006 << 16);
    // 0x800039EC: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x800039F0: lbu         $t9, -0x6EA8($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X6EA8);
    // 0x800039F4: sll         $t0, $v1, 8
    ctx->r8 = S32(ctx->r3 << 8);
    // 0x800039F8: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x800039FC: andi        $t1, $v0, 0xFFFF
    ctx->r9 = ctx->r2 & 0XFFFF;
    // 0x80003A00: jr          $ra
    // 0x80003A04: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    TRACE_RETURN()
    return;
    // 0x80003A04: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_80003A08:
    // 0x80003A08: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80003A0C: andi        $t2, $v1, 0xFF
    ctx->r10 = ctx->r3 & 0XFF;
    // 0x80003A10: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x80003A14: bne         $at, $zero, L_800039D4
    if (ctx->r1 != 0) {
        // 0x80003A18: or          $v1, $t2, $zero
        ctx->r3 = ctx->r10 | 0;
            goto L_800039D4;
    }
    // 0x80003A18: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
L_80003A1C:
    // 0x80003A1C: lui         $v0, 0x8006
    ctx->r2 = S32(0X8006 << 16);
    // 0x80003A20: addiu       $v0, $v0, -0x4EA4
    ctx->r2 = ADD32(ctx->r2, -0X4EA4);
    // 0x80003A24: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
L_80003A28:
    // 0x80003A28: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x80003A2C: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x80003A30: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80003A34: sltu        $at, $a0, $t5
    ctx->r1 = ctx->r4 < ctx->r13 ? 1 : 0;
    // 0x80003A38: bne         $at, $zero, L_80003A60
    if (ctx->r1 != 0) {
        // 0x80003A3C: lui         $t6, 0x8006
        ctx->r14 = S32(0X8006 << 16);
            goto L_80003A60;
    }
    // 0x80003A3C: lui         $t6, 0x8006
    ctx->r14 = S32(0X8006 << 16);
    // 0x80003A40: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80003A44: lbu         $t6, -0x6EA8($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X6EA8);
    // 0x80003A48: sll         $t7, $v1, 8
    ctx->r15 = S32(ctx->r3 << 8);
    // 0x80003A4C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80003A50: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x80003A54: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x80003A58: jr          $ra
    // 0x80003A5C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    TRACE_RETURN()
    return;
    // 0x80003A5C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80003A60:
    // 0x80003A60: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80003A64: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x80003A68: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x80003A6C: beq         $at, $zero, L_80003A28
    if (ctx->r1 == 0) {
        // 0x80003A70: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_80003A28;
    }
    // 0x80003A70: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x80003A74: lui         $v0, 0x8006
    ctx->r2 = S32(0X8006 << 16);
    // 0x80003A78: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80003A7C: lbu         $v0, -0x6EA8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6EA8);
    // 0x80003A80: addiu       $v0, $v0, 0x1000
    ctx->r2 = ADD32(ctx->r2, 0X1000);
    // 0x80003A84: andi        $t0, $v0, 0xFFFF
    ctx->r8 = ctx->r2 & 0XFFFF;
    // 0x80003A88: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80003A8C: jr          $ra
    // 0x80003A90: nop

    TRACE_RETURN()
    return;
    // 0x80003A90: nop

;}
RECOMP_FUNC void func_8001C228_1CE28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001C228: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001C22C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x8001C230: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001C234: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8001C238: sw          $a0, -0x7670($at)
    MEM_W(-0X7670, ctx->r1) = ctx->r4;
    // 0x8001C23C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001C240: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8001C244: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001C248: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001C24C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001C250: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8001C254: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8001C258: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8001C25C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8001C260: sw          $a3, -0x7648($at)
    MEM_W(-0X7648, ctx->r1) = ctx->r7;
    // 0x8001C264: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8001C268: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x8001C26C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001C270: and         $t7, $v1, $at
    ctx->r15 = ctx->r3 & ctx->r1;
    // 0x8001C274: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x8001C278: beq         $a1, $t7, L_8001C2A0
    if (ctx->r5 == ctx->r15) {
        // 0x8001C27C: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_8001C2A0;
    }
    // 0x8001C27C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8001C280: beq         $t7, $zero, L_8001C2BC
    if (ctx->r15 == 0) {
        // 0x8001C284: lui         $v1, 0x8017
        ctx->r3 = S32(0X8017 << 16);
            goto L_8001C2BC;
    }
    // 0x8001C284: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8001C288: addiu       $v1, $v1, -0x761C
    ctx->r3 = ADD32(ctx->r3, -0X761C);
    // 0x8001C28C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001C290: beq         $v0, $zero, L_8001C2BC
    if (ctx->r2 == 0) {
        // 0x8001C294: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_8001C2BC;
    }
    // 0x8001C294: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x8001C298: bne         $t9, $zero, L_8001C2BC
    if (ctx->r25 != 0) {
        // 0x8001C29C: sw          $t9, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r25;
            goto L_8001C2BC;
    }
    // 0x8001C29C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
L_8001C2A0:
    // 0x8001C2A0: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8001C2A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001C2A8: sw          $s0, -0x7684($at)
    MEM_W(-0X7684, ctx->r1) = ctx->r16;
    // 0x8001C2AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001C2B0: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x8001C2B4: b           L_8001C3CC
    // 0x8001C2B8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_8001C3CC;
    // 0x8001C2B8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_8001C2BC:
    // 0x8001C2BC: lb          $t2, 0x4($s1)
    ctx->r10 = MEM_B(ctx->r17, 0X4);
    // 0x8001C2C0: beql        $t2, $zero, L_8001C350
    if (ctx->r10 == 0) {
        // 0x8001C2C4: lb          $t7, 0x5($s1)
        ctx->r15 = MEM_B(ctx->r17, 0X5);
            goto L_8001C350;
    }
    goto skip_0;
    // 0x8001C2C4: lb          $t7, 0x5($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X5);
    skip_0:
    // 0x8001C2C8: beq         $s0, $zero, L_8001C2F4
    if (ctx->r16 == 0) {
        // 0x8001C2CC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8001C2F4;
    }
    // 0x8001C2CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001C2D0: jal         0x80018F3C
    // 0x8001C2D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80018F3C_19B3C(rdram, ctx);
        goto after_0;
    // 0x8001C2D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8001C2D8: bne         $v0, $zero, L_8001C2F4
    if (ctx->r2 != 0) {
        // 0x8001C2DC: sw          $v0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r2;
            goto L_8001C2F4;
    }
    // 0x8001C2DC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8001C2E0: lw          $t3, 0x78($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X78);
    // 0x8001C2E4: beq         $t3, $zero, L_8001C2F4
    if (ctx->r11 == 0) {
        // 0x8001C2E8: nop
    
            goto L_8001C2F4;
    }
    // 0x8001C2E8: nop

    // 0x8001C2EC: jal         0x8003674C
    // 0x8001C2F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003674C_3734C(rdram, ctx);
        goto after_1;
    // 0x8001C2F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_8001C2F4:
    // 0x8001C2F4: beq         $s0, $zero, L_8001C300
    if (ctx->r16 == 0) {
        // 0x8001C2F8: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_8001C300;
    }
    // 0x8001C2F8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8001C2FC: beq         $t4, $zero, L_8001C34C
    if (ctx->r12 == 0) {
        // 0x8001C300: lui         $t5, 0x8017
        ctx->r13 = S32(0X8017 << 16);
            goto L_8001C34C;
    }
L_8001C300:
    // 0x8001C300: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8001C304: lw          $t5, -0x7AE4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7AE4);
    // 0x8001C308: lb          $v0, 0x4($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X4);
    // 0x8001C30C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C310: beq         $t5, $zero, L_8001C324
    if (ctx->r13 == 0) {
        // 0x8001C314: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_8001C324;
    }
    // 0x8001C314: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8001C318: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8001C31C: b           L_8001C328
    // 0x8001C320: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
        goto L_8001C328;
    // 0x8001C320: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_8001C324:
    // 0x8001C324: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
L_8001C328:
    // 0x8001C328: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8001C32C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8001C330: addu        $a0, $s1, $t6
    ctx->r4 = ADD32(ctx->r17, ctx->r14);
    // 0x8001C334: jal         0x8001C228
    // 0x8001C338: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    func_8001C228_1CE28(rdram, ctx);
        goto after_2;
    // 0x8001C338: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8001C33C: beql        $v0, $zero, L_8001C350
    if (ctx->r2 == 0) {
        // 0x8001C340: lb          $t7, 0x5($s1)
        ctx->r15 = MEM_B(ctx->r17, 0X5);
            goto L_8001C350;
    }
    goto skip_1;
    // 0x8001C340: lb          $t7, 0x5($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X5);
    skip_1:
    // 0x8001C344: b           L_8001C3CC
    // 0x8001C348: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
        goto L_8001C3CC;
    // 0x8001C348: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_8001C34C:
    // 0x8001C34C: lb          $t7, 0x5($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X5);
L_8001C350:
    // 0x8001C350: beql        $t7, $zero, L_8001C3CC
    if (ctx->r15 == 0) {
        // 0x8001C354: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8001C3CC;
    }
    goto skip_2;
    // 0x8001C354: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x8001C358: beq         $s0, $zero, L_8001C384
    if (ctx->r16 == 0) {
        // 0x8001C35C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8001C384;
    }
    // 0x8001C35C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001C360: jal         0x8001904C
    // 0x8001C364: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001904C_19C4C(rdram, ctx);
        goto after_3;
    // 0x8001C364: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x8001C368: bne         $v0, $zero, L_8001C384
    if (ctx->r2 != 0) {
        // 0x8001C36C: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_8001C384;
    }
    // 0x8001C36C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8001C370: lw          $t8, 0x74($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X74);
    // 0x8001C374: beq         $t8, $zero, L_8001C384
    if (ctx->r24 == 0) {
        // 0x8001C378: nop
    
            goto L_8001C384;
    }
    // 0x8001C378: nop

    // 0x8001C37C: jal         0x80036798
    // 0x8001C380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80036798_37398(rdram, ctx);
        goto after_4;
    // 0x8001C380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_8001C384:
    // 0x8001C384: beq         $s0, $zero, L_8001C394
    if (ctx->r16 == 0) {
        // 0x8001C388: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_8001C394;
    }
    // 0x8001C388: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8001C38C: beql        $t9, $zero, L_8001C3CC
    if (ctx->r25 == 0) {
        // 0x8001C390: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8001C3CC;
    }
    goto skip_3;
    // 0x8001C390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
L_8001C394:
    // 0x8001C394: lb          $t0, 0x5($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X5);
    // 0x8001C398: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C39C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8001C3A0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8001C3A4: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8001C3A8: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8001C3AC: addu        $a0, $s1, $t1
    ctx->r4 = ADD32(ctx->r17, ctx->r9);
    // 0x8001C3B0: jal         0x8001C228
    // 0x8001C3B4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    func_8001C228_1CE28(rdram, ctx);
        goto after_5;
    // 0x8001C3B4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x8001C3B8: beql        $v0, $zero, L_8001C3CC
    if (ctx->r2 == 0) {
        // 0x8001C3BC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8001C3CC;
    }
    goto skip_4;
    // 0x8001C3BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_4:
    // 0x8001C3C0: b           L_8001C3CC
    // 0x8001C3C4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
        goto L_8001C3CC;
    // 0x8001C3C4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8001C3C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001C3CC:
    // 0x8001C3CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C3D0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001C3D4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001C3D8: jr          $ra
    // 0x8001C3DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8001C3DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80004208_4E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80004208: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8000420C: beq         $a2, $zero, L_80004230
    if (ctx->r6 == 0) {
        // 0x80004210: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_80004230;
    }
    // 0x80004210: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_80004214:
    // 0x80004214: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80004218: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8000421C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80004220: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80004224: sb          $t6, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r14;
    // 0x80004228: bne         $a2, $zero, L_80004214
    if (ctx->r6 != 0) {
        // 0x8000422C: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_80004214;
    }
    // 0x8000422C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_80004230:
    // 0x80004230: jr          $ra
    // 0x80004234: nop

    TRACE_RETURN()
    return;
    // 0x80004234: nop

;}
RECOMP_FUNC void func_8001F5F8_201F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001F5F8: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x8001F5FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8001F600: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8001F604: addiu       $v1, $a1, 0x20
    ctx->r3 = ADD32(ctx->r5, 0X20);
    // 0x8001F608: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8001F60C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8001F610: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
    // 0x8001F614: lui         $a2, 0xFFFF
    ctx->r6 = S32(0XFFFF << 16);
L_8001F618:
    // 0x8001F618: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8001F61C: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8001F620: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x8001F624: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8001F628: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x8001F62C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8001F630: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001F634: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8001F638: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8001F63C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8001F640: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x8001F644: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8001F648: and         $t8, $a0, $a2
    ctx->r24 = ctx->r4 & ctx->r6;
    // 0x8001F64C: sll         $t4, $a0, 16
    ctx->r12 = S32(ctx->r4 << 16);
    // 0x8001F650: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8001F654: andi        $t2, $t9, 0xFFFF
    ctx->r10 = ctx->r25 & 0XFFFF;
    // 0x8001F658: or          $t3, $t8, $t2
    ctx->r11 = ctx->r24 | ctx->r10;
    // 0x8001F65C: and         $t5, $t4, $a2
    ctx->r13 = ctx->r12 & ctx->r6;
    // 0x8001F660: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x8001F664: sw          $t3, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r11;
    // 0x8001F668: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x8001F66C: sw          $t7, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r15;
    // 0x8001F670: lwc1        $f4, -0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, -0X8);
    // 0x8001F674: lwc1        $f10, -0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, -0X4);
    // 0x8001F678: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8001F67C: nop

    // 0x8001F680: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001F684: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8001F688: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8001F68C: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x8001F690: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8001F694: and         $t2, $a0, $a2
    ctx->r10 = ctx->r4 & ctx->r6;
    // 0x8001F698: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8001F69C: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8001F6A0: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x8001F6A4: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8001F6A8: and         $t7, $t6, $a2
    ctx->r15 = ctx->r14 & ctx->r6;
    // 0x8001F6AC: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x8001F6B0: sw          $t5, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r13;
    // 0x8001F6B4: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8001F6B8: bne         $a3, $t1, L_8001F618
    if (ctx->r7 != ctx->r9) {
        // 0x8001F6BC: sw          $t8, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r24;
            goto L_8001F618;
    }
    // 0x8001F6BC: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x8001F6C0: jr          $ra
    // 0x8001F6C4: nop

    TRACE_RETURN()
    return;
    // 0x8001F6C4: nop

;}
RECOMP_FUNC void func_8000E808_F408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E808: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8000E80C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E810: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8000E814: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x8000E818: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x8000E81C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8000E820: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x8000E824: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x8000E828: jal         0x80003F30
    // 0x8000E82C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_80003F30_4B30(rdram, ctx);
        goto after_0;
    // 0x8000E82C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_0:
    // 0x8000E830: lhu         $a0, 0x66($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X66);
    // 0x8000E834: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x8000E838: jal         0x80003F30
    // 0x8000E83C: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_1;
    // 0x8000E83C: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8000E840: lhu         $a0, 0x6A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6A);
    // 0x8000E844: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x8000E848: jal         0x80003F30
    // 0x8000E84C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_2;
    // 0x8000E84C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x8000E850: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8000E854: lw          $v1, 0x74($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X74);
    // 0x8000E858: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8000E85C: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8000E860: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000E864: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8000E868: mul.s       $f12, $f6, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8000E86C: lwc1        $f14, 0x5C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8000E870: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8000E874: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x8000E878: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000E87C: mul.s       $f2, $f14, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8000E880: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8000E884: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8000E888: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x8000E88C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x8000E890: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8000E894: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000E898: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x8000E89C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8000E8A0: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8000E8A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000E8A8: mul.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8000E8AC: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E8B0: mul.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8000E8B4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8000E8B8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8000E8BC: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E8C0: sub.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8000E8C4: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8000E8C8: mul.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8000E8CC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8000E8D0: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8000E8D4: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000E8D8: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x8000E8DC: mul.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8000E8E0: nop

    // 0x8000E8E4: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8000E8E8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8000E8EC: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8000E8F0: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8000E8F4: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E8F8: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8000E8FC: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x8000E900: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000E904: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8000E908: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000E90C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x8000E910: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000E914: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8000E918: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8000E91C: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8000E920: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8000E924: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8000E928: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000E92C: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E930: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x8000E934: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E938: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8000E93C: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8000E940: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8000E944: nop

    // 0x8000E948: mul.s       $f8, $f14, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x8000E94C: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8000E950: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8000E954: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8000E958: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000E95C: neg.s       $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = -ctx->f16.fl;
    // 0x8000E960: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x8000E964: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8000E968: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000E96C: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x8000E970: nop

    // 0x8000E974: mul.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8000E978: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8000E97C: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E980: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8000E984: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000E988: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x8000E98C: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8000E990: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000E994: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x8000E998: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000E99C: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x8000E9A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E9A4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8000E9A8: jr          $ra
    // 0x8000E9AC: nop

    TRACE_RETURN()
    return;
    // 0x8000E9AC: nop

;}
RECOMP_FUNC void func_800182DC_18EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800182DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800182E0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800182E4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800182E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800182EC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800182F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800182F4: jal         0x8001AABC
    // 0x800182F8: lhu         $a0, 0x6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6);
    func_8001AABC_1B6BC(rdram, ctx);
        goto after_0;
    // 0x800182F8: lhu         $a0, 0x6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6);
    after_0:
    // 0x800182FC: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80018300: addiu       $s0, $s0, -0x7B08
    ctx->r16 = ADD32(ctx->r16, -0X7B08);
    // 0x80018304: lui         $s1, 0x8017
    ctx->r17 = S32(0X8017 << 16);
    // 0x80018308: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8001830C: addiu       $s1, $s1, -0x7B58
    ctx->r17 = ADD32(ctx->r17, -0X7B58);
    // 0x80018310: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80018314: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80018318: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8001831C: sb          $v0, 0x8($t9)
    MEM_B(0X8, ctx->r25) = ctx->r2;
    // 0x80018320: jal         0x8001AABC
    // 0x80018324: lhu         $a0, 0x8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8);
    func_8001AABC_1B6BC(rdram, ctx);
        goto after_1;
    // 0x80018324: lhu         $a0, 0x8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8);
    after_1:
    // 0x80018328: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8001832C: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x80018330: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80018334: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80018338: sb          $v0, 0x9($t3)
    MEM_B(0X9, ctx->r11) = ctx->r2;
    // 0x8001833C: jal         0x8001AABC
    // 0x80018340: lhu         $a0, 0xA($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XA);
    func_8001AABC_1B6BC(rdram, ctx);
        goto after_2;
    // 0x80018340: lhu         $a0, 0xA($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XA);
    after_2:
    // 0x80018344: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80018348: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x8001834C: sll         $t7, $t5, 4
    ctx->r15 = S32(ctx->r13 << 4);
    // 0x80018350: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x80018354: sb          $v0, 0xA($t6)
    MEM_B(0XA, ctx->r14) = ctx->r2;
    // 0x80018358: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8001835C: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80018360: sll         $t1, $t9, 4
    ctx->r9 = S32(ctx->r25 << 4);
    // 0x80018364: addu        $t0, $t8, $t1
    ctx->r8 = ADD32(ctx->r24, ctx->r9);
    // 0x80018368: sb          $zero, 0xB($t0)
    MEM_B(0XB, ctx->r8) = 0;
    // 0x8001836C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80018370: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80018374: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x80018378: addu        $v1, $t2, $t5
    ctx->r3 = ADD32(ctx->r10, ctx->r13);
    // 0x8001837C: lbu         $t4, 0x8($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X8);
    // 0x80018380: sb          $t4, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r12;
    // 0x80018384: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80018388: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8001838C: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x80018390: addu        $v1, $t7, $t9
    ctx->r3 = ADD32(ctx->r15, ctx->r25);
    // 0x80018394: lbu         $t8, 0x9($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X9);
    // 0x80018398: sb          $t8, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r24;
    // 0x8001839C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x800183A0: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x800183A4: sll         $t3, $t0, 4
    ctx->r11 = S32(ctx->r8 << 4);
    // 0x800183A8: addu        $v1, $t1, $t3
    ctx->r3 = ADD32(ctx->r9, ctx->r11);
    // 0x800183AC: lbu         $t2, 0xA($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XA);
    // 0x800183B0: sb          $t2, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r10;
    // 0x800183B4: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x800183B8: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x800183BC: sll         $t6, $t4, 4
    ctx->r14 = S32(ctx->r12 << 4);
    // 0x800183C0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800183C4: sb          $zero, 0xF($t7)
    MEM_B(0XF, ctx->r15) = 0;
    // 0x800183C8: jal         0x8001AC28
    // 0x800183CC: lhu         $a0, 0x0($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X0);
    func_8001AC28_1B828(rdram, ctx);
        goto after_3;
    // 0x800183CC: lhu         $a0, 0x0($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X0);
    after_3:
    // 0x800183D0: jal         0x80003EA0
    // 0x800183D4: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_4;
    // 0x800183D4: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_4:
    // 0x800183D8: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x800183DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800183E0: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x800183E4: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x800183E8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800183EC: sll         $t3, $t1, 4
    ctx->r11 = S32(ctx->r9 << 4);
    // 0x800183F0: addu        $t2, $t0, $t3
    ctx->r10 = ADD32(ctx->r8, ctx->r11);
    // 0x800183F4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800183F8: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x800183FC: nop

    // 0x80018400: sb          $t8, 0x10($t2)
    MEM_B(0X10, ctx->r10) = ctx->r24;
    // 0x80018404: jal         0x8001AC28
    // 0x80018408: lhu         $a0, 0x2($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X2);
    func_8001AC28_1B828(rdram, ctx);
        goto after_5;
    // 0x80018408: lhu         $a0, 0x2($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X2);
    after_5:
    // 0x8001840C: jal         0x80003EA0
    // 0x80018410: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_6;
    // 0x80018410: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_6:
    // 0x80018414: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x80018418: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001841C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80018420: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80018424: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80018428: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x8001842C: addu        $t1, $t6, $t9
    ctx->r9 = ADD32(ctx->r14, ctx->r25);
    // 0x80018430: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80018434: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x80018438: nop

    // 0x8001843C: sb          $t5, 0x11($t1)
    MEM_B(0X11, ctx->r9) = ctx->r13;
    // 0x80018440: jal         0x8001AC28
    // 0x80018444: lhu         $a0, 0x4($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X4);
    func_8001AC28_1B828(rdram, ctx);
        goto after_7;
    // 0x80018444: lhu         $a0, 0x4($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X4);
    after_7:
    // 0x80018448: jal         0x80003EA0
    // 0x8001844C: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_8;
    // 0x8001844C: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_8:
    // 0x80018450: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x80018454: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80018458: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8001845C: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80018460: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80018464: sll         $t4, $t2, 4
    ctx->r12 = S32(ctx->r10 << 4);
    // 0x80018468: addu        $t7, $t8, $t4
    ctx->r15 = ADD32(ctx->r24, ctx->r12);
    // 0x8001846C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80018470: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x80018474: nop

    // 0x80018478: sb          $t3, 0x12($t7)
    MEM_B(0X12, ctx->r15) = ctx->r11;
    // 0x8001847C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80018480: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80018484: sll         $t5, $t9, 4
    ctx->r13 = S32(ctx->r25 << 4);
    // 0x80018488: addu        $t1, $t6, $t5
    ctx->r9 = ADD32(ctx->r14, ctx->r13);
    // 0x8001848C: sb          $zero, 0x13($t1)
    MEM_B(0X13, ctx->r9) = 0;
    // 0x80018490: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80018494: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80018498: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001849C: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x800184A0: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x800184A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800184A8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800184AC: jr          $ra
    // 0x800184B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800184B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80015D90_16990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80015D90: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80015D94: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80015D98: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80015D9C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80015DA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80015DA4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80015DA8: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x80015DAC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80015DB0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80015DB4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80015DB8: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x80015DBC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80015DC0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80015DC4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80015DC8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80015DCC: jal         0x80016480
    // 0x80015DD0: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_80016480_17080(rdram, ctx);
        goto after_0;
    // 0x80015DD0: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_0:
    // 0x80015DD4: jal         0x80014CC4
    // 0x80015DD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80014CC4_158C4(rdram, ctx);
        goto after_1;
    // 0x80015DD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80015DDC: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80015DE0: bne         $v0, $s4, L_80015ED4
    if (ctx->r2 != ctx->r20) {
        // 0x80015DE4: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80015ED4;
    }
    // 0x80015DE4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80015DE8: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x80015DEC: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
L_80015DF0:
    // 0x80015DF0: jal         0x80014CC4
    // 0x80015DF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80014CC4_158C4(rdram, ctx);
        goto after_2;
    // 0x80015DF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x80015DF8: beq         $v0, $zero, L_80015E70
    if (ctx->r2 == 0) {
        // 0x80015DFC: nop
    
            goto L_80015E70;
    }
    // 0x80015DFC: nop

    // 0x80015E00: beq         $v0, $s4, L_80015E20
    if (ctx->r2 == ctx->r20) {
        // 0x80015E04: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_80015E20;
    }
    // 0x80015E04: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80015E08: beq         $v0, $s5, L_80015E3C
    if (ctx->r2 == ctx->r21) {
        // 0x80015E0C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80015E3C;
    }
    // 0x80015E0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80015E10: beq         $v0, $s6, L_80015E54
    if (ctx->r2 == ctx->r22) {
        // 0x80015E14: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_80015E54;
    }
    // 0x80015E14: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80015E18: b           L_80015ECC
    // 0x80015E1C: nop

        goto L_80015ECC;
    // 0x80015E1C: nop

L_80015E20:
    // 0x80015E20: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x80015E24: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80015E28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80015E2C: jal         0x80016480
    // 0x80015E30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80016480_17080(rdram, ctx);
        goto after_3;
    // 0x80015E30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x80015E34: b           L_80015ECC
    // 0x80015E38: nop

        goto L_80015ECC;
    // 0x80015E38: nop

L_80015E3C:
    // 0x80015E3C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80015E40: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80015E44: jal         0x80016480
    // 0x80015E48: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_80016480_17080(rdram, ctx);
        goto after_4;
    // 0x80015E48: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x80015E4C: b           L_80015ECC
    // 0x80015E50: nop

        goto L_80015ECC;
    // 0x80015E50: nop

L_80015E54:
    // 0x80015E54: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80015E58: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80015E5C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80015E60: jal         0x80016480
    // 0x80015E64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80016480_17080(rdram, ctx);
        goto after_5;
    // 0x80015E64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80015E68: b           L_80015ECC
    // 0x80015E6C: nop

        goto L_80015ECC;
    // 0x80015E6C: nop

L_80015E70:
    // 0x80015E70: jal         0x80014CC4
    // 0x80015E74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80014CC4_158C4(rdram, ctx);
        goto after_6;
    // 0x80015E74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x80015E78: bne         $v0, $zero, L_80015E88
    if (ctx->r2 != 0) {
        // 0x80015E7C: nop
    
            goto L_80015E88;
    }
    // 0x80015E7C: nop

    // 0x80015E80: b           L_80015ECC
    // 0x80015E84: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_80015ECC;
    // 0x80015E84: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80015E88:
    // 0x80015E88: jal         0x80014CC4
    // 0x80015E8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80014CC4_158C4(rdram, ctx);
        goto after_7;
    // 0x80015E8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x80015E90: bne         $v0, $zero, L_80015EB8
    if (ctx->r2 != 0) {
        // 0x80015E94: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_80015EB8;
    }
    // 0x80015E94: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80015E98: addiu       $s1, $s1, -0x2
    ctx->r17 = ADD32(ctx->r17, -0X2);
    // 0x80015E9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80015EA0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80015EA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80015EA8: jal         0x80016480
    // 0x80015EAC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_80016480_17080(rdram, ctx);
        goto after_8;
    // 0x80015EAC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_8:
    // 0x80015EB0: b           L_80015ECC
    // 0x80015EB4: nop

        goto L_80015ECC;
    // 0x80015EB4: nop

L_80015EB8:
    // 0x80015EB8: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80015EBC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80015EC0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80015EC4: jal         0x80016480
    // 0x80015EC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80016480_17080(rdram, ctx);
        goto after_9;
    // 0x80015EC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
L_80015ECC:
    // 0x80015ECC: beq         $s3, $zero, L_80015DF0
    if (ctx->r19 == 0) {
        // 0x80015ED0: nop
    
            goto L_80015DF0;
    }
    // 0x80015ED0: nop

L_80015ED4:
    // 0x80015ED4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80015ED8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80015EDC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80015EE0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80015EE4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80015EE8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80015EEC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80015EF0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80015EF4: jr          $ra
    // 0x80015EF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80015EF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8000D220_DE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000D220: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000D224: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000D228: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000D22C: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000D230: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8000D234: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000D238: beq         $v0, $zero, L_8000D2B8
    if (ctx->r2 == 0) {
        // 0x8000D23C: subu        $t7, $t7, $a1
        ctx->r15 = SUB32(ctx->r15, ctx->r5);
            goto L_8000D2B8;
    }
    // 0x8000D23C: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x8000D240: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8000D244: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x8000D248: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8000D24C: sh          $t8, 0x19C($v1)
    MEM_H(0X19C, ctx->r3) = ctx->r24;
    // 0x8000D250: sw          $a2, 0x198($v1)
    MEM_W(0X198, ctx->r3) = ctx->r6;
    // 0x8000D254: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x8000D258: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x8000D25C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000D260: sw          $t1, 0x1C4($v1)
    MEM_W(0X1C4, ctx->r3) = ctx->r9;
    // 0x8000D264: sw          $t0, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = ctx->r8;
    // 0x8000D268: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8000D26C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000D270: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8000D274: sh          $t9, 0x19E($v1)
    MEM_H(0X19E, ctx->r3) = ctx->r25;
    // 0x8000D278: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8000D27C: addiu       $v1, $v1, 0x198
    ctx->r3 = ADD32(ctx->r3, 0X198);
    // 0x8000D280: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8000D284: sh          $t3, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r11;
    // 0x8000D288: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8000D28C: sh          $t6, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r14;
    // 0x8000D290: sh          $zero, 0xE($v1)
    MEM_H(0XE, ctx->r3) = 0;
    // 0x8000D294: addiu       $t5, $t4, 0xC
    ctx->r13 = ADD32(ctx->r12, 0XC);
    // 0x8000D298: sh          $t5, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r13;
    // 0x8000D29C: sh          $zero, 0x10($v1)
    MEM_H(0X10, ctx->r3) = 0;
    // 0x8000D2A0: sh          $zero, 0x12($v1)
    MEM_H(0X12, ctx->r3) = 0;
    // 0x8000D2A4: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x8000D2A8: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    // 0x8000D2AC: sh          $zero, 0x20($v1)
    MEM_H(0X20, ctx->r3) = 0;
    // 0x8000D2B0: sh          $zero, 0x22($v1)
    MEM_H(0X22, ctx->r3) = 0;
    // 0x8000D2B4: swc1        $f4, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f4.u32l;
L_8000D2B8:
    // 0x8000D2B8: jr          $ra
    // 0x8000D2BC: nop

    TRACE_RETURN()
    return;
    // 0x8000D2BC: nop

;}
RECOMP_FUNC void func_800019C0_25C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800019C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800019C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800019C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800019CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800019D0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800019D4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800019D8: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x800019DC: addiu       $a0, $a0, 0x1A40
    ctx->r4 = ADD32(ctx->r4, 0X1A40);
    // 0x800019E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800019E4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800019E8: jal         0x80040FD0
    // 0x800019EC: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    _Printf(rdram, ctx);
        goto after_0;
    // 0x800019EC: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x800019F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800019F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800019F8: jr          $ra
    // 0x800019FC: nop

    TRACE_RETURN()
    return;
    // 0x800019FC: nop

;}
RECOMP_FUNC void func_80027B38_28738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80027B38: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x80027B3C: sw          $a3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r7;
    // 0x80027B40: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80027B44: lwc1        $f4, -0x3EC0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3EC0);
    // 0x80027B48: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80027B4C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80027B50: lwc1        $f6, -0x3EBC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3EBC);
    // 0x80027B54: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80027B58: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x80027B5C: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80027B60: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80027B64: sdc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X8, ctx->r29);
    // 0x80027B68: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x80027B6C: lw          $a0, 0xF0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF0);
    // 0x80027B70: sdc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X0, ctx->r29);
    // 0x80027B74: swc1        $f10, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f10.u32l;
    // 0x80027B78: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x80027B7C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80027B80: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80027B84: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
    // 0x80027B88: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x80027B8C: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x80027B90: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80027B94: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80027B98: sdc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X28, ctx->r29);
    // 0x80027B9C: sdc1        $f28, 0x20($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X20, ctx->r29);
    // 0x80027BA0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80027BA4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80027BA8: mtc1        $zero, $f15
    ctx->f_odd[(15 - 1) * 2] = 0;
    // 0x80027BAC: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x80027BB0: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x80027BB4: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x80027BB8: sdc1        $f26, 0x18($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X18, ctx->r29);
    // 0x80027BBC: sdc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X10, ctx->r29);
    // 0x80027BC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80027BC4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80027BC8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80027BCC: swc1        $f6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f6.u32l;
    // 0x80027BD0: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    // 0x80027BD4: ldc1        $f28, -0x3EB8($at)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r1, -0X3EB8);
    // 0x80027BD8: lwc1        $f30, 0xE8($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80027BDC: lw          $s1, 0xF4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XF4);
    // 0x80027BE0: lw          $s2, 0xEC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XEC);
    // 0x80027BE4: addiu       $s3, $zero, 0x14
    ctx->r19 = ADD32(0, 0X14);
    // 0x80027BE8: swc1        $f20, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f20.u32l;
    // 0x80027BEC: swc1        $f12, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f12.u32l;
    // 0x80027BF0: ori         $t5, $zero, 0xFFFF
    ctx->r13 = 0 | 0XFFFF;
    // 0x80027BF4: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x80027BF8: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80027BFC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80027C00: swc1        $f22, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f22.u32l;
L_80027C04:
    // 0x80027C04: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80027C08: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80027C0C: mflo        $t6
    ctx->r14 = lo;
    // 0x80027C10: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x80027C14: lhu         $a2, 0x0($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X0);
    // 0x80027C18: multu       $v0, $t4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80027C1C: mflo        $a1
    ctx->r5 = lo;
    // 0x80027C20: addu        $t3, $a0, $a1
    ctx->r11 = ADD32(ctx->r4, ctx->r5);
    // 0x80027C24: lh          $t7, 0x6($t3)
    ctx->r15 = MEM_H(ctx->r11, 0X6);
    // 0x80027C28: addu        $a3, $s0, $a1
    ctx->r7 = ADD32(ctx->r16, ctx->r5);
    // 0x80027C2C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80027C30: nop

    // 0x80027C34: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80027C38: mul.s       $f8, $f6, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f30.fl);
    // 0x80027C3C: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x80027C40: nop

    // 0x80027C44: bc1t        L_80027D0C
    if (c1cs) {
        // 0x80027C48: nop
    
            goto L_80027D0C;
    }
    // 0x80027C48: nop

    // 0x80027C4C: lh          $t8, 0xC($a3)
    ctx->r24 = MEM_H(ctx->r7, 0XC);
    // 0x80027C50: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80027C54: nop

    // 0x80027C58: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80027C5C: mul.s       $f6, $f4, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x80027C60: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80027C64: nop

    // 0x80027C68: bc1t        L_80027D0C
    if (c1cs) {
        // 0x80027C6C: nop
    
            goto L_80027D0C;
    }
    // 0x80027C6C: nop

    // 0x80027C70: lh          $t9, 0x8($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X8);
    // 0x80027C74: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80027C78: nop

    // 0x80027C7C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80027C80: mul.s       $f4, $f10, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x80027C84: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x80027C88: nop

    // 0x80027C8C: bc1t        L_80027D0C
    if (c1cs) {
        // 0x80027C90: nop
    
            goto L_80027D0C;
    }
    // 0x80027C90: nop

    // 0x80027C94: lh          $t6, 0xE($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XE);
    // 0x80027C98: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80027C9C: nop

    // 0x80027CA0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80027CA4: mul.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x80027CA8: c.lt.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl < ctx->f10.fl;
    // 0x80027CAC: nop

    // 0x80027CB0: bc1t        L_80027D0C
    if (c1cs) {
        // 0x80027CB4: nop
    
            goto L_80027D0C;
    }
    // 0x80027CB4: nop

    // 0x80027CB8: lh          $t7, 0xA($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XA);
    // 0x80027CBC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80027CC0: nop

    // 0x80027CC4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80027CC8: mul.s       $f8, $f6, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f30.fl);
    // 0x80027CCC: c.lt.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl < ctx->f22.fl;
    // 0x80027CD0: nop

    // 0x80027CD4: bc1t        L_80027D0C
    if (c1cs) {
        // 0x80027CD8: nop
    
            goto L_80027D0C;
    }
    // 0x80027CD8: nop

    // 0x80027CDC: swc1        $f12, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f12.u32l;
    // 0x80027CE0: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    // 0x80027CE4: swc1        $f22, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f22.u32l;
    // 0x80027CE8: lh          $t8, 0x10($t3)
    ctx->r24 = MEM_H(ctx->r11, 0X10);
    // 0x80027CEC: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80027CF0: nop

    // 0x80027CF4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80027CF8: mul.s       $f6, $f4, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x80027CFC: c.lt.s      $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f22.fl < ctx->f6.fl;
    // 0x80027D00: nop

    // 0x80027D04: bc1fl       L_80027E34
    if (!c1cs) {
        // 0x80027D08: lui         $at, 0x44FA
        ctx->r1 = S32(0X44FA << 16);
            goto L_80027E34;
    }
    goto skip_0;
    // 0x80027D08: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    skip_0:
L_80027D0C:
    // 0x80027D0C: beql        $t5, $a2, L_800283B0
    if (ctx->r13 == ctx->r6) {
        // 0x80027D10: ldc1        $f20, 0x0($sp)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X0);
            goto L_800283B0;
    }
    goto skip_1;
    // 0x80027D10: ldc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X0);
    skip_1:
    // 0x80027D14: multu       $a2, $t0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80027D18: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80027D1C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80027D20: mflo        $t9
    ctx->r25 = lo;
    // 0x80027D24: addu        $t6, $a0, $t9
    ctx->r14 = ADD32(ctx->r4, ctx->r25);
    // 0x80027D28: lhu         $a2, 0x0($t6)
    ctx->r6 = MEM_HU(ctx->r14, 0X0);
    // 0x80027D2C: multu       $v0, $t4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80027D30: mflo        $a1
    ctx->r5 = lo;
    // 0x80027D34: addu        $t7, $a0, $a1
    ctx->r15 = ADD32(ctx->r4, ctx->r5);
    // 0x80027D38: lh          $t8, 0x6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X6);
    // 0x80027D3C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80027D40: nop

    // 0x80027D44: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80027D48: mul.s       $f4, $f10, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x80027D4C: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x80027D50: nop

    // 0x80027D54: bc1t        L_80027D0C
    if (c1cs) {
        // 0x80027D58: nop
    
            goto L_80027D0C;
    }
    // 0x80027D58: nop

    // 0x80027D5C: addu        $a3, $s0, $a1
    ctx->r7 = ADD32(ctx->r16, ctx->r5);
    // 0x80027D60: lh          $t9, 0xC($a3)
    ctx->r25 = MEM_H(ctx->r7, 0XC);
    // 0x80027D64: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80027D68: nop

    // 0x80027D6C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80027D70: mul.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x80027D74: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x80027D78: nop

    // 0x80027D7C: bc1t        L_80027D0C
    if (c1cs) {
        // 0x80027D80: nop
    
            goto L_80027D0C;
    }
    // 0x80027D80: nop

    // 0x80027D84: lh          $t6, 0x8($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X8);
    // 0x80027D88: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80027D8C: nop

    // 0x80027D90: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80027D94: mul.s       $f8, $f6, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f30.fl);
    // 0x80027D98: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x80027D9C: nop

    // 0x80027DA0: bc1t        L_80027D0C
    if (c1cs) {
        // 0x80027DA4: nop
    
            goto L_80027D0C;
    }
    // 0x80027DA4: nop

    // 0x80027DA8: lh          $t7, 0xE($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XE);
    // 0x80027DAC: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80027DB0: nop

    // 0x80027DB4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80027DB8: mul.s       $f6, $f4, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x80027DBC: c.lt.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl < ctx->f6.fl;
    // 0x80027DC0: nop

    // 0x80027DC4: bc1t        L_80027D0C
    if (c1cs) {
        // 0x80027DC8: nop
    
            goto L_80027D0C;
    }
    // 0x80027DC8: nop

    // 0x80027DCC: lh          $t8, 0xA($a3)
    ctx->r24 = MEM_H(ctx->r7, 0XA);
    // 0x80027DD0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80027DD4: nop

    // 0x80027DD8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80027DDC: mul.s       $f4, $f10, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x80027DE0: c.lt.s      $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f4.fl < ctx->f22.fl;
    // 0x80027DE4: nop

    // 0x80027DE8: bc1t        L_80027D0C
    if (c1cs) {
        // 0x80027DEC: nop
    
            goto L_80027D0C;
    }
    // 0x80027DEC: nop

    // 0x80027DF0: lh          $t9, 0x10($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X10);
    // 0x80027DF4: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80027DF8: nop

    // 0x80027DFC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80027E00: mul.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x80027E04: c.lt.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl < ctx->f10.fl;
    // 0x80027E08: nop

    // 0x80027E0C: bc1t        L_80027D0C
    if (c1cs) {
        // 0x80027E10: nop
    
            goto L_80027D0C;
    }
    // 0x80027E10: nop

    // 0x80027E14: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80027E18: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80027E1C: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x80027E20: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x80027E24: swc1        $f12, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f12.u32l;
    // 0x80027E28: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    // 0x80027E2C: swc1        $f22, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f22.u32l;
    // 0x80027E30: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
L_80027E34:
    // 0x80027E34: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80027E38: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80027E3C: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
    // 0x80027E40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80027E44: addiu       $v0, $s4, 0x3
    ctx->r2 = ADD32(ctx->r20, 0X3);
    // 0x80027E48: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x80027E4C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x80027E50: andi        $t3, $t8, 0xFFFF
    ctx->r11 = ctx->r24 & 0XFFFF;
    // 0x80027E54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80027E58: andi        $a1, $s3, 0xFFFF
    ctx->r5 = ctx->r19 & 0XFFFF;
    // 0x80027E5C: sh          $t7, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r15;
    // 0x80027E60: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
L_80027E64:
    // 0x80027E64: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80027E68: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80027E6C: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80027E70: mflo        $t9
    ctx->r25 = lo;
    // 0x80027E74: addu        $v1, $a0, $t9
    ctx->r3 = ADD32(ctx->r4, ctx->r25);
    // 0x80027E78: lhu         $s4, 0x0($v1)
    ctx->r20 = MEM_HU(ctx->r3, 0X0);
    // 0x80027E7C: multu       $s4, $s3
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80027E80: mflo        $t6
    ctx->r14 = lo;
    // 0x80027E84: addu        $s6, $s2, $t6
    ctx->r22 = ADD32(ctx->r18, ctx->r14);
    // 0x80027E88: lwc1        $f6, 0xC($s6)
    ctx->f6.u32l = MEM_W(ctx->r22, 0XC);
    // 0x80027E8C: lwc1        $f16, 0x0($s6)
    ctx->f16.u32l = MEM_W(ctx->r22, 0X0);
    // 0x80027E90: lwc1        $f18, 0x4($s6)
    ctx->f18.u32l = MEM_W(ctx->r22, 0X4);
    // 0x80027E94: mul.s       $f22, $f6, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = MUL_S(ctx->f6.fl, ctx->f30.fl);
    // 0x80027E98: lwc1        $f20, 0x8($s6)
    ctx->f20.u32l = MEM_W(ctx->r22, 0X8);
    // 0x80027E9C: lbu         $s5, 0x10($s6)
    ctx->r21 = MEM_BU(ctx->r22, 0X10);
    // 0x80027EA0: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80027EA4: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x80027EA8: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80027EAC: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80027EB0: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80027EB4: mul.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80027EB8: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80027EBC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80027EC0: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80027EC4: add.s       $f0, $f12, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f22.fl;
    // 0x80027EC8: beq         $s5, $zero, L_80027EE4
    if (ctx->r21 == 0) {
        // 0x80027ECC: mov.s       $f24, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
            goto L_80027EE4;
    }
    // 0x80027ECC: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x80027ED0: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80027ED4: c.lt.d      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.d < ctx->f14.d;
    // 0x80027ED8: nop

    // 0x80027EDC: bc1fl       L_8002807C
    if (!c1cs) {
        // 0x80027EE0: cvt.d.s     $f4, $f24
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
            goto L_8002807C;
    }
    goto skip_2;
    // 0x80027EE0: cvt.d.s     $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
    skip_2:
L_80027EE4:
    // 0x80027EE4: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80027EE8: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x80027EEC: mul.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80027EF0: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80027EF4: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80027EF8: mul.s       $f8, $f20, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x80027EFC: add.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80027F00: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80027F04: c.eq.d      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.d == ctx->f6.d;
    // 0x80027F08: nop

    // 0x80027F0C: bc1fl       L_80027F24
    if (!c1cs) {
        // 0x80027F10: neg.s       $f10, $f22
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = -ctx->f22.fl;
            goto L_80027F24;
    }
    goto skip_3;
    // 0x80027F10: neg.s       $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = -ctx->f22.fl;
    skip_3:
    // 0x80027F14: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80027F18: b           L_80027F2C
    // 0x80027F1C: nop

        goto L_80027F2C;
    // 0x80027F1C: nop

    // 0x80027F20: neg.s       $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = -ctx->f22.fl;
L_80027F24:
    // 0x80027F24: sub.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x80027F28: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
L_80027F2C:
    // 0x80027F2C: bne         $v0, $zero, L_80028038
    if (ctx->r2 != 0) {
        // 0x80027F30: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_80028038;
    }
    // 0x80027F30: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80027F34: ldc1        $f8, -0x3EB0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3EB0);
    // 0x80027F38: cvt.d.s     $f6, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f6.d = CVT_D_S(ctx->f26.fl);
    // 0x80027F3C: c.eq.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d == ctx->f6.d;
    // 0x80027F40: nop

    // 0x80027F44: bc1t        L_80027FB8
    if (c1cs) {
        // 0x80027F48: nop
    
            goto L_80027FB8;
    }
    // 0x80027F48: nop

    // 0x80027F4C: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x80027F50: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80027F54: c.lt.d      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.d < ctx->f28.d;
    // 0x80027F58: nop

    // 0x80027F5C: bc1f        L_80027FB8
    if (!c1cs) {
        // 0x80027F60: nop
    
            goto L_80027FB8;
    }
    // 0x80027F60: nop

    // 0x80027F64: ldc1        $f10, -0x3EA8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3EA8);
    // 0x80027F68: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80027F6C: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80027F70: c.lt.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d < ctx->f0.d;
    // 0x80027F74: nop

    // 0x80027F78: bc1f        L_80027FB8
    if (!c1cs) {
        // 0x80027F7C: nop
    
            goto L_80027FB8;
    }
    // 0x80027F7C: nop

    // 0x80027F80: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80027F84: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80027F88: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80027F8C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80027F90: mul.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x80027F94: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80027F98: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80027F9C: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80027FA0: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80027FA4: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80027FA8: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80027FAC: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80027FB0: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80027FB4: add.s       $f24, $f10, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = ctx->f10.fl + ctx->f22.fl;
L_80027FB8:
    // 0x80027FB8: beql        $a3, $zero, L_8002803C
    if (ctx->r7 == 0) {
        // 0x80027FBC: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_8002803C;
    }
    goto skip_4;
    // 0x80027FBC: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_4:
    // 0x80027FC0: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x80027FC4: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80027FC8: c.eq.d      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.d == ctx->f4.d;
    // 0x80027FCC: nop

    // 0x80027FD0: bc1fl       L_8002803C
    if (!c1cs) {
        // 0x80027FD4: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_8002803C;
    }
    goto skip_5;
    // 0x80027FD4: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_5:
    // 0x80027FD8: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x80027FDC: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80027FE0: c.lt.d      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.d < ctx->f6.d;
    // 0x80027FE4: nop

    // 0x80027FE8: bc1fl       L_8002803C
    if (!c1cs) {
        // 0x80027FEC: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_8002803C;
    }
    goto skip_6;
    // 0x80027FEC: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_6:
    // 0x80027FF0: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80027FF4: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80027FF8: bc1fl       L_8002803C
    if (!c1cs) {
        // 0x80027FFC: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_8002803C;
    }
    goto skip_7;
    // 0x80027FFC: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_7:
    // 0x80028000: c.eq.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl == ctx->f18.fl;
    // 0x80028004: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80028008: bc1fl       L_8002803C
    if (!c1cs) {
        // 0x8002800C: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_8002803C;
    }
    goto skip_8;
    // 0x8002800C: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_8:
    // 0x80028010: c.eq.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl == ctx->f20.fl;
    // 0x80028014: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80028018: bc1fl       L_8002803C
    if (!c1cs) {
        // 0x8002801C: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_8002803C;
    }
    goto skip_9;
    // 0x8002801C: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_9:
    // 0x80028020: c.eq.s      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.fl == ctx->f22.fl;
    // 0x80028024: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80028028: bc1fl       L_8002803C
    if (!c1cs) {
        // 0x8002802C: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_8002803C;
    }
    goto skip_10;
    // 0x8002802C: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_10:
    // 0x80028030: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80028034: nop

L_80028038:
    // 0x80028038: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
L_8002803C:
    // 0x8002803C: c.lt.d      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.d < ctx->f10.d;
    // 0x80028040: nop

    // 0x80028044: bc1fl       L_8002807C
    if (!c1cs) {
        // 0x80028048: cvt.d.s     $f4, $f24
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
            goto L_8002807C;
    }
    goto skip_11;
    // 0x80028048: cvt.d.s     $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
    skip_11:
    // 0x8002804C: c.le.s      $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl <= ctx->f26.fl;
    // 0x80028050: nop

    // 0x80028054: bc1fl       L_8002807C
    if (!c1cs) {
        // 0x80028058: cvt.d.s     $f4, $f24
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
            goto L_8002807C;
    }
    goto skip_12;
    // 0x80028058: cvt.d.s     $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
    skip_12:
    // 0x8002805C: mov.s       $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    ctx->f26.fl = ctx->f2.fl;
    // 0x80028060: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    // 0x80028064: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x80028068: swc1        $f20, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f20.u32l;
    // 0x8002806C: swc1        $f22, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f22.u32l;
    // 0x80028070: swc1        $f24, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f24.u32l;
    // 0x80028074: andi        $t1, $s5, 0xFF
    ctx->r9 = ctx->r21 & 0XFF;
    // 0x80028078: cvt.d.s     $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
L_8002807C:
    // 0x8002807C: c.lt.d      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.d < ctx->f14.d;
    // 0x80028080: nop

    // 0x80028084: bc1fl       L_800282A0
    if (!c1cs) {
        // 0x80028088: lh          $s4, 0x4($v1)
        ctx->r20 = MEM_H(ctx->r3, 0X4);
            goto L_800282A0;
    }
    goto skip_13;
    // 0x80028088: lh          $s4, 0x4($v1)
    ctx->r20 = MEM_H(ctx->r3, 0X4);
    skip_13:
    // 0x8002808C: lh          $s4, 0x2($v1)
    ctx->r20 = MEM_H(ctx->r3, 0X2);
    // 0x80028090: lwc1        $f12, 0xDC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80028094: bne         $s4, $zero, L_80028294
    if (ctx->r20 != 0) {
        // 0x80028098: nop
    
            goto L_80028294;
    }
    // 0x80028098: nop

    // 0x8002809C: mul.s       $f2, $f12, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f26.fl);
    // 0x800280A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800280A4: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    // 0x800280A8: andi        $v0, $t3, 0xFFFF
    ctx->r2 = ctx->r11 & 0XFFFF;
    // 0x800280AC: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800280B0: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x800280B4: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x800280B8: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x800280BC: bc1fl       L_800280D4
    if (!c1cs) {
        // 0x800280C0: mov.s       $f18, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
            goto L_800280D4;
    }
    goto skip_14;
    // 0x800280C0: mov.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
    skip_14:
    // 0x800280C4: mov.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
    // 0x800280C8: b           L_800280D8
    // 0x800280CC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_800280D8;
    // 0x800280CC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x800280D0: mov.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
L_800280D4:
    // 0x800280D4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_800280D8:
    // 0x800280D8: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x800280DC: c.lt.d      $f6, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f6.d < ctx->f28.d;
    // 0x800280E0: nop

    // 0x800280E4: bc1f        L_80028128
    if (!c1cs) {
        // 0x800280E8: nop
    
            goto L_80028128;
    }
    // 0x800280E8: nop

    // 0x800280EC: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x800280F0: c.eq.d      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.d == ctx->f10.d;
    // 0x800280F4: nop

    // 0x800280F8: bc1t        L_80028128
    if (c1cs) {
        // 0x800280FC: nop
    
            goto L_80028128;
    }
    // 0x800280FC: nop

    // 0x80028100: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x80028104: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80028108: c.le.d      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.d <= ctx->f4.d;
    // 0x8002810C: nop

    // 0x80028110: bc1f        L_80028124
    if (!c1cs) {
        // 0x80028114: nop
    
            goto L_80028124;
    }
    // 0x80028114: nop

    // 0x80028118: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002811C: b           L_80028128
    // 0x80028120: lwc1        $f18, -0x3EA0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3EA0);
        goto L_80028128;
    // 0x80028120: lwc1        $f18, -0x3EA0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3EA0);
L_80028124:
    // 0x80028124: lwc1        $f18, -0x3E9C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3E9C);
L_80028128:
    // 0x80028128: mul.s       $f2, $f8, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x8002812C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80028130: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80028134: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x80028138: nop

    // 0x8002813C: bc1fl       L_80028154
    if (!c1cs) {
        // 0x80028140: mov.s       $f16, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
            goto L_80028154;
    }
    goto skip_15;
    // 0x80028140: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    skip_15:
    // 0x80028144: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x80028148: b           L_80028158
    // 0x8002814C: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_80028158;
    // 0x8002814C: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x80028150: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
L_80028154:
    // 0x80028154: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80028158:
    // 0x80028158: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8002815C: c.lt.d      $f10, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f10.d < ctx->f28.d;
    // 0x80028160: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80028164: bc1f        L_800281A8
    if (!c1cs) {
        // 0x80028168: nop
    
            goto L_800281A8;
    }
    // 0x80028168: nop

    // 0x8002816C: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80028170: c.eq.d      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.d == ctx->f8.d;
    // 0x80028174: nop

    // 0x80028178: bc1t        L_800281A8
    if (c1cs) {
        // 0x8002817C: nop
    
            goto L_800281A8;
    }
    // 0x8002817C: nop

    // 0x80028180: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x80028184: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80028188: c.le.d      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.d <= ctx->f6.d;
    // 0x8002818C: nop

    // 0x80028190: bc1f        L_800281A4
    if (!c1cs) {
        // 0x80028194: nop
    
            goto L_800281A4;
    }
    // 0x80028194: nop

    // 0x80028198: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002819C: b           L_800281A8
    // 0x800281A0: lwc1        $f16, -0x3E98($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3E98);
        goto L_800281A8;
    // 0x800281A0: lwc1        $f16, -0x3E98($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3E98);
L_800281A4:
    // 0x800281A4: lwc1        $f16, -0x3E94($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3E94);
L_800281A8:
    // 0x800281A8: mul.s       $f2, $f10, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x800281AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800281B0: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x800281B4: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x800281B8: nop

    // 0x800281BC: bc1fl       L_800281D4
    if (!c1cs) {
        // 0x800281C0: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_800281D4;
    }
    goto skip_16;
    // 0x800281C0: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_16:
    // 0x800281C4: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x800281C8: b           L_800281D8
    // 0x800281CC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_800281D8;
    // 0x800281CC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x800281D0: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_800281D4:
    // 0x800281D4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_800281D8:
    // 0x800281D8: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x800281DC: c.lt.d      $f8, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f8.d < ctx->f28.d;
    // 0x800281E0: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800281E4: bc1fl       L_8002822C
    if (!c1cs) {
        // 0x800281E8: add.s       $f6, $f18, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
            goto L_8002822C;
    }
    goto skip_17;
    // 0x800281E8: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    skip_17:
    // 0x800281EC: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x800281F0: c.eq.d      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.d == ctx->f10.d;
    // 0x800281F4: nop

    // 0x800281F8: bc1tl       L_8002822C
    if (c1cs) {
        // 0x800281FC: add.s       $f6, $f18, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
            goto L_8002822C;
    }
    goto skip_18;
    // 0x800281FC: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    skip_18:
    // 0x80028200: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x80028204: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80028208: c.le.d      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.d <= ctx->f4.d;
    // 0x8002820C: nop

    // 0x80028210: bc1f        L_80028224
    if (!c1cs) {
        // 0x80028214: nop
    
            goto L_80028224;
    }
    // 0x80028214: nop

    // 0x80028218: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002821C: b           L_80028228
    // 0x80028220: lwc1        $f12, -0x3E90($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3E90);
        goto L_80028228;
    // 0x80028220: lwc1        $f12, -0x3E90($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3E90);
L_80028224:
    // 0x80028224: lwc1        $f12, -0x3E8C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3E8C);
L_80028228:
    // 0x80028228: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
L_8002822C:
    // 0x8002822C: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80028230: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80028234: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x80028238: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x8002823C: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80028240: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80028244: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x80028248: add.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x8002824C: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x80028250: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80028254: bne         $t7, $zero, L_80028268
    if (ctx->r15 != 0) {
        // 0x80028258: swc1        $f6, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
            goto L_80028268;
    }
    // 0x80028258: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x8002825C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80028260: b           L_800283AC
    // 0x80028264: sh          $t8, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r24;
        goto L_800283AC;
    // 0x80028264: sh          $t8, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r24;
L_80028268:
    // 0x80028268: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8002826C: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80028270: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80028274: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x80028278: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8002827C: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80028280: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x80028284: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x80028288: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x8002828C: b           L_80027E64
    // 0x80028290: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
        goto L_80027E64;
    // 0x80028290: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
L_80028294:
    // 0x80028294: b           L_80027E64
    // 0x80028298: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
        goto L_80027E64;
    // 0x80028298: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
    // 0x8002829C: lh          $s4, 0x4($v1)
    ctx->r20 = MEM_H(ctx->r3, 0X4);
L_800282A0:
    // 0x800282A0: bne         $s4, $zero, L_800283A4
    if (ctx->r20 != 0) {
        // 0x800282A4: addiu       $v1, $zero, 0x7FFF
        ctx->r3 = ADD32(0, 0X7FFF);
            goto L_800283A4;
    }
    // 0x800282A4: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x800282A8: bne         $a3, $v1, L_80028384
    if (ctx->r7 != ctx->r3) {
        // 0x800282AC: andi        $v0, $a2, 0xFFFF
        ctx->r2 = ctx->r6 & 0XFFFF;
            goto L_80028384;
    }
    // 0x800282AC: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x800282B0: bne         $t2, $zero, L_800282D8
    if (ctx->r10 != 0) {
        // 0x800282B4: lwc1        $f4, 0x90($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
            goto L_800282D8;
    }
    // 0x800282B4: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x800282B8: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800282BC: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800282C0: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x800282C4: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    // 0x800282C8: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x800282CC: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x800282D0: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x800282D4: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
L_800282D8:
    // 0x800282D8: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800282DC: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x800282E0: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x800282E4: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x800282E8: sub.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x800282EC: lwc1        $f8, 0xD8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x800282F0: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x800282F4: sub.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x800282F8: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800282FC: lwc1        $f20, 0x50($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80028300: sub.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80028304: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80028308: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002830C: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80028310: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80028314: add.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80028318: c.lt.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl < ctx->f18.fl;
    // 0x8002831C: nop

    // 0x80028320: bc1tl       L_80028344
    if (c1cs) {
        // 0x80028324: swc1        $f18, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
            goto L_80028344;
    }
    goto skip_19;
    // 0x80028324: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    skip_19:
    // 0x80028328: ldc1        $f6, -0x3E88($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3E88);
    // 0x8002832C: cvt.d.s     $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f10.d = CVT_D_S(ctx->f20.fl);
    // 0x80028330: c.eq.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d == ctx->f10.d;
    // 0x80028334: nop

    // 0x80028338: bc1f        L_80028384
    if (!c1cs) {
        // 0x8002833C: nop
    
            goto L_80028384;
    }
    // 0x8002833C: nop

    // 0x80028340: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
L_80028344:
    // 0x80028344: swc1        $f18, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f18.u32l;
    // 0x80028348: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    // 0x8002834C: swc1        $f2, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f2.u32l;
    // 0x80028350: swc1        $f12, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f12.u32l;
    // 0x80028354: swc1        $f16, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f16.u32l;
    // 0x80028358: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8002835C: swc1        $f4, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f4.u32l;
    // 0x80028360: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80028364: swc1        $f8, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f8.u32l;
    // 0x80028368: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8002836C: swc1        $f6, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f6.u32l;
    // 0x80028370: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80028374: sb          $t2, 0x34($s1)
    MEM_B(0X34, ctx->r17) = ctx->r10;
    // 0x80028378: swc1        $f10, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f10.u32l;
    // 0x8002837C: lhu         $t9, 0x56($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X56);
    // 0x80028380: sh          $t9, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r25;
L_80028384:
    // 0x80028384: beq         $t5, $a2, L_800283AC
    if (ctx->r13 == ctx->r6) {
        // 0x80028388: lwc1        $f12, 0xD0($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0XD0);
            goto L_800283AC;
    }
    // 0x80028388: lwc1        $f12, 0xD0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8002838C: lwc1        $f20, 0xD4($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80028390: lwc1        $f22, 0xD8($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x80028394: swc1        $f12, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f12.u32l;
    // 0x80028398: swc1        $f20, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f20.u32l;
    // 0x8002839C: b           L_80027C04
    // 0x800283A0: swc1        $f22, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f22.u32l;
        goto L_80027C04;
    // 0x800283A0: swc1        $f22, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f22.u32l;
L_800283A4:
    // 0x800283A4: b           L_80027E64
    // 0x800283A8: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
        goto L_80027E64;
    // 0x800283A8: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
L_800283AC:
    // 0x800283AC: ldc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X0);
L_800283B0:
    // 0x800283B0: ldc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X8);
    // 0x800283B4: ldc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X10);
    // 0x800283B8: ldc1        $f26, 0x18($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X18);
    // 0x800283BC: ldc1        $f28, 0x20($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X20);
    // 0x800283C0: ldc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X28);
    // 0x800283C4: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x800283C8: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x800283CC: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x800283D0: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x800283D4: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x800283D8: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x800283DC: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x800283E0: jr          $ra
    // 0x800283E4: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    TRACE_RETURN()
    return;
    // 0x800283E4: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_8003555C_3615C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003555C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80035560: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80035564: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80035568: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8003556C: lhu         $a3, 0x86($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X86);
    // 0x80035570: jal         0x80034E98
    // 0x80035574: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80034E98_35A98(rdram, ctx);
        goto after_0;
    // 0x80035574: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80035578: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8003557C: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80035580: lhu         $t6, 0x66($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X66);
    // 0x80035584: lhu         $t7, 0x6A($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X6A);
    // 0x80035588: lhu         $t8, 0x6E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X6E);
    // 0x8003558C: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80035590: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80035594: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80035598: lhu         $t9, 0x7E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X7E);
    // 0x8003559C: lhu         $t0, 0x82($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X82);
    // 0x800355A0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x800355A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800355A8: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x800355AC: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x800355B0: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x800355B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800355B8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800355BC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800355C0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800355C4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x800355C8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x800355CC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x800355D0: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x800355D4: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x800355D8: jal         0x80035964
    // 0x800355DC: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    func_80035964_36564(rdram, ctx);
        goto after_1;
    // 0x800355DC: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    after_1:
    // 0x800355E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800355E4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x800355E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800355EC: jr          $ra
    // 0x800355F0: nop

    TRACE_RETURN()
    return;
    // 0x800355F0: nop

;}
RECOMP_FUNC void func_8001E634_1F234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001E634: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8001E638: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001E63C: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8001E640: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x8001E644: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8001E648: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x8001E64C: andi        $t8, $a3, 0xFFFF
    ctx->r24 = ctx->r7 & 0XFFFF;
    // 0x8001E650: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x8001E654: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8001E658: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8001E65C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001E660: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001E664: bne         $v1, $v0, L_8001E674
    if (ctx->r3 != ctx->r2) {
        // 0x8001E668: sw          $a1, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r5;
            goto L_8001E674;
    }
    // 0x8001E668: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8001E66C: b           L_8001E678
    // 0x8001E670: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_8001E678;
    // 0x8001E670: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8001E674:
    // 0x8001E674: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
L_8001E678:
    // 0x8001E678: bne         $v1, $a2, L_8001E688
    if (ctx->r3 != ctx->r6) {
        // 0x8001E67C: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_8001E688;
    }
    // 0x8001E67C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8001E680: b           L_8001E68C
    // 0x8001E684: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_8001E68C;
    // 0x8001E684: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8001E688:
    // 0x8001E688: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
L_8001E68C:
    // 0x8001E68C: bne         $v1, $a3, L_8001E69C
    if (ctx->r3 != ctx->r7) {
        // 0x8001E690: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_8001E69C;
    }
    // 0x8001E690: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8001E694: b           L_8001E6A0
    // 0x8001E698: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_8001E6A0;
    // 0x8001E698: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8001E69C:
    // 0x8001E69C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
L_8001E6A0:
    // 0x8001E6A0: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x8001E6A4: sh          $a2, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r6;
    // 0x8001E6A8: jal         0x80003F30
    // 0x8001E6AC: sh          $a3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r7;
    func_80003F30_4B30(rdram, ctx);
        goto after_0;
    // 0x8001E6AC: sh          $a3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r7;
    after_0:
    // 0x8001E6B0: lhu         $a0, 0x62($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X62);
    // 0x8001E6B4: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x8001E6B8: jal         0x80003F30
    // 0x8001E6BC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_1;
    // 0x8001E6BC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8001E6C0: lhu         $a0, 0x66($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X66);
    // 0x8001E6C4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8001E6C8: jal         0x80003F30
    // 0x8001E6CC: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_2;
    // 0x8001E6CC: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x8001E6D0: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8001E6D4: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001E6D8: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001E6DC: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E6E0: mul.s       $f16, $f4, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8001E6E4: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8001E6E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001E6EC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001E6F0: neg.s       $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = -ctx->f14.fl;
    // 0x8001E6F4: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x8001E6F8: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001E6FC: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x8001E700: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8001E704: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x8001E708: mul.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8001E70C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E710: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001E714: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8001E718: nop

    // 0x8001E71C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8001E720: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8001E724: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x8001E728: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001E72C: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E730: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8001E734: nop

    // 0x8001E738: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8001E73C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001E740: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8001E744: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    // 0x8001E748: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001E74C: mul.s       $f18, $f12, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8001E750: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x8001E754: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E758: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8001E75C: nop

    // 0x8001E760: mul.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8001E764: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8001E768: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8001E76C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x8001E770: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E774: mul.s       $f10, $f12, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8001E778: sub.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x8001E77C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001E780: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    // 0x8001E784: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001E788: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001E78C: swc1        $f2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f2.u32l;
    // 0x8001E790: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x8001E794: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8001E798: swc1        $f2, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f2.u32l;
    // 0x8001E79C: swc1        $f2, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f2.u32l;
    // 0x8001E7A0: swc1        $f2, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f2.u32l;
    // 0x8001E7A4: swc1        $f2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f2.u32l;
    // 0x8001E7A8: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x8001E7AC: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
    // 0x8001E7B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001E7B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001E7B8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8001E7BC: jr          $ra
    // 0x8001E7C0: nop

    TRACE_RETURN()
    return;
    // 0x8001E7C0: nop

;}
RECOMP_FUNC void func_8000F240_FE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000F240: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000F244: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000F248: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000F24C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8000F250: or          $t7, $a2, $zero
    ctx->r15 = ctx->r6 | 0;
    // 0x8000F254: lwc1        $f4, 0x10($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X10);
    // 0x8000F258: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8000F25C: lw          $a3, 0xC($t7)
    ctx->r7 = MEM_W(ctx->r15, 0XC);
    // 0x8000F260: lw          $a2, 0x8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X8);
    // 0x8000F264: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000F268: jal         0x8000F280
    // 0x8000F26C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8000F280_FE80(rdram, ctx);
        goto after_0;
    // 0x8000F26C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8000F270: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000F274: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000F278: jr          $ra
    // 0x8000F27C: nop

    TRACE_RETURN()
    return;
    // 0x8000F27C: nop

;}
RECOMP_FUNC void func_8000C4C8_D0C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C4C8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C4CC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C4D0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C4D4: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C4D8: beq         $v0, $zero, L_8000C4F4
    if (ctx->r2 == 0) {
        // 0x8000C4DC: nop
    
            goto L_8000C4F4;
    }
    // 0x8000C4DC: nop

    // 0x8000C4E0: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8000C4E4: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x8000C4E8: ori         $t1, $t9, 0x4
    ctx->r9 = ctx->r25 | 0X4;
    // 0x8000C4EC: sw          $t1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r9;
    // 0x8000C4F0: sw          $t8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r24;
L_8000C4F4:
    // 0x8000C4F4: jr          $ra
    // 0x8000C4F8: nop

    TRACE_RETURN()
    return;
    // 0x8000C4F8: nop

;}
RECOMP_FUNC void func_8003D44C_3E04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D44C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003D450: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D454: jr          $ra
    // 0x8003D458: sb          $t6, 0x78FC($at)
    MEM_B(0X78FC, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8003D458: sb          $t6, 0x78FC($at)
    MEM_B(0X78FC, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_8000ED00_F900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000ED00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000ED04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000ED08: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8000ED0C: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8000ED10: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8000ED14: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8000ED18: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8000ED1C: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8000ED20: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000ED24: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8000ED28: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8000ED2C: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000ED30: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8000ED34: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8000ED38: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000ED3C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000ED40: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8000ED44: jal         0x800417E0
    // 0x8000ED48: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x8000ED48: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x8000ED4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000ED50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000ED54: jr          $ra
    // 0x8000ED58: nop

    TRACE_RETURN()
    return;
    // 0x8000ED58: nop

;}
RECOMP_FUNC void func_8000D9F4_E5F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000D9F4: lh          $t9, 0x40($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X40);
    // 0x8000D9F8: lh          $t0, 0x42($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X42);
    // 0x8000D9FC: lh          $v0, 0x3E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3E);
    // 0x8000DA00: lh          $t2, 0x38($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X38);
    // 0x8000DA04: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000DA08: bgez        $v0, L_8000DA18
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8000DA0C: sra         $t6, $v0, 1
        ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
            goto L_8000DA18;
    }
    // 0x8000DA0C: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8000DA10: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x8000DA14: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_8000DA18:
    // 0x8000DA18: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8000DA1C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8000DA20: mflo        $v1
    ctx->r3 = lo;
    // 0x8000DA24: lh          $t7, 0x36($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X36);
    // 0x8000DA28: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000DA2C: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8000DA30: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x8000DA34: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8000DA38: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8000DA3C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000DA40: bgez        $v1, L_8000DA50
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8000DA44: sra         $t1, $v1, 1
        ctx->r9 = S32(SIGNED(ctx->r3) >> 1);
            goto L_8000DA50;
    }
    // 0x8000DA44: sra         $t1, $v1, 1
    ctx->r9 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8000DA48: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x8000DA4C: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_8000DA50:
    // 0x8000DA50: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8000DA54: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x8000DA58: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x8000DA5C: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000DA60: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8000DA64: nop

    // 0x8000DA68: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000DA6C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8000DA70: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8000DA74: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x8000DA78: nop

    // 0x8000DA7C: sh          $t5, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r13;
    // 0x8000DA80: sub.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x8000DA84: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8000DA88: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8000DA8C: jr          $ra
    // 0x8000DA90: sh          $t7, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x8000DA90: sh          $t7, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800216B0_222B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800216B0: bgez        $a0, L_800216C0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800216B4: slti        $at, $a2, 0x141
        ctx->r1 = SIGNED(ctx->r6) < 0X141 ? 1 : 0;
            goto L_800216C0;
    }
    // 0x800216B4: slti        $at, $a2, 0x141
    ctx->r1 = SIGNED(ctx->r6) < 0X141 ? 1 : 0;
    // 0x800216B8: jr          $ra
    // 0x800216BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x800216BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800216C0:
    // 0x800216C0: bne         $at, $zero, L_800216D0
    if (ctx->r1 != 0) {
        // 0x800216C4: nop
    
            goto L_800216D0;
    }
    // 0x800216C4: nop

    // 0x800216C8: jr          $ra
    // 0x800216CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x800216CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800216D0:
    // 0x800216D0: bgez        $a1, L_800216E0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800216D4: slti        $at, $a3, 0xF1
        ctx->r1 = SIGNED(ctx->r7) < 0XF1 ? 1 : 0;
            goto L_800216E0;
    }
    // 0x800216D4: slti        $at, $a3, 0xF1
    ctx->r1 = SIGNED(ctx->r7) < 0XF1 ? 1 : 0;
    // 0x800216D8: jr          $ra
    // 0x800216DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x800216DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800216E0:
    // 0x800216E0: bnel        $at, $zero, L_800216F4
    if (ctx->r1 != 0) {
        // 0x800216E4: slt         $at, $a2, $a0
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_800216F4;
    }
    goto skip_0;
    // 0x800216E4: slt         $at, $a2, $a0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    skip_0:
    // 0x800216E8: jr          $ra
    // 0x800216EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x800216EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800216F0: slt         $at, $a2, $a0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
L_800216F4:
    // 0x800216F4: beql        $at, $zero, L_80021708
    if (ctx->r1 == 0) {
        // 0x800216F8: slt         $at, $a3, $a1
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_80021708;
    }
    goto skip_1;
    // 0x800216F8: slt         $at, $a3, $a1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    skip_1:
    // 0x800216FC: jr          $ra
    // 0x80021700: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80021700: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80021704: slt         $at, $a3, $a1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
L_80021708:
    // 0x80021708: beq         $at, $zero, L_80021718
    if (ctx->r1 == 0) {
        // 0x8002170C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80021718;
    }
    // 0x8002170C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80021710: jr          $ra
    // 0x80021714: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80021714: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80021718:
    // 0x80021718: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8002171C: sw          $a0, -0x2EA8($at)
    MEM_W(-0X2EA8, ctx->r1) = ctx->r4;
    // 0x80021720: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80021724: sw          $a1, -0x2EA4($at)
    MEM_W(-0X2EA4, ctx->r1) = ctx->r5;
    // 0x80021728: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8002172C: sw          $a2, -0x2EA0($at)
    MEM_W(-0X2EA0, ctx->r1) = ctx->r6;
    // 0x80021730: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80021734: sw          $a3, -0x2E9C($at)
    MEM_W(-0X2E9C, ctx->r1) = ctx->r7;
    // 0x80021738: jr          $ra
    // 0x8002173C: nop

    TRACE_RETURN()
    return;
    // 0x8002173C: nop

;}
RECOMP_FUNC void _Putfld(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80040960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80040964: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x80040968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004096C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80040970: slti        $at, $t6, 0x26
    ctx->r1 = SIGNED(ctx->r14) < 0X26 ? 1 : 0;
    // 0x80040974: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80040978: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x8004097C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80040980: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x80040984: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x80040988: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x8004098C: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x80040990: bne         $at, $zero, L_800409BC
    if (ctx->r1 != 0) {
        // 0x80040994: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_800409BC;
    }
    // 0x80040994: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x80040998: addiu       $t7, $t6, -0x45
    ctx->r15 = ADD32(ctx->r14, -0X45);
    // 0x8004099C: sltiu       $at, $t7, 0x34
    ctx->r1 = ctx->r15 < 0X34 ? 1 : 0;
    // 0x800409A0: beq         $at, $zero, L_80040FA8
    if (ctx->r1 == 0) {
        // 0x800409A4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80040FA8;
    }
    // 0x800409A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800409A8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800409AC: addu        $at, $at, $t7
    gpr jr_addend_800409B4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800409B0: lw          $t7, -0x2ECC($at)
    ctx->r15 = ADD32(ctx->r1, -0X2ECC);
    // 0x800409B4: jr          $t7
    // 0x800409B8: nop

    switch (jr_addend_800409B4 >> 2) {
        case 0: goto L_80040CC8; break;
        case 1: goto L_80040FA8; break;
        case 2: goto L_80040CC8; break;
        case 3: goto L_80040FA8; break;
        case 4: goto L_80040FA8; break;
        case 5: goto L_80040FA8; break;
        case 6: goto L_80040FA8; break;
        case 7: goto L_80040FA8; break;
        case 8: goto L_80040FA8; break;
        case 9: goto L_80040FA8; break;
        case 10: goto L_80040FA8; break;
        case 11: goto L_80040FA8; break;
        case 12: goto L_80040FA8; break;
        case 13: goto L_80040FA8; break;
        case 14: goto L_80040FA8; break;
        case 15: goto L_80040FA8; break;
        case 16: goto L_80040FA8; break;
        case 17: goto L_80040FA8; break;
        case 18: goto L_80040FA8; break;
        case 19: goto L_80040B78; break;
        case 20: goto L_80040FA8; break;
        case 21: goto L_80040FA8; break;
        case 22: goto L_80040FA8; break;
        case 23: goto L_80040FA8; break;
        case 24: goto L_80040FA8; break;
        case 25: goto L_80040FA8; break;
        case 26: goto L_80040FA8; break;
        case 27: goto L_80040FA8; break;
        case 28: goto L_80040FA8; break;
        case 29: goto L_80040FA8; break;
        case 30: goto L_800409D0; break;
        case 31: goto L_80040A08; break;
        case 32: goto L_80040CC8; break;
        case 33: goto L_80040CC8; break;
        case 34: goto L_80040CC8; break;
        case 35: goto L_80040FA8; break;
        case 36: goto L_80040A08; break;
        case 37: goto L_80040FA8; break;
        case 38: goto L_80040FA8; break;
        case 39: goto L_80040FA8; break;
        case 40: goto L_80040FA8; break;
        case 41: goto L_80040E2C; break;
        case 42: goto L_80040B78; break;
        case 43: goto L_80040EFC; break;
        case 44: goto L_80040FA8; break;
        case 45: goto L_80040FA8; break;
        case 46: goto L_80040F44; break;
        case 47: goto L_80040FA8; break;
        case 48: goto L_80040B78; break;
        case 49: goto L_80040FA8; break;
        case 50: goto L_80040FA8; break;
        case 51: goto L_80040B78; break;
        default: switch_error(__func__, 0x800409B4, 0x8007D134);
    }
    // 0x800409B8: nop

L_800409BC:
    // 0x800409BC: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x800409C0: beql        $v1, $at, L_80040F8C
    if (ctx->r3 == ctx->r1) {
        // 0x800409C4: lw          $t8, 0xC($s0)
        ctx->r24 = MEM_W(ctx->r16, 0XC);
            goto L_80040F8C;
    }
    goto skip_0;
    // 0x800409C4: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    skip_0:
    // 0x800409C8: b           L_80040FAC
    // 0x800409CC: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
        goto L_80040FAC;
    // 0x800409CC: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
L_800409D0:
    // 0x800409D0: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x800409D4: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800409D8: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x800409DC: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x800409E0: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x800409E4: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x800409E8: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x800409EC: lw          $t9, -0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, -0X4);
    // 0x800409F0: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x800409F4: sb          $t9, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r25;
    // 0x800409F8: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x800409FC: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x80040A00: b           L_80040FC0
    // 0x80040A04: sw          $t6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r14;
        goto L_80040FC0;
    // 0x80040A04: sw          $t6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r14;
L_80040A08:
    // 0x80040A08: lbu         $v0, 0x34($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34);
    // 0x80040A0C: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    // 0x80040A10: bnel        $v0, $at, L_80040A48
    if (ctx->r2 != ctx->r1) {
        // 0x80040A14: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_80040A48;
    }
    goto skip_1;
    // 0x80040A14: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    skip_1:
    // 0x80040A18: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x80040A1C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80040A20: addiu       $t7, $t9, 0x3
    ctx->r15 = ADD32(ctx->r25, 0X3);
    // 0x80040A24: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80040A28: addiu       $t6, $t8, 0x4
    ctx->r14 = ADD32(ctx->r24, 0X4);
    // 0x80040A2C: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80040A30: lw          $t7, -0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, -0X4);
    // 0x80040A34: sra         $t8, $t7, 31
    ctx->r24 = S32(SIGNED(ctx->r15) >> 31);
    // 0x80040A38: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80040A3C: b           L_80040AA4
    // 0x80040A40: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
        goto L_80040AA4;
    // 0x80040A40: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x80040A44: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
L_80040A48:
    // 0x80040A48: bnel        $v0, $at, L_80040A80
    if (ctx->r2 != ctx->r1) {
        // 0x80040A4C: lw          $t7, 0x0($a2)
        ctx->r15 = MEM_W(ctx->r6, 0X0);
            goto L_80040A80;
    }
    goto skip_2;
    // 0x80040A4C: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    skip_2:
    // 0x80040A50: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80040A54: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80040A58: addiu       $t7, $t6, 0x7
    ctx->r15 = ADD32(ctx->r14, 0X7);
    // 0x80040A5C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80040A60: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80040A64: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80040A68: lw          $t8, -0x8($t9)
    ctx->r24 = MEM_W(ctx->r25, -0X8);
    // 0x80040A6C: lw          $t9, -0x4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4);
    // 0x80040A70: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80040A74: b           L_80040AA4
    // 0x80040A78: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
        goto L_80040AA4;
    // 0x80040A78: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x80040A7C: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
L_80040A80:
    // 0x80040A80: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80040A84: addiu       $t6, $t7, 0x3
    ctx->r14 = ADD32(ctx->r15, 0X3);
    // 0x80040A88: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x80040A8C: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x80040A90: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80040A94: lw          $t6, -0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, -0X4);
    // 0x80040A98: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x80040A9C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80040AA0: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
L_80040AA4:
    // 0x80040AA4: lbu         $t7, 0x34($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X34);
    // 0x80040AA8: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x80040AAC: bnel        $t7, $at, L_80040AD0
    if (ctx->r15 != ctx->r1) {
        // 0x80040AB0: lw          $t6, 0x0($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X0);
            goto L_80040AD0;
    }
    goto skip_3;
    // 0x80040AB0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    skip_3:
    // 0x80040AB4: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x80040AB8: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80040ABC: sra         $t6, $t9, 16
    ctx->r14 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80040AC0: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x80040AC4: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80040AC8: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x80040ACC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
L_80040AD0:
    // 0x80040AD0: bgtzl       $t6, L_80040B0C
    if (SIGNED(ctx->r14) > 0) {
        // 0x80040AD4: lw          $v0, 0x30($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X30);
            goto L_80040B0C;
    }
    goto skip_4;
    // 0x80040AD4: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    skip_4:
    // 0x80040AD8: bltzl       $t6, L_80040AEC
    if (SIGNED(ctx->r14) < 0) {
        // 0x80040ADC: lw          $t9, 0xC($s0)
        ctx->r25 = MEM_W(ctx->r16, 0XC);
            goto L_80040AEC;
    }
    goto skip_5;
    // 0x80040ADC: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    skip_5:
    // 0x80040AE0: b           L_80040B0C
    // 0x80040AE4: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
        goto L_80040B0C;
    // 0x80040AE4: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x80040AE8: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_80040AEC:
    // 0x80040AEC: addiu       $t8, $zero, 0x2D
    ctx->r24 = ADD32(0, 0X2D);
    // 0x80040AF0: addu        $t6, $a3, $t9
    ctx->r14 = ADD32(ctx->r7, ctx->r25);
    // 0x80040AF4: sb          $t8, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r24;
    // 0x80040AF8: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x80040AFC: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80040B00: b           L_80040B5C
    // 0x80040B04: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
        goto L_80040B5C;
    // 0x80040B04: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
    // 0x80040B08: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
L_80040B0C:
    // 0x80040B0C: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x80040B10: beq         $t8, $zero, L_80040B38
    if (ctx->r24 == 0) {
        // 0x80040B14: andi        $t6, $v0, 0x1
        ctx->r14 = ctx->r2 & 0X1;
            goto L_80040B38;
    }
    // 0x80040B14: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80040B18: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x80040B1C: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x80040B20: addu        $t9, $a3, $t7
    ctx->r25 = ADD32(ctx->r7, ctx->r15);
    // 0x80040B24: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    // 0x80040B28: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x80040B2C: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x80040B30: b           L_80040B5C
    // 0x80040B34: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
        goto L_80040B5C;
    // 0x80040B34: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
L_80040B38:
    // 0x80040B38: beql        $t6, $zero, L_80040B60
    if (ctx->r14 == 0) {
        // 0x80040B3C: lw          $t9, 0xC($s0)
        ctx->r25 = MEM_W(ctx->r16, 0XC);
            goto L_80040B60;
    }
    goto skip_6;
    // 0x80040B3C: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    skip_6:
    // 0x80040B40: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x80040B44: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x80040B48: addu        $t7, $a3, $t8
    ctx->r15 = ADD32(ctx->r7, ctx->r24);
    // 0x80040B4C: sb          $t9, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r25;
    // 0x80040B50: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x80040B54: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80040B58: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
L_80040B5C:
    // 0x80040B5C: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_80040B60:
    // 0x80040B60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80040B64: addu        $t7, $t9, $a3
    ctx->r15 = ADD32(ctx->r25, ctx->r7);
    // 0x80040B68: jal         0x8004A540
    // 0x80040B6C: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    _Litob(rdram, ctx);
        goto after_0;
    // 0x80040B6C: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    after_0:
    // 0x80040B70: b           L_80040FC4
    // 0x80040B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80040FC4;
    // 0x80040B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80040B78:
    // 0x80040B78: lbu         $v0, 0x34($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34);
    // 0x80040B7C: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    // 0x80040B80: bnel        $v0, $at, L_80040BB8
    if (ctx->r2 != ctx->r1) {
        // 0x80040B84: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_80040BB8;
    }
    goto skip_7;
    // 0x80040B84: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    skip_7:
    // 0x80040B88: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80040B8C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80040B90: addiu       $t8, $t6, 0x3
    ctx->r24 = ADD32(ctx->r14, 0X3);
    // 0x80040B94: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80040B98: addiu       $t7, $t9, 0x4
    ctx->r15 = ADD32(ctx->r25, 0X4);
    // 0x80040B9C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80040BA0: lw          $t8, -0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X4);
    // 0x80040BA4: sra         $t6, $t8, 31
    ctx->r14 = S32(SIGNED(ctx->r24) >> 31);
    // 0x80040BA8: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80040BAC: b           L_80040C14
    // 0x80040BB0: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
        goto L_80040C14;
    // 0x80040BB0: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x80040BB4: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
L_80040BB8:
    // 0x80040BB8: bnel        $v0, $at, L_80040BF0
    if (ctx->r2 != ctx->r1) {
        // 0x80040BBC: lw          $t6, 0x0($a2)
        ctx->r14 = MEM_W(ctx->r6, 0X0);
            goto L_80040BF0;
    }
    goto skip_8;
    // 0x80040BBC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    skip_8:
    // 0x80040BC0: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x80040BC4: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80040BC8: addiu       $t8, $t9, 0x7
    ctx->r24 = ADD32(ctx->r25, 0X7);
    // 0x80040BCC: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x80040BD0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80040BD4: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80040BD8: lw          $t9, -0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, -0X4);
    // 0x80040BDC: lw          $t8, -0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X8);
    // 0x80040BE0: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x80040BE4: b           L_80040C14
    // 0x80040BE8: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
        goto L_80040C14;
    // 0x80040BE8: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80040BEC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
L_80040BF0:
    // 0x80040BF0: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80040BF4: addiu       $t7, $t6, 0x3
    ctx->r15 = ADD32(ctx->r14, 0X3);
    // 0x80040BF8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80040BFC: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x80040C00: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80040C04: lw          $t7, -0x4($t9)
    ctx->r15 = MEM_W(ctx->r25, -0X4);
    // 0x80040C08: sra         $t8, $t7, 31
    ctx->r24 = S32(SIGNED(ctx->r15) >> 31);
    // 0x80040C0C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80040C10: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
L_80040C14:
    // 0x80040C14: lbu         $v0, 0x34($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34);
    // 0x80040C18: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x80040C1C: bne         $v0, $at, L_80040C3C
    if (ctx->r2 != ctx->r1) {
        // 0x80040C20: nop
    
            goto L_80040C3C;
    }
    // 0x80040C20: nop

    // 0x80040C24: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x80040C28: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x80040C2C: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80040C30: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x80040C34: b           L_80040C54
    // 0x80040C38: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
        goto L_80040C54;
    // 0x80040C38: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
L_80040C3C:
    // 0x80040C3C: bnel        $v0, $zero, L_80040C58
    if (ctx->r2 != 0) {
        // 0x80040C40: lw          $t7, 0x30($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X30);
            goto L_80040C58;
    }
    goto skip_9;
    // 0x80040C40: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    skip_9:
    // 0x80040C44: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x80040C48: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x80040C4C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80040C50: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
L_80040C54:
    // 0x80040C54: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
L_80040C58:
    // 0x80040C58: andi        $t6, $t7, 0x8
    ctx->r14 = ctx->r15 & 0X8;
    // 0x80040C5C: beql        $t6, $zero, L_80040CB0
    if (ctx->r14 == 0) {
        // 0x80040C60: lw          $t8, 0xC($s0)
        ctx->r24 = MEM_W(ctx->r16, 0XC);
            goto L_80040CB0;
    }
    goto skip_10;
    // 0x80040C60: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    skip_10:
    // 0x80040C64: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80040C68: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x80040C6C: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x80040C70: addu        $t7, $a3, $t9
    ctx->r15 = ADD32(ctx->r7, ctx->r25);
    // 0x80040C74: sb          $t8, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r24;
    // 0x80040C78: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x80040C7C: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80040C80: beq         $v1, $at, L_80040C94
    if (ctx->r3 == ctx->r1) {
        // 0x80040C84: sw          $t9, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r25;
            goto L_80040C94;
    }
    // 0x80040C84: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
    // 0x80040C88: addiu       $at, $zero, 0x58
    ctx->r1 = ADD32(0, 0X58);
    // 0x80040C8C: bnel        $v1, $at, L_80040CB0
    if (ctx->r3 != ctx->r1) {
        // 0x80040C90: lw          $t8, 0xC($s0)
        ctx->r24 = MEM_W(ctx->r16, 0XC);
            goto L_80040CB0;
    }
    goto skip_11;
    // 0x80040C90: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    skip_11:
L_80040C94:
    // 0x80040C94: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x80040C98: addu        $t7, $a3, $t8
    ctx->r15 = ADD32(ctx->r7, ctx->r24);
    // 0x80040C9C: sb          $a1, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r5;
    // 0x80040CA0: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x80040CA4: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80040CA8: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
    // 0x80040CAC: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
L_80040CB0:
    // 0x80040CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80040CB4: addu        $t7, $t8, $a3
    ctx->r15 = ADD32(ctx->r24, ctx->r7);
    // 0x80040CB8: jal         0x8004A540
    // 0x80040CBC: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    _Litob(rdram, ctx);
        goto after_1;
    // 0x80040CBC: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    after_1:
    // 0x80040CC0: b           L_80040FC4
    // 0x80040CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80040FC4;
    // 0x80040CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80040CC8:
    // 0x80040CC8: lbu         $t6, 0x34($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X34);
    // 0x80040CCC: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x80040CD0: bnel        $t6, $at, L_80040D38
    if (ctx->r14 != ctx->r1) {
        // 0x80040CD4: lw          $v0, 0x0($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X0);
            goto L_80040D38;
    }
    goto skip_12;
    // 0x80040CD4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    skip_12:
    // 0x80040CD8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80040CDC: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x80040CE0: beq         $t9, $zero, L_80040CF8
    if (ctx->r25 == 0) {
        // 0x80040CE4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80040CF8;
    }
    // 0x80040CE4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80040CE8: addiu       $t8, $v1, 0x7
    ctx->r24 = ADD32(ctx->r3, 0X7);
    // 0x80040CEC: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80040CF0: b           L_80040D28
    // 0x80040CF4: addiu       $v0, $t8, -0x16
    ctx->r2 = ADD32(ctx->r24, -0X16);
        goto L_80040D28;
    // 0x80040CF4: addiu       $v0, $t8, -0x16
    ctx->r2 = ADD32(ctx->r24, -0X16);
L_80040CF8:
    // 0x80040CF8: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x80040CFC: beq         $t7, $zero, L_80040D14
    if (ctx->r15 == 0) {
        // 0x80040D00: addiu       $t9, $v0, 0x7
        ctx->r25 = ADD32(ctx->r2, 0X7);
            goto L_80040D14;
    }
    // 0x80040D00: addiu       $t9, $v0, 0x7
    ctx->r25 = ADD32(ctx->r2, 0X7);
    // 0x80040D04: addiu       $t6, $v1, 0xA
    ctx->r14 = ADD32(ctx->r3, 0XA);
    // 0x80040D08: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80040D0C: b           L_80040D24
    // 0x80040D10: addiu       $a0, $t6, -0x28
    ctx->r4 = ADD32(ctx->r14, -0X28);
        goto L_80040D24;
    // 0x80040D10: addiu       $a0, $t6, -0x28
    ctx->r4 = ADD32(ctx->r14, -0X28);
L_80040D14:
    // 0x80040D14: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80040D18: and         $t8, $t9, $at
    ctx->r24 = ctx->r25 & ctx->r1;
    // 0x80040D1C: addiu       $a0, $t8, 0x8
    ctx->r4 = ADD32(ctx->r24, 0X8);
    // 0x80040D20: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
L_80040D24:
    // 0x80040D24: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80040D28:
    // 0x80040D28: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x80040D2C: b           L_80040D8C
    // 0x80040D30: sdc1        $f4, 0x0($s0)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X0, ctx->r16);
        goto L_80040D8C;
    // 0x80040D30: sdc1        $f4, 0x0($s0)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X0, ctx->r16);
    // 0x80040D34: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
L_80040D38:
    // 0x80040D38: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80040D3C: beq         $t6, $zero, L_80040D54
    if (ctx->r14 == 0) {
        // 0x80040D40: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80040D54;
    }
    // 0x80040D40: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80040D44: addiu       $t9, $v1, 0x7
    ctx->r25 = ADD32(ctx->r3, 0X7);
    // 0x80040D48: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80040D4C: b           L_80040D84
    // 0x80040D50: addiu       $v0, $t9, -0x16
    ctx->r2 = ADD32(ctx->r25, -0X16);
        goto L_80040D84;
    // 0x80040D50: addiu       $v0, $t9, -0x16
    ctx->r2 = ADD32(ctx->r25, -0X16);
L_80040D54:
    // 0x80040D54: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    // 0x80040D58: beq         $t8, $zero, L_80040D70
    if (ctx->r24 == 0) {
        // 0x80040D5C: addiu       $t6, $v0, 0x7
        ctx->r14 = ADD32(ctx->r2, 0X7);
            goto L_80040D70;
    }
    // 0x80040D5C: addiu       $t6, $v0, 0x7
    ctx->r14 = ADD32(ctx->r2, 0X7);
    // 0x80040D60: addiu       $t7, $v1, 0xA
    ctx->r15 = ADD32(ctx->r3, 0XA);
    // 0x80040D64: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80040D68: b           L_80040D80
    // 0x80040D6C: addiu       $a0, $t7, -0x28
    ctx->r4 = ADD32(ctx->r15, -0X28);
        goto L_80040D80;
    // 0x80040D6C: addiu       $a0, $t7, -0x28
    ctx->r4 = ADD32(ctx->r15, -0X28);
L_80040D70:
    // 0x80040D70: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80040D74: and         $t9, $t6, $at
    ctx->r25 = ctx->r14 & ctx->r1;
    // 0x80040D78: addiu       $a0, $t9, 0x8
    ctx->r4 = ADD32(ctx->r25, 0X8);
    // 0x80040D7C: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
L_80040D80:
    // 0x80040D80: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80040D84:
    // 0x80040D84: ldc1        $f6, -0x8($v0)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r2, -0X8);
    // 0x80040D88: sdc1        $f6, 0x0($s0)
    CHECK_FR(ctx, 6);
    SD(ctx->f6.u64, 0X0, ctx->r16);
L_80040D8C:
    // 0x80040D8C: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x80040D90: andi        $t6, $t7, 0x8000
    ctx->r14 = ctx->r15 & 0X8000;
    // 0x80040D94: beql        $t6, $zero, L_80040DC0
    if (ctx->r14 == 0) {
        // 0x80040D98: lw          $v0, 0x30($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X30);
            goto L_80040DC0;
    }
    goto skip_13;
    // 0x80040D98: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    skip_13:
    // 0x80040D9C: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x80040DA0: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x80040DA4: addu        $t7, $a3, $t8
    ctx->r15 = ADD32(ctx->r7, ctx->r24);
    // 0x80040DA8: sb          $t9, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r25;
    // 0x80040DAC: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x80040DB0: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80040DB4: b           L_80040E10
    // 0x80040DB8: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
        goto L_80040E10;
    // 0x80040DB8: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
    // 0x80040DBC: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
L_80040DC0:
    // 0x80040DC0: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x80040DC4: beq         $t9, $zero, L_80040DEC
    if (ctx->r25 == 0) {
        // 0x80040DC8: andi        $t7, $v0, 0x1
        ctx->r15 = ctx->r2 & 0X1;
            goto L_80040DEC;
    }
    // 0x80040DC8: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x80040DCC: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x80040DD0: addiu       $t7, $zero, 0x2B
    ctx->r15 = ADD32(0, 0X2B);
    // 0x80040DD4: addu        $t8, $a3, $t6
    ctx->r24 = ADD32(ctx->r7, ctx->r14);
    // 0x80040DD8: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x80040DDC: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80040DE0: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80040DE4: b           L_80040E10
    // 0x80040DE8: sw          $t6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r14;
        goto L_80040E10;
    // 0x80040DE8: sw          $t6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r14;
L_80040DEC:
    // 0x80040DEC: beql        $t7, $zero, L_80040E14
    if (ctx->r15 == 0) {
        // 0x80040DF0: lw          $t8, 0xC($s0)
        ctx->r24 = MEM_W(ctx->r16, 0XC);
            goto L_80040E14;
    }
    goto skip_14;
    // 0x80040DF0: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    skip_14:
    // 0x80040DF4: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80040DF8: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80040DFC: addu        $t6, $a3, $t9
    ctx->r14 = ADD32(ctx->r7, ctx->r25);
    // 0x80040E00: sb          $t8, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r24;
    // 0x80040E04: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x80040E08: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80040E0C: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
L_80040E10:
    // 0x80040E10: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
L_80040E14:
    // 0x80040E14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80040E18: addu        $t6, $t8, $a3
    ctx->r14 = ADD32(ctx->r24, ctx->r7);
    // 0x80040E1C: jal         0x8004AD50
    // 0x80040E20: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
    _Ldtob(rdram, ctx);
        goto after_2;
    // 0x80040E20: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
    after_2:
    // 0x80040E24: b           L_80040FC4
    // 0x80040E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80040FC4;
    // 0x80040E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80040E2C:
    // 0x80040E2C: lbu         $v0, 0x34($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34);
    // 0x80040E30: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x80040E34: bnel        $v0, $at, L_80040E68
    if (ctx->r2 != ctx->r1) {
        // 0x80040E38: addiu       $at, $zero, 0x6C
        ctx->r1 = ADD32(0, 0X6C);
            goto L_80040E68;
    }
    goto skip_15;
    // 0x80040E38: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    skip_15:
    // 0x80040E3C: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x80040E40: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80040E44: addiu       $t9, $t7, 0x3
    ctx->r25 = ADD32(ctx->r15, 0X3);
    // 0x80040E48: and         $t8, $t9, $at
    ctx->r24 = ctx->r25 & ctx->r1;
    // 0x80040E4C: addiu       $t6, $t8, 0x4
    ctx->r14 = ADD32(ctx->r24, 0X4);
    // 0x80040E50: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80040E54: lw          $t9, -0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, -0X4);
    // 0x80040E58: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
    // 0x80040E5C: b           L_80040FC0
    // 0x80040E60: sh          $t7, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r15;
        goto L_80040FC0;
    // 0x80040E60: sh          $t7, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r15;
    // 0x80040E64: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
L_80040E68:
    // 0x80040E68: bnel        $v0, $at, L_80040E9C
    if (ctx->r2 != ctx->r1) {
        // 0x80040E6C: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_80040E9C;
    }
    goto skip_16;
    // 0x80040E6C: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    skip_16:
    // 0x80040E70: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80040E74: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80040E78: addiu       $t6, $t8, 0x3
    ctx->r14 = ADD32(ctx->r24, 0X3);
    // 0x80040E7C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80040E80: addiu       $t9, $t7, 0x4
    ctx->r25 = ADD32(ctx->r15, 0X4);
    // 0x80040E84: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80040E88: lw          $t6, -0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, -0X4);
    // 0x80040E8C: lw          $t8, 0x2C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2C);
    // 0x80040E90: b           L_80040FC0
    // 0x80040E94: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
        goto L_80040FC0;
    // 0x80040E94: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x80040E98: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
L_80040E9C:
    // 0x80040E9C: bnel        $v0, $at, L_80040ED8
    if (ctx->r2 != ctx->r1) {
        // 0x80040EA0: lw          $t7, 0x0($a2)
        ctx->r15 = MEM_W(ctx->r6, 0X0);
            goto L_80040ED8;
    }
    goto skip_17;
    // 0x80040EA0: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    skip_17:
    // 0x80040EA4: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x80040EA8: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80040EAC: addiu       $t9, $t7, 0x3
    ctx->r25 = ADD32(ctx->r15, 0X3);
    // 0x80040EB0: and         $t8, $t9, $at
    ctx->r24 = ctx->r25 & ctx->r1;
    // 0x80040EB4: addiu       $t6, $t8, 0x4
    ctx->r14 = ADD32(ctx->r24, 0X4);
    // 0x80040EB8: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80040EBC: lw          $t6, -0x4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4);
    // 0x80040EC0: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
    // 0x80040EC4: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x80040EC8: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x80040ECC: b           L_80040FC0
    // 0x80040ED0: sw          $t7, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r15;
        goto L_80040FC0;
    // 0x80040ED0: sw          $t7, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r15;
    // 0x80040ED4: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
L_80040ED8:
    // 0x80040ED8: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80040EDC: addiu       $t8, $t7, 0x3
    ctx->r24 = ADD32(ctx->r15, 0X3);
    // 0x80040EE0: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80040EE4: addiu       $t6, $t9, 0x4
    ctx->r14 = ADD32(ctx->r25, 0X4);
    // 0x80040EE8: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80040EEC: lw          $t8, -0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, -0X4);
    // 0x80040EF0: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
    // 0x80040EF4: b           L_80040FC0
    // 0x80040EF8: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
        goto L_80040FC0;
    // 0x80040EF8: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_80040EFC:
    // 0x80040EFC: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x80040F00: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80040F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80040F08: addiu       $t6, $t9, 0x3
    ctx->r14 = ADD32(ctx->r25, 0X3);
    // 0x80040F0C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80040F10: addiu       $t8, $t7, 0x4
    ctx->r24 = ADD32(ctx->r15, 0X4);
    // 0x80040F14: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80040F18: lw          $t6, -0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, -0X4);
    // 0x80040F1C: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x80040F20: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x80040F24: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x80040F28: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x80040F2C: addu        $t6, $t7, $a3
    ctx->r14 = ADD32(ctx->r15, ctx->r7);
    // 0x80040F30: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80040F34: jal         0x8004A540
    // 0x80040F38: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
    _Litob(rdram, ctx);
        goto after_3;
    // 0x80040F38: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
    after_3:
    // 0x80040F3C: b           L_80040FC4
    // 0x80040F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80040FC4;
    // 0x80040F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80040F44:
    // 0x80040F44: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80040F48: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80040F4C: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x80040F50: and         $t7, $t9, $at
    ctx->r15 = ctx->r25 & ctx->r1;
    // 0x80040F54: addiu       $t6, $t7, 0x4
    ctx->r14 = ADD32(ctx->r15, 0X4);
    // 0x80040F58: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80040F5C: lw          $a0, -0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, -0X4);
    // 0x80040F60: jal         0x8004A4CC
    // 0x80040F64: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
    strlen_recomp(rdram, ctx);
        goto after_4;
    // 0x80040F64: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
    after_4:
    // 0x80040F68: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80040F6C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80040F70: bltz        $v1, L_80040FC0
    if (SIGNED(ctx->r3) < 0) {
        // 0x80040F74: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80040FC0;
    }
    // 0x80040F74: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80040F78: beql        $at, $zero, L_80040FC4
    if (ctx->r1 == 0) {
        // 0x80040F7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80040FC4;
    }
    goto skip_18;
    // 0x80040F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_18:
    // 0x80040F80: b           L_80040FC0
    // 0x80040F84: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
        goto L_80040FC0;
    // 0x80040F84: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x80040F88: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
L_80040F8C:
    // 0x80040F8C: addiu       $t6, $zero, 0x25
    ctx->r14 = ADD32(0, 0X25);
    // 0x80040F90: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x80040F94: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    // 0x80040F98: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x80040F9C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80040FA0: b           L_80040FC0
    // 0x80040FA4: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
        goto L_80040FC0;
    // 0x80040FA4: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
L_80040FA8:
    // 0x80040FA8: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
L_80040FAC:
    // 0x80040FAC: addu        $t9, $a3, $t6
    ctx->r25 = ADD32(ctx->r7, ctx->r14);
    // 0x80040FB0: sb          $a1, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r5;
    // 0x80040FB4: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x80040FB8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80040FBC: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
L_80040FC0:
    // 0x80040FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80040FC4:
    // 0x80040FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80040FC8: jr          $ra
    // 0x80040FCC: nop

    TRACE_RETURN()
    return;
    // 0x80040FCC: nop

;}
RECOMP_FUNC void func_8003A370_3AF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A370: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003A374: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003A378: addiu       $a1, $a1, 0x9CE
    ctx->r5 = ADD32(ctx->r5, 0X9CE);
    // 0x8003A37C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003A380: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003A384: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003A388: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003A38C: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x8003A390: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003A394: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x8003A398: beq         $v1, $zero, L_8003A3DC
    if (ctx->r3 == 0) {
        // 0x8003A39C: nop
    
            goto L_8003A3DC;
    }
    // 0x8003A39C: nop

    // 0x8003A3A0: lhu         $t6, 0x9CA($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X9CA);
    // 0x8003A3A4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003A3A8: addiu       $v0, $v0, 0x9CF
    ctx->r2 = ADD32(ctx->r2, 0X9CF);
    // 0x8003A3AC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8003A3B0: bne         $t7, $zero, L_8003A3DC
    if (ctx->r15 != 0) {
        // 0x8003A3B4: nop
    
            goto L_8003A3DC;
    }
    // 0x8003A3B4: nop

    // 0x8003A3B8: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x8003A3BC: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x8003A3C0: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x8003A3C4: andi        $a0, $t9, 0xFF
    ctx->r4 = ctx->r25 & 0XFF;
    // 0x8003A3C8: beq         $a0, $at, L_8003A3D8
    if (ctx->r4 == ctx->r1) {
        // 0x8003A3CC: sb          $t9, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r25;
            goto L_8003A3D8;
    }
    // 0x8003A3CC: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x8003A3D0: bne         $a0, $zero, L_8003A3DC
    if (ctx->r4 != 0) {
        // 0x8003A3D4: nop
    
            goto L_8003A3DC;
    }
    // 0x8003A3D4: nop

L_8003A3D8:
    // 0x8003A3D8: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_8003A3DC:
    // 0x8003A3DC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003A3E0: addiu       $a0, $a0, 0x9D6
    ctx->r4 = ADD32(ctx->r4, 0X9D6);
    // 0x8003A3E4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8003A3E8: beq         $v0, $zero, L_8003A454
    if (ctx->r2 == 0) {
        // 0x8003A3EC: nop
    
            goto L_8003A454;
    }
    // 0x8003A3EC: nop

    // 0x8003A3F0: lbu         $t0, 0x9CD($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X9CD);
    // 0x8003A3F4: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x8003A3F8: bne         $t0, $zero, L_8003A454
    if (ctx->r8 != 0) {
        // 0x8003A3FC: nop
    
            goto L_8003A454;
    }
    // 0x8003A3FC: nop

    // 0x8003A400: lhu         $t1, 0x9CA($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X9CA);
    // 0x8003A404: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003A408: addiu       $v1, $v1, 0x9D5
    ctx->r3 = ADD32(ctx->r3, 0X9D5);
    // 0x8003A40C: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x8003A410: bne         $t2, $zero, L_8003A454
    if (ctx->r10 != 0) {
        // 0x8003A414: nop
    
            goto L_8003A454;
    }
    // 0x8003A414: nop

    // 0x8003A418: lbu         $t3, 0x0($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X0);
    // 0x8003A41C: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003A420: addiu       $t7, $v0, -0x4
    ctx->r15 = ADD32(ctx->r2, -0X4);
    // 0x8003A424: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8003A428: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x8003A42C: bne         $t5, $zero, L_8003A454
    if (ctx->r13 != 0) {
        // 0x8003A430: sb          $t4, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r12;
            goto L_8003A454;
    }
    // 0x8003A430: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
    // 0x8003A434: lbu         $t6, 0x9D4($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9D4);
    // 0x8003A438: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8003A43C: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x8003A440: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x8003A444: beq         $at, $zero, L_8003A454
    if (ctx->r1 == 0) {
        // 0x8003A448: sb          $t6, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r14;
            goto L_8003A454;
    }
    // 0x8003A448: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x8003A44C: jal         0x80039D60
    // 0x8003A450: nop

    func_80039D60_3A960(rdram, ctx);
        goto after_0;
    // 0x8003A450: nop

    after_0:
L_8003A454:
    // 0x8003A454: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003A458: addiu       $a1, $a1, 0x9D3
    ctx->r5 = ADD32(ctx->r5, 0X9D3);
    // 0x8003A45C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8003A460: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003A464: lbu         $a0, 0x9CD($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X9CD);
    // 0x8003A468: beq         $v0, $zero, L_8003A4D4
    if (ctx->r2 == 0) {
        // 0x8003A46C: nop
    
            goto L_8003A4D4;
    }
    // 0x8003A46C: nop

    // 0x8003A470: bne         $a0, $zero, L_8003A4D4
    if (ctx->r4 != 0) {
        // 0x8003A474: lui         $t9, 0x801C
        ctx->r25 = S32(0X801C << 16);
            goto L_8003A4D4;
    }
    // 0x8003A474: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x8003A478: lhu         $t9, 0x9CA($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X9CA);
    // 0x8003A47C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003A480: addiu       $v1, $v1, 0x9D2
    ctx->r3 = ADD32(ctx->r3, 0X9D2);
    // 0x8003A484: andi        $t0, $t9, 0x3
    ctx->r8 = ctx->r25 & 0X3;
    // 0x8003A488: bne         $t0, $zero, L_8003A4D4
    if (ctx->r8 != 0) {
        // 0x8003A48C: nop
    
            goto L_8003A4D4;
    }
    // 0x8003A48C: nop

    // 0x8003A490: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x8003A494: lui         $t4, 0x801C
    ctx->r12 = S32(0X801C << 16);
    // 0x8003A498: addiu       $t5, $v0, -0x4
    ctx->r13 = ADD32(ctx->r2, -0X4);
    // 0x8003A49C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8003A4A0: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x8003A4A4: bne         $t3, $zero, L_8003A4D4
    if (ctx->r11 != 0) {
        // 0x8003A4A8: sb          $t2, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r10;
            goto L_8003A4D4;
    }
    // 0x8003A4A8: sb          $t2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r10;
    // 0x8003A4AC: lbu         $t4, 0x9D1($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X9D1);
    // 0x8003A4B0: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x8003A4B4: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x8003A4B8: sb          $t5, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r13;
    // 0x8003A4BC: beq         $at, $zero, L_8003A4D4
    if (ctx->r1 == 0) {
        // 0x8003A4C0: sb          $t4, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r12;
            goto L_8003A4D4;
    }
    // 0x8003A4C0: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
    // 0x8003A4C4: jal         0x80039DE4
    // 0x8003A4C8: nop

    func_80039DE4_3A9E4(rdram, ctx);
        goto after_1;
    // 0x8003A4C8: nop

    after_1:
    // 0x8003A4CC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003A4D0: lbu         $a0, 0x9CD($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X9CD);
L_8003A4D4:
    // 0x8003A4D4: bne         $a0, $zero, L_8003A544
    if (ctx->r4 != 0) {
        // 0x8003A4D8: lui         $t7, 0x801C
        ctx->r15 = S32(0X801C << 16);
            goto L_8003A544;
    }
    // 0x8003A4D8: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003A4DC: lhu         $t7, 0x9CA($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X9CA);
    // 0x8003A4E0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003A4E4: addiu       $v1, $v1, 0x9E8
    ctx->r3 = ADD32(ctx->r3, 0X9E8);
    // 0x8003A4E8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8003A4EC: bne         $t8, $zero, L_8003A544
    if (ctx->r24 != 0) {
        // 0x8003A4F0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8003A544;
    }
    // 0x8003A4F0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003A4F4: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8003A4F8: addiu       $s1, $s1, 0x9E0
    ctx->r17 = ADD32(ctx->r17, 0X9E0);
    // 0x8003A4FC: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_8003A500:
    // 0x8003A500: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x8003A504: addu        $v0, $s1, $s0
    ctx->r2 = ADD32(ctx->r17, ctx->r16);
    // 0x8003A508: beql        $t9, $zero, L_8003A53C
    if (ctx->r25 == 0) {
        // 0x8003A50C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8003A53C;
    }
    goto skip_0;
    // 0x8003A50C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8003A510: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8003A514: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x8003A518: addiu       $t1, $t0, -0x3
    ctx->r9 = ADD32(ctx->r8, -0X3);
    // 0x8003A51C: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x8003A520: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x8003A524: beq         $at, $zero, L_8003A538
    if (ctx->r1 == 0) {
        // 0x8003A528: sb          $t1, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r9;
            goto L_8003A538;
    }
    // 0x8003A528: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x8003A52C: jal         0x8003A2D0
    // 0x8003A530: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_8003A2D0_3AED0(rdram, ctx);
        goto after_2;
    // 0x8003A530: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_2:
    // 0x8003A534: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_8003A538:
    // 0x8003A538: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8003A53C:
    // 0x8003A53C: bne         $s0, $s2, L_8003A500
    if (ctx->r16 != ctx->r18) {
        // 0x8003A540: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_8003A500;
    }
    // 0x8003A540: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_8003A544:
    // 0x8003A544: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003A548: addiu       $v1, $v1, 0x9DA
    ctx->r3 = ADD32(ctx->r3, 0X9DA);
    // 0x8003A54C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8003A550: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003A554: addiu       $a1, $a1, 0x9DB
    ctx->r5 = ADD32(ctx->r5, 0X9DB);
    // 0x8003A558: beq         $v0, $zero, L_8003A5A0
    if (ctx->r2 == 0) {
        // 0x8003A55C: lui         $s1, 0x801C
        ctx->r17 = S32(0X801C << 16);
            goto L_8003A5A0;
    }
    // 0x8003A55C: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8003A560: lui         $t3, 0x801C
    ctx->r11 = S32(0X801C << 16);
    // 0x8003A564: lbu         $t3, 0x9CD($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X9CD);
    // 0x8003A568: lui         $t4, 0x801C
    ctx->r12 = S32(0X801C << 16);
    // 0x8003A56C: bnel        $t3, $zero, L_8003A5A4
    if (ctx->r11 != 0) {
        // 0x8003A570: lb          $v1, 0x0($a1)
        ctx->r3 = MEM_B(ctx->r5, 0X0);
            goto L_8003A5A4;
    }
    goto skip_1;
    // 0x8003A570: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    skip_1:
    // 0x8003A574: lhu         $t4, 0x9CA($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X9CA);
    // 0x8003A578: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8003A57C: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003A580: andi        $t5, $t4, 0x7
    ctx->r13 = ctx->r12 & 0X7;
    // 0x8003A584: bnel        $t5, $zero, L_8003A5A4
    if (ctx->r13 != 0) {
        // 0x8003A588: lb          $v1, 0x0($a1)
        ctx->r3 = MEM_B(ctx->r5, 0X0);
            goto L_8003A5A4;
    }
    goto skip_2;
    // 0x8003A588: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    skip_2:
    // 0x8003A58C: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x8003A590: lhu         $t7, 0x9D8($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X9D8);
    // 0x8003A594: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003A598: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8003A59C: sh          $t8, 0x9D8($at)
    MEM_H(0X9D8, ctx->r1) = ctx->r24;
L_8003A5A0:
    // 0x8003A5A0: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
L_8003A5A4:
    // 0x8003A5A4: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x8003A5A8: addiu       $s1, $s1, 0x9CC
    ctx->r17 = ADD32(ctx->r17, 0X9CC);
    // 0x8003A5AC: beq         $v1, $zero, L_8003A5F0
    if (ctx->r3 == 0) {
        // 0x8003A5B0: lui         $s2, 0x801C
        ctx->r18 = S32(0X801C << 16);
            goto L_8003A5F0;
    }
    // 0x8003A5B0: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x8003A5B4: lhu         $t9, 0x9CA($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X9CA);
    // 0x8003A5B8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003A5BC: addiu       $v0, $v0, 0x9DC
    ctx->r2 = ADD32(ctx->r2, 0X9DC);
    // 0x8003A5C0: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8003A5C4: bnel        $t0, $zero, L_8003A5F4
    if (ctx->r8 != 0) {
        // 0x8003A5C8: andi        $v0, $zero, 0xFF
        ctx->r2 = 0 & 0XFF;
            goto L_8003A5F4;
    }
    goto skip_3;
    // 0x8003A5C8: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
    skip_3:
    // 0x8003A5CC: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x8003A5D0: addiu       $at, $zero, 0xD0
    ctx->r1 = ADD32(0, 0XD0);
    // 0x8003A5D4: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x8003A5D8: andi        $a0, $t2, 0xFF
    ctx->r4 = ctx->r10 & 0XFF;
    // 0x8003A5DC: beq         $a0, $at, L_8003A5EC
    if (ctx->r4 == ctx->r1) {
        // 0x8003A5E0: sb          $t2, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r10;
            goto L_8003A5EC;
    }
    // 0x8003A5E0: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    // 0x8003A5E4: bnel        $a0, $zero, L_8003A5F4
    if (ctx->r4 != 0) {
        // 0x8003A5E8: andi        $v0, $zero, 0xFF
        ctx->r2 = 0 & 0XFF;
            goto L_8003A5F4;
    }
    goto skip_4;
    // 0x8003A5E8: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
    skip_4:
L_8003A5EC:
    // 0x8003A5EC: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_8003A5F0:
    // 0x8003A5F0: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
L_8003A5F4:
    // 0x8003A5F4: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8003A5F8: beq         $at, $zero, L_8003A704
    if (ctx->r1 == 0) {
        // 0x8003A5FC: sb          $zero, 0x0($s1)
        MEM_B(0X0, ctx->r17) = 0;
            goto L_8003A704;
    }
    // 0x8003A5FC: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x8003A600: addiu       $s2, $s2, 0x1728
    ctx->r18 = ADD32(ctx->r18, 0X1728);
L_8003A604:
    // 0x8003A604: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x8003A608: subu        $t3, $t3, $v0
    ctx->r11 = SUB32(ctx->r11, ctx->r2);
    // 0x8003A60C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003A610: subu        $t3, $t3, $v0
    ctx->r11 = SUB32(ctx->r11, ctx->r2);
    // 0x8003A614: lui         $t4, 0x801C
    ctx->r12 = S32(0X801C << 16);
    // 0x8003A618: addiu       $t4, $t4, 0xC28
    ctx->r12 = ADD32(ctx->r12, 0XC28);
    // 0x8003A61C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8003A620: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8003A624: sw          $t5, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r13;
    // 0x8003A628: lbu         $v1, 0xF($t5)
    ctx->r3 = MEM_BU(ctx->r13, 0XF);
    // 0x8003A62C: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x8003A630: beq         $v1, $zero, L_8003A688
    if (ctx->r3 == 0) {
        // 0x8003A634: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_8003A688;
    }
    // 0x8003A634: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x8003A638: sb          $t6, 0xF($t5)
    MEM_B(0XF, ctx->r13) = ctx->r14;
    // 0x8003A63C: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x8003A640: lbu         $t7, 0xF($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XF);
    // 0x8003A644: bnel        $t7, $zero, L_8003A68C
    if (ctx->r15 != 0) {
        // 0x8003A648: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_8003A68C;
    }
    goto skip_5;
    // 0x8003A648: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_5:
    // 0x8003A64C: lbu         $t8, 0xE($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XE);
    // 0x8003A650: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8003A654: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x8003A658: beql        $t8, $zero, L_8003A68C
    if (ctx->r24 == 0) {
        // 0x8003A65C: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_8003A68C;
    }
    goto skip_6;
    // 0x8003A65C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_6:
    // 0x8003A660: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8003A664: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
    // 0x8003A668: addiu       $t1, $t1, 0xA68
    ctx->r9 = ADD32(ctx->r9, 0XA68);
    // 0x8003A66C: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    // 0x8003A670: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8003A674: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8003A678: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003A67C: jal         0x80048780
    // 0x8003A680: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    alSynStopVoice(rdram, ctx);
        goto after_3;
    // 0x8003A680: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    after_3:
    // 0x8003A684: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
L_8003A688:
    // 0x8003A688: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_8003A68C:
    // 0x8003A68C: beql        $v0, $zero, L_8003A6F0
    if (ctx->r2 == 0) {
        // 0x8003A690: lbu         $t8, 0x0($s1)
        ctx->r24 = MEM_BU(ctx->r17, 0X0);
            goto L_8003A6F0;
    }
    goto skip_7;
    // 0x8003A690: lbu         $t8, 0x0($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X0);
    skip_7:
    // 0x8003A694: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x8003A698: andi        $t3, $v0, 0x7FFF
    ctx->r11 = ctx->r2 & 0X7FFF;
    // 0x8003A69C: sltiu       $at, $t3, 0x100
    ctx->r1 = ctx->r11 < 0X100 ? 1 : 0;
    // 0x8003A6A0: beq         $v1, $zero, L_8003A6B0
    if (ctx->r3 == 0) {
        // 0x8003A6A4: addiu       $t2, $v1, -0x1
        ctx->r10 = ADD32(ctx->r3, -0X1);
            goto L_8003A6B0;
    }
    // 0x8003A6A4: addiu       $t2, $v1, -0x1
    ctx->r10 = ADD32(ctx->r3, -0X1);
    // 0x8003A6A8: b           L_8003A6EC
    // 0x8003A6AC: sb          $t2, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r10;
        goto L_8003A6EC;
    // 0x8003A6AC: sb          $t2, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r10;
L_8003A6B0:
    // 0x8003A6B0: beq         $at, $zero, L_8003A6E4
    if (ctx->r1 == 0) {
        // 0x8003A6B4: lui         $t4, 0x801C
        ctx->r12 = S32(0X801C << 16);
            goto L_8003A6E4;
    }
    // 0x8003A6B4: lui         $t4, 0x801C
    ctx->r12 = S32(0X801C << 16);
    // 0x8003A6B8: lbu         $t4, 0x9CD($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X9CD);
    // 0x8003A6BC: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003A6C0: bnel        $t4, $zero, L_8003A6F0
    if (ctx->r12 != 0) {
        // 0x8003A6C4: lbu         $t8, 0x0($s1)
        ctx->r24 = MEM_BU(ctx->r17, 0X0);
            goto L_8003A6F0;
    }
    goto skip_8;
    // 0x8003A6C4: lbu         $t8, 0x0($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X0);
    skip_8:
    // 0x8003A6C8: lhu         $t5, 0x1A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X1A);
    // 0x8003A6CC: lhu         $t6, 0x9D8($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X9D8);
    // 0x8003A6D0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8003A6D4: jal         0x8003A71C
    // 0x8003A6D8: sh          $t7, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r15;
    func_8003A71C_3B31C(rdram, ctx);
        goto after_4;
    // 0x8003A6D8: sh          $t7, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r15;
    after_4:
    // 0x8003A6DC: b           L_8003A6F0
    // 0x8003A6E0: lbu         $t8, 0x0($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X0);
        goto L_8003A6F0;
    // 0x8003A6E0: lbu         $t8, 0x0($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X0);
L_8003A6E4:
    // 0x8003A6E4: jal         0x8003A71C
    // 0x8003A6E8: nop

    func_8003A71C_3B31C(rdram, ctx);
        goto after_5;
    // 0x8003A6E8: nop

    after_5:
L_8003A6EC:
    // 0x8003A6EC: lbu         $t8, 0x0($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X0);
L_8003A6F0:
    // 0x8003A6F0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8003A6F4: andi        $v0, $t9, 0xFF
    ctx->r2 = ctx->r25 & 0XFF;
    // 0x8003A6F8: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8003A6FC: bne         $at, $zero, L_8003A604
    if (ctx->r1 != 0) {
        // 0x8003A700: sb          $t9, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r25;
            goto L_8003A604;
    }
    // 0x8003A700: sb          $t9, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r25;
L_8003A704:
    // 0x8003A704: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003A708: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003A70C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003A710: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003A714: jr          $ra
    // 0x8003A718: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8003A718: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80024160_24D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80024160: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80024164: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80024168: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8002416C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80024170: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80024174: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80024178: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8002417C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80024180: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80024184: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80024188: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x8002418C: lui         $s5, 0x1
    ctx->r21 = S32(0X1 << 16);
    // 0x80024190: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80024194: sll         $t7, $v1, 15
    ctx->r15 = S32(ctx->r3 << 15);
    // 0x80024198: bltz        $t7, L_80024258
    if (SIGNED(ctx->r15) < 0) {
        // 0x8002419C: nop
    
            goto L_80024258;
    }
    // 0x8002419C: nop

    // 0x800241A0: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x800241A4: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x800241A8: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x800241AC: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x800241B0: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x800241B4: multu       $t9, $t1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800241B8: addiu       $s3, $s3, -0x3A38
    ctx->r19 = ADD32(ctx->r19, -0X3A38);
    // 0x800241BC: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x800241C0: lui         $s4, 0xC
    ctx->r20 = S32(0XC << 16);
    // 0x800241C4: ori         $s4, $s4, 0x7FA4
    ctx->r20 = ctx->r20 | 0X7FA4;
    // 0x800241C8: addu        $a0, $t3, $s4
    ctx->r4 = ADD32(ctx->r11, ctx->r20);
    // 0x800241CC: mflo        $s1
    ctx->r17 = lo;
    // 0x800241D0: sll         $a1, $s1, 2
    ctx->r5 = S32(ctx->r17 << 2);
    // 0x800241D4: jal         0x800148F0
    // 0x800241D8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x800241D8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x800241DC: sw          $v0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r2;
    // 0x800241E0: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x800241E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800241E8: jal         0x800148F0
    // 0x800241EC: addu        $a0, $t4, $s4
    ctx->r4 = ADD32(ctx->r12, ctx->r20);
    func_800148F0_154F0(rdram, ctx);
        goto after_1;
    // 0x800241EC: addu        $a0, $t4, $s4
    ctx->r4 = ADD32(ctx->r12, ctx->r20);
    after_1:
    // 0x800241F0: sw          $v0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r2;
    // 0x800241F4: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x800241F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800241FC: jal         0x800148F0
    // 0x80024200: addu        $a0, $t5, $s4
    ctx->r4 = ADD32(ctx->r13, ctx->r20);
    func_800148F0_154F0(rdram, ctx);
        goto after_2;
    // 0x80024200: addu        $a0, $t5, $s4
    ctx->r4 = ADD32(ctx->r13, ctx->r20);
    after_2:
    // 0x80024204: sw          $v0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r2;
    // 0x80024208: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x8002420C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80024210: jal         0x800148F0
    // 0x80024214: addu        $a0, $t6, $s4
    ctx->r4 = ADD32(ctx->r14, ctx->r20);
    func_800148F0_154F0(rdram, ctx);
        goto after_3;
    // 0x80024214: addu        $a0, $t6, $s4
    ctx->r4 = ADD32(ctx->r14, ctx->r20);
    after_3:
    // 0x80024218: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x8002421C: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x80024220: sw          $v0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r2;
    // 0x80024224: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x80024228: addiu       $t2, $t1, 0x2
    ctx->r10 = ADD32(ctx->r9, 0X2);
    // 0x8002422C: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x80024230: multu       $t0, $t2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80024234: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x80024238: addu        $a0, $t7, $s4
    ctx->r4 = ADD32(ctx->r15, ctx->r20);
    // 0x8002423C: mflo        $a1
    ctx->r5 = lo;
    // 0x80024240: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    // 0x80024244: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x80024248: jal         0x800148F0
    // 0x8002424C: sll         $a1, $t3, 2
    ctx->r5 = S32(ctx->r11 << 2);
    func_800148F0_154F0(rdram, ctx);
        goto after_4;
    // 0x8002424C: sll         $a1, $t3, 2
    ctx->r5 = S32(ctx->r11 << 2);
    after_4:
    // 0x80024250: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    // 0x80024254: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
L_80024258:
    // 0x80024258: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x8002425C: lui         $s4, 0xC
    ctx->r20 = S32(0XC << 16);
    // 0x80024260: andi        $a0, $v1, 0x400
    ctx->r4 = ctx->r3 & 0X400;
    // 0x80024264: ori         $s4, $s4, 0x7FA4
    ctx->r20 = ctx->r20 | 0X7FA4;
    // 0x80024268: addiu       $s3, $s3, -0x3A38
    ctx->r19 = ADD32(ctx->r19, -0X3A38);
    // 0x8002426C: beq         $a0, $zero, L_8002427C
    if (ctx->r4 == 0) {
        // 0x80024270: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8002427C;
    }
    // 0x80024270: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80024274: b           L_80024280
    // 0x80024278: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80024280;
    // 0x80024278: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8002427C:
    // 0x8002427C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80024280:
    // 0x80024280: blez        $v0, L_800242EC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80024284: and         $t4, $v1, $s5
        ctx->r12 = ctx->r3 & ctx->r21;
            goto L_800242EC;
    }
    // 0x80024284: and         $t4, $v1, $s5
    ctx->r12 = ctx->r3 & ctx->r21;
L_80024288:
    // 0x80024288: bne         $t4, $zero, L_800242C8
    if (ctx->r12 != 0) {
        // 0x8002428C: nop
    
            goto L_800242C8;
    }
    // 0x8002428C: nop

    // 0x80024290: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x80024294: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x80024298: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x8002429C: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x800242A0: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800242A4: addu        $s1, $s0, $t9
    ctx->r17 = ADD32(ctx->r16, ctx->r25);
    // 0x800242A8: addu        $a0, $t5, $s4
    ctx->r4 = ADD32(ctx->r13, ctx->r20);
    // 0x800242AC: mflo        $a1
    ctx->r5 = lo;
    // 0x800242B0: sll         $t8, $a1, 4
    ctx->r24 = S32(ctx->r5 << 4);
    // 0x800242B4: jal         0x800148F0
    // 0x800242B8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_800148F0_154F0(rdram, ctx);
        goto after_5;
    // 0x800242B8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_5:
    // 0x800242BC: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x800242C0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800242C4: andi        $a0, $v1, 0x400
    ctx->r4 = ctx->r3 & 0X400;
L_800242C8:
    // 0x800242C8: beq         $a0, $zero, L_800242D8
    if (ctx->r4 == 0) {
        // 0x800242CC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800242D8;
    }
    // 0x800242CC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800242D0: b           L_800242DC
    // 0x800242D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800242DC;
    // 0x800242D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800242D8:
    // 0x800242D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800242DC:
    // 0x800242DC: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800242E0: bnel        $at, $zero, L_80024288
    if (ctx->r1 != 0) {
        // 0x800242E4: and         $t4, $v1, $s5
        ctx->r12 = ctx->r3 & ctx->r21;
            goto L_80024288;
    }
    goto skip_0;
    // 0x800242E4: and         $t4, $v1, $s5
    ctx->r12 = ctx->r3 & ctx->r21;
    skip_0:
    // 0x800242E8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_800242EC:
    // 0x800242EC: jal         0x800248BC
    // 0x800242F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_800248BC_254BC(rdram, ctx);
        goto after_6;
    // 0x800242F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_6:
    // 0x800242F4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800242F8: sw          $v0, 0xD8($t1)
    MEM_W(0XD8, ctx->r9) = ctx->r2;
    // 0x800242FC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80024300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80024304: andi        $a0, $v1, 0x400
    ctx->r4 = ctx->r3 & 0X400;
    // 0x80024308: beq         $a0, $zero, L_80024318
    if (ctx->r4 == 0) {
        // 0x8002430C: nop
    
            goto L_80024318;
    }
    // 0x8002430C: nop

    // 0x80024310: b           L_80024318
    // 0x80024314: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80024318;
    // 0x80024314: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80024318:
    // 0x80024318: blez        $v0, L_80024384
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002431C: and         $t0, $v1, $s5
        ctx->r8 = ctx->r3 & ctx->r21;
            goto L_80024384;
    }
    // 0x8002431C: and         $t0, $v1, $s5
    ctx->r8 = ctx->r3 & ctx->r21;
L_80024320:
    // 0x80024320: bne         $t0, $zero, L_80024360
    if (ctx->r8 != 0) {
        // 0x80024324: nop
    
            goto L_80024360;
    }
    // 0x80024324: nop

    // 0x80024328: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x8002432C: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x80024330: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x80024334: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x80024338: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002433C: addu        $s1, $s0, $t6
    ctx->r17 = ADD32(ctx->r16, ctx->r14);
    // 0x80024340: addu        $a0, $t2, $s4
    ctx->r4 = ADD32(ctx->r10, ctx->r20);
    // 0x80024344: mflo        $a1
    ctx->r5 = lo;
    // 0x80024348: sll         $t5, $a1, 3
    ctx->r13 = S32(ctx->r5 << 3);
    // 0x8002434C: jal         0x800148F0
    // 0x80024350: addiu       $a1, $t5, 0x100
    ctx->r5 = ADD32(ctx->r13, 0X100);
    func_800148F0_154F0(rdram, ctx);
        goto after_7;
    // 0x80024350: addiu       $a1, $t5, 0x100
    ctx->r5 = ADD32(ctx->r13, 0X100);
    after_7:
    // 0x80024354: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x80024358: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8002435C: andi        $a0, $v1, 0x400
    ctx->r4 = ctx->r3 & 0X400;
L_80024360:
    // 0x80024360: beq         $a0, $zero, L_80024370
    if (ctx->r4 == 0) {
        // 0x80024364: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80024370;
    }
    // 0x80024364: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80024368: b           L_80024374
    // 0x8002436C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80024374;
    // 0x8002436C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80024370:
    // 0x80024370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80024374:
    // 0x80024374: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80024378: bnel        $at, $zero, L_80024320
    if (ctx->r1 != 0) {
        // 0x8002437C: and         $t0, $v1, $s5
        ctx->r8 = ctx->r3 & ctx->r21;
            goto L_80024320;
    }
    goto skip_1;
    // 0x8002437C: and         $t0, $v1, $s5
    ctx->r8 = ctx->r3 & ctx->r21;
    skip_1:
    // 0x80024380: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80024384:
    // 0x80024384: jal         0x80024BAC
    // 0x80024388: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_80024BAC_257AC(rdram, ctx);
        goto after_8;
    // 0x80024388: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_8:
    // 0x8002438C: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    // 0x80024390: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80024394: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80024398: addiu       $a1, $a3, 0x2
    ctx->r5 = ADD32(ctx->r7, 0X2);
    // 0x8002439C: blez        $a1, L_8002448C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800243A0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8002448C;
    }
    // 0x800243A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800243A4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x800243A8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800243AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800243B0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_800243B4:
    // 0x800243B4: blez        $a0, L_8002447C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800243B8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8002447C;
    }
    // 0x800243B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800243BC: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
L_800243C0:
    // 0x800243C0: lw          $t7, 0x58($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X58);
    // 0x800243C4: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x800243C8: addiu       $t0, $t1, 0x2
    ctx->r8 = ADD32(ctx->r9, 0X2);
    // 0x800243CC: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800243D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800243D4: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x800243D8: mflo        $t2
    ctx->r10 = lo;
    // 0x800243DC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800243E0: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x800243E4: swc1        $f0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f0.u32l;
    // 0x800243E8: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x800243EC: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
    // 0x800243F0: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x800243F4: addiu       $t1, $t8, 0x2
    ctx->r9 = ADD32(ctx->r24, 0X2);
    // 0x800243F8: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800243FC: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80024400: mflo        $t0
    ctx->r8 = lo;
    // 0x80024404: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80024408: addu        $t9, $t7, $t2
    ctx->r25 = ADD32(ctx->r15, ctx->r10);
    // 0x8002440C: swc1        $f2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f2.u32l;
    // 0x80024410: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x80024414: lw          $t3, 0x50($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X50);
    // 0x80024418: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x8002441C: addiu       $t8, $t6, 0x2
    ctx->r24 = ADD32(ctx->r14, 0X2);
    // 0x80024420: multu       $v0, $t8
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80024424: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80024428: mflo        $t1
    ctx->r9 = lo;
    // 0x8002442C: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80024430: addu        $t7, $t5, $t0
    ctx->r15 = ADD32(ctx->r13, ctx->r8);
    // 0x80024434: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x80024438: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x8002443C: lw          $t2, 0x54($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X54);
    // 0x80024440: addiu       $t6, $t4, 0x2
    ctx->r14 = ADD32(ctx->r12, 0X2);
    // 0x80024444: multu       $v0, $t6
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80024448: addu        $t3, $t2, $t9
    ctx->r11 = ADD32(ctx->r10, ctx->r25);
    // 0x8002444C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80024450: mflo        $t8
    ctx->r24 = lo;
    // 0x80024454: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80024458: addu        $t5, $t3, $t1
    ctx->r13 = ADD32(ctx->r11, ctx->r9);
    // 0x8002445C: swc1        $f0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f0.u32l;
    // 0x80024460: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80024464: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80024468: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8002446C: bnel        $at, $zero, L_800243C0
    if (ctx->r1 != 0) {
        // 0x80024470: lw          $t1, 0x4($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X4);
            goto L_800243C0;
    }
    goto skip_2;
    // 0x80024470: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    skip_2:
    // 0x80024474: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    // 0x80024478: addiu       $a1, $a3, 0x2
    ctx->r5 = ADD32(ctx->r7, 0X2);
L_8002447C:
    // 0x8002447C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80024480: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80024484: bne         $at, $zero, L_800243B4
    if (ctx->r1 != 0) {
        // 0x80024488: nop
    
            goto L_800243B4;
    }
    // 0x80024488: nop

L_8002448C:
    // 0x8002448C: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80024490: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80024494: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80024498: sll         $t0, $a2, 1
    ctx->r8 = S32(ctx->r6 << 1);
    // 0x8002449C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800244A0: addiu       $a2, $t0, 0x2
    ctx->r6 = ADD32(ctx->r8, 0X2);
    // 0x800244A4: blez        $a2, L_8002459C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800244A8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8002459C;
    }
    // 0x800244A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800244AC: addiu       $a1, $a3, 0x1
    ctx->r5 = ADD32(ctx->r7, 0X1);
    // 0x800244B0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
L_800244B4:
    // 0x800244B4: blez        $a1, L_8002458C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800244B8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8002458C;
    }
    // 0x800244B8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800244BC:
    // 0x800244BC: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800244C0: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x800244C4: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x800244C8: subu        $t2, $t2, $v1
    ctx->r10 = SUB32(ctx->r10, ctx->r3);
    // 0x800244CC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800244D0: addu        $t9, $t7, $t2
    ctx->r25 = ADD32(ctx->r15, ctx->r10);
    // 0x800244D4: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x800244D8: subu        $t1, $t1, $v1
    ctx->r9 = SUB32(ctx->r9, ctx->r3);
    // 0x800244DC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800244E0: mflo        $t4
    ctx->r12 = lo;
    // 0x800244E4: nop

    // 0x800244E8: nop

    // 0x800244EC: multu       $t4, $a0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800244F0: mflo        $t6
    ctx->r14 = lo;
    // 0x800244F4: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x800244F8: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
    // 0x800244FC: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x80024500: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    // 0x80024504: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x80024508: addiu       $t7, $t0, 0x1
    ctx->r15 = ADD32(ctx->r8, 0X1);
    // 0x8002450C: multu       $v0, $t7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80024510: addu        $t5, $t3, $t1
    ctx->r13 = ADD32(ctx->r11, ctx->r9);
    // 0x80024514: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x80024518: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002451C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80024520: mflo        $t2
    ctx->r10 = lo;
    // 0x80024524: nop

    // 0x80024528: nop

    // 0x8002452C: multu       $t2, $a0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80024530: mflo        $t4
    ctx->r12 = lo;
    // 0x80024534: addu        $t9, $t5, $t4
    ctx->r25 = ADD32(ctx->r13, ctx->r12);
    // 0x80024538: swc1        $f2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f2.u32l;
    // 0x8002453C: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x80024540: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x80024544: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x80024548: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002454C: addu        $t3, $t6, $t8
    ctx->r11 = ADD32(ctx->r14, ctx->r24);
    // 0x80024550: mflo        $t7
    ctx->r15 = lo;
    // 0x80024554: nop

    // 0x80024558: nop

    // 0x8002455C: multu       $t7, $a0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80024560: mflo        $t2
    ctx->r10 = lo;
    // 0x80024564: addu        $t5, $t3, $t2
    ctx->r13 = ADD32(ctx->r11, ctx->r10);
    // 0x80024568: swc1        $f0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f0.u32l;
    // 0x8002456C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x80024570: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80024574: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80024578: bne         $at, $zero, L_800244BC
    if (ctx->r1 != 0) {
        // 0x8002457C: nop
    
            goto L_800244BC;
    }
    // 0x8002457C: nop

    // 0x80024580: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80024584: sll         $t4, $a2, 1
    ctx->r12 = S32(ctx->r6 << 1);
    // 0x80024588: addiu       $a2, $t4, 0x2
    ctx->r6 = ADD32(ctx->r12, 0X2);
L_8002458C:
    // 0x8002458C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80024590: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80024594: bne         $at, $zero, L_800244B4
    if (ctx->r1 != 0) {
        // 0x80024598: nop
    
            goto L_800244B4;
    }
    // 0x80024598: nop

L_8002459C:
    // 0x8002459C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x800245A0: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x800245A4: addu        $s1, $s0, $t8
    ctx->r17 = ADD32(ctx->r16, ctx->r24);
    // 0x800245A8: andi        $t6, $t9, 0x400
    ctx->r14 = ctx->r25 & 0X400;
    // 0x800245AC: beq         $t6, $zero, L_800245BC
    if (ctx->r14 == 0) {
        // 0x800245B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800245BC;
    }
    // 0x800245B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800245B4: b           L_800245BC
    // 0x800245B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800245BC;
    // 0x800245B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800245BC:
    // 0x800245BC: blezl       $v0, L_80024610
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800245C0: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_80024610;
    }
    goto skip_3;
    // 0x800245C0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    skip_3:
    // 0x800245C4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
L_800245C8:
    // 0x800245C8: lw          $a0, 0x40($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X40);
    // 0x800245CC: jal         0x80040620
    // 0x800245D0: lw          $a1, 0xD8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0XD8);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_9;
    // 0x800245D0: lw          $a1, 0xD8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0XD8);
    after_9:
    // 0x800245D4: lw          $a0, 0x48($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X48);
    // 0x800245D8: jal         0x80040620
    // 0x800245DC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_10;
    // 0x800245DC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_10:
    // 0x800245E0: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x800245E4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800245E8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800245EC: andi        $t7, $t0, 0x400
    ctx->r15 = ctx->r8 & 0X400;
    // 0x800245F0: beq         $t7, $zero, L_80024600
    if (ctx->r15 == 0) {
        // 0x800245F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80024600;
    }
    // 0x800245F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800245F8: b           L_80024600
    // 0x800245FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80024600;
    // 0x800245FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80024600:
    // 0x80024600: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80024604: bnel        $at, $zero, L_800245C8
    if (ctx->r1 != 0) {
        // 0x80024608: lw          $t1, 0x30($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X30);
            goto L_800245C8;
    }
    goto skip_4;
    // 0x80024608: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    skip_4:
    // 0x8002460C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
L_80024610:
    // 0x80024610: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x80024614: lw          $t5, 0x64($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X64);
    // 0x80024618: sw          $t3, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r11;
    // 0x8002461C: ori         $t4, $t5, 0xC0
    ctx->r12 = ctx->r13 | 0XC0;
    // 0x80024620: sw          $t4, 0x64($t2)
    MEM_W(0X64, ctx->r10) = ctx->r12;
    // 0x80024624: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80024628: beq         $a0, $zero, L_80024640
    if (ctx->r4 == 0) {
        // 0x8002462C: nop
    
            goto L_80024640;
    }
    // 0x8002462C: nop

    // 0x80024630: jal         0x8003521C
    // 0x80024634: nop

    func_8003521C_35E1C(rdram, ctx);
        goto after_11;
    // 0x80024634: nop

    after_11:
    // 0x80024638: b           L_80024650
    // 0x8002463C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80024650;
    // 0x8002463C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80024640:
    // 0x80024640: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x80024644: jal         0x8003521C
    // 0x80024648: addiu       $a0, $a0, 0x5B38
    ctx->r4 = ADD32(ctx->r4, 0X5B38);
    func_8003521C_35E1C(rdram, ctx);
        goto after_12;
    // 0x80024648: addiu       $a0, $a0, 0x5B38
    ctx->r4 = ADD32(ctx->r4, 0X5B38);
    after_12:
    // 0x8002464C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80024650:
    // 0x80024650: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80024654: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80024658: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8002465C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80024660: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80024664: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80024668: jr          $ra
    // 0x8002466C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8002466C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80003358_3F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000335C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003360: jal         0x8001F8B0
    // 0x80003364: nop

    func_8001F8B0_204B0(rdram, ctx);
        goto after_0;
    // 0x80003364: nop

    after_0:
    // 0x80003368: jal         0x80034734
    // 0x8000336C: nop

    func_80034734_35334(rdram, ctx);
        goto after_1;
    // 0x8000336C: nop

    after_1:
    // 0x80003370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003378: jr          $ra
    // 0x8000337C: nop

    TRACE_RETURN()
    return;
    // 0x8000337C: nop

;}
RECOMP_FUNC void func_8000E4E4_F0E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E4E4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8000E4E8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8000E4EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E4F0: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x8000E4F4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8000E4F8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8000E4FC: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x8000E500: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000E504: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8000E508: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8000E50C: sub.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x8000E510: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8000E514: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8000E518: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8000E51C: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8000E520: mul.s       $f0, $f2, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000E524: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8000E528: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8000E52C: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x8000E530: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8000E534: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x8000E538: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x8000E53C: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8000E540: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8000E544: mul.s       $f4, $f6, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8000E548: add.s       $f8, $f0, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x8000E54C: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x8000E550: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8000E554: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8000E558: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8000E55C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8000E560: jal         0x800417E0
    // 0x8000E564: div.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x8000E564: div.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    after_0:
    // 0x8000E568: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8000E56C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000E570: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8000E574: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000E578: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x8000E57C: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8000E580: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x8000E584: bc1fl       L_8000E59C
    if (!c1cs) {
        // 0x8000E588: lwc1        $f6, 0x20($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
            goto L_8000E59C;
    }
    goto skip_0;
    // 0x8000E588: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x8000E58C: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000E590: neg.s       $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = -ctx->f10.fl;
    // 0x8000E594: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x8000E598: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
L_8000E59C:
    // 0x8000E59C: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E5A0: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x8000E5A4: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8000E5A8: jal         0x800417E0
    // 0x8000E5AC: div.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f10.fl);
    _nsqrtf(rdram, ctx);
        goto after_1;
    // 0x8000E5AC: div.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f10.fl);
    after_1:
    // 0x8000E5B0: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000E5B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000E5B8: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x8000E5BC: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x8000E5C0: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x8000E5C4: bc1fl       L_8000E5DC
    if (!c1cs) {
        // 0x8000E5C8: lwc1        $f10, 0x24($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
            goto L_8000E5DC;
    }
    goto skip_1;
    // 0x8000E5C8: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x8000E5CC: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000E5D0: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x8000E5D4: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8000E5D8: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
L_8000E5DC:
    // 0x8000E5DC: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000E5E0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E5E4: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8000E5E8: jal         0x800417E0
    // 0x8000E5EC: div.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    _nsqrtf(rdram, ctx);
        goto after_2;
    // 0x8000E5EC: div.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    after_2:
    // 0x8000E5F0: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x8000E5F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000E5F8: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x8000E5FC: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000E600: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8000E604: nop

    // 0x8000E608: bc1fl       L_8000E620
    if (!c1cs) {
        // 0x8000E60C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000E620;
    }
    goto skip_2;
    // 0x8000E60C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8000E610: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000E614: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x8000E618: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8000E61C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000E620:
    // 0x8000E620: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8000E624: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000E628: jr          $ra
    // 0x8000E62C: nop

    TRACE_RETURN()
    return;
    // 0x8000E62C: nop

;}
RECOMP_FUNC void func_800369F0_375F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800369F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800369F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800369F8: jal         0x80036A28
    // 0x800369FC: nop

    func_80036A28_37628(rdram, ctx);
        goto after_0;
    // 0x800369FC: nop

    after_0:
    // 0x80036A00: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80036A04: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80036A08: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80036A0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80036A10: lw          $t7, -0x4FEC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4FEC);
    // 0x80036A14: sb          $zero, 0x10($t7)
    MEM_B(0X10, ctx->r15) = 0;
    // 0x80036A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036A20: jr          $ra
    // 0x80036A24: nop

    TRACE_RETURN()
    return;
    // 0x80036A24: nop

;}
RECOMP_FUNC void alFilterNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800518C0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x800518C4: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x800518C8: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x800518CC: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
    // 0x800518D0: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x800518D4: jr          $ra
    // 0x800518D8: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x800518D8: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
;}
RECOMP_FUNC void func_8003BE24_3CA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BE24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BE28: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003BE2C: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x8003BE30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BE34: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003BE38: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x8003BE3C: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x8003BE40: sb          $t7, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r15;
    // 0x8003BE44: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003BE48: lbu         $t0, 0x5B($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X5B);
    // 0x8003BE4C: lhu         $t8, 0x58($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X58);
    // 0x8003BE50: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8003BE54: sb          $t1, 0x5B($v0)
    MEM_B(0X5B, ctx->r2) = ctx->r9;
    // 0x8003BE58: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003BE5C: andi        $a1, $t8, 0x8000
    ctx->r5 = ctx->r24 & 0X8000;
    // 0x8003BE60: lbu         $t2, 0x5B($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X5B);
    // 0x8003BE64: beql        $t2, $zero, L_8003BEA8
    if (ctx->r10 == 0) {
        // 0x8003BE68: lbu         $t5, 0x5A($v0)
        ctx->r13 = MEM_BU(ctx->r2, 0X5A);
            goto L_8003BEA8;
    }
    goto skip_0;
    // 0x8003BE68: lbu         $t5, 0x5A($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X5A);
    skip_0:
    // 0x8003BE6C: lhu         $v1, 0x58($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X58);
    // 0x8003BE70: lh          $t4, 0x5C($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X5C);
    // 0x8003BE74: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x8003BE78: andi        $t3, $v1, 0x7FFF
    ctx->r11 = ctx->r3 & 0X7FFF;
    // 0x8003BE7C: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x8003BE80: bgez        $v1, L_8003BE90
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8003BE84: slt         $at, $v1, $at
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r1) ? 1 : 0;
            goto L_8003BE90;
    }
    // 0x8003BE84: slt         $at, $v1, $at
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8003BE88: b           L_8003BE9C
    // 0x8003BE8C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_8003BE9C;
    // 0x8003BE8C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8003BE90:
    // 0x8003BE90: bne         $at, $zero, L_8003BE9C
    if (ctx->r1 != 0) {
        // 0x8003BE94: nop
    
            goto L_8003BE9C;
    }
    // 0x8003BE94: nop

    // 0x8003BE98: addiu       $v1, $zero, 0x7F00
    ctx->r3 = ADD32(0, 0X7F00);
L_8003BE9C:
    // 0x8003BE9C: b           L_8003BEB0
    // 0x8003BEA0: sh          $v1, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r3;
        goto L_8003BEB0;
    // 0x8003BEA0: sh          $v1, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r3;
    // 0x8003BEA4: lbu         $t5, 0x5A($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X5A);
L_8003BEA8:
    // 0x8003BEA8: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8003BEAC: sh          $t6, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r14;
L_8003BEB0:
    // 0x8003BEB0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003BEB4: lhu         $t7, 0x58($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X58);
    // 0x8003BEB8: or          $t8, $t7, $a1
    ctx->r24 = ctx->r15 | ctx->r5;
    // 0x8003BEBC: jal         0x8003BCFC
    // 0x8003BEC0: sh          $t8, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r24;
    func_8003BCFC_3C8FC(rdram, ctx);
        goto after_0;
    // 0x8003BEC0: sh          $t8, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r24;
    after_0:
    // 0x8003BEC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BEC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BECC: jr          $ra
    // 0x8003BED0: nop

    TRACE_RETURN()
    return;
    // 0x8003BED0: nop

;}
RECOMP_FUNC void func_8000C4FC_D0FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C4FC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C500: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C504: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C508: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C50C: beq         $v0, $zero, L_8000C534
    if (ctx->r2 == 0) {
        // 0x8000C510: nop
    
            goto L_8000C534;
    }
    // 0x8000C510: nop

    // 0x8000C514: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x8000C518: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8000C51C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000C520: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x8000C524: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x8000C528: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x8000C52C: sw          $t1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r9;
    // 0x8000C530: sw          $t0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r8;
L_8000C534:
    // 0x8000C534: jr          $ra
    // 0x8000C538: nop

    TRACE_RETURN()
    return;
    // 0x8000C538: nop

;}
RECOMP_FUNC void func_80011760_12360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80011760: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80011764: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80011768: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8001176C: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x80011770: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80011774: beq         $v0, $zero, L_8001183C
    if (ctx->r2 == 0) {
        // 0x80011778: addiu       $v1, $v1, 0x5C
        ctx->r3 = ADD32(ctx->r3, 0X5C);
            goto L_8001183C;
    }
    // 0x80011778: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x8001177C: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80011780: lhu         $t8, 0x14($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X14);
    // 0x80011784: lhu         $t7, 0x28($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X28);
    // 0x80011788: lhu         $t2, 0x16($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X16);
    // 0x8001178C: lhu         $t6, 0x18($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X18);
    // 0x80011790: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80011794: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x80011798: sh          $t0, 0x28($v1)
    MEM_H(0X28, ctx->r3) = ctx->r8;
    // 0x8001179C: lhu         $t1, 0x2A($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X2A);
    // 0x800117A0: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x800117A4: addiu       $t0, $sp, 0x3C
    ctx->r8 = ADD32(ctx->r29, 0X3C);
    // 0x800117A8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800117AC: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x800117B0: sh          $t4, 0x2A($v1)
    MEM_H(0X2A, ctx->r3) = ctx->r12;
    // 0x800117B4: lhu         $t5, 0x2C($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X2C);
    // 0x800117B8: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x800117BC: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    // 0x800117C0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800117C4: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x800117C8: sh          $t8, 0x2C($v1)
    MEM_H(0X2C, ctx->r3) = ctx->r24;
    // 0x800117CC: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x800117D0: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x800117D4: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x800117D8: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x800117DC: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x800117E0: lhu         $a2, 0x2C($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X2C);
    // 0x800117E4: lhu         $a1, 0x2A($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X2A);
    // 0x800117E8: lhu         $a0, 0x28($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X28);
    // 0x800117EC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x800117F0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800117F4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800117F8: jal         0x80033898
    // 0x800117FC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x800117FC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x80011800: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80011804: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80011808: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8001180C: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80011810: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80011814: swc1        $f18, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f18.u32l;
    // 0x80011818: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001181C: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80011820: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80011824: swc1        $f8, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f8.u32l;
    // 0x80011828: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8001182C: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80011830: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80011834: b           L_8001186C
    // 0x80011838: swc1        $f18, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f18.u32l;
        goto L_8001186C;
    // 0x80011838: swc1        $f18, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f18.u32l;
L_8001183C:
    // 0x8001183C: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80011840: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80011844: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80011848: lhu         $t1, 0x14($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X14);
    // 0x8001184C: lhu         $t2, 0x16($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X16);
    // 0x80011850: lhu         $t3, 0x18($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X18);
    // 0x80011854: swc1        $f4, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f4.u32l;
    // 0x80011858: swc1        $f6, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f6.u32l;
    // 0x8001185C: swc1        $f8, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f8.u32l;
    // 0x80011860: sh          $t1, 0x28($v1)
    MEM_H(0X28, ctx->r3) = ctx->r9;
    // 0x80011864: sh          $t2, 0x2A($v1)
    MEM_H(0X2A, ctx->r3) = ctx->r10;
    // 0x80011868: sh          $t3, 0x2C($v1)
    MEM_H(0X2C, ctx->r3) = ctx->r11;
L_8001186C:
    // 0x8001186C: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x80011870: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x80011874: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80011878: lw          $v0, 0x18($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X18);
    // 0x8001187C: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    // 0x80011880: beql        $v0, $zero, L_800118FC
    if (ctx->r2 == 0) {
        // 0x80011884: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800118FC;
    }
    goto skip_0;
    // 0x80011884: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80011888: lbu         $a0, 0x4($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X4);
L_8001188C:
    // 0x8001188C: beql        $a0, $a2, L_800118F0
    if (ctx->r4 == ctx->r6) {
        // 0x80011890: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_800118F0;
    }
    goto skip_1;
    // 0x80011890: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    skip_1:
    // 0x80011894: bnel        $a0, $a3, L_800118F0
    if (ctx->r4 != ctx->r7) {
        // 0x80011898: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_800118F0;
    }
    goto skip_2;
    // 0x80011898: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    skip_2:
    // 0x8001189C: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x800118A0: lhu         $t5, 0x14($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X14);
    // 0x800118A4: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x800118A8: lwc1        $f16, 0x20($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X20);
    // 0x800118AC: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x800118B0: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x800118B4: beq         $a1, $t5, L_800118C4
    if (ctx->r5 == ctx->r13) {
        // 0x800118B8: swc1        $f18, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
            goto L_800118C4;
    }
    // 0x800118B8: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x800118BC: lhu         $t6, 0x28($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X28);
    // 0x800118C0: sh          $t6, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r14;
L_800118C4:
    // 0x800118C4: lhu         $t7, 0x16($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X16);
    // 0x800118C8: beql        $a1, $t7, L_800118DC
    if (ctx->r5 == ctx->r15) {
        // 0x800118CC: lhu         $t9, 0x18($v0)
        ctx->r25 = MEM_HU(ctx->r2, 0X18);
            goto L_800118DC;
    }
    goto skip_3;
    // 0x800118CC: lhu         $t9, 0x18($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X18);
    skip_3:
    // 0x800118D0: lhu         $t8, 0x2A($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2A);
    // 0x800118D4: sh          $t8, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r24;
    // 0x800118D8: lhu         $t9, 0x18($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X18);
L_800118DC:
    // 0x800118DC: beql        $a1, $t9, L_800118F0
    if (ctx->r5 == ctx->r25) {
        // 0x800118E0: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_800118F0;
    }
    goto skip_4;
    // 0x800118E0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    skip_4:
    // 0x800118E4: lhu         $t0, 0x2C($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X2C);
    // 0x800118E8: sh          $t0, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r8;
    // 0x800118EC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_800118F0:
    // 0x800118F0: bnel        $v0, $zero, L_8001188C
    if (ctx->r2 != 0) {
        // 0x800118F4: lbu         $a0, 0x4($v0)
        ctx->r4 = MEM_BU(ctx->r2, 0X4);
            goto L_8001188C;
    }
    goto skip_5;
    // 0x800118F4: lbu         $a0, 0x4($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X4);
    skip_5:
    // 0x800118F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800118FC:
    // 0x800118FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80011900: jr          $ra
    // 0x80011904: nop

    TRACE_RETURN()
    return;
    // 0x80011904: nop

;}
RECOMP_FUNC void func_8001F6C8_202C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001F6C8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001F6CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001F6D0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8001F6D4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8001F6D8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8001F6DC: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8001F6E0: lhu         $t3, 0x0($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X0);
    // 0x8001F6E4: andi        $t6, $a3, 0xFFFF
    ctx->r14 = ctx->r7 & 0XFFFF;
    // 0x8001F6E8: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x8001F6EC: subu        $t0, $t3, $t6
    ctx->r8 = SUB32(ctx->r11, ctx->r14);
    // 0x8001F6F0: andi        $t8, $t0, 0x200
    ctx->r24 = ctx->r8 & 0X200;
    // 0x8001F6F4: beq         $t8, $zero, L_8001F704
    if (ctx->r24 == 0) {
        // 0x8001F6F8: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_8001F704;
    }
    // 0x8001F6F8: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x8001F6FC: b           L_8001F708
    // 0x8001F700: subu        $v0, $t6, $v1
    ctx->r2 = SUB32(ctx->r14, ctx->r3);
        goto L_8001F708;
    // 0x8001F700: subu        $v0, $t6, $v1
    ctx->r2 = SUB32(ctx->r14, ctx->r3);
L_8001F704:
    // 0x8001F704: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_8001F708:
    // 0x8001F708: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8001F70C: lhu         $a3, 0x52($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X52);
    // 0x8001F710: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x8001F714: lhu         $v1, 0x0($t4)
    ctx->r3 = MEM_HU(ctx->r12, 0X0);
    // 0x8001F718: andi        $t9, $t2, 0x3FF
    ctx->r25 = ctx->r10 & 0X3FF;
    // 0x8001F71C: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x8001F720: subu        $a0, $v1, $a3
    ctx->r4 = SUB32(ctx->r3, ctx->r7);
    // 0x8001F724: andi        $t5, $a0, 0x200
    ctx->r13 = ctx->r4 & 0X200;
    // 0x8001F728: beq         $t5, $zero, L_8001F738
    if (ctx->r13 == 0) {
        // 0x8001F72C: lw          $t9, 0x48($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X48);
            goto L_8001F738;
    }
    // 0x8001F72C: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8001F730: b           L_8001F73C
    // 0x8001F734: subu        $v0, $a3, $v1
    ctx->r2 = SUB32(ctx->r7, ctx->r3);
        goto L_8001F73C;
    // 0x8001F734: subu        $v0, $a3, $v1
    ctx->r2 = SUB32(ctx->r7, ctx->r3);
L_8001F738:
    // 0x8001F738: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8001F73C:
    // 0x8001F73C: lhu         $v1, 0x0($t9)
    ctx->r3 = MEM_HU(ctx->r25, 0X0);
    // 0x8001F740: lhu         $t0, 0x56($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X56);
    // 0x8001F744: andi        $t7, $v0, 0x3FF
    ctx->r15 = ctx->r2 & 0X3FF;
    // 0x8001F748: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x8001F74C: subu        $a0, $v1, $t0
    ctx->r4 = SUB32(ctx->r3, ctx->r8);
    // 0x8001F750: andi        $t8, $t2, 0xFFFF
    ctx->r24 = ctx->r10 & 0XFFFF;
    // 0x8001F754: andi        $t4, $a0, 0x200
    ctx->r12 = ctx->r4 & 0X200;
    // 0x8001F758: beq         $t4, $zero, L_8001F768
    if (ctx->r12 == 0) {
        // 0x8001F75C: or          $t2, $t8, $zero
        ctx->r10 = ctx->r24 | 0;
            goto L_8001F768;
    }
    // 0x8001F75C: or          $t2, $t8, $zero
    ctx->r10 = ctx->r24 | 0;
    // 0x8001F760: b           L_8001F76C
    // 0x8001F764: subu        $v0, $t0, $v1
    ctx->r2 = SUB32(ctx->r8, ctx->r3);
        goto L_8001F76C;
    // 0x8001F764: subu        $v0, $t0, $v1
    ctx->r2 = SUB32(ctx->r8, ctx->r3);
L_8001F768:
    // 0x8001F768: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8001F76C:
    // 0x8001F76C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8001F770: sh          $t3, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r11;
    // 0x8001F774: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8001F778: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8001F77C: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x8001F780: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x8001F784: sh          $t9, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r25;
    // 0x8001F788: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x8001F78C: sh          $t7, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r15;
    // 0x8001F790: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8001F794: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8001F798: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x8001F79C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8001F7A0: addiu       $a1, $sp, 0x36
    ctx->r5 = ADD32(ctx->r29, 0X36);
    // 0x8001F7A4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x8001F7A8: jal         0x8001F878
    // 0x8001F7AC: sh          $t5, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r13;
    func_8001F878_20478(rdram, ctx);
        goto after_0;
    // 0x8001F7AC: sh          $t5, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r13;
    after_0:
    // 0x8001F7B0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8001F7B4: lhu         $v1, 0x38($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X38);
    // 0x8001F7B8: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8001F7BC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F7C0: subu        $a0, $v1, $t1
    ctx->r4 = SUB32(ctx->r3, ctx->r9);
    // 0x8001F7C4: andi        $t6, $a0, 0x200
    ctx->r14 = ctx->r4 & 0X200;
    // 0x8001F7C8: beq         $t6, $zero, L_8001F7D8
    if (ctx->r14 == 0) {
        // 0x8001F7CC: lhu         $t2, 0x3E($sp)
        ctx->r10 = MEM_HU(ctx->r29, 0X3E);
            goto L_8001F7D8;
    }
    // 0x8001F7CC: lhu         $t2, 0x3E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X3E);
    // 0x8001F7D0: b           L_8001F7DC
    // 0x8001F7D4: subu        $v0, $t1, $v1
    ctx->r2 = SUB32(ctx->r9, ctx->r3);
        goto L_8001F7DC;
    // 0x8001F7D4: subu        $v0, $t1, $v1
    ctx->r2 = SUB32(ctx->r9, ctx->r3);
L_8001F7D8:
    // 0x8001F7D8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8001F7DC:
    // 0x8001F7DC: lhu         $a0, 0x36($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X36);
    // 0x8001F7E0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8001F7E4: andi        $t7, $v1, 0x3FF
    ctx->r15 = ctx->r3 & 0X3FF;
    // 0x8001F7E8: subu        $a1, $a0, $a3
    ctx->r5 = SUB32(ctx->r4, ctx->r7);
    // 0x8001F7EC: andi        $t8, $a1, 0x200
    ctx->r24 = ctx->r5 & 0X200;
    // 0x8001F7F0: beq         $t8, $zero, L_8001F800
    if (ctx->r24 == 0) {
        // 0x8001F7F4: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_8001F800;
    }
    // 0x8001F7F4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x8001F7F8: b           L_8001F804
    // 0x8001F7FC: subu        $v0, $a3, $a0
    ctx->r2 = SUB32(ctx->r7, ctx->r4);
        goto L_8001F804;
    // 0x8001F7FC: subu        $v0, $a3, $a0
    ctx->r2 = SUB32(ctx->r7, ctx->r4);
L_8001F800:
    // 0x8001F800: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8001F804:
    // 0x8001F804: lhu         $a0, 0x34($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X34);
    // 0x8001F808: andi        $t4, $v0, 0x3FF
    ctx->r12 = ctx->r2 & 0X3FF;
    // 0x8001F80C: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x8001F810: subu        $a1, $a0, $t0
    ctx->r5 = SUB32(ctx->r4, ctx->r8);
    // 0x8001F814: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x8001F818: andi        $t6, $a1, 0x200
    ctx->r14 = ctx->r5 & 0X200;
    // 0x8001F81C: beq         $t6, $zero, L_8001F82C
    if (ctx->r14 == 0) {
        // 0x8001F820: or          $v1, $t5, $zero
        ctx->r3 = ctx->r13 | 0;
            goto L_8001F82C;
    }
    // 0x8001F820: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x8001F824: b           L_8001F830
    // 0x8001F828: subu        $v0, $t0, $a0
    ctx->r2 = SUB32(ctx->r8, ctx->r4);
        goto L_8001F830;
    // 0x8001F828: subu        $v0, $t0, $a0
    ctx->r2 = SUB32(ctx->r8, ctx->r4);
L_8001F82C:
    // 0x8001F82C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8001F830:
    // 0x8001F830: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x8001F834: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x8001F838: andi        $t9, $v1, 0xFFFF
    ctx->r25 = ctx->r3 & 0XFFFF;
    // 0x8001F83C: slt         $at, $t2, $t9
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8001F840: bne         $at, $zero, L_8001F868
    if (ctx->r1 != 0) {
        // 0x8001F844: lhu         $t4, 0x38($sp)
        ctx->r12 = MEM_HU(ctx->r29, 0X38);
            goto L_8001F868;
    }
    // 0x8001F844: lhu         $t4, 0x38($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X38);
    // 0x8001F848: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8001F84C: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x8001F850: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8001F854: lhu         $t6, 0x36($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X36);
    // 0x8001F858: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x8001F85C: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8001F860: lhu         $t8, 0x34($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X34);
    // 0x8001F864: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
L_8001F868:
    // 0x8001F868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001F86C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8001F870: jr          $ra
    // 0x8001F874: nop

    TRACE_RETURN()
    return;
    // 0x8001F874: nop

;}
RECOMP_FUNC void func_80036660_37260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036660: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80036664: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80036668: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003666C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80036670: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80036674: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80036678: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x8003667C: lui         $s3, 0x8017
    ctx->r19 = S32(0X8017 << 16);
    // 0x80036680: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80036684: beq         $s0, $zero, L_800366E8
    if (ctx->r16 == 0) {
        // 0x80036688: addiu       $s3, $s3, -0x2540
        ctx->r19 = ADD32(ctx->r19, -0X2540);
            goto L_800366E8;
    }
    // 0x80036688: addiu       $s3, $s3, -0x2540
    ctx->r19 = ADD32(ctx->r19, -0X2540);
    // 0x8003668C: lui         $s2, 0x8017
    ctx->r18 = S32(0X8017 << 16);
    // 0x80036690: addiu       $s2, $s2, -0x2528
    ctx->r18 = ADD32(ctx->r18, -0X2528);
    // 0x80036694: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
L_80036698:
    // 0x80036698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003669C: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x800366A0: lbu         $a1, 0x4($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X4);
    // 0x800366A4: andi        $t7, $a1, 0x7F
    ctx->r15 = ctx->r5 & 0X7F;
    // 0x800366A8: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x800366AC: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800366B0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800366B4: addu        $v1, $s3, $t0
    ctx->r3 = ADD32(ctx->r19, ctx->r8);
    // 0x800366B8: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x800366BC: sll         $t2, $t9, 1
    ctx->r10 = S32(ctx->r25 << 1);
    // 0x800366C0: addu        $v0, $s2, $t2
    ctx->r2 = ADD32(ctx->r18, ctx->r10);
    // 0x800366C4: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x800366C8: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x800366CC: sw          $s0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r16;
    // 0x800366D0: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800366D4: jal         0x80036308
    // 0x800366D8: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    func_80036308_36F08(rdram, ctx);
        goto after_0;
    // 0x800366D8: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    after_0:
    // 0x800366DC: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x800366E0: bnel        $s0, $zero, L_80036698
    if (ctx->r16 != 0) {
        // 0x800366E4: lw          $t6, 0x0($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X0);
            goto L_80036698;
    }
    goto skip_0;
    // 0x800366E4: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    skip_0:
L_800366E8:
    // 0x800366E8: lbu         $a1, 0x4($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X4);
    // 0x800366EC: lui         $s3, 0x8017
    ctx->r19 = S32(0X8017 << 16);
    // 0x800366F0: addiu       $s3, $s3, -0x2540
    ctx->r19 = ADD32(ctx->r19, -0X2540);
    // 0x800366F4: andi        $t5, $a1, 0x7F
    ctx->r13 = ctx->r5 & 0X7F;
    // 0x800366F8: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x800366FC: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80036700: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80036704: addu        $v1, $s3, $t8
    ctx->r3 = ADD32(ctx->r19, ctx->r24);
    // 0x80036708: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8003670C: lui         $s2, 0x8017
    ctx->r18 = S32(0X8017 << 16);
    // 0x80036710: addiu       $s2, $s2, -0x2528
    ctx->r18 = ADD32(ctx->r18, -0X2528);
    // 0x80036714: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x80036718: lh          $t0, 0x4($s2)
    ctx->r8 = MEM_H(ctx->r18, 0X4);
    // 0x8003671C: sw          $s1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r17;
    // 0x80036720: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80036724: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80036728: jal         0x80036308
    // 0x8003672C: sh          $t1, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r9;
    func_80036308_36F08(rdram, ctx);
        goto after_1;
    // 0x8003672C: sh          $t1, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r9;
    after_1:
    // 0x80036730: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80036734: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80036738: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003673C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80036740: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80036744: jr          $ra
    // 0x80036748: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80036748: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003D058_3DC58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003D05C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D060: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003D064: addiu       $a0, $a0, -0x2FE4
    ctx->r4 = ADD32(ctx->r4, -0X2FE4);
    // 0x8003D068: jal         0x80034B24
    // 0x8003D06C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034B24_35724(rdram, ctx);
        goto after_0;
    // 0x8003D06C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8003D070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D074: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003D078: jr          $ra
    // 0x8003D07C: nop

    TRACE_RETURN()
    return;
    // 0x8003D07C: nop

;}
RECOMP_FUNC void func_800159B0_165B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800159B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800159B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800159B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800159BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800159C0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800159C4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800159C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800159CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800159D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800159D4: jal         0x80016358
    // 0x800159D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80016358_16F58(rdram, ctx);
        goto after_0;
    // 0x800159D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800159DC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800159E0: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x800159E4: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x800159E8: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800159EC: mflo        $t8
    ctx->r24 = lo;
    // 0x800159F0: bltzl       $t8, L_80015A98
    if (SIGNED(ctx->r24) < 0) {
        // 0x800159F4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80015A98;
    }
    goto skip_0;
    // 0x800159F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_800159F8:
    // 0x800159F8: jal         0x80015BB0
    // 0x800159FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80015BB0_167B0(rdram, ctx);
        goto after_1;
    // 0x800159FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80015A00: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80015A04: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x80015A08: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80015A0C: multu       $v1, $t9
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80015A10: mflo        $a0
    ctx->r4 = lo;
    // 0x80015A14: slt         $at, $s1, $a0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80015A18: beql        $at, $zero, L_80015A8C
    if (ctx->r1 == 0) {
        // 0x80015A1C: slt         $at, $s1, $a0
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80015A8C;
    }
    goto skip_1;
    // 0x80015A1C: slt         $at, $s1, $a0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
    skip_1:
    // 0x80015A20: div         $zero, $s1, $v1
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r3)));
    // 0x80015A24: mfhi        $s2
    ctx->r18 = hi;
    // 0x80015A28: mflo        $s3
    ctx->r19 = lo;
    // 0x80015A2C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80015A30: bne         $v1, $zero, L_80015A3C
    if (ctx->r3 != 0) {
        // 0x80015A34: nop
    
            goto L_80015A3C;
    }
    // 0x80015A34: nop

    // 0x80015A38: break       7
    do_break(2147572280);
L_80015A3C:
    // 0x80015A3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80015A40: bne         $v1, $at, L_80015A54
    if (ctx->r3 != ctx->r1) {
        // 0x80015A44: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80015A54;
    }
    // 0x80015A44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80015A48: bne         $s1, $at, L_80015A54
    if (ctx->r17 != ctx->r1) {
        // 0x80015A4C: nop
    
            goto L_80015A54;
    }
    // 0x80015A4C: nop

    // 0x80015A50: break       6
    do_break(2147572304);
L_80015A54:
    // 0x80015A54: jal         0x80014CC4
    // 0x80015A58: nop

    func_80014CC4_158C4(rdram, ctx);
        goto after_2;
    // 0x80015A58: nop

    after_2:
    // 0x80015A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80015A60: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80015A64: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80015A68: jal         0x80015C24
    // 0x80015A6C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_80015C24_16824(rdram, ctx);
        goto after_3;
    // 0x80015A6C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_3:
    // 0x80015A70: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80015A74: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x80015A78: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80015A7C: mflo        $a0
    ctx->r4 = lo;
    // 0x80015A80: nop

    // 0x80015A84: nop

    // 0x80015A88: slt         $at, $s1, $a0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
L_80015A8C:
    // 0x80015A8C: bne         $at, $zero, L_800159F8
    if (ctx->r1 != 0) {
        // 0x80015A90: nop
    
            goto L_800159F8;
    }
    // 0x80015A90: nop

    // 0x80015A94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80015A98:
    // 0x80015A98: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80015A9C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80015AA0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80015AA4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80015AA8: jr          $ra
    // 0x80015AAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80015AAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80007D40_8940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007D40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007D44: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80007D48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007D4C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80007D50: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80007D54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80007D58: lui         $a1, 0xC
    ctx->r5 = S32(0XC << 16);
L_80007D5C:
    // 0x80007D5C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80007D60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80007D64: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80007D68: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x80007D6C: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80007D70: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80007D74: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80007D78: sw          $a0, 0x5F38($t8)
    MEM_W(0X5F38, ctx->r24) = ctx->r4;
    // 0x80007D7C: bne         $at, $zero, L_80007D5C
    if (ctx->r1 != 0) {
        // 0x80007D80: addiu       $a0, $a0, 0x20
        ctx->r4 = ADD32(ctx->r4, 0X20);
            goto L_80007D5C;
    }
    // 0x80007D80: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80007D84: lui         $a1, 0x8015
    ctx->r5 = S32(0X8015 << 16);
    // 0x80007D88: addiu       $a1, $a1, 0x29D8
    ctx->r5 = ADD32(ctx->r5, 0X29D8);
    // 0x80007D8C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80007D90: jal         0x80007970
    // 0x80007D94: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    func_80007970_8570(rdram, ctx);
        goto after_0;
    // 0x80007D94: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    after_0:
    // 0x80007D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80007DA0: jr          $ra
    // 0x80007DA4: nop

    TRACE_RETURN()
    return;
    // 0x80007DA4: nop

;}
RECOMP_FUNC void func_800372E8_37EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800372E8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x800372EC: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x800372F0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800372F4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800372F8: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x800372FC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80037300: sb          $t6, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r14;
    // 0x80037304: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80037308: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8003730C: addiu       $t8, $zero, 0x226
    ctx->r24 = ADD32(0, 0X226);
    // 0x80037310: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80037314: jr          $ra
    // 0x80037318: sh          $t8, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x80037318: sh          $t8, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void func_80035214_35E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035214: jr          $ra
    // 0x80035218: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80035218: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void alInit(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004767C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80047680: addiu       $v0, $v0, -0x5DD0
    ctx->r2 = ADD32(ctx->r2, -0X5DD0);
    // 0x80047684: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80047688: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004768C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047690: bnel        $t6, $zero, L_800476A4
    if (ctx->r14 != 0) {
        // 0x80047694: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800476A4;
    }
    goto skip_0;
    // 0x80047694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80047698: jal         0x80047C30
    // 0x8004769C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    alSynNew(rdram, ctx);
        goto after_0;
    // 0x8004769C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    after_0:
    // 0x800476A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800476A4:
    // 0x800476A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800476A8: jr          $ra
    // 0x800476AC: nop

    TRACE_RETURN()
    return;
    // 0x800476AC: nop

;}
RECOMP_FUNC void func_8000F6E8_102E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000F6E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000F6EC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8000F6F0: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8000F6F4: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000F6F8: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000F6FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000F700: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000F704: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8000F708: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8000F70C: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8000F710: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000F714: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8000F718: jal         0x8000FE1C
    // 0x8000F71C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000FE1C_10A1C(rdram, ctx);
        goto after_0;
    // 0x8000F71C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8000F720: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000F724: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000F728: jr          $ra
    // 0x8000F72C: nop

    TRACE_RETURN()
    return;
    // 0x8000F72C: nop

;}
RECOMP_FUNC void func_80016684_17284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80016684: sra         $t6, $a1, 3
    ctx->r14 = S32(SIGNED(ctx->r5) >> 3);
    // 0x80016688: addu        $v0, $t6, $a0
    ctx->r2 = ADD32(ctx->r14, ctx->r4);
    // 0x8001668C: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80016690: andi        $t8, $a1, 0x7
    ctx->r24 = ctx->r5 & 0X7;
    // 0x80016694: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80016698: sllv        $t0, $t9, $t8
    ctx->r8 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x8001669C: nor         $t1, $t0, $zero
    ctx->r9 = ~(ctx->r8 | 0);
    // 0x800166A0: and         $t2, $t7, $t1
    ctx->r10 = ctx->r15 & ctx->r9;
    // 0x800166A4: jr          $ra
    // 0x800166A8: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    TRACE_RETURN()
    return;
    // 0x800166A8: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
;}
RECOMP_FUNC void func_8002E2E8_2EEE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002E2E8: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x8002E2EC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002E2F0: lwc1        $f4, -0x3BA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3BA8);
    // 0x8002E2F4: swc1        $f12, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f12.u32l;
    // 0x8002E2F8: swc1        $f14, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f14.u32l;
    // 0x8002E2FC: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x8002E300: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002E304: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x8002E308: lw          $a0, 0xF0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF0);
    // 0x8002E30C: lwc1        $f6, -0x3BA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3BA4);
    // 0x8002E310: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002E314: lwc1        $f2, 0xD4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8002E318: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8002E31C: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x8002E320: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x8002E324: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x8002E328: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x8002E32C: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x8002E330: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8002E334: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x8002E338: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x8002E33C: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x8002E340: sdc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X28, ctx->r29);
    // 0x8002E344: sdc1        $f28, 0x20($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X20, ctx->r29);
    // 0x8002E348: sdc1        $f26, 0x18($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X18, ctx->r29);
    // 0x8002E34C: sdc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X10, ctx->r29);
    // 0x8002E350: sdc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X8, ctx->r29);
    // 0x8002E354: sdc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X0, ctx->r29);
    // 0x8002E358: sw          $a3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r7;
    // 0x8002E35C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002E360: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8002E364: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8002E368: lw          $s0, 0xF4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XF4);
    // 0x8002E36C: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
    // 0x8002E370: lw          $s2, 0xEC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XEC);
    // 0x8002E374: addiu       $s3, $zero, 0x14
    ctx->r19 = ADD32(0, 0X14);
    // 0x8002E378: ori         $t4, $zero, 0xFFFF
    ctx->r12 = 0 | 0XFFFF;
    // 0x8002E37C: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x8002E380: or          $t5, $a0, $zero
    ctx->r13 = ctx->r4 | 0;
    // 0x8002E384: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x8002E388: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x8002E38C: swc1        $f2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f2.u32l;
    // 0x8002E390: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
L_8002E394:
    // 0x8002E394: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002E398: lwc1        $f0, 0xE8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x8002E39C: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8002E3A0: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8002E3A4: mflo        $t6
    ctx->r14 = lo;
    // 0x8002E3A8: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x8002E3AC: lhu         $a2, 0x0($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X0);
    // 0x8002E3B0: multu       $v0, $s1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002E3B4: mflo        $a1
    ctx->r5 = lo;
    // 0x8002E3B8: addu        $t1, $a0, $a1
    ctx->r9 = ADD32(ctx->r4, ctx->r5);
    // 0x8002E3BC: lh          $t7, 0x6($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X6);
    // 0x8002E3C0: addu        $a3, $t5, $a1
    ctx->r7 = ADD32(ctx->r13, ctx->r5);
    // 0x8002E3C4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8002E3C8: nop

    // 0x8002E3CC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002E3D0: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8002E3D4: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x8002E3D8: nop

    // 0x8002E3DC: bc1tl       L_8002E52C
    if (c1cs) {
        // 0x8002E3E0: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8002E52C;
    }
    goto skip_0;
    // 0x8002E3E0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_0:
    // 0x8002E3E4: lh          $t8, 0xC($a3)
    ctx->r24 = MEM_H(ctx->r7, 0XC);
    // 0x8002E3E8: lwc1        $f22, 0x9C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002E3EC: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002E3F0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8002E3F4: nop

    // 0x8002E3F8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002E3FC: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8002E400: c.lt.s      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.fl < ctx->f4.fl;
    // 0x8002E404: nop

    // 0x8002E408: bc1tl       L_8002E52C
    if (c1cs) {
        // 0x8002E40C: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8002E52C;
    }
    goto skip_1;
    // 0x8002E40C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_1:
    // 0x8002E410: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8002E414: nop

    // 0x8002E418: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x8002E41C: nop

    // 0x8002E420: bc1fl       L_8002E450
    if (!c1cs) {
        // 0x8002E424: c.lt.s      $f16, $f20
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
            goto L_8002E450;
    }
    goto skip_2;
    // 0x8002E424: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    skip_2:
    // 0x8002E428: lh          $t9, 0x8($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X8);
    // 0x8002E42C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8002E430: nop

    // 0x8002E434: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002E438: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8002E43C: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x8002E440: nop

    // 0x8002E444: bc1tl       L_8002E52C
    if (c1cs) {
        // 0x8002E448: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8002E52C;
    }
    goto skip_3;
    // 0x8002E448: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_3:
    // 0x8002E44C: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
L_8002E450:
    // 0x8002E450: nop

    // 0x8002E454: bc1fl       L_8002E484
    if (!c1cs) {
        // 0x8002E458: lh          $t7, 0xE($a3)
        ctx->r15 = MEM_H(ctx->r7, 0XE);
            goto L_8002E484;
    }
    goto skip_4;
    // 0x8002E458: lh          $t7, 0xE($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XE);
    skip_4:
    // 0x8002E45C: lh          $t6, 0xE($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XE);
    // 0x8002E460: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8002E464: nop

    // 0x8002E468: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002E46C: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8002E470: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8002E474: nop

    // 0x8002E478: bc1tl       L_8002E52C
    if (c1cs) {
        // 0x8002E47C: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8002E52C;
    }
    goto skip_5;
    // 0x8002E47C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_5:
    // 0x8002E480: lh          $t7, 0xE($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XE);
L_8002E484:
    // 0x8002E484: lwc1        $f14, 0xF8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x8002E488: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8002E48C: nop

    // 0x8002E490: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002E494: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8002E498: sub.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x8002E49C: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8002E4A0: nop

    // 0x8002E4A4: bc1tl       L_8002E52C
    if (c1cs) {
        // 0x8002E4A8: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8002E52C;
    }
    goto skip_6;
    // 0x8002E4A8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_6:
    // 0x8002E4AC: lh          $t8, 0x8($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X8);
    // 0x8002E4B0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8002E4B4: nop

    // 0x8002E4B8: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002E4BC: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8002E4C0: add.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x8002E4C4: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8002E4C8: nop

    // 0x8002E4CC: bc1tl       L_8002E52C
    if (c1cs) {
        // 0x8002E4D0: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8002E52C;
    }
    goto skip_7;
    // 0x8002E4D0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_7:
    // 0x8002E4D4: lh          $t9, 0xA($a3)
    ctx->r25 = MEM_H(ctx->r7, 0XA);
    // 0x8002E4D8: lwc1        $f12, 0x94($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002E4DC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8002E4E0: nop

    // 0x8002E4E4: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002E4E8: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8002E4EC: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x8002E4F0: nop

    // 0x8002E4F4: bc1tl       L_8002E52C
    if (c1cs) {
        // 0x8002E4F8: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8002E52C;
    }
    goto skip_8;
    // 0x8002E4F8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_8:
    // 0x8002E4FC: swc1        $f2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f2.u32l;
    // 0x8002E500: lh          $t6, 0x10($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X10);
    // 0x8002E504: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002E508: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8002E50C: nop

    // 0x8002E510: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002E514: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8002E518: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x8002E51C: nop

    // 0x8002E520: bc1fl       L_8002E6C8
    if (!c1cs) {
        // 0x8002E524: lui         $at, 0x44FA
        ctx->r1 = S32(0X44FA << 16);
            goto L_8002E6C8;
    }
    goto skip_9;
    // 0x8002E524: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    skip_9:
    // 0x8002E528: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_8002E52C:
    // 0x8002E52C: lwc1        $f12, 0x94($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002E530: lwc1        $f14, 0xF8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x8002E534: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002E538: beq         $t4, $a2, L_8002EAC8
    if (ctx->r12 == ctx->r6) {
        // 0x8002E53C: lwc1        $f22, 0x9C($sp)
        ctx->f22.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002EAC8;
    }
    // 0x8002E53C: lwc1        $f22, 0x9C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002E540: multu       $a2, $t2
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002E544: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x8002E548: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8002E54C: mflo        $t7
    ctx->r15 = lo;
    // 0x8002E550: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x8002E554: lhu         $a2, 0x0($t8)
    ctx->r6 = MEM_HU(ctx->r24, 0X0);
    // 0x8002E558: multu       $v0, $s1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002E55C: mflo        $a1
    ctx->r5 = lo;
    // 0x8002E560: addu        $t9, $a0, $a1
    ctx->r25 = ADD32(ctx->r4, ctx->r5);
    // 0x8002E564: lh          $t6, 0x6($t9)
    ctx->r14 = MEM_H(ctx->r25, 0X6);
    // 0x8002E568: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8002E56C: nop

    // 0x8002E570: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002E574: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8002E578: c.lt.s      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.fl < ctx->f22.fl;
    // 0x8002E57C: nop

    // 0x8002E580: bc1tl       L_8002E52C
    if (c1cs) {
        // 0x8002E584: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8002E52C;
    }
    goto skip_10;
    // 0x8002E584: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_10:
    // 0x8002E588: addu        $a3, $t5, $a1
    ctx->r7 = ADD32(ctx->r13, ctx->r5);
    // 0x8002E58C: lh          $t7, 0xC($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XC);
    // 0x8002E590: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8002E594: nop

    // 0x8002E598: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002E59C: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8002E5A0: c.lt.s      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.fl < ctx->f4.fl;
    // 0x8002E5A4: nop

    // 0x8002E5A8: bc1tl       L_8002E52C
    if (c1cs) {
        // 0x8002E5AC: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8002E52C;
    }
    goto skip_11;
    // 0x8002E5AC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_11:
    // 0x8002E5B0: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x8002E5B4: nop

    // 0x8002E5B8: bc1fl       L_8002E5E8
    if (!c1cs) {
        // 0x8002E5BC: c.lt.s      $f16, $f20
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
            goto L_8002E5E8;
    }
    goto skip_12;
    // 0x8002E5BC: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    skip_12:
    // 0x8002E5C0: lh          $t8, 0x8($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X8);
    // 0x8002E5C4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8002E5C8: nop

    // 0x8002E5CC: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002E5D0: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8002E5D4: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x8002E5D8: nop

    // 0x8002E5DC: bc1tl       L_8002E52C
    if (c1cs) {
        // 0x8002E5E0: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8002E52C;
    }
    goto skip_13;
    // 0x8002E5E0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_13:
    // 0x8002E5E4: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
L_8002E5E8:
    // 0x8002E5E8: nop

    // 0x8002E5EC: bc1fl       L_8002E61C
    if (!c1cs) {
        // 0x8002E5F0: lh          $t6, 0xE($a3)
        ctx->r14 = MEM_H(ctx->r7, 0XE);
            goto L_8002E61C;
    }
    goto skip_14;
    // 0x8002E5F0: lh          $t6, 0xE($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XE);
    skip_14:
    // 0x8002E5F4: lh          $t9, 0xE($a3)
    ctx->r25 = MEM_H(ctx->r7, 0XE);
    // 0x8002E5F8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8002E5FC: nop

    // 0x8002E600: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002E604: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8002E608: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x8002E60C: nop

    // 0x8002E610: bc1tl       L_8002E52C
    if (c1cs) {
        // 0x8002E614: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8002E52C;
    }
    goto skip_15;
    // 0x8002E614: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_15:
    // 0x8002E618: lh          $t6, 0xE($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XE);
L_8002E61C:
    // 0x8002E61C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8002E620: nop

    // 0x8002E624: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002E628: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8002E62C: sub.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x8002E630: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x8002E634: nop

    // 0x8002E638: bc1tl       L_8002E52C
    if (c1cs) {
        // 0x8002E63C: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8002E52C;
    }
    goto skip_16;
    // 0x8002E63C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_16:
    // 0x8002E640: lh          $t7, 0x8($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X8);
    // 0x8002E644: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8002E648: nop

    // 0x8002E64C: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002E650: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8002E654: add.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x8002E658: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x8002E65C: nop

    // 0x8002E660: bc1tl       L_8002E52C
    if (c1cs) {
        // 0x8002E664: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8002E52C;
    }
    goto skip_17;
    // 0x8002E664: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_17:
    // 0x8002E668: lh          $t8, 0xA($a3)
    ctx->r24 = MEM_H(ctx->r7, 0XA);
    // 0x8002E66C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8002E670: nop

    // 0x8002E674: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002E678: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8002E67C: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x8002E680: nop

    // 0x8002E684: bc1tl       L_8002E52C
    if (c1cs) {
        // 0x8002E688: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8002E52C;
    }
    goto skip_18;
    // 0x8002E688: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_18:
    // 0x8002E68C: lh          $t9, 0x10($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X10);
    // 0x8002E690: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8002E694: nop

    // 0x8002E698: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002E69C: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8002E6A0: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8002E6A4: nop

    // 0x8002E6A8: bc1tl       L_8002E52C
    if (c1cs) {
        // 0x8002E6AC: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8002E52C;
    }
    goto skip_19;
    // 0x8002E6AC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_19:
    // 0x8002E6B0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8002E6B4: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8002E6B8: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8002E6BC: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x8002E6C0: swc1        $f2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f2.u32l;
    // 0x8002E6C4: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
L_8002E6C8:
    // 0x8002E6C8: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x8002E6CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002E6D0: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
    // 0x8002E6D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002E6D8: addiu       $v0, $s4, 0x3
    ctx->r2 = ADD32(ctx->r20, 0X3);
    // 0x8002E6DC: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x8002E6E0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8002E6E4: andi        $t1, $t8, 0xFFFF
    ctx->r9 = ctx->r24 & 0XFFFF;
    // 0x8002E6E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8002E6EC: andi        $a1, $s3, 0xFFFF
    ctx->r5 = ctx->r19 & 0XFFFF;
    // 0x8002E6F0: sh          $t7, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r15;
    // 0x8002E6F4: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
L_8002E6F8:
    // 0x8002E6F8: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002E6FC: lwc1        $f8, 0xE8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x8002E700: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8002E704: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002E708: mflo        $t9
    ctx->r25 = lo;
    // 0x8002E70C: addu        $v1, $a0, $t9
    ctx->r3 = ADD32(ctx->r4, ctx->r25);
    // 0x8002E710: lhu         $s4, 0x0($v1)
    ctx->r20 = MEM_HU(ctx->r3, 0X0);
    // 0x8002E714: multu       $s4, $s3
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002E718: mflo        $t6
    ctx->r14 = lo;
    // 0x8002E71C: addu        $s6, $s2, $t6
    ctx->r22 = ADD32(ctx->r18, ctx->r14);
    // 0x8002E720: lwc1        $f10, 0xC($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0XC);
    // 0x8002E724: lwc1        $f26, 0x0($s6)
    ctx->f26.u32l = MEM_W(ctx->r22, 0X0);
    // 0x8002E728: lwc1        $f28, 0x8($s6)
    ctx->f28.u32l = MEM_W(ctx->r22, 0X8);
    // 0x8002E72C: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8002E730: lwc1        $f14, 0x4($s6)
    ctx->f14.u32l = MEM_W(ctx->r22, 0X4);
    // 0x8002E734: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8002E738: mul.s       $f20, $f4, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x8002E73C: lbu         $s5, 0x10($s6)
    ctx->r21 = MEM_BU(ctx->r22, 0X10);
    // 0x8002E740: mul.s       $f22, $f6, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x8002E744: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x8002E748: mul.s       $f8, $f10, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8002E74C: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002E750: add.s       $f4, $f20, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f20.fl + ctx->f8.fl;
    // 0x8002E754: add.s       $f12, $f4, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x8002E758: add.s       $f0, $f12, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x8002E75C: beq         $s5, $zero, L_8002E778
    if (ctx->r21 == 0) {
        // 0x8002E760: mov.s       $f24, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
            goto L_8002E778;
    }
    // 0x8002E760: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x8002E764: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8002E768: c.lt.d      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.d < ctx->f6.d;
    // 0x8002E76C: nop

    // 0x8002E770: bc1fl       L_8002E8C8
    if (!c1cs) {
        // 0x8002E774: cvt.d.s     $f10, $f24
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
            goto L_8002E8C8;
    }
    goto skip_20;
    // 0x8002E774: cvt.d.s     $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
    skip_20:
L_8002E778:
    // 0x8002E778: mul.s       $f0, $f14, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x8002E77C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8002E780: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8002E784: c.eq.d      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.d == ctx->f8.d;
    // 0x8002E788: nop

    // 0x8002E78C: bc1fl       L_8002E7A4
    if (!c1cs) {
        // 0x8002E790: neg.s       $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = -ctx->f16.fl;
            goto L_8002E7A4;
    }
    goto skip_21;
    // 0x8002E790: neg.s       $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = -ctx->f16.fl;
    skip_21:
    // 0x8002E794: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8002E798: b           L_8002E7AC
    // 0x8002E79C: nop

        goto L_8002E7AC;
    // 0x8002E79C: nop

    // 0x8002E7A0: neg.s       $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = -ctx->f16.fl;
L_8002E7A4:
    // 0x8002E7A4: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8002E7A8: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
L_8002E7AC:
    // 0x8002E7AC: bne         $v0, $zero, L_8002E884
    if (ctx->r2 != 0) {
        // 0x8002E7B0: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_8002E884;
    }
    // 0x8002E7B0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002E7B4: ldc1        $f10, -0x3BA0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3BA0);
    // 0x8002E7B8: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x8002E7BC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002E7C0: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x8002E7C4: nop

    // 0x8002E7C8: bc1f        L_8002E804
    if (!c1cs) {
        // 0x8002E7CC: nop
    
            goto L_8002E804;
    }
    // 0x8002E7CC: nop

    // 0x8002E7D0: ldc1        $f8, -0x3B98($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3B98);
    // 0x8002E7D4: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8002E7D8: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002E7DC: c.lt.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d < ctx->f0.d;
    // 0x8002E7E0: nop

    // 0x8002E7E4: bc1f        L_8002E804
    if (!c1cs) {
        // 0x8002E7E8: nop
    
            goto L_8002E804;
    }
    // 0x8002E7E8: nop

    // 0x8002E7EC: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002E7F0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8002E7F4: mul.s       $f8, $f10, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8002E7F8: add.s       $f4, $f20, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f20.fl + ctx->f8.fl;
    // 0x8002E7FC: add.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x8002E800: add.s       $f24, $f6, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f6.fl + ctx->f16.fl;
L_8002E804:
    // 0x8002E804: beql        $a3, $zero, L_8002E888
    if (ctx->r7 == 0) {
        // 0x8002E808: cvt.d.s     $f6, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
            goto L_8002E888;
    }
    goto skip_22;
    // 0x8002E808: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    skip_22:
    // 0x8002E80C: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x8002E810: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8002E814: c.eq.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d == ctx->f10.d;
    // 0x8002E818: nop

    // 0x8002E81C: bc1fl       L_8002E888
    if (!c1cs) {
        // 0x8002E820: cvt.d.s     $f6, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
            goto L_8002E888;
    }
    goto skip_23;
    // 0x8002E820: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    skip_23:
    // 0x8002E824: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x8002E828: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8002E82C: c.le.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d <= ctx->f18.d;
    // 0x8002E830: nop

    // 0x8002E834: bc1fl       L_8002E888
    if (!c1cs) {
        // 0x8002E838: cvt.d.s     $f6, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
            goto L_8002E888;
    }
    goto skip_24;
    // 0x8002E838: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    skip_24:
    // 0x8002E83C: c.eq.s      $f6, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f6.fl == ctx->f26.fl;
    // 0x8002E840: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8002E844: bc1fl       L_8002E888
    if (!c1cs) {
        // 0x8002E848: cvt.d.s     $f6, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
            goto L_8002E888;
    }
    goto skip_25;
    // 0x8002E848: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    skip_25:
    // 0x8002E84C: c.eq.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl == ctx->f14.fl;
    // 0x8002E850: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8002E854: bc1fl       L_8002E888
    if (!c1cs) {
        // 0x8002E858: cvt.d.s     $f6, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
            goto L_8002E888;
    }
    goto skip_26;
    // 0x8002E858: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    skip_26:
    // 0x8002E85C: c.eq.s      $f8, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f8.fl == ctx->f28.fl;
    // 0x8002E860: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8002E864: bc1fl       L_8002E888
    if (!c1cs) {
        // 0x8002E868: cvt.d.s     $f6, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
            goto L_8002E888;
    }
    goto skip_27;
    // 0x8002E868: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    skip_27:
    // 0x8002E86C: c.eq.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl == ctx->f16.fl;
    // 0x8002E870: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002E874: bc1fl       L_8002E888
    if (!c1cs) {
        // 0x8002E878: cvt.d.s     $f6, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
            goto L_8002E888;
    }
    goto skip_28;
    // 0x8002E878: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    skip_28:
    // 0x8002E87C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8002E880: nop

L_8002E884:
    // 0x8002E884: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
L_8002E888:
    // 0x8002E888: c.lt.d      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.d < ctx->f6.d;
    // 0x8002E88C: nop

    // 0x8002E890: bc1fl       L_8002E8C8
    if (!c1cs) {
        // 0x8002E894: cvt.d.s     $f10, $f24
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
            goto L_8002E8C8;
    }
    goto skip_29;
    // 0x8002E894: cvt.d.s     $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
    skip_29:
    // 0x8002E898: c.le.s      $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f2.fl <= ctx->f30.fl;
    // 0x8002E89C: nop

    // 0x8002E8A0: bc1fl       L_8002E8C8
    if (!c1cs) {
        // 0x8002E8A4: cvt.d.s     $f10, $f24
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
            goto L_8002E8C8;
    }
    goto skip_30;
    // 0x8002E8A4: cvt.d.s     $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
    skip_30:
    // 0x8002E8A8: mov.s       $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    ctx->f30.fl = ctx->f2.fl;
    // 0x8002E8AC: swc1        $f26, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f26.u32l;
    // 0x8002E8B0: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    // 0x8002E8B4: swc1        $f28, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f28.u32l;
    // 0x8002E8B8: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    // 0x8002E8BC: swc1        $f24, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f24.u32l;
    // 0x8002E8C0: andi        $t0, $s5, 0xFF
    ctx->r8 = ctx->r21 & 0XFF;
    // 0x8002E8C4: cvt.d.s     $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
L_8002E8C8:
    // 0x8002E8C8: c.lt.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d < ctx->f10.d;
    // 0x8002E8CC: nop

    // 0x8002E8D0: bc1fl       L_8002EA00
    if (!c1cs) {
        // 0x8002E8D4: lh          $s4, 0x2($v1)
        ctx->r20 = MEM_H(ctx->r3, 0X2);
            goto L_8002EA00;
    }
    goto skip_31;
    // 0x8002E8D4: lh          $s4, 0x2($v1)
    ctx->r20 = MEM_H(ctx->r3, 0X2);
    skip_31:
    // 0x8002E8D8: lh          $s4, 0x4($v1)
    ctx->r20 = MEM_H(ctx->r3, 0X4);
    // 0x8002E8DC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002E8E0: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002E8E4: bne         $s4, $zero, L_8002E9F4
    if (ctx->r20 != 0) {
        // 0x8002E8E8: lwc1        $f10, 0x90($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
            goto L_8002E9F4;
    }
    // 0x8002E8E8: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8002E8EC: ldc1        $f4, -0x3B90($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3B90);
    // 0x8002E8F0: cvt.d.s     $f8, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); 
    ctx->f8.d = CVT_D_S(ctx->f30.fl);
    // 0x8002E8F4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002E8F8: c.lt.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d < ctx->f4.d;
    // 0x8002E8FC: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    // 0x8002E900: andi        $v0, $t1, 0xFFFF
    ctx->r2 = ctx->r9 & 0XFFFF;
    // 0x8002E904: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8002E908: bc1f        L_8002E9DC
    if (!c1cs) {
        // 0x8002E90C: nop
    
            goto L_8002E9DC;
    }
    // 0x8002E90C: nop

    // 0x8002E910: mul.s       $f0, $f6, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f30.fl);
    // 0x8002E914: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8002E918: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x8002E91C: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8002E920: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x8002E924: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002E928: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8002E92C: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8002E930: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8002E934: andi        $t3, $t0, 0xFF
    ctx->r11 = ctx->r8 & 0XFF;
    // 0x8002E938: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x8002E93C: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x8002E940: bc1f        L_8002E954
    if (!c1cs) {
        // 0x8002E944: swc1        $f4, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
            goto L_8002E954;
    }
    // 0x8002E944: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x8002E948: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8002E94C: b           L_8002E95C
    // 0x8002E950: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_8002E95C;
    // 0x8002E950: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_8002E954:
    // 0x8002E954: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8002E958: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8002E95C:
    // 0x8002E95C: ldc1        $f6, -0x3B88($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3B88);
    // 0x8002E960: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x8002E964: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x8002E968: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8002E96C: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002E970: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8002E974: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8002E978: bc1fl       L_8002E9C0
    if (!c1cs) {
        // 0x8002E97C: add.s       $f10, $f2, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f6.fl;
            goto L_8002E9C0;
    }
    goto skip_32;
    // 0x8002E97C: add.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f6.fl;
    skip_32:
    // 0x8002E980: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x8002E984: c.eq.d      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.d == ctx->f8.d;
    // 0x8002E988: nop

    // 0x8002E98C: bc1tl       L_8002E9C0
    if (c1cs) {
        // 0x8002E990: add.s       $f10, $f2, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f6.fl;
            goto L_8002E9C0;
    }
    goto skip_33;
    // 0x8002E990: add.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f6.fl;
    skip_33:
    // 0x8002E994: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8002E998: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002E99C: c.le.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d <= ctx->f4.d;
    // 0x8002E9A0: nop

    // 0x8002E9A4: bc1f        L_8002E9B8
    if (!c1cs) {
        // 0x8002E9A8: nop
    
            goto L_8002E9B8;
    }
    // 0x8002E9A8: nop

    // 0x8002E9AC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002E9B0: b           L_8002E9BC
    // 0x8002E9B4: lwc1        $f2, -0x3B80($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3B80);
        goto L_8002E9BC;
    // 0x8002E9B4: lwc1        $f2, -0x3B80($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3B80);
L_8002E9B8:
    // 0x8002E9B8: lwc1        $f2, -0x3B7C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3B7C);
L_8002E9BC:
    // 0x8002E9BC: add.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f6.fl;
L_8002E9C0:
    // 0x8002E9C0: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8002E9C4: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x8002E9C8: bne         $t7, $zero, L_8002E6F8
    if (ctx->r15 != 0) {
        // 0x8002E9CC: swc1        $f10, 0x98($sp)
        MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
            goto L_8002E6F8;
    }
    // 0x8002E9CC: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x8002E9D0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8002E9D4: b           L_8002EAC8
    // 0x8002E9D8: sh          $t8, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r24;
        goto L_8002EAC8;
    // 0x8002E9D8: sh          $t8, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r24;
L_8002E9DC:
    // 0x8002E9DC: beq         $t4, $a2, L_8002EAC8
    if (ctx->r12 == ctx->r6) {
        // 0x8002E9E0: lwc1        $f2, 0xD4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0XD4);
            goto L_8002EAC8;
    }
    // 0x8002E9E0: lwc1        $f2, 0xD4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8002E9E4: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x8002E9E8: swc1        $f2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f2.u32l;
L_8002E9EC:
    // 0x8002E9EC: b           L_8002E394
    // 0x8002E9F0: lwc1        $f2, 0x98($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X98);
        goto L_8002E394;
    // 0x8002E9F0: lwc1        $f2, 0x98($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X98);
L_8002E9F4:
    // 0x8002E9F4: b           L_8002E6F8
    // 0x8002E9F8: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
        goto L_8002E6F8;
    // 0x8002E9F8: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
    // 0x8002E9FC: lh          $s4, 0x2($v1)
    ctx->r20 = MEM_H(ctx->r3, 0X2);
L_8002EA00:
    // 0x8002EA00: bne         $s4, $zero, L_8002EAC0
    if (ctx->r20 != 0) {
        // 0x8002EA04: addiu       $at, $zero, 0x7FFF
        ctx->r1 = ADD32(0, 0X7FFF);
            goto L_8002EAC0;
    }
    // 0x8002EA04: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002EA08: bne         $a3, $at, L_8002EAAC
    if (ctx->r7 != ctx->r1) {
        // 0x8002EA0C: nop
    
            goto L_8002EAAC;
    }
    // 0x8002EA0C: nop

    // 0x8002EA10: bne         $t3, $zero, L_8002EA38
    if (ctx->r11 != 0) {
        // 0x8002EA14: lwc1        $f8, 0x90($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
            goto L_8002EA38;
    }
    // 0x8002EA14: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8002EA18: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8002EA1C: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8002EA20: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8002EA24: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x8002EA28: andi        $t3, $t0, 0xFF
    ctx->r11 = ctx->r8 & 0XFF;
    // 0x8002EA2C: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x8002EA30: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x8002EA34: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
L_8002EA38:
    // 0x8002EA38: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8002EA3C: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8002EA40: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8002EA44: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x8002EA48: sub.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8002EA4C: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8002EA50: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8002EA54: nop

    // 0x8002EA58: bc1f        L_8002EAAC
    if (!c1cs) {
        // 0x8002EA5C: nop
    
            goto L_8002EAAC;
    }
    // 0x8002EA5C: nop

    // 0x8002EA60: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x8002EA64: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8002EA68: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002EA6C: swc1        $f2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f2.u32l;
    // 0x8002EA70: sh          $t9, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r25;
    // 0x8002EA74: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x8002EA78: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
    // 0x8002EA7C: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x8002EA80: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8002EA84: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x8002EA88: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8002EA8C: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x8002EA90: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8002EA94: swc1        $f10, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f10.u32l;
    // 0x8002EA98: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8002EA9C: sb          $t3, 0x34($s0)
    MEM_B(0X34, ctx->r16) = ctx->r11;
    // 0x8002EAA0: swc1        $f8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f8.u32l;
    // 0x8002EAA4: lhu         $t6, 0x56($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X56);
    // 0x8002EAA8: sh          $t6, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r14;
L_8002EAAC:
    // 0x8002EAAC: beq         $t4, $a2, L_8002EAC8
    if (ctx->r12 == ctx->r6) {
        // 0x8002EAB0: lwc1        $f4, 0xD4($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
            goto L_8002EAC8;
    }
    // 0x8002EAB0: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8002EAB4: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x8002EAB8: b           L_8002E9EC
    // 0x8002EABC: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
        goto L_8002E9EC;
    // 0x8002EABC: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
L_8002EAC0:
    // 0x8002EAC0: b           L_8002E6F8
    // 0x8002EAC4: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
        goto L_8002E6F8;
    // 0x8002EAC4: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
L_8002EAC8:
    // 0x8002EAC8: ldc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X0);
    // 0x8002EACC: ldc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X8);
    // 0x8002EAD0: ldc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X10);
    // 0x8002EAD4: ldc1        $f26, 0x18($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X18);
    // 0x8002EAD8: ldc1        $f28, 0x20($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X20);
    // 0x8002EADC: ldc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X28);
    // 0x8002EAE0: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x8002EAE4: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x8002EAE8: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x8002EAEC: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x8002EAF0: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x8002EAF4: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x8002EAF8: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x8002EAFC: jr          $ra
    // 0x8002EB00: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    TRACE_RETURN()
    return;
    // 0x8002EB00: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_8003F460_40060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F460: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003F464: lw          $t6, 0x7740($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7740);
    // 0x8003F468: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F46C: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x8003F470: sw          $t6, 0x77F8($at)
    MEM_W(0X77F8, ctx->r1) = ctx->r14;
    // 0x8003F474: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F478: jr          $ra
    // 0x8003F47C: sw          $t7, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x8003F47C: sw          $t7, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_8003AFB0_3BBB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003AFB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AFB4: lui         $t2, 0x801C
    ctx->r10 = S32(0X801C << 16);
    // 0x8003AFB8: addiu       $t2, $t2, 0x1728
    ctx->r10 = ADD32(ctx->r10, 0X1728);
    // 0x8003AFBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AFC0: lw          $t1, 0x0($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X0);
    // 0x8003AFC4: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x8003AFC8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003AFCC: lbu         $t6, 0x6($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X6);
    // 0x8003AFD0: addiu       $v1, $v1, 0x9E8
    ctx->r3 = ADD32(ctx->r3, 0X9E8);
    // 0x8003AFD4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8003AFD8: andi        $t7, $t6, 0xFE
    ctx->r15 = ctx->r14 & 0XFE;
    // 0x8003AFDC: sb          $t7, 0x6($t1)
    MEM_B(0X6, ctx->r9) = ctx->r15;
    // 0x8003AFE0: lw          $t1, 0x0($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X0);
    // 0x8003AFE4: lbu         $t8, 0x48($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X48);
    // 0x8003AFE8: lh          $t9, 0x40($t1)
    ctx->r25 = MEM_H(ctx->r9, 0X40);
    // 0x8003AFEC: lh          $t4, 0x42($t1)
    ctx->r12 = MEM_H(ctx->r9, 0X42);
    // 0x8003AFF0: lhu         $t5, 0x3A($t1)
    ctx->r13 = MEM_HU(ctx->r9, 0X3A);
    // 0x8003AFF4: addu        $t3, $t8, $t9
    ctx->r11 = ADD32(ctx->r24, ctx->r25);
    // 0x8003AFF8: addu        $t0, $t3, $t4
    ctx->r8 = ADD32(ctx->r11, ctx->r12);
    // 0x8003AFFC: multu       $t0, $t5
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003B000: mflo        $t0
    ctx->r8 = lo;
    // 0x8003B004: slt         $at, $t0, $at
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8003B008: bne         $at, $zero, L_8003B018
    if (ctx->r1 != 0) {
        // 0x8003B00C: nop
    
            goto L_8003B018;
    }
    // 0x8003B00C: nop

    // 0x8003B010: b           L_8003B02C
    // 0x8003B014: addiu       $t0, $zero, 0x7FFF
    ctx->r8 = ADD32(0, 0X7FFF);
        goto L_8003B02C;
    // 0x8003B014: addiu       $t0, $zero, 0x7FFF
    ctx->r8 = ADD32(0, 0X7FFF);
L_8003B018:
    // 0x8003B018: bgez        $t0, L_8003B028
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8003B01C: sra         $t6, $t0, 8
        ctx->r14 = S32(SIGNED(ctx->r8) >> 8);
            goto L_8003B028;
    }
    // 0x8003B01C: sra         $t6, $t0, 8
    ctx->r14 = S32(SIGNED(ctx->r8) >> 8);
    // 0x8003B020: b           L_8003B02C
    // 0x8003B024: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_8003B02C;
    // 0x8003B024: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_8003B028:
    // 0x8003B028: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
L_8003B02C:
    // 0x8003B02C: lhu         $t7, 0x4A($t1)
    ctx->r15 = MEM_HU(ctx->r9, 0X4A);
    // 0x8003B030: lhu         $v0, 0xAE($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0XAE);
    // 0x8003B034: multu       $t7, $t0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003B038: mflo        $t0
    ctx->r8 = lo;
    // 0x8003B03C: sra         $t8, $t0, 8
    ctx->r24 = S32(SIGNED(ctx->r8) >> 8);
    // 0x8003B040: beq         $v0, $zero, L_8003B058
    if (ctx->r2 == 0) {
        // 0x8003B044: or          $t0, $t8, $zero
        ctx->r8 = ctx->r24 | 0;
            goto L_8003B058;
    }
    // 0x8003B044: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x8003B048: multu       $v0, $t8
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003B04C: mflo        $t0
    ctx->r8 = lo;
    // 0x8003B050: sra         $t9, $t0, 8
    ctx->r25 = S32(SIGNED(ctx->r8) >> 8);
    // 0x8003B054: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
L_8003B058:
    // 0x8003B058: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003B05C: lbu         $v0, 0x9D6($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9D6);
    // 0x8003B060: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x8003B064: beql        $v0, $zero, L_8003B080
    if (ctx->r2 == 0) {
        // 0x8003B068: lw          $a1, 0x0($t1)
        ctx->r5 = MEM_W(ctx->r9, 0X0);
            goto L_8003B080;
    }
    goto skip_0;
    // 0x8003B068: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    skip_0:
    // 0x8003B06C: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003B070: mflo        $t0
    ctx->r8 = lo;
    // 0x8003B074: sra         $t3, $t0, 8
    ctx->r11 = S32(SIGNED(ctx->r8) >> 8);
    // 0x8003B078: or          $t0, $t3, $zero
    ctx->r8 = ctx->r11 | 0;
    // 0x8003B07C: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
L_8003B080:
    // 0x8003B080: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003B084: andi        $t4, $a1, 0x7FFF
    ctx->r12 = ctx->r5 & 0X7FFF;
    // 0x8003B088: sltiu       $at, $t4, 0x100
    ctx->r1 = ctx->r12 < 0X100 ? 1 : 0;
    // 0x8003B08C: beq         $at, $zero, L_8003B0D0
    if (ctx->r1 == 0) {
        // 0x8003B090: or          $a1, $t4, $zero
        ctx->r5 = ctx->r12 | 0;
            goto L_8003B0D0;
    }
    // 0x8003B090: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x8003B094: lbu         $v0, 0x9D3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9D3);
    // 0x8003B098: beq         $v0, $zero, L_8003B0B0
    if (ctx->r2 == 0) {
        // 0x8003B09C: nop
    
            goto L_8003B0B0;
    }
    // 0x8003B09C: nop

    // 0x8003B0A0: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003B0A4: mflo        $t0
    ctx->r8 = lo;
    // 0x8003B0A8: sra         $t5, $t0, 8
    ctx->r13 = S32(SIGNED(ctx->r8) >> 8);
    // 0x8003B0AC: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
L_8003B0B0:
    // 0x8003B0B0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003B0B4: lbu         $v0, 0x9DC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9DC);
    // 0x8003B0B8: beq         $v0, $zero, L_8003B0D0
    if (ctx->r2 == 0) {
        // 0x8003B0BC: nop
    
            goto L_8003B0D0;
    }
    // 0x8003B0BC: nop

    // 0x8003B0C0: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003B0C4: mflo        $t0
    ctx->r8 = lo;
    // 0x8003B0C8: sra         $t6, $t0, 8
    ctx->r14 = S32(SIGNED(ctx->r8) >> 8);
    // 0x8003B0CC: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
L_8003B0D0:
    // 0x8003B0D0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003B0D4: lbu         $v0, 0x9CF($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9CF);
    // 0x8003B0D8: beql        $v0, $zero, L_8003B0F4
    if (ctx->r2 == 0) {
        // 0x8003B0DC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8003B0F4;
    }
    goto skip_1;
    // 0x8003B0DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x8003B0E0: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003B0E4: mflo        $t0
    ctx->r8 = lo;
    // 0x8003B0E8: sra         $t7, $t0, 8
    ctx->r15 = S32(SIGNED(ctx->r8) >> 8);
    // 0x8003B0EC: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x8003B0F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003B0F4:
    // 0x8003B0F4: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    // 0x8003B0F8: bnel        $a1, $t8, L_8003B120
    if (ctx->r5 != ctx->r24) {
        // 0x8003B0FC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8003B120;
    }
    goto skip_2;
    // 0x8003B0FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_2:
    // 0x8003B100: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x8003B104: lbu         $t9, 0x9E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X9E0);
    // 0x8003B108: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003B10C: mflo        $t0
    ctx->r8 = lo;
    // 0x8003B110: sra         $t3, $t0, 8
    ctx->r11 = S32(SIGNED(ctx->r8) >> 8);
    // 0x8003B114: b           L_8003B128
    // 0x8003B118: or          $t0, $t3, $zero
    ctx->r8 = ctx->r11 | 0;
        goto L_8003B128;
    // 0x8003B118: or          $t0, $t3, $zero
    ctx->r8 = ctx->r11 | 0;
    // 0x8003B11C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8003B120:
    // 0x8003B120: bne         $v0, $a0, L_8003B0F4
    if (ctx->r2 != ctx->r4) {
        // 0x8003B124: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_8003B0F4;
    }
    // 0x8003B124: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_8003B128:
    // 0x8003B128: lh          $t4, 0xA8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XA8);
    // 0x8003B12C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8003B130: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003B134: bne         $t0, $t4, L_8003B14C
    if (ctx->r8 != ctx->r12) {
        // 0x8003B138: lui         $t3, 0x801C
        ctx->r11 = S32(0X801C << 16);
            goto L_8003B14C;
    }
    // 0x8003B138: lui         $t3, 0x801C
    ctx->r11 = S32(0X801C << 16);
    // 0x8003B13C: lhu         $t5, 0x4C($t1)
    ctx->r13 = MEM_HU(ctx->r9, 0X4C);
    // 0x8003B140: lhu         $t6, 0xAA($t1)
    ctx->r14 = MEM_HU(ctx->r9, 0XAA);
    // 0x8003B144: beql        $t5, $t6, L_8003B1B0
    if (ctx->r13 == ctx->r14) {
        // 0x8003B148: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003B1B0;
    }
    goto skip_3;
    // 0x8003B148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
L_8003B14C:
    // 0x8003B14C: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
    // 0x8003B150: lw          $t1, 0x0($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X0);
    // 0x8003B154: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x8003B158: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x8003B15C: lhu         $t7, 0x4C($t1)
    ctx->r15 = MEM_HU(ctx->r9, 0X4C);
    // 0x8003B160: addiu       $t3, $t3, 0xA68
    ctx->r11 = ADD32(ctx->r11, 0XA68);
    // 0x8003B164: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8003B168: sh          $t7, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r15;
    // 0x8003B16C: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x8003B170: lbu         $t8, 0x9CC($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X9CC);
    // 0x8003B174: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    // 0x8003B178: lhu         $a3, 0x4C($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X4C);
    // 0x8003B17C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8003B180: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8003B184: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x8003B188: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x8003B18C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003B190: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x8003B194: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8003B198: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003B19C: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x8003B1A0: sll         $a3, $t7, 3
    ctx->r7 = S32(ctx->r15 << 3);
    // 0x8003B1A4: jal         0x800486E0
    // 0x8003B1A8: addu        $a1, $t9, $t3
    ctx->r5 = ADD32(ctx->r25, ctx->r11);
    alSynSetVol(rdram, ctx);
        goto after_0;
    // 0x8003B1A8: addu        $a1, $t9, $t3
    ctx->r5 = ADD32(ctx->r25, ctx->r11);
    after_0:
    // 0x8003B1AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B1B0:
    // 0x8003B1B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B1B4: jr          $ra
    // 0x8003B1B8: nop

    TRACE_RETURN()
    return;
    // 0x8003B1B8: nop

;}
RECOMP_FUNC void func_8003BF08_3CB08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BF08: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003BF0C: addiu       $v0, $v0, 0x172C
    ctx->r2 = ADD32(ctx->r2, 0X172C);
    // 0x8003BF10: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003BF14: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x8003BF18: lw          $t9, 0x1728($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1728);
    // 0x8003BF1C: lb          $t7, 0x0($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X0);
    // 0x8003BF20: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8003BF24: sh          $t8, 0x30($t9)
    MEM_H(0X30, ctx->r25) = ctx->r24;
    // 0x8003BF28: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8003BF2C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8003BF30: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8003BF34: jr          $ra
    // 0x8003BF38: nop

    TRACE_RETURN()
    return;
    // 0x8003BF38: nop

;}
RECOMP_FUNC void __freeParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047948: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8004794C: lw          $v0, -0x5DD0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5DD0);
    // 0x80047950: lw          $t6, 0x2C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X2C);
    // 0x80047954: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80047958: jr          $ra
    // 0x8004795C: sw          $a0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8004795C: sw          $a0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r4;
;}
RECOMP_FUNC void func_8003C2B4_3CEB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C2B4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C2B8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003C2BC: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x8003C2C0: addiu       $v1, $v1, 0x172C
    ctx->r3 = ADD32(ctx->r3, 0X172C);
    // 0x8003C2C4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8003C2C8: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8003C2CC: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
    // 0x8003C2D0: sb          $v0, 0x9E($t7)
    MEM_B(0X9E, ctx->r15) = ctx->r2;
    // 0x8003C2D4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8003C2D8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8003C2DC: beq         $v0, $zero, L_8003C320
    if (ctx->r2 == 0) {
        // 0x8003C2E0: sw          $t9, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r25;
            goto L_8003C320;
    }
    // 0x8003C2E0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8003C2E4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003C2E8: lhu         $t0, 0x9A($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X9A);
    // 0x8003C2EC: lbu         $t1, 0x9E($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X9E);
    // 0x8003C2F0: div         $zero, $t0, $t1
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r9)));
    // 0x8003C2F4: mflo        $t2
    ctx->r10 = lo;
    // 0x8003C2F8: sh          $t2, 0xA0($v0)
    MEM_H(0XA0, ctx->r2) = ctx->r10;
    // 0x8003C2FC: bne         $t1, $zero, L_8003C308
    if (ctx->r9 != 0) {
        // 0x8003C300: nop
    
            goto L_8003C308;
    }
    // 0x8003C300: nop

    // 0x8003C304: break       7
    do_break(2147730180);
L_8003C308:
    // 0x8003C308: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003C30C: bne         $t1, $at, L_8003C320
    if (ctx->r9 != ctx->r1) {
        // 0x8003C310: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003C320;
    }
    // 0x8003C310: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003C314: bne         $t0, $at, L_8003C320
    if (ctx->r8 != ctx->r1) {
        // 0x8003C318: nop
    
            goto L_8003C320;
    }
    // 0x8003C318: nop

    // 0x8003C31C: break       6
    do_break(2147730204);
L_8003C320:
    // 0x8003C320: jr          $ra
    // 0x8003C324: nop

    TRACE_RETURN()
    return;
    // 0x8003C324: nop

;}
RECOMP_FUNC void func_8003DE48_3EA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003DE48: bgez        $a0, L_8003DE58
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8003DE4C: lui         $t6, 0x801C
        ctx->r14 = S32(0X801C << 16);
            goto L_8003DE58;
    }
    // 0x8003DE4C: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003DE50: jr          $ra
    // 0x8003DE54: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    TRACE_RETURN()
    return;
    // 0x8003DE54: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8003DE58:
    // 0x8003DE58: lw          $t6, 0x78EC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X78EC);
    // 0x8003DE5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003DE60: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003DE64: beq         $t6, $at, L_8003DE78
    if (ctx->r14 == ctx->r1) {
        // 0x8003DE68: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8003DE78;
    }
    // 0x8003DE68: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8003DE6C: lw          $t7, 0x78F0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X78F0);
    // 0x8003DE70: jr          $ra
    // 0x8003DE74: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    TRACE_RETURN()
    return;
    // 0x8003DE74: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
L_8003DE78:
    // 0x8003DE78: jr          $ra
    // 0x8003DE7C: nop

    TRACE_RETURN()
    return;
    // 0x8003DE7C: nop

;}
RECOMP_FUNC void func_8001AC28_1B828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001AC28: or          $t7, $a0, $zero
    ctx->r15 = ctx->r4 | 0;
    // 0x8001AC2C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001AC30: andi        $t8, $t7, 0xBFFF
    ctx->r24 = ctx->r15 & 0XBFFF;
    // 0x8001AC34: ori         $at, $zero, 0xA001
    ctx->r1 = 0 | 0XA001;
    // 0x8001AC38: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8001AC3C: slt         $at, $t8, $at
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8001AC40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001AC44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001AC48: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8001AC4C: bne         $at, $zero, L_8001AC6C
    if (ctx->r1 != 0) {
        // 0x8001AC50: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_8001AC6C;
    }
    // 0x8001AC50: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x8001AC54: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8001AC58: ori         $at, $at, 0x5000
    ctx->r1 = ctx->r1 | 0X5000;
    // 0x8001AC5C: addu        $v0, $t8, $at
    ctx->r2 = ADD32(ctx->r24, ctx->r1);
    // 0x8001AC60: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x8001AC64: b           L_8001ADA8
    // 0x8001AC68: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_8001ADA8;
    // 0x8001AC68: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_8001AC6C:
    // 0x8001AC6C: andi        $t0, $v1, 0x8000
    ctx->r8 = ctx->r3 & 0X8000;
    // 0x8001AC70: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001AC74: beq         $t0, $zero, L_8001AC94
    if (ctx->r8 == 0) {
        // 0x8001AC78: lui         $at, 0x8017
        ctx->r1 = S32(0X8017 << 16);
            goto L_8001AC94;
    }
    // 0x8001AC78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001AC7C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8001AC80: andi        $t1, $a0, 0x7FFF
    ctx->r9 = ctx->r4 & 0X7FFF;
    // 0x8001AC84: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001AC88: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8001AC8C: b           L_8001ACB4
    // 0x8001AC90: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8001ACB4;
    // 0x8001AC90: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8001AC94:
    // 0x8001AC94: lwc1        $f0, -0x7AF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7AF0);
    // 0x8001AC98: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8001AC9C: mfc1        $s0, $f4
    ctx->r16 = (int32_t)ctx->f4.u32l;
    // 0x8001ACA0: nop

    // 0x8001ACA4: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x8001ACA8: nop

    // 0x8001ACAC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001ACB0: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
L_8001ACB4:
    // 0x8001ACB4: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x8001ACB8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8001ACBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001ACC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ACC4: bc1fl       L_8001ACE0
    if (!c1cs) {
        // 0x8001ACC8: mtc1        $s0, $f16
        ctx->f16.u32l = ctx->r16;
            goto L_8001ACE0;
    }
    goto skip_0;
    // 0x8001ACC8: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    skip_0:
    // 0x8001ACCC: jal         0x8001B2C8
    // 0x8001ACD0: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_0;
    // 0x8001ACD0: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_0:
    // 0x8001ACD4: b           L_8001ADAC
    // 0x8001ACD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8001ADAC;
    // 0x8001ACD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001ACDC: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
L_8001ACE0:
    // 0x8001ACE0: lwc1        $f4, -0x7AE8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7AE8);
    // 0x8001ACE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001ACE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001ACEC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8001ACF0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8001ACF4: addiu       $a2, $sp, 0x36
    ctx->r6 = ADD32(ctx->r29, 0X36);
    // 0x8001ACF8: addiu       $a3, $s0, 0x1
    ctx->r7 = ADD32(ctx->r16, 0X1);
    // 0x8001ACFC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001AD00: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x8001AD04: nop

    // 0x8001AD08: bc1f        L_8001AD30
    if (!c1cs) {
        // 0x8001AD0C: nop
    
            goto L_8001AD30;
    }
    // 0x8001AD0C: nop

    // 0x8001AD10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001AD14: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x8001AD18: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8001AD1C: jal         0x8001B2C8
    // 0x8001AD20: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_1;
    // 0x8001AD20: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x8001AD24: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8001AD28: b           L_8001AD40
    // 0x8001AD2C: sh          $v0, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r2;
        goto L_8001AD40;
    // 0x8001AD2C: sh          $v0, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r2;
L_8001AD30:
    // 0x8001AD30: jal         0x8001B2C8
    // 0x8001AD34: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_2;
    // 0x8001AD34: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x8001AD38: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8001AD3C: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
L_8001AD40:
    // 0x8001AD40: lhu         $a0, 0x36($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X36);
    // 0x8001AD44: lhu         $t3, 0x34($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X34);
    // 0x8001AD48: subu        $v0, $t3, $a0
    ctx->r2 = SUB32(ctx->r11, ctx->r4);
    // 0x8001AD4C: andi        $t5, $v0, 0x3FF
    ctx->r13 = ctx->r2 & 0X3FF;
    // 0x8001AD50: sll         $t7, $t5, 16
    ctx->r15 = S32(ctx->r13 << 16);
    // 0x8001AD54: sll         $v1, $t5, 16
    ctx->r3 = S32(ctx->r13 << 16);
    // 0x8001AD58: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8001AD5C: sra         $t6, $v1, 16
    ctx->r14 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8001AD60: slti        $at, $t8, 0x201
    ctx->r1 = SIGNED(ctx->r24) < 0X201 ? 1 : 0;
    // 0x8001AD64: bne         $at, $zero, L_8001AD84
    if (ctx->r1 != 0) {
        // 0x8001AD68: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_8001AD84;
    }
    // 0x8001AD68: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8001AD6C: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
L_8001AD70:
    // 0x8001AD70: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x8001AD74: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8001AD78: slti        $at, $v1, 0x201
    ctx->r1 = SIGNED(ctx->r3) < 0X201 ? 1 : 0;
    // 0x8001AD7C: beql        $at, $zero, L_8001AD70
    if (ctx->r1 == 0) {
        // 0x8001AD80: addiu       $v1, $v1, -0x400
        ctx->r3 = ADD32(ctx->r3, -0X400);
            goto L_8001AD70;
    }
    goto skip_1;
    // 0x8001AD80: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
    skip_1:
L_8001AD84:
    // 0x8001AD84: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x8001AD88: nop

    // 0x8001AD8C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8001AD90: mul.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8001AD94: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8001AD98: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8001AD9C: nop

    // 0x8001ADA0: addu        $t9, $a0, $t6
    ctx->r25 = ADD32(ctx->r4, ctx->r14);
    // 0x8001ADA4: andi        $v0, $t9, 0x3FF
    ctx->r2 = ctx->r25 & 0X3FF;
L_8001ADA8:
    // 0x8001ADA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8001ADAC:
    // 0x8001ADAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001ADB0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8001ADB4: jr          $ra
    // 0x8001ADB8: nop

    TRACE_RETURN()
    return;
    // 0x8001ADB8: nop

;}
RECOMP_FUNC void func_80001810_2410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001818: lui         $t6, 0xBFF0
    ctx->r14 = S32(0XBFF0 << 16);
    // 0x8000181C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80001820: lui         $at, 0x4B4D
    ctx->r1 = S32(0X4B4D << 16);
    // 0x80001824: ori         $at, $at, 0x4300
    ctx->r1 = ctx->r1 | 0X4300;
    // 0x80001828: beq         $t7, $at, L_8000185C
    if (ctx->r15 == ctx->r1) {
        // 0x8000182C: lui         $a0, 0xB1FF
        ctx->r4 = S32(0XB1FF << 16);
            goto L_8000185C;
    }
    // 0x8000182C: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x80001830: ori         $a0, $a0, 0x14
    ctx->r4 = ctx->r4 | 0X14;
    // 0x80001834: jal         0x80040920
    // 0x80001838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    osPiWriteIo_recomp(rdram, ctx);
        goto after_0;
    // 0x80001838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8000183C: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x80001840: ori         $a0, $a0, 0x4
    ctx->r4 = ctx->r4 | 0X4;
    // 0x80001844: jal         0x80040920
    // 0x80001848: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    osPiWriteIo_recomp(rdram, ctx);
        goto after_1;
    // 0x80001848: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8000184C: lui         $a1, 0x4953
    ctx->r5 = S32(0X4953 << 16);
    // 0x80001850: ori         $a1, $a1, 0x3634
    ctx->r5 = ctx->r5 | 0X3634;
    // 0x80001854: jal         0x80040920
    // 0x80001858: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    osPiWriteIo_recomp(rdram, ctx);
        goto after_2;
    // 0x80001858: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    after_2:
L_8000185C:
    // 0x8000185C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001864: jr          $ra
    // 0x80001868: nop

    TRACE_RETURN()
    return;
    // 0x80001868: nop

;}
RECOMP_FUNC void func_80001E50_2A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001E50: bne         $a0, $zero, L_80001E60
    if (ctx->r4 != 0) {
        // 0x80001E54: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80001E60;
    }
    // 0x80001E54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80001E58: jr          $ra
    // 0x80001E5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80001E5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80001E60:
    // 0x80001E60: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80001E64: lhu         $t6, 0x4910($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X4910);
    // 0x80001E68: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80001E6C: addiu       $t8, $t8, 0x4910
    ctx->r24 = ADD32(ctx->r24, 0X4910);
    // 0x80001E70: beq         $t6, $zero, L_80001EA4
    if (ctx->r14 == 0) {
        // 0x80001E74: sll         $t7, $v0, 1
        ctx->r15 = S32(ctx->r2 << 1);
            goto L_80001EA4;
    }
    // 0x80001E74: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x80001E78: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80001E7C: lhu         $a1, 0x0($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X0);
    // 0x80001E80: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
L_80001E84:
    // 0x80001E84: beql        $at, $zero, L_80001E98
    if (ctx->r1 == 0) {
        // 0x80001E88: lhu         $a1, 0x4($v1)
        ctx->r5 = MEM_HU(ctx->r3, 0X4);
            goto L_80001E98;
    }
    goto skip_0;
    // 0x80001E88: lhu         $a1, 0x4($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X4);
    skip_0:
    // 0x80001E8C: jr          $ra
    // 0x80001E90: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    TRACE_RETURN()
    return;
    // 0x80001E90: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x80001E94: lhu         $a1, 0x4($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X4);
L_80001E98:
    // 0x80001E98: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80001E9C: bnel        $a1, $zero, L_80001E84
    if (ctx->r5 != 0) {
        // 0x80001EA0: sltu        $at, $a0, $a1
        ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
            goto L_80001E84;
    }
    goto skip_1;
    // 0x80001EA0: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    skip_1:
L_80001EA4:
    // 0x80001EA4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80001EA8: jr          $ra
    // 0x80001EAC: nop

    TRACE_RETURN()
    return;
    // 0x80001EAC: nop

;}
