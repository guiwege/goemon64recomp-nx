#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801CDE78_6AC338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDE78: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801CDE7C: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801CDE80: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CDE84: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CDE88: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801CDE8C: lh          $a0, 0x307E($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X307E);
    // 0x801CDE90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801CDE94: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CDE98: slti        $at, $a0, -0x28
    ctx->r1 = SIGNED(ctx->r4) < -0X28 ? 1 : 0;
    // 0x801CDE9C: beq         $at, $zero, L_801CDEA8
    if (ctx->r1 == 0) {
        // 0x801CDEA0: lui         $t0, 0x801D
        ctx->r8 = S32(0X801D << 16);
            goto L_801CDEA8;
    }
    // 0x801CDEA0: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CDEA4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_801CDEA8:
    // 0x801CDEA8: slti        $at, $a0, 0x29
    ctx->r1 = SIGNED(ctx->r4) < 0X29 ? 1 : 0;
    // 0x801CDEAC: bne         $at, $zero, L_801CDEBC
    if (ctx->r1 != 0) {
        // 0x801CDEB0: addiu       $t0, $t0, -0x1BBE
        ctx->r8 = ADD32(ctx->r8, -0X1BBE);
            goto L_801CDEBC;
    }
    // 0x801CDEB0: addiu       $t0, $t0, -0x1BBE
    ctx->r8 = ADD32(ctx->r8, -0X1BBE);
    // 0x801CDEB4: ori         $t6, $v0, 0x100
    ctx->r14 = ctx->r2 | 0X100;
    // 0x801CDEB8: andi        $v0, $t6, 0xFFFF
    ctx->r2 = ctx->r14 & 0XFFFF;
L_801CDEBC:
    // 0x801CDEBC: lh          $a0, 0x3080($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X3080);
    // 0x801CDEC0: ori         $t8, $v0, 0x800
    ctx->r24 = ctx->r2 | 0X800;
    // 0x801CDEC4: slti        $at, $a0, 0x29
    ctx->r1 = SIGNED(ctx->r4) < 0X29 ? 1 : 0;
    // 0x801CDEC8: bnel        $at, $zero, L_801CDED8
    if (ctx->r1 != 0) {
        // 0x801CDECC: slti        $at, $a0, -0x28
        ctx->r1 = SIGNED(ctx->r4) < -0X28 ? 1 : 0;
            goto L_801CDED8;
    }
    goto skip_0;
    // 0x801CDECC: slti        $at, $a0, -0x28
    ctx->r1 = SIGNED(ctx->r4) < -0X28 ? 1 : 0;
    skip_0:
    // 0x801CDED0: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
    // 0x801CDED4: slti        $at, $a0, -0x28
    ctx->r1 = SIGNED(ctx->r4) < -0X28 ? 1 : 0;
L_801CDED8:
    // 0x801CDED8: beq         $at, $zero, L_801CDEE4
    if (ctx->r1 == 0) {
        // 0x801CDEDC: ori         $t1, $v0, 0x400
        ctx->r9 = ctx->r2 | 0X400;
            goto L_801CDEE4;
    }
    // 0x801CDEDC: ori         $t1, $v0, 0x400
    ctx->r9 = ctx->r2 | 0X400;
    // 0x801CDEE0: andi        $v0, $t1, 0xFFFF
    ctx->r2 = ctx->r9 & 0XFFFF;
L_801CDEE4:
    // 0x801CDEE4: lhu         $t3, 0x0($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X0);
    // 0x801CDEE8: addiu       $a3, $a3, -0x1BBC
    ctx->r7 = ADD32(ctx->r7, -0X1BBC);
    // 0x801CDEEC: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x801CDEF0: xor         $t4, $t3, $v0
    ctx->r12 = ctx->r11 ^ ctx->r2;
    // 0x801CDEF4: and         $t6, $t4, $v0
    ctx->r14 = ctx->r12 & ctx->r2;
    // 0x801CDEF8: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
    // 0x801CDEFC: lhu         $a1, 0x307C($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X307C);
    // 0x801CDF00: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CDF04: addiu       $a0, $a0, -0x1BB6
    ctx->r4 = ADD32(ctx->r4, -0X1BB6);
    // 0x801CDF08: or          $a2, $a1, $t6
    ctx->r6 = ctx->r5 | ctx->r14;
    // 0x801CDF0C: andi        $t7, $a2, 0xF00
    ctx->r15 = ctx->r6 & 0XF00;
    // 0x801CDF10: bne         $t7, $zero, L_801CDF20
    if (ctx->r15 != 0) {
        // 0x801CDF14: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_801CDF20;
    }
    // 0x801CDF14: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x801CDF18: andi        $t8, $a1, 0xC000
    ctx->r24 = ctx->r5 & 0XC000;
    // 0x801CDF1C: beq         $t8, $zero, L_801CDF44
    if (ctx->r24 == 0) {
        // 0x801CDF20: lui         $a1, 0x801D
        ctx->r5 = S32(0X801D << 16);
            goto L_801CDF44;
    }
L_801CDF20:
    // 0x801CDF20: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CDF24: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CDF28: addiu       $a3, $a3, -0x1BBA
    ctx->r7 = ADD32(ctx->r7, -0X1BBA);
    // 0x801CDF2C: addiu       $a1, $a1, -0x1BB8
    ctx->r5 = ADD32(ctx->r5, -0X1BB8);
    // 0x801CDF30: addiu       $t1, $zero, 0x12
    ctx->r9 = ADD32(0, 0X12);
    // 0x801CDF34: sh          $a2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r6;
    // 0x801CDF38: sh          $a2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r6;
    // 0x801CDF3C: b           L_801CDF60
    // 0x801CDF40: sb          $t1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r9;
        goto L_801CDF60;
    // 0x801CDF40: sb          $t1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r9;
L_801CDF44:
    // 0x801CDF44: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CDF48: addiu       $a1, $a1, -0x1BB8
    ctx->r5 = ADD32(ctx->r5, -0X1BB8);
    // 0x801CDF4C: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CDF50: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CDF54: addiu       $a0, $a0, -0x1BB6
    ctx->r4 = ADD32(ctx->r4, -0X1BB6);
    // 0x801CDF58: addiu       $a3, $a3, -0x1BBA
    ctx->r7 = ADD32(ctx->r7, -0X1BBA);
    // 0x801CDF5C: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
L_801CDF60:
    // 0x801CDF60: lb          $v0, 0x0($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X0);
    // 0x801CDF64: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x801CDF68: bnel        $v0, $zero, L_801CDF94
    if (ctx->r2 != 0) {
        // 0x801CDF6C: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_801CDF94;
    }
    goto skip_1;
    // 0x801CDF6C: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    skip_1:
    // 0x801CDF70: lhu         $t2, 0x307A($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X307A);
    // 0x801CDF74: lhu         $t3, 0x0($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X0);
    // 0x801CDF78: lhu         $t5, 0x0($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X0);
    // 0x801CDF7C: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
    // 0x801CDF80: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x801CDF84: and         $t6, $t4, $t5
    ctx->r14 = ctx->r12 & ctx->r13;
    // 0x801CDF88: jr          $ra
    // 0x801CDF8C: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801CDF8C: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x801CDF90: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
L_801CDF94:
    // 0x801CDF94: sb          $t8, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r24;
    // 0x801CDF98: jr          $ra
    // 0x801CDF9C: nop

    TRACE_RETURN()
    return;
    // 0x801CDF9C: nop

;}
RECOMP_FUNC void func_801CB578_6A9A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB578: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CB57C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801CB580: lbu         $t6, 0x2B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2B);
    // 0x801CB584: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CB588: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CB58C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801CB590: lbu         $t7, 0x7390($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7390);
    // 0x801CB594: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801CB598: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801CB59C: bne         $t7, $zero, L_801CB5F8
    if (ctx->r15 != 0) {
        // 0x801CB5A0: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_801CB5F8;
    }
    // 0x801CB5A0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x801CB5A4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801CB5A8: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x801CB5AC: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x801CB5B0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801CB5B4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x801CB5B8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x801CB5BC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x801CB5C0: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x801CB5C4: lhu         $a1, 0x8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X8);
    // 0x801CB5C8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CB5CC: addiu       $t9, $t9, 0x71F0
    ctx->r25 = ADD32(ctx->r25, 0X71F0);
    // 0x801CB5D0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801CB5D4: addiu       $t1, $t0, 0xA
    ctx->r9 = ADD32(ctx->r8, 0XA);
    // 0x801CB5D8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801CB5DC: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x801CB5E0: addiu       $a3, $t0, 0xE
    ctx->r7 = ADD32(ctx->r8, 0XE);
    // 0x801CB5E4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801CB5E8: jal         0x80044500
    // 0x801CB5EC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    osPfsAllocateFile_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB5EC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_0:
    // 0x801CB5F0: b           L_801CB604
    // 0x801CB5F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801CB604;
    // 0x801CB5F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801CB5F8:
    // 0x801CB5F8: jal         0x801CB978
    // 0x801CB5FC: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    func_801CB978_6A9E38(rdram, ctx);
        goto after_1;
    // 0x801CB5FC: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    after_1:
    // 0x801CB600: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801CB604:
    // 0x801CB604: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801CB608: jr          $ra
    // 0x801CB60C: nop

    TRACE_RETURN()
    return;
    // 0x801CB60C: nop

;}
RECOMP_FUNC void func_801CB460_6A9920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB460: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB464: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CB468: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB46C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801CB470: jal         0x80047320
    // 0x801CB474: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    osContStartQuery_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB474: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    after_0:
    // 0x801CB478: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801CB47C: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    // 0x801CB480: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CB484: jal         0x80040110
    // 0x801CB488: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x801CB488: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x801CB48C: jal         0x800473A4
    // 0x801CB490: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    osContGetQuery_recomp(rdram, ctx);
        goto after_2;
    // 0x801CB490: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801CB494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB49C: jr          $ra
    // 0x801CB4A0: nop

    TRACE_RETURN()
    return;
    // 0x801CB4A0: nop

;}
RECOMP_FUNC void func_080002E0_6AC830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080002E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080002E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080002EC: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x080002F0: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x080002F4: lui         $t8, 0x280
    ctx->r24 = S32(0X280 << 16);
    // 0x080002F8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x080002FC: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
    // 0x08000300: bne         $v0, $at, L_08000314
    if (ctx->r2 != ctx->r1) {
        // 0x08000304: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08000314;
    }
    // 0x08000304: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08000308: ori         $t8, $t8, 0xFE1
    ctx->r24 = ctx->r24 | 0XFE1;
    // 0x0800030C: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08000310: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
L_08000314:
    // 0x08000314: bne         $v0, $zero, L_0800032C
    if (ctx->r2 != 0) {
        // 0x08000318: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(15, 0X370) << 16);
            goto L_0800032C;
    }
    // 0x08000318: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(15, 0X370) << 16);
    // 0x0800031C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000320: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000324: jalr        $t9
    // 0x08000328: addiu       $a0, $a0, 0x370
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X370));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000328: addiu       $a0, $a0, 0x370
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X370));
    after_0:
L_0800032C:
    // 0x0800032C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08000330: lhu         $t0, -0x33D0($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X33D0);
    // 0x08000334: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000338: addiu       $a0, $zero, 0x25B
    ctx->r4 = ADD32(0, 0X25B);
    // 0x0800033C: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x08000340: bne         $t1, $at, L_08000360
    if (ctx->r9 != ctx->r1) {
        // 0x08000344: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_08000360;
    }
    // 0x08000344: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000348: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800034C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000350: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000354: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08000358: jalr        $t9
    // 0x0800035C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800035C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_1:
L_08000360:
    // 0x08000360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000364: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000368: jr          $ra
    // 0x0800036C: nop

    TRACE_RETURN()
    return;
    // 0x0800036C: nop

;}
RECOMP_FUNC void func_08000370_6AC8C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000370: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000378: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800037C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000380: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08000384: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08000388: beql        $t7, $zero, L_080003B4
    if (ctx->r15 == 0) {
        // 0x0800038C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080003B4;
    }
    goto skip_0;
    // 0x0800038C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000390: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000394: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000398: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800039C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x080003A0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x080003A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(15, 0X3C0) << 16);
    // 0x080003A8: jalr        $t9
    // 0x080003AC: addiu       $a0, $a0, 0x3C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X3C0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003AC: addiu       $a0, $a0, 0x3C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X3C0));
    after_0:
    // 0x080003B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080003B4:
    // 0x080003B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080003B8: jr          $ra
    // 0x080003BC: nop

    TRACE_RETURN()
    return;
    // 0x080003BC: nop

;}
RECOMP_FUNC void func_08000980_6ACED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000980: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000984: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000988: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x0800098C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000990: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000994: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000998: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x0800099C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080009A0: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080009A4: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x080009A8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x080009AC: lbu         $v0, 0xD4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD4);
    // 0x080009B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080009B4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x080009B8: beq         $v0, $zero, L_080009E4
    if (ctx->r2 == 0) {
        // 0x080009BC: addiu       $t9, $zero, 0xE0
        ctx->r25 = ADD32(0, 0XE0);
            goto L_080009E4;
    }
    // 0x080009BC: addiu       $t9, $zero, 0xE0
    ctx->r25 = ADD32(0, 0XE0);
    // 0x080009C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080009C4: beq         $v0, $at, L_08000B90
    if (ctx->r2 == ctx->r1) {
        // 0x080009C8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_08000B90;
    }
    // 0x080009C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080009CC: beq         $v0, $at, L_08000BEC
    if (ctx->r2 == ctx->r1) {
        // 0x080009D0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_08000BEC;
    }
    // 0x080009D0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x080009D4: beql        $v0, $at, L_08000C44
    if (ctx->r2 == ctx->r1) {
        // 0x080009D8: lbu         $t6, 0x7C($s1)
        ctx->r14 = MEM_BU(ctx->r17, 0X7C);
            goto L_08000C44;
    }
    goto skip_0;
    // 0x080009D8: lbu         $t6, 0x7C($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X7C);
    skip_0:
    // 0x080009DC: b           L_08000C7C
    // 0x080009E0: lhu         $t3, 0xD0($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XD0);
        goto L_08000C7C;
    // 0x080009E0: lhu         $t3, 0xD0($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XD0);
L_080009E4:
    // 0x080009E4: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
    // 0x080009E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009EC: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080009F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080009F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080009F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080009FC: jalr        $t9
    // 0x08000A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000A04: lhu         $v0, 0xD0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XD0);
    // 0x08000A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000A10: beq         $v0, $zero, L_08000A38
    if (ctx->r2 == 0) {
        // 0x08000A14: lui         $a2, 0x3D4C
        ctx->r6 = S32(0X3D4C << 16);
            goto L_08000A38;
    }
    // 0x08000A14: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08000A18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000A1C: beq         $v0, $at, L_08000AA0
    if (ctx->r2 == ctx->r1) {
        // 0x08000A20: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000AA0;
    }
    // 0x08000A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000A28: beq         $v0, $at, L_08000B00
    if (ctx->r2 == ctx->r1) {
        // 0x08000A2C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000B00;
    }
    // 0x08000A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A30: b           L_08000B84
    // 0x08000A34: addiu       $v0, $s0, 0xD4
    ctx->r2 = ADD32(ctx->r16, 0XD4);
        goto L_08000B84;
    // 0x08000A34: addiu       $v0, $s0, 0xD4
    ctx->r2 = ADD32(ctx->r16, 0XD4);
