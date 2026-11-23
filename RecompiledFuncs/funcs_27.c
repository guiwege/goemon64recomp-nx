#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801EB0D0_5A6FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB0D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB0D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB0D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EB0DC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EB0E0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EB0E4: jal         0x801EB180
    // 0x801EB0E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EB180_5A7090(rdram, ctx);
        goto after_0;
    // 0x801EB0E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801EB0EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB0F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB0F4: jr          $ra
    // 0x801EB0F8: nop

    TRACE_RETURN()
    return;
    // 0x801EB0F8: nop

;}
RECOMP_FUNC void func_801EBCE8_5A7BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EBCE8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801EBCEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EBCF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801EBCF4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801EBCF8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x801EBCFC: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801EBD00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EBD04: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x801EBD08: jal         0x801E8C44
    // 0x801EBD0C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801EBD0C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    after_0:
    // 0x801EBD10: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x801EBD14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EBD18: jal         0x801E8C44
    // 0x801EBD1C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_1;
    // 0x801EBD1C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_1:
    // 0x801EBD20: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801EBD24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EBD28: jal         0x801E8C44
    // 0x801EBD2C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_2;
    // 0x801EBD2C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x801EBD30: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801EBD34: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x801EBD38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EBD3C: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x801EBD40: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x801EBD44: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x801EBD48: beq         $at, $zero, L_801EBDB0
    if (ctx->r1 == 0) {
        // 0x801EBD4C: lbu         $t1, 0x3F($sp)
        ctx->r9 = MEM_BU(ctx->r29, 0X3F);
            goto L_801EBDB0;
    }
    // 0x801EBD4C: lbu         $t1, 0x3F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3F);
    // 0x801EBD50: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801EBD54: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801EBD58: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x801EBD5C: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    // 0x801EBD60: jal         0x80034E08
    // 0x801EBD64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_3;
    // 0x801EBD64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x801EBD68: beq         $v0, $zero, L_801EBDB0
    if (ctx->r2 == 0) {
        // 0x801EBD6C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801EBDB0;
    }
    // 0x801EBD6C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801EBD70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EBD74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801EBD78: jal         0x80035EEC
    // 0x801EBD7C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_4;
    // 0x801EBD7C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x801EBD80: bne         $v0, $zero, L_801EBD94
    if (ctx->r2 != 0) {
        // 0x801EBD84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801EBD94;
    }
    // 0x801EBD84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EBD88: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801EBD8C: b           L_801EBDB0
    // 0x801EBD90: sb          $t3, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r11;
        goto L_801EBDB0;
    // 0x801EBD90: sb          $t3, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r11;
L_801EBD94:
    // 0x801EBD94: jal         0x801EBDC4
    // 0x801EBD98: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_801EBDC4_5A7CD4(rdram, ctx);
        goto after_5;
    // 0x801EBD98: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x801EBD9C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x801EBDA0: sw          $t4, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r12;
    // 0x801EBDA4: lbu         $t5, 0x3F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X3F);
    // 0x801EBDA8: sb          $zero, 0x60($s0)
    MEM_B(0X60, ctx->r16) = 0;
    // 0x801EBDAC: sb          $t5, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r13;
L_801EBDB0:
    // 0x801EBDB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EBDB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801EBDB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801EBDBC: jr          $ra
    // 0x801EBDC0: nop

    TRACE_RETURN()
    return;
    // 0x801EBDC0: nop

;}
RECOMP_FUNC void func_801FB230_5B7140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB230: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x801FB234: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801FB238: jr          $ra
    // 0x801FB23C: sb          $t6, -0x3AB3($at)
    MEM_B(-0X3AB3, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801FB23C: sb          $t6, -0x3AB3($at)
    MEM_B(-0X3AB3, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_801FA3FC_5B630C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA3FC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801FA400: addiu       $v0, $v0, -0x6614
    ctx->r2 = ADD32(ctx->r2, -0X6614);
    // 0x801FA404: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801FA408: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801FA40C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801FA410: sb          $a0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r4;
    // 0x801FA414: sb          $a1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r5;
    // 0x801FA418: jr          $ra
    // 0x801FA41C: sb          $a2, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r6;
    TRACE_RETURN()
    return;
    // 0x801FA41C: sb          $a2, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r6;
;}
RECOMP_FUNC void func_801D98E0_5957F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D98E0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D98E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D98E8: lw          $v0, -0x39DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39DC);
    // 0x801D98EC: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x801D98F0: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x801D98F4: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x801D98F8: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x801D98FC: lui         $t0, 0x8007
    ctx->r8 = S32(0X8007 << 16);
    // 0x801D9900: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x801D9904: lui         $t2, 0x8007
    ctx->r10 = S32(0X8007 << 16);
    // 0x801D9908: addiu       $t6, $t6, -0x2008
    ctx->r14 = ADD32(ctx->r14, -0X2008);
    // 0x801D990C: addiu       $t7, $t7, -0x2000
    ctx->r15 = ADD32(ctx->r15, -0X2000);
    // 0x801D9910: addiu       $t8, $t8, -0x1FF8
    ctx->r24 = ADD32(ctx->r24, -0X1FF8);
    // 0x801D9914: addiu       $t9, $t9, -0x1FF0
    ctx->r25 = ADD32(ctx->r25, -0X1FF0);
    // 0x801D9918: addiu       $t0, $t0, -0x1FE8
    ctx->r8 = ADD32(ctx->r8, -0X1FE8);
    // 0x801D991C: addiu       $t1, $t1, -0x1FE0
    ctx->r9 = ADD32(ctx->r9, -0X1FE0);
    // 0x801D9920: addiu       $t2, $t2, -0x1FD8
    ctx->r10 = ADD32(ctx->r10, -0X1FD8);
    // 0x801D9924: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D9928: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x801D992C: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x801D9930: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x801D9934: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x801D9938: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x801D993C: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x801D9940: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x801D9944: lbu         $a0, 0xE0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XE0);
    // 0x801D9948: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801D994C: beq         $a0, $zero, L_801D99F0
    if (ctx->r4 == 0) {
        // 0x801D9950: nop
    
            goto L_801D99F0;
    }
    // 0x801D9950: nop

    // 0x801D9954: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x801D9958: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x801D995C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801D9960: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x801D9964: lw          $a1, -0x33A4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X33A4);
    // 0x801D9968: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D996C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D9970: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x801D9974: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x801D9978: beq         $t5, $zero, L_801D99B4
    if (ctx->r13 == 0) {
        // 0x801D997C: or          $a0, $t5, $zero
        ctx->r4 = ctx->r13 | 0;
            goto L_801D99B4;
    }
    // 0x801D997C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
L_801D9980:
    // 0x801D9980: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801D9984: andi        $t8, $v1, 0xFF
    ctx->r24 = ctx->r3 & 0XFF;
    // 0x801D9988: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x801D998C: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x801D9990: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x801D9994: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x801D9998: sw          $a0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r4;
    // 0x801D999C: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x801D99A0: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x801D99A4: andi        $t9, $a3, 0xFF
    ctx->r25 = ctx->r7 & 0XFF;
    // 0x801D99A8: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x801D99AC: bne         $a0, $zero, L_801D9980
    if (ctx->r4 != 0) {
        // 0x801D99B0: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_801D9980;
    }
    // 0x801D99B0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_801D99B4:
    // 0x801D99B4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x801D99B8: sll         $t2, $a3, 2
    ctx->r10 = S32(ctx->r7 << 2);
    // 0x801D99BC: addu        $t3, $a2, $t2
    ctx->r11 = ADD32(ctx->r6, ctx->r10);
    // 0x801D99C0: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
    // 0x801D99C4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D99C8: lw          $a0, -0x39F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39F4);
    // 0x801D99CC: jal         0x8001C3E0
    // 0x801D99D0: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    func_8001C3E0_1CFE0(rdram, ctx);
        goto after_0;
    // 0x801D99D0: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    after_0:
    // 0x801D99D4: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801D99D8: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801D99DC: lw          $t5, -0x39F4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39F4);
    // 0x801D99E0: lbu         $t4, -0x2E00($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X2E00);
    // 0x801D99E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D99E8: sb          $t4, 0x5($t5)
    MEM_B(0X5, ctx->r13) = ctx->r12;
    // 0x801D99EC: lw          $v0, -0x39DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39DC);
L_801D99F0:
    // 0x801D99F0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D99F4: addiu       $a0, $a0, -0x39CC
    ctx->r4 = ADD32(ctx->r4, -0X39CC);
    // 0x801D99F8: sb          $zero, 0xE0($v0)
    MEM_B(0XE0, ctx->r2) = 0;
    // 0x801D99FC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x801D9A00: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D9A04: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801D9A08: sb          $t6, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r14;
    // 0x801D9A0C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x801D9A10: lw          $t0, -0x39D4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39D4);
    // 0x801D9A14: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D9A18: lbu         $t9, 0x64($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X64);
    // 0x801D9A1C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D9A20: sb          $t9, 0x64($t0)
    MEM_B(0X64, ctx->r8) = ctx->r25;
    // 0x801D9A24: lw          $v0, -0x39DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39DC);
    // 0x801D9A28: lhu         $v1, 0xE2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D9A2C: andi        $t1, $v1, 0x8000
    ctx->r9 = ctx->r3 & 0X8000;
    // 0x801D9A30: beql        $t1, $zero, L_801D9A9C
    if (ctx->r9 == 0) {
        // 0x801D9A34: andi        $t2, $v1, 0x7FFF
        ctx->r10 = ctx->r3 & 0X7FFF;
            goto L_801D9A9C;
    }
    goto skip_0;
    // 0x801D9A34: andi        $t2, $v1, 0x7FFF
    ctx->r10 = ctx->r3 & 0X7FFF;
    skip_0:
    // 0x801D9A38: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D9A3C: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x801D9A40: lw          $a0, -0x39EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39EC);
    // 0x801D9A44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D9A48: lw          $a1, 0x5C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X5C);
    // 0x801D9A4C: lhu         $a3, 0x94($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X94);
    // 0x801D9A50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801D9A54: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x801D9A58: jal         0x8001DB04
    // 0x801D9A5C: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    func_8001DB04_1E704(rdram, ctx);
        goto after_1;
    // 0x801D9A5C: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    after_1:
    // 0x801D9A60: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D9A64: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x801D9A68: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D9A6C: lw          $a0, -0x39F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39F4);
    // 0x801D9A70: lw          $a1, 0x5C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X5C);
    // 0x801D9A74: lhu         $a3, 0x94($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X94);
    // 0x801D9A78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801D9A7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D9A80: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x801D9A84: jal         0x8001DB04
    // 0x801D9A88: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    func_8001DB04_1E704(rdram, ctx);
        goto after_2;
    // 0x801D9A88: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    after_2:
    // 0x801D9A8C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D9A90: lw          $v0, -0x39DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39DC);
    // 0x801D9A94: lhu         $v1, 0xE2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D9A98: andi        $t2, $v1, 0x7FFF
    ctx->r10 = ctx->r3 & 0X7FFF;
L_801D9A9C:
    // 0x801D9A9C: sh          $t2, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r10;
    // 0x801D9AA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D9AA4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x801D9AA8: jr          $ra
    // 0x801D9AAC: nop

    TRACE_RETURN()
    return;
    // 0x801D9AAC: nop

;}
RECOMP_FUNC void func_801ED968_5A9878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED968: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801ED96C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801ED970: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801ED974: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801ED978: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801ED97C: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801ED980: lw          $s2, 0x18($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X18);
    // 0x801ED984: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801ED988: lw          $t6, 0x18($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X18);
    // 0x801ED98C: addiu       $t8, $t8, 0x4D48
    ctx->r24 = ADD32(ctx->r24, 0X4D48);
    // 0x801ED990: addiu       $t7, $sp, 0x48
    ctx->r15 = ADD32(ctx->r29, 0X48);
    // 0x801ED994: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x801ED998: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x801ED99C: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801ED9A0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801ED9A4: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
    // 0x801ED9A8: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x801ED9AC: lw          $t2, -0x3A1C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A1C);
    // 0x801ED9B0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801ED9B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801ED9B8: bgtzl       $t2, L_801ED9D0
    if (SIGNED(ctx->r10) > 0) {
        // 0x801ED9BC: lbu         $v0, 0x60($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0X60);
            goto L_801ED9D0;
    }
    goto skip_0;
    // 0x801ED9BC: lbu         $v0, 0x60($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X60);
    skip_0:
    // 0x801ED9C0: sb          $v0, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r2;
    // 0x801ED9C4: b           L_801EDB40
    // 0x801ED9C8: sb          $v0, 0x64($s2)
    MEM_B(0X64, ctx->r18) = ctx->r2;
        goto L_801EDB40;
    // 0x801ED9C8: sb          $v0, 0x64($s2)
    MEM_B(0X64, ctx->r18) = ctx->r2;
    // 0x801ED9CC: lbu         $v0, 0x60($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X60);
L_801ED9D0:
    // 0x801ED9D0: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x801ED9D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ED9D8: beq         $v0, $zero, L_801ED9FC
    if (ctx->r2 == 0) {
        // 0x801ED9DC: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_801ED9FC;
    }
    // 0x801ED9DC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801ED9E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801ED9E4: beq         $v0, $at, L_801EDA14
    if (ctx->r2 == ctx->r1) {
        // 0x801ED9E8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801EDA14;
    }
    // 0x801ED9E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801ED9EC: beq         $v0, $at, L_801EDA94
    if (ctx->r2 == ctx->r1) {
        // 0x801ED9F0: addiu       $s0, $s2, 0x8C
        ctx->r16 = ADD32(ctx->r18, 0X8C);
            goto L_801EDA94;
    }
    // 0x801ED9F0: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x801ED9F4: b           L_801EDAB0
    // 0x801ED9F8: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
        goto L_801EDAB0;
    // 0x801ED9F8: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
L_801ED9FC:
    // 0x801ED9FC: jal         0x801EE2EC
    // 0x801EDA00: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    func_801EE2EC_5AA1FC(rdram, ctx);
        goto after_0;
    // 0x801EDA00: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    after_0:
    // 0x801EDA04: beq         $v0, $zero, L_801EDAB0
    if (ctx->r2 == 0) {
        // 0x801EDA08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_801EDAB0;
    }
    // 0x801EDA08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801EDA0C: b           L_801EDAB0
    // 0x801EDA10: sb          $v0, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r2;
        goto L_801EDAB0;
    // 0x801EDA10: sb          $v0, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r2;
L_801EDA14:
    // 0x801EDA14: lbu         $t3, 0x90($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X90);
    // 0x801EDA18: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x801EDA1C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x801EDA20: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801EDA24: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x801EDA28: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x801EDA2C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x801EDA30: lhu         $t5, 0x7DB2($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X7DB2);
    // 0x801EDA34: andi        $t6, $t5, 0x4000
    ctx->r14 = ctx->r13 & 0X4000;
    // 0x801EDA38: bnel        $t6, $zero, L_801EDA48
    if (ctx->r14 != 0) {
        // 0x801EDA3C: lbu         $v0, 0xCC($v1)
        ctx->r2 = MEM_BU(ctx->r3, 0XCC);
            goto L_801EDA48;
    }
    goto skip_1;
    // 0x801EDA3C: lbu         $v0, 0xCC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XCC);
    skip_1:
    // 0x801EDA40: sb          $t0, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r8;
    // 0x801EDA44: lbu         $v0, 0xCC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XCC);
L_801EDA48:
    // 0x801EDA48: addiu       $at, $zero, 0x9D
    ctx->r1 = ADD32(0, 0X9D);
    // 0x801EDA4C: beq         $v0, $at, L_801EDA60
    if (ctx->r2 == ctx->r1) {
        // 0x801EDA50: addiu       $at, $zero, 0xA0
        ctx->r1 = ADD32(0, 0XA0);
            goto L_801EDA60;
    }
    // 0x801EDA50: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x801EDA54: beq         $v0, $at, L_801EDA60
    if (ctx->r2 == ctx->r1) {
        // 0x801EDA58: addiu       $t9, $zero, 0x2
        ctx->r25 = ADD32(0, 0X2);
            goto L_801EDA60;
    }
    // 0x801EDA58: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801EDA5C: sb          $t9, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r25;