L_08000A38:
    // 0x08000A38: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000A3C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000A40: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000A44: jalr        $t9
    // 0x08000A48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000A4C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A50: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08000A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A58: jalr        $t9
    // 0x08000A5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x08000A60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000A64: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000A68: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(15, 0XE60) << 16);
    // 0x08000A6C: addiu       $v0, $s0, 0xD4
    ctx->r2 = ADD32(ctx->r16, 0XD4);
    // 0x08000A70: swc1        $f2, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f2.u32l;
    // 0x08000A74: swc1        $f2, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f2.u32l;
    // 0x08000A78: lwc1        $f4, 0xE60($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(15, 0XE60));
    // 0x08000A7C: addiu       $t2, $zero, 0x9B
    ctx->r10 = ADD32(0, 0X9B);
    // 0x08000A80: swc1        $f4, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f4.u32l;
    // 0x08000A84: lhu         $t0, 0xD2($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XD2);
    // 0x08000A88: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x08000A8C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x08000A90: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x08000A94: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x08000A98: b           L_08000B84
    // 0x08000A9C: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
        goto L_08000B84;
    // 0x08000A9C: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
L_08000AA0:
    // 0x08000AA0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000AA4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000AA8: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08000AAC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000AB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000AB4: jalr        $t9
    // 0x08000AB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000AB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000ABC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AC0: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08000AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000AC8: jalr        $t9
    // 0x08000ACC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000ACC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x08000AD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000AD4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000AD8: addiu       $v0, $s0, 0xD4
    ctx->r2 = ADD32(ctx->r16, 0XD4);
    // 0x08000ADC: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x08000AE0: swc1        $f2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f2.u32l;
    // 0x08000AE4: swc1        $f2, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f2.u32l;
    // 0x08000AE8: swc1        $f2, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f2.u32l;
    // 0x08000AEC: lhu         $t3, 0xD2($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XD2);
    // 0x08000AF0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x08000AF4: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    // 0x08000AF8: b           L_08000B84
    // 0x08000AFC: sh          $t5, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r13;
        goto L_08000B84;
    // 0x08000AFC: sh          $t5, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r13;
L_08000B00:
    // 0x08000B00: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B04: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000B08: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08000B0C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000B10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000B14: jalr        $t9
    // 0x08000B18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000B18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x08000B1C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B20: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08000B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B28: jalr        $t9
    // 0x08000B2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000B2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x08000B30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000B34: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000B38: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x08000B3C: sh          $t6, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r14;
    // 0x08000B40: swc1        $f2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f2.u32l;
    // 0x08000B44: swc1        $f2, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f2.u32l;
    // 0x08000B48: swc1        $f2, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f2.u32l;
    // 0x08000B4C: lhu         $t7, 0xD2($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XD2);
    // 0x08000B50: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x08000B54: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    // 0x08000B58: subu        $t8, $v1, $t7
    ctx->r24 = SUB32(ctx->r3, ctx->r15);
    // 0x08000B5C: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08000B60: addiu       $v0, $s0, 0xD4
    ctx->r2 = ADD32(ctx->r16, 0XD4);
    // 0x08000B64: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x08000B68: mflo        $t0
    ctx->r8 = lo;
    // 0x08000B6C: nop

    // 0x08000B70: nop

    // 0x08000B74: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x08000B78: mfhi        $t1
    ctx->r9 = hi;
    // 0x08000B7C: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x08000B80: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
L_08000B84:
    // 0x08000B84: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08000B88: b           L_08000C78
    // 0x08000B8C: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
        goto L_08000C78;
    // 0x08000B8C: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
L_08000B90:
    // 0x08000B90: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000B94: addiu       $a0, $zero, 0x271
    ctx->r4 = ADD32(0, 0X271);
    // 0x08000B98: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x08000B9C: sltiu       $v0, $v1, 0x1
    ctx->r2 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x08000BA0: addiu       $t4, $v1, -0x1
    ctx->r12 = ADD32(ctx->r3, -0X1);
    // 0x08000BA4: beq         $v0, $zero, L_08000C78
    if (ctx->r2 == 0) {
        // 0x08000BA8: sh          $t4, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r12;
            goto L_08000C78;
    }
    // 0x08000BA8: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    // 0x08000BAC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000BB0: addiu       $t9, $t9, -0x22C
    ctx->r25 = ADD32(ctx->r25, -0X22C);
    // 0x08000BB4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x08000BB8: jalr        $t9
    // 0x08000BBC: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000BBC: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    after_7:
    // 0x08000BC0: lw          $t5, 0x60($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X60);
    // 0x08000BC4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08000BC8: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x08000BCC: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x08000BD0: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08000BD4: sh          $t7, 0x7E($s1)
    MEM_H(0X7E, ctx->r17) = ctx->r15;
    // 0x08000BD8: sb          $zero, 0x7C($s1)
    MEM_B(0X7C, ctx->r17) = 0;
    // 0x08000BDC: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x08000BE0: swc1        $f6, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f6.u32l;
    // 0x08000BE4: b           L_08000C78
    // 0x08000BE8: sb          $t8, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = ctx->r24;
        goto L_08000C78;
    // 0x08000BE8: sb          $t8, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = ctx->r24;
L_08000BEC:
    // 0x08000BEC: lbu         $t0, 0x7C($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X7C);
    // 0x08000BF0: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08000BF4: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x08000BF8: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x08000BFC: beq         $t1, $zero, L_08000C78
    if (ctx->r9 == 0) {
        // 0x08000C00: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08000C78;
    }
    // 0x08000C00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000C04: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x08000C08: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000C0C: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x08000C10: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x08000C14: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
    // 0x08000C18: sh          $t4, 0x7E($s1)
    MEM_H(0X7E, ctx->r17) = ctx->r12;
    // 0x08000C1C: jalr        $t9
    // 0x08000C20: sb          $zero, 0x7C($s1)
    MEM_B(0X7C, ctx->r17) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000C20: sb          $zero, 0x7C($s1)
    MEM_B(0X7C, ctx->r17) = 0;
    after_8:
    // 0x08000C24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000C28: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000C2C: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x08000C30: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08000C34: swc1        $f8, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f8.u32l;
    // 0x08000C38: b           L_08000C78
    // 0x08000C3C: sb          $t5, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = ctx->r13;
        goto L_08000C78;
    // 0x08000C3C: sb          $t5, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = ctx->r13;
    // 0x08000C40: lbu         $t6, 0x7C($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X7C);
L_08000C44:
    // 0x08000C44: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08000C48: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08000C4C: beql        $t7, $zero, L_08000C7C
    if (ctx->r15 == 0) {
        // 0x08000C50: lhu         $t3, 0xD0($s0)
        ctx->r11 = MEM_HU(ctx->r16, 0XD0);
            goto L_08000C7C;
    }
    goto skip_1;
    // 0x08000C50: lhu         $t3, 0xD0($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XD0);
    skip_1:
    // 0x08000C54: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x08000C58: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000C5C: addiu       $v0, $s0, 0xD4
    ctx->r2 = ADD32(ctx->r16, 0XD4);
    // 0x08000C60: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x08000C64: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x08000C68: lh          $t1, 0x2($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2);
    // 0x08000C6C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08000C70: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x08000C74: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
L_08000C78:
    // 0x08000C78: lhu         $t3, 0xD0($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XD0);
L_08000C7C:
    // 0x08000C7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000C80: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x08000C84: bnel        $t3, $at, L_08000CF4
    if (ctx->r11 != ctx->r1) {
        // 0x08000C88: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08000CF4;
    }
    goto skip_2;
    // 0x08000C88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x08000C8C: lw          $t4, -0x39F4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39F4);
    // 0x08000C90: lwc1        $f2, 0x10($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08000C94: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000C98: lwc1        $f0, 0x10($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0X10);
    // 0x08000C9C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000CA0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x08000CA4: nop

    // 0x08000CA8: bc1fl       L_08000CC0
    if (!c1cs) {
        // 0x08000CAC: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_08000CC0;
    }
    goto skip_3;
    // 0x08000CAC: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_3:
    // 0x08000CB0: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08000CB4: b           L_08000CC0
    // 0x08000CB8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_08000CC0;
    // 0x08000CB8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x08000CBC: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_08000CC0:
    // 0x08000CC0: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x08000CC4: nop

    // 0x08000CC8: bc1fl       L_08000CE4
    if (!c1cs) {
        // 0x08000CCC: lw          $t6, 0x60($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X60);
            goto L_08000CE4;
    }
    goto skip_4;
    // 0x08000CCC: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    skip_4:
    // 0x08000CD0: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x08000CD4: ori         $t5, $t9, 0xC0
    ctx->r13 = ctx->r25 | 0XC0;
    // 0x08000CD8: b           L_08000CF0
    // 0x08000CDC: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
        goto L_08000CF0;
    // 0x08000CDC: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
    // 0x08000CE0: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
L_08000CE4:
    // 0x08000CE4: addiu       $at, $zero, -0xC1
    ctx->r1 = ADD32(0, -0XC1);
    // 0x08000CE8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08000CEC: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
L_08000CF0:
    // 0x08000CF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000CF4:
    // 0x08000CF4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000CF8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000CFC: jr          $ra
    // 0x08000D00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08000D00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_080007FC_6ACD4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000800: jr          $ra
    // 0x08000804: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000804: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000558_6ACAA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000558: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x0800055C: lhu         $t6, -0x33D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X33D0);
    // 0x08000560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000564: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000568: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x0800056C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000570: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000574: bne         $t7, $at, L_08000598
    if (ctx->r15 != ctx->r1) {
        // 0x08000578: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_08000598;
    }
    // 0x08000578: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x0800057C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000580: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000584: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000588: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x0800058C: addiu       $a0, $zero, 0x25B
    ctx->r4 = ADD32(0, 0X25B);
    // 0x08000590: jalr        $t9
    // 0x08000594: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000594: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
L_08000598:
    // 0x08000598: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x0800059C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080005A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080005A4: lhu         $t0, 0x8A($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X8A);
    // 0x080005A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(15, 0X490) << 16);
    // 0x080005AC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x080005B0: bne         $t1, $zero, L_080005C0
    if (ctx->r9 != 0) {
        // 0x080005B4: sh          $t1, 0x8A($t8)
        MEM_H(0X8A, ctx->r24) = ctx->r9;
            goto L_080005C0;
    }
    // 0x080005B4: sh          $t1, 0x8A($t8)
    MEM_H(0X8A, ctx->r24) = ctx->r9;
    // 0x080005B8: jalr        $t9
    // 0x080005BC: addiu       $a0, $a0, 0x490
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X490));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080005BC: addiu       $a0, $a0, 0x490
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X490));
    after_1:
L_080005C0:
    // 0x080005C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080005C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080005C8: jr          $ra
    // 0x080005CC: nop

    TRACE_RETURN()
    return;
    // 0x080005CC: nop

;}
RECOMP_FUNC void func_08000000_6AC550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x08000004: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000008: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x0800000C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000010: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x08000014: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000018: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(15, 0XE40) << 16);
    // 0x0800001C: ldc1        $f8, 0xE40($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(15, 0XE40));
    // 0x08000020: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000024: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000028: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x0800002C: addiu       $t9, $t9, 0x2850
    ctx->r25 = ADD32(ctx->r25, 0X2850);
    // 0x08000030: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x08000034: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    // 0x08000038: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x0800003C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x08000040: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x08000044: jalr        $t9
    // 0x08000048: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000048: nop

    after_0:
    // 0x0800004C: lh          $t6, 0x58($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X58);
    // 0x08000050: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x08000054: beql        $t6, $zero, L_0800006C
    if (ctx->r14 == 0) {
        // 0x08000058: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800006C;
    }
    goto skip_0;
    // 0x08000058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x0800005C: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000060: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08000064: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x08000068: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800006C:
    // 0x0800006C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000070: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x08000074: jr          $ra
    // 0x08000078: nop

    TRACE_RETURN()
    return;
    // 0x08000078: nop

;}
RECOMP_FUNC void func_080006BC_6ACC0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006BC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080006C0: jr          $ra
    // 0x080006C4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080006C4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000224_6AC774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000224: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(15, 0XE50) << 16);
    // 0x08000228: lwc1        $f0, 0xE50($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(15, 0XE50));
    // 0x0800022C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000230: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000234: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08000238: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x0800023C: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x08000240: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x08000244: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x08000248: addiu       $t6, $zero, 0x261
    ctx->r14 = ADD32(0, 0X261);
    // 0x0800024C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08000250: addiu       $t8, $zero, 0x134
    ctx->r24 = ADD32(0, 0X134);
    // 0x08000254: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x08000258: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800025C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000260: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000264: sb          $t7, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r15;
    // 0x08000268: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x0800026C: sh          $t0, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r8;
    // 0x08000270: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08000274: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08000278: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800027C: jalr        $t9
    // 0x08000280: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000280: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x08000284: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000288: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800028C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000294: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000298: jalr        $t9
    // 0x0800029C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800029C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080002A0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x080002A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002A8: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x080002AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080002B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080002B4: jalr        $t9
    // 0x080002B8: lhu         $a1, 0x16($t1)
    ctx->r5 = MEM_HU(ctx->r9, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080002B8: lhu         $a1, 0x16($t1)
    ctx->r5 = MEM_HU(ctx->r9, 0X16);
    after_2:
    // 0x080002BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(15, 0X2E0) << 16);
    // 0x080002C8: jalr        $t9
    // 0x080002CC: addiu       $a0, $a0, 0x2E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X2E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080002CC: addiu       $a0, $a0, 0x2E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X2E0));
    after_3:
    // 0x080002D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080002D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080002D8: jr          $ra
    // 0x080002DC: nop

    TRACE_RETURN()
    return;
    // 0x080002DC: nop

;}
RECOMP_FUNC void func_0800018C_6AC6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800018C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000190: jr          $ra
    // 0x08000194: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000194: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000760_6ACCB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000760: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000764: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000768: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800076C: addiu       $t6, $zero, 0xE0
    ctx->r14 = ADD32(0, 0XE0);
    // 0x08000770: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000774: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000778: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800077C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000784: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x08000788: jalr        $t9
    // 0x0800078C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800078C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08000790: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000794: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000798: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800079C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080007A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080007A4: jalr        $t9
    // 0x080007A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080007A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080007AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007B0: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x080007B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080007B8: jalr        $t9
    // 0x080007BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080007BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x080007C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080007C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080007C8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x080007CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080007D0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080007D4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(15, 0X74C) << 16);
    // 0x080007D8: addiu       $a0, $a0, 0x74C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X74C));
    // 0x080007DC: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x080007E0: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x080007E4: jalr        $t9
    // 0x080007E8: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080007E8: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_3:
    // 0x080007EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080007F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080007F4: jr          $ra
    // 0x080007F8: nop

    TRACE_RETURN()
    return;
    // 0x080007F8: nop