L_801EDA60:
    // 0x801EDA60: lhu         $t7, 0x62($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X62);
    // 0x801EDA64: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801EDA68: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801EDA6C: andi        $t1, $t8, 0xFFFF
    ctx->r9 = ctx->r24 & 0XFFFF;
    // 0x801EDA70: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x801EDA74: mfhi        $t2
    ctx->r10 = hi;
    // 0x801EDA78: sh          $t8, 0x62($s1)
    MEM_H(0X62, ctx->r17) = ctx->r24;
    // 0x801EDA7C: bne         $t2, $zero, L_801EDA8C
    if (ctx->r10 != 0) {
        // 0x801EDA80: nop
    
            goto L_801EDA8C;
    }
    // 0x801EDA80: nop

    // 0x801EDA84: jal         0x80038BC8
    // 0x801EDA88: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801EDA88: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    after_1:
L_801EDA8C:
    // 0x801EDA8C: b           L_801EDAB0
    // 0x801EDA90: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
        goto L_801EDAB0;
    // 0x801EDA90: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
L_801EDA94:
    // 0x801EDA94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EDA98: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801EDA9C: jal         0x801EE330
    // 0x801EDAA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_2;
    // 0x801EDAA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x801EDAA4: beq         $v0, $zero, L_801EDAB0
    if (ctx->r2 == 0) {
        // 0x801EDAA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_801EDAB0;
    }
    // 0x801EDAA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801EDAAC: sb          $v0, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r2;
L_801EDAB0:
    // 0x801EDAB0: lbu         $t3, 0x61($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X61);
    // 0x801EDAB4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EDAB8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801EDABC: addu        $t5, $sp, $t4
    ctx->r13 = ADD32(ctx->r29, ctx->r12);
    // 0x801EDAC0: jal         0x801EE5F4
    // 0x801EDAC4: lw          $a1, 0x48($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X48);
    func_801EE5F4_5AA504(rdram, ctx);
        goto after_3;
    // 0x801EDAC4: lw          $a1, 0x48($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X48);
    after_3:
    // 0x801EDAC8: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x801EDACC: jal         0x801EE2BC
    // 0x801EDAD0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_801EE2BC_5AA1CC(rdram, ctx);
        goto after_4;
    // 0x801EDAD0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x801EDAD4: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x801EDAD8: jal         0x801EE25C
    // 0x801EDADC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_801EE25C_5AA16C(rdram, ctx);
        goto after_5;
    // 0x801EDADC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_5:
    // 0x801EDAE0: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x801EDAE4: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x801EDAE8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801EDAEC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801EDAF0: lbu         $t7, 0x3($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3);
    // 0x801EDAF4: addiu       $a2, $a2, 0x4C28
    ctx->r6 = ADD32(ctx->r6, 0X4C28);
    // 0x801EDAF8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EDAFC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801EDB00: lbu         $t8, 0x4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4);
    // 0x801EDB04: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x801EDB08: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EDB0C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801EDB10: lbu         $t1, 0x5($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X5);
    // 0x801EDB14: or          $a2, $t6, $at
    ctx->r6 = ctx->r14 | ctx->r1;
    // 0x801EDB18: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801EDB1C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801EDB20: lbu         $t2, 0x6($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X6);
    // 0x801EDB24: addiu       $a1, $s1, 0x9C
    ctx->r5 = ADD32(ctx->r17, 0X9C);
    // 0x801EDB28: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x801EDB2C: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
    // 0x801EDB30: jal         0x801DC554
    // 0x801EDB34: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    func_801DC554_598464(rdram, ctx);
        goto after_6;
    // 0x801EDB34: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_6:
    // 0x801EDB38: jal         0x801EDBB8
    // 0x801EDB3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801EDBB8_5A9AC8(rdram, ctx);
        goto after_7;
    // 0x801EDB3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
L_801EDB40:
    // 0x801EDB40: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801EDB44: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801EDB48: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801EDB4C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801EDB50: jr          $ra
    // 0x801EDB54: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801EDB54: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801F460C_5B051C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F460C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F4610: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4614: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F4618: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F461C: jal         0x801F4B6C
    // 0x801F4620: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801F4B6C_5B0A7C(rdram, ctx);
        goto after_0;
    // 0x801F4620: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_0:
    // 0x801F4624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F4628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F462C: jr          $ra
    // 0x801F4630: nop

    TRACE_RETURN()
    return;
    // 0x801F4630: nop

;}
RECOMP_FUNC void func_801E936C_5A527C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E936C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x801E9370: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801E9374: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801E9378: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801E937C: lhu         $t6, 0x62($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X62);
    // 0x801E9380: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E9384: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E9388: beql        $t6, $zero, L_801E93C8
    if (ctx->r14 == 0) {
        // 0x801E938C: sh          $zero, 0x6C($sp)
        MEM_H(0X6C, ctx->r29) = 0;
            goto L_801E93C8;
    }
    goto skip_0;
    // 0x801E938C: sh          $zero, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = 0;
    skip_0:
    // 0x801E9390: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x801E9394: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    // 0x801E9398: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x801E939C: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    // 0x801E93A0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E93A4: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801E93A8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x801E93AC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801E93B0: lwc1        $f8, 0xA4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x801E93B4: jal         0x8002A458
    // 0x801E93B8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_8002A458_2B058(rdram, ctx);
        goto after_0;
    // 0x801E93B8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801E93BC: b           L_801E93CC
    // 0x801E93C0: lhu         $t7, 0x62($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X62);
        goto L_801E93CC;
    // 0x801E93C0: lhu         $t7, 0x62($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X62);
    // 0x801E93C4: sh          $zero, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = 0;
L_801E93C8:
    // 0x801E93C8: lhu         $t7, 0x62($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X62);
L_801E93CC:
    // 0x801E93CC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801E93D0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801E93D4: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x801E93D8: slti        $at, $t9, 0x78
    ctx->r1 = SIGNED(ctx->r25) < 0X78 ? 1 : 0;
    // 0x801E93DC: beq         $at, $zero, L_801E93F4
    if (ctx->r1 == 0) {
        // 0x801E93E0: sh          $t8, 0x62($s0)
        MEM_H(0X62, ctx->r16) = ctx->r24;
            goto L_801E93F4;
    }
    // 0x801E93E0: sh          $t8, 0x62($s0)
    MEM_H(0X62, ctx->r16) = ctx->r24;
    // 0x801E93E4: lw          $t0, 0x5C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5C);
    // 0x801E93E8: lbu         $t1, 0x60($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X60);
    // 0x801E93EC: beql        $t1, $zero, L_801E9400
    if (ctx->r9 == 0) {
        // 0x801E93F0: lw          $t3, 0x34($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X34);
            goto L_801E9400;
    }
    goto skip_1;
    // 0x801E93F0: lw          $t3, 0x34($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X34);
    skip_1:
L_801E93F4:
    // 0x801E93F4: b           L_801E94F0
    // 0x801E93F8: sb          $t2, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r10;
        goto L_801E94F0;
    // 0x801E93F8: sb          $t2, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r10;
    // 0x801E93FC: lw          $t3, 0x34($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X34);
L_801E9400:
    // 0x801E9400: lh          $t4, 0x6C($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X6C);
    // 0x801E9404: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801E9408: bne         $t3, $zero, L_801E9414
    if (ctx->r11 != 0) {
        // 0x801E940C: lh          $t5, 0x6C($sp)
        ctx->r13 = MEM_H(ctx->r29, 0X6C);
            goto L_801E9414;
    }
    // 0x801E940C: lh          $t5, 0x6C($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X6C);
    // 0x801E9410: bne         $t4, $at, L_801E947C
    if (ctx->r12 != ctx->r1) {
        // 0x801E9414: addiu       $at, $zero, 0x7FFF
        ctx->r1 = ADD32(0, 0X7FFF);
            goto L_801E947C;
    }
L_801E9414:
    // 0x801E9414: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801E9418: bne         $t5, $at, L_801E944C
    if (ctx->r13 != ctx->r1) {
        // 0x801E941C: lwc1        $f16, 0x4C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_801E944C;
    }
    // 0x801E941C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E9420: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E9424: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801E9428: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E942C: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801E9430: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    // 0x801E9434: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E9438: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E943C: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
    // 0x801E9440: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E9444: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E9448: swc1        $f18, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f18.u32l;
L_801E944C:
    // 0x801E944C: jal         0x801E9504
    // 0x801E9450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E9504_5A5414(rdram, ctx);
        goto after_1;
    // 0x801E9450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E9454: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E9458: jal         0x8003521C
    // 0x801E945C: addiu       $a0, $a0, -0x6A44
    ctx->r4 = ADD32(ctx->r4, -0X6A44);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E945C: addiu       $a0, $a0, -0x6A44
    ctx->r4 = ADD32(ctx->r4, -0X6A44);
    after_2:
    // 0x801E9460: lbu         $t6, 0x60($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X60);
    // 0x801E9464: lbu         $t8, 0x30($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X30);
    // 0x801E9468: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801E946C: andi        $t9, $t8, 0xFFFD
    ctx->r25 = ctx->r24 & 0XFFFD;
    // 0x801E9470: sb          $t7, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r15;
    // 0x801E9474: b           L_801E94F0
    // 0x801E9478: sb          $t9, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r25;
        goto L_801E94F0;
    // 0x801E9478: sb          $t9, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r25;
L_801E947C:
    // 0x801E947C: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E9480: lwc1        $f6, 0x6C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x801E9484: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801E9488: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x801E948C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E9490: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801E9494: addiu       $a1, $s0, 0x9C
    ctx->r5 = ADD32(ctx->r16, 0X9C);
    // 0x801E9498: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E949C: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    // 0x801E94A0: lwc1        $f16, 0x70($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801E94A4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E94A8: swc1        $f18, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f18.u32l;
    // 0x801E94AC: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801E94B0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E94B4: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    // 0x801E94B8: lhu         $t0, 0xA8($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XA8);
    // 0x801E94BC: addiu       $t1, $t0, 0x80
    ctx->r9 = ADD32(ctx->r8, 0X80);
    // 0x801E94C0: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x801E94C4: sh          $t2, 0xA8($s0)
    MEM_H(0XA8, ctx->r16) = ctx->r10;
    // 0x801E94C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801E94CC: jal         0x8001DB04
    // 0x801E94D0: andi        $a3, $t2, 0xFFFF
    ctx->r7 = ctx->r10 & 0XFFFF;
    func_8001DB04_1E704(rdram, ctx);
        goto after_3;
    // 0x801E94D0: andi        $a3, $t2, 0xFFFF
    ctx->r7 = ctx->r10 & 0XFFFF;
    after_3:
    // 0x801E94D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E94D8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E94DC: jal         0x801E99CC
    // 0x801E94E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801E99CC_5A58DC(rdram, ctx);
        goto after_4;
    // 0x801E94E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x801E94E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E94E8: jal         0x801E97B8
    // 0x801E94EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801E97B8_5A56C8(rdram, ctx);
        goto after_5;
    // 0x801E94EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
L_801E94F0:
    // 0x801E94F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801E94F4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801E94F8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801E94FC: jr          $ra
    // 0x801E9500: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x801E9500: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_801EA0CC_5A5FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA0CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801EA0D0: jr          $ra
    // 0x801EA0D4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801EA0D4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E20A0_59DFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E20A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E20A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E20A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E20AC: jal         0x801E7DE8
    // 0x801E20B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801E20B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x801E20B4: beq         $v0, $zero, L_801E20CC
    if (ctx->r2 == 0) {
        // 0x801E20B8: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_801E20CC;
    }
    // 0x801E20B8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801E20BC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E20C0: lwc1        $f4, -0x4CF8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4CF8);
    // 0x801E20C4: b           L_801E20D8
    // 0x801E20C8: swc1        $f4, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f4.u32l;
        goto L_801E20D8;
    // 0x801E20C8: swc1        $f4, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f4.u32l;
L_801E20CC:
    // 0x801E20CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E20D0: nop

    // 0x801E20D4: swc1        $f6, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f6.u32l;
L_801E20D8:
    // 0x801E20D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E20DC: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801E20E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E20E4: swc1        $f8, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f8.u32l;
    // 0x801E20E8: sh          $zero, 0x30($t6)
    MEM_H(0X30, ctx->r14) = 0;
    // 0x801E20EC: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801E20F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E20F4: jal         0x801DD830
    // 0x801E20F8: sb          $zero, 0x2E($t7)
    MEM_B(0X2E, ctx->r15) = 0;
    func_801DD830_599740(rdram, ctx);
        goto after_1;
    // 0x801E20F8: sb          $zero, 0x2E($t7)
    MEM_B(0X2E, ctx->r15) = 0;
    after_1:
    // 0x801E20FC: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801E2100: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801E2104: lbu         $t9, 0x59($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X59);
    // 0x801E2108: beq         $t9, $zero, L_801E2128
    if (ctx->r25 == 0) {
        // 0x801E210C: nop
    
            goto L_801E2128;
    }
    // 0x801E210C: nop

    // 0x801E2110: jal         0x80038BC8
    // 0x801E2114: addiu       $a0, $zero, 0x28A
    ctx->r4 = ADD32(0, 0X28A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801E2114: addiu       $a0, $zero, 0x28A
    ctx->r4 = ADD32(0, 0X28A);
    after_2:
    // 0x801E2118: jal         0x80038BC8
    // 0x801E211C: addiu       $a0, $zero, 0x289
    ctx->r4 = ADD32(0, 0X289);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801E211C: addiu       $a0, $zero, 0x289
    ctx->r4 = ADD32(0, 0X289);
    after_3:
    // 0x801E2120: b           L_801E2170
    // 0x801E2124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E2170;
    // 0x801E2124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E2128:
    // 0x801E2128: lbu         $t0, -0x3594($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X3594);
    // 0x801E212C: beq         $t0, $zero, L_801E2144
    if (ctx->r8 == 0) {
        // 0x801E2130: nop
    
            goto L_801E2144;
    }
    // 0x801E2130: nop

    // 0x801E2134: jal         0x80038BC8
    // 0x801E2138: addiu       $a0, $zero, 0x289
    ctx->r4 = ADD32(0, 0X289);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801E2138: addiu       $a0, $zero, 0x289
    ctx->r4 = ADD32(0, 0X289);
    after_4:
    // 0x801E213C: b           L_801E2170
    // 0x801E2140: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E2170;
    // 0x801E2140: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E2144:
    // 0x801E2144: jal         0x801E7DE8
    // 0x801E2148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_5;
    // 0x801E2148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801E214C: beq         $v0, $zero, L_801E2164
    if (ctx->r2 == 0) {
        // 0x801E2150: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E2164;
    }
    // 0x801E2150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E2154: jal         0x80038BC8
    // 0x801E2158: addiu       $a0, $zero, 0x2B5
    ctx->r4 = ADD32(0, 0X2B5);
    func_80038BC8_397C8(rdram, ctx);
        goto after_6;
    // 0x801E2158: addiu       $a0, $zero, 0x2B5
    ctx->r4 = ADD32(0, 0X2B5);
    after_6:
    // 0x801E215C: b           L_801E2170
    // 0x801E2160: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E2170;
    // 0x801E2160: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E2164:
    // 0x801E2164: jal         0x801DD6E0
    // 0x801E2168: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_7;
    // 0x801E2168: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_7:
    // 0x801E216C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E2170:
    // 0x801E2170: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E2174: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E2178: jr          $ra
    // 0x801E217C: nop

    TRACE_RETURN()
    return;
    // 0x801E217C: nop

;}
RECOMP_FUNC void func_801F5314_5B1224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5314: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F531C: lbu         $t6, 0x30($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X30);
    // 0x801F5320: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801F5324: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F5328: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801F532C: sb          $t7, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r15;
    // 0x801F5330: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801F5334: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801F5338: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801F533C: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801F5340: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x801F5344: bc1fl       L_801F5368
    if (!c1cs) {
        // 0x801F5348: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_801F5368;
    }
    goto skip_0;
    // 0x801F5348: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_0:
    // 0x801F534C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801F5350: jal         0x801E8964
    // 0x801F5354: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_801E8964_5A4874(rdram, ctx);
        goto after_0;
    // 0x801F5354: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x801F5358: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801F535C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F5360: lwc1        $f0, 0x28($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801F5364: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
L_801F5368:
    // 0x801F5368: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F536C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801F5370: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x801F5374: nop

    // 0x801F5378: bc1f        L_801F53A8
    if (!c1cs) {
        // 0x801F537C: nop
    
            goto L_801F53A8;
    }
    // 0x801F537C: nop

    // 0x801F5380: lw          $v0, 0x5C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X5C);
    // 0x801F5384: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801F5388: lhu         $t8, 0x30($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X30);
    // 0x801F538C: bne         $t8, $zero, L_801F53A8
    if (ctx->r24 != 0) {
        // 0x801F5390: nop
    
            goto L_801F53A8;
    }
    // 0x801F5390: nop

    // 0x801F5394: sb          $t9, 0x84($v0)
    MEM_B(0X84, ctx->r2) = ctx->r25;
    // 0x801F5398: lw          $v0, 0x5C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X5C);
    // 0x801F539C: lhu         $t0, 0x30($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X30);
    // 0x801F53A0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x801F53A4: sh          $t1, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r9;
L_801F53A8:
    // 0x801F53A8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F53AC: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F53B0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801F53B4: jalr        $t9
    // 0x801F53B8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801F53B8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x801F53BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F53C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F53C4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801F53C8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F53CC: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801F53D0: lwc1        $f8, 0x28($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801F53D4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801F53D8: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x801F53DC: nop

    // 0x801F53E0: bc1fl       L_801F53F4
    if (!c1cs) {
        // 0x801F53E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F53F4;
    }
    goto skip_1;
    // 0x801F53E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801F53E8: jal         0x801DACDC
    // 0x801F53EC: addiu       $a1, $zero, 0x83
    ctx->r5 = ADD32(0, 0X83);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801F53EC: addiu       $a1, $zero, 0x83
    ctx->r5 = ADD32(0, 0X83);
    after_2:
    // 0x801F53F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F53F4:
    // 0x801F53F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F53F8: jr          $ra
    // 0x801F53FC: nop

    TRACE_RETURN()
    return;
    // 0x801F53FC: nop

;}
RECOMP_FUNC void func_801EED8C_5AAC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EED8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EED90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EED94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EED98: jal         0x801EEDF8
    // 0x801EED9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801EEDF8_5AAD08(rdram, ctx);
        goto after_0;
    // 0x801EED9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801EEDA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EEDA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EEDA8: jr          $ra
    // 0x801EEDAC: nop

    TRACE_RETURN()
    return;
    // 0x801EEDAC: nop

;}
RECOMP_FUNC void func_801F0F84_5ACE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0F84: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801F0F88: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801F0F8C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x801F0F90: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x801F0F94: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x801F0F98: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x801F0F9C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x801F0FA0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x801F0FA4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F0FA8: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801F0FAC: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801F0FB0: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801F0FB4: addiu       $t8, $t8, 0x4FB0
    ctx->r24 = ADD32(ctx->r24, 0X4FB0);
    // 0x801F0FB8: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x801F0FBC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801F0FC0: addiu       $t7, $sp, 0x58
    ctx->r15 = ADD32(ctx->r29, 0X58);
    // 0x801F0FC4: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801F0FC8: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x801F0FCC: lhu         $at, 0x4($t8)
    ctx->r1 = MEM_HU(ctx->r24, 0X4);
    // 0x801F0FD0: addiu       $t3, $t3, 0x4FB8
    ctx->r11 = ADD32(ctx->r11, 0X4FB8);
    // 0x801F0FD4: addiu       $t2, $sp, 0x50
    ctx->r10 = ADD32(ctx->r29, 0X50);
    // 0x801F0FD8: sh          $at, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r1;
    // 0x801F0FDC: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x801F0FE0: andi        $s3, $a1, 0xFF
    ctx->r19 = ctx->r5 & 0XFF;
    // 0x801F0FE4: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x801F0FE8: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x801F0FEC: lhu         $at, 0x4($t3)
    ctx->r1 = MEM_HU(ctx->r11, 0X4);
    // 0x801F0FF0: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x801F0FF4: jal         0x801EE8D8
    // 0x801F0FF8: sh          $at, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r1;
    func_801EE8D8_5AA7E8(rdram, ctx);
        goto after_0;
    // 0x801F0FF8: sh          $at, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r1;
    after_0:
    // 0x801F0FFC: bne         $v0, $zero, L_801F109C
    if (ctx->r2 != 0) {
        // 0x801F1000: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_801F109C;
    }
    // 0x801F1000: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801F1004: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x801F1008: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
    // 0x801F100C: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_801F1010:
    // 0x801F1010: lhu         $t0, 0x0($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X0);
    // 0x801F1014: lhu         $a3, 0x0($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X0);
    // 0x801F1018: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801F101C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801F1020: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x801F1024: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x801F1028: jal         0x801EE980
    // 0x801F102C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_801EE980_5AA890(rdram, ctx);
        goto after_1;
    // 0x801F102C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_1:
    // 0x801F1030: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801F1034: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x801F1038: bne         $s0, $s4, L_801F1010
    if (ctx->r16 != ctx->r20) {
        // 0x801F103C: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_801F1010;
    }
    // 0x801F103C: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x801F1040: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F1044: addiu       $a1, $a1, -0x910
    ctx->r5 = ADD32(ctx->r5, -0X910);
    // 0x801F1048: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801F104C: jal         0x80034E08
    // 0x801F1050: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_2;
    // 0x801F1050: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x801F1054: beq         $v0, $zero, L_801F109C
    if (ctx->r2 == 0) {
        // 0x801F1058: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801F109C;
    }
    // 0x801F1058: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801F105C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F1060: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x801F1064: jal         0x801EE4AC
    // 0x801F1068: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_3;
    // 0x801F1068: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x801F106C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F1070: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F1074: jal         0x80035EEC
    // 0x801F1078: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_4;
    // 0x801F1078: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x801F107C: bne         $v0, $zero, L_801F1090
    if (ctx->r2 != 0) {
        // 0x801F1080: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F1090;
    }
    // 0x801F1080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F1084: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801F1088: b           L_801F109C
    // 0x801F108C: sb          $t9, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r25;
        goto L_801F109C;
    // 0x801F108C: sb          $t9, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r25;
L_801F1090:
    // 0x801F1090: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801F1094: jal         0x801EEBBC
    // 0x801F1098: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_801EEBBC_5AAACC(rdram, ctx);
        goto after_5;
    // 0x801F1098: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_5:
L_801F109C:
    // 0x801F109C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801F10A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F10A4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x801F10A8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x801F10AC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x801F10B0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x801F10B4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x801F10B8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x801F10BC: jr          $ra
    // 0x801F10C0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x801F10C0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_801E8390_5A42A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E8394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E8398: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E839C: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E83A0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801E83A4: addiu       $at, $zero, 0x1A1
    ctx->r1 = ADD32(0, 0X1A1);
    // 0x801E83A8: lw          $v0, 0x80($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X80);
    // 0x801E83AC: beq         $v0, $zero, L_801E83BC
    if (ctx->r2 == 0) {
        // 0x801E83B0: nop
    
            goto L_801E83BC;
    }
    // 0x801E83B0: nop

    // 0x801E83B4: b           L_801E83BC
    // 0x801E83B8: lhu         $v1, 0x5C($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X5C);
        goto L_801E83BC;
    // 0x801E83B8: lhu         $v1, 0x5C($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X5C);
L_801E83BC:
    // 0x801E83BC: bne         $v1, $at, L_801E83E8
    if (ctx->r3 != ctx->r1) {
        // 0x801E83C0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E83E8;
    }
    // 0x801E83C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E83C4: jal         0x80038BC8
    // 0x801E83C8: addiu       $a0, $zero, 0x260
    ctx->r4 = ADD32(0, 0X260);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801E83C8: addiu       $a0, $zero, 0x260
    ctx->r4 = ADD32(0, 0X260);
    after_0:
    // 0x801E83CC: jal         0x801E2180
    // 0x801E83D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801E2180_59E090(rdram, ctx);
        goto after_1;
    // 0x801E83D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801E83D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E83D8: jal         0x801DACDC
    // 0x801E83DC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E83DC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_2:
    // 0x801E83E0: b           L_801E83E8
    // 0x801E83E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E83E8;
    // 0x801E83E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E83E8:
    // 0x801E83E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E83EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E83F0: jr          $ra
    // 0x801E83F4: nop

    TRACE_RETURN()
    return;
    // 0x801E83F4: nop

;}
RECOMP_FUNC void func_801FB270_5B7180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB270: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801FB274: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801FB278: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FB27C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB280: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FB284: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801FB288: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801FB28C: jal         0x801FB2A4
    // 0x801FB290: sb          $t6, -0x51DD($at)
    MEM_B(-0X51DD, ctx->r1) = ctx->r14;
    func_801FB2A4_5B71B4(rdram, ctx);
        goto after_0;
    // 0x801FB290: sb          $t6, -0x51DD($at)
    MEM_B(-0X51DD, ctx->r1) = ctx->r14;
    after_0:
    // 0x801FB294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FB298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FB29C: jr          $ra
    // 0x801FB2A0: nop

    TRACE_RETURN()
    return;
    // 0x801FB2A0: nop

;}
RECOMP_FUNC void func_801EEDD4_5AACE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EEDD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EEDD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EEDDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EEDE0: jal         0x801EEDF8
    // 0x801EEDE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801EEDF8_5AAD08(rdram, ctx);
        goto after_0;
    // 0x801EEDE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801EEDE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EEDEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EEDF0: jr          $ra
    // 0x801EEDF4: nop

    TRACE_RETURN()
    return;
    // 0x801EEDF4: nop

;}
RECOMP_FUNC void func_801E572C_5A163C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E572C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E5730: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E5734: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E5738: lbu         $t7, 0x60($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X60);
    // 0x801E573C: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801E5740: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E5744: bne         $t7, $zero, L_801E5768
    if (ctx->r15 != 0) {
        // 0x801E5748: nop
    
            goto L_801E5768;
    }
    // 0x801E5748: nop

    // 0x801E574C: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801E5750: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801E5754: lhu         $v0, 0x86($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X86);
    // 0x801E5758: beq         $v0, $zero, L_801E5768
    if (ctx->r2 == 0) {
        // 0x801E575C: nop
    
            goto L_801E5768;
    }
    // 0x801E575C: nop

    // 0x801E5760: bne         $v0, $at, L_801E5770
    if (ctx->r2 != ctx->r1) {
        // 0x801E5764: nop
    
            goto L_801E5770;
    }
    // 0x801E5764: nop

L_801E5768:
    // 0x801E5768: b           L_801E5778
    // 0x801E576C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5778;
    // 0x801E576C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E5770:
    // 0x801E5770: jal         0x801E5788
    // 0x801E5774: nop

    func_801E5788_5A1698(rdram, ctx);
        goto after_0;
    // 0x801E5774: nop

    after_0:
L_801E5778:
    // 0x801E5778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E577C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E5780: jr          $ra
    // 0x801E5784: nop

    TRACE_RETURN()
    return;
    // 0x801E5784: nop

;}
RECOMP_FUNC void func_801FACC4_5B6BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FACC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801FACC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FACCC: sw          $zero, -0x70A0($at)
    MEM_W(-0X70A0, ctx->r1) = 0;
    // 0x801FACD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FACD4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801FACD8: jal         0x801FACF0
    // 0x801FACDC: sw          $zero, -0x709C($at)
    MEM_W(-0X709C, ctx->r1) = 0;
    func_801FACF0_5B6C00(rdram, ctx);
        goto after_0;
    // 0x801FACDC: sw          $zero, -0x709C($at)
    MEM_W(-0X709C, ctx->r1) = 0;
    after_0:
    // 0x801FACE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FACE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FACE8: jr          $ra
    // 0x801FACEC: nop

    TRACE_RETURN()
    return;
    // 0x801FACEC: nop

;}
RECOMP_FUNC void func_801D416C_59007C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D416C: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x801D4170: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801D4174: sw          $s7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r23;
    // 0x801D4178: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x801D417C: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x801D4180: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x801D4184: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x801D4188: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x801D418C: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x801D4190: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x801D4194: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x801D4198: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x801D419C: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x801D41A0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x801D41A4: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    // 0x801D41A8: lhu         $t6, 0xD4($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD4);
    // 0x801D41AC: lui         $s7, 0x8020
    ctx->r23 = S32(0X8020 << 16);
    // 0x801D41B0: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x801D41B4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801D41B8: addiu       $s7, $s7, -0x3830
    ctx->r23 = ADD32(ctx->r23, -0X3830);
    // 0x801D41BC: addiu       $s4, $s4, -0x31E0
    ctx->r20 = ADD32(ctx->r20, -0X31E0);
    // 0x801D41C0: bgez        $t6, L_801D41D8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D41C4: cvt.s.w     $f24, $f4
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801D41D8;
    }
    // 0x801D41C4: cvt.s.w     $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D41C8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D41CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D41D0: nop

    // 0x801D41D4: add.s       $f24, $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f6.fl;
L_801D41D8:
    // 0x801D41D8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D41DC: sb          $zero, -0x3078($at)
    MEM_B(-0X3078, ctx->r1) = 0;
    // 0x801D41E0: lbu         $v0, 0x0($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X0);
    // 0x801D41E4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D41E8: lwc1        $f26, -0x53C0($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X53C0);
    // 0x801D41EC: blez        $v0, L_801D44A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x801D41F0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_801D44A0;
    }
    // 0x801D41F0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801D41F4: lui         $s6, 0x8021
    ctx->r22 = S32(0X8021 << 16);
    // 0x801D41F8: lui         $s5, 0x8021
    ctx->r21 = S32(0X8021 << 16);
    // 0x801D41FC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801D4200: addiu       $s5, $s5, -0x3350
    ctx->r21 = ADD32(ctx->r21, -0X3350);
    // 0x801D4204: addiu       $s6, $s6, -0x3260
    ctx->r22 = ADD32(ctx->r22, -0X3260);
    // 0x801D4208: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_801D420C:
    // 0x801D420C: addiu       $t7, $s2, 0x1
    ctx->r15 = ADD32(ctx->r18, 0X1);
    // 0x801D4210: bne         $v0, $t7, L_801D4234
    if (ctx->r2 != ctx->r15) {
        // 0x801D4214: sll         $t8, $v0, 3
        ctx->r24 = S32(ctx->r2 << 3);
            goto L_801D4234;
    }
    // 0x801D4214: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x801D4218: addu        $t9, $s5, $t8
    ctx->r25 = ADD32(ctx->r21, ctx->r24);
    // 0x801D421C: lbu         $t0, -0x8($t9)
    ctx->r8 = MEM_BU(ctx->r25, -0X8);
    // 0x801D4220: beq         $t0, $zero, L_801D44A0
    if (ctx->r8 == 0) {
        // 0x801D4224: nop
    
            goto L_801D44A0;
    }
    // 0x801D4224: nop

    // 0x801D4228: mul.s       $f14, $f24, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f14.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x801D422C: b           L_801D4244
    // 0x801D4230: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_801D4244;
    // 0x801D4230: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_801D4234:
    // 0x801D4234: addiu       $s3, $s2, 0x1
    ctx->r19 = ADD32(ctx->r18, 0X1);
    // 0x801D4238: andi        $t1, $s3, 0xFF
    ctx->r9 = ctx->r19 & 0XFF;
    // 0x801D423C: mul.s       $f14, $f24, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f14.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x801D4240: or          $s3, $t1, $zero
    ctx->r19 = ctx->r9 | 0;