;}
RECOMP_FUNC void func_080008BC_6ACE0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008BC: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080008C0: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x080008C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080008C8: lui         $v1, 0x800
    ctx->r3 = S32(RELOC_HI16(15, 0XE70) << 16);
    // 0x080008CC: lw          $v1, 0xE70($v1)
    ctx->r3 = MEM_W(ctx->r3, (int16_t)RELOC_LO16(15, 0XE70));
    // 0x080008D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080008D4: lw          $a1, 0x2C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X2C);
    // 0x080008D8: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080008DC: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080008E0: addiu       $v0, $v1, 0xD0
    ctx->r2 = ADD32(ctx->r3, 0XD0);
    // 0x080008E4: beq         $v1, $zero, L_08000970
    if (ctx->r3 == 0) {
        // 0x080008E8: and         $t7, $a1, $at
        ctx->r15 = ctx->r5 & ctx->r1;
            goto L_08000970;
    }
    // 0x080008E8: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x080008EC: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x080008F0: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x080008F4: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x080008F8: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x080008FC: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08000900: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x08000904: lwc1        $f18, 0x10($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X10);
    // 0x08000908: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x0800090C: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08000910: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000914: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x08000918: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0800091C: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x08000920: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000924: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x08000928: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0800092C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000930: jalr        $t9
    // 0x08000934: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000934: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x08000938: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x0800093C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000940: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x08000944: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    // 0x08000948: beql        $t8, $zero, L_08000968
    if (ctx->r24 == 0) {
        // 0x0800094C: swc1        $f0, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
            goto L_08000968;
    }
    goto skip_0;
    // 0x0800094C: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    skip_0:
    // 0x08000950: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x08000954: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x08000958: nop

    // 0x0800095C: bc1tl       L_08000974
    if (c1cs) {
        // 0x08000960: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000974;
    }
    goto skip_1;
    // 0x08000960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x08000964: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
L_08000968:
    // 0x08000968: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    // 0x0800096C: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
L_08000970:
    // 0x08000970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000974:
    // 0x08000974: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000978: jr          $ra
    // 0x0800097C: nop

    TRACE_RETURN()
    return;
    // 0x0800097C: nop

;}
RECOMP_FUNC void func_080005DC_6ACB2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005DC: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x080005E0: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x080005E4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x080005E8: jr          $ra
    // 0x080005EC: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x080005EC: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
;}
RECOMP_FUNC void func_08000198_6AC6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000198: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x0800019C: jr          $ra
    // 0x080001A0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080001A0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080006C8_6ACC18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080006CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080006D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080006D4: addiu       $t6, $zero, 0xE1
    ctx->r14 = ADD32(0, 0XE1);
    // 0x080006D8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080006DC: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080006E0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080006E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080006E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080006EC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x080006F0: jalr        $t9
    // 0x080006F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080006F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x080006F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006FC: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000700: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800070C: jalr        $t9
    // 0x08000710: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000710: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000714: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000718: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x0800071C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000720: jalr        $t9
    // 0x08000724: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000724: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x08000728: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800072C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000730: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(15, 0X6BC) << 16);
    // 0x08000734: jalr        $t9
    // 0x08000738: addiu       $a0, $a0, 0x6BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X6BC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000738: addiu       $a0, $a0, 0x6BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X6BC));
    after_3:
    // 0x0800073C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000744: jr          $ra
    // 0x08000748: nop

    TRACE_RETURN()
    return;
    // 0x08000748: nop

;}
RECOMP_FUNC void func_0800074C_6ACC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800074C: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x08000750: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x08000754: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x08000758: jr          $ra
    // 0x0800075C: sh          $t8, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x0800075C: sh          $t8, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r24;
;}
RECOMP_FUNC void func_080003C0_6AC910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080003C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080003C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080003CC: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x080003D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080003D4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080003D8: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x080003DC: bnel        $t7, $zero, L_080003F0
    if (ctx->r15 != 0) {
        // 0x080003E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080003F0;
    }
    goto skip_0;
    // 0x080003E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080003E4: jalr        $t9
    // 0x080003E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003E8: nop

    after_0:
    // 0x080003EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080003F0:
    // 0x080003F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080003F4: jr          $ra
    // 0x080003F8: nop

    TRACE_RETURN()
    return;
    // 0x080003F8: nop

;}
RECOMP_FUNC void func_08000808_6ACD58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000808: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x0800080C: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08000810: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000818: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800081C: lw          $a1, 0x2C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X2C);
    // 0x08000820: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000824: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000828: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x0800082C: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x08000830: beq         $v0, $zero, L_0800084C
    if (ctx->r2 == 0) {
        // 0x08000834: or          $a1, $t7, $zero
        ctx->r5 = ctx->r15 | 0;
            goto L_0800084C;
    }
    // 0x08000834: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x08000838: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800083C: beql        $v0, $at, L_08000864
    if (ctx->r2 == ctx->r1) {
        // 0x08000840: addiu       $v0, $a0, 0xD0
        ctx->r2 = ADD32(ctx->r4, 0XD0);
            goto L_08000864;
    }
    goto skip_0;
    // 0x08000840: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    skip_0:
    // 0x08000844: b           L_080008B0
    // 0x08000848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080008B0;
    // 0x08000848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800084C:
    // 0x0800084C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(15, 0XE70) << 16);
    // 0x08000850: sw          $a0, 0xE70($at)
    MEM_W((int16_t)RELOC_LO16(15, 0XE70), ctx->r1) = ctx->r4;
    // 0x08000854: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000858: b           L_080008AC
    // 0x0800085C: sb          $t8, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r24;
        goto L_080008AC;
    // 0x0800085C: sb          $t8, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r24;
    // 0x08000860: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
L_08000864:
    // 0x08000864: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x08000868: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x0800086C: addiu       $a0, $zero, 0x271
    ctx->r4 = ADD32(0, 0X271);
    // 0x08000870: bne         $v1, $at, L_080008A0
    if (ctx->r3 != ctx->r1) {
        // 0x08000874: lui         $a3, 0x43C8
        ctx->r7 = S32(0X43C8 << 16);
            goto L_080008A0;
    }
    // 0x08000874: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x08000878: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800087C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000880: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x08000884: jalr        $t9
    // 0x08000888: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000888: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x0800088C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08000890: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x08000894: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x08000898: xori        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 ^ 0X1;
    // 0x0800089C: sb          $t1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r9;
L_080008A0:
    // 0x080008A0: blez        $v1, L_080008AC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x080008A4: addiu       $t2, $v1, -0x1
        ctx->r10 = ADD32(ctx->r3, -0X1);
            goto L_080008AC;
    }
    // 0x080008A4: addiu       $t2, $v1, -0x1
    ctx->r10 = ADD32(ctx->r3, -0X1);
    // 0x080008A8: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
L_080008AC:
    // 0x080008AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080008B0:
    // 0x080008B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080008B4: jr          $ra
    // 0x080008B8: nop

    TRACE_RETURN()
    return;
    // 0x080008B8: nop

;}
RECOMP_FUNC void func_0800007C_6AC5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800007C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x08000080: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000084: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000088: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0800008C: lui         $t7, 0x80
    ctx->r15 = S32(0X80 << 16);
    // 0x08000090: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000094: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000098: addiu       $t6, $zero, 0x12F
    ctx->r14 = ADD32(0, 0X12F);
    // 0x0800009C: ori         $t7, $t7, 0x263
    ctx->r15 = ctx->r15 | 0X263;
    // 0x080000A0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080000A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080000A8: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x080000AC: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080000B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080000B4: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080000B8: jalr        $t9
    // 0x080000BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080000BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x080000C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000C4: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x080000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080000D0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080000D4: jalr        $t9
    // 0x080000D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080000D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080000DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000E0: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000E8: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x080000EC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x080000F0: jalr        $t9
    // 0x080000F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080000F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x080000F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000FC: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000104: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x08000108: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x0800010C: jalr        $t9
    // 0x08000110: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000110: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000114: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08000118: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(15, 0XE48) << 16);
    // 0x0800011C: ldc1        $f8, 0xE48($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(15, 0XE48));
    // 0x08000120: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000124: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000128: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x0800012C: addiu       $t9, $t9, 0x2850
    ctx->r25 = ADD32(ctx->r25, 0X2850);
    // 0x08000130: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x08000134: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x08000138: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x0800013C: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    // 0x08000140: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x08000144: jalr        $t9
    // 0x08000148: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000148: nop

    after_4:
    // 0x0800014C: lh          $t8, 0x58($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X58);
    // 0x08000150: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000154: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000158: beq         $t8, $zero, L_08000170
    if (ctx->r24 == 0) {
        // 0x0800015C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(15, 0X0) << 16);
            goto L_08000170;
    }
    // 0x0800015C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(15, 0X0) << 16);
    // 0x08000160: lwc1        $f18, 0xC($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08000164: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x08000168: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x0800016C: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
L_08000170:
    // 0x08000170: jalr        $t9
    // 0x08000174: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000174: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X0));
    after_5:
    // 0x08000178: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800017C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000180: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000184: jr          $ra
    // 0x08000188: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x08000188: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_080001A4_6AC6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001A4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x080001A8: lhu         $t6, -0x33D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X33D0);
    // 0x080001AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080001B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080001B4: andi        $t7, $t6, 0x3F
    ctx->r15 = ctx->r14 & 0X3F;
    // 0x080001B8: bne         $t7, $zero, L_08000214
    if (ctx->r15 != 0) {
        // 0x080001BC: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_08000214;
    }
    // 0x080001BC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080001C0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080001C4: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080001C8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(15, 0X224) << 16);
    // 0x080001CC: addiu       $a1, $a1, 0x224
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X224));
    // 0x080001D0: jalr        $t9
    // 0x080001D4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001D4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x080001D8: beq         $v0, $zero, L_08000214
    if (ctx->r2 == 0) {
        // 0x080001DC: addiu       $t8, $zero, 0x18
        ctx->r24 = ADD32(0, 0X18);
            goto L_08000214;
    }
    // 0x080001DC: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x080001E0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001E4: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x080001E8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080001EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x080001F0: jalr        $t9
    // 0x080001F4: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001F4: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_1:
    // 0x080001F8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x080001FC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000200: addiu       $a0, $a0, -0x33D0
    ctx->r4 = ADD32(ctx->r4, -0X33D0);
    // 0x08000204: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08000208: lhu         $t0, 0x184($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X184);
    // 0x0800020C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000210: sh          $t1, 0x184($a0)
    MEM_H(0X184, ctx->r4) = ctx->r9;
L_08000214:
    // 0x08000214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000218: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800021C: jr          $ra
    // 0x08000220: nop

    TRACE_RETURN()
    return;
    // 0x08000220: nop

;}
RECOMP_FUNC void func_080005D0_6ACB20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005D0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080005D4: jr          $ra
    // 0x080005D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080005D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000490_6AC9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000498: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800049C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080004A0: addiu       $t6, $zero, 0x60
    ctx->r14 = ADD32(0, 0X60);
    // 0x080004A4: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x080004A8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080004AC: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080004B0: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x080004B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080004B8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080004BC: jalr        $t9
    // 0x080004C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x080004C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080004CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(15, 0X4E8) << 16);
    // 0x080004D0: jalr        $t9
    // 0x080004D4: addiu       $a0, $a0, 0x4E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X4E8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004D4: addiu       $a0, $a0, 0x4E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X4E8));
    after_1:
    // 0x080004D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080004DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080004E0: jr          $ra
    // 0x080004E4: nop

    TRACE_RETURN()
    return;
    // 0x080004E4: nop

;}
RECOMP_FUNC void func_080003FC_6AC94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003FC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(15, 0XE54) << 16);
    // 0x08000400: lwc1        $f0, 0xE54($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(15, 0XE54));
    // 0x08000404: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800040C: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08000410: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x08000414: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x08000418: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x0800041C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000420: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000424: sb          $t6, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r14;
    // 0x08000428: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x0800042C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08000430: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000434: jalr        $t9
    // 0x08000438: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000438: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x0800043C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000440: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000444: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08000448: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x0800044C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000450: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(15, 0X490) << 16);
    // 0x08000454: beq         $v0, $zero, L_0800046C
    if (ctx->r2 == 0) {
        // 0x08000458: addiu       $t9, $t9, 0x521C
        ctx->r25 = ADD32(ctx->r25, 0X521C);
            goto L_0800046C;
    }
    // 0x08000458: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800045C: beq         $v0, $at, L_08000474
    if (ctx->r2 == ctx->r1) {
        // 0x08000460: addiu       $t7, $zero, 0x100
        ctx->r15 = ADD32(0, 0X100);
            goto L_08000474;
    }
    // 0x08000460: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x08000464: b           L_08000478
    // 0x08000468: nop

        goto L_08000478;
    // 0x08000468: nop

L_0800046C:
    // 0x0800046C: b           L_08000478
    // 0x08000470: sh          $zero, 0x16($a2)
    MEM_H(0X16, ctx->r6) = 0;
        goto L_08000478;
    // 0x08000470: sh          $zero, 0x16($a2)
    MEM_H(0X16, ctx->r6) = 0;
L_08000474:
    // 0x08000474: sh          $t7, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r15;
L_08000478:
    // 0x08000478: jalr        $t9
    // 0x0800047C: addiu       $a0, $a0, 0x490
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X490));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800047C: addiu       $a0, $a0, 0x490
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X490));
    after_1:
    // 0x08000480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000488: jr          $ra
    // 0x0800048C: nop

    TRACE_RETURN()
    return;
    // 0x0800048C: nop

;}
RECOMP_FUNC void func_080004E8_6ACA38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080004EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080004F0: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x080004F4: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x080004F8: addiu       $t2, $zero, 0x261
    ctx->r10 = ADD32(0, 0X261);
    // 0x080004FC: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x08000500: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x08000504: lhu         $t8, 0x8A($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000508: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x0800050C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x08000510: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x08000514: bne         $t0, $zero, L_08000548
    if (ctx->r8 != 0) {
        // 0x08000518: sh          $t9, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r25;
            goto L_08000548;
    }
    // 0x08000518: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x0800051C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000520: sh          $t1, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r9;
    // 0x08000524: sw          $t2, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r10;
    // 0x08000528: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x0800052C: jalr        $t9
    // 0x08000530: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000530: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    after_0:
    // 0x08000534: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000538: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800053C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(15, 0X558) << 16);
    // 0x08000540: jalr        $t9
    // 0x08000544: addiu       $a0, $a0, 0x558
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X558));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000544: addiu       $a0, $a0, 0x558
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X558));
    after_1:
L_08000548:
    // 0x08000548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800054C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000550: jr          $ra
    // 0x08000554: nop

    TRACE_RETURN()
    return;
    // 0x08000554: nop

;}
RECOMP_FUNC void func_080005F0_6ACB40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080005F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080005F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080005FC: addiu       $t6, $zero, 0xE1
    ctx->r14 = ADD32(0, 0XE1);
    // 0x08000600: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000604: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000608: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800060C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000610: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000618: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x0800061C: jalr        $t9
    // 0x08000620: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000620: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08000624: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000628: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800062C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000630: lbu         $v0, 0xD4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD4);
    // 0x08000634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800063C: bne         $v0, $zero, L_0800065C
    if (ctx->r2 != 0) {
        // 0x08000640: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_0800065C;
    }
    // 0x08000640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000644: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(15, 0XE58) << 16);
    // 0x08000648: lwc1        $f0, 0xE58($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(15, 0XE58));
    // 0x0800064C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08000650: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08000654: b           L_08000678
    // 0x08000658: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
        goto L_08000678;
    // 0x08000658: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
L_0800065C:
    // 0x0800065C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000660: bne         $v0, $at, L_08000678
    if (ctx->r2 != ctx->r1) {
        // 0x08000664: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(15, 0XE5C) << 16);
            goto L_08000678;
    }
    // 0x08000664: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(15, 0XE5C) << 16);
    // 0x08000668: lwc1        $f0, 0xE5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(15, 0XE5C));
    // 0x0800066C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08000670: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08000674: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
L_08000678:
    // 0x08000678: jalr        $t9
    // 0x0800067C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800067C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x08000680: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000684: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08000688: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0800068C: jalr        $t9
    // 0x08000690: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000690: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x08000694: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000698: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800069C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(15, 0X5DC) << 16);
    // 0x080006A0: jalr        $t9
    // 0x080006A4: addiu       $a0, $a0, 0x5DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X5DC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080006A4: addiu       $a0, $a0, 0x5DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(15, 0X5DC));
    after_3:
    // 0x080006A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080006AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080006B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080006B4: jr          $ra
    // 0x080006B8: nop

    TRACE_RETURN()
    return;
    // 0x080006B8: nop

;}
RECOMP_FUNC void func_08000BC0_6ADF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000BC4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000BC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000BCC: addiu       $t9, $t9, 0x4670
    ctx->r25 = ADD32(ctx->r25, 0X4670);
    // 0x08000BD0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000BD4: jalr        $t9
    // 0x08000BD8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BD8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000BDC: bne         $v0, $zero, L_08000BFC
    if (ctx->r2 != 0) {
        // 0x08000BE0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08000BFC;
    }
    // 0x08000BE0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000BE4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000BE8: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08000BEC: jalr        $t9
    // 0x08000BF0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000BF0: nop

    after_1:
    // 0x08000BF4: b           L_08000CAC
    // 0x08000BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000CAC;
    // 0x08000BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000BFC:
    // 0x08000BFC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x08000C00: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x08000C04: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    // 0x08000C08: sw          $v1, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r3;
    // 0x08000C0C: addiu       $t7, $zero, 0x203
    ctx->r15 = ADD32(0, 0X203);
    // 0x08000C10: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x08000C14: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x08000C18: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x08000C1C: sw          $a0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r4;
    // 0x08000C20: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x08000C24: jal         0x08001228
    // 0x08000C28: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_08001228_6AE5E8(rdram, ctx);
        goto after_2;
    // 0x08000C28: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x08000C2C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08000C30: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08000C34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000C38: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(16, 0X1400) << 16);
    // 0x08000C3C: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x08000C40: swc1        $f4, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f4.u32l;
    // 0x08000C44: lwc1        $f6, 0x1400($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(16, 0X1400));
    // 0x08000C48: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(16, 0X1404) << 16);
    // 0x08000C4C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000C50: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
    // 0x08000C54: lwc1        $f8, 0x1404($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(16, 0X1404));
    // 0x08000C58: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000C5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000C60: swc1        $f8, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f8.u32l;
    // 0x08000C64: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x08000C68: lui         $t1, 0x800
    ctx->r9 = S32(RELOC_HI16(16, 0XA60) << 16);
    // 0x08000C6C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000C70: lw          $a1, 0x18($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X18);
    // 0x08000C74: addiu       $t1, $t1, 0xA60
    ctx->r9 = ADD32(ctx->r9, (int16_t)RELOC_LO16(16, 0XA60));
    // 0x08000C78: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000C7C: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x08000C80: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x08000C84: swc1        $f0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f0.u32l;
    // 0x08000C88: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x08000C8C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x08000C90: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x08000C94: addiu       $a0, $a0, 0x4160
    ctx->r4 = ADD32(ctx->r4, 0X4160);
    // 0x08000C98: sh          $zero, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = 0;
    // 0x08000C9C: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x08000CA0: jalr        $t9
    // 0x08000CA4: sw          $t1, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000CA4: sw          $t1, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r9;
    after_3:
    // 0x08000CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000CAC:
    // 0x08000CAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000CB0: jr          $ra
    // 0x08000CB4: nop

    TRACE_RETURN()
    return;
    // 0x08000CB4: nop

;}
RECOMP_FUNC void func_0800038C_6AD74C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800038C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x08000390: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x08000394: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x08000398: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x0800039C: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x080003A0: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x080003A4: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x080003A8: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x080003AC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x080003B0: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x080003B4: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x080003B8: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x080003BC: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x080003C0: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x080003C4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x080003C8: lw          $s1, 0xD0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XD0);
    // 0x080003CC: lui         $s5, 0x3
    ctx->r21 = S32(0X3 << 16);
    // 0x080003D0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x080003D4: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x080003D8: ori         $s5, $s5, 0x8000
    ctx->r21 = ctx->r21 | 0X8000;
    // 0x080003DC: lui         $s4, 0x8016
    ctx->r20 = S32(0X8016 << 16);
    // 0x080003E0: addiu       $v1, $a1, 0x2
    ctx->r3 = ADD32(ctx->r5, 0X2);
    // 0x080003E4: blez        $v1, L_08000450
    if (SIGNED(ctx->r3) <= 0) {
        // 0x080003E8: addiu       $s6, $zero, 0x5
        ctx->r22 = ADD32(0, 0X5);
            goto L_08000450;
    }
    // 0x080003E8: addiu       $s6, $zero, 0x5
    ctx->r22 = ADD32(0, 0X5);
    // 0x080003EC: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x080003F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080003F4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_080003F8:
    // 0x080003F8: blez        $v0, L_08000440
    if (SIGNED(ctx->r2) <= 0) {
        // 0x080003FC: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_08000440;
    }
    // 0x080003FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_08000400:
    // 0x08000400: multu       $s3, $v0
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08000404: lw          $t6, 0x58($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X58);
    // 0x08000408: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x0800040C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x08000410: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x08000414: mflo        $t9
    ctx->r25 = lo;
    // 0x08000418: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x0800041C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x08000420: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
    // 0x08000424: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x08000428: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x0800042C: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x08000430: bne         $at, $zero, L_08000400
    if (ctx->r1 != 0) {
        // 0x08000434: nop
    
            goto L_08000400;
    }
    // 0x08000434: nop

    // 0x08000438: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x0800043C: addiu       $v1, $a1, 0x2
    ctx->r3 = ADD32(ctx->r5, 0X2);
L_08000440:
    // 0x08000440: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x08000444: slt         $at, $s3, $v1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x08000448: bne         $at, $zero, L_080003F8
    if (ctx->r1 != 0) {
        // 0x0800044C: nop
    
            goto L_080003F8;
    }
    // 0x0800044C: nop

L_08000450:
    // 0x08000450: slti        $at, $a1, 0x3
    ctx->r1 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x08000454: bne         $at, $zero, L_08000628
    if (ctx->r1 != 0) {
        // 0x08000458: addiu       $s3, $zero, 0x2
        ctx->r19 = ADD32(0, 0X2);
            goto L_08000628;
    }
    // 0x08000458: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x0800045C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x08000460: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x08000464: lui         $at, 0x402C
    ctx->r1 = S32(0X402C << 16);
    // 0x08000468: mtc1        $at, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r1;
    // 0x0800046C: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    // 0x08000470: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x08000474: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(16, 0X13E8) << 16);
    // 0x08000478: ldc1        $f22, 0x13E8($at)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(16, 0X13E8));
    // 0x0800047C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000480: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x08000484: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x08000488: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x0800048C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x08000490: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x08000494: addiu       $s4, $s4, -0x3A38
    ctx->r20 = ADD32(ctx->r20, -0X3A38);
    // 0x08000498: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
L_0800049C:
    // 0x0800049C: bne         $at, $zero, L_08000618
    if (ctx->r1 != 0) {
        // 0x080004A0: addiu       $s0, $zero, 0x2
        ctx->r16 = ADD32(0, 0X2);
            goto L_08000618;
    }
    // 0x080004A0: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x080004A4: lui         $s2, 0x8000
    ctx->r18 = S32(0X8000 << 16);
    // 0x080004A8: addiu       $s2, $s2, 0x3E10
    ctx->r18 = ADD32(ctx->r18, 0X3E10);
    // 0x080004AC: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
L_080004B0:
    // 0x080004B0: subu        $t5, $v0, $s0
    ctx->r13 = SUB32(ctx->r2, ctx->r16);
    // 0x080004B4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080004B8: addu        $t3, $t2, $s5
    ctx->r11 = ADD32(ctx->r10, ctx->r21);
    // 0x080004BC: lhu         $t4, 0x2DCE($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X2DCE);
    // 0x080004C0: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x080004C4: bgez        $t4, L_080004DC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x080004C8: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_080004DC;
    }
    // 0x080004C8: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x080004CC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x080004D0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080004D4: nop

    // 0x080004D8: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_080004DC:
    // 0x080004DC: multu       $t5, $s6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x080004E0: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x080004E4: mul.d       $f10, $f6, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f22.d);
    // 0x080004E8: subu        $t8, $t9, $s3
    ctx->r24 = SUB32(ctx->r25, ctx->r19);
    // 0x080004EC: mflo        $t6
    ctx->r14 = lo;
    // 0x080004F0: addiu       $t7, $t6, 0x5
    ctx->r15 = ADD32(ctx->r14, 0X5);
    // 0x080004F4: mul.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f20.d);
    // 0x080004F8: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x080004FC: multu       $t8, $s6
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08000500: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x08000504: mflo        $t0
    ctx->r8 = lo;
    // 0x08000508: addiu       $t1, $t0, 0x5
    ctx->r9 = ADD32(ctx->r8, 0X5);
    // 0x0800050C: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x08000510: add.d       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f16.d + ctx->f4.d;
    // 0x08000514: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x08000518: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x0800051C: mul.d       $f16, $f18, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f26.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f26.d);
    // 0x08000520: nop

    // 0x08000524: mul.d       $f4, $f16, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f20.d);
    // 0x08000528: trunc.w.d   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x0800052C: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x08000530: jalr        $s2
    // 0x08000534: andi        $a0, $t3, 0x3FF
    ctx->r4 = ctx->r11 & 0X3FF;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_0;
    // 0x08000534: andi        $a0, $t3, 0x3FF
    ctx->r4 = ctx->r11 & 0X3FF;
    after_0:
    // 0x08000538: lw          $t5, 0x0($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X0);
    // 0x0800053C: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x08000540: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000544: addu        $t6, $t5, $s5
    ctx->r14 = ADD32(ctx->r13, ctx->r21);
    // 0x08000548: lhu         $t7, 0x2DCE($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X2DCE);
    // 0x0800054C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x08000550: bgez        $t7, L_08000568
    if (SIGNED(ctx->r15) >= 0) {
        // 0x08000554: cvt.d.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
            goto L_08000568;
    }
    // 0x08000554: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x08000558: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x0800055C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000560: nop

    // 0x08000564: add.d       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f10.d + ctx->f18.d;
L_08000568:
    // 0x08000568: mul.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x0800056C: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x08000570: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x08000574: subu        $t8, $t9, $s0
    ctx->r24 = SUB32(ctx->r25, ctx->r16);
    // 0x08000578: sll         $t0, $t8, 3
    ctx->r8 = S32(ctx->r24 << 3);
    // 0x0800057C: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x08000580: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x08000584: mul.d       $f4, $f16, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f20.d);
    // 0x08000588: subu        $t3, $t2, $s3
    ctx->r11 = SUB32(ctx->r10, ctx->r19);
    // 0x0800058C: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x08000590: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x08000594: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x08000598: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x0800059C: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x080005A0: add.d       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f4.d + ctx->f8.d;
    // 0x080005A4: add.d       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = ctx->f18.d + ctx->f16.d;
    // 0x080005A8: mul.d       $f4, $f6, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f28.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f28.d);
    // 0x080005AC: nop

    // 0x080005B0: mul.d       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x080005B4: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x080005B8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x080005BC: jalr        $s2
    // 0x080005C0: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_1;
    // 0x080005C0: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    after_1:
    // 0x080005C4: add.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f24.fl;
    // 0x080005C8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080005CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080005D0: lw          $t2, 0x4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X4);
    // 0x080005D4: mul.s       $f16, $f18, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f30.fl);
    // 0x080005D8: lw          $t8, 0x58($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X58);
    // 0x080005DC: addiu       $t3, $t2, 0x2
    ctx->r11 = ADD32(ctx->r10, 0X2);
    // 0x080005E0: multu       $s3, $t3
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x080005E4: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x080005E8: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x080005EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x080005F0: div.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x080005F4: mflo        $t4
    ctx->r12 = lo;
    // 0x080005F8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x080005FC: addu        $t6, $t1, $t5
    ctx->r14 = ADD32(ctx->r9, ctx->r13);
    // 0x08000600: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x08000604: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x08000608: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0800060C: bnel        $at, $zero, L_080004B0
    if (ctx->r1 != 0) {
        // 0x08000610: lw          $t2, 0x0($s4)
        ctx->r10 = MEM_W(ctx->r20, 0X0);
            goto L_080004B0;
    }
    goto skip_0;
    // 0x08000610: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    skip_0:
    // 0x08000614: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
L_08000618:
    // 0x08000618: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0800061C: slt         $at, $s3, $a1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x08000620: bnel        $at, $zero, L_0800049C
    if (ctx->r1 != 0) {
        // 0x08000624: slti        $at, $v0, 0x3
        ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_0800049C;
    }
    goto skip_1;
    // 0x08000624: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    skip_1:
L_08000628:
    // 0x08000628: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x0800062C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08000630: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x08000634: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x08000638: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x0800063C: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x08000640: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x08000644: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x08000648: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x0800064C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x08000650: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x08000654: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x08000658: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x0800065C: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x08000660: jr          $ra
    // 0x08000664: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x08000664: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_08000254_6AD614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000254: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000258: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x0800025C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x08000260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000264: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000268: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800026C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08000270: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x08000274: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000278: addiu       $t9, $t9, 0x6AAC
    ctx->r25 = ADD32(ctx->r25, 0X6AAC);
    // 0x0800027C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x08000280: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x08000284: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000288: jalr        $t9
    // 0x0800028C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800028C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x08000290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000294: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x08000298: jr          $ra
    // 0x0800029C: nop

    TRACE_RETURN()
    return;
    // 0x0800029C: nop

;}
RECOMP_FUNC void func_08000A60_6ADE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A60: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x08000A64: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x08000A68: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x08000A6C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x08000A70: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x08000A74: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x08000A78: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x08000A7C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x08000A80: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000A84: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x08000A88: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x08000A8C: lw          $s1, 0xD0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XD0);
    // 0x08000A90: lui         $s6, 0x3
    ctx->r22 = S32(0X3 << 16);
    // 0x08000A94: ori         $s6, $s6, 0x8000
    ctx->r22 = ctx->r22 | 0X8000;
    // 0x08000A98: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x08000A9C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x08000AA0: lui         $s5, 0x8016
    ctx->r21 = S32(0X8016 << 16);
    // 0x08000AA4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x08000AA8: blez        $v1, L_08000B60
    if (SIGNED(ctx->r3) <= 0) {
        // 0x08000AAC: lui         $at, 0x4080
        ctx->r1 = S32(0X4080 << 16);
            goto L_08000B60;
    }
    // 0x08000AAC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08000AB0: lw          $s2, 0x4($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X4);
    // 0x08000AB4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x08000AB8: addiu       $s5, $s5, -0x3A38
    ctx->r21 = ADD32(ctx->r21, -0X3A38);
    // 0x08000ABC: addiu       $v0, $s2, 0x2
    ctx->r2 = ADD32(ctx->r18, 0X2);