L_801D4244:
    // 0x801D4244: sll         $t2, $s3, 3
    ctx->r10 = S32(ctx->r19 << 3);
    // 0x801D4248: addu        $v1, $s5, $t2
    ctx->r3 = ADD32(ctx->r21, ctx->r10);
    // 0x801D424C: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x801D4250: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D4254: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x801D4258: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x801D425C: lh          $t4, 0x4($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X4);
    // 0x801D4260: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D4264: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D4268: lh          $t5, 0x6($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X6);
    // 0x801D426C: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x801D4270: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x801D4274: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x801D4278: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x801D427C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x801D4280: nop

    // 0x801D4284: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D4288: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x801D428C: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D4290: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801D4294: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x801D4298: nop

    // 0x801D429C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D42A0: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x801D42A4: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D42A8: swc1        $f14, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f14.u32l;
    // 0x801D42AC: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x801D42B0: jal         0x8001D460
    // 0x801D42B4: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    func_8001D460_1E060(rdram, ctx);
        goto after_0;
    // 0x801D42B4: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801D42B8: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801D42BC: lwc1        $f18, 0xA4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801D42C0: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D42C4: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801D42C8: lwc1        $f16, 0xAC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801D42CC: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x801D42D0: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801D42D4: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    // 0x801D42D8: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x801D42DC: nop

    // 0x801D42E0: bc1fl       L_801D4308
    if (!c1cs) {
        // 0x801D42E4: c.lt.s      $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
            goto L_801D4308;
    }
    goto skip_0;
    // 0x801D42E4: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    skip_0:
    // 0x801D42E8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D42EC: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    // 0x801D42F0: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x801D42F4: sb          $s1, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r17;
    // 0x801D42F8: sb          $s3, 0x72($sp)
    MEM_B(0X72, ctx->r29) = ctx->r19;
    // 0x801D42FC: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x801D4300: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x801D4304: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
L_801D4308:
    // 0x801D4308: lwc1        $f16, 0xAC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801D430C: bc1fl       L_801D4488
    if (!c1cs) {
        // 0x801D4310: lbu         $v0, 0x0($s7)
        ctx->r2 = MEM_BU(ctx->r23, 0X0);
            goto L_801D4488;
    }
    goto skip_1;
    // 0x801D4310: lbu         $v0, 0x0($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X0);
    skip_1:
    // 0x801D4314: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x801D4318: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x801D431C: addu        $s0, $s6, $t8
    ctx->r16 = ADD32(ctx->r22, ctx->r24);
    // 0x801D4320: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D4324: add.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x801D4328: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x801D432C: c.le.s      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.fl <= ctx->f4.fl;
    // 0x801D4330: nop

    // 0x801D4334: bc1fl       L_801D4488
    if (!c1cs) {
        // 0x801D4338: lbu         $v0, 0x0($s7)
        ctx->r2 = MEM_BU(ctx->r23, 0X0);
            goto L_801D4488;
    }
    goto skip_2;
    // 0x801D4338: lbu         $v0, 0x0($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X0);
    skip_2:
    // 0x801D433C: beq         $s1, $zero, L_801D4354
    if (ctx->r17 == 0) {
        // 0x801D4340: sub.s       $f6, $f16, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f0.fl;
            goto L_801D4354;
    }
    // 0x801D4340: sub.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x801D4344: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x801D4348: addu        $t7, $s6, $t6
    ctx->r15 = ADD32(ctx->r22, ctx->r14);
    // 0x801D434C: b           L_801D4358
    // 0x801D4350: lwc1        $f2, -0x4($t7)
    ctx->f2.u32l = MEM_W(ctx->r15, -0X4);
        goto L_801D4358;
    // 0x801D4350: lwc1        $f2, -0x4($t7)
    ctx->f2.u32l = MEM_W(ctx->r15, -0X4);
L_801D4354:
    // 0x801D4354: mov.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
L_801D4358:
    // 0x801D4358: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D435C: sub.s       $f10, $f12, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x801D4360: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x801D4364: nop

    // 0x801D4368: bc1fl       L_801D4488
    if (!c1cs) {
        // 0x801D436C: lbu         $v0, 0x0($s7)
        ctx->r2 = MEM_BU(ctx->r23, 0X0);
            goto L_801D4488;
    }
    goto skip_3;
    // 0x801D436C: lbu         $v0, 0x0($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X0);
    skip_3:
    // 0x801D4370: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x801D4374: nop

    // 0x801D4378: bc1fl       L_801D43C4
    if (!c1cs) {
        // 0x801D437C: sub.s       $f8, $f16, $f20
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f20.fl;
            goto L_801D43C4;
    }
    goto skip_4;
    // 0x801D437C: sub.s       $f8, $f16, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f20.fl;
    skip_4:
    // 0x801D4380: lbu         $v0, 0x0($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X0);
    // 0x801D4384: addiu       $t9, $s2, 0x2
    ctx->r25 = ADD32(ctx->r18, 0X2);
    // 0x801D4388: bne         $v0, $t9, L_801D43E4
    if (ctx->r2 != ctx->r25) {
        // 0x801D438C: sll         $t0, $v0, 3
        ctx->r8 = S32(ctx->r2 << 3);
            goto L_801D43E4;
    }
    // 0x801D438C: sll         $t0, $v0, 3
    ctx->r8 = S32(ctx->r2 << 3);
    // 0x801D4390: addu        $t1, $s5, $t0
    ctx->r9 = ADD32(ctx->r21, ctx->r8);
    // 0x801D4394: lbu         $t2, -0x8($t1)
    ctx->r10 = MEM_BU(ctx->r9, -0X8);
    // 0x801D4398: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801D439C: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x801D43A0: bne         $t2, $zero, L_801D43E4
    if (ctx->r10 != 0) {
        // 0x801D43A4: nop
    
            goto L_801D43E4;
    }
    // 0x801D43A4: nop

    // 0x801D43A8: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x801D43AC: jal         0x801D458C
    // 0x801D43B0: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    func_801D458C_59049C(rdram, ctx);
        goto after_1;
    // 0x801D43B0: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    after_1:
    // 0x801D43B4: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D43B8: b           L_801D43E4
    // 0x801D43BC: lwc1        $f16, 0xAC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XAC);
        goto L_801D43E4;
    // 0x801D43BC: lwc1        $f16, 0xAC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801D43C0: sub.s       $f8, $f16, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f20.fl;
L_801D43C4:
    // 0x801D43C4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801D43C8: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x801D43CC: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    // 0x801D43D0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x801D43D4: jal         0x801D458C
    // 0x801D43D8: nop

    func_801D458C_59049C(rdram, ctx);
        goto after_2;
    // 0x801D43D8: nop

    after_2:
    // 0x801D43DC: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D43E0: lwc1        $f16, 0xAC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XAC);
L_801D43E4:
    // 0x801D43E4: beq         $s1, $zero, L_801D43FC
    if (ctx->r17 == 0) {
        // 0x801D43E8: add.s       $f0, $f16, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f20.fl;
            goto L_801D43FC;
    }
    // 0x801D43E8: add.s       $f0, $f16, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x801D43EC: sll         $t3, $s2, 2
    ctx->r11 = S32(ctx->r18 << 2);
    // 0x801D43F0: addu        $t4, $s6, $t3
    ctx->r12 = ADD32(ctx->r22, ctx->r11);
    // 0x801D43F4: b           L_801D4400
    // 0x801D43F8: lwc1        $f2, -0x4($t4)
    ctx->f2.u32l = MEM_W(ctx->r12, -0X4);
        goto L_801D4400;
    // 0x801D43F8: lwc1        $f2, -0x4($t4)
    ctx->f2.u32l = MEM_W(ctx->r12, -0X4);
L_801D43FC:
    // 0x801D43FC: mov.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
L_801D4400:
    // 0x801D4400: sub.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x801D4404: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801D4408: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x801D440C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x801D4410: nop

    // 0x801D4414: bc1fl       L_801D447C
    if (!c1cs) {
        // 0x801D4418: mfc1        $a3, $f0
        ctx->r7 = (int32_t)ctx->f0.u32l;
            goto L_801D447C;
    }
    goto skip_5;
    // 0x801D4418: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    skip_5:
    // 0x801D441C: bnel        $s1, $zero, L_801D4488
    if (ctx->r17 != 0) {
        // 0x801D4420: lbu         $v0, 0x0($s7)
        ctx->r2 = MEM_BU(ctx->r23, 0X0);
            goto L_801D4488;
    }
    goto skip_6;
    // 0x801D4420: lbu         $v0, 0x0($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X0);
    skip_6:
    // 0x801D4424: lbu         $t5, 0x0($s7)
    ctx->r13 = MEM_BU(ctx->r23, 0X0);
    // 0x801D4428: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x801D442C: addu        $t7, $s5, $t6
    ctx->r15 = ADD32(ctx->r21, ctx->r14);
    // 0x801D4430: lbu         $t8, -0x8($t7)
    ctx->r24 = MEM_BU(ctx->r15, -0X8);
    // 0x801D4434: bnel        $t8, $zero, L_801D4488
    if (ctx->r24 != 0) {
        // 0x801D4438: lbu         $v0, 0x0($s7)
        ctx->r2 = MEM_BU(ctx->r23, 0X0);
            goto L_801D4488;
    }
    goto skip_7;
    // 0x801D4438: lbu         $v0, 0x0($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X0);
    skip_7:
    // 0x801D443C: beq         $s1, $zero, L_801D4450
    if (ctx->r17 == 0) {
        // 0x801D4440: sll         $t9, $s2, 2
        ctx->r25 = S32(ctx->r18 << 2);
            goto L_801D4450;
    }
    // 0x801D4440: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x801D4444: addu        $t0, $s6, $t9
    ctx->r8 = ADD32(ctx->r22, ctx->r25);
    // 0x801D4448: b           L_801D4454
    // 0x801D444C: lwc1        $f2, -0x4($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, -0X4);
        goto L_801D4454;
    // 0x801D444C: lwc1        $f2, -0x4($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, -0X4);
L_801D4450:
    // 0x801D4450: mov.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
L_801D4454:
    // 0x801D4454: sub.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x801D4458: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801D445C: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x801D4460: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    // 0x801D4464: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x801D4468: jal         0x801D458C
    // 0x801D446C: nop

    func_801D458C_59049C(rdram, ctx);
        goto after_3;
    // 0x801D446C: nop

    after_3:
    // 0x801D4470: b           L_801D4488
    // 0x801D4474: lbu         $v0, 0x0($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X0);
        goto L_801D4488;
    // 0x801D4474: lbu         $v0, 0x0($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X0);
    // 0x801D4478: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
L_801D447C:
    // 0x801D447C: jal         0x801D458C
    // 0x801D4480: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    func_801D458C_59049C(rdram, ctx);
        goto after_4;
    // 0x801D4480: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    after_4:
    // 0x801D4484: lbu         $v0, 0x0($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X0);
L_801D4488:
    // 0x801D4488: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801D448C: andi        $s2, $s1, 0xFF
    ctx->r18 = ctx->r17 & 0XFF;
    // 0x801D4490: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801D4494: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x801D4498: bne         $at, $zero, L_801D420C
    if (ctx->r1 != 0) {
        // 0x801D449C: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_801D420C;
    }
    // 0x801D449C: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
L_801D44A0:
    // 0x801D44A0: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801D44A4: lbu         $t2, -0x3078($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X3078);
    // 0x801D44A8: lui         $s6, 0x8021
    ctx->r22 = S32(0X8021 << 16);
    // 0x801D44AC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801D44B0: bne         $t2, $zero, L_801D4550
    if (ctx->r10 != 0) {
        // 0x801D44B4: addiu       $s6, $s6, -0x3260
        ctx->r22 = ADD32(ctx->r22, -0X3260);
            goto L_801D4550;
    }
    // 0x801D44B4: addiu       $s6, $s6, -0x3260
    ctx->r22 = ADD32(ctx->r22, -0X3260);
    // 0x801D44B8: lwc1        $f20, 0x94($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801D44BC: lbu         $t3, 0x73($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X73);
    // 0x801D44C0: lbu         $t6, 0x73($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X73);
    // 0x801D44C4: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x801D44C8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801D44CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801D44D0: addu        $t8, $s6, $t7
    ctx->r24 = ADD32(ctx->r22, ctx->r15);
    // 0x801D44D4: bc1f        L_801D44E0
    if (!c1cs) {
        // 0x801D44D8: addu        $t5, $s6, $t4
        ctx->r13 = ADD32(ctx->r22, ctx->r12);
            goto L_801D44E0;
    }
    // 0x801D44D8: addu        $t5, $s6, $t4
    ctx->r13 = ADD32(ctx->r22, ctx->r12);
    // 0x801D44DC: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
L_801D44E0:
    // 0x801D44E0: beql        $t3, $zero, L_801D44F4
    if (ctx->r11 == 0) {
        // 0x801D44E4: mov.s       $f2, $f22
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
            goto L_801D44F4;
    }
    goto skip_8;
    // 0x801D44E4: mov.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
    skip_8:
    // 0x801D44E8: b           L_801D44F4
    // 0x801D44EC: lwc1        $f2, -0x4($t5)
    ctx->f2.u32l = MEM_W(ctx->r13, -0X4);
        goto L_801D44F4;
    // 0x801D44EC: lwc1        $f2, -0x4($t5)
    ctx->f2.u32l = MEM_W(ctx->r13, -0X4);
    // 0x801D44F0: mov.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
L_801D44F4:
    // 0x801D44F4: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    // 0x801D44F8: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x801D44FC: c.lt.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl < ctx->f20.fl;
    // 0x801D4500: nop

    // 0x801D4504: bc1fl       L_801D452C
    if (!c1cs) {
        // 0x801D4508: lbu         $a1, 0x73($sp)
        ctx->r5 = MEM_BU(ctx->r29, 0X73);
            goto L_801D452C;
    }
    goto skip_9;
    // 0x801D4508: lbu         $a1, 0x73($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X73);
    skip_9:
    // 0x801D450C: beq         $t6, $zero, L_801D4520
    if (ctx->r14 == 0) {
        // 0x801D4510: sll         $t9, $t6, 2
        ctx->r25 = S32(ctx->r14 << 2);
            goto L_801D4520;
    }
    // 0x801D4510: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x801D4514: addu        $t0, $s6, $t9
    ctx->r8 = ADD32(ctx->r22, ctx->r25);
    // 0x801D4518: b           L_801D4524
    // 0x801D451C: lwc1        $f2, -0x4($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, -0X4);
        goto L_801D4524;
    // 0x801D451C: lwc1        $f2, -0x4($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, -0X4);
L_801D4520:
    // 0x801D4520: mov.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
L_801D4524:
    // 0x801D4524: sub.s       $f20, $f0, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x801D4528: lbu         $a1, 0x73($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X73);
L_801D452C:
    // 0x801D452C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801D4530: addiu       $t3, $t3, -0x31E0
    ctx->r11 = ADD32(ctx->r11, -0X31E0);
    // 0x801D4534: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x801D4538: subu        $t2, $t2, $a1
    ctx->r10 = SUB32(ctx->r10, ctx->r5);
    // 0x801D453C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x801D4540: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801D4544: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x801D4548: jal         0x801D458C
    // 0x801D454C: lbu         $a2, 0x72($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X72);
    func_801D458C_59049C(rdram, ctx);
        goto after_5;
    // 0x801D454C: lbu         $a2, 0x72($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X72);
    after_5:
L_801D4550:
    // 0x801D4550: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x801D4554: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x801D4558: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x801D455C: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x801D4560: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x801D4564: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x801D4568: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x801D456C: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x801D4570: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x801D4574: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x801D4578: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x801D457C: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x801D4580: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x801D4584: jr          $ra
    // 0x801D4588: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    TRACE_RETURN()
    return;
    // 0x801D4588: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_801F55BC_5B14CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F55BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F55C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F55C4: jal         0x801E4530
    // 0x801F55C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E4530_5A0440(rdram, ctx);
        goto after_0;
    // 0x801F55C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F55CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F55D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F55D4: jr          $ra
    // 0x801F55D8: nop

    TRACE_RETURN()
    return;
    // 0x801F55D8: nop

;}
RECOMP_FUNC void func_801E8078_5A3F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8078: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x801E807C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801E8080: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x801E8084: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x801E8088: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x801E808C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x801E8090: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x801E8094: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x801E8098: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801E809C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801E80A0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E80A4: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x801E80A8: beq         $a1, $zero, L_801E8134
    if (ctx->r5 == 0) {
        // 0x801E80AC: lw          $s2, 0x18($a0)
        ctx->r18 = MEM_W(ctx->r4, 0X18);
            goto L_801E8134;
    }
    // 0x801E80AC: lw          $s2, 0x18($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X18);
    // 0x801E80B0: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x801E80B4: lui         $s6, 0x8021
    ctx->r22 = S32(0X8021 << 16);
    // 0x801E80B8: addiu       $s6, $s6, -0x2DE0
    ctx->r22 = ADD32(ctx->r22, -0X2DE0);
    // 0x801E80BC: beq         $a2, $zero, L_801E8134
    if (ctx->r6 == 0) {
        // 0x801E80C0: lui         $s5, 0x900
        ctx->r21 = S32(0X900 << 16);
            goto L_801E8134;
    }
    // 0x801E80C0: lui         $s5, 0x900
    ctx->r21 = S32(0X900 << 16);
    // 0x801E80C4: addiu       $s4, $zero, 0x80
    ctx->r20 = ADD32(0, 0X80);
    // 0x801E80C8: addiu       $s3, $sp, 0x44
    ctx->r19 = ADD32(ctx->r29, 0X44);
    // 0x801E80CC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_801E80D0:
    // 0x801E80D0: jal         0x8001B918
    // 0x801E80D4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8001B918_1C518(rdram, ctx);
        goto after_0;
    // 0x801E80D4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x801E80D8: beq         $v0, $zero, L_801E8134
    if (ctx->r2 == 0) {
        // 0x801E80DC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801E8134;
    }
    // 0x801E80DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801E80E0: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x801E80E4: sh          $s4, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = ctx->r20;
    // 0x801E80E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E80EC: jal         0x80014218
    // 0x801E80F0: sw          $t6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r14;
    func_80014218_14E18(rdram, ctx);
        goto after_1;
    // 0x801E80F0: sw          $t6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r14;
    after_1:
    // 0x801E80F4: lw          $t7, 0x40($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X40);
    // 0x801E80F8: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x801E80FC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x801E8100: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x801E8104: subu        $t0, $t9, $s5
    ctx->r8 = SUB32(ctx->r25, ctx->r21);
    // 0x801E8108: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x801E810C: lhu         $t1, 0x3C($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0X3C);
    // 0x801E8110: sh          $t1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r9;
    // 0x801E8114: lbu         $t2, 0x90($s7)
    ctx->r10 = MEM_BU(ctx->r23, 0X90);
    // 0x801E8118: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801E811C: addu        $t4, $s6, $t3
    ctx->r12 = ADD32(ctx->r22, ctx->r11);
    // 0x801E8120: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x801E8124: sw          $t5, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r13;
    // 0x801E8128: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x801E812C: bnel        $a2, $zero, L_801E80D0
    if (ctx->r6 != 0) {
        // 0x801E8130: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_801E80D0;
    }
    goto skip_0;
    // 0x801E8130: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_0:
L_801E8134:
    // 0x801E8134: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801E8138: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801E813C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801E8140: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x801E8144: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x801E8148: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x801E814C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x801E8150: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x801E8154: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x801E8158: jr          $ra
    // 0x801E815C: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    TRACE_RETURN()
    return;
    // 0x801E815C: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_801CB4C4_5873D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB4C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB4C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB4CC: jal         0x80004240
    // 0x801CB4D0: nop

    func_80004240_4E40(rdram, ctx);
        goto after_0;
    // 0x801CB4D0: nop

    after_0:
    // 0x801CB4D4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CB4D8: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CB4DC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB4E0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801CB4E4: jal         0x80003478
    // 0x801CB4E8: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    func_80003478_4078(rdram, ctx);
        goto after_1;
    // 0x801CB4E8: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    after_1:
    // 0x801CB4EC: jal         0x8000A0F0
    // 0x801CB4F0: nop

    func_8000A0F0_ACF0(rdram, ctx);
        goto after_2;
    // 0x801CB4F0: nop

    after_2:
    // 0x801CB4F4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB4F8: jal         0x8003488C
    // 0x801CB4FC: addiu       $a0, $a0, -0x4A3C
    ctx->r4 = ADD32(ctx->r4, -0X4A3C);
    func_8003488C_3548C(rdram, ctx);
        goto after_3;
    // 0x801CB4FC: addiu       $a0, $a0, -0x4A3C
    ctx->r4 = ADD32(ctx->r4, -0X4A3C);
    after_3:
    // 0x801CB500: jal         0x80035B50
    // 0x801CB504: nop

    func_80035B50_36750(rdram, ctx);
        goto after_4;
    // 0x801CB504: nop

    after_4:
    // 0x801CB508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB50C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB510: jr          $ra
    // 0x801CB514: nop

    TRACE_RETURN()
    return;
    // 0x801CB514: nop

;}
RECOMP_FUNC void func_801EB5FC_5A750C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB5FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB604: jal         0x801EB6BC
    // 0x801EB608: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EB6BC_5A75CC(rdram, ctx);
        goto after_0;
    // 0x801EB608: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EB60C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB614: jr          $ra
    // 0x801EB618: nop

    TRACE_RETURN()
    return;
    // 0x801EB618: nop

;}
RECOMP_FUNC void func_801DB1D4_5970E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB1D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DB1D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DB1DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DB1E0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801DB1E4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801DB1E8: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x801DB1EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DB1F0: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x801DB1F4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801DB1F8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801DB1FC: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801DB200: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x801DB204: c.eq.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d == ctx->f6.d;
    // 0x801DB208: nop

    // 0x801DB20C: bc1fl       L_801DB244
    if (!c1cs) {
        // 0x801DB210: lw          $t5, 0x24($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X24);
            goto L_801DB244;
    }
    goto skip_0;
    // 0x801DB210: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801DB214: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x801DB218: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801DB21C: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x801DB220: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
    // 0x801DB224: lbu         $t2, 0x2B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2B);
    // 0x801DB228: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x801DB22C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x801DB230: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x801DB234: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x801DB238: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x801DB23C: lbu         $a1, 0x4($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X4);
    // 0x801DB240: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
L_801DB244:
    // 0x801DB244: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x801DB248: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x801DB24C: addu        $a3, $t6, $a1
    ctx->r7 = ADD32(ctx->r14, ctx->r5);
    // 0x801DB250: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x801DB254: nop

    // 0x801DB258: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801DB25C: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x801DB260: nop

    // 0x801DB264: bc1tl       L_801DB2A8
    if (c1cs) {
        // 0x801DB268: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_801DB2A8;
    }
    goto skip_1;
    // 0x801DB268: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_1:
    // 0x801DB26C: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801DB270: lwc1        $f18, 0xD0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x801DB274: lwc1        $f16, 0x1C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x801DB278: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DB27C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801DB280: nop

    // 0x801DB284: bc1tl       L_801DB2A8
    if (c1cs) {
        // 0x801DB288: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_801DB2A8;
    }
    goto skip_2;
    // 0x801DB288: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_2:
    // 0x801DB28C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801DB290: nop

    // 0x801DB294: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x801DB298: nop

    // 0x801DB29C: bc1fl       L_801DB324
    if (!c1cs) {
        // 0x801DB2A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DB324;
    }
    goto skip_3;
    // 0x801DB2A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x801DB2A4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_801DB2A8:
    // 0x801DB2A8: lbu         $v1, 0x2B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X2B);
    // 0x801DB2AC: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x801DB2B0: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x801DB2B4: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x801DB2B8: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x801DB2BC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x801DB2C0: bc1tl       L_801DB2DC
    if (c1cs) {
        // 0x801DB2C4: sll         $t2, $v0, 3
        ctx->r10 = S32(ctx->r2 << 3);
            goto L_801DB2DC;
    }
    goto skip_4;
    // 0x801DB2C4: sll         $t2, $v0, 3
    ctx->r10 = S32(ctx->r2 << 3);
    skip_4:
    // 0x801DB2C8: beq         $a3, $zero, L_801DB2D8
    if (ctx->r7 == 0) {
        // 0x801DB2CC: addiu       $t9, $v0, 0x1
        ctx->r25 = ADD32(ctx->r2, 0X1);
            goto L_801DB2D8;
    }
    // 0x801DB2CC: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x801DB2D0: sb          $t9, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r25;
    // 0x801DB2D4: andi        $v0, $t9, 0xFF
    ctx->r2 = ctx->r25 & 0XFF;
L_801DB2D8:
    // 0x801DB2D8: sll         $t2, $v0, 3
    ctx->r10 = S32(ctx->r2 << 3);
L_801DB2DC:
    // 0x801DB2DC: addu        $t1, $t2, $t0
    ctx->r9 = ADD32(ctx->r10, ctx->r8);
    // 0x801DB2E0: addu        $t3, $t1, $v1
    ctx->r11 = ADD32(ctx->r9, ctx->r3);
    // 0x801DB2E4: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
    // 0x801DB2E8: beql        $a1, $zero, L_801DB324
    if (ctx->r5 == 0) {
        // 0x801DB2EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DB324;
    }
    goto skip_5;
    // 0x801DB2EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x801DB2F0: bne         $a1, $at, L_801DB318
    if (ctx->r5 != ctx->r1) {
        // 0x801DB2F4: nop
    
            goto L_801DB318;
    }
    // 0x801DB2F4: nop

    // 0x801DB2F8: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x801DB2FC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x801DB300: sb          $zero, 0x0($t4)
    MEM_B(0X0, ctx->r12) = 0;
    // 0x801DB304: lbu         $t5, 0x0($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X0);
    // 0x801DB308: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x801DB30C: addu        $t7, $t6, $t0
    ctx->r15 = ADD32(ctx->r14, ctx->r8);
    // 0x801DB310: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x801DB314: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
L_801DB318:
    // 0x801DB318: jal         0x801DC87C
    // 0x801DB31C: lbu         $a2, 0x33($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X33);
    func_801DC87C_59878C(rdram, ctx);
        goto after_0;
    // 0x801DB31C: lbu         $a2, 0x33($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X33);
    after_0:
    // 0x801DB320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB324:
    // 0x801DB324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DB328: jr          $ra
    // 0x801DB32C: nop

    TRACE_RETURN()
    return;
    // 0x801DB32C: nop

;}
RECOMP_FUNC void func_801E121C_59D12C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E121C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1220: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E1224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1228: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801E122C: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E1230: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E1234: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x801E1238: jalr        $t9
    // 0x801E123C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801E123C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x801E1240: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E1244: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E1248: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801E124C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801E1250: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E1254: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801E1258: addiu       $a1, $zero, 0xC6
    ctx->r5 = ADD32(0, 0XC6);
    // 0x801E125C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801E1260: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801E1264: nop

    // 0x801E1268: bc1fl       L_801E12B4
    if (!c1cs) {
        // 0x801E126C: lbu         $v0, 0x60($a3)
        ctx->r2 = MEM_BU(ctx->r7, 0X60);
            goto L_801E12B4;
    }
    goto skip_0;
    // 0x801E126C: lbu         $v0, 0x60($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X60);
    skip_0:
    // 0x801E1270: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801E1274: jal         0x801DACDC
    // 0x801E1278: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801E1278: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x801E127C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E1280: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E1284: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801E1288: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E128C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x801E1290: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x801E1294: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x801E1298: lw          $a2, 0x4360($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4360);
    // 0x801E129C: lw          $a1, 0x4340($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4340);
    // 0x801E12A0: jal         0x801E54E0
    // 0x801E12A4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    func_801E54E0_5A13F0(rdram, ctx);
        goto after_2;
    // 0x801E12A4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    after_2:
    // 0x801E12A8: b           L_801E12DC
    // 0x801E12AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E12DC;
    // 0x801E12AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E12B0: lbu         $v0, 0x60($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X60);
L_801E12B4:
    // 0x801E12B4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E12B8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801E12BC: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x801E12C0: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x801E12C4: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x801E12C8: lw          $a2, 0x4350($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4350);
    // 0x801E12CC: lw          $a1, 0x4340($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4340);
    // 0x801E12D0: jal         0x801E54E0
    // 0x801E12D4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    func_801E54E0_5A13F0(rdram, ctx);
        goto after_3;
    // 0x801E12D4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    after_3:
    // 0x801E12D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E12DC:
    // 0x801E12DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E12E0: jr          $ra
    // 0x801E12E4: nop

    TRACE_RETURN()
    return;
    // 0x801E12E4: nop

;}
RECOMP_FUNC void func_801E83F8_5A4308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E83F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E83FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E8400: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E8404: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E8408: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E840C: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E8410: jalr        $t9
    // 0x801E8414: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801E8414: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    after_0:
    // 0x801E8418: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801E841C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E8420: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E8424: lwc1        $f6, 0xD0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x801E8428: lwc1        $f4, 0x1C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x801E842C: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801E8430: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
    // 0x801E8434: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801E8438: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E843C: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x801E8440: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x801E8444: lhu         $t8, -0x3988($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X3988);
    // 0x801E8448: div.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f8.fl);
    // 0x801E844C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x801E8450: negu        $t0, $t8
    ctx->r8 = SUB32(0, ctx->r24);
    // 0x801E8454: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x801E8458: addu        $a3, $a3, $t6
    ctx->r7 = ADD32(ctx->r7, ctx->r14);
    // 0x801E845C: lh          $a3, -0x3990($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X3990);
    // 0x801E8460: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801E8464: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x801E8468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E846C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E8470: div.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    // 0x801E8474: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x801E8478: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x801E847C: nop

    // 0x801E8480: addiu       $a2, $t3, -0x1
    ctx->r6 = ADD32(ctx->r11, -0X1);
    // 0x801E8484: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x801E8488: jal         0x8003454C
    // 0x801E848C: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    func_8003454C_3514C(rdram, ctx);
        goto after_1;
    // 0x801E848C: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    after_1:
    // 0x801E8490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E8494: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E8498: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E849C: jr          $ra
    // 0x801E84A0: nop

    TRACE_RETURN()
    return;
    // 0x801E84A0: nop

;}
RECOMP_FUNC void func_801F70DC_5B2FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F70DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F70E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F70E4: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x801F70E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F70EC: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801F70F0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x801F70F4: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x801F70F8: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x801F70FC: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x801F7100: sw          $t6, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r14;
    // 0x801F7104: sh          $t7, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r15;
    // 0x801F7108: sh          $t8, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r24;
    // 0x801F710C: sh          $zero, 0x52($a0)
    MEM_H(0X52, ctx->r4) = 0;
    // 0x801F7110: sb          $t9, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r25;
    // 0x801F7114: addiu       $a0, $zero, 0x280
    ctx->r4 = ADD32(0, 0X280);
    // 0x801F7118: jal         0x80038BC8
    // 0x801F711C: swc1        $f4, 0xAC($t0)
    MEM_W(0XAC, ctx->r8) = ctx->f4.u32l;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801F711C: swc1        $f4, 0xAC($t0)
    MEM_W(0XAC, ctx->r8) = ctx->f4.u32l;
    after_0:
    // 0x801F7120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F7124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F7128: jr          $ra
    // 0x801F712C: nop

    TRACE_RETURN()
    return;
    // 0x801F712C: nop