L_08000AC0:
    // 0x08000AC0: blez        $v0, L_08000B50
    if (SIGNED(ctx->r2) <= 0) {
        // 0x08000AC4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_08000B50;
    }
    // 0x08000AC4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x08000AC8: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x08000ACC: addiu       $s3, $s3, 0x3E10
    ctx->r19 = ADD32(ctx->r19, 0X3E10);
    // 0x08000AD0: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
L_08000AD4:
    // 0x08000AD4: subu        $t0, $s2, $s0
    ctx->r8 = SUB32(ctx->r18, ctx->r16);
    // 0x08000AD8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x08000ADC: addu        $t8, $t7, $s6
    ctx->r24 = ADD32(ctx->r15, ctx->r22);
    // 0x08000AE0: lhu         $t9, 0x2DCE($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X2DCE);
    // 0x08000AE4: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    // 0x08000AE8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x08000AEC: sll         $t3, $a0, 5
    ctx->r11 = S32(ctx->r4 << 5);
    // 0x08000AF0: jalr        $s3
    // 0x08000AF4: andi        $a0, $t3, 0x3FF
    ctx->r4 = ctx->r11 & 0X3FF;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_0;
    // 0x08000AF4: andi        $a0, $t3, 0x3FF
    ctx->r4 = ctx->r11 & 0X3FF;
    after_0:
    // 0x08000AF8: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x08000AFC: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x08000B00: lw          $t5, 0x58($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X58);
    // 0x08000B04: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000B08: addiu       $t0, $t8, 0x2
    ctx->r8 = ADD32(ctx->r24, 0X2);
    // 0x08000B0C: multu       $s4, $t0
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08000B10: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x08000B14: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x08000B18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x08000B1C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08000B20: mflo        $t9
    ctx->r25 = lo;
    // 0x08000B24: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x08000B28: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x08000B2C: addu        $t2, $t7, $t1
    ctx->r10 = ADD32(ctx->r15, ctx->r9);
    // 0x08000B30: swc1        $f10, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f10.u32l;
    // 0x08000B34: lw          $s2, 0x4($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X4);
    // 0x08000B38: addiu       $v0, $s2, 0x2
    ctx->r2 = ADD32(ctx->r18, 0X2);
    // 0x08000B3C: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x08000B40: bnel        $at, $zero, L_08000AD4
    if (ctx->r1 != 0) {
        // 0x08000B44: lw          $t7, 0x0($s5)
        ctx->r15 = MEM_W(ctx->r21, 0X0);
            goto L_08000AD4;
    }
    goto skip_0;
    // 0x08000B44: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    skip_0:
    // 0x08000B48: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x08000B4C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_08000B50:
    // 0x08000B50: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x08000B54: slt         $at, $s4, $v1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x08000B58: bne         $at, $zero, L_08000AC0
    if (ctx->r1 != 0) {
        // 0x08000B5C: nop
    
            goto L_08000AC0;
    }
    // 0x08000B5C: nop

L_08000B60:
    // 0x08000B60: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000B64: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000B68: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000B6C: addiu       $t9, $t9, 0x6AAC
    ctx->r25 = ADD32(ctx->r25, 0X6AAC);
    // 0x08000B70: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000B74: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x08000B78: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x08000B7C: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x08000B80: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000B84: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x08000B88: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000B8C: jalr        $t9
    // 0x08000B90: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B90: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x08000B94: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x08000B98: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08000B9C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000BA0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x08000BA4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x08000BA8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x08000BAC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x08000BB0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x08000BB4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x08000BB8: jr          $ra
    // 0x08000BBC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x08000BBC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_08000950_6ADD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000950: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000954: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800095C: addiu       $t9, $t9, 0x4670
    ctx->r25 = ADD32(ctx->r25, 0X4670);
    // 0x08000960: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000964: jalr        $t9
    // 0x08000968: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000968: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800096C: bne         $v0, $zero, L_0800098C
    if (ctx->r2 != 0) {
        // 0x08000970: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_0800098C;
    }
    // 0x08000970: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000974: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000978: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x0800097C: jalr        $t9
    // 0x08000980: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000980: nop

    after_1:
    // 0x08000984: b           L_08000A54
    // 0x08000988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000A54;
    // 0x08000988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800098C:
    // 0x0800098C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x08000990: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x08000994: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    // 0x08000998: sw          $v1, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r3;
    // 0x0800099C: addiu       $t7, $zero, 0xC1
    ctx->r15 = ADD32(0, 0XC1);
    // 0x080009A0: addiu       $t8, $zero, 0x60
    ctx->r24 = ADD32(0, 0X60);
    // 0x080009A4: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x080009A8: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x080009AC: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x080009B0: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x080009B4: sw          $a0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r4;
    // 0x080009B8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x080009BC: sb          $zero, 0x24($v1)
    MEM_B(0X24, ctx->r3) = 0;
    // 0x080009C0: sb          $zero, 0x25($v1)
    MEM_B(0X25, ctx->r3) = 0;
    // 0x080009C4: sb          $t8, 0x26($v1)
    MEM_B(0X26, ctx->r3) = ctx->r24;
    // 0x080009C8: sb          $t0, 0x27($v1)
    MEM_B(0X27, ctx->r3) = ctx->r8;
    // 0x080009CC: jal         0x08001228
    // 0x080009D0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_08001228_6AE5E8(rdram, ctx);
        goto after_2;
    // 0x080009D0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x080009D4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x080009D8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(16, 0X13F8) << 16);
    // 0x080009DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080009E0: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x080009E4: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
    // 0x080009E8: lwc1        $f4, 0x13F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(16, 0X13F8));
    // 0x080009EC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(16, 0X13FC) << 16);
    // 0x080009F0: lui         $t3, 0x800
    ctx->r11 = S32(RELOC_HI16(16, 0XD8) << 16);
    // 0x080009F4: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    // 0x080009F8: lwc1        $f6, 0x13FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(16, 0X13FC));
    // 0x080009FC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000A00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000A04: swc1        $f6, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f6.u32l;
    // 0x08000A08: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x08000A0C: lui         $t4, 0x800
    ctx->r12 = S32(RELOC_HI16(16, 0X7A8) << 16);
    // 0x08000A10: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A14: lw          $a1, 0x18($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X18);
    // 0x08000A18: addiu       $t3, $t3, 0xD8
    ctx->r11 = ADD32(ctx->r11, (int16_t)RELOC_LO16(16, 0XD8));
    // 0x08000A1C: addiu       $t4, $t4, 0x7A8
    ctx->r12 = ADD32(ctx->r12, (int16_t)RELOC_LO16(16, 0X7A8));
    // 0x08000A20: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x08000A24: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x08000A28: swc1        $f0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f0.u32l;
    // 0x08000A2C: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x08000A30: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x08000A34: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A38: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x08000A3C: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    // 0x08000A40: addiu       $a0, $a0, 0x4160
    ctx->r4 = ADD32(ctx->r4, 0X4160);
    // 0x08000A44: sw          $t3, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r11;
    // 0x08000A48: jalr        $t9
    // 0x08000A4C: sw          $t4, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000A4C: sw          $t4, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r12;
    after_3:
    // 0x08000A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000A54:
    // 0x08000A54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000A58: jr          $ra
    // 0x08000A5C: nop

    TRACE_RETURN()
    return;
    // 0x08000A5C: nop

;}
RECOMP_FUNC void func_08000CB8_6AE078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000CBC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000CC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000CC4: addiu       $t9, $t9, 0x4670
    ctx->r25 = ADD32(ctx->r25, 0X4670);
    // 0x08000CC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000CCC: jalr        $t9
    // 0x08000CD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000CD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000CD4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08000CD8: bne         $v0, $zero, L_08000CF8
    if (ctx->r2 != 0) {
        // 0x08000CDC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08000CF8;
    }
    // 0x08000CDC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000CE0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000CE4: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08000CE8: jalr        $t9
    // 0x08000CEC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000CEC: nop

    after_1:
    // 0x08000CF0: b           L_08000D94
    // 0x08000CF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000D94;
    // 0x08000CF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000CF8:
    // 0x08000CF8: sw          $v1, 0xD0($a3)
    MEM_W(0XD0, ctx->r7) = ctx->r3;
    // 0x08000CFC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x08000D00: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    // 0x08000D04: addiu       $t6, $zero, 0x60
    ctx->r14 = ADD32(0, 0X60);
    // 0x08000D08: addiu       $t7, $zero, 0xC0
    ctx->r15 = ADD32(0, 0XC0);
    // 0x08000D0C: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x08000D10: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x08000D14: sw          $a2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r6;
    // 0x08000D18: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x08000D1C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x08000D20: sb          $zero, 0x24($v1)
    MEM_B(0X24, ctx->r3) = 0;
    // 0x08000D24: sb          $zero, 0x25($v1)
    MEM_B(0X25, ctx->r3) = 0;
    // 0x08000D28: sb          $t6, 0x26($v1)
    MEM_B(0X26, ctx->r3) = ctx->r14;
    // 0x08000D2C: sb          $t7, 0x27($v1)
    MEM_B(0X27, ctx->r3) = ctx->r15;
    // 0x08000D30: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(16, 0X1408) << 16);
    // 0x08000D34: lwc1        $f4, 0x1408($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(16, 0X1408));
    // 0x08000D38: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(16, 0X140C) << 16);
    // 0x08000D3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000D40: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    // 0x08000D44: lwc1        $f6, 0x140C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(16, 0X140C));
    // 0x08000D48: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000D4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000D50: swc1        $f6, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f6.u32l;
    // 0x08000D54: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x08000D58: lui         $t8, 0x800
    ctx->r24 = S32(RELOC_HI16(16, 0XD8) << 16);
    // 0x08000D5C: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(16, 0X254) << 16);
    // 0x08000D60: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D64: addiu       $t8, $t8, 0xD8
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(16, 0XD8));
    // 0x08000D68: addiu       $t0, $t0, 0x254
    ctx->r8 = ADD32(ctx->r8, (int16_t)RELOC_LO16(16, 0X254));
    // 0x08000D6C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000D70: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x08000D74: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x08000D78: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x08000D7C: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x08000D80: sw          $t8, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r24;
    // 0x08000D84: sw          $t0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r8;
    // 0x08000D88: jalr        $t9
    // 0x08000D8C: addiu       $a0, $a0, 0x4160
    ctx->r4 = ADD32(ctx->r4, 0X4160);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000D8C: addiu       $a0, $a0, 0x4160
    ctx->r4 = ADD32(ctx->r4, 0X4160);
    after_2:
    // 0x08000D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000D94:
    // 0x08000D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000D98: jr          $ra
    // 0x08000D9C: nop

    TRACE_RETURN()
    return;
    // 0x08000D9C: nop

;}
RECOMP_FUNC void func_08000DA0_6AE160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000DA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000DA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000DAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000DB0: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08000DB4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x08000DB8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000DBC: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08000DC0: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x08000DC4: lw          $t7, 0x58($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X58);
    // 0x08000DC8: addiu       $t3, $v1, 0x2
    ctx->r11 = ADD32(ctx->r3, 0X2);
    // 0x08000DCC: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x08000DD0: bgez        $v1, L_08000DE0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08000DD4: sra         $t8, $v1, 1
        ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
            goto L_08000DE0;
    }
    // 0x08000DD4: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x08000DD8: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x08000DDC: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_08000DE0:
    // 0x08000DE0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x08000DE4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x08000DE8: bgez        $t1, L_08000DF8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x08000DEC: sra         $t2, $t1, 1
        ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
            goto L_08000DF8;
    }
    // 0x08000DEC: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x08000DF0: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x08000DF4: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_08000DF8:
    // 0x08000DF8: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08000DFC: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x08000E00: addiu       $a0, $a0, 0x5B38
    ctx->r4 = ADD32(ctx->r4, 0X5B38);
    // 0x08000E04: mflo        $t4
    ctx->r12 = lo;
    // 0x08000E08: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x08000E0C: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x08000E10: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x08000E14: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08000E18: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x08000E1C: lw          $t8, 0x58($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X58);
    // 0x08000E20: bgez        $v1, L_08000E30
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08000E24: sra         $t7, $v1, 1
        ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
            goto L_08000E30;
    }
    // 0x08000E24: sra         $t7, $v1, 1
    ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
    // 0x08000E28: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x08000E2C: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_08000E30:
    // 0x08000E30: addiu       $t0, $v1, 0x2
    ctx->r8 = ADD32(ctx->r3, 0X2);
    // 0x08000E34: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x08000E38: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x08000E3C: bgez        $t2, L_08000E4C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x08000E40: sra         $t3, $t2, 1
        ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
            goto L_08000E4C;
    }
    // 0x08000E40: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x08000E44: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x08000E48: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_08000E4C:
    // 0x08000E4C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08000E50: multu       $t4, $t0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08000E54: mflo        $t5
    ctx->r13 = lo;
    // 0x08000E58: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x08000E5C: addu        $t7, $t1, $t6
    ctx->r15 = ADD32(ctx->r9, ctx->r14);
    // 0x08000E60: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x08000E64: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08000E68: lw          $t4, 0x8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X8);
    // 0x08000E6C: lw          $t8, 0x58($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X58);
    // 0x08000E70: bgez        $v1, L_08000E80
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08000E74: sra         $t9, $v1, 1
        ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
            goto L_08000E80;
    }
    // 0x08000E74: sra         $t9, $v1, 1
    ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
    // 0x08000E78: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x08000E7C: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_08000E80:
    // 0x08000E80: addiu       $t5, $v1, 0x2
    ctx->r13 = ADD32(ctx->r3, 0X2);
    // 0x08000E84: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x08000E88: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x08000E8C: bgez        $t4, L_08000E9C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x08000E90: sra         $t0, $t4, 1
        ctx->r8 = S32(SIGNED(ctx->r12) >> 1);
            goto L_08000E9C;
    }
    // 0x08000E90: sra         $t0, $t4, 1
    ctx->r8 = S32(SIGNED(ctx->r12) >> 1);
    // 0x08000E94: addiu       $at, $t4, 0x1
    ctx->r1 = ADD32(ctx->r12, 0X1);
    // 0x08000E98: sra         $t0, $at, 1
    ctx->r8 = S32(SIGNED(ctx->r1) >> 1);
L_08000E9C:
    // 0x08000E9C: multu       $t0, $t5
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08000EA0: mflo        $t1
    ctx->r9 = lo;
    // 0x08000EA4: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x08000EA8: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x08000EAC: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x08000EB0: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08000EB4: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x08000EB8: lw          $t9, 0x58($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X58);
    // 0x08000EBC: bgez        $v1, L_08000ECC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08000EC0: sra         $t8, $v1, 1
        ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
            goto L_08000ECC;
    }
    // 0x08000EC0: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x08000EC4: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x08000EC8: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_08000ECC:
    // 0x08000ECC: addiu       $t3, $v1, 0x2
    ctx->r11 = ADD32(ctx->r3, 0X2);
    // 0x08000ED0: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x08000ED4: addu        $t4, $t9, $t2
    ctx->r12 = ADD32(ctx->r25, ctx->r10);
    // 0x08000ED8: bgez        $t0, L_08000EE8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x08000EDC: sra         $t5, $t0, 1
        ctx->r13 = S32(SIGNED(ctx->r8) >> 1);
            goto L_08000EE8;
    }
    // 0x08000EDC: sra         $t5, $t0, 1
    ctx->r13 = S32(SIGNED(ctx->r8) >> 1);
    // 0x08000EE0: addiu       $at, $t0, 0x1
    ctx->r1 = ADD32(ctx->r8, 0X1);
    // 0x08000EE4: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_08000EE8:
    // 0x08000EE8: addiu       $t1, $t5, 0x1
    ctx->r9 = ADD32(ctx->r13, 0X1);
    // 0x08000EEC: multu       $t1, $t3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08000EF0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000EF4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000EF8: mflo        $t6
    ctx->r14 = lo;
    // 0x08000EFC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x08000F00: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x08000F04: jalr        $t9
    // 0x08000F08: swc1        $f0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F08: swc1        $f0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f0.u32l;
    after_0:
    // 0x08000F0C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000F10: addiu       $t9, $t9, 0x6114
    ctx->r25 = ADD32(ctx->r25, 0X6114);
    // 0x08000F14: jalr        $t9
    // 0x08000F18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000F18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08000F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000F24: jr          $ra
    // 0x08000F28: nop

    TRACE_RETURN()
    return;
    // 0x08000F28: nop

;}
RECOMP_FUNC void func_08000668_6ADA28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000668: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800066C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000670: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000674: addiu       $t9, $t9, 0x4670
    ctx->r25 = ADD32(ctx->r25, 0X4670);
    // 0x08000678: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x0800067C: jalr        $t9
    // 0x08000680: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000680: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000684: bne         $v0, $zero, L_080006A4
    if (ctx->r2 != 0) {
        // 0x08000688: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_080006A4;
    }
    // 0x08000688: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x0800068C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000690: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08000694: jalr        $t9
    // 0x08000698: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000698: nop

    after_1:
    // 0x0800069C: b           L_0800079C
    // 0x080006A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_0800079C;
    // 0x080006A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080006A4:
    // 0x080006A4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x080006A8: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x080006AC: addiu       $a2, $zero, 0x30D4
    ctx->r6 = ADD32(0, 0X30D4);
    // 0x080006B0: sw          $v1, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r3;
    // 0x080006B4: addiu       $t7, $zero, 0x1E43
    ctx->r15 = ADD32(0, 0X1E43);
    // 0x080006B8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006BC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x080006C0: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x080006C4: sw          $a2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r6;
    // 0x080006C8: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x080006CC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x080006D0: addiu       $t9, $t9, 0x4840
    ctx->r25 = ADD32(ctx->r25, 0X4840);
    // 0x080006D4: lui         $a0, 0x900
    ctx->r4 = S32(0X900 << 16);
    // 0x080006D8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x080006DC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x080006E0: jalr        $t9
    // 0x080006E4: addiu       $a1, $zero, 0x161
    ctx->r5 = ADD32(0, 0X161);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080006E4: addiu       $a1, $zero, 0x161
    ctx->r5 = ADD32(0, 0X161);
    after_2:
    // 0x080006E8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x080006EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080006F0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080006F4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x080006F8: addiu       $t8, $zero, 0xC0
    ctx->r24 = ADD32(0, 0XC0);
    // 0x080006FC: addiu       $t0, $zero, 0xD0
    ctx->r8 = ADD32(0, 0XD0);
    // 0x08000700: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x08000704: sb          $a0, 0x24($v1)
    MEM_B(0X24, ctx->r3) = ctx->r4;
    // 0x08000708: sb          $a0, 0x25($v1)
    MEM_B(0X25, ctx->r3) = ctx->r4;
    // 0x0800070C: sb          $t8, 0x26($v1)
    MEM_B(0X26, ctx->r3) = ctx->r24;
    // 0x08000710: sb          $t0, 0x27($v1)
    MEM_B(0X27, ctx->r3) = ctx->r8;
    // 0x08000714: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
    // 0x08000718: jal         0x08001228
    // 0x0800071C: swc1        $f0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f0.u32l;
    func_08001228_6AE5E8(rdram, ctx);
        goto after_3;
    // 0x0800071C: swc1        $f0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f0.u32l;
    after_3:
    // 0x08000720: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(16, 0X13F0) << 16);
    // 0x08000724: lwc1        $f0, 0x13F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(16, 0X13F0));
    // 0x08000728: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0800072C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x08000730: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(16, 0X13F4) << 16);
    // 0x08000734: lwc1        $f2, 0x13F4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(16, 0X13F4));
    // 0x08000738: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x0800073C: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
    // 0x08000740: swc1        $f2, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f2.u32l;
    // 0x08000744: swc1        $f2, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f2.u32l;
    // 0x08000748: lw          $a1, 0x18($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X18);
    // 0x0800074C: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x08000750: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x08000754: sb          $t1, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r9;
    // 0x08000758: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x0800075C: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x08000760: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08000764: lui         $t3, 0x800
    ctx->r11 = S32(RELOC_HI16(16, 0XD8) << 16);
    // 0x08000768: lui         $t4, 0x800
    ctx->r12 = S32(RELOC_HI16(16, 0X38C) << 16);
    // 0x0800076C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000770: addiu       $t3, $t3, 0xD8
    ctx->r11 = ADD32(ctx->r11, (int16_t)RELOC_LO16(16, 0XD8));
    // 0x08000774: addiu       $t4, $t4, 0x38C
    ctx->r12 = ADD32(ctx->r12, (int16_t)RELOC_LO16(16, 0X38C));
    // 0x08000778: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800077C: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x08000780: sw          $t2, 0x64($a2)
    MEM_W(0X64, ctx->r6) = ctx->r10;
    // 0x08000784: sh          $zero, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = 0;
    // 0x08000788: addiu       $a0, $a0, 0x4160
    ctx->r4 = ADD32(ctx->r4, 0X4160);
    // 0x0800078C: sw          $t3, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r11;
    // 0x08000790: jalr        $t9
    // 0x08000794: sw          $t4, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000794: sw          $t4, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r12;
    after_4:
    // 0x08000798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800079C:
    // 0x0800079C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080007A0: jr          $ra
    // 0x080007A4: nop

    TRACE_RETURN()
    return;
    // 0x080007A4: nop

;}
RECOMP_FUNC void func_080000D8_6AD498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080000D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080000DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080000E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080000E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080000E8: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x080000EC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x080000F0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080000F4: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x080000F8: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x080000FC: lw          $t6, 0x58($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X58);
    // 0x08000100: addiu       $t2, $v1, 0x2
    ctx->r10 = ADD32(ctx->r3, 0X2);
    // 0x08000104: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08000108: bgez        $v1, L_08000118
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0800010C: sra         $t7, $v1, 1
        ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
            goto L_08000118;
    }
    // 0x0800010C: sra         $t7, $v1, 1
    ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
    // 0x08000110: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x08000114: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_08000118:
    // 0x08000118: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x0800011C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x08000120: bgez        $t0, L_08000130
    if (SIGNED(ctx->r8) >= 0) {
        // 0x08000124: sra         $t1, $t0, 1
        ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
            goto L_08000130;
    }
    // 0x08000124: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x08000128: addiu       $at, $t0, 0x1
    ctx->r1 = ADD32(ctx->r8, 0X1);
    // 0x0800012C: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_08000130:
    // 0x08000130: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08000134: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x08000138: addiu       $a0, $a0, 0x5B38
    ctx->r4 = ADD32(ctx->r4, 0X5B38);
    // 0x0800013C: mflo        $t3
    ctx->r11 = lo;
    // 0x08000140: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x08000144: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x08000148: swc1        $f0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f0.u32l;
    // 0x0800014C: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08000150: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x08000154: lw          $t7, 0x58($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X58);
    // 0x08000158: bgez        $v1, L_08000168
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0800015C: sra         $t6, $v1, 1
        ctx->r14 = S32(SIGNED(ctx->r3) >> 1);
            goto L_08000168;
    }
    // 0x0800015C: sra         $t6, $v1, 1
    ctx->r14 = S32(SIGNED(ctx->r3) >> 1);
    // 0x08000160: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x08000164: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_08000168:
    // 0x08000168: addiu       $t9, $v1, 0x2
    ctx->r25 = ADD32(ctx->r3, 0X2);
    // 0x0800016C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x08000170: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x08000174: bgez        $t1, L_08000184
    if (SIGNED(ctx->r9) >= 0) {
        // 0x08000178: sra         $t2, $t1, 1
        ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
            goto L_08000184;
    }
    // 0x08000178: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x0800017C: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x08000180: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_08000184:
    // 0x08000184: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000188: multu       $t3, $t9
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0800018C: mflo        $t4
    ctx->r12 = lo;
    // 0x08000190: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x08000194: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x08000198: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x0800019C: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x080001A0: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x080001A4: lw          $t7, 0x58($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X58);
    // 0x080001A8: bgez        $v1, L_080001B8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x080001AC: sra         $t8, $v1, 1
        ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
            goto L_080001B8;
    }
    // 0x080001AC: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x080001B0: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x080001B4: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_080001B8:
    // 0x080001B8: addiu       $t4, $v1, 0x2
    ctx->r12 = ADD32(ctx->r3, 0X2);
    // 0x080001BC: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x080001C0: addu        $t2, $t7, $t1
    ctx->r10 = ADD32(ctx->r15, ctx->r9);
    // 0x080001C4: bgez        $t3, L_080001D4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x080001C8: sra         $t9, $t3, 1
        ctx->r25 = S32(SIGNED(ctx->r11) >> 1);
            goto L_080001D4;
    }
    // 0x080001C8: sra         $t9, $t3, 1
    ctx->r25 = S32(SIGNED(ctx->r11) >> 1);
    // 0x080001CC: addiu       $at, $t3, 0x1
    ctx->r1 = ADD32(ctx->r11, 0X1);
    // 0x080001D0: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_080001D4:
    // 0x080001D4: multu       $t9, $t4
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x080001D8: mflo        $t0
    ctx->r8 = lo;
    // 0x080001DC: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x080001E0: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x080001E4: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
    // 0x080001E8: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x080001EC: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x080001F0: lw          $t8, 0x58($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X58);
    // 0x080001F4: bgez        $v1, L_08000204
    if (SIGNED(ctx->r3) >= 0) {
        // 0x080001F8: sra         $t7, $v1, 1
        ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
            goto L_08000204;
    }
    // 0x080001F8: sra         $t7, $v1, 1
    ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
    // 0x080001FC: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x08000200: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_08000204:
    // 0x08000204: addiu       $t2, $v1, 0x2
    ctx->r10 = ADD32(ctx->r3, 0X2);
    // 0x08000208: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x0800020C: addu        $t3, $t8, $t1
    ctx->r11 = ADD32(ctx->r24, ctx->r9);
    // 0x08000210: bgez        $t9, L_08000220
    if (SIGNED(ctx->r25) >= 0) {
        // 0x08000214: sra         $t4, $t9, 1
        ctx->r12 = S32(SIGNED(ctx->r25) >> 1);
            goto L_08000220;
    }
    // 0x08000214: sra         $t4, $t9, 1
    ctx->r12 = S32(SIGNED(ctx->r25) >> 1);
    // 0x08000218: addiu       $at, $t9, 0x1
    ctx->r1 = ADD32(ctx->r25, 0X1);
    // 0x0800021C: sra         $t4, $at, 1
    ctx->r12 = S32(SIGNED(ctx->r1) >> 1);
L_08000220:
    // 0x08000220: addiu       $t0, $t4, 0x1
    ctx->r8 = ADD32(ctx->r12, 0X1);
    // 0x08000224: multu       $t0, $t2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08000228: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800022C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000230: mflo        $t5
    ctx->r13 = lo;
    // 0x08000234: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x08000238: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x0800023C: jalr        $t9
    // 0x08000240: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000240: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    after_0:
    // 0x08000244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800024C: jr          $ra
    // 0x08000250: nop

    TRACE_RETURN()
    return;
    // 0x08000250: nop

;}
RECOMP_FUNC void func_0800101C_6AE3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800101C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x08001020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001024: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x08001028: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x0800102C: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x08001030: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001034: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08001038: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x0800103C: lwc1        $f6, 0x10($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X10);
    // 0x08001040: addiu       $t9, $t9, 0x6AAC
    ctx->r25 = ADD32(ctx->r25, 0X6AAC);
    // 0x08001044: sw          $a2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r6;
    // 0x08001048: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0800104C: jalr        $t9
    // 0x08001050: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001050: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x08001054: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x08001058: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0800105C: swc1        $f8, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f8.u32l;
    // 0x08001060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001064: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x08001068: jr          $ra
    // 0x0800106C: nop

    TRACE_RETURN()
    return;
    // 0x0800106C: nop

;}
RECOMP_FUNC void func_08000F2C_6AE2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000F30: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000F38: addiu       $t9, $t9, 0x4670
    ctx->r25 = ADD32(ctx->r25, 0X4670);
    // 0x08000F3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000F40: jalr        $t9
    // 0x08000F44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000F48: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08000F4C: bne         $v0, $zero, L_08000F6C
    if (ctx->r2 != 0) {
        // 0x08000F50: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08000F6C;
    }
    // 0x08000F50: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000F54: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F58: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08000F5C: jalr        $t9
    // 0x08000F60: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000F60: nop

    after_1:
    // 0x08000F64: b           L_08001010
    // 0x08000F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001010;
    // 0x08000F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000F6C:
    // 0x08000F6C: sw          $v1, 0xD0($a1)
    MEM_W(0XD0, ctx->r5) = ctx->r3;
    // 0x08000F70: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x08000F74: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x08000F78: addiu       $t8, $zero, 0xFA0
    ctx->r24 = ADD32(0, 0XFA0);
    // 0x08000F7C: addiu       $t0, $zero, 0xBB8
    ctx->r8 = ADD32(0, 0XBB8);
    // 0x08000F80: addiu       $t1, $zero, 0x60
    ctx->r9 = ADD32(0, 0X60);
    // 0x08000F84: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x08000F88: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x08000F8C: sw          $t7, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r15;
    // 0x08000F90: sw          $t8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r24;
    // 0x08000F94: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
    // 0x08000F98: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x08000F9C: sb          $zero, 0x24($v1)
    MEM_B(0X24, ctx->r3) = 0;
    // 0x08000FA0: sb          $zero, 0x25($v1)
    MEM_B(0X25, ctx->r3) = 0;
    // 0x08000FA4: sb          $t1, 0x26($v1)
    MEM_B(0X26, ctx->r3) = ctx->r9;
    // 0x08000FA8: sb          $t2, 0x27($v1)
    MEM_B(0X27, ctx->r3) = ctx->r10;
    // 0x08000FAC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(16, 0X1410) << 16);
    // 0x08000FB0: lwc1        $f4, 0x1410($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(16, 0X1410));
    // 0x08000FB4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(16, 0X1414) << 16);
    // 0x08000FB8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000FBC: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    // 0x08000FC0: lwc1        $f6, 0x1414($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(16, 0X1414));
    // 0x08000FC4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000FC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000FCC: swc1        $f6, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f6.u32l;
    // 0x08000FD0: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x08000FD4: lui         $t3, 0x800
    ctx->r11 = S32(RELOC_HI16(16, 0XDA0) << 16);
    // 0x08000FD8: lui         $t4, 0x800
    ctx->r12 = S32(RELOC_HI16(16, 0X254) << 16);
    // 0x08000FDC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000FE0: addiu       $t3, $t3, 0xDA0
    ctx->r11 = ADD32(ctx->r11, (int16_t)RELOC_LO16(16, 0XDA0));
    // 0x08000FE4: addiu       $t4, $t4, 0x254
    ctx->r12 = ADD32(ctx->r12, (int16_t)RELOC_LO16(16, 0X254));
    // 0x08000FE8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000FEC: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x08000FF0: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x08000FF4: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x08000FF8: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x08000FFC: sw          $t3, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r11;
    // 0x08001000: sw          $t4, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r12;
    // 0x08001004: jalr        $t9
    // 0x08001008: addiu       $a0, $a0, 0x4160
    ctx->r4 = ADD32(ctx->r4, 0X4160);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001008: addiu       $a0, $a0, 0x4160
    ctx->r4 = ADD32(ctx->r4, 0X4160);
    after_2:
    // 0x0800100C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001010:
    // 0x08001010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001014: jr          $ra
    // 0x08001018: nop

    TRACE_RETURN()
    return;
    // 0x08001018: nop