;}
RECOMP_FUNC void func_801F0F58_5ACE68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0F58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F0F5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F0F60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F0F64: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801F0F68: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801F0F6C: jal         0x801F0F84
    // 0x801F0F70: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801F0F84_5ACE94(rdram, ctx);
        goto after_0;
    // 0x801F0F70: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x801F0F74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F0F78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F0F7C: jr          $ra
    // 0x801F0F80: nop

    TRACE_RETURN()
    return;
    // 0x801F0F80: nop

;}
RECOMP_FUNC void func_801F25D8_5AE4E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F25D8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801F25DC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801F25E0: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x801F25E4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x801F25E8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F25EC: addiu       $a2, $a2, -0x39FC
    ctx->r6 = ADD32(ctx->r6, -0X39FC);
    // 0x801F25F0: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x801F25F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F25F8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801F25FC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801F2600: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x801F2604: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x801F2608: lw          $s1, 0x5C($t6)
    ctx->r17 = MEM_W(ctx->r14, 0X5C);
    // 0x801F260C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F2610: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x801F2614: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801F2618: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F261C: lwc1        $f6, 0x10($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X10);
    // 0x801F2620: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
    // 0x801F2624: lwc1        $f12, 0x54($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X54);
    // 0x801F2628: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x801F262C: nop

    // 0x801F2630: bc1fl       L_801F2644
    if (!c1cs) {
        // 0x801F2634: mov.s       $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
            goto L_801F2644;
    }
    goto skip_0;
    // 0x801F2634: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    skip_0:
    // 0x801F2638: b           L_801F2644
    // 0x801F263C: neg.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = -ctx->f12.fl;
        goto L_801F2644;
    // 0x801F263C: neg.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = -ctx->f12.fl;
    // 0x801F2640: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
L_801F2644:
    // 0x801F2644: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F2648: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F264C: ldc1        $f10, -0x40A0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X40A0);
    // 0x801F2650: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801F2654: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x801F2658: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F265C: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801F2660: mul.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801F2664: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x801F2668: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801F266C: mul.d       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f18.d);
    // 0x801F2670: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x801F2674: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801F2678: nop

    // 0x801F267C: bc1fl       L_801F268C
    if (!c1cs) {
        // 0x801F2680: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_801F268C;
    }
    goto skip_1;
    // 0x801F2680: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_1:
    // 0x801F2684: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    // 0x801F2688: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_801F268C:
    // 0x801F268C: nop

    // 0x801F2690: bc1fl       L_801F26A0
    if (!c1cs) {
        // 0x801F2694: lbu         $t9, 0x58($s1)
        ctx->r25 = MEM_BU(ctx->r17, 0X58);
            goto L_801F26A0;
    }
    goto skip_2;
    // 0x801F2694: lbu         $t9, 0x58($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X58);
    skip_2:
    // 0x801F2698: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801F269C: lbu         $t9, 0x58($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X58);
L_801F26A0:
    // 0x801F26A0: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801F26A4: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F26A8: addiu       $t0, $t9, -0x28
    ctx->r8 = ADD32(ctx->r25, -0X28);
    // 0x801F26AC: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x801F26B0: nop

    // 0x801F26B4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F26B8: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x801F26BC: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801F26C0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801F26C4: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x801F26C8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x801F26CC: jal         0x801E7E40
    // 0x801F26D0: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    func_801E7E40_5A3D50(rdram, ctx);
        goto after_0;
    // 0x801F26D0: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    after_0:
    // 0x801F26D4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F26D8: beq         $v0, $zero, L_801F2714
    if (ctx->r2 == 0) {
        // 0x801F26DC: lwc1        $f0, 0x40($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
            goto L_801F2714;
    }
    // 0x801F26DC: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801F26E0: lwc1        $f2, 0x1C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F26E4: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801F26E8: c.eq.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl == ctx->f8.fl;
    // 0x801F26EC: nop

    // 0x801F26F0: bc1fl       L_801F2718
    if (!c1cs) {
        // 0x801F26F4: swc1        $f0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
            goto L_801F2718;
    }
    goto skip_3;
    // 0x801F26F4: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    skip_3:
    // 0x801F26F8: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x801F26FC: addiu       $a0, $zero, 0x287
    ctx->r4 = ADD32(0, 0X287);
    // 0x801F2700: bc1tl       L_801F2718
    if (c1cs) {
        // 0x801F2704: swc1        $f0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
            goto L_801F2718;
    }
    goto skip_4;
    // 0x801F2704: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    skip_4:
    // 0x801F2708: jal         0x80038B98
    // 0x801F270C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_80038B98_39798(rdram, ctx);
        goto after_1;
    // 0x801F270C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801F2710: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
L_801F2714:
    // 0x801F2714: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_801F2718:
    // 0x801F2718: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x801F271C: sh          $zero, 0x50($sp)
    MEM_H(0X50, ctx->r29) = 0;
    // 0x801F2720: sh          $zero, 0x52($sp)
    MEM_H(0X52, ctx->r29) = 0;
    // 0x801F2724: sh          $zero, 0x54($sp)
    MEM_H(0X54, ctx->r29) = 0;
    // 0x801F2728: lwc1        $f10, 0xB8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XB8);
    // 0x801F272C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x801F2730: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x801F2734: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x801F2738: lwc1        $f18, 0xBC($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XBC);
    // 0x801F273C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F2740: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801F2744: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x801F2748: lwc1        $f4, 0xC0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC0);
    // 0x801F274C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801F2750: jal         0x8001DB04
    // 0x801F2754: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    func_8001DB04_1E704(rdram, ctx);
        goto after_2;
    // 0x801F2754: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x801F2758: lhu         $t1, 0x50($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X50);
    // 0x801F275C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F2760: sh          $t1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r9;
    // 0x801F2764: lhu         $t2, 0x52($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X52);
    // 0x801F2768: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    // 0x801F276C: lhu         $t3, 0x54($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X54);
    // 0x801F2770: sh          $t3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r11;
    // 0x801F2774: lbu         $t4, 0xAA($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0XAA);
    // 0x801F2778: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x801F277C: bne         $t4, $zero, L_801F2790
    if (ctx->r12 != 0) {
        // 0x801F2780: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_801F2790;
    }
    // 0x801F2780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801F2784: sb          $v0, 0x65($t5)
    MEM_B(0X65, ctx->r13) = ctx->r2;
    // 0x801F2788: b           L_801F2798
    // 0x801F278C: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
        goto L_801F2798;
    // 0x801F278C: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
L_801F2790:
    // 0x801F2790: jal         0x801E8858
    // 0x801F2794: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_801E8858_5A4768(rdram, ctx);
        goto after_3;
    // 0x801F2794: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
L_801F2798:
    // 0x801F2798: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801F279C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801F27A0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801F27A4: jr          $ra
    // 0x801F27A8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801F27A8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801EE8D8_5AA7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE8D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801EE8DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EE8E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801EE8E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EE8E8: jal         0x801E8C44
    // 0x801EE8EC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801EE8EC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_0:
    // 0x801EE8F0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801EE8F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE8F8: jal         0x801E8C44
    // 0x801EE8FC: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_1;
    // 0x801EE8FC: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    after_1:
    // 0x801EE900: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x801EE904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE908: jal         0x801E8C44
    // 0x801EE90C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_2;
    // 0x801EE90C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_2:
    // 0x801EE910: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x801EE914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE918: jal         0x801E8C44
    // 0x801EE91C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_3;
    // 0x801EE91C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_3:
    // 0x801EE920: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x801EE924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE928: jal         0x801E8C44
    // 0x801EE92C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_4;
    // 0x801EE92C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_4:
    // 0x801EE930: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x801EE934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE938: jal         0x801E8C44
    // 0x801EE93C: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_5;
    // 0x801EE93C: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_5:
    // 0x801EE940: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x801EE944: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x801EE948: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x801EE94C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x801EE950: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x801EE954: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x801EE958: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x801EE95C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x801EE960: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EE964: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x801EE968: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x801EE96C: slti        $t5, $v0, 0x3
    ctx->r13 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x801EE970: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801EE974: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801EE978: jr          $ra
    // 0x801EE97C: xori        $v0, $t5, 0x1
    ctx->r2 = ctx->r13 ^ 0X1;
    TRACE_RETURN()
    return;
    // 0x801EE97C: xori        $v0, $t5, 0x1
    ctx->r2 = ctx->r13 ^ 0X1;
;}
RECOMP_FUNC void func_801DA84C_59675C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA84C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DA850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DA854: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DA858: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801DA85C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA860: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DA864: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    // 0x801DA868: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DA86C: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801DA870: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801DA874: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801DA878: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801DA87C: swc1        $f2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f2.u32l;
    // 0x801DA880: swc1        $f2, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f2.u32l;
    // 0x801DA884: swc1        $f2, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f2.u32l;
    // 0x801DA888: jal         0x801E7DE8
    // 0x801DA88C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801DA88C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DA890: beq         $v0, $zero, L_801DA8A8
    if (ctx->r2 == 0) {
        // 0x801DA894: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801DA8A8;
    }
    // 0x801DA894: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DA898: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DA89C: lwc1        $f4, -0x50D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X50D4);
    // 0x801DA8A0: b           L_801DA8B8
    // 0x801DA8A4: swc1        $f4, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f4.u32l;
        goto L_801DA8B8;
    // 0x801DA8A4: swc1        $f4, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f4.u32l;
L_801DA8A8:
    // 0x801DA8A8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801DA8AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DA8B0: nop

    // 0x801DA8B4: swc1        $f6, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f6.u32l;
L_801DA8B8:
    // 0x801DA8B8: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x801DA8BC: lw          $t2, 0x5C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X5C);
    // 0x801DA8C0: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x801DA8C4: addiu       $t9, $t8, 0x200
    ctx->r25 = ADD32(ctx->r24, 0X200);
    // 0x801DA8C8: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x801DA8CC: ori         $t1, $t0, 0x400
    ctx->r9 = ctx->r8 | 0X400;
    // 0x801DA8D0: sh          $t1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r9;
    // 0x801DA8D4: jal         0x801DACDC
    // 0x801DA8D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801DA8D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x801DA8DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DA8E0: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801DA8E4: lbu         $t3, 0x90($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X90);
    // 0x801DA8E8: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801DA8EC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801DA8F0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x801DA8F4: lw          $t5, -0x39F4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39F4);
    // 0x801DA8F8: lwc1        $f8, 0xC($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0XC);
    // 0x801DA8FC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801DA900: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x801DA904: nop

    // 0x801DA908: sh          $t7, 0x32($t8)
    MEM_H(0X32, ctx->r24) = ctx->r15;
    // 0x801DA90C: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801DA910: sh          $zero, 0x30($t9)
    MEM_H(0X30, ctx->r25) = 0;
    // 0x801DA914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DA918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DA91C: jr          $ra
    // 0x801DA920: nop

    TRACE_RETURN()
    return;
    // 0x801DA920: nop

;}
RECOMP_FUNC void func_801E10C0_59CFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E10C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E10C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E10C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E10CC: jal         0x801E1150
    // 0x801E10D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E1150_59D060(rdram, ctx);
        goto after_0;
    // 0x801E10D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E10D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E10D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E10DC: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E10E0: beq         $v0, $at, L_801E10F0
    if (ctx->r2 == ctx->r1) {
        // 0x801E10E4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801E10F0;
    }
    // 0x801E10E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E10E8: bnel        $v0, $at, L_801E10FC
    if (ctx->r2 != ctx->r1) {
        // 0x801E10EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E10FC;
    }
    goto skip_0;
    // 0x801E10EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_801E10F0:
    // 0x801E10F0: jal         0x801E84A4
    // 0x801E10F4: nop

    func_801E84A4_5A43B4(rdram, ctx);
        goto after_1;
    // 0x801E10F4: nop

    after_1:
    // 0x801E10F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E10FC:
    // 0x801E10FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1100: jr          $ra
    // 0x801E1104: nop

    TRACE_RETURN()
    return;
    // 0x801E1104: nop

;}
RECOMP_FUNC void func_801E7D78_5A3C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7D78: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801E7D7C: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x801E7D80: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801E7D84: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x801E7D88: sub.s       $f2, $f12, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x801E7D8C: mul.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x801E7D90: nop

    // 0x801E7D94: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801E7D98: jr          $ra
    // 0x801E7D9C: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    TRACE_RETURN()
    return;
    // 0x801E7D9C: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
;}
RECOMP_FUNC void func_801E964C_5A555C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E964C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x801E9650: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E9654: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801E9658: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801E965C: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x801E9660: lw          $v0, 0x9C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9C);
    // 0x801E9664: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E9668: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x801E966C: lbu         $v1, 0x60($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X60);
    // 0x801E9670: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801E9674: lw          $s1, 0x18($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X18);
    // 0x801E9678: bnel        $v1, $zero, L_801E97A4
    if (ctx->r3 != 0) {
        // 0x801E967C: sb          $t1, 0x64($s0)
        MEM_B(0X64, ctx->r16) = ctx->r9;
            goto L_801E97A4;
    }
    goto skip_0;
    // 0x801E967C: sb          $t1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r9;
    skip_0:
    // 0x801E9680: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x801E9684: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x801E9688: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    // 0x801E968C: jal         0x8002A718
    // 0x801E9690: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    func_8002A718_2B318(rdram, ctx);
        goto after_0;
    // 0x801E9690: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    after_0:
    // 0x801E9694: lh          $t7, 0x6C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6C);
    // 0x801E9698: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x801E969C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E96A0: beq         $t7, $zero, L_801E9798
    if (ctx->r15 == 0) {
        // 0x801E96A4: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_801E9798;
    }
    // 0x801E96A4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801E96A8: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x801E96AC: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E96B0: lwc1        $f4, -0x47EC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X47EC);
    // 0x801E96B4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E96B8: ldc1        $f16, -0x47E8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X47E8);
    // 0x801E96BC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E96C0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E96C4: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x801E96C8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801E96CC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x801E96D0: lhu         $a0, 0xA8($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0XA8);
    // 0x801E96D4: jal         0x80003EA0
    // 0x801E96D8: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_1;
    // 0x801E96D8: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    after_1:
    // 0x801E96DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E96E0: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x801E96E4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x801E96E8: nop

    // 0x801E96EC: bc1f        L_801E9704
    if (!c1cs) {
        // 0x801E96F0: nop
    
            goto L_801E9704;
    }
    // 0x801E96F0: nop

    // 0x801E96F4: jal         0x80003EA0
    // 0x801E96F8: lhu         $a0, 0xA8($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0XA8);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_2;
    // 0x801E96F8: lhu         $a0, 0xA8($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0XA8);
    after_2:
    // 0x801E96FC: b           L_801E9710
    // 0x801E9700: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801E9710;
    // 0x801E9700: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_801E9704:
    // 0x801E9704: jal         0x80003EA0
    // 0x801E9708: lhu         $a0, 0xA8($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0XA8);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_3;
    // 0x801E9708: lhu         $a0, 0xA8($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0XA8);
    after_3:
    // 0x801E970C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801E9710:
    // 0x801E9710: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9714: lwc1        $f8, -0x47E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X47E0);
    // 0x801E9718: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801E971C: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x801E9720: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x801E9724: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9728: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x801E972C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x801E9730: add.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x801E9734: swc1        $f16, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f16.u32l;
    // 0x801E9738: lwc1        $f18, -0x47DC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X47DC);
    // 0x801E973C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9740: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x801E9744: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x801E9748: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x801E974C: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E9750: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x801E9754: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E9758: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801E975C: ldc1        $f18, -0x47D8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X47D8);
    // 0x801E9760: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E9764: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E9768: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x801E976C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E9770: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x801E9774: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801E9778: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x801E977C: lhu         $t8, 0xA4($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XA4);
    // 0x801E9780: lhu         $a3, 0xA2($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0XA2);
    // 0x801E9784: lhu         $a2, 0xA0($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0XA0);
    // 0x801E9788: jal         0x8001DB04
    // 0x801E978C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8001DB04_1E704(rdram, ctx);
        goto after_4;
    // 0x801E978C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_4:
    // 0x801E9790: b           L_801E97A8
    // 0x801E9794: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801E97A8;
    // 0x801E9794: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E9798:
    // 0x801E9798: b           L_801E97A4
    // 0x801E979C: sb          $t9, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r25;
        goto L_801E97A4;
    // 0x801E979C: sb          $t9, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r25;
    // 0x801E97A0: sb          $t1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r9;
L_801E97A4:
    // 0x801E97A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E97A8:
    // 0x801E97A8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801E97AC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801E97B0: jr          $ra
    // 0x801E97B4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x801E97B4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_801DF858_59B768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF858: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DF85C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DF860: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801DF864: lbu         $t6, 0x59($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X59);
    // 0x801DF868: bnel        $t6, $zero, L_801DF8A8
    if (ctx->r14 != 0) {
        // 0x801DF86C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DF8A8;
    }
    goto skip_0;
    // 0x801DF86C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801DF870: lhu         $t7, 0x98($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X98);
    // 0x801DF874: beql        $t7, $zero, L_801DF8A8
    if (ctx->r15 == 0) {
        // 0x801DF878: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DF8A8;
    }
    goto skip_1;
    // 0x801DF878: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801DF87C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DF880: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DF884: swc1        $f0, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f0.u32l;
    // 0x801DF888: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801DF88C: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x801DF890: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801DF894: jal         0x801DACDC
    // 0x801DF898: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_0;
    // 0x801DF898: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x801DF89C: b           L_801DF8A8
    // 0x801DF8A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DF8A8;
    // 0x801DF8A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DF8A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DF8A8:
    // 0x801DF8A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DF8AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DF8B0: jr          $ra
    // 0x801DF8B4: nop

    TRACE_RETURN()
    return;
    // 0x801DF8B4: nop

;}
RECOMP_FUNC void func_801E55A0_5A14B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E55A0: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E55A4: lw          $v0, 0x8C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8C);
    // 0x801E55A8: beq         $v0, $zero, L_801E55CC
    if (ctx->r2 == 0) {
        // 0x801E55AC: nop
    
            goto L_801E55CC;
    }
    // 0x801E55AC: nop

    // 0x801E55B0: lw          $t7, 0x68($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X68);
    // 0x801E55B4: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x801E55B8: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x801E55BC: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x801E55C0: sw          $t8, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r24;
    // 0x801E55C4: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801E55C8: sw          $zero, 0x8C($t9)
    MEM_W(0X8C, ctx->r25) = 0;
L_801E55CC:
    // 0x801E55CC: jr          $ra
    // 0x801E55D0: nop

    TRACE_RETURN()
    return;
    // 0x801E55D0: nop

;}
RECOMP_FUNC void func_801E15C0_59D4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E15C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E15C4: jr          $ra
    // 0x801E15C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E15C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F5B04_5B1A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5B04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5B08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5B0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F5B10: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801F5B14: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801F5B18: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x801F5B1C: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x801F5B20: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x801F5B24: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801F5B28: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x801F5B2C: jal         0x801E4078
    // 0x801F5B30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E4078_59FF88(rdram, ctx);
        goto after_0;
    // 0x801F5B30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F5B34: beq         $v0, $zero, L_801F5B58
    if (ctx->r2 == 0) {
        // 0x801F5B38: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801F5B58;
    }
    // 0x801F5B38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F5B3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F5B40: beq         $v0, $at, L_801F5B68
    if (ctx->r2 == ctx->r1) {
        // 0x801F5B44: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801F5B68;
    }
    // 0x801F5B44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F5B48: beq         $v0, $at, L_801F5B78
    if (ctx->r2 == ctx->r1) {
        // 0x801F5B4C: lw          $a1, 0x28($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X28);
            goto L_801F5B78;
    }
    // 0x801F5B4C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x801F5B50: b           L_801F5B90
    // 0x801F5B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F5B90;
    // 0x801F5B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F5B58:
    // 0x801F5B58: jal         0x801F5C4C
    // 0x801F5B5C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_801F5C4C_5B1B5C(rdram, ctx);
        goto after_1;
    // 0x801F5B5C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x801F5B60: b           L_801F5B90
    // 0x801F5B64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F5B90;
    // 0x801F5B64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F5B68:
    // 0x801F5B68: jal         0x801EB518
    // 0x801F5B6C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_801EB518_5A7428(rdram, ctx);
        goto after_2;
    // 0x801F5B6C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x801F5B70: b           L_801F5B90
    // 0x801F5B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F5B90;
    // 0x801F5B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F5B78:
    // 0x801F5B78: jal         0x801EB518
    // 0x801F5B7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801EB518_5A7428(rdram, ctx);
        goto after_3;
    // 0x801F5B7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x801F5B80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F5B84: jal         0x801E8964
    // 0x801F5B88: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    func_801E8964_5A4874(rdram, ctx);
        goto after_4;
    // 0x801F5B88: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    after_4:
    // 0x801F5B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F5B90:
    // 0x801F5B90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5B94: jr          $ra
    // 0x801F5B98: nop

    TRACE_RETURN()
    return;
    // 0x801F5B98: nop

;}
RECOMP_FUNC void func_801F7C14_5B3B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7C14: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x801F7C18: lw          $t6, 0x48D8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X48D8);
    // 0x801F7C1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F7C20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F7C24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F7C28: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F7C2C: bne         $t6, $zero, L_801F7E08
    if (ctx->r14 != 0) {
        // 0x801F7C30: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_801F7E08;
    }
    // 0x801F7C30: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F7C34: jal         0x8003D428
    // 0x801F7C38: nop

    func_8003D428_3E028(rdram, ctx);
        goto after_0;
    // 0x801F7C38: nop

    after_0:
    // 0x801F7C3C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F7C40: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x801F7C44: jal         0x801E8D90
    // 0x801F7C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801E8D90_5A4CA0(rdram, ctx);
        goto after_1;
    // 0x801F7C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801F7C4C: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x801F7C50: addiu       $s0, $s0, -0x3A38
    ctx->r16 = ADD32(ctx->r16, -0X3A38);
    // 0x801F7C54: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801F7C58: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801F7C5C: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x801F7C60: lui         $a1, 0x802F
    ctx->r5 = S32(0X802F << 16);
    // 0x801F7C64: addiu       $a1, $a1, 0x7000
    ctx->r5 = ADD32(ctx->r5, 0X7000);
    // 0x801F7C68: ori         $a2, $zero, 0xA000
    ctx->r6 = 0 | 0XA000;
    // 0x801F7C6C: jal         0x800148C0
    // 0x801F7C70: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148C0_154C0(rdram, ctx);
        goto after_2;
    // 0x801F7C70: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
    // 0x801F7C74: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x801F7C78: lui         $a0, 0xD
    ctx->r4 = S32(0XD << 16);
    // 0x801F7C7C: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x801F7C80: jal         0x80034EF8
    // 0x801F7C84: lw          $a0, -0x70C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X70C);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_3;
    // 0x801F7C84: lw          $a0, -0x70C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X70C);
    after_3:
    // 0x801F7C88: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801F7C8C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801F7C90: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F7C94: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801F7C98: lw          $a0, 0x78E4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X78E4);
    // 0x801F7C9C: beq         $a0, $zero, L_801F7CBC
    if (ctx->r4 == 0) {
        // 0x801F7CA0: nop
    
            goto L_801F7CBC;
    }
    // 0x801F7CA0: nop

    // 0x801F7CA4: jal         0x80034EF8
    // 0x801F7CA8: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_4;
    // 0x801F7CA8: nop

    after_4:
    // 0x801F7CAC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801F7CB0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801F7CB4: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F7CB8: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
L_801F7CBC:
    // 0x801F7CBC: jal         0x80034EF8
    // 0x801F7CC0: lw          $a0, 0x78DC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X78DC);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_5;
    // 0x801F7CC0: lw          $a0, 0x78DC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X78DC);
    after_5:
    // 0x801F7CC4: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x801F7CC8: lui         $a0, 0xD
    ctx->r4 = S32(0XD << 16);
    // 0x801F7CCC: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x801F7CD0: jal         0x80034EF8
    // 0x801F7CD4: lw          $a0, -0x720($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X720);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_6;
    // 0x801F7CD4: lw          $a0, -0x720($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X720);
    after_6:
    // 0x801F7CD8: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x801F7CDC: lui         $a0, 0xD
    ctx->r4 = S32(0XD << 16);
    // 0x801F7CE0: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x801F7CE4: jal         0x80034EF8
    // 0x801F7CE8: lw          $a0, -0x714($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X714);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_7;
    // 0x801F7CE8: lw          $a0, -0x714($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X714);
    after_7:
    // 0x801F7CEC: jal         0x80004240
    // 0x801F7CF0: nop

    func_80004240_4E40(rdram, ctx);
        goto after_8;
    // 0x801F7CF0: nop

    after_8:
    // 0x801F7CF4: jal         0x8000B880
    // 0x801F7CF8: nop

    func_8000B880_C480(rdram, ctx);
        goto after_9;
    // 0x801F7CF8: nop

    after_9:
    // 0x801F7CFC: lui         $a0, 0x8006
    ctx->r4 = S32(0X8006 << 16);
    // 0x801F7D00: jal         0x8000B8A4
    // 0x801F7D04: addiu       $a0, $a0, 0x27F0
    ctx->r4 = ADD32(ctx->r4, 0X27F0);
    func_8000B8A4_C4A4(rdram, ctx);
        goto after_10;
    // 0x801F7D04: addiu       $a0, $a0, 0x27F0
    ctx->r4 = ADD32(ctx->r4, 0X27F0);
    after_10:
    // 0x801F7D08: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801F7D0C: lbu         $t0, -0x3AB3($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X3AB3);
    // 0x801F7D10: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F7D14: beq         $t0, $zero, L_801F7E00
    if (ctx->r8 == 0) {
        // 0x801F7D18: nop
    
            goto L_801F7E00;
    }
    // 0x801F7D18: nop

    // 0x801F7D1C: jal         0x8000B4DC
    // 0x801F7D20: nop

    func_8000B4DC_C0DC(rdram, ctx);
        goto after_11;
    // 0x801F7D20: nop

    after_11:
    // 0x801F7D24: beq         $v0, $zero, L_801F7D44
    if (ctx->r2 == 0) {
        // 0x801F7D28: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_801F7D44;
    }
    // 0x801F7D28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F7D2C: beq         $v0, $at, L_801F7D54
    if (ctx->r2 == ctx->r1) {
        // 0x801F7D30: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801F7D54;
    }
    // 0x801F7D30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F7D34: beql        $v0, $at, L_801F7D58
    if (ctx->r2 == ctx->r1) {
        // 0x801F7D38: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_801F7D58;
    }
    goto skip_0;
    // 0x801F7D38: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x801F7D3C: b           L_801F7E0C
    // 0x801F7D40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F7E0C;
    // 0x801F7D40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F7D44:
    // 0x801F7D44: jal         0x80003728
    // 0x801F7D48: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_80003728_4328(rdram, ctx);
        goto after_12;
    // 0x801F7D48: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_12:
    // 0x801F7D4C: b           L_801F7E0C
    // 0x801F7D50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F7E0C;
    // 0x801F7D50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F7D54:
    // 0x801F7D54: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_801F7D58:
    // 0x801F7D58: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x801F7D5C: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x801F7D60: addu        $t1, $v0, $v1
    ctx->r9 = ADD32(ctx->r2, ctx->r3);
    // 0x801F7D64: lhu         $t2, 0x2DF2($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X2DF2);
    // 0x801F7D68: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F7D6C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F7D70: sh          $t2, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r10;
    // 0x801F7D74: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801F7D78: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F7D7C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F7D80: addu        $t3, $v0, $v1
    ctx->r11 = ADD32(ctx->r2, ctx->r3);
    // 0x801F7D84: lhu         $t4, 0x2FEC($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X2FEC);
    // 0x801F7D88: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F7D8C: addiu       $a0, $a0, 0x7E1C
    ctx->r4 = ADD32(ctx->r4, 0X7E1C);
    // 0x801F7D90: sh          $t4, -0x501E($at)
    MEM_H(-0X501E, ctx->r1) = ctx->r12;
    // 0x801F7D94: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801F7D98: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F7D9C: addu        $t5, $v0, $v1
    ctx->r13 = ADD32(ctx->r2, ctx->r3);
    // 0x801F7DA0: lh          $t6, 0x2FEE($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X2FEE);
    // 0x801F7DA4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F7DA8: sh          $t6, -0x501C($at)
    MEM_H(-0X501C, ctx->r1) = ctx->r14;
    // 0x801F7DAC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801F7DB0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F7DB4: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x801F7DB8: lh          $t8, 0x2FF0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2FF0);
    // 0x801F7DBC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F7DC0: sh          $t8, -0x501A($at)
    MEM_H(-0X501A, ctx->r1) = ctx->r24;
    // 0x801F7DC4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801F7DC8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F7DCC: addu        $t9, $v0, $v1
    ctx->r25 = ADD32(ctx->r2, ctx->r3);
    // 0x801F7DD0: lh          $t0, 0x2FF2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X2FF2);
    // 0x801F7DD4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F7DD8: sh          $t0, -0x5018($at)
    MEM_H(-0X5018, ctx->r1) = ctx->r8;
    // 0x801F7DDC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801F7DE0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F7DE4: addu        $t1, $v0, $v1
    ctx->r9 = ADD32(ctx->r2, ctx->r3);
    // 0x801F7DE8: lh          $t2, 0x2FF4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2FF4);
    // 0x801F7DEC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F7DF0: jal         0x8003521C
    // 0x801F7DF4: sh          $t2, -0x5016($at)
    MEM_H(-0X5016, ctx->r1) = ctx->r10;
    func_8003521C_35E1C(rdram, ctx);
        goto after_13;
    // 0x801F7DF4: sh          $t2, -0x5016($at)
    MEM_H(-0X5016, ctx->r1) = ctx->r10;
    after_13:
    // 0x801F7DF8: b           L_801F7E0C
    // 0x801F7DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F7E0C;
    // 0x801F7DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F7E00:
    // 0x801F7E00: jal         0x8003521C
    // 0x801F7E04: addiu       $a0, $a0, 0x7E1C
    ctx->r4 = ADD32(ctx->r4, 0X7E1C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_14;
    // 0x801F7E04: addiu       $a0, $a0, 0x7E1C
    ctx->r4 = ADD32(ctx->r4, 0X7E1C);
    after_14:
L_801F7E08:
    // 0x801F7E08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F7E0C:
    // 0x801F7E0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F7E10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F7E14: jr          $ra
    // 0x801F7E18: nop

    TRACE_RETURN()
    return;
    // 0x801F7E18: nop

;}
RECOMP_FUNC void func_801E11B0_59D0C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E11B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E11B4: jr          $ra
    // 0x801E11B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E11B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E7E18_5A3D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7E18: lbu         $v1, 0xCC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XCC);
    // 0x801E7E1C: slti        $v0, $v1, 0x1D
    ctx->r2 = SIGNED(ctx->r3) < 0X1D ? 1 : 0;
    // 0x801E7E20: bne         $v0, $zero, L_801E7E30
    if (ctx->r2 != 0) {
        // 0x801E7E24: slti        $v0, $v1, 0x28
        ctx->r2 = SIGNED(ctx->r3) < 0X28 ? 1 : 0;
            goto L_801E7E30;
    }
    // 0x801E7E24: slti        $v0, $v1, 0x28
    ctx->r2 = SIGNED(ctx->r3) < 0X28 ? 1 : 0;
    // 0x801E7E28: bne         $v0, $zero, L_801E7E38
    if (ctx->r2 != 0) {
        // 0x801E7E2C: nop
    
            goto L_801E7E38;
    }
    // 0x801E7E2C: nop