;}
RECOMP_FUNC void func_080007A8_6ADB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007A8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x080007AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080007B0: lhu         $a2, 0x8A($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X8A);
    // 0x080007B4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x080007B8: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x080007BC: bne         $a2, $zero, L_08000904
    if (ctx->r6 != 0) {
        // 0x080007C0: lui         $at, 0x43C8
        ctx->r1 = S32(0X43C8 << 16);
            goto L_08000904;
    }
    // 0x080007C0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x080007C4: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x080007C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080007CC: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
    // 0x080007D0: addiu       $t2, $v0, 0x2
    ctx->r10 = ADD32(ctx->r2, 0X2);
    // 0x080007D4: lw          $t6, 0x58($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X58);
    // 0x080007D8: bgez        $v0, L_080007E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x080007DC: sra         $t7, $v0, 1
        ctx->r15 = S32(SIGNED(ctx->r2) >> 1);
            goto L_080007E8;
    }
    // 0x080007DC: sra         $t7, $v0, 1
    ctx->r15 = S32(SIGNED(ctx->r2) >> 1);
    // 0x080007E0: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x080007E4: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_080007E8:
    // 0x080007E8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x080007EC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x080007F0: bgez        $t0, L_08000800
    if (SIGNED(ctx->r8) >= 0) {
        // 0x080007F4: sra         $t1, $t0, 1
        ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
            goto L_08000800;
    }
    // 0x080007F4: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x080007F8: addiu       $at, $t0, 0x1
    ctx->r1 = ADD32(ctx->r8, 0X1);
    // 0x080007FC: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_08000800:
    // 0x08000800: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08000804: mflo        $t3
    ctx->r11 = lo;
    // 0x08000808: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x0800080C: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x08000810: swc1        $f0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f0.u32l;
    // 0x08000814: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000818: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x0800081C: lw          $t7, 0x58($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X58);
    // 0x08000820: bgez        $v0, L_08000830
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08000824: sra         $t6, $v0, 1
        ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
            goto L_08000830;
    }
    // 0x08000824: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x08000828: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x0800082C: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_08000830:
    // 0x08000830: addiu       $t9, $v0, 0x2
    ctx->r25 = ADD32(ctx->r2, 0X2);
    // 0x08000834: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x08000838: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x0800083C: bgez        $t1, L_0800084C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x08000840: sra         $t2, $t1, 1
        ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
            goto L_0800084C;
    }
    // 0x08000840: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x08000844: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x08000848: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_0800084C:
    // 0x0800084C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000850: multu       $t3, $t9
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08000854: mflo        $t4
    ctx->r12 = lo;
    // 0x08000858: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x0800085C: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x08000860: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x08000864: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000868: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x0800086C: lw          $t7, 0x58($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X58);
    // 0x08000870: bgez        $v0, L_08000880
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08000874: sra         $t8, $v0, 1
        ctx->r24 = S32(SIGNED(ctx->r2) >> 1);
            goto L_08000880;
    }
    // 0x08000874: sra         $t8, $v0, 1
    ctx->r24 = S32(SIGNED(ctx->r2) >> 1);
    // 0x08000878: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x0800087C: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_08000880:
    // 0x08000880: addiu       $t4, $v0, 0x2
    ctx->r12 = ADD32(ctx->r2, 0X2);
    // 0x08000884: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x08000888: addu        $t2, $t7, $t1
    ctx->r10 = ADD32(ctx->r15, ctx->r9);
    // 0x0800088C: bgez        $t3, L_0800089C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x08000890: sra         $t9, $t3, 1
        ctx->r25 = S32(SIGNED(ctx->r11) >> 1);
            goto L_0800089C;
    }
    // 0x08000890: sra         $t9, $t3, 1
    ctx->r25 = S32(SIGNED(ctx->r11) >> 1);
    // 0x08000894: addiu       $at, $t3, 0x1
    ctx->r1 = ADD32(ctx->r11, 0X1);
    // 0x08000898: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_0800089C:
    // 0x0800089C: multu       $t9, $t4
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x080008A0: mflo        $t0
    ctx->r8 = lo;
    // 0x080008A4: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x080008A8: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x080008AC: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
    // 0x080008B0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x080008B4: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x080008B8: lw          $t8, 0x58($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X58);
    // 0x080008BC: bgez        $v0, L_080008CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x080008C0: sra         $t7, $v0, 1
        ctx->r15 = S32(SIGNED(ctx->r2) >> 1);
            goto L_080008CC;
    }
    // 0x080008C0: sra         $t7, $v0, 1
    ctx->r15 = S32(SIGNED(ctx->r2) >> 1);
    // 0x080008C4: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x080008C8: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_080008CC:
    // 0x080008CC: addiu       $t2, $v0, 0x2
    ctx->r10 = ADD32(ctx->r2, 0X2);
    // 0x080008D0: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x080008D4: addu        $t3, $t8, $t1
    ctx->r11 = ADD32(ctx->r24, ctx->r9);
    // 0x080008D8: bgez        $t9, L_080008E8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x080008DC: sra         $t4, $t9, 1
        ctx->r12 = S32(SIGNED(ctx->r25) >> 1);
            goto L_080008E8;
    }
    // 0x080008DC: sra         $t4, $t9, 1
    ctx->r12 = S32(SIGNED(ctx->r25) >> 1);
    // 0x080008E0: addiu       $at, $t9, 0x1
    ctx->r1 = ADD32(ctx->r25, 0X1);
    // 0x080008E4: sra         $t4, $at, 1
    ctx->r12 = S32(SIGNED(ctx->r1) >> 1);
L_080008E8:
    // 0x080008E8: addiu       $t0, $t4, 0x1
    ctx->r8 = ADD32(ctx->r12, 0X1);
    // 0x080008EC: multu       $t0, $t2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x080008F0: mflo        $t5
    ctx->r13 = lo;
    // 0x080008F4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x080008F8: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x080008FC: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x08000900: lhu         $a2, 0x8A($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X8A);
L_08000904:
    // 0x08000904: addiu       $t8, $a2, 0x1
    ctx->r24 = ADD32(ctx->r6, 0X1);
    // 0x08000908: andi        $t1, $t8, 0xFF
    ctx->r9 = ctx->r24 & 0XFF;
    // 0x0800090C: sh          $t1, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r9;
    // 0x08000910: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000914: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000918: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800091C: addiu       $t9, $t9, 0x6AAC
    ctx->r25 = ADD32(ctx->r25, 0X6AAC);
    // 0x08000920: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000924: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x08000928: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x0800092C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000930: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x08000934: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000938: jalr        $t9
    // 0x0800093C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800093C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x08000940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000944: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x08000948: jr          $ra
    // 0x0800094C: nop

    TRACE_RETURN()
    return;
    // 0x0800094C: nop

;}
RECOMP_FUNC void func_080002A0_6AD660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080002A4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080002A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080002AC: addiu       $t9, $t9, 0x4670
    ctx->r25 = ADD32(ctx->r25, 0X4670);
    // 0x080002B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080002B4: jalr        $t9
    // 0x080002B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080002B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x080002BC: bne         $v0, $zero, L_080002DC
    if (ctx->r2 != 0) {
        // 0x080002C0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_080002DC;
    }
    // 0x080002C0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x080002C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002C8: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x080002CC: jalr        $t9
    // 0x080002D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080002D0: nop

    after_1:
    // 0x080002D4: b           L_08000380
    // 0x080002D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000380;
    // 0x080002D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080002DC:
    // 0x080002DC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x080002E0: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(16, 0X1274) << 16);
    // 0x080002E4: addiu       $v0, $v0, 0x1274
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(16, 0X1274));
    // 0x080002E8: sw          $v1, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r3;
    // 0x080002EC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x080002F0: addiu       $a0, $zero, 0x7D0
    ctx->r4 = ADD32(0, 0X7D0);
    // 0x080002F4: addiu       $t0, $zero, 0x2F
    ctx->r8 = ADD32(0, 0X2F);
    // 0x080002F8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x080002FC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x08000300: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x08000304: sw          $a0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r4;
    // 0x08000308: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x0800030C: sw          $t8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r24;
    // 0x08000310: jal         0x08001228
    // 0x08000314: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_08001228_6AE5E8(rdram, ctx);
        goto after_2;
    // 0x08000314: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x08000318: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0800031C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(16, 0X13E4) << 16);
    // 0x08000320: lwc1        $f0, 0x13E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(16, 0X13E4));
    // 0x08000324: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x08000328: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0800032C: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x08000330: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    // 0x08000334: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x08000338: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x0800033C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000340: lw          $a1, 0x18($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X18);
    // 0x08000344: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(16, 0XD8) << 16);
    // 0x08000348: lui         $t3, 0x800
    ctx->r11 = S32(RELOC_HI16(16, 0X254) << 16);
    // 0x0800034C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000350: addiu       $t2, $t2, 0xD8
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(16, 0XD8));
    // 0x08000354: addiu       $t3, $t3, 0x254
    ctx->r11 = ADD32(ctx->r11, (int16_t)RELOC_LO16(16, 0X254));
    // 0x08000358: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800035C: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x08000360: swc1        $f2, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f2.u32l;
    // 0x08000364: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x08000368: swc1        $f2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f2.u32l;
    // 0x0800036C: addiu       $a0, $a0, 0x4160
    ctx->r4 = ADD32(ctx->r4, 0X4160);
    // 0x08000370: sw          $t2, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r10;
    // 0x08000374: jalr        $t9
    // 0x08000378: sw          $t3, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000378: sw          $t3, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r11;
    after_3:
    // 0x0800037C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000380:
    // 0x08000380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000384: jr          $ra
    // 0x08000388: nop

    TRACE_RETURN()
    return;
    // 0x08000388: nop

;}
RECOMP_FUNC void func_08001070_6AE430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001070: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001074: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001078: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800107C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001080: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x08001084: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x08001088: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x0800108C: swc1        $f0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f0.u32l;
    // 0x08001090: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x08001094: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x08001098: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0800109C: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x080010A0: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x080010A4: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x080010A8: addiu       $a2, $a2, -0x33D0
    ctx->r6 = ADD32(ctx->r6, -0X33D0);
    // 0x080010AC: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x080010B0: sw          $zero, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = 0;
    // 0x080010B4: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
    // 0x080010B8: sw          $zero, 0x70($a0)
    MEM_W(0X70, ctx->r4) = 0;
    // 0x080010BC: sb          $t6, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r14;
    // 0x080010C0: sh          $zero, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = 0;
    // 0x080010C4: sb          $a3, 0x76($a0)
    MEM_B(0X76, ctx->r4) = ctx->r7;
    // 0x080010C8: sh          $v1, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r3;
    // 0x080010CC: lbu         $t7, 0xD8($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0XD8);
    // 0x080010D0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x080010D4: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x080010D8: sb          $t7, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r15;
    // 0x080010DC: lbu         $t8, 0xD8($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XD8);
    // 0x080010E0: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x080010E4: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x080010E8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x080010EC: sb          $t9, 0xD8($a2)
    MEM_B(0XD8, ctx->r6) = ctx->r25;
    // 0x080010F0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x080010F4: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x080010F8: addiu       $t3, $zero, 0xA0
    ctx->r11 = ADD32(0, 0XA0);
    // 0x080010FC: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x08001100: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001104: sh          $v1, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r3;
    // 0x08001108: sh          $a3, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r7;
    // 0x0800110C: sh          $t0, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r8;
    // 0x08001110: sh          $zero, 0x52($a0)
    MEM_H(0X52, ctx->r4) = 0;
    // 0x08001114: sw          $t1, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r9;
    // 0x08001118: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x0800111C: sb          $v1, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r3;
    // 0x08001120: sh          $t2, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r10;
    // 0x08001124: sh          $t3, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r11;
    // 0x08001128: sh          $zero, 0x40($a0)
    MEM_H(0X40, ctx->r4) = 0;
    // 0x0800112C: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x08001130: sb          $zero, 0x44($a0)
    MEM_B(0X44, ctx->r4) = 0;
    // 0x08001134: sb          $t4, 0x98($a0)
    MEM_B(0X98, ctx->r4) = ctx->r12;
    // 0x08001138: sb          $v0, 0x99($a0)
    MEM_B(0X99, ctx->r4) = ctx->r2;
    // 0x0800113C: sb          $v0, 0x9A($a0)
    MEM_B(0X9A, ctx->r4) = ctx->r2;
    // 0x08001140: sb          $zero, 0x9B($a0)
    MEM_B(0X9B, ctx->r4) = 0;
    // 0x08001144: bgez        $t5, L_0800115C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x08001148: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_0800115C;
    }
    // 0x08001148: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0800114C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001150: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001154: nop

    // 0x08001158: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_0800115C:
    // 0x0800115C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001160: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001164: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001168: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x0800116C: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x08001170: addiu       $t9, $t9, -0x6D74
    ctx->r25 = ADD32(ctx->r25, -0X6D74);
    // 0x08001174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001178: swc1        $f16, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->f16.u32l;
    // 0x0800117C: lbu         $t6, 0x98($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X98);
    // 0x08001180: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x08001184: bgez        $t6, L_08001198
    if (SIGNED(ctx->r14) >= 0) {
        // 0x08001188: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_08001198;
    }
    // 0x08001188: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x0800118C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001190: nop

    // 0x08001194: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_08001198:
    // 0x08001198: swc1        $f4, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->f4.u32l;
    // 0x0800119C: jalr        $t9
    // 0x080011A0: sb          $v1, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080011A0: sb          $v1, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r3;
    after_0:
    // 0x080011A4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080011A8: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x080011AC: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080011B0: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x080011B4: jalr        $t9
    // 0x080011B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080011B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x080011BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080011C0: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x080011C4: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080011C8: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x080011CC: jalr        $t9
    // 0x080011D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080011D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x080011D4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080011D8: addiu       $t7, $zero, 0x221
    ctx->r15 = ADD32(0, 0X221);
    // 0x080011DC: addiu       $t8, $zero, 0xFB
    ctx->r24 = ADD32(0, 0XFB);
    // 0x080011E0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080011E4: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x080011E8: sh          $t8, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r24;
    // 0x080011EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080011F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080011F4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080011F8: jalr        $t9
    // 0x080011FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080011FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08001200: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001204: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001208: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(16, 0X101C) << 16);
    // 0x0800120C: jalr        $t9
    // 0x08001210: addiu       $a0, $a0, 0x101C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(16, 0X101C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001210: addiu       $a0, $a0, 0x101C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(16, 0X101C));
    after_4:
    // 0x08001214: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001218: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800121C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001220: jr          $ra
    // 0x08001224: nop

    TRACE_RETURN()
    return;
    // 0x08001224: nop

;}
RECOMP_FUNC void func_08001228_6AE5E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800122C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001230: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001234: addiu       $t9, $t9, 0x4840
    ctx->r25 = ADD32(ctx->r25, 0X4840);
    // 0x08001238: lui         $a0, 0xA01
    ctx->r4 = S32(0XA01 << 16);
    // 0x0800123C: addiu       $a0, $a0, -0x3680
    ctx->r4 = ADD32(ctx->r4, -0X3680);
    // 0x08001240: jalr        $t9
    // 0x08001244: addiu       $a1, $zero, 0x152
    ctx->r5 = ADD32(0, 0X152);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001244: addiu       $a1, $zero, 0x152
    ctx->r5 = ADD32(0, 0X152);
    after_0:
    // 0x08001248: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0800124C: bne         $v0, $at, L_0800125C
    if (ctx->r2 != ctx->r1) {
        // 0x08001250: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_0800125C;
    }
    // 0x08001250: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08001254: b           L_08001260
    // 0x08001258: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08001260;
    // 0x08001258: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_0800125C:
    // 0x0800125C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_08001260:
    // 0x08001260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001264: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001268: jr          $ra
    // 0x0800126C: nop

    TRACE_RETURN()
    return;
    // 0x0800126C: nop

;}
RECOMP_FUNC void func_08000000_6AD3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000004: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800000C: addiu       $t9, $t9, 0x4670
    ctx->r25 = ADD32(ctx->r25, 0X4670);
    // 0x08000010: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000014: jalr        $t9
    // 0x08000018: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000018: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800001C: bne         $v0, $zero, L_0800003C
    if (ctx->r2 != 0) {
        // 0x08000020: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_0800003C;
    }
    // 0x08000020: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000024: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000028: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x0800002C: jalr        $t9
    // 0x08000030: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000030: nop

    after_1:
    // 0x08000034: b           L_080000CC
    // 0x08000038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080000CC;
    // 0x08000038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800003C:
    // 0x0800003C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x08000040: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x08000044: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x08000048: sw          $v1, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r3;
    // 0x0800004C: addiu       $t7, $zero, 0x2E
    ctx->r15 = ADD32(0, 0X2E);
    // 0x08000050: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x08000054: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x08000058: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x0800005C: sw          $a0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r4;
    // 0x08000060: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x08000064: jal         0x08001228
    // 0x08000068: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_08001228_6AE5E8(rdram, ctx);
        goto after_2;
    // 0x08000068: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x0800006C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08000070: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(16, 0X13DC) << 16);
    // 0x08000074: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000078: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x0800007C: lwc1        $f4, 0x13DC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(16, 0X13DC));
    // 0x08000080: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(16, 0X13E0) << 16);
    // 0x08000084: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000088: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    // 0x0800008C: lwc1        $f6, 0x13E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(16, 0X13E0));
    // 0x08000090: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x08000094: sw          $zero, 0x20($v1)
    MEM_W(0X20, ctx->r3) = 0;
    // 0x08000098: swc1        $f6, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f6.u32l;
    // 0x0800009C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x080000A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080000A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080000A8: lw          $a1, 0x18($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X18);
    // 0x080000AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000B0: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x080000B4: addiu       $a0, $a0, 0x4160
    ctx->r4 = ADD32(ctx->r4, 0X4160);
    // 0x080000B8: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x080000BC: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x080000C0: jalr        $t9
    // 0x080000C4: swc1        $f0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000C4: swc1        $f0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f0.u32l;
    after_3:
    // 0x080000C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080000CC:
    // 0x080000CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080000D0: jr          $ra
    // 0x080000D4: nop

    TRACE_RETURN()
    return;
    // 0x080000D4: nop

;}
RECOMP_FUNC void func_080000CC_6AE8AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080000CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080000D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080000D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080000D8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080000DC: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x080000E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080000E8: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x080000EC: beq         $t7, $zero, L_08000160
    if (ctx->r15 == 0) {
        // 0x080000F0: addiu       $t9, $t9, 0x1F70
        ctx->r25 = ADD32(ctx->r25, 0X1F70);
            goto L_08000160;
    }
    // 0x080000F0: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080000F4: jalr        $t9
    // 0x080000F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080000F8: nop

    after_0:
    // 0x080000FC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000100: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000104: jalr        $t9
    // 0x08000108: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000108: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    after_1:
    // 0x0800010C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000110: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800011C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000120: jalr        $t9
    // 0x08000124: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000124: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000128: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800012C: addiu       $t9, $t9, -0x5DD4
    ctx->r25 = ADD32(ctx->r25, -0X5DD4);
    // 0x08000130: jalr        $t9
    // 0x08000134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08000138: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800013C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000140: jalr        $t9
    // 0x08000144: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000144: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    after_4:
    // 0x08000148: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800014C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000150: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(17, 0X174) << 16);
    // 0x08000154: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x08000158: jalr        $t9
    // 0x0800015C: addiu       $a0, $a0, 0x174
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X174));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800015C: addiu       $a0, $a0, 0x174
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X174));
    after_5:
L_08000160:
    // 0x08000160: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000164: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800016C: jr          $ra
    // 0x08000170: nop

    TRACE_RETURN()
    return;
    // 0x08000170: nop

;}
RECOMP_FUNC void func_08000434_6AEC14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000434: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800043C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000440: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000444: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08000448: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x0800044C: beql        $t7, $zero, L_080004A0
    if (ctx->r15 == 0) {
        // 0x08000450: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080004A0;
    }
    goto skip_0;
    // 0x08000450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000454: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08000458: lui         $at, 0xF7FF
    ctx->r1 = S32(0XF7FF << 16);
    // 0x0800045C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000460: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08000464: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x08000468: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800046C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000470: jalr        $t9
    // 0x08000474: addiu       $a0, $zero, 0x26C
    ctx->r4 = ADD32(0, 0X26C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000474: addiu       $a0, $zero, 0x26C
    ctx->r4 = ADD32(0, 0X26C);
    after_0:
    // 0x08000478: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x0800047C: addiu       $t9, $t9, -0x32B8
    ctx->r25 = ADD32(ctx->r25, -0X32B8);
    // 0x08000480: jalr        $t9
    // 0x08000484: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000484: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_1:
    // 0x08000488: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800048C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000490: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(17, 0X4AC) << 16);
    // 0x08000494: jalr        $t9
    // 0x08000498: addiu       $a0, $a0, 0x4AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X4AC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000498: addiu       $a0, $a0, 0x4AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X4AC));
    after_2:
    // 0x0800049C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080004A0:
    // 0x080004A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080004A4: jr          $ra
    // 0x080004A8: nop

    TRACE_RETURN()
    return;
    // 0x080004A8: nop

;}
RECOMP_FUNC void func_08000740_6AEF20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000740: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000744: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000748: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800074C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000750: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000754: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000758: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800075C: jalr        $t9
    // 0x08000760: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000760: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    after_0:
    // 0x08000764: beq         $v0, $zero, L_0800077C
    if (ctx->r2 == 0) {
        // 0x08000768: lui         $t8, 0x40
        ctx->r24 = S32(0X40 << 16);
            goto L_0800077C;
    }
    // 0x08000768: lui         $t8, 0x40
    ctx->r24 = S32(0X40 << 16);
    // 0x0800076C: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08000770: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08000774: b           L_08000828
    // 0x08000778: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
        goto L_08000828;
    // 0x08000778: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
L_0800077C:
    // 0x0800077C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000780: ori         $t8, $t8, 0x6E0
    ctx->r24 = ctx->r24 | 0X6E0;
    // 0x08000784: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x08000788: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x0800078C: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08000790: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x08000794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000798: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x0800079C: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x080007A0: jalr        $t9
    // 0x080007A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080007A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080007A8: lhu         $t1, 0x5E($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X5E);
    // 0x080007AC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080007B0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x080007B4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080007B8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x080007BC: sh          $t2, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r10;
    // 0x080007C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080007C4: jalr        $t9
    // 0x080007C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080007C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x080007CC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x080007D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007D4: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080007D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080007DC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x080007E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080007E4: jalr        $t9
    // 0x080007E8: sh          $t3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080007E8: sh          $t3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r11;
    after_3:
    // 0x080007EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007F0: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x080007F4: jalr        $t9
    // 0x080007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x080007FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000800: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08000804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000808: jalr        $t9
    // 0x0800080C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800080C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x08000810: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000814: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000818: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(17, 0X83C) << 16);
    // 0x0800081C: sw          $v0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r2;
    // 0x08000820: jalr        $t9
    // 0x08000824: addiu       $a0, $a0, 0x83C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X83C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000824: addiu       $a0, $a0, 0x83C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X83C));
    after_6:
L_08000828:
    // 0x08000828: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800082C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000830: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000834: jr          $ra
    // 0x08000838: nop

    TRACE_RETURN()
    return;
    // 0x08000838: nop

;}
RECOMP_FUNC void func_08000204_6AE9E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000204: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000208: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800020C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000210: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000214: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000218: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800021C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000220: jalr        $t9
    // 0x08000224: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000224: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    after_0:
    // 0x08000228: beq         $v0, $zero, L_08000240
    if (ctx->r2 == 0) {
        // 0x0800022C: lui         $t8, 0x40
        ctx->r24 = S32(0X40 << 16);
            goto L_08000240;
    }
    // 0x0800022C: lui         $t8, 0x40
    ctx->r24 = S32(0X40 << 16);
    // 0x08000230: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08000234: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08000238: b           L_080002BC
    // 0x0800023C: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
        goto L_080002BC;
    // 0x0800023C: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
L_08000240:
    // 0x08000240: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000244: ori         $t8, $t8, 0x6E0
    ctx->r24 = ctx->r24 | 0X6E0;
    // 0x08000248: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x0800024C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000250: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08000254: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x08000258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800025C: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x08000260: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x08000264: jalr        $t9
    // 0x08000268: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000268: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x0800026C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000270: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000278: jalr        $t9
    // 0x0800027C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800027C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x08000280: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000284: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800028C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x08000290: jalr        $t9
    // 0x08000294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08000298: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800029C: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x080002A0: jalr        $t9
    // 0x080002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x080002A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002B0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(17, 0X2D0) << 16);
    // 0x080002B4: jalr        $t9
    // 0x080002B8: addiu       $a0, $a0, 0x2D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X2D0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080002B8: addiu       $a0, $a0, 0x2D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X2D0));
    after_5:
L_080002BC:
    // 0x080002BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080002C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080002C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080002C8: jr          $ra
    // 0x080002CC: nop

    TRACE_RETURN()
    return;
    // 0x080002CC: nop

;}
RECOMP_FUNC void func_080006E0_6AEEC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080006E4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080006E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080006EC: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080006F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080006F4: jalr        $t9
    // 0x080006F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080006F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080006FC: bne         $v0, $zero, L_08000730
    if (ctx->r2 != 0) {
        // 0x08000700: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08000730;
    }
    // 0x08000700: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000704: addiu       $t9, $t9, -0x47DC
    ctx->r25 = ADD32(ctx->r25, -0X47DC);
    // 0x08000708: jalr        $t9
    // 0x0800070C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800070C: nop

    after_1:
    // 0x08000710: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000714: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08000718: jalr        $t9
    // 0x0800071C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800071C: nop

    after_2:
    // 0x08000720: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000724: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000728: jalr        $t9
    // 0x0800072C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800072C: nop

    after_3:
L_08000730:
    // 0x08000730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000738: jr          $ra
    // 0x0800073C: nop

    TRACE_RETURN()
    return;
    // 0x0800073C: nop

;}
RECOMP_FUNC void func_0800083C_6AF01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800083C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000840: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000844: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000848: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800084C: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08000850: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000854: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000858: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x0800085C: beq         $t7, $zero, L_080008F4
    if (ctx->r15 == 0) {
        // 0x08000860: addiu       $t9, $t9, 0x1F70
        ctx->r25 = ADD32(ctx->r25, 0X1F70);
            goto L_080008F4;
    }
    // 0x08000860: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08000864: jalr        $t9
    // 0x08000868: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000868: nop

    after_0:
    // 0x0800086C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000870: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08000874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000878: jalr        $t9
    // 0x0800087C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800087C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08000880: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000884: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000888: jalr        $t9
    // 0x0800088C: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800088C: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    after_2:
    // 0x08000890: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000894: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800089C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080008A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080008A4: jalr        $t9
    // 0x080008A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080008A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x080008AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008B0: addiu       $t9, $t9, -0x5DD4
    ctx->r25 = ADD32(ctx->r25, -0X5DD4);
    // 0x080008B4: jalr        $t9
    // 0x080008B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080008B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x080008BC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080008C0: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080008C4: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x080008C8: jalr        $t9
    // 0x080008CC: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080008CC: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    after_5:
    // 0x080008D0: lw          $v0, 0xE4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE4);
    // 0x080008D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080008D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080008DC: beq         $v0, $zero, L_080008EC
    if (ctx->r2 == 0) {
        // 0x080008E0: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(17, 0X6E0) << 16);
            goto L_080008EC;
    }
    // 0x080008E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(17, 0X6E0) << 16);
    // 0x080008E4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x080008E8: sb          $t8, 0xD0($v0)
    MEM_B(0XD0, ctx->r2) = ctx->r24;
L_080008EC:
    // 0x080008EC: jalr        $t9
    // 0x080008F0: addiu       $a0, $a0, 0x6E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X6E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080008F0: addiu       $a0, $a0, 0x6E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X6E0));
    after_6:
L_080008F4:
    // 0x080008F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080008F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080008FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000900: jr          $ra
    // 0x08000904: nop

    TRACE_RETURN()
    return;
    // 0x08000904: nop

;}
RECOMP_FUNC void func_08000378_6AEB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000378: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800037C: lui         $t6, 0x40
    ctx->r14 = S32(0X40 << 16);
    // 0x08000380: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000384: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000388: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800038C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000390: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x08000394: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000398: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800039C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080003A0: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x080003A4: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x080003A8: jalr        $t9
    // 0x080003AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080003B0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080003B4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080003BC: jalr        $t9
    // 0x080003C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x080003C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003C8: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080003CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080003D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x080003D4: jalr        $t9
    // 0x080003D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080003D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x080003DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003E0: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x080003E4: jalr        $t9
    // 0x080003E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080003E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x080003EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003F0: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x080003F4: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x080003F8: sb          $t7, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r15;
    // 0x080003FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000400: jalr        $t9
    // 0x08000404: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000404: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x08000408: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800040C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000410: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(17, 0X434) << 16);
    // 0x08000414: sw          $v0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r2;
    // 0x08000418: jalr        $t9
    // 0x0800041C: addiu       $a0, $a0, 0x434
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X434));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800041C: addiu       $a0, $a0, 0x434
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X434));
    after_5:
    // 0x08000420: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000424: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000428: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800042C: jr          $ra
    // 0x08000430: nop

    TRACE_RETURN()
    return;
    // 0x08000430: nop

;}