L_801E7E30:
    // 0x801E7E30: xori        $v0, $v1, 0xB8
    ctx->r2 = ctx->r3 ^ 0XB8;
    // 0x801E7E34: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_801E7E38:
    // 0x801E7E38: jr          $ra
    // 0x801E7E3C: nop

    TRACE_RETURN()
    return;
    // 0x801E7E3C: nop

;}
RECOMP_FUNC void func_801E3B9C_59FAAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3B9C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E3BA0: lwc1        $f12, 0x68($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X68);
    // 0x801E3BA4: lwc1        $f14, 0x6C($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x801E3BA8: lwc1        $f2, 0x70($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801E3BAC: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801E3BB0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E3BB4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E3BB8: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801E3BBC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E3BC0: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801E3BC4: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801E3BC8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801E3BCC: nop

    // 0x801E3BD0: bc1fl       L_801E3BE4
    if (!c1cs) {
        // 0x801E3BD4: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801E3BE4;
    }
    goto skip_0;
    // 0x801E3BD4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x801E3BD8: b           L_801E3BE4
    // 0x801E3BDC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801E3BE4;
    // 0x801E3BDC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801E3BE0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801E3BE4:
    // 0x801E3BE4: ldc1        $f4, -0x4C98($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X4C98);
    // 0x801E3BE8: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x801E3BEC: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x801E3BF0: nop

    // 0x801E3BF4: bc1tl       L_801E3C1C
    if (c1cs) {
        // 0x801E3BF8: lw          $t6, 0x5C($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X5C);
            goto L_801E3C1C;
    }
    goto skip_1;
    // 0x801E3BF8: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    skip_1:
    // 0x801E3BFC: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801E3C00: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x801E3C04: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801E3C08: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x801E3C0C: nop

    // 0x801E3C10: bc1fl       L_801E3C28
    if (!c1cs) {
        // 0x801E3C14: add.s       $f10, $f0, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f6.fl;
            goto L_801E3C28;
    }
    goto skip_2;
    // 0x801E3C14: add.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f6.fl;
    skip_2:
    // 0x801E3C18: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
L_801E3C1C:
    // 0x801E3C1C: jr          $ra
    // 0x801E3C20: swc1        $f16, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f16.u32l;
    TRACE_RETURN()
    return;
    // 0x801E3C20: swc1        $f16, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f16.u32l;
    // 0x801E3C24: add.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f6.fl;
L_801E3C28:
    // 0x801E3C28: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x801E3C2C: jr          $ra
    // 0x801E3C30: nop

    TRACE_RETURN()
    return;
    // 0x801E3C30: nop

;}
RECOMP_FUNC void func_801F5A1C_5B192C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5A1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5A20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5A24: jal         0x801E3AC0
    // 0x801F5A28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801F5A28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F5A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5A30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5A34: jr          $ra
    // 0x801F5A38: nop

    TRACE_RETURN()
    return;
    // 0x801F5A38: nop

;}
RECOMP_FUNC void func_801E303C_59EF4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E303C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E3040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E3044: jal         0x801E3008
    // 0x801E3048: nop

    func_801E3008_59EF18(rdram, ctx);
        goto after_0;
    // 0x801E3048: nop

    after_0:
    // 0x801E304C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E3050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E3054: jr          $ra
    // 0x801E3058: nop

    TRACE_RETURN()
    return;
    // 0x801E3058: nop

;}
RECOMP_FUNC void func_801D5DC0_591CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5DC0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801D5DC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D5DC8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D5DCC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801D5DD0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x801D5DD4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D5DD8: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801D5DDC: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x801D5DE0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801D5DE4: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x801D5DE8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D5DEC: lwc1        $f0, -0x2E34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D5DF0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D5DF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D5DF8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D5DFC: addiu       $a2, $a2, -0x2E50
    ctx->r6 = ADD32(ctx->r6, -0X2E50);
    // 0x801D5E00: div.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f14.fl);
    // 0x801D5E04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x801D5E08: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x801D5E0C: nop

    // 0x801D5E10: bc1fl       L_801D5EB0
    if (!c1cs) {
        // 0x801D5E14: lw          $a0, 0x54($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X54);
            goto L_801D5EB0;
    }
    goto skip_0;
    // 0x801D5E14: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    skip_0:
    // 0x801D5E18: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D5E1C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D5E20: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x801D5E24: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x801D5E28: lhu         $t6, 0xB6($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XB6);
    // 0x801D5E2C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x801D5E30: bgez        $t6, L_801D5E44
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D5E34: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_801D5E44;
    }
    // 0x801D5E34: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801D5E38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D5E3C: nop

    // 0x801D5E40: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_801D5E44:
    // 0x801D5E44: neg.s       $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = -ctx->f18.fl;
    // 0x801D5E48: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x801D5E4C: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801D5E50: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x801D5E54: div.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x801D5E58: sub.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x801D5E5C: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x801D5E60: nop

    // 0x801D5E64: bc1f        L_801D5E70
    if (!c1cs) {
        // 0x801D5E68: nop
    
            goto L_801D5E70;
    }
    // 0x801D5E68: nop

    // 0x801D5E6C: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
L_801D5E70:
    // 0x801D5E70: jal         0x8001D5B8
    // 0x801D5E74: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    func_8001D5B8_1E1B8(rdram, ctx);
        goto after_0;
    // 0x801D5E74: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_0:
    // 0x801D5E78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D5E7C: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801D5E80: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x801D5E84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D5E88: jal         0x801D56D0
    // 0x801D5E8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_801D56D0_5915E0(rdram, ctx);
        goto after_1;
    // 0x801D5E8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x801D5E90: beq         $v0, $zero, L_801D5EAC
    if (ctx->r2 == 0) {
        // 0x801D5E94: andi        $v1, $v0, 0xFFFF
        ctx->r3 = ctx->r2 & 0XFFFF;
            goto L_801D5EAC;
    }
    // 0x801D5E94: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x801D5E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D5E9C: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801D5EA0: jal         0x801D72D4
    // 0x801D5EA4: sh          $v1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r3;
    func_801D72D4_5931E4(rdram, ctx);
        goto after_2;
    // 0x801D5EA4: sh          $v1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r3;
    after_2:
    // 0x801D5EA8: lhu         $v1, 0x36($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X36);
L_801D5EAC:
    // 0x801D5EAC: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
L_801D5EB0:
    // 0x801D5EB0: jal         0x801D55E0
    // 0x801D5EB4: sh          $v1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r3;
    func_801D55E0_5914F0(rdram, ctx);
        goto after_3;
    // 0x801D5EB4: sh          $v1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r3;
    after_3:
    // 0x801D5EB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D5EBC: lhu         $v0, 0x36($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X36);
    // 0x801D5EC0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D5EC4: jr          $ra
    // 0x801D5EC8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x801D5EC8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_801E2344_59E254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2344: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E2348: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E234C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E2350: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E2354: lwc1        $f4, -0x4CD8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4CD8);
    // 0x801E2358: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E235C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801E2360: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E2364: swc1        $f4, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f4.u32l;
    // 0x801E2368: lbu         $t7, 0x90($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X90);
    // 0x801E236C: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x801E2370: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E2374: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801E2378: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801E237C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801E2380: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801E2384: lwc1        $f0, 0x7DBC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7DBC);
    // 0x801E2388: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E238C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E2390: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x801E2394: nop

    // 0x801E2398: bc1fl       L_801E23AC
    if (!c1cs) {
        // 0x801E239C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801E23AC;
    }
    goto skip_0;
    // 0x801E239C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x801E23A0: b           L_801E23AC
    // 0x801E23A4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801E23AC;
    // 0x801E23A4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801E23A8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801E23AC:
    // 0x801E23AC: ldc1        $f10, -0x4CD0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X4CD0);
    // 0x801E23B0: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801E23B4: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x801E23B8: nop

    // 0x801E23BC: bc1t        L_801E23F4
    if (c1cs) {
        // 0x801E23C0: nop
    
            goto L_801E23F4;
    }
    // 0x801E23C0: nop

    // 0x801E23C4: jal         0x801E7DE8
    // 0x801E23C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801E23C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801E23CC: beq         $v0, $zero, L_801E23E4
    if (ctx->r2 == 0) {
        // 0x801E23D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E23E4;
    }
    // 0x801E23D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E23D4: jal         0x80038BC8
    // 0x801E23D8: addiu       $a0, $zero, 0x25B
    ctx->r4 = ADD32(0, 0X25B);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801E23D8: addiu       $a0, $zero, 0x25B
    ctx->r4 = ADD32(0, 0X25B);
    after_1:
    // 0x801E23DC: b           L_801E2400
    // 0x801E23E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_801E2400;
    // 0x801E23E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E23E4:
    // 0x801E23E4: jal         0x801DD6E0
    // 0x801E23E8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_2;
    // 0x801E23E8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_2:
    // 0x801E23EC: b           L_801E2400
    // 0x801E23F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_801E2400;
    // 0x801E23F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E23F4:
    // 0x801E23F4: jal         0x801DD6E0
    // 0x801E23F8: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_3;
    // 0x801E23F8: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_3:
    // 0x801E23FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E2400:
    // 0x801E2400: jal         0x801E8964
    // 0x801E2404: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_801E8964_5A4874(rdram, ctx);
        goto after_4;
    // 0x801E2404: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_4:
    // 0x801E2408: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E240C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E2410: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E2414: jr          $ra
    // 0x801E2418: nop

    TRACE_RETURN()
    return;
    // 0x801E2418: nop

;}
RECOMP_FUNC void func_801DE4FC_59A40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE4FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE504: jal         0x801E3AC0
    // 0x801DE508: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801DE508: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DE50C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE514: jr          $ra
    // 0x801DE518: nop

    TRACE_RETURN()
    return;
    // 0x801DE518: nop

;}
RECOMP_FUNC void func_801F6CC4_5B2BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6CC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F6CC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F6CCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F6CD0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F6CD4: jal         0x801E7F50
    // 0x801F6CD8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801E7F50_5A3E60(rdram, ctx);
        goto after_0;
    // 0x801F6CD8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F6CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6CE0: jal         0x801F7140
    // 0x801F6CE4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_801F7140_5B3050(rdram, ctx);
        goto after_1;
    // 0x801F6CE4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_1:
    // 0x801F6CE8: lbu         $t6, 0x90($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X90);
    // 0x801F6CEC: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x801F6CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6CF4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801F6CF8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801F6CFC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801F6D00: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801F6D04: lhu         $t8, 0x7DB2($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X7DB2);
    // 0x801F6D08: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x801F6D0C: beql        $t9, $zero, L_801F6D30
    if (ctx->r25 == 0) {
        // 0x801F6D10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F6D30;
    }
    goto skip_0;
    // 0x801F6D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801F6D14: jal         0x801F70B0
    // 0x801F6D18: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_801F70B0_5B2FC0(rdram, ctx);
        goto after_2;
    // 0x801F6D18: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_2:
    // 0x801F6D1C: beq         $v0, $zero, L_801F6D2C
    if (ctx->r2 == 0) {
        // 0x801F6D20: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F6D2C;
    }
    // 0x801F6D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6D24: jal         0x801DACDC
    // 0x801F6D28: addiu       $a1, $zero, 0xB6
    ctx->r5 = ADD32(0, 0XB6);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801F6D28: addiu       $a1, $zero, 0xB6
    ctx->r5 = ADD32(0, 0XB6);
    after_3:
L_801F6D2C:
    // 0x801F6D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801F6D30:
    // 0x801F6D30: jal         0x801F70B0
    // 0x801F6D34: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_801F70B0_5B2FC0(rdram, ctx);
        goto after_4;
    // 0x801F6D34: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_4:
    // 0x801F6D38: beql        $v0, $zero, L_801F6D58
    if (ctx->r2 == 0) {
        // 0x801F6D3C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F6D58;
    }
    goto skip_1;
    // 0x801F6D3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801F6D40: jal         0x801F7130
    // 0x801F6D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F7130_5B3040(rdram, ctx);
        goto after_5;
    // 0x801F6D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801F6D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6D4C: jal         0x801DACDC
    // 0x801F6D50: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_6;
    // 0x801F6D50: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    after_6:
    // 0x801F6D54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F6D58:
    // 0x801F6D58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F6D5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F6D60: jr          $ra
    // 0x801F6D64: nop

    TRACE_RETURN()
    return;
    // 0x801F6D64: nop

;}
RECOMP_FUNC void func_801DAB2C_596A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAB2C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801DAB30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DAB34: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801DAB38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801DAB3C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DAB40: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x801DAB44: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DAB48: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801DAB4C: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801DAB50: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x801DAB54: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801DAB58: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    // 0x801DAB5C: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801DAB60: sh          $zero, 0xCE($a0)
    MEM_H(0XCE, ctx->r4) = 0;
    // 0x801DAB64: sh          $zero, 0x34($t7)
    MEM_H(0X34, ctx->r15) = 0;
    // 0x801DAB68: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801DAB6C: sh          $zero, 0x2($t8)
    MEM_H(0X2, ctx->r24) = 0;
    // 0x801DAB70: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801DAB74: sw          $zero, 0x98($t9)
    MEM_W(0X98, ctx->r25) = 0;
    // 0x801DAB78: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801DAB7C: lw          $a3, 0x98($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X98);
    // 0x801DAB80: sw          $a3, 0x98($v1)
    MEM_W(0X98, ctx->r3) = ctx->r7;
    // 0x801DAB84: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801DAB88: sw          $a3, 0x98($t0)
    MEM_W(0X98, ctx->r8) = ctx->r7;
    // 0x801DAB8C: jal         0x801E8E24
    // 0x801DAB90: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_801E8E24_5A4D34(rdram, ctx);
        goto after_0;
    // 0x801DAB90: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DAB94: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801DAB98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DAB9C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x801DABA0: lbu         $t1, 0x30($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X30);
    // 0x801DABA4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x801DABA8: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x801DABAC: andi        $t2, $t1, 0xFFFE
    ctx->r10 = ctx->r9 & 0XFFFE;
    // 0x801DABB0: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x801DABB4: sb          $t2, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r10;
    // 0x801DABB8: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801DABBC: jal         0x801EAF50
    // 0x801DABC0: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    func_801EAF50_5A6E60(rdram, ctx);
        goto after_1;
    // 0x801DABC0: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    after_1:
    // 0x801DABC4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801DABC8: sh          $v0, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r2;
    // 0x801DABCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DABD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801DABD4: jr          $ra
    // 0x801DABD8: nop

    TRACE_RETURN()
    return;
    // 0x801DABD8: nop

;}
RECOMP_FUNC void func_801DE220_59A130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE228: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DE22C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801DE230: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    // 0x801DE234: jal         0x801E4078
    // 0x801DE238: addiu       $a3, $zero, 0x5C
    ctx->r7 = ADD32(0, 0X5C);
    func_801E4078_59FF88(rdram, ctx);
        goto after_0;
    // 0x801DE238: addiu       $a3, $zero, 0x5C
    ctx->r7 = ADD32(0, 0X5C);
    after_0:
    // 0x801DE23C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE244: jr          $ra
    // 0x801DE248: nop

    TRACE_RETURN()
    return;
    // 0x801DE248: nop

;}
