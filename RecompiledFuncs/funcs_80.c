#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801D49D0_643820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D49D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D49D4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D49D8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801D49DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D49E0: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D49E4: addiu       $t6, $t6, 0x1154
    ctx->r14 = ADD32(ctx->r14, 0X1154);
    // 0x801D49E8: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801D49EC: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801D49F0: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801D49F4: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801D49F8: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x801D49FC: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801D4A00: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801D4A04: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801D4A08: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x801D4A0C: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801D4A10: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    // 0x801D4A14: addiu       $t0, $zero, 0xFA0
    ctx->r8 = ADD32(0, 0XFA0);
    // 0x801D4A18: addiu       $t1, $zero, 0x320
    ctx->r9 = ADD32(0, 0X320);
    // 0x801D4A1C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x801D4A20: sw          $t0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r8;
    // 0x801D4A24: sw          $t1, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r9;
    // 0x801D4A28: sh          $t2, 0xA8($a0)
    MEM_H(0XA8, ctx->r4) = ctx->r10;
    // 0x801D4A2C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D4A30: lui         $a2, 0x420C
    ctx->r6 = S32(0X420C << 16);
    // 0x801D4A34: lui         $a3, 0xC234
    ctx->r7 = S32(0XC234 << 16);
    // 0x801D4A38: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D4A3C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D4A40: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D4A44: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D4A48: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D4A4C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D4A50: jal         0x801E8378
    // 0x801D4A54: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801D4A54: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801D4A58: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D4A5C: jal         0x800352EC
    // 0x801D4A60: addiu       $a0, $a0, 0x4A78
    ctx->r4 = ADD32(ctx->r4, 0X4A78);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801D4A60: addiu       $a0, $a0, 0x4A78
    ctx->r4 = ADD32(ctx->r4, 0X4A78);
    after_1:
    // 0x801D4A64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D4A68: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801D4A6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D4A70: jr          $ra
    // 0x801D4A74: nop

    TRACE_RETURN()
    return;
    // 0x801D4A74: nop

;}
RECOMP_FUNC void func_801DF630_64E480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF630: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801DF634: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801DF638: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x801DF63C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x801DF640: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801DF644: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801DF648: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801DF64C: lui         $s2, 0x801F
    ctx->r18 = S32(0X801F << 16);
    // 0x801DF650: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DF654: beq         $s0, $zero, L_801DF6B0
    if (ctx->r16 == 0) {
        // 0x801DF658: addiu       $s2, $s2, -0x2160
        ctx->r18 = ADD32(ctx->r18, -0X2160);
            goto L_801DF6B0;
    }
    // 0x801DF658: addiu       $s2, $s2, -0x2160
    ctx->r18 = ADD32(ctx->r18, -0X2160);
    // 0x801DF65C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
L_801DF660:
    // 0x801DF660: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801DF664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF668: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801DF66C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DF670: jal         0x801CD834
    // 0x801DF674: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801CD834_63C684(rdram, ctx);
        goto after_0;
    // 0x801DF674: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x801DF678: beq         $v0, $zero, L_801DF6A0
    if (ctx->r2 == 0) {
        // 0x801DF67C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801DF6A0;
    }
    // 0x801DF67C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DF680: jal         0x801CDFE4
    // 0x801DF684: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CDFE4_63CE34(rdram, ctx);
        goto after_1;
    // 0x801DF684: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x801DF688: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DF68C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801DF690: jal         0x80036158
    // 0x801DF694: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80036158_36D58(rdram, ctx);
        goto after_2;
    // 0x801DF694: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801DF698: b           L_801DF6A4
    // 0x801DF69C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_801DF6A4;
    // 0x801DF69C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_801DF6A0:
    // 0x801DF6A0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801DF6A4:
    // 0x801DF6A4: bnel        $s0, $zero, L_801DF660
    if (ctx->r16 != 0) {
        // 0x801DF6A8: addiu       $t6, $zero, 0x8
        ctx->r14 = ADD32(0, 0X8);
            goto L_801DF660;
    }
    goto skip_0;
    // 0x801DF6A8: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    skip_0:
    // 0x801DF6AC: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
L_801DF6B0:
    // 0x801DF6B0: lbu         $t7, 0x6A($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X6A);
    // 0x801DF6B4: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801DF6B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DF6BC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801DF6C0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801DF6C4: lw          $t9, -0x2118($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2118);
    // 0x801DF6C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801DF6CC: jalr        $t9
    // 0x801DF6D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x801DF6D0: nop

    after_3:
    // 0x801DF6D4: lw          $t0, 0x18($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X18);
    // 0x801DF6D8: bnel        $t0, $zero, L_801DF6FC
    if (ctx->r8 != 0) {
        // 0x801DF6DC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801DF6FC;
    }
    goto skip_1;
    // 0x801DF6DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x801DF6E0: lb          $t1, 0x78($s1)
    ctx->r9 = MEM_B(ctx->r17, 0X78);
    // 0x801DF6E4: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x801DF6E8: bnel        $t2, $zero, L_801DF6FC
    if (ctx->r10 != 0) {
        // 0x801DF6EC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801DF6FC;
    }
    goto skip_2;
    // 0x801DF6EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x801DF6F0: jal         0x80034ED4
    // 0x801DF6F4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x801DF6F4: nop

    after_4:
    // 0x801DF6F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801DF6FC:
    // 0x801DF6FC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801DF700: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x801DF704: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x801DF708: jr          $ra
    // 0x801DF70C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801DF70C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801CB460_63A2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB460: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CB464: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CB468: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB46C: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801CB470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB474: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801CB478: lbu         $t7, -0x5222($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X5222);
    // 0x801CB47C: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801CB480: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801CB484: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801CB488: lw          $t9, -0x7770($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7770);
    // 0x801CB48C: jalr        $t9
    // 0x801CB490: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801CB490: nop

    after_0:
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
RECOMP_FUNC void func_801E8824_657674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8824: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E8828: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801E882C: lhu         $t7, 0xEA($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XEA);
    // 0x801E8830: addu        $v1, $t7, $a1
    ctx->r3 = ADD32(ctx->r15, ctx->r5);
    // 0x801E8834: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x801E8838: slti        $at, $t8, 0x2710
    ctx->r1 = SIGNED(ctx->r24) < 0X2710 ? 1 : 0;
    // 0x801E883C: bne         $at, $zero, L_801E8848
    if (ctx->r1 != 0) {
        // 0x801E8840: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_801E8848;
    }
    // 0x801E8840: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x801E8844: addiu       $v1, $zero, 0x270F
    ctx->r3 = ADD32(0, 0X270F);
L_801E8848:
    // 0x801E8848: jr          $ra
    // 0x801E884C: sh          $v1, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x801E884C: sh          $v1, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_801D55E0_644430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D55E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D55E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D55E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D55EC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801D55F0: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D55F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D55F8: bgezl       $t6, L_801D5620
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D55FC: lw          $t7, 0xA0($s0)
        ctx->r15 = MEM_W(ctx->r16, 0XA0);
            goto L_801D5620;
    }
    goto skip_0;
    // 0x801D55FC: lw          $t7, 0xA0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XA0);
    skip_0:
    // 0x801D5600: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D5604: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D5608: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D560C: jal         0x800352EC
    // 0x801D5610: addiu       $a0, $a0, 0x5820
    ctx->r4 = ADD32(ctx->r4, 0X5820);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D5610: addiu       $a0, $a0, 0x5820
    ctx->r4 = ADD32(ctx->r4, 0X5820);
    after_0:
    // 0x801D5614: b           L_801D56C4
    // 0x801D5618: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801D56C4;
    // 0x801D5618: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D561C: lw          $t7, 0xA0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XA0);
L_801D5620:
    // 0x801D5620: lw          $t8, 0xA4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XA4);
    // 0x801D5624: lh          $v0, 0xAC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XAC);
    // 0x801D5628: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x801D562C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x801D5630: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801D5634: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D5638: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x801D563C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x801D5640: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x801D5644: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D5648: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x801D564C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x801D5650: jal         0x8000EE50
    // 0x801D5654: nop

    func_8000EE50_FA50(rdram, ctx);
        goto after_1;
    // 0x801D5654: nop

    after_1:
    // 0x801D5658: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x801D565C: lbu         $t0, 0x9C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X9C);
    // 0x801D5660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D5664: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x801D5668: andi        $t9, $v0, 0x3FF
    ctx->r25 = ctx->r2 & 0X3FF;
    // 0x801D566C: sh          $t9, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r25;
    // 0x801D5670: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D5674: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x801D5678: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x801D567C: lw          $t9, -0x74E0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X74E0);
    // 0x801D5680: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801D5684: jalr        $t9
    // 0x801D5688: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x801D5688: nop

    after_2:
    // 0x801D568C: jal         0x801CD504
    // 0x801D5690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD504_63C354(rdram, ctx);
        goto after_3;
    // 0x801D5690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801D5694: beq         $v0, $zero, L_801D56AC
    if (ctx->r2 == 0) {
        // 0x801D5698: nop
    
            goto L_801D56AC;
    }
    // 0x801D5698: nop

    // 0x801D569C: jal         0x801D2B90
    // 0x801D56A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_4;
    // 0x801D56A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801D56A4: b           L_801D56C4
    // 0x801D56A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801D56C4;
    // 0x801D56A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D56AC:
    // 0x801D56AC: jal         0x801CD634
    // 0x801D56B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_5;
    // 0x801D56B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801D56B4: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D56B8: jal         0x801CD780
    // 0x801D56BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_6;
    // 0x801D56BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x801D56C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D56C4:
    // 0x801D56C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D56C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801D56CC: jr          $ra
    // 0x801D56D0: nop

    TRACE_RETURN()
    return;
    // 0x801D56D0: nop

;}
RECOMP_FUNC void func_801D09AC_63F7FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D09AC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D09B0: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    // 0x801D09B4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D09B8: ldc1        $f6, -0x10D8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X10D8);
    // 0x801D09BC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D09C0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D09C4: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D09C8: c.le.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d <= ctx->f6.d;
    // 0x801D09CC: nop

    // 0x801D09D0: bc1f        L_801D09F0
    if (!c1cs) {
        // 0x801D09D4: nop
    
            goto L_801D09F0;
    }
    // 0x801D09D4: nop

    // 0x801D09D8: ldc1        $f8, -0x10D0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X10D0);
    // 0x801D09DC: add.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d + ctx->f8.d;
    // 0x801D09E0: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D09E4: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801D09E8: nop

    // 0x801D09EC: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
L_801D09F0:
    // 0x801D09F0: jr          $ra
    // 0x801D09F4: nop

    TRACE_RETURN()
    return;
    // 0x801D09F4: nop

;}
RECOMP_FUNC void func_801D5E5C_644CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5E5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D5E60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D5E64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D5E68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D5E6C: lbu         $t6, 0xA0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XA0);
    // 0x801D5E70: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D5E74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801D5E78: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x801D5E7C: lw          $t9, -0x74A0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X74A0);
    // 0x801D5E80: jalr        $t9
    // 0x801D5E84: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801D5E84: nop

    after_0:
    // 0x801D5E88: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D5E8C: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D5E90: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801D5E94: lbu         $t8, 0xA1($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XA1);
    // 0x801D5E98: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x801D5E9C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x801D5EA0: lw          $t9, -0x7494($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7494);
    // 0x801D5EA4: jalr        $t9
    // 0x801D5EA8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801D5EA8: nop

    after_1:
    // 0x801D5EAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D5EB0: addiu       $t4, $zero, 0x30
    ctx->r12 = ADD32(0, 0X30);
    // 0x801D5EB4: lb          $t1, 0x74($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X74);
    // 0x801D5EB8: bltzl       $t1, L_801D5ED0
    if (SIGNED(ctx->r9) < 0) {
        // 0x801D5EBC: sb          $t4, 0x74($a0)
        MEM_B(0X74, ctx->r4) = ctx->r12;
            goto L_801D5ED0;
    }
    goto skip_0;
    // 0x801D5EBC: sb          $t4, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r12;
    skip_0:
    // 0x801D5EC0: lb          $t2, 0x9F($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X9F);
    // 0x801D5EC4: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x801D5EC8: sb          $t3, 0x9F($a0)
    MEM_B(0X9F, ctx->r4) = ctx->r11;
    // 0x801D5ECC: sb          $t4, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r12;
L_801D5ED0:
    // 0x801D5ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D5ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D5ED8: jr          $ra
    // 0x801D5EDC: nop

    TRACE_RETURN()
    return;
    // 0x801D5EDC: nop

;}
RECOMP_FUNC void func_801D8CA0_647AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8CA0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D8CA4: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D8CA8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D8CAC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801D8CB0: addiu       $t6, $t6, 0x360
    ctx->r14 = ADD32(ctx->r14, 0X360);
    // 0x801D8CB4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D8CB8: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801D8CBC: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801D8CC0: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801D8CC4: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801D8CC8: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801D8CCC: lbu         $t9, 0x9E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X9E);
    // 0x801D8CD0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D8CD4: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x801D8CD8: beq         $t9, $zero, L_801D8D30
    if (ctx->r25 == 0) {
        // 0x801D8CDC: lui         $a2, 0x41C8
        ctx->r6 = S32(0X41C8 << 16);
            goto L_801D8D30;
    }
    // 0x801D8CDC: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x801D8CE0: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x801D8CE4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D8CE8: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801D8CEC: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    // 0x801D8CF0: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801D8CF4: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801D8CF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D8CFC: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x801D8D00: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D8D04: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x801D8D08: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D8D0C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D8D10: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D8D14: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D8D18: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D8D1C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D8D20: jal         0x801E8378
    // 0x801D8D24: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801D8D24: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801D8D28: b           L_801D8D70
    // 0x801D8D2C: nop

        goto L_801D8D70;
    // 0x801D8D2C: nop

L_801D8D30:
    // 0x801D8D30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D8D34: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801D8D38: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x801D8D3C: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801D8D40: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801D8D44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D8D48: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x801D8D4C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x801D8D50: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D8D54: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D8D58: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D8D5C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D8D60: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D8D64: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D8D68: jal         0x801E8378
    // 0x801D8D6C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_1;
    // 0x801D8D6C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
L_801D8D70:
    // 0x801D8D70: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D8D74: jal         0x800352EC
    // 0x801D8D78: addiu       $a0, $a0, -0x7270
    ctx->r4 = ADD32(ctx->r4, -0X7270);
    func_800352EC_35EEC(rdram, ctx);
        goto after_2;
    // 0x801D8D78: addiu       $a0, $a0, -0x7270
    ctx->r4 = ADD32(ctx->r4, -0X7270);
    after_2:
    // 0x801D8D7C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D8D80: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801D8D84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D8D88: jr          $ra
    // 0x801D8D8C: nop

    TRACE_RETURN()
    return;
    // 0x801D8D8C: nop

;}
RECOMP_FUNC void func_801D2980_6417D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2980: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x801D2984: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x801D2988: sw          $s5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r21;
    // 0x801D298C: sw          $s4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r20;
    // 0x801D2990: sw          $s3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r19;
    // 0x801D2994: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    // 0x801D2998: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x801D299C: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x801D29A0: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x801D29A4: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x801D29A8: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x801D29AC: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x801D29B0: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x801D29B4: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x801D29B8: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x801D29BC: lw          $s2, 0xEC($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XEC);
    // 0x801D29C0: lw          $s1, 0x5C($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X5C);
    // 0x801D29C4: lhu         $s5, 0x60($a0)
    ctx->r21 = MEM_HU(ctx->r4, 0X60);
    // 0x801D29C8: lbu         $s3, 0x312($s2)
    ctx->r19 = MEM_BU(ctx->r18, 0X312);
    // 0x801D29CC: addiu       $v1, $s2, 0x110
    ctx->r3 = ADD32(ctx->r18, 0X110);
    // 0x801D29D0: beq         $s3, $zero, L_801D29FC
    if (ctx->r19 == 0) {
        // 0x801D29D4: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_801D29FC;
    }
    // 0x801D29D4: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_801D29D8:
    // 0x801D29D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x801D29DC: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x801D29E0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801D29E4: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x801D29E8: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x801D29EC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x801D29F0: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x801D29F4: bne         $t7, $zero, L_801D29D8
    if (ctx->r15 != 0) {
        // 0x801D29F8: swc1        $f4, 0x68($s0)
        MEM_W(0X68, ctx->r16) = ctx->f4.u32l;
            goto L_801D29D8;
    }
    // 0x801D29F8: swc1        $f4, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f4.u32l;
L_801D29FC:
    // 0x801D29FC: lw          $t0, 0x31C($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X31C);
    // 0x801D2A00: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x801D2A04: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D2A08: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x801D2A0C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D2A10: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D2A14: bltz        $v0, L_801D2B4C
    if (SIGNED(ctx->r2) < 0) {
        // 0x801D2A18: div.s       $f28, $f8, $f10
        CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
            goto L_801D2B4C;
    }
    // 0x801D2A18: div.s       $f28, $f8, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801D2A1C: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801D2A20: lui         $s4, 0x801F
    ctx->r20 = S32(0X801F << 16);
    // 0x801D2A24: addiu       $s4, $s4, -0x7440
    ctx->r20 = ADD32(ctx->r20, -0X7440);
    // 0x801D2A28: c.le.s      $f16, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f16.fl <= ctx->f28.fl;
    // 0x801D2A2C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D2A30: bc1fl       L_801D2B50
    if (!c1cs) {
        // 0x801D2A34: lw          $t0, 0x80($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X80);
            goto L_801D2B50;
    }
    goto skip_0;
    // 0x801D2A34: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    skip_0:
    // 0x801D2A38: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801D2A3C: lwc1        $f26, -0xFEC($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0XFEC);
    // 0x801D2A40: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
L_801D2A44:
    // 0x801D2A44: addu        $t2, $s4, $t1
    ctx->r10 = ADD32(ctx->r20, ctx->r9);
    // 0x801D2A48: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x801D2A4C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801D2A50: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D2A54: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x801D2A58: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x801D2A5C: swc1        $f26, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f26.u32l;
    // 0x801D2A60: swc1        $f26, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f26.u32l;
    // 0x801D2A64: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D2A68: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D2A6C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D2A70: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801D2A74: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x801D2A78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D2A7C: jal         0x80035854
    // 0x801D2A80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801D2A80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801D2A84: beq         $v0, $zero, L_801D2B28
    if (ctx->r2 == 0) {
        // 0x801D2A88: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801D2B28;
    }
    // 0x801D2A88: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D2A8C: sll         $t3, $s3, 2
    ctx->r11 = S32(ctx->r19 << 2);
    // 0x801D2A90: addu        $t4, $s2, $t3
    ctx->r12 = ADD32(ctx->r18, ctx->r11);
    // 0x801D2A94: sw          $v0, 0x110($t4)
    MEM_W(0X110, ctx->r12) = ctx->r2;
    // 0x801D2A98: lb          $t6, 0x1($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X1);
    // 0x801D2A9C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x801D2AA0: andi        $t5, $s3, 0xFF
    ctx->r13 = ctx->r19 & 0XFF;
    // 0x801D2AA4: sb          $t6, 0x9E($v0)
    MEM_B(0X9E, ctx->r2) = ctx->r14;
    // 0x801D2AA8: lwc1        $f18, 0x4($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D2AAC: or          $s3, $t5, $zero
    ctx->r19 = ctx->r13 | 0;
    // 0x801D2AB0: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x801D2AB4: swc1        $f18, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f18.u32l;
    // 0x801D2AB8: lwc1        $f24, 0xC($s1)
    ctx->f24.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801D2ABC: lwc1        $f22, 0x8($s1)
    ctx->f22.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D2AC0: jal         0x801CBC94
    // 0x801D2AC4: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_1;
    // 0x801D2AC4: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_1:
    // 0x801D2AC8: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x801D2ACC: swc1        $f24, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f24.u32l;
    // 0x801D2AD0: sb          $zero, 0x9F($s0)
    MEM_B(0X9F, ctx->r16) = 0;
    // 0x801D2AD4: sb          $zero, 0x9C($s0)
    MEM_B(0X9C, ctx->r16) = 0;
    // 0x801D2AD8: swc1        $f22, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f22.u32l;
    // 0x801D2ADC: sb          $zero, 0x9D($s0)
    MEM_B(0X9D, ctx->r16) = 0;
    // 0x801D2AE0: sw          $s2, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->r18;
    // 0x801D2AE4: jal         0x801CD634
    // 0x801D2AE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_2;
    // 0x801D2AE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801D2AEC: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x801D2AF0: lh          $t7, 0x310($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X310);
    // 0x801D2AF4: sh          $t7, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r15;
    // 0x801D2AF8: lh          $t8, 0x310($s2)
    ctx->r24 = MEM_H(ctx->r18, 0X310);
    // 0x801D2AFC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801D2B00: sh          $t9, 0x310($s2)
    MEM_H(0X310, ctx->r18) = ctx->r25;
    // 0x801D2B04: swc1        $f20, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f20.u32l;
    // 0x801D2B08: swc1        $f20, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f20.u32l;
    // 0x801D2B0C: swc1        $f20, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f20.u32l;
    // 0x801D2B10: swc1        $f20, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f20.u32l;
    // 0x801D2B14: swc1        $f20, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f20.u32l;
    // 0x801D2B18: swc1        $f20, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f20.u32l;
    // 0x801D2B1C: swc1        $f20, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f20.u32l;
    // 0x801D2B20: swc1        $f20, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f20.u32l;
    // 0x801D2B24: swc1        $f20, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f20.u32l;
L_801D2B28:
    // 0x801D2B28: lb          $v0, 0x10($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X10);
    // 0x801D2B2C: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x801D2B30: bltzl       $v0, L_801D2B50
    if (SIGNED(ctx->r2) < 0) {
        // 0x801D2B34: lw          $t0, 0x80($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X80);
            goto L_801D2B50;
    }
    goto skip_1;
    // 0x801D2B34: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    skip_1:
    // 0x801D2B38: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801D2B3C: c.le.s      $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f4.fl <= ctx->f28.fl;
    // 0x801D2B40: nop

    // 0x801D2B44: bc1tl       L_801D2A44
    if (c1cs) {
        // 0x801D2B48: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_801D2A44;
    }
    goto skip_2;
    // 0x801D2B48: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    skip_2:
L_801D2B4C:
    // 0x801D2B4C: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
L_801D2B50:
    // 0x801D2B50: sw          $s1, 0x5C($t0)
    MEM_W(0X5C, ctx->r8) = ctx->r17;
    // 0x801D2B54: sb          $s3, 0x312($s2)
    MEM_B(0X312, ctx->r18) = ctx->r19;
    // 0x801D2B58: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x801D2B5C: lw          $s5, 0x78($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X78);
    // 0x801D2B60: lw          $s4, 0x74($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X74);
    // 0x801D2B64: lw          $s3, 0x70($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X70);
    // 0x801D2B68: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x801D2B6C: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x801D2B70: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x801D2B74: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x801D2B78: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x801D2B7C: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x801D2B80: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x801D2B84: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x801D2B88: jr          $ra
    // 0x801D2B8C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x801D2B8C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_801D3EC0_642D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3EC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D3EC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D3EC8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D3ECC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801D3ED0: lbu         $v0, 0x9C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9C);
    // 0x801D3ED4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D3ED8: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D3EDC: beq         $v0, $zero, L_801D3F0C
    if (ctx->r2 == 0) {
        // 0x801D3EE0: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_801D3F0C;
    }
    // 0x801D3EE0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x801D3EE4: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D3EE8: bgezl       $t6, L_801D3F10
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D3EEC: addu        $t9, $t9, $t7
        ctx->r25 = ADD32(ctx->r25, ctx->r15);
            goto L_801D3F10;
    }
    goto skip_0;
    // 0x801D3EEC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    skip_0:
    // 0x801D3EF0: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D3EF4: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D3EF8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D3EFC: jal         0x800352EC
    // 0x801D3F00: addiu       $a0, $a0, 0x47B0
    ctx->r4 = ADD32(ctx->r4, 0X47B0);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D3F00: addiu       $a0, $a0, 0x47B0
    ctx->r4 = ADD32(ctx->r4, 0X47B0);
    after_0:
    // 0x801D3F04: b           L_801D3F84
    // 0x801D3F08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801D3F84;
    // 0x801D3F08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D3F0C:
    // 0x801D3F0C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
L_801D3F10:
    // 0x801D3F10: lw          $t9, -0x7528($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7528);
    // 0x801D3F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D3F18: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x801D3F1C: jalr        $t9
    // 0x801D3F20: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801D3F20: nop

    after_1:
    // 0x801D3F24: lbu         $t8, 0x9C($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X9C);
    // 0x801D3F28: beql        $t8, $zero, L_801D3F84
    if (ctx->r24 == 0) {
        // 0x801D3F2C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801D3F84;
    }
    goto skip_1;
    // 0x801D3F2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801D3F30: jal         0x801CD504
    // 0x801D3F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD504_63C354(rdram, ctx);
        goto after_2;
    // 0x801D3F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801D3F38: beq         $v0, $zero, L_801D3F50
    if (ctx->r2 == 0) {
        // 0x801D3F3C: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_801D3F50;
    }
    // 0x801D3F3C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801D3F40: jal         0x801D2B90
    // 0x801D3F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_3;
    // 0x801D3F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801D3F48: b           L_801D3F84
    // 0x801D3F4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801D3F84;
    // 0x801D3F4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D3F50:
    // 0x801D3F50: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801D3F54: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x801D3F58: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801D3F5C: addiu       $a1, $a1, -0x7530
    ctx->r5 = ADD32(ctx->r5, -0X7530);
    // 0x801D3F60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D3F64: jal         0x801CD834
    // 0x801D3F68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801CD834_63C684(rdram, ctx);
        goto after_4;
    // 0x801D3F68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x801D3F6C: jal         0x801CD634
    // 0x801D3F70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_5;
    // 0x801D3F70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801D3F74: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D3F78: jal         0x801CD780
    // 0x801D3F7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_6;
    // 0x801D3F7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x801D3F80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D3F84:
    // 0x801D3F84: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D3F88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D3F8C: jr          $ra
    // 0x801D3F90: nop

    TRACE_RETURN()
    return;
    // 0x801D3F90: nop

;}
RECOMP_FUNC void func_801CD480_63C2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD480: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CD484: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x801CD488: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CD48C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CD490: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x801CD494: jal         0x801CBC94
    // 0x801CD498: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_0;
    // 0x801CD498: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x801CD49C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CD4A0: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x801CD4A4: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801CD4A8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801CD4AC: nop

    // 0x801CD4B0: bc1f        L_801CD4BC
    if (!c1cs) {
        // 0x801CD4B4: nop
    
            goto L_801CD4BC;
    }
    // 0x801CD4B4: nop

    // 0x801CD4B8: mov.s       $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = ctx->f14.fl;
L_801CD4BC:
    // 0x801CD4BC: jal         0x801CBC94
    // 0x801CD4C0: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_1;
    // 0x801CD4C0: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x801CD4C4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CD4C8: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801CD4CC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801CD4D0: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801CD4D4: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801CD4D8: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801CD4DC: bc1fl       L_801CD4EC
    if (!c1cs) {
        // 0x801CD4E0: sub.s       $f12, $f2, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f16.fl;
            goto L_801CD4EC;
    }
    goto skip_0;
    // 0x801CD4E0: sub.s       $f12, $f2, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f16.fl;
    skip_0:
    // 0x801CD4E4: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x801CD4E8: sub.s       $f12, $f2, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f16.fl;
L_801CD4EC:
    // 0x801CD4EC: jal         0x80003A94
    // 0x801CD4F0: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    func_80003A94_4694(rdram, ctx);
        goto after_2;
    // 0x801CD4F0: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    after_2:
    // 0x801CD4F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CD4F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CD4FC: jr          $ra
    // 0x801CD500: nop

    TRACE_RETURN()
    return;
    // 0x801CD500: nop

;}
RECOMP_FUNC void func_801DD714_64C564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DD718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DD71C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DD720: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DD724: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801DD728: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801DD72C: bgezl       $t6, L_801DD754
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DD730: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_801DD754;
    }
    goto skip_0;
    // 0x801DD730: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x801DD734: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801DD738: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801DD73C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DD740: jal         0x800352EC
    // 0x801DD744: addiu       $a0, $a0, -0x2864
    ctx->r4 = ADD32(ctx->r4, -0X2864);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DD744: addiu       $a0, $a0, -0x2864
    ctx->r4 = ADD32(ctx->r4, -0X2864);
    after_0:
    // 0x801DD748: b           L_801DD790
    // 0x801DD74C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DD790;
    // 0x801DD74C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DD750: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_801DD754:
    // 0x801DD754: jal         0x801CD504
    // 0x801DD758: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801DD758: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801DD75C: beq         $v0, $zero, L_801DD774
    if (ctx->r2 == 0) {
        // 0x801DD760: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801DD774;
    }
    // 0x801DD760: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DD764: jal         0x801DBEB0
    // 0x801DD768: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801DBEB0_64AD00(rdram, ctx);
        goto after_2;
    // 0x801DD768: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801DD76C: b           L_801DD790
    // 0x801DD770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DD790;
    // 0x801DD770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DD774:
    // 0x801DD774: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DD778: jal         0x801CD634
    // 0x801DD77C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801DD77C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x801DD780: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DD784: jal         0x801CD780
    // 0x801DD788: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801DD788: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801DD78C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DD790:
    // 0x801DD790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DD794: jr          $ra
    // 0x801DD798: nop

    TRACE_RETURN()
    return;
    // 0x801DD798: nop

;}
RECOMP_FUNC void func_801DDEB0_64CD00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDEB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDEB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDEB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DDEBC: jal         0x801CDA5C
    // 0x801DDEC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801CDA5C_63C8AC(rdram, ctx);
        goto after_0;
    // 0x801DDEC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DDEC4: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x801DDEC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DDECC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DDED0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801DDED4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801DDED8: addiu       $t7, $zero, -0xFA0
    ctx->r15 = ADD32(0, -0XFA0);
    // 0x801DDEDC: bc1fl       L_801DDEF0
    if (!c1cs) {
        // 0x801DDEE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DDEF0;
    }
    goto skip_0;
    // 0x801DDEE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801DDEE4: sb          $t6, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r14;
    // 0x801DDEE8: sw          $t7, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r15;
    // 0x801DDEEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DDEF0:
    // 0x801DDEF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDEF4: jr          $ra
    // 0x801DDEF8: nop

    TRACE_RETURN()
    return;
    // 0x801DDEF8: nop

;}
RECOMP_FUNC void func_801D9958_6487A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9958: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D995C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D9960: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801D9964: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801D9968: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801D996C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D9970: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D9974: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D9978: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D997C: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801D9980: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D9984: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D9988: lui         $at, 0x4045
    ctx->r1 = S32(0X4045 << 16);
    // 0x801D998C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D9990: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D9994: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801D9998: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801D999C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801D99A0: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801D99A4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D99A8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D99AC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D99B0: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801D99B4: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801D99B8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D99BC: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D99C0: nop

    // 0x801D99C4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D99C8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D99CC: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801D99D0: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801D99D4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D99D8: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D99DC: nop

    // 0x801D99E0: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801D99E4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D99E8: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801D99EC: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801D99F0: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801D99F4: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801D99F8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D99FC: jal         0x80033898
    // 0x801D9A00: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801D9A00: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801D9A04: addiu       $t8, $zero, 0x29
    ctx->r24 = ADD32(0, 0X29);
    // 0x801D9A08: addiu       $t9, $zero, 0x39
    ctx->r25 = ADD32(0, 0X39);
    // 0x801D9A0C: addiu       $t0, $zero, 0x39
    ctx->r8 = ADD32(0, 0X39);
    // 0x801D9A10: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801D9A14: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801D9A18: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801D9A1C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801D9A20: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D9A24: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D9A28: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D9A2C: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D9A30: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801D9A34: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D9A38: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D9A3C: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x801D9A40: addiu       $t3, $zero, 0x300
    ctx->r11 = ADD32(0, 0X300);
    // 0x801D9A44: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801D9A48: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D9A4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D9A50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D9A54: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D9A58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D9A5C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D9A60: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D9A64: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801D9A68: lwc1        $f18, 0x64($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D9A6C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x801D9A70: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801D9A74: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D9A78: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D9A7C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D9A80: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801D9A84: jal         0x801CDA88
    // 0x801D9A88: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801D9A88: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801D9A8C: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x801D9A90: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D9A94: lwc1        $f10, 0x5C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D9A98: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D9A9C: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D9AA0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D9AA4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D9AA8: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D9AAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D9AB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D9AB4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801D9AB8: lwc1        $f4, 0x60($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D9ABC: lui         $a2, 0x42FF
    ctx->r6 = S32(0X42FF << 16);
    // 0x801D9AC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D9AC4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D9AC8: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801D9ACC: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D9AD0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D9AD4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D9AD8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D9ADC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D9AE0: jal         0x801DF9EC
    // 0x801D9AE4: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801D9AE4: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801D9AE8: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D9AEC: lhu         $t5, 0xE2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D9AF0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801D9AF4: bnel        $t6, $zero, L_801D9B4C
    if (ctx->r14 != 0) {
        // 0x801D9AF8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801D9B4C;
    }
    goto skip_0;
    // 0x801D9AF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801D9AFC: lhu         $t7, 0xE4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE4);
    // 0x801D9B00: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801D9B04: bne         $t7, $at, L_801D9B24
    if (ctx->r15 != ctx->r1) {
        // 0x801D9B08: nop
    
            goto L_801D9B24;
    }
    // 0x801D9B08: nop

    // 0x801D9B0C: jal         0x80038B98
    // 0x801D9B10: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801D9B10: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801D9B14: lw          $t9, 0xEC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XEC);
    // 0x801D9B18: addiu       $t8, $zero, 0x299
    ctx->r24 = ADD32(0, 0X299);
    // 0x801D9B1C: b           L_801D9B38
    // 0x801D9B20: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
        goto L_801D9B38;
    // 0x801D9B20: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
L_801D9B24:
    // 0x801D9B24: jal         0x80038B98
    // 0x801D9B28: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801D9B28: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801D9B2C: lw          $t1, 0xEC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XEC);
    // 0x801D9B30: addiu       $t0, $zero, 0x298
    ctx->r8 = ADD32(0, 0X298);
    // 0x801D9B34: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_801D9B38:
    // 0x801D9B38: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D9B3C: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D9B40: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x801D9B44: sh          $t3, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r11;
    // 0x801D9B48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801D9B4C:
    // 0x801D9B4C: jal         0x801E8850
    // 0x801D9B50: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801E8850_6576A0(rdram, ctx);
        goto after_5;
    // 0x801D9B50: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x801D9B54: jal         0x801D8BF0
    // 0x801D9B58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_6;
    // 0x801D9B58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801D9B5C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D9B60: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801D9B64: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801D9B68: jr          $ra
    // 0x801D9B6C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D9B6C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801D97E0_648630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D97E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D97E4: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D97E8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D97EC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801D97F0: addiu       $t6, $t6, 0x1260
    ctx->r14 = ADD32(ctx->r14, 0X1260);
    // 0x801D97F4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D97F8: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801D97FC: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801D9800: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801D9804: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801D9808: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801D980C: lbu         $t9, 0x9E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X9E);
    // 0x801D9810: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D9814: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x801D9818: beq         $t9, $zero, L_801D9870
    if (ctx->r25 == 0) {
        // 0x801D981C: lui         $a2, 0x41C8
        ctx->r6 = S32(0X41C8 << 16);
            goto L_801D9870;
    }
    // 0x801D981C: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x801D9820: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x801D9824: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D9828: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801D982C: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    // 0x801D9830: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801D9834: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801D9838: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D983C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x801D9840: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x801D9844: lui         $a3, 0x42AA
    ctx->r7 = S32(0X42AA << 16);
    // 0x801D9848: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D984C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D9850: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D9854: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D9858: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D985C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D9860: jal         0x801E8378
    // 0x801D9864: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801D9864: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801D9868: b           L_801D98B0
    // 0x801D986C: nop

        goto L_801D98B0;
    // 0x801D986C: nop

L_801D9870:
    // 0x801D9870: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D9874: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801D9878: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x801D987C: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801D9880: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801D9884: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D9888: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x801D988C: lui         $a3, 0x42AA
    ctx->r7 = S32(0X42AA << 16);
    // 0x801D9890: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D9894: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D9898: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D989C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D98A0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D98A4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D98A8: jal         0x801E8378
    // 0x801D98AC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_1;
    // 0x801D98AC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
L_801D98B0:
    // 0x801D98B0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D98B4: jal         0x800352EC
    // 0x801D98B8: addiu       $a0, $a0, -0x6730
    ctx->r4 = ADD32(ctx->r4, -0X6730);
    func_800352EC_35EEC(rdram, ctx);
        goto after_2;
    // 0x801D98B8: addiu       $a0, $a0, -0x6730
    ctx->r4 = ADD32(ctx->r4, -0X6730);
    after_2:
    // 0x801D98BC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D98C0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801D98C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D98C8: jr          $ra
    // 0x801D98CC: nop

    TRACE_RETURN()
    return;
    // 0x801D98CC: nop

;}
RECOMP_FUNC void func_801D6DF0_645C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6DF0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D6DF4: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D6DF8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D6DFC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801D6E00: addiu       $t6, $t6, 0x39B0
    ctx->r14 = ADD32(ctx->r14, 0X39B0);
    // 0x801D6E04: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D6E08: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801D6E0C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801D6E10: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801D6E14: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801D6E18: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801D6E1C: lbu         $v0, 0x9E($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9E);
    // 0x801D6E20: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801D6E24: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801D6E28: sll         $t0, $v0, 7
    ctx->r8 = S32(ctx->r2 << 7);
    // 0x801D6E2C: addiu       $v0, $t0, 0x200
    ctx->r2 = ADD32(ctx->r8, 0X200);
    // 0x801D6E30: andi        $t2, $v0, 0x3FF
    ctx->r10 = ctx->r2 & 0X3FF;
    // 0x801D6E34: sh          $t2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r10;
    // 0x801D6E38: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D6E3C: addiu       $t3, $zero, 0x50
    ctx->r11 = ADD32(0, 0X50);
    // 0x801D6E40: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x801D6E44: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x801D6E48: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D6E4C: sw          $t3, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r11;
    // 0x801D6E50: sw          $t4, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r12;
    // 0x801D6E54: sh          $t5, 0xAC($a0)
    MEM_H(0XAC, ctx->r4) = ctx->r13;
    // 0x801D6E58: swc1        $f0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f0.u32l;
    // 0x801D6E5C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D6E60: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D6E64: lui         $a3, 0x4296
    ctx->r7 = S32(0X4296 << 16);
    // 0x801D6E68: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D6E6C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D6E70: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D6E74: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D6E78: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D6E7C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D6E80: jal         0x801E8378
    // 0x801D6E84: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801D6E84: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801D6E88: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D6E8C: jal         0x800352EC
    // 0x801D6E90: addiu       $a0, $a0, 0x6EA8
    ctx->r4 = ADD32(ctx->r4, 0X6EA8);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801D6E90: addiu       $a0, $a0, 0x6EA8
    ctx->r4 = ADD32(ctx->r4, 0X6EA8);
    after_1:
    // 0x801D6E94: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D6E98: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801D6E9C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D6EA0: jr          $ra
    // 0x801D6EA4: nop

    TRACE_RETURN()
    return;
    // 0x801D6EA4: nop

;}
RECOMP_FUNC void func_801D697C_6457CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D697C: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x801D6980: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x801D6984: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801D6988: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x801D698C: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x801D6990: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801D6994: mtc1        $at, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r1;
    // 0x801D6998: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x801D699C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D69A0: mtc1        $at, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r1;
    // 0x801D69A4: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x801D69A8: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x801D69AC: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x801D69B0: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x801D69B4: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x801D69B8: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x801D69BC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D69C0: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x801D69C4: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x801D69C8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x801D69CC: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x801D69D0: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x801D69D4: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x801D69D8: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x801D69DC: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x801D69E0: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x801D69E4: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x801D69E8: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x801D69EC: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x801D69F0: ldc1        $f22, -0xE78($at)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r1, -0XE78);
    // 0x801D69F4: addiu       $s4, $zero, -0x2
    ctx->r20 = ADD32(0, -0X2);
    // 0x801D69F8: addiu       $s5, $zero, 0x48
    ctx->r21 = ADD32(0, 0X48);
L_801D69FC:
    // 0x801D69FC: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x801D6A00: andi        $s0, $s6, 0xFF
    ctx->r16 = ctx->r22 & 0XFF;
    // 0x801D6A04: sra         $t7, $s0, 1
    ctx->r15 = S32(SIGNED(ctx->r16) >> 1);
    // 0x801D6A08: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801D6A0C: andi        $t0, $s0, 0x1
    ctx->r8 = ctx->r16 & 0X1;
    // 0x801D6A10: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x801D6A14: addu        $t9, $s2, $t8
    ctx->r25 = ADD32(ctx->r18, ctx->r24);
    // 0x801D6A18: addu        $s7, $t9, $t1
    ctx->r23 = ADD32(ctx->r25, ctx->r9);
    // 0x801D6A1C: lh          $v1, 0xCC($s7)
    ctx->r3 = MEM_H(ctx->r23, 0XCC);
    // 0x801D6A20: or          $s6, $s0, $zero
    ctx->r22 = ctx->r16 | 0;
    // 0x801D6A24: bnel        $v1, $zero, L_801D6D94
    if (ctx->r3 != 0) {
        // 0x801D6A28: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_801D6D94;
    }
    goto skip_0;
    // 0x801D6A28: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    skip_0:
    // 0x801D6A2C: jal         0x8000DD58
    // 0x801D6A30: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801D6A30: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_0:
    // 0x801D6A34: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x801D6A38: and         $t3, $t2, $s4
    ctx->r11 = ctx->r10 & ctx->r20;
    // 0x801D6A3C: addiu       $t4, $t3, 0x50
    ctx->r12 = ADD32(ctx->r11, 0X50);
    // 0x801D6A40: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x801D6A44: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x801D6A48: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x801D6A4C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D6A50: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801D6A54: addiu       $t7, $t7, -0x74D0
    ctx->r15 = ADD32(ctx->r15, -0X74D0);
    // 0x801D6A58: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801D6A5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801D6A60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D6A64: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D6A68: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x801D6A6C: div.d       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f28.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f28.d);
    // 0x801D6A70: addiu       $t8, $s0, 0x1
    ctx->r24 = ADD32(ctx->r16, 0X1);
    // 0x801D6A74: bne         $s6, $zero, L_801D6C40
    if (ctx->r22 != 0) {
        // 0x801D6A78: cvt.s.d     $f26, $f10
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f26.fl = CVT_S_D(ctx->f10.d);
            goto L_801D6C40;
    }
    // 0x801D6A78: cvt.s.d     $f26, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f26.fl = CVT_S_D(ctx->f10.d);
    // 0x801D6A7C: jal         0x801DFE28
    // 0x801D6A80: lw          $a1, 0xC4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XC4);
    func_801DFE28_64EC78(rdram, ctx);
        goto after_1;
    // 0x801D6A80: lw          $a1, 0xC4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XC4);
    after_1:
    // 0x801D6A84: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x801D6A88: sw          $v0, 0xC4($s2)
    MEM_W(0XC4, ctx->r18) = ctx->r2;
    // 0x801D6A8C: jal         0x8000DD58
    // 0x801D6A90: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000DD58_E958(rdram, ctx);
        goto after_2;
    // 0x801D6A90: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x801D6A94: addiu       $s1, $v0, 0x1
    ctx->r17 = ADD32(ctx->r2, 0X1);
    // 0x801D6A98: andi        $t5, $s1, 0xFF
    ctx->r13 = ctx->r17 & 0XFF;
    // 0x801D6A9C: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
L_801D6AA0:
    // 0x801D6AA0: mul.s       $f20, $f30, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = MUL_S(ctx->f30.fl, ctx->f26.fl);
    // 0x801D6AA4: swc1        $f30, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f30.u32l;
    // 0x801D6AA8: jal         0x8000DD58
    // 0x801D6AAC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8000DD58_E958(rdram, ctx);
        goto after_3;
    // 0x801D6AAC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x801D6AB0: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x801D6AB4: sltiu       $at, $a0, 0x6
    ctx->r1 = ctx->r4 < 0X6 ? 1 : 0;
    // 0x801D6AB8: bne         $at, $zero, L_801D6AE0
    if (ctx->r1 != 0) {
        // 0x801D6ABC: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_801D6AE0;
    }
    // 0x801D6ABC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x801D6AC0: bgez        $a0, L_801D6AD0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x801D6AC4: lui         $at, 0x420C
        ctx->r1 = S32(0X420C << 16);
            goto L_801D6AD0;
    }
    // 0x801D6AC4: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x801D6AC8: b           L_801D6AD4
    // 0x801D6ACC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_801D6AD4;
    // 0x801D6ACC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801D6AD0:
    // 0x801D6AD0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_801D6AD4:
    // 0x801D6AD4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D6AD8: nop

    // 0x801D6ADC: swc1        $f16, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f16.u32l;
L_801D6AE0:
    // 0x801D6AE0: multu       $v1, $s5
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D6AE4: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x801D6AE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D6AEC: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801D6AF0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801D6AF4: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x801D6AF8: mflo        $t6
    ctx->r14 = lo;
    // 0x801D6AFC: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x801D6B00: nop

    // 0x801D6B04: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801D6B08: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x801D6B0C: jal         0x8000DD58
    // 0x801D6B10: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_4;
    // 0x801D6B10: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x801D6B14: sll         $t7, $v0, 7
    ctx->r15 = S32(ctx->r2 << 7);
    // 0x801D6B18: addiu       $v1, $t7, 0x40
    ctx->r3 = ADD32(ctx->r15, 0X40);
    // 0x801D6B1C: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x801D6B20: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x801D6B24: andi        $s0, $v1, 0xFFFF
    ctx->r16 = ctx->r3 & 0XFFFF;
    // 0x801D6B28: bgez        $t8, L_801D6B44
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801D6B2C: cvt.d.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
            goto L_801D6B44;
    }
    // 0x801D6B2C: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x801D6B30: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D6B34: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801D6B38: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D6B3C: nop

    // 0x801D6B40: add.d       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = ctx->f10.d + ctx->f16.d;
L_801D6B44:
    // 0x801D6B44: mul.d       $f18, $f10, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x801D6B48: div.d       $f4, $f18, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f24.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f24.d);
    // 0x801D6B4C: jal         0x800417F0
    // 0x801D6B50: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    __sinf_recomp(rdram, ctx);
        goto after_5;
    // 0x801D6B50: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_5:
    // 0x801D6B54: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801D6B58: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    // 0x801D6B5C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D6B60: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801D6B64: cvt.d.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.d = CVT_D_W(ctx->f16.u32l);
    // 0x801D6B68: bgez        $s0, L_801D6B80
    if (SIGNED(ctx->r16) >= 0) {
        // 0x801D6B6C: swc1        $f8, 0xB4($sp)
        MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
            goto L_801D6B80;
    }
    // 0x801D6B6C: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x801D6B70: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801D6B74: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D6B78: nop

    // 0x801D6B7C: add.d       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f10.d + ctx->f18.d;
L_801D6B80:
    // 0x801D6B80: mul.d       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x801D6B84: div.d       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f24.d);
    // 0x801D6B88: jal         0x800419B0
    // 0x801D6B8C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    __cosf_recomp(rdram, ctx);
        goto after_6;
    // 0x801D6B8C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_6:
    // 0x801D6B90: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801D6B94: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801D6B98: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801D6B9C: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801D6BA0: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801D6BA4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801D6BA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D6BAC: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801D6BB0: swc1        $f16, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f16.u32l;
    // 0x801D6BB4: lwc1        $f18, 0x5C($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X5C);
    // 0x801D6BB8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801D6BBC: lwc1        $f10, 0x60($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X60);
    // 0x801D6BC0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801D6BC4: lwc1        $f4, 0x64($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X64);
    // 0x801D6BC8: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x801D6BCC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x801D6BD0: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x801D6BD4: jal         0x801DFC60
    // 0x801D6BD8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_801DFC60_64EAB0(rdram, ctx);
        goto after_7;
    // 0x801D6BD8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x801D6BDC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x801D6BE0: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x801D6BE4: beq         $t0, $zero, L_801D6C18
    if (ctx->r8 == 0) {
        // 0x801D6BE8: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_801D6C18;
    }
    // 0x801D6BE8: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x801D6BEC: jal         0x8000DD58
    // 0x801D6BF0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_8000DD58_E958(rdram, ctx);
        goto after_8;
    // 0x801D6BF0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_8:
    // 0x801D6BF4: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x801D6BF8: and         $t1, $t9, $s4
    ctx->r9 = ctx->r25 & ctx->r20;
    // 0x801D6BFC: addiu       $t2, $t1, 0x50
    ctx->r10 = ADD32(ctx->r9, 0X50);
    // 0x801D6C00: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x801D6C04: nop

    // 0x801D6C08: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801D6C0C: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801D6C10: div.d       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f28.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f28.d);
    // 0x801D6C14: cvt.s.d     $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f26.fl = CVT_S_D(ctx->f6.d);
L_801D6C18:
    // 0x801D6C18: bne         $s1, $zero, L_801D6AA0
    if (ctx->r17 != 0) {
        // 0x801D6C1C: nop
    
            goto L_801D6AA0;
    }
    // 0x801D6C1C: nop

    // 0x801D6C20: jal         0x8000DD58
    // 0x801D6C24: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8000DD58_E958(rdram, ctx);
        goto after_9;
    // 0x801D6C24: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_9:
    // 0x801D6C28: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x801D6C2C: and         $v1, $t3, $s4
    ctx->r3 = ctx->r11 & ctx->r20;
    // 0x801D6C30: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x801D6C34: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x801D6C38: b           L_801D6D90
    // 0x801D6C3C: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
        goto L_801D6D90;
    // 0x801D6C3C: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
L_801D6C40:
    // 0x801D6C40: lwc1        $f8, -0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0XC);
    // 0x801D6C44: lwc1        $f16, -0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X8);
    // 0x801D6C48: lwc1        $f18, -0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, -0X4);
    // 0x801D6C4C: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x801D6C50: swc1        $f16, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f16.u32l;
    // 0x801D6C54: swc1        $f18, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f18.u32l;
    // 0x801D6C58: lb          $v1, 0x9F($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X9F);
    // 0x801D6C5C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801D6C60: sllv        $a3, $t0, $t8
    ctx->r7 = S32(ctx->r8 << (ctx->r24 & 31));
    // 0x801D6C64: and         $t9, $v1, $a3
    ctx->r25 = ctx->r3 & ctx->r7;
    // 0x801D6C68: beq         $t9, $zero, L_801D6CD8
    if (ctx->r25 == 0) {
        // 0x801D6C6C: addiu       $t2, $sp, 0xB8
        ctx->r10 = ADD32(ctx->r29, 0XB8);
            goto L_801D6CD8;
    }
    // 0x801D6C6C: addiu       $t2, $sp, 0xB8
    ctx->r10 = ADD32(ctx->r29, 0XB8);
    // 0x801D6C70: or          $t1, $v1, $a3
    ctx->r9 = ctx->r3 | ctx->r7;
    // 0x801D6C74: sb          $t1, 0x9F($s2)
    MEM_B(0X9F, ctx->r18) = ctx->r9;
    // 0x801D6C78: lw          $a1, 0xC4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XC4);
    // 0x801D6C7C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801D6C80: jal         0x801DFE28
    // 0x801D6C84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801DFE28_64EC78(rdram, ctx);
        goto after_10;
    // 0x801D6C84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x801D6C88: lwc1        $f10, 0x5C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X5C);
    // 0x801D6C8C: sw          $v0, 0xC4($s2)
    MEM_W(0XC4, ctx->r18) = ctx->r2;
    // 0x801D6C90: lwc1        $f18, 0xBC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801D6C94: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801D6C98: lwc1        $f4, 0x60($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X60);
    // 0x801D6C9C: lwc1        $f16, 0xB8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801D6CA0: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801D6CA4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801D6CA8: lwc1        $f6, 0x64($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X64);
    // 0x801D6CAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D6CB0: lui         $a1, 0x430C
    ctx->r5 = S32(0X430C << 16);
    // 0x801D6CB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D6CB8: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801D6CBC: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x801D6CC0: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801D6CC4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x801D6CC8: jal         0x801DFC60
    // 0x801D6CCC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_801DFC60_64EAB0(rdram, ctx);
        goto after_11;
    // 0x801D6CCC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x801D6CD0: b           L_801D6D90
    // 0x801D6CD4: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_801D6D90;
    // 0x801D6CD4: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_801D6CD8:
    // 0x801D6CD8: lhu         $a0, 0x14($fp)
    ctx->r4 = MEM_HU(ctx->r30, 0X14);
    // 0x801D6CDC: lhu         $a1, 0x16($fp)
    ctx->r5 = MEM_HU(ctx->r30, 0X16);
    // 0x801D6CE0: lhu         $a2, 0x18($fp)
    ctx->r6 = MEM_HU(ctx->r30, 0X18);
    // 0x801D6CE4: addiu       $t3, $sp, 0xBC
    ctx->r11 = ADD32(ctx->r29, 0XBC);
    // 0x801D6CE8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801D6CEC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801D6CF0: jal         0x80033898
    // 0x801D6CF4: addiu       $a3, $sp, 0xB4
    ctx->r7 = ADD32(ctx->r29, 0XB4);
    func_80033898_34498(rdram, ctx);
        goto after_12;
    // 0x801D6CF4: addiu       $a3, $sp, 0xB4
    ctx->r7 = ADD32(ctx->r29, 0XB4);
    after_12:
    // 0x801D6CF8: lw          $a1, 0xC8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XC8);
    // 0x801D6CFC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801D6D00: jal         0x801E0700
    // 0x801D6D04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801E0700_64F550(rdram, ctx);
        goto after_13;
    // 0x801D6D04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x801D6D08: sw          $v0, 0xC8($s2)
    MEM_W(0XC8, ctx->r18) = ctx->r2;
    // 0x801D6D0C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D6D10: ldc1        $f4, -0xE70($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0XE70);
    // 0x801D6D14: cvt.d.s     $f10, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f10.d = CVT_D_S(ctx->f26.fl);
    // 0x801D6D18: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x801D6D1C: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x801D6D20: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x801D6D24: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x801D6D28: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801D6D2C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801D6D30: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D6D34: lwc1        $f18, 0x5C($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X5C);
    // 0x801D6D38: lwc1        $f16, 0xB4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801D6D3C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801D6D40: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801D6D44: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D6D48: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D6D4C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801D6D50: lwc1        $f16, 0xBC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801D6D54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D6D58: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x801D6D5C: lwc1        $f6, 0x60($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X60);
    // 0x801D6D60: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801D6D64: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x801D6D68: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D6D6C: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x801D6D70: lwc1        $f18, 0x64($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X64);
    // 0x801D6D74: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801D6D78: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D6D7C: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D6D80: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D6D84: jal         0x801E0514
    // 0x801D6D88: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    func_801E0514_64F364(rdram, ctx);
        goto after_14;
    // 0x801D6D88: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x801D6D8C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_801D6D90:
    // 0x801D6D90: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
L_801D6D94:
    // 0x801D6D94: bne         $s6, $zero, L_801D69FC
    if (ctx->r22 != 0) {
        // 0x801D6D98: sh          $t7, 0xCC($s7)
        MEM_H(0XCC, ctx->r23) = ctx->r15;
            goto L_801D69FC;
    }
    // 0x801D6D98: sh          $t7, 0xCC($s7)
    MEM_H(0XCC, ctx->r23) = ctx->r15;
    // 0x801D6D9C: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x801D6DA0: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x801D6DA4: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x801D6DA8: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x801D6DAC: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x801D6DB0: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x801D6DB4: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x801D6DB8: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x801D6DBC: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x801D6DC0: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x801D6DC4: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x801D6DC8: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x801D6DCC: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x801D6DD0: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x801D6DD4: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x801D6DD8: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x801D6DDC: jr          $ra
    // 0x801D6DE0: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    TRACE_RETURN()
    return;
    // 0x801D6DE0: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_801E0EAC_64FCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0EAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E0EB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0EB4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801E0EB8: bne         $a1, $zero, L_801E0EF8
    if (ctx->r5 != 0) {
        // 0x801E0EBC: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_801E0EF8;
    }
    // 0x801E0EBC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801E0EC0: lw          $v1, 0xEC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XEC);
    // 0x801E0EC4: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E0EC8: addiu       $a1, $a1, 0x760
    ctx->r5 = ADD32(ctx->r5, 0X760);
    // 0x801E0ECC: lw          $a0, 0xD4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XD4);
    // 0x801E0ED0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x801E0ED4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E0ED8: jal         0x80034E08
    // 0x801E0EDC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801E0EDC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801E0EE0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0EE4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801E0EE8: beq         $v0, $zero, L_801E0EF8
    if (ctx->r2 == 0) {
        // 0x801E0EEC: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_801E0EF8;
    }
    // 0x801E0EEC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801E0EF0: sw          $a3, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r7;
    // 0x801E0EF4: sw          $v1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r3;
L_801E0EF8:
    // 0x801E0EF8: beql        $a1, $zero, L_801E0F20
    if (ctx->r5 == 0) {
        // 0x801E0EFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E0F20;
    }
    goto skip_0;
    // 0x801E0EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E0F00: sw          $a3, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r7;
    // 0x801E0F04: sb          $zero, 0x78($a1)
    MEM_B(0X78, ctx->r5) = 0;
    // 0x801E0F08: lhu         $t6, 0x76($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X76);
    // 0x801E0F0C: sb          $zero, 0x6A($a1)
    MEM_B(0X6A, ctx->r5) = 0;
    // 0x801E0F10: sh          $t6, 0x70($a1)
    MEM_H(0X70, ctx->r5) = ctx->r14;
    // 0x801E0F14: lbu         $t7, 0x2B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2B);
    // 0x801E0F18: sb          $t7, 0x6B($a1)
    MEM_B(0X6B, ctx->r5) = ctx->r15;
    // 0x801E0F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E0F20:
    // 0x801E0F20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E0F24: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x801E0F28: jr          $ra
    // 0x801E0F2C: nop

    TRACE_RETURN()
    return;
    // 0x801E0F2C: nop

;}
RECOMP_FUNC void func_801E58A4_6546F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E58A4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801E58A8: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x801E58AC: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x801E58B0: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x801E58B4: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x801E58B8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801E58BC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801E58C0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801E58C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E58C8: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801E58CC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801E58D0: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801E58D4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801E58D8: lw          $s0, 0x54($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X54);
    // 0x801E58DC: lw          $s1, 0x58($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X58);
    // 0x801E58E0: lw          $s2, 0x5C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X5C);
    // 0x801E58E4: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x801E58E8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E58EC: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x801E58F0: nop

    // 0x801E58F4: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x801E58F8: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801E58FC: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E5900: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E5904: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x801E5908: nop

    // 0x801E590C: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x801E5910: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801E5914: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801E5918: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E591C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x801E5920: nop

    // 0x801E5924: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x801E5928: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801E592C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E5930: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E5934: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x801E5938: nop

    // 0x801E593C: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x801E5940: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801E5944: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801E5948: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801E594C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E5950: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x801E5954: nop

    // 0x801E5958: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801E595C: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801E5960: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E5964: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E5968: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x801E596C: nop

    // 0x801E5970: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x801E5974: lwc1        $f4, 0x0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X0);
    // 0x801E5978: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801E597C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E5980: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x801E5984: nop

    // 0x801E5988: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x801E598C: lwc1        $f10, 0x0($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X0);
    // 0x801E5990: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x801E5994: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E5998: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E599C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x801E59A0: nop

    // 0x801E59A4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801E59A8: lwc1        $f4, 0x4($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X4);
    // 0x801E59AC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x801E59B0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x801E59B4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801E59B8: subu        $t6, $t2, $t5
    ctx->r14 = SUB32(ctx->r10, ctx->r13);
    // 0x801E59BC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E59C0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x801E59C4: nop

    // 0x801E59C8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801E59CC: lwc1        $f10, 0x8($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X8);
    // 0x801E59D0: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E59D4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E59D8: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x801E59DC: nop

    // 0x801E59E0: addu        $t0, $t9, $t4
    ctx->r8 = ADD32(ctx->r25, ctx->r12);
    // 0x801E59E4: sll         $t3, $t0, 1
    ctx->r11 = S32(ctx->r8 << 1);
    // 0x801E59E8: addu        $t7, $t6, $t0
    ctx->r15 = ADD32(ctx->r14, ctx->r8);
    // 0x801E59EC: sltu        $at, $t3, $t7
    ctx->r1 = ctx->r11 < ctx->r15 ? 1 : 0;
    // 0x801E59F0: beq         $at, $zero, L_801E5A00
    if (ctx->r1 == 0) {
        // 0x801E59F4: sw          $t9, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r25;
            goto L_801E5A00;
    }
    // 0x801E59F4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801E59F8: b           L_801E5C30
    // 0x801E59FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5C30;
    // 0x801E59FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E5A00:
    // 0x801E5A00: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x801E5A04: addu        $t0, $t8, $v0
    ctx->r8 = ADD32(ctx->r24, ctx->r2);
    // 0x801E5A08: sll         $t9, $t0, 1
    ctx->r25 = S32(ctx->r8 << 1);
    // 0x801E5A0C: subu        $t2, $t1, $t4
    ctx->r10 = SUB32(ctx->r9, ctx->r12);
    // 0x801E5A10: addu        $t5, $t2, $t0
    ctx->r13 = ADD32(ctx->r10, ctx->r8);
    // 0x801E5A14: sltu        $at, $t9, $t5
    ctx->r1 = ctx->r25 < ctx->r13 ? 1 : 0;
    // 0x801E5A18: beq         $at, $zero, L_801E5A28
    if (ctx->r1 == 0) {
        // 0x801E5A1C: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_801E5A28;
    }
    // 0x801E5A1C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801E5A20: b           L_801E5C30
    // 0x801E5A24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5C30;
    // 0x801E5A24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E5A28:
    // 0x801E5A28: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x801E5A2C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x801E5A30: addu        $t0, $v1, $v0
    ctx->r8 = ADD32(ctx->r3, ctx->r2);
    // 0x801E5A34: sll         $t6, $t0, 1
    ctx->r14 = S32(ctx->r8 << 1);
    // 0x801E5A38: subu        $t8, $t3, $t7
    ctx->r24 = SUB32(ctx->r11, ctx->r15);
    // 0x801E5A3C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x801E5A40: sltu        $at, $t6, $t1
    ctx->r1 = ctx->r14 < ctx->r9 ? 1 : 0;
    // 0x801E5A44: beql        $at, $zero, L_801E5A58
    if (ctx->r1 == 0) {
        // 0x801E5A48: lwc1        $f4, 0x0($a2)
        ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
            goto L_801E5A58;
    }
    goto skip_0;
    // 0x801E5A48: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    skip_0:
    // 0x801E5A4C: b           L_801E5C30
    // 0x801E5A50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5C30;
    // 0x801E5A50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E5A54: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
L_801E5A58:
    // 0x801E5A58: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801E5A5C: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x801E5A60: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801E5A64: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
    // 0x801E5A68: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801E5A6C: swc1        $f8, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f8.u32l;
    // 0x801E5A70: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x801E5A74: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x801E5A78: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x801E5A7C: subu        $t3, $t9, $t5
    ctx->r11 = SUB32(ctx->r25, ctx->r13);
    // 0x801E5A80: addu        $t7, $t3, $t4
    ctx->r15 = ADD32(ctx->r11, ctx->r12);
    // 0x801E5A84: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x801E5A88: sltu        $at, $t2, $t7
    ctx->r1 = ctx->r10 < ctx->r15 ? 1 : 0;
    // 0x801E5A8C: beql        $at, $zero, L_801E5AE4
    if (ctx->r1 == 0) {
        // 0x801E5A90: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_801E5AE4;
    }
    goto skip_1;
    // 0x801E5A90: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801E5A94: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801E5A98: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x801E5A9C: or          $t8, $zero, $zero
    ctx->r24 = 0 | 0;
    // 0x801E5AA0: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x801E5AA4: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801E5AA8: lwc1        $f10, 0x0($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X0);
    // 0x801E5AAC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801E5AB0: nop

    // 0x801E5AB4: bc1fl       L_801E5AC4
    if (!c1cs) {
        // 0x801E5AB8: sll         $t6, $t8, 1
        ctx->r14 = S32(ctx->r24 << 1);
            goto L_801E5AC4;
    }
    goto skip_2;
    // 0x801E5AB8: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    skip_2:
    // 0x801E5ABC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801E5AC0: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
L_801E5AC4:
    // 0x801E5AC4: addiu       $t1, $t6, -0x1
    ctx->r9 = ADD32(ctx->r14, -0X1);
    // 0x801E5AC8: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x801E5ACC: nop

    // 0x801E5AD0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801E5AD4: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x801E5AD8: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x801E5ADC: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x801E5AE0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_801E5AE4:
    // 0x801E5AE4: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x801E5AE8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x801E5AEC: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x801E5AF0: subu        $t4, $t5, $t3
    ctx->r12 = SUB32(ctx->r13, ctx->r11);
    // 0x801E5AF4: addu        $t2, $t4, $v1
    ctx->r10 = ADD32(ctx->r12, ctx->r3);
    // 0x801E5AF8: sltu        $at, $t9, $t2
    ctx->r1 = ctx->r25 < ctx->r10 ? 1 : 0;
    // 0x801E5AFC: beql        $at, $zero, L_801E5B54
    if (ctx->r1 == 0) {
        // 0x801E5B00: lw          $v0, 0x20($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X20);
            goto L_801E5B54;
    }
    goto skip_3;
    // 0x801E5B00: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    skip_3:
    // 0x801E5B04: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801E5B08: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x801E5B0C: or          $t7, $zero, $zero
    ctx->r15 = 0 | 0;
    // 0x801E5B10: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
    // 0x801E5B14: lwc1        $f18, 0x0($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801E5B18: lwc1        $f16, 0x4($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X4);
    // 0x801E5B1C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x801E5B20: nop

    // 0x801E5B24: bc1fl       L_801E5B34
    if (!c1cs) {
        // 0x801E5B28: sll         $t8, $t7, 1
        ctx->r24 = S32(ctx->r15 << 1);
            goto L_801E5B34;
    }
    goto skip_4;
    // 0x801E5B28: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    skip_4:
    // 0x801E5B2C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801E5B30: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
L_801E5B34:
    // 0x801E5B34: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x801E5B38: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x801E5B3C: nop

    // 0x801E5B40: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801E5B44: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x801E5B48: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x801E5B4C: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
    // 0x801E5B50: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
L_801E5B54:
    // 0x801E5B54: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x801E5B58: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x801E5B5C: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x801E5B60: subu        $t4, $t5, $t3
    ctx->r12 = SUB32(ctx->r13, ctx->r11);
    // 0x801E5B64: addu        $t9, $t4, $v0
    ctx->r25 = ADD32(ctx->r12, ctx->r2);
    // 0x801E5B68: sltu        $at, $t1, $t9
    ctx->r1 = ctx->r9 < ctx->r25 ? 1 : 0;
    // 0x801E5B6C: beq         $at, $zero, L_801E5BC0
    if (ctx->r1 == 0) {
        // 0x801E5B70: nop
    
            goto L_801E5BC0;
    }
    // 0x801E5B70: nop

    // 0x801E5B74: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x801E5B78: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x801E5B7C: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x801E5B80: swc1        $f0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f0.u32l;
    // 0x801E5B84: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801E5B88: lwc1        $f18, 0x8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X8);
    // 0x801E5B8C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x801E5B90: nop

    // 0x801E5B94: bc1fl       L_801E5BA4
    if (!c1cs) {
        // 0x801E5B98: sll         $t7, $t2, 1
        ctx->r15 = S32(ctx->r10 << 1);
            goto L_801E5BA4;
    }
    goto skip_5;
    // 0x801E5B98: sll         $t7, $t2, 1
    ctx->r15 = S32(ctx->r10 << 1);
    skip_5:
    // 0x801E5B9C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801E5BA0: sll         $t7, $t2, 1
    ctx->r15 = S32(ctx->r10 << 1);
L_801E5BA4:
    // 0x801E5BA4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801E5BA8: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x801E5BAC: nop

    // 0x801E5BB0: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801E5BB4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801E5BB8: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x801E5BBC: swc1        $f8, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f8.u32l;
L_801E5BC0:
    // 0x801E5BC0: beql        $t0, $zero, L_801E5BD4
    if (ctx->r8 == 0) {
        // 0x801E5BC4: lwc1        $f10, 0x0($a2)
        ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
            goto L_801E5BD4;
    }
    goto skip_6;
    // 0x801E5BC4: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    skip_6:
    // 0x801E5BC8: b           L_801E5C30
    // 0x801E5BCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E5C30;
    // 0x801E5BCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E5BD0: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
L_801E5BD4:
    // 0x801E5BD4: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801E5BD8: lwc1        $f18, 0x0($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801E5BDC: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801E5BE0: sub.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801E5BE4: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801E5BE8: lwc1        $f8, 0x4($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4);
    // 0x801E5BEC: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801E5BF0: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801E5BF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E5BF8: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E5BFC: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801E5C00: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801E5C04: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801E5C08: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E5C0C: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E5C10: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801E5C14: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x801E5C18: nop

    // 0x801E5C1C: bc1fl       L_801E5C2C
    if (!c1cs) {
        // 0x801E5C20: andi        $t6, $v0, 0xFF
        ctx->r14 = ctx->r2 & 0XFF;
            goto L_801E5C2C;
    }
    goto skip_7;
    // 0x801E5C20: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    skip_7:
    // 0x801E5C24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E5C28: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
L_801E5C2C:
    // 0x801E5C2C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_801E5C30:
    // 0x801E5C30: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x801E5C34: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x801E5C38: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x801E5C3C: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x801E5C40: jr          $ra
    // 0x801E5C44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801E5C44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801E1284_6500D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1284: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E1288: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801E128C: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801E1290: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E1294: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E1298: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801E129C: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x801E12A0: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x801E12A4: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x801E12A8: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x801E12AC: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x801E12B0: beq         $a1, $zero, L_801E1418
    if (ctx->r5 == 0) {
        // 0x801E12B4: sdc1        $f20, 0x10($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
            goto L_801E1418;
    }
    // 0x801E12B4: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x801E12B8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E12BC: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x801E12C0: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x801E12C4: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x801E12C8: nop

    // 0x801E12CC: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
L_801E12D0:
    // 0x801E12D0: lwc1        $f6, 0x88($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X88);
    // 0x801E12D4: lwc1        $f24, 0x8C($s0)
    ctx->f24.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x801E12D8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E12DC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E12E0: lwc1        $f22, 0xC($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E12E4: lwc1        $f20, 0x10($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E12E8: cvt.d.s     $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
    // 0x801E12EC: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x801E12F0: ldc1        $f16, -0xC20($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XC20);
    // 0x801E12F4: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E12F8: mov.s       $f28, $f22
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    ctx->f28.fl = ctx->f22.fl;
    // 0x801E12FC: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x801E1300: lwc1        $f4, 0x90($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801E1304: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E1308: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E130C: add.s       $f22, $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f24.fl;
    // 0x801E1310: mul.d       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f26.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f26.d);
    // 0x801E1314: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x801E1318: swc1        $f20, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f20.u32l;
    // 0x801E131C: cvt.s.d     $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f24.fl = CVT_S_D(ctx->f18.d);
    // 0x801E1320: cvt.d.s     $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f18.d = CVT_D_S(ctx->f22.fl);
    // 0x801E1324: cvt.d.s     $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f8.d = CVT_D_S(ctx->f20.fl);
    // 0x801E1328: mul.d       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f26.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f26.d);
    // 0x801E132C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E1330: mul.d       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f26.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f26.d);
    // 0x801E1334: swc1        $f16, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->f16.u32l;
    // 0x801E1338: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E133C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E1340: swc1        $f6, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->f6.u32l;
    // 0x801E1344: jal         0x801CD504
    // 0x801E1348: swc1        $f16, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f16.u32l;
    func_801CD504_63C354(rdram, ctx);
        goto after_0;
    // 0x801E1348: swc1        $f16, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f16.u32l;
    after_0:
    // 0x801E134C: beq         $v0, $zero, L_801E1374
    if (ctx->r2 == 0) {
        // 0x801E1350: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801E1374;
    }
    // 0x801E1350: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E1354: jal         0x801CDFE4
    // 0x801E1358: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CDFE4_63CE34(rdram, ctx);
        goto after_1;
    // 0x801E1358: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x801E135C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E1360: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801E1364: jal         0x80036158
    // 0x801E1368: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80036158_36D58(rdram, ctx);
        goto after_2;
    // 0x801E1368: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801E136C: b           L_801E1410
    // 0x801E1370: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_801E1410;
    // 0x801E1370: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_801E1374:
    // 0x801E1374: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x801E1378: jal         0x801CBEF8
    // 0x801E137C: mov.s       $f14, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    ctx->f14.fl = ctx->f30.fl;
    func_801CBEF8_63AD48(rdram, ctx);
        goto after_3;
    // 0x801E137C: mov.s       $f14, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    ctx->f14.fl = ctx->f30.fl;
    after_3:
    // 0x801E1380: c.le.s      $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f30.fl <= ctx->f0.fl;
    // 0x801E1384: nop

    // 0x801E1388: bc1fl       L_801E13E0
    if (!c1cs) {
        // 0x801E138C: lhu         $t8, 0x94($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X94);
            goto L_801E13E0;
    }
    goto skip_0;
    // 0x801E138C: lhu         $t8, 0x94($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X94);
    skip_0:
    // 0x801E1390: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x801E1394: nop

    // 0x801E1398: bc1fl       L_801E13E0
    if (!c1cs) {
        // 0x801E139C: lhu         $t8, 0x94($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X94);
            goto L_801E13E0;
    }
    goto skip_1;
    // 0x801E139C: lhu         $t8, 0x94($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X94);
    skip_1:
    // 0x801E13A0: c.le.s      $f30, $f28
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f30.fl <= ctx->f28.fl;
    // 0x801E13A4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E13A8: bc1fl       L_801E13E0
    if (!c1cs) {
        // 0x801E13AC: lhu         $t8, 0x94($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X94);
            goto L_801E13E0;
    }
    goto skip_2;
    // 0x801E13AC: lhu         $t8, 0x94($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X94);
    skip_2:
    // 0x801E13B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E13B4: lh          $v0, 0x82($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X82);
    // 0x801E13B8: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x801E13BC: div.s       $f24, $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = DIV_S(ctx->f24.fl, ctx->f18.fl);
    // 0x801E13C0: beq         $v0, $zero, L_801E13DC
    if (ctx->r2 == 0) {
        // 0x801E13C4: neg.s       $f24, $f24
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = -ctx->f24.fl;
            goto L_801E13DC;
    }
    // 0x801E13C4: neg.s       $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = -ctx->f24.fl;
    // 0x801E13C8: lb          $t6, 0x6B($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X6B);
    // 0x801E13CC: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x801E13D0: bnel        $t6, $zero, L_801E13E0
    if (ctx->r14 != 0) {
        // 0x801E13D4: lhu         $t8, 0x94($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X94);
            goto L_801E13E0;
    }
    goto skip_3;
    // 0x801E13D4: lhu         $t8, 0x94($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X94);
    skip_3:
    // 0x801E13D8: sh          $t7, 0x82($s0)
    MEM_H(0X82, ctx->r16) = ctx->r15;
L_801E13DC:
    // 0x801E13DC: lhu         $t8, 0x94($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X94);
L_801E13E0:
    // 0x801E13E0: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x801E13E4: lhu         $t2, 0x96($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X96);
    // 0x801E13E8: lhu         $t3, 0x16($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X16);
    // 0x801E13EC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x801E13F0: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x801E13F4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x801E13F8: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x801E13FC: swc1        $f22, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f22.u32l;
    // 0x801E1400: swc1        $f24, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f24.u32l;
    // 0x801E1404: sh          $t1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r9;
    // 0x801E1408: sh          $t5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r13;
    // 0x801E140C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801E1410:
    // 0x801E1410: bnel        $s0, $zero, L_801E12D0
    if (ctx->r16 != 0) {
        // 0x801E1414: lwc1        $f4, 0x8($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
            goto L_801E12D0;
    }
    goto skip_4;
    // 0x801E1414: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    skip_4:
L_801E1418:
    // 0x801E1418: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801E141C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x801E1420: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x801E1424: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x801E1428: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x801E142C: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x801E1430: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x801E1434: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801E1438: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801E143C: jr          $ra
    // 0x801E1440: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x801E1440: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_801D57F4_644644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D57F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D57F8: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
    // 0x801D57FC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D5800: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D5804: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D5808: lwc1        $f16, 0x64($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D580C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D5810: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D5814: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D5818: jr          $ra
    // 0x801D581C: swc1        $f18, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x801D581C: swc1        $f18, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_801D3BE0_642A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3BE0: addiu       $t6, $zero, -0x4E20
    ctx->r14 = ADD32(0, -0X4E20);
    // 0x801D3BE4: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D3BE8: jr          $ra
    // 0x801D3BEC: sw          $t6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801D3BEC: sw          $t6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_801D3658_6424A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3658: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D365C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D3660: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801D3664: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801D3668: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801D366C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D3670: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D3674: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D3678: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D367C: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801D3680: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D3684: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D3688: lui         $at, 0x4044
    ctx->r1 = S32(0X4044 << 16);
    // 0x801D368C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D3690: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D3694: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801D3698: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801D369C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801D36A0: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801D36A4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D36A8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D36AC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D36B0: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801D36B4: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801D36B8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D36BC: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D36C0: nop

    // 0x801D36C4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D36C8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D36CC: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801D36D0: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801D36D4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D36D8: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D36DC: nop

    // 0x801D36E0: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801D36E4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D36E8: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801D36EC: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801D36F0: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801D36F4: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801D36F8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D36FC: jal         0x80033898
    // 0x801D3700: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801D3700: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801D3704: addiu       $t8, $zero, 0x57
    ctx->r24 = ADD32(0, 0X57);
    // 0x801D3708: addiu       $t9, $zero, 0x2B
    ctx->r25 = ADD32(0, 0X2B);
    // 0x801D370C: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x801D3710: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801D3714: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801D3718: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801D371C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801D3720: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D3724: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D3728: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D372C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801D3730: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D3734: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D3738: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x801D373C: addiu       $t2, $zero, 0x300
    ctx->r10 = ADD32(0, 0X300);
    // 0x801D3740: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801D3744: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D3748: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D374C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D3750: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D3754: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D3758: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D375C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D3760: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801D3764: lwc1        $f18, 0x64($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D3768: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x801D376C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x801D3770: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D3774: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D3778: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D377C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801D3780: jal         0x801CDA88
    // 0x801D3784: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801D3784: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801D3788: addiu       $t3, $zero, 0xC0
    ctx->r11 = ADD32(0, 0XC0);
    // 0x801D378C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D3790: lwc1        $f10, 0x5C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D3794: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D3798: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D379C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D37A0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D37A4: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D37A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D37AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D37B0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801D37B4: lwc1        $f4, 0x60($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D37B8: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x801D37BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D37C0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D37C4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801D37C8: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D37CC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D37D0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D37D4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D37D8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D37DC: jal         0x801DF9EC
    // 0x801D37E0: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801D37E0: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801D37E4: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D37E8: lhu         $t4, 0xE2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D37EC: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x801D37F0: bnel        $t5, $zero, L_801D3848
    if (ctx->r13 != 0) {
        // 0x801D37F4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801D3848;
    }
    goto skip_0;
    // 0x801D37F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801D37F8: lhu         $t6, 0xE4($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XE4);
    // 0x801D37FC: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801D3800: bne         $t6, $at, L_801D3820
    if (ctx->r14 != ctx->r1) {
        // 0x801D3804: nop
    
            goto L_801D3820;
    }
    // 0x801D3804: nop

    // 0x801D3808: jal         0x80038B98
    // 0x801D380C: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801D380C: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801D3810: lw          $t8, 0xEC($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XEC);
    // 0x801D3814: addiu       $t7, $zero, 0x299
    ctx->r15 = ADD32(0, 0X299);
    // 0x801D3818: b           L_801D3834
    // 0x801D381C: sh          $t7, 0xE4($t8)
    MEM_H(0XE4, ctx->r24) = ctx->r15;
        goto L_801D3834;
    // 0x801D381C: sh          $t7, 0xE4($t8)
    MEM_H(0XE4, ctx->r24) = ctx->r15;
L_801D3820:
    // 0x801D3820: jal         0x80038B98
    // 0x801D3824: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801D3824: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801D3828: lw          $t0, 0xEC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XEC);
    // 0x801D382C: addiu       $t9, $zero, 0x298
    ctx->r25 = ADD32(0, 0X298);
    // 0x801D3830: sh          $t9, 0xE4($t0)
    MEM_H(0XE4, ctx->r8) = ctx->r25;
L_801D3834:
    // 0x801D3834: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D3838: lhu         $t1, 0xE2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D383C: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x801D3840: sh          $t2, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r10;
    // 0x801D3844: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801D3848:
    // 0x801D3848: jal         0x801E8824
    // 0x801D384C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801E8824_657674(rdram, ctx);
        goto after_5;
    // 0x801D384C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x801D3850: jal         0x801D2B90
    // 0x801D3854: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_6;
    // 0x801D3854: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801D3858: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D385C: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801D3860: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801D3864: jr          $ra
    // 0x801D3868: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D3868: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801E117C_64FFCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E117C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1184: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801E1188: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x801E118C: jal         0x801E0EAC
    // 0x801E1190: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_801E0EAC_64FCFC(rdram, ctx);
        goto after_0;
    // 0x801E1190: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_0:
    // 0x801E1194: beq         $v0, $zero, L_801E11A8
    if (ctx->r2 == 0) {
        // 0x801E1198: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_801E11A8;
    }
    // 0x801E1198: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801E119C: lb          $t7, 0x78($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X78);
    // 0x801E11A0: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x801E11A4: sb          $t8, 0x78($v0)
    MEM_B(0X78, ctx->r2) = ctx->r24;
L_801E11A8:
    // 0x801E11A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E11AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E11B0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x801E11B4: jr          $ra
    // 0x801E11B8: nop

    TRACE_RETURN()
    return;
    // 0x801E11B8: nop

;}
RECOMP_FUNC void func_801E16C8_650518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E16C8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x801E16CC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801E16D0: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801E16D4: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801E16D8: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x801E16DC: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x801E16E0: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x801E16E4: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x801E16E8: lw          $s1, 0xEC($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XEC);
    // 0x801E16EC: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x801E16F0: jal         0x8000DD58
    // 0x801E16F4: lw          $s0, 0xD4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XD4);
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801E16F4: lw          $s0, 0xD4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XD4);
    after_0:
    // 0x801E16F8: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x801E16FC: sh          $t8, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r24;
    // 0x801E1700: jal         0x8000DD58
    // 0x801E1704: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801E1704: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_1:
    // 0x801E1708: sll         $t2, $v0, 3
    ctx->r10 = S32(ctx->r2 << 3);
    // 0x801E170C: sh          $t2, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r10;
    // 0x801E1710: jal         0x8000DD58
    // 0x801E1714: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    func_8000DD58_E958(rdram, ctx);
        goto after_2;
    // 0x801E1714: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_2:
    // 0x801E1718: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801E171C: addiu       $a2, $a2, 0x100
    ctx->r6 = ADD32(ctx->r6, 0X100);
    // 0x801E1720: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E1724: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801E1728: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E172C: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x801E1730: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E1734: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E1738: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E173C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E1740: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x801E1744: ldc1        $f4, -0xC10($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0XC10);
    // 0x801E1748: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E174C: lhu         $t0, 0x68($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X68);
    // 0x801E1750: lhu         $t1, 0x6A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X6A);
    // 0x801E1754: sll         $t3, $v0, 3
    ctx->r11 = S32(ctx->r2 << 3);
    // 0x801E1758: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x801E175C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E1760: addiu       $t5, $zero, 0x4BE
    ctx->r13 = ADD32(0, 0X4BE);
    // 0x801E1764: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x801E1768: addiu       $a1, $a1, 0x11E0
    ctx->r5 = ADD32(ctx->r5, 0X11E0);
    // 0x801E176C: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x801E1770: sh          $t4, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r12;
    // 0x801E1774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E1778: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E177C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E1780: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801E1784: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x801E1788: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801E178C: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801E1790: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801E1794: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E1798: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E179C: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x801E17A0: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x801E17A4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801E17A8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801E17AC: jal         0x800358E8
    // 0x801E17B0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_3;
    // 0x801E17B0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x801E17B4: beq         $v0, $zero, L_801E1984
    if (ctx->r2 == 0) {
        // 0x801E17B8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801E1984;
    }
    // 0x801E17B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801E17BC: sw          $s1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r17;
    // 0x801E17C0: jal         0x801CDF74
    // 0x801E17C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_801CDF74_63CDC4(rdram, ctx);
        goto after_4;
    // 0x801E17C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x801E17C8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E17CC: bne         $v0, $zero, L_801E17E4
    if (ctx->r2 != 0) {
        // 0x801E17D0: lw          $t6, 0x98($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X98);
            goto L_801E17E4;
    }
    // 0x801E17D0: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x801E17D4: jal         0x80034EF8
    // 0x801E17D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_5;
    // 0x801E17D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801E17DC: b           L_801E1988
    // 0x801E17E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E1988;
    // 0x801E17E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E17E4:
    // 0x801E17E4: sw          $t6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r14;
    // 0x801E17E8: sb          $zero, 0x6A($s0)
    MEM_B(0X6A, ctx->r16) = 0;
    // 0x801E17EC: lbu         $t7, 0x9F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X9F);
    // 0x801E17F0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E17F4: or          $t4, $v0, $at
    ctx->r12 = ctx->r2 | ctx->r1;
    // 0x801E17F8: sb          $t7, 0x6B($s0)
    MEM_B(0X6B, ctx->r16) = ctx->r15;
    // 0x801E17FC: lbu         $t8, 0xAF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XAF);
    // 0x801E1800: lw          $s1, 0x18($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X18);
    // 0x801E1804: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E1808: sb          $t8, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r24;
    // 0x801E180C: lbu         $t9, 0xB3($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XB3);
    // 0x801E1810: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x801E1814: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E1818: sb          $t9, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r25;
    // 0x801E181C: lbu         $t2, 0xB7($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XB7);
    // 0x801E1820: addiu       $t7, $t7, -0x1A80
    ctx->r15 = ADD32(ctx->r15, -0X1A80);
    // 0x801E1824: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x801E1828: sb          $t2, 0x72($s0)
    MEM_B(0X72, ctx->r16) = ctx->r10;
    // 0x801E182C: lbu         $t3, 0xBB($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XBB);
    // 0x801E1830: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x801E1834: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x801E1838: sb          $t3, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r11;
    // 0x801E183C: lwc1        $f8, 0xC8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801E1840: lui         $t3, 0x801F
    ctx->r11 = S32(0X801F << 16);
    // 0x801E1844: addiu       $t3, $t3, -0x1B70
    ctx->r11 = ADD32(ctx->r11, -0X1B70);
    // 0x801E1848: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x801E184C: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801E1850: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x801E1854: lui         $t4, 0xFA00
    ctx->r12 = S32(0XFA00 << 16);
    // 0x801E1858: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
    // 0x801E185C: lwc1        $f16, 0xD0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801E1860: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
    // 0x801E1864: lwc1        $f18, 0xD4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801E1868: lbu         $t0, 0xA7($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XA7);
    // 0x801E186C: swc1        $f18, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f18.u32l;
    // 0x801E1870: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801E1874: andi        $t9, $t0, 0xFF
    ctx->r25 = ctx->r8 & 0XFF;
    // 0x801E1878: swc1        $f4, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f4.u32l;
    // 0x801E187C: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801E1880: swc1        $f6, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f6.u32l;
    // 0x801E1884: beq         $t0, $zero, L_801E18AC
    if (ctx->r8 == 0) {
        // 0x801E1888: sw          $t5, 0x30($s1)
        MEM_W(0X30, ctx->r17) = ctx->r13;
            goto L_801E18AC;
    }
    // 0x801E1888: sw          $t5, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r13;
    // 0x801E188C: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x801E1890: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x801E1894: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801E1898: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E189C: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x801E18A0: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x801E18A4: b           L_801E18B4
    // 0x801E18A8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
        goto L_801E18B4;
    // 0x801E18A8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_801E18AC:
    // 0x801E18AC: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801E18B0: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
L_801E18B4:
    // 0x801E18B4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801E18B8: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x801E18BC: lbu         $t8, 0x70($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X70);
    // 0x801E18C0: lbu         $t6, 0x73($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X73);
    // 0x801E18C4: lbu         $t4, 0x71($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X71);
    // 0x801E18C8: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x801E18CC: or          $t2, $t6, $t9
    ctx->r10 = ctx->r14 | ctx->r25;
    // 0x801E18D0: lbu         $t6, 0x72($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X72);
    // 0x801E18D4: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x801E18D8: or          $t7, $t2, $t5
    ctx->r15 = ctx->r10 | ctx->r13;
    // 0x801E18DC: sll         $t9, $t6, 8
    ctx->r25 = S32(ctx->r14 << 8);
    // 0x801E18E0: or          $t3, $t7, $t9
    ctx->r11 = ctx->r15 | ctx->r25;
    // 0x801E18E4: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x801E18E8: lui         $t4, 0xB800
    ctx->r12 = S32(0XB800 << 16);
    // 0x801E18EC: sw          $t4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r12;
    // 0x801E18F0: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x801E18F4: sb          $t0, 0x80($s1)
    MEM_B(0X80, ctx->r17) = ctx->r8;
    // 0x801E18F8: lh          $t2, 0xAA($sp)
    ctx->r10 = MEM_H(ctx->r29, 0XAA);
    // 0x801E18FC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E1900: addiu       $t5, $sp, 0x74
    ctx->r13 = ADD32(ctx->r29, 0X74);
    // 0x801E1904: sh          $t2, 0x82($s1)
    MEM_H(0X82, ctx->r17) = ctx->r10;
    // 0x801E1908: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801E190C: ldc1        $f16, -0xC08($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XC08);
    // 0x801E1910: addiu       $t8, $sp, 0x78
    ctx->r24 = ADD32(ctx->r29, 0X78);
    // 0x801E1914: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E1918: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x801E191C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x801E1920: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x801E1924: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    // 0x801E1928: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801E192C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801E1930: lhu         $a1, 0xBE($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XBE);
    // 0x801E1934: lhu         $a0, 0xC2($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XC2);
    // 0x801E1938: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E193C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801E1940: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    // 0x801E1944: jal         0x80033898
    // 0x801E1948: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_6;
    // 0x801E1948: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x801E194C: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E1950: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E1954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E1958: swc1        $f6, 0x88($s1)
    MEM_W(0X88, ctx->r17) = ctx->f6.u32l;
    // 0x801E195C: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E1960: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E1964: swc1        $f8, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->f8.u32l;
    // 0x801E1968: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801E196C: swc1        $f10, 0x90($s1)
    MEM_W(0X90, ctx->r17) = ctx->f10.u32l;
    // 0x801E1970: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801E1974: swc1        $f16, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->f16.u32l;
    // 0x801E1978: lw          $t9, -0x20A0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X20A0);
    // 0x801E197C: jalr        $t9
    // 0x801E1980: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x801E1980: nop

    after_7:
L_801E1984:
    // 0x801E1984: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801E1988:
    // 0x801E1988: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801E198C: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801E1990: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801E1994: jr          $ra
    // 0x801E1998: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    TRACE_RETURN()
    return;
    // 0x801E1998: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_801D5A30_644880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5A30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D5A34: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D5A38: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801D5A3C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D5A40: addiu       $t6, $t6, 0x2670
    ctx->r14 = ADD32(ctx->r14, 0X2670);
    // 0x801D5A44: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D5A48: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D5A4C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801D5A50: addiu       $t9, $t9, -0x1BE8
    ctx->r25 = ADD32(ctx->r25, -0X1BE8);
    // 0x801D5A54: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801D5A58: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x801D5A5C: sb          $zero, 0x65($a1)
    MEM_B(0X65, ctx->r5) = 0;
    // 0x801D5A60: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801D5A64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D5A68: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D5A6C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801D5A70: addiu       $t1, $zero, 0x28
    ctx->r9 = ADD32(0, 0X28);
    // 0x801D5A74: sb          $t0, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r8;
    // 0x801D5A78: sw          $zero, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = 0;
    // 0x801D5A7C: sw          $t1, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r9;
    // 0x801D5A80: sh          $zero, 0xA2($a0)
    MEM_H(0XA2, ctx->r4) = 0;
    // 0x801D5A84: sh          $zero, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = 0;
    // 0x801D5A88: sh          $zero, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = 0;
    // 0x801D5A8C: sh          $zero, 0xC0($a0)
    MEM_H(0XC0, ctx->r4) = 0;
    // 0x801D5A90: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    // 0x801D5A94: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x801D5A98: swc1        $f4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f4.u32l;
    // 0x801D5A9C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D5AA0: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    // 0x801D5AA4: lui         $a3, 0xC334
    ctx->r7 = S32(0XC334 << 16);
    // 0x801D5AA8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D5AAC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D5AB0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D5AB4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D5AB8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D5ABC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D5AC0: jal         0x801E8378
    // 0x801D5AC4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801D5AC4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801D5AC8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D5ACC: jal         0x800352EC
    // 0x801D5AD0: addiu       $a0, $a0, 0x5AE4
    ctx->r4 = ADD32(ctx->r4, 0X5AE4);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801D5AD0: addiu       $a0, $a0, 0x5AE4
    ctx->r4 = ADD32(ctx->r4, 0X5AE4);
    after_1:
    // 0x801D5AD4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801D5AD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D5ADC: jr          $ra
    // 0x801D5AE0: nop

    TRACE_RETURN()
    return;
    // 0x801D5AE0: nop

;}
RECOMP_FUNC void func_801CD9E0_63C830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD9E0: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801CD9E4: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x801CD9E8: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x801CD9EC: lwc1        $f4, 0x5C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X5C);
    // 0x801CD9F0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801CD9F4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x801CD9F8: nop

    // 0x801CD9FC: addiu       $a1, $a1, -0x64
    ctx->r5 = ADD32(ctx->r5, -0X64);
    // 0x801CDA00: div         $zero, $a1, $t0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r8)));
    // 0x801CDA04: mflo        $a3
    ctx->r7 = lo;
    // 0x801CDA08: mfhi        $t7
    ctx->r15 = hi;
    // 0x801CDA0C: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    // 0x801CDA10: bne         $t0, $zero, L_801CDA1C
    if (ctx->r8 != 0) {
        // 0x801CDA14: nop
    
            goto L_801CDA1C;
    }
    // 0x801CDA14: nop

    // 0x801CDA18: break       7
    do_break(2149374488);
L_801CDA1C:
    // 0x801CDA1C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CDA20: bne         $t0, $at, L_801CDA34
    if (ctx->r8 != ctx->r1) {
        // 0x801CDA24: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CDA34;
    }
    // 0x801CDA24: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CDA28: bne         $a1, $at, L_801CDA34
    if (ctx->r5 != ctx->r1) {
        // 0x801CDA2C: nop
    
            goto L_801CDA34;
    }
    // 0x801CDA2C: nop

    // 0x801CDA30: break       6
    do_break(2149374512);
L_801CDA34:
    // 0x801CDA34: beq         $t7, $zero, L_801CDA54
    if (ctx->r15 == 0) {
        // 0x801CDA38: nop
    
            goto L_801CDA54;
    }
    // 0x801CDA38: nop

    // 0x801CDA3C: lw          $t9, 0xAC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XAC);
    // 0x801CDA40: slti        $t1, $t9, 0x0
    ctx->r9 = SIGNED(ctx->r25) < 0X0 ? 1 : 0;
    // 0x801CDA44: xori        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 ^ 0X1;
    // 0x801CDA48: addu        $a2, $a3, $t1
    ctx->r6 = ADD32(ctx->r7, ctx->r9);
    // 0x801CDA4C: andi        $t2, $a2, 0xFF
    ctx->r10 = ctx->r6 & 0XFF;
    // 0x801CDA50: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
L_801CDA54:
    // 0x801CDA54: jr          $ra
    // 0x801CDA58: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    TRACE_RETURN()
    return;
    // 0x801CDA58: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
;}
RECOMP_FUNC void func_801E1210_650060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1218: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E121C: lbu         $t6, 0x6A($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X6A);
    // 0x801E1220: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E1224: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E1228: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x801E122C: lw          $t9, -0x2098($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2098);
    // 0x801E1230: jalr        $t9
    // 0x801E1234: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801E1234: nop

    after_0:
    // 0x801E1238: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E123C: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E1240: lb          $t8, 0x6B($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X6B);
    // 0x801E1244: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x801E1248: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x801E124C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x801E1250: lw          $t9, -0x2090($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2090);
    // 0x801E1254: jalr        $t9
    // 0x801E1258: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801E1258: nop

    after_1:
    // 0x801E125C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E1260: lw          $t1, 0x18($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X18);
    // 0x801E1264: bnel        $t1, $zero, L_801E1278
    if (ctx->r9 != 0) {
        // 0x801E1268: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E1278;
    }
    goto skip_0;
    // 0x801E1268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E126C: jal         0x80034ED4
    // 0x801E1270: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_2;
    // 0x801E1270: nop

    after_2:
    // 0x801E1274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E1278:
    // 0x801E1278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E127C: jr          $ra
    // 0x801E1280: nop

    TRACE_RETURN()
    return;
    // 0x801E1280: nop

;}
RECOMP_FUNC void func_801D5EE0_644D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5EE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D5EE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D5EE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D5EEC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D5EF0: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x801D5EF4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D5EF8: sb          $t6, 0xA0($a0)
    MEM_B(0XA0, ctx->r4) = ctx->r14;
    // 0x801D5EFC: sh          $zero, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = 0;
    // 0x801D5F00: sh          $t7, 0xBA($a0)
    MEM_H(0XBA, ctx->r4) = ctx->r15;
    // 0x801D5F04: sh          $zero, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = 0;
    // 0x801D5F08: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801D5F0C: jal         0x8000DD58
    // 0x801D5F10: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801D5F10: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x801D5F14: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x801D5F18: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801D5F1C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801D5F20: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801D5F24: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x801D5F28: addiu       $t0, $t9, -0xA0
    ctx->r8 = ADD32(ctx->r25, -0XA0);
    // 0x801D5F2C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x801D5F30: sh          $t0, 0xBE($a2)
    MEM_H(0XBE, ctx->r6) = ctx->r8;
    // 0x801D5F34: jal         0x8000DD58
    // 0x801D5F38: sh          $zero, 0xC0($a2)
    MEM_H(0XC0, ctx->r6) = 0;
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801D5F38: sh          $zero, 0xC0($a2)
    MEM_H(0XC0, ctx->r6) = 0;
    after_1:
    // 0x801D5F3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D5F40: sll         $t2, $v0, 5
    ctx->r10 = S32(ctx->r2 << 5);
    // 0x801D5F44: addiu       $t3, $t2, -0x10
    ctx->r11 = ADD32(ctx->r10, -0X10);
    // 0x801D5F48: sh          $t3, 0xC2($a0)
    MEM_H(0XC2, ctx->r4) = ctx->r11;
    // 0x801D5F4C: jal         0x801D5F64
    // 0x801D5F50: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_801D5F64_644DB4(rdram, ctx);
        goto after_2;
    // 0x801D5F50: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x801D5F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D5F58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D5F5C: jr          $ra
    // 0x801D5F60: nop

    TRACE_RETURN()
    return;
    // 0x801D5F60: nop

;}
RECOMP_FUNC void func_801D8784_6475D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8784: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D8788: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D878C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801D8790: lwc1        $f4, 0xAC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x801D8794: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x801D8798: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D879C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D87A0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D87A4: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x801D87A8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D87AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D87B0: lwc1        $f18, 0x5C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x801D87B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D87B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D87BC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801D87C0: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801D87C4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D87C8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D87CC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801D87D0: lwc1        $f6, 0x64($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D87D4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801D87D8: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801D87DC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D87E0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D87E4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D87E8: jal         0x801DF9EC
    // 0x801D87EC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_0;
    // 0x801D87EC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801D87F0: jal         0x801D8428
    // 0x801D87F4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_801D8428_647278(rdram, ctx);
        goto after_1;
    // 0x801D87F4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x801D87F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801D87FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D8800: jr          $ra
    // 0x801D8804: nop

    TRACE_RETURN()
    return;
    // 0x801D8804: nop

;}
RECOMP_FUNC void func_801D3A54_6428A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3A54: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D3A58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D3A5C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D3A60: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801D3A64: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D3A68: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801D3A6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D3A70: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801D3A74: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801D3A78: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D3A7C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D3A80: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D3A84: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801D3A88: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D3A8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D3A90: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D3A94: lwc1        $f6, 0x64($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D3A98: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801D3A9C: swc1        $f8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f8.u32l;
    // 0x801D3AA0: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x801D3AA4: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801D3AA8: swc1        $f8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f8.u32l;
    // 0x801D3AAC: ldc1        $f18, -0xF60($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0XF60);
    // 0x801D3AB0: add.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f16.d + ctx->f18.d;
    // 0x801D3AB4: trunc.w.d   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x801D3AB8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x801D3ABC: nop

    // 0x801D3AC0: bnel        $v0, $zero, L_801D3AD8
    if (ctx->r2 != 0) {
        // 0x801D3AC4: mtc1        $v0, $f8
        ctx->f8.u32l = ctx->r2;
            goto L_801D3AD8;
    }
    goto skip_0;
    // 0x801D3AC4: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    skip_0:
    // 0x801D3AC8: jal         0x801D3BF0
    // 0x801D3ACC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_801D3BF0_642A40(rdram, ctx);
        goto after_0;
    // 0x801D3ACC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801D3AD0: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x801D3AD4: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
L_801D3AD8:
    // 0x801D3AD8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D3ADC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D3AE0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D3AE4: sw          $v0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r2;
    // 0x801D3AE8: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x801D3AEC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801D3AF0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801D3AF4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x801D3AF8: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801D3AFC: lui         $a2, 0x4110
    ctx->r6 = S32(0X4110 << 16);
    // 0x801D3B00: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x801D3B04: jal         0x8000EE50
    // 0x801D3B08: nop

    func_8000EE50_FA50(rdram, ctx);
        goto after_1;
    // 0x801D3B08: nop

    after_1:
    // 0x801D3B0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D3B10: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D3B14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801D3B18: jr          $ra
    // 0x801D3B1C: nop

    TRACE_RETURN()
    return;
    // 0x801D3B1C: nop

;}
RECOMP_FUNC void func_801DEDB0_64DC00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEDB0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DEDB4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DEDB8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801DEDBC: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801DEDC0: addiu       $t6, $t6, 0xE90
    ctx->r14 = ADD32(ctx->r14, 0XE90);
    // 0x801DEDC4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DEDC8: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801DEDCC: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801DEDD0: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801DEDD4: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x801DEDD8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DEDDC: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801DEDE0: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801DEDE4: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801DEDE8: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x801DEDEC: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801DEDF0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801DEDF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DEDF8: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    // 0x801DEDFC: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    // 0x801DEE00: lui         $a3, 0x43DC
    ctx->r7 = S32(0X43DC << 16);
    // 0x801DEE04: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DEE08: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DEE0C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DEE10: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DEE14: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DEE18: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DEE1C: jal         0x801E8378
    // 0x801DEE20: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801DEE20: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801DEE24: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DEE28: jal         0x800352EC
    // 0x801DEE2C: addiu       $a0, $a0, -0x11BC
    ctx->r4 = ADD32(ctx->r4, -0X11BC);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801DEE2C: addiu       $a0, $a0, -0x11BC
    ctx->r4 = ADD32(ctx->r4, -0X11BC);
    after_1:
    // 0x801DEE30: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DEE34: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801DEE38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801DEE3C: jr          $ra
    // 0x801DEE40: nop

    TRACE_RETURN()
    return;
    // 0x801DEE40: nop

;}
RECOMP_FUNC void func_801CB4A4_63A2F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB4A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB4A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB4AC: jal         0x80003478
    // 0x801CB4B0: nop

    func_80003478_4078(rdram, ctx);
        goto after_0;
    // 0x801CB4B0: nop

    after_0:
    // 0x801CB4B4: jal         0x80004240
    // 0x801CB4B8: nop

    func_80004240_4E40(rdram, ctx);
        goto after_1;
    // 0x801CB4B8: nop

    after_1:
    // 0x801CB4BC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CB4C0: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CB4C4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB4C8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801CB4CC: jal         0x8000A0F0
    // 0x801CB4D0: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    func_8000A0F0_ACF0(rdram, ctx);
        goto after_2;
    // 0x801CB4D0: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    after_2:
    // 0x801CB4D4: jal         0x80035B50
    // 0x801CB4D8: nop

    func_80035B50_36750(rdram, ctx);
        goto after_3;
    // 0x801CB4D8: nop

    after_3:
    // 0x801CB4DC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB4E0: jal         0x8003488C
    // 0x801CB4E4: addiu       $a0, $a0, -0x4A60
    ctx->r4 = ADD32(ctx->r4, -0X4A60);
    func_8003488C_3548C(rdram, ctx);
        goto after_4;
    // 0x801CB4E4: addiu       $a0, $a0, -0x4A60
    ctx->r4 = ADD32(ctx->r4, -0X4A60);
    after_4:
    // 0x801CB4E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB4EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB4F0: jr          $ra
    // 0x801CB4F4: nop

    TRACE_RETURN()
    return;
    // 0x801CB4F4: nop

;}
RECOMP_FUNC void func_801CFC2C_63EA7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CFC2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CFC30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CFC34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CFC38: lb          $t6, 0x9F($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X9F);
    // 0x801CFC3C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x801CFC40: beql        $t7, $zero, L_801CFCB4
    if (ctx->r15 == 0) {
        // 0x801CFC44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CFCB4;
    }
    goto skip_0;
    // 0x801CFC44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801CFC48: lw          $t9, 0xB4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XB4);
    // 0x801CFC4C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801CFC50: sb          $t8, 0x9E($a0)
    MEM_B(0X9E, ctx->r4) = ctx->r24;
    // 0x801CFC54: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x801CFC58: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CFC5C: ldc1        $f8, -0x1130($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1130);
    // 0x801CFC60: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CFC64: lwc1        $f12, 0x64($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801CFC68: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CFC6C: cvt.d.s     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.d = CVT_D_S(ctx->f12.fl);
    // 0x801CFC70: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801CFC74: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801CFC78: swc1        $f16, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f16.u32l;
    // 0x801CFC7C: ldc1        $f4, -0x1128($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X1128);
    // 0x801CFC80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CFC84: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x801CFC88: jal         0x801CD480
    // 0x801CFC8C: cvt.s.d     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f14.fl = CVT_S_D(ctx->f6.d);
    func_801CD480_63C2D0(rdram, ctx);
        goto after_0;
    // 0x801CFC8C: cvt.s.d     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f14.fl = CVT_S_D(ctx->f6.d);
    after_0:
    // 0x801CFC90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CFC94: addiu       $t1, $v0, 0x4000
    ctx->r9 = ADD32(ctx->r2, 0X4000);
    // 0x801CFC98: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x801CFC9C: lw          $t4, 0xC8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC8);
    // 0x801CFCA0: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x801CFCA4: subu        $v1, $t3, $t4
    ctx->r3 = SUB32(ctx->r11, ctx->r12);
    // 0x801CFCA8: srl         $t5, $v1, 1
    ctx->r13 = S32(U32(ctx->r3) >> 1);
    // 0x801CFCAC: sw          $t5, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r13;
    // 0x801CFCB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CFCB4:
    // 0x801CFCB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CFCB8: jr          $ra
    // 0x801CFCBC: nop

    TRACE_RETURN()
    return;
    // 0x801CFCBC: nop

;}
RECOMP_FUNC void func_801D575C_6445AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D575C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D5760: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
    // 0x801D5764: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D5768: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D576C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801D5770: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D5774: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x801D5778: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D577C: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D5780: lui         $at, 0x4089
    ctx->r1 = S32(0X4089 << 16);
    // 0x801D5784: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x801D5788: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D578C: cvt.d.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.d = CVT_D_W(ctx->f18.u32l);
    // 0x801D5790: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801D5794: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801D5798: sub.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f6.d - ctx->f2.d;
    // 0x801D579C: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801D57A0: lwc1        $f10, 0x60($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801D57A4: trunc.w.d   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x801D57A8: swc1        $f16, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f16.u32l;
    // 0x801D57AC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x801D57B0: swc1        $f4, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f4.u32l;
    // 0x801D57B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801D57B8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D57BC: nop

    // 0x801D57C0: cvt.d.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D57C4: div.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801D57C8: add.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f16.d + ctx->f2.d;
    // 0x801D57CC: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D57D0: trunc.w.d   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x801D57D4: swc1        $f8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f8.u32l;
    // 0x801D57D8: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x801D57DC: nop

    // 0x801D57E0: bne         $v0, $zero, L_801D57EC
    if (ctx->r2 != 0) {
        // 0x801D57E4: nop
    
            goto L_801D57EC;
    }
    // 0x801D57E4: nop

    // 0x801D57E8: sb          $t8, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r24;
L_801D57EC:
    // 0x801D57EC: jr          $ra
    // 0x801D57F0: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801D57F0: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801E3EA8_652CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3EA8: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x801E3EAC: sw          $a3, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r7;
    // 0x801E3EB0: lbu         $t7, 0x15F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X15F);
    // 0x801E3EB4: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x801E3EB8: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x801E3EBC: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x801E3EC0: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x801E3EC4: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x801E3EC8: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x801E3ECC: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x801E3ED0: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x801E3ED4: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x801E3ED8: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x801E3EDC: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x801E3EE0: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x801E3EE4: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x801E3EE8: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x801E3EEC: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x801E3EF0: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x801E3EF4: sw          $a2, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r6;
    // 0x801E3EF8: lbu         $t6, 0x315($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X315);
    // 0x801E3EFC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x801E3F00: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x801E3F04: beq         $t7, $zero, L_801E45E4
    if (ctx->r15 == 0) {
        // 0x801E3F08: sb          $t6, 0x137($sp)
        MEM_B(0X137, ctx->r29) = ctx->r14;
            goto L_801E45E4;
    }
    // 0x801E3F08: sb          $t6, 0x137($sp)
    MEM_B(0X137, ctx->r29) = ctx->r14;
    // 0x801E3F0C: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x801E3F10: mtc1        $at, $f31
    ctx->f_odd[(31 - 1) * 2] = ctx->r1;
    // 0x801E3F14: lui         $at, 0x3FE8
    ctx->r1 = S32(0X3FE8 << 16);
    // 0x801E3F18: mtc1        $at, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r1;
    // 0x801E3F1C: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x801E3F20: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x801E3F24: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E3F28: lui         $s5, 0x801F
    ctx->r21 = S32(0X801F << 16);
    // 0x801E3F2C: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x801E3F30: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x801E3F34: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x801E3F38: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x801E3F3C: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x801E3F40: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801E3F44: addiu       $s5, $s5, -0x1D70
    ctx->r21 = ADD32(ctx->r21, -0X1D70);
    // 0x801E3F48: addiu       $fp, $sp, 0x120
    ctx->r30 = ADD32(ctx->r29, 0X120);
    // 0x801E3F4C: addiu       $s6, $sp, 0xAC
    ctx->r22 = ADD32(ctx->r29, 0XAC);
    // 0x801E3F50: lbu         $t8, 0x15F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X15F);
L_801E3F54:
    // 0x801E3F54: lw          $t0, 0x158($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X158);
    // 0x801E3F58: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801E3F5C: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x801E3F60: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801E3F64: sb          $t9, 0x15F($sp)
    MEM_B(0X15F, ctx->r29) = ctx->r25;
    // 0x801E3F68: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x801E3F6C: lw          $s2, 0x0($t3)
    ctx->r18 = MEM_W(ctx->r11, 0X0);
    // 0x801E3F70: lbu         $v0, 0x74($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X74);
    // 0x801E3F74: andi        $t4, $v0, 0x20
    ctx->r12 = ctx->r2 & 0X20;
    // 0x801E3F78: beql        $t4, $zero, L_801E45DC
    if (ctx->r12 == 0) {
        // 0x801E3F7C: lbu         $t3, 0x15F($sp)
        ctx->r11 = MEM_BU(ctx->r29, 0X15F);
            goto L_801E45DC;
    }
    goto skip_0;
    // 0x801E3F7C: lbu         $t3, 0x15F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X15F);
    skip_0:
    // 0x801E3F80: lh          $t5, 0x0($s3)
    ctx->r13 = MEM_H(ctx->r19, 0X0);
    // 0x801E3F84: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801E3F88: lbu         $s4, 0x75($s2)
    ctx->r20 = MEM_BU(ctx->r18, 0X75);
    // 0x801E3F8C: andi        $t6, $t5, 0x400
    ctx->r14 = ctx->r13 & 0X400;
    // 0x801E3F90: beql        $t6, $zero, L_801E4550
    if (ctx->r14 == 0) {
        // 0x801E3F94: lbu         $t9, 0x137($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X137);
            goto L_801E4550;
    }
    goto skip_1;
    // 0x801E3F94: lbu         $t9, 0x137($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X137);
    skip_1:
    // 0x801E3F98: lwc1        $f4, 0xEC($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0XEC);
    // 0x801E3F9C: lw          $v1, 0x18($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X18);
    // 0x801E3FA0: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x801E3FA4: swc1        $f4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f4.u32l;
    // 0x801E3FA8: lwc1        $f6, 0xF0($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XF0);
    // 0x801E3FAC: addiu       $t1, $sp, 0xB0
    ctx->r9 = ADD32(ctx->r29, 0XB0);
    // 0x801E3FB0: addiu       $t0, $sp, 0xB4
    ctx->r8 = ADD32(ctx->r29, 0XB4);
    // 0x801E3FB4: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
    // 0x801E3FB8: lwc1        $f8, 0xF4($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0XF4);
    // 0x801E3FBC: swc1        $f8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
    // 0x801E3FC0: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801E3FC4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E3FC8: mul.d       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f22.d);
    // 0x801E3FCC: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x801E3FD0: cvt.d.s     $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.d = CVT_D_S(ctx->f0.fl);
    // 0x801E3FD4: mul.d       $f4, $f20, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f30.d); 
    ctx->f4.d = MUL_D(ctx->f20.d, ctx->f30.d);
    // 0x801E3FD8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E3FDC: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x801E3FE0: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x801E3FE4: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E3FE8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E3FEC: mul.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x801E3FF0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E3FF4: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    // 0x801E3FF8: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E3FFC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E4000: mul.d       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f22.d);
    // 0x801E4004: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E4008: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x801E400C: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E4010: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E4014: mul.d       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f22.d);
    // 0x801E4018: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E401C: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
    // 0x801E4020: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E4024: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E4028: mul.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x801E402C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E4030: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x801E4034: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E4038: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E403C: mul.d       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f22.d);
    // 0x801E4040: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E4044: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    // 0x801E4048: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E404C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E4050: mul.d       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f22.d);
    // 0x801E4054: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E4058: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    // 0x801E405C: lhu         $t7, 0x14($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X14);
    // 0x801E4060: sh          $t7, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r15;
    // 0x801E4064: lhu         $t8, 0x16($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X16);
    // 0x801E4068: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
    // 0x801E406C: sh          $t8, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r24;
    // 0x801E4070: lhu         $t9, 0x18($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X18);
    // 0x801E4074: andi        $a1, $t8, 0xFFFF
    ctx->r5 = ctx->r24 & 0XFFFF;
    // 0x801E4078: sh          $t9, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r25;
    // 0x801E407C: lwc1        $f8, 0x84($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X84);
    // 0x801E4080: andi        $a2, $t9, 0xFFFF
    ctx->r6 = ctx->r25 & 0XFFFF;
    // 0x801E4084: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x801E4088: lwc1        $f10, 0x88($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X88);
    // 0x801E408C: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E4090: swc1        $f10, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f10.u32l;
    // 0x801E4094: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E4098: lwc1        $f16, 0x8C($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X8C);
    // 0x801E409C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E40A0: swc1        $f16, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f16.u32l;
    // 0x801E40A4: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801E40A8: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801E40AC: c.eq.s      $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f24.fl == ctx->f10.fl;
    // 0x801E40B0: nop

    // 0x801E40B4: bc1tl       L_801E40FC
    if (c1cs) {
        // 0x801E40B8: srl         $t2, $s4, 1
        ctx->r10 = S32(U32(ctx->r20) >> 1);
            goto L_801E40FC;
    }
    goto skip_2;
    // 0x801E40B8: srl         $t2, $s4, 1
    ctx->r10 = S32(U32(ctx->r20) >> 1);
    skip_2:
    // 0x801E40BC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801E40C0: jal         0x80033898
    // 0x801E40C4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E40C4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x801E40C8: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801E40CC: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E40D0: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801E40D4: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E40D8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E40DC: lwc1        $f18, 0xB4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801E40E0: lwc1        $f16, 0xD0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801E40E4: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801E40E8: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    // 0x801E40EC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E40F0: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x801E40F4: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x801E40F8: srl         $t2, $s4, 1
    ctx->r10 = S32(U32(ctx->r20) >> 1);
L_801E40FC:
    // 0x801E40FC: beq         $t2, $zero, L_801E4284
    if (ctx->r10 == 0) {
        // 0x801E4100: or          $s0, $s4, $zero
        ctx->r16 = ctx->r20 | 0;
            goto L_801E4284;
    }
    // 0x801E4100: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x801E4104: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801E4108: lwc1        $f6, 0x78($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X78);
    // 0x801E410C: lwc1        $f16, 0xA4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801E4110: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E4114: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801E4118: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801E411C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x801E4120: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E4124: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x801E4128: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    // 0x801E412C: addiu       $t3, $sp, 0x100
    ctx->r11 = ADD32(ctx->r29, 0X100);
    // 0x801E4130: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    // 0x801E4134: lwc1        $f18, 0x7C($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X7C);
    // 0x801E4138: addiu       $t4, $sp, 0xF0
    ctx->r12 = ADD32(ctx->r29, 0XF0);
    // 0x801E413C: addiu       $t5, $sp, 0xE0
    ctx->r13 = ADD32(ctx->r29, 0XE0);
    // 0x801E4140: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801E4144: addiu       $t6, $sp, 0xD0
    ctx->r14 = ADD32(ctx->r29, 0XD0);
    // 0x801E4148: addiu       $t7, $sp, 0xC4
    ctx->r15 = ADD32(ctx->r29, 0XC4);
    // 0x801E414C: addiu       $t8, $sp, 0xB8
    ctx->r24 = ADD32(ctx->r29, 0XB8);
    // 0x801E4150: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x801E4154: lwc1        $f6, 0x80($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X80);
    // 0x801E4158: c.lt.s      $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f4.fl < ctx->f24.fl;
    // 0x801E415C: lwc1        $f0, 0xBC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801E4160: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801E4164: bc1f        L_801E4178
    if (!c1cs) {
        // 0x801E4168: swc1        $f10, 0xC0($sp)
        MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
            goto L_801E4178;
    }
    // 0x801E4168: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x801E416C: neg.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = -ctx->f4.fl;
    // 0x801E4170: b           L_801E4190
    // 0x801E4174: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
        goto L_801E4190;
    // 0x801E4174: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
L_801E4178:
    // 0x801E4178: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E417C: lwc1        $f18, 0xE0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801E4180: div.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x801E4184: add.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x801E4188: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x801E418C: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
L_801E4190:
    // 0x801E4190: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E4194: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801E4198: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801E419C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E41A0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E41A4: jal         0x801E58A4
    // 0x801E41A8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    func_801E58A4_6546F4(rdram, ctx);
        goto after_1;
    // 0x801E41A8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_1:
    // 0x801E41AC: bne         $v0, $zero, L_801E454C
    if (ctx->r2 != 0) {
        // 0x801E41B0: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_801E454C;
    }
    // 0x801E41B0: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801E41B4: mul.d       $f6, $f20, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f26.d); 
    ctx->f6.d = MUL_D(ctx->f20.d, ctx->f26.d);
    // 0x801E41B8: addiu       $t9, $sp, 0x100
    ctx->r25 = ADD32(ctx->r29, 0X100);
    // 0x801E41BC: addiu       $t1, $sp, 0xF0
    ctx->r9 = ADD32(ctx->r29, 0XF0);
    // 0x801E41C0: addiu       $t0, $sp, 0xE0
    ctx->r8 = ADD32(ctx->r29, 0XE0);
    // 0x801E41C4: addiu       $t2, $sp, 0xD0
    ctx->r10 = ADD32(ctx->r29, 0XD0);
    // 0x801E41C8: addiu       $t3, $sp, 0xC4
    ctx->r11 = ADD32(ctx->r29, 0XC4);
    // 0x801E41CC: addiu       $t4, $sp, 0xB8
    ctx->r12 = ADD32(ctx->r29, 0XB8);
    // 0x801E41D0: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x801E41D4: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x801E41D8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x801E41DC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x801E41E0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801E41E4: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    // 0x801E41E8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801E41EC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801E41F0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x801E41F4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E41F8: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x801E41FC: jal         0x801E58A4
    // 0x801E4200: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    func_801E58A4_6546F4(rdram, ctx);
        goto after_2;
    // 0x801E4200: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    after_2:
    // 0x801E4204: bne         $v0, $zero, L_801E454C
    if (ctx->r2 != 0) {
        // 0x801E4208: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_801E454C;
    }
    // 0x801E4208: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801E420C: lwc1        $f4, 0xF8($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0XF8);
    // 0x801E4210: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E4214: ldc1        $f8, -0xB78($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XB78);
    // 0x801E4218: swc1        $f4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f4.u32l;
    // 0x801E421C: lwc1        $f16, 0xFC($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0XFC);
    // 0x801E4220: mul.d       $f6, $f20, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f20.d, ctx->f8.d);
    // 0x801E4224: addiu       $t5, $sp, 0x100
    ctx->r13 = ADD32(ctx->r29, 0X100);
    // 0x801E4228: swc1        $f16, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f16.u32l;
    // 0x801E422C: lwc1        $f18, 0x100($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X100);
    // 0x801E4230: addiu       $t6, $sp, 0xF0
    ctx->r14 = ADD32(ctx->r29, 0XF0);
    // 0x801E4234: addiu       $t7, $sp, 0xE0
    ctx->r15 = ADD32(ctx->r29, 0XE0);
    // 0x801E4238: addiu       $t8, $sp, 0xD0
    ctx->r24 = ADD32(ctx->r29, 0XD0);
    // 0x801E423C: addiu       $t9, $sp, 0xC4
    ctx->r25 = ADD32(ctx->r29, 0XC4);
    // 0x801E4240: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x801E4244: addiu       $t1, $sp, 0xB8
    ctx->r9 = ADD32(ctx->r29, 0XB8);
    // 0x801E4248: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x801E424C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801E4250: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    // 0x801E4254: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801E4258: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801E425C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801E4260: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801E4264: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x801E4268: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E426C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x801E4270: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    // 0x801E4274: jal         0x801E58A4
    // 0x801E4278: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    func_801E58A4_6546F4(rdram, ctx);
        goto after_3;
    // 0x801E4278: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x801E427C: b           L_801E454C
    // 0x801E4280: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
        goto L_801E454C;
    // 0x801E4280: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_801E4284:
    // 0x801E4284: beql        $s4, $zero, L_801E4444
    if (ctx->r20 == 0) {
        // 0x801E4288: lwc1        $f6, 0x78($s2)
        ctx->f6.u32l = MEM_W(ctx->r18, 0X78);
            goto L_801E4444;
    }
    goto skip_3;
    // 0x801E4288: lwc1        $f6, 0x78($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X78);
    skip_3:
    // 0x801E428C: lwc1        $f4, 0x90($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X90);
    // 0x801E4290: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801E4294: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801E4298: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x801E429C: lwc1        $f16, 0x94($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X94);
    // 0x801E42A0: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E42A4: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801E42A8: swc1        $f16, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f16.u32l;
    // 0x801E42AC: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E42B0: lwc1        $f18, 0x98($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X98);
    // 0x801E42B4: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x801E42B8: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801E42BC: swc1        $f18, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f18.u32l;
    // 0x801E42C0: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801E42C4: addiu       $t0, $sp, 0xB0
    ctx->r8 = ADD32(ctx->r29, 0XB0);
    // 0x801E42C8: addiu       $t2, $sp, 0xB4
    ctx->r10 = ADD32(ctx->r29, 0XB4);
    // 0x801E42CC: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801E42D0: c.eq.s      $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f24.fl == ctx->f16.fl;
    // 0x801E42D4: nop

    // 0x801E42D8: bc1tl       L_801E4310
    if (c1cs) {
        // 0x801E42DC: lwc1        $f18, 0xA0($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
            goto L_801E4310;
    }
    goto skip_4;
    // 0x801E42DC: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    skip_4:
    // 0x801E42E0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801E42E4: jal         0x80033898
    // 0x801E42E8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_80033898_34498(rdram, ctx);
        goto after_4;
    // 0x801E42E8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_4:
    // 0x801E42EC: jal         0x8001D394
    // 0x801E42F0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_8001D394_1DF94(rdram, ctx);
        goto after_5;
    // 0x801E42F0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_5:
    // 0x801E42F4: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x801E42F8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x801E42FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E4300: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E4304: jal         0x8001DB04
    // 0x801E4308: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_6;
    // 0x801E4308: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x801E430C: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
L_801E4310:
    // 0x801E4310: lwc1        $f8, 0x78($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X78);
    // 0x801E4314: lwc1        $f4, 0xA4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801E4318: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x801E431C: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x801E4320: lwc1        $f18, 0xA8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801E4324: addiu       $t3, $sp, 0xB0
    ctx->r11 = ADD32(ctx->r29, 0XB0);
    // 0x801E4328: addiu       $t4, $sp, 0xB4
    ctx->r12 = ADD32(ctx->r29, 0XB4);
    // 0x801E432C: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x801E4330: lwc1        $f10, 0x7C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X7C);
    // 0x801E4334: mul.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x801E4338: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x801E433C: swc1        $f16, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f16.u32l;
    // 0x801E4340: lwc1        $f8, 0x80($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X80);
    // 0x801E4344: c.lt.s      $f16, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f16.fl < ctx->f24.fl;
    // 0x801E4348: swc1        $f24, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f24.u32l;
    // 0x801E434C: mul.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x801E4350: swc1        $f24, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f24.u32l;
    // 0x801E4354: mul.d       $f18, $f10, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f28.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f28.d);
    // 0x801E4358: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    // 0x801E435C: cvt.s.d     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f8.fl = CVT_S_D(ctx->f18.d);
    // 0x801E4360: bc1f        L_801E4378
    if (!c1cs) {
        // 0x801E4364: swc1        $f8, 0xB0($sp)
        MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
            goto L_801E4378;
    }
    // 0x801E4364: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x801E4368: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801E436C: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    // 0x801E4370: swc1        $f4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f4.u32l;
    // 0x801E4374: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
L_801E4378:
    // 0x801E4378: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801E437C: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801E4380: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801E4384: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E4388: jal         0x80033898
    // 0x801E438C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_80033898_34498(rdram, ctx);
        goto after_7;
    // 0x801E438C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_7:
    // 0x801E4390: lwc1        $f18, 0xB0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E4394: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801E4398: lwc1        $f14, 0xBC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801E439C: lwc1        $f12, 0xB8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801E43A0: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x801E43A4: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E43A8: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801E43AC: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801E43B0: cvt.d.s     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.d = CVT_D_S(ctx->f12.fl);
    // 0x801E43B4: add.s       $f10, $f18, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801E43B8: mul.d       $f12, $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f28.d); 
    ctx->f12.d = MUL_D(ctx->f12.d, ctx->f28.d);
    // 0x801E43BC: lwc1        $f18, 0xD0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801E43C0: cvt.d.s     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.d = CVT_D_S(ctx->f14.fl);
    // 0x801E43C4: addiu       $t5, $sp, 0xB0
    ctx->r13 = ADD32(ctx->r29, 0XB0);
    // 0x801E43C8: addiu       $t6, $sp, 0xB4
    ctx->r14 = ADD32(ctx->r29, 0XB4);
    // 0x801E43CC: swc1        $f10, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f10.u32l;
    // 0x801E43D0: add.s       $f18, $f8, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x801E43D4: swc1        $f16, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f16.u32l;
    // 0x801E43D8: swc1        $f24, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f24.u32l;
    // 0x801E43DC: sub.d       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f12.d); 
    ctx->f12.d = ctx->f14.d - ctx->f12.d;
    // 0x801E43E0: swc1        $f18, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f18.u32l;
    // 0x801E43E4: swc1        $f24, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f24.u32l;
    // 0x801E43E8: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801E43EC: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x801E43F0: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801E43F4: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801E43F8: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x801E43FC: swc1        $f12, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f12.u32l;
    // 0x801E4400: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801E4404: jal         0x80033898
    // 0x801E4408: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_8;
    // 0x801E4408: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_8:
    // 0x801E440C: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E4410: lwc1        $f4, 0xF0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801E4414: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E4418: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801E441C: add.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801E4420: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801E4424: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801E4428: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801E442C: swc1        $f16, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f16.u32l;
    // 0x801E4430: add.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801E4434: swc1        $f18, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f18.u32l;
    // 0x801E4438: b           L_801E4458
    // 0x801E443C: swc1        $f16, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f16.u32l;
        goto L_801E4458;
    // 0x801E443C: swc1        $f16, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f16.u32l;
    // 0x801E4440: lwc1        $f6, 0x78($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X78);
L_801E4444:
    // 0x801E4444: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801E4448: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x801E444C: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801E4450: mul.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x801E4454: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
L_801E4458:
    // 0x801E4458: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801E445C: lwc1        $f16, 0xC4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801E4460: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
    // 0x801E4464: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801E4468: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x801E446C: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801E4470: lw          $v0, -0x1D4C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D4C);
    // 0x801E4474: addiu       $t8, $sp, 0x100
    ctx->r24 = ADD32(ctx->r29, 0X100);
    // 0x801E4478: addiu       $t9, $sp, 0xF0
    ctx->r25 = ADD32(ctx->r29, 0XF0);
    // 0x801E447C: addiu       $t1, $sp, 0xE0
    ctx->r9 = ADD32(ctx->r29, 0XE0);
    // 0x801E4480: addiu       $t0, $sp, 0xD0
    ctx->r8 = ADD32(ctx->r29, 0XD0);
    // 0x801E4484: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801E4488: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x801E448C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801E4490: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801E4494: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x801E4498: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x801E449C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E44A0: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x801E44A4: jalr        $v0
    // 0x801E44A8: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x801E44A8: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    after_9:
    // 0x801E44AC: bne         $v0, $zero, L_801E454C
    if (ctx->r2 != 0) {
        // 0x801E44B0: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_801E454C;
    }
    // 0x801E44B0: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801E44B4: lwc1        $f10, 0x120($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X120);
    // 0x801E44B8: lwc1        $f18, 0x110($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X110);
    // 0x801E44BC: lwc1        $f8, 0x100($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801E44C0: swc1        $f10, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f10.u32l;
    // 0x801E44C4: mul.d       $f10, $f20, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f26.d); 
    ctx->f10.d = MUL_D(ctx->f20.d, ctx->f26.d);
    // 0x801E44C8: swc1        $f18, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f18.u32l;
    // 0x801E44CC: swc1        $f8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f8.u32l;
    // 0x801E44D0: lwc1        $f4, 0xF8($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0XF8);
    // 0x801E44D4: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
    // 0x801E44D8: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801E44DC: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    // 0x801E44E0: lwc1        $f16, 0xFC($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0XFC);
    // 0x801E44E4: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x801E44E8: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x801E44EC: swc1        $f16, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f16.u32l;
    // 0x801E44F0: lwc1        $f6, 0x100($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X100);
    // 0x801E44F4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801E44F8: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801E44FC: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x801E4500: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x801E4504: lw          $v0, -0x1D4C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D4C);
    // 0x801E4508: addiu       $t5, $sp, 0x100
    ctx->r13 = ADD32(ctx->r29, 0X100);
    // 0x801E450C: addiu       $t6, $sp, 0xF0
    ctx->r14 = ADD32(ctx->r29, 0XF0);
    // 0x801E4510: addiu       $t7, $sp, 0xE0
    ctx->r15 = ADD32(ctx->r29, 0XE0);
    // 0x801E4514: addiu       $t8, $sp, 0xD0
    ctx->r24 = ADD32(ctx->r29, 0XD0);
    // 0x801E4518: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x801E451C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801E4520: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801E4524: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801E4528: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801E452C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801E4530: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x801E4534: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E4538: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x801E453C: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    // 0x801E4540: jalr        $v0
    // 0x801E4544: swc1        $f6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x801E4544: swc1        $f6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x801E4548: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_801E454C:
    // 0x801E454C: lbu         $t9, 0x137($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X137);
L_801E4550:
    // 0x801E4550: beql        $t9, $zero, L_801E45C8
    if (ctx->r25 == 0) {
        // 0x801E4554: lb          $t8, 0x74($s2)
        ctx->r24 = MEM_B(ctx->r18, 0X74);
            goto L_801E45C8;
    }
    goto skip_5;
    // 0x801E4554: lb          $t8, 0x74($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X74);
    skip_5:
    // 0x801E4558: bne         $v1, $zero, L_801E45C4
    if (ctx->r3 != 0) {
        // 0x801E455C: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_801E45C4;
    }
    // 0x801E455C: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x801E4560: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_801E4564:
    // 0x801E4564: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x801E4568: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x801E456C: addu        $t2, $s3, $t0
    ctx->r10 = ADD32(ctx->r19, ctx->r8);
    // 0x801E4570: lw          $s1, 0x2D0($t2)
    ctx->r17 = MEM_W(ctx->r10, 0X2D0);
    // 0x801E4574: sll         $t5, $s4, 2
    ctx->r13 = S32(ctx->r20 << 2);
    // 0x801E4578: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x801E457C: lb          $t3, 0x74($s1)
    ctx->r11 = MEM_B(ctx->r17, 0X74);
    // 0x801E4580: addu        $t6, $s5, $t5
    ctx->r14 = ADD32(ctx->r21, ctx->r13);
    // 0x801E4584: andi        $t4, $t3, 0x80
    ctx->r12 = ctx->r11 & 0X80;
    // 0x801E4588: bne         $t4, $zero, L_801E45A8
    if (ctx->r12 != 0) {
        // 0x801E458C: nop
    
            goto L_801E45A8;
    }
    // 0x801E458C: nop

    // 0x801E4590: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x801E4594: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E4598: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E459C: jalr        $t9
    // 0x801E45A0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x801E45A0: nop

    after_11:
    // 0x801E45A4: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_801E45A8:
    // 0x801E45A8: bne         $v1, $zero, L_801E45B8
    if (ctx->r3 != 0) {
        // 0x801E45AC: nop
    
            goto L_801E45B8;
    }
    // 0x801E45AC: nop

    // 0x801E45B0: bnel        $s0, $zero, L_801E4564
    if (ctx->r16 != 0) {
        // 0x801E45B4: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_801E4564;
    }
    goto skip_6;
    // 0x801E45B4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_6:
L_801E45B8:
    // 0x801E45B8: beq         $v1, $zero, L_801E45C4
    if (ctx->r3 == 0) {
        // 0x801E45BC: addiu       $t7, $zero, -0x80
        ctx->r15 = ADD32(0, -0X80);
            goto L_801E45C4;
    }
    // 0x801E45BC: addiu       $t7, $zero, -0x80
    ctx->r15 = ADD32(0, -0X80);
    // 0x801E45C0: sb          $t7, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r15;
L_801E45C4:
    // 0x801E45C4: lb          $t8, 0x74($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X74);
L_801E45C8:
    // 0x801E45C8: sltu        $t1, $zero, $v1
    ctx->r9 = 0 < ctx->r3 ? 1 : 0;
    // 0x801E45CC: sll         $t0, $t1, 7
    ctx->r8 = S32(ctx->r9 << 7);
    // 0x801E45D0: or          $t2, $t8, $t0
    ctx->r10 = ctx->r24 | ctx->r8;
    // 0x801E45D4: sb          $t2, 0x74($s2)
    MEM_B(0X74, ctx->r18) = ctx->r10;
    // 0x801E45D8: lbu         $t3, 0x15F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X15F);
L_801E45DC:
    // 0x801E45DC: bnel        $t3, $zero, L_801E3F54
    if (ctx->r11 != 0) {
        // 0x801E45E0: lbu         $t8, 0x15F($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X15F);
            goto L_801E3F54;
    }
    goto skip_7;
    // 0x801E45E0: lbu         $t8, 0x15F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X15F);
    skip_7:
L_801E45E4:
    // 0x801E45E4: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x801E45E8: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x801E45EC: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x801E45F0: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x801E45F4: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x801E45F8: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x801E45FC: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x801E4600: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x801E4604: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x801E4608: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x801E460C: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x801E4610: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x801E4614: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x801E4618: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x801E461C: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x801E4620: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x801E4624: jr          $ra
    // 0x801E4628: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    TRACE_RETURN()
    return;
    // 0x801E4628: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void func_801E09A4_64F7F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E09A4: lwc1        $f0, 0x7C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x801E09A8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E09AC: ldc1        $f2, -0xC50($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0XC50);
    // 0x801E09B0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E09B4: swc1        $f0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->f0.u32l;
    // 0x801E09B8: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x801E09BC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801E09C0: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x801E09C4: lwc1        $f0, 0x80($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X80);
    // 0x801E09C8: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801E09CC: swc1        $f0, 0x84($a1)
    MEM_W(0X84, ctx->r5) = ctx->f0.u32l;
    // 0x801E09D0: mul.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x801E09D4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E09D8: swc1        $f18, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f18.u32l;
    // 0x801E09DC: lwc1        $f0, 0x84($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X84);
    // 0x801E09E0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E09E4: swc1        $f0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->f0.u32l;
    // 0x801E09E8: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x801E09EC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801E09F0: jr          $ra
    // 0x801E09F4: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x801E09F4: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_801D0C84_63FAD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0C84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D0C88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D0C8C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D0C90: sb          $t6, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r14;
    // 0x801D0C94: lh          $t7, 0x0($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X0);
    // 0x801D0C98: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801D0C9C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D0CA0: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x801D0CA4: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x801D0CA8: lb          $v0, 0x9F($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X9F);
    // 0x801D0CAC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801D0CB0: addiu       $t4, $zero, 0x3A98
    ctx->r12 = ADD32(0, 0X3A98);
    // 0x801D0CB4: ori         $t1, $v0, 0xC0
    ctx->r9 = ctx->r2 | 0XC0;
    // 0x801D0CB8: andi        $t2, $t1, 0xFFCE
    ctx->r10 = ctx->r9 & 0XFFCE;
    // 0x801D0CBC: sb          $t2, 0x9F($a0)
    MEM_B(0X9F, ctx->r4) = ctx->r10;
    // 0x801D0CC0: sb          $t3, 0xC4($a0)
    MEM_B(0XC4, ctx->r4) = ctx->r11;
    // 0x801D0CC4: sw          $t4, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r12;
    // 0x801D0CC8: swc1        $f0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f0.u32l;
    // 0x801D0CCC: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801D0CD0: lw          $v1, 0x31C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X31C);
    // 0x801D0CD4: lui         $at, 0xFFCF
    ctx->r1 = S32(0XFFCF << 16);
    // 0x801D0CD8: ori         $at, $at, 0x7A20
    ctx->r1 = ctx->r1 | 0X7A20;
    // 0x801D0CDC: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801D0CE0: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D0CE4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D0CE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D0CEC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D0CF0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801D0CF4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801D0CF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D0CFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D0D00: jal         0x801CBC94
    // 0x801D0D04: div.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_0;
    // 0x801D0D04: div.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    after_0:
    // 0x801D0D08: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801D0D0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D0D10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D0D14: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801D0D18: lw          $v1, 0xE4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE4);
    // 0x801D0D1C: add.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x801D0D20: lui         $t5, 0x5
    ctx->r13 = S32(0X5 << 16);
    // 0x801D0D24: ori         $t5, $t5, 0x910
    ctx->r13 = ctx->r13 | 0X910;
    // 0x801D0D28: ori         $t6, $zero, 0xEA60
    ctx->r14 = 0 | 0XEA60;
    // 0x801D0D2C: swc1        $f2, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f2.u32l;
    // 0x801D0D30: swc1        $f2, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f2.u32l;
    // 0x801D0D34: sw          $zero, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = 0;
    // 0x801D0D38: sw          $t5, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r13;
    // 0x801D0D3C: sw          $t6, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r14;
    // 0x801D0D40: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x801D0D44: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x801D0D48: sh          $zero, 0x16($v0)
    MEM_H(0X16, ctx->r2) = 0;
    // 0x801D0D4C: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x801D0D50: lh          $t7, 0x0($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X0);
    // 0x801D0D54: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x801D0D58: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x801D0D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D0D60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D0D64: jr          $ra
    // 0x801D0D68: nop

    TRACE_RETURN()
    return;
    // 0x801D0D68: nop

;}
RECOMP_FUNC void func_801D3614_642464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3614: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D3618: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D361C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801D3620: sltu        $t7, $zero, $t6
    ctx->r15 = 0 < ctx->r14 ? 1 : 0;
    // 0x801D3624: slti        $t9, $v0, 0x0
    ctx->r25 = SIGNED(ctx->r2) < 0X0 ? 1 : 0;
    // 0x801D3628: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x801D362C: addiu       $v0, $t0, -0x1
    ctx->r2 = ADD32(ctx->r8, -0X1);
    // 0x801D3630: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D3634: addiu       $t8, $t7, 0x3
    ctx->r24 = ADD32(ctx->r15, 0X3);
    // 0x801D3638: sb          $t8, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r24;
    // 0x801D363C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D3640: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D3644: ldc1        $f8, -0xF80($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XF80);
    // 0x801D3648: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D364C: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D3650: jr          $ra
    // 0x801D3654: swc1        $f16, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f16.u32l;
    TRACE_RETURN()
    return;
    // 0x801D3654: swc1        $f16, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_801D7270_6460C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7270: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D7274: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D7278: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801D727C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D7280: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D7284: addiu       $t6, $t6, 0x64
    ctx->r14 = ADD32(ctx->r14, 0X64);
    // 0x801D7288: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801D728C: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801D7290: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801D7294: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801D7298: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x801D729C: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801D72A0: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801D72A4: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801D72A8: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x801D72AC: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801D72B0: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    // 0x801D72B4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D72B8: lui         $a2, 0x420C
    ctx->r6 = S32(0X420C << 16);
    // 0x801D72BC: lui         $a3, 0x4296
    ctx->r7 = S32(0X4296 << 16);
    // 0x801D72C0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D72C4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D72C8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D72CC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D72D0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D72D4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D72D8: jal         0x801E8378
    // 0x801D72DC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801D72DC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801D72E0: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D72E4: jal         0x800352EC
    // 0x801D72E8: addiu       $a0, $a0, 0x7300
    ctx->r4 = ADD32(ctx->r4, 0X7300);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801D72E8: addiu       $a0, $a0, 0x7300
    ctx->r4 = ADD32(ctx->r4, 0X7300);
    after_1:
    // 0x801D72EC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D72F0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801D72F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D72F8: jr          $ra
    // 0x801D72FC: nop

    TRACE_RETURN()
    return;
    // 0x801D72FC: nop

;}
RECOMP_FUNC void func_801D4724_643574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4724: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D4728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D472C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D4730: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
    // 0x801D4734: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D4738: lui         $at, 0x403C
    ctx->r1 = S32(0X403C << 16);
    // 0x801D473C: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x801D4740: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D4744: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D4748: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D474C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801D4750: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D4754: lw          $t6, 0xAC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XAC);
    // 0x801D4758: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D475C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D4760: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801D4764: negu        $t7, $v0
    ctx->r15 = SUB32(0, ctx->r2);
    // 0x801D4768: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D476C: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x801D4770: sw          $v0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r2;
    // 0x801D4774: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D4778: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D477C: lwc1        $f10, 0x5C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x801D4780: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801D4784: swc1        $f16, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f16.u32l;
    // 0x801D4788: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801D478C: swc1        $f16, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f16.u32l;
    // 0x801D4790: jal         0x800040A8
    // 0x801D4794: lwc1        $f14, -0xF20($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0XF20);
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x801D4794: lwc1        $f14, -0xF20($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0XF20);
    after_0:
    // 0x801D4798: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x801D479C: sh          $v0, 0x18($t8)
    MEM_H(0X18, ctx->r24) = ctx->r2;
    // 0x801D47A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D47A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D47A8: jr          $ra
    // 0x801D47AC: nop

    TRACE_RETURN()
    return;
    // 0x801D47AC: nop

;}
RECOMP_FUNC void func_801E7D9C_656BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7D9C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E7DA0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801E7DA4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x801E7DA8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x801E7DAC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x801E7DB0: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x801E7DB4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x801E7DB8: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x801E7DBC: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x801E7DC0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801E7DC4: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x801E7DC8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x801E7DCC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801E7DD0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E7DD4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E7DD8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801E7DDC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801E7DE0: jal         0x801E7340
    // 0x801E7DE4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_801E7340_656190(rdram, ctx);
        goto after_0;
    // 0x801E7DE4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_0:
    // 0x801E7DE8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801E7DEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801E7DF0: jr          $ra
    // 0x801E7DF4: nop

    TRACE_RETURN()
    return;
    // 0x801E7DF4: nop

;}
RECOMP_FUNC void func_801D8940_647790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D8944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D8948: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D894C: lw          $v1, 0xEC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XEC);
    // 0x801D8950: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D8954: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D8958: lw          $t6, 0x31C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X31C);
    // 0x801D895C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801D8960: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801D8964: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801D8968: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x801D896C: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x801D8970: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D8974: lbu         $a1, -0x520B($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X520B);
    // 0x801D8978: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801D897C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D8980: sll         $a3, $a1, 2
    ctx->r7 = S32(ctx->r5 << 2);
    // 0x801D8984: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x801D8988: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D898C: lw          $v0, -0x6150($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6150);
    // 0x801D8990: lwc1        $f10, -0xDD0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0XDD0);
    // 0x801D8994: lui         $t0, 0x801F
    ctx->r8 = S32(0X801F << 16);
    // 0x801D8998: lb          $t8, 0x0($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X0);
    // 0x801D899C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D89A0: addu        $t0, $t0, $a3
    ctx->r8 = ADD32(ctx->r8, ctx->r7);
    // 0x801D89A4: bltz        $t8, L_801D89E4
    if (SIGNED(ctx->r24) < 0) {
        // 0x801D89A8: sub.s       $f0, $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f10.fl;
            goto L_801D89E4;
    }
    // 0x801D89A8: sub.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801D89AC: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D89B0: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x801D89B4: nop

    // 0x801D89B8: bc1fl       L_801D89E8
    if (!c1cs) {
        // 0x801D89BC: sw          $v0, 0x5C($a2)
        MEM_W(0X5C, ctx->r6) = ctx->r2;
            goto L_801D89E8;
    }
    goto skip_0;
    // 0x801D89BC: sw          $v0, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->r2;
    skip_0:
    // 0x801D89C0: lb          $t9, 0x10($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X10);
L_801D89C4:
    // 0x801D89C4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x801D89C8: bltzl       $t9, L_801D89E8
    if (SIGNED(ctx->r25) < 0) {
        // 0x801D89CC: sw          $v0, 0x5C($a2)
        MEM_W(0X5C, ctx->r6) = ctx->r2;
            goto L_801D89E8;
    }
    goto skip_1;
    // 0x801D89CC: sw          $v0, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->r2;
    skip_1:
    // 0x801D89D0: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D89D4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801D89D8: nop

    // 0x801D89DC: bc1tl       L_801D89C4
    if (c1cs) {
        // 0x801D89E0: lb          $t9, 0x10($v0)
        ctx->r25 = MEM_B(ctx->r2, 0X10);
            goto L_801D89C4;
    }
    goto skip_2;
    // 0x801D89E0: lb          $t9, 0x10($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X10);
    skip_2:
L_801D89E4:
    // 0x801D89E4: sw          $v0, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->r2;
L_801D89E8:
    // 0x801D89E8: lw          $t0, -0x770C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X770C);
    // 0x801D89EC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D89F0: addiu       $a0, $a0, -0x75F0
    ctx->r4 = ADD32(ctx->r4, -0X75F0);
    // 0x801D89F4: lhu         $t1, 0xA($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0XA);
    // 0x801D89F8: jal         0x800352EC
    // 0x801D89FC: sh          $t1, 0x60($a2)
    MEM_H(0X60, ctx->r6) = ctx->r9;
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D89FC: sh          $t1, 0x60($a2)
    MEM_H(0X60, ctx->r6) = ctx->r9;
    after_0:
    // 0x801D8A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D8A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D8A08: jr          $ra
    // 0x801D8A0C: nop

    TRACE_RETURN()
    return;
    // 0x801D8A0C: nop

;}
RECOMP_FUNC void func_801D84D4_647324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D84D4: lbu         $v0, 0x316($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X316);
    // 0x801D84D8: slti        $t6, $v0, 0xA
    ctx->r14 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x801D84DC: xori        $t6, $t6, 0x1
    ctx->r14 = ctx->r14 ^ 0X1;
    // 0x801D84E0: jr          $ra
    // 0x801D84E4: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
    TRACE_RETURN()
    return;
    // 0x801D84E4: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
;}
RECOMP_FUNC void func_801DB950_64A7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DB954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DB958: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DB95C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DB960: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801DB964: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801DB968: bgezl       $t6, L_801DB990
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DB96C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_801DB990;
    }
    goto skip_0;
    // 0x801DB96C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x801DB970: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801DB974: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801DB978: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DB97C: jal         0x800352EC
    // 0x801DB980: addiu       $a0, $a0, -0x4628
    ctx->r4 = ADD32(ctx->r4, -0X4628);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DB980: addiu       $a0, $a0, -0x4628
    ctx->r4 = ADD32(ctx->r4, -0X4628);
    after_0:
    // 0x801DB984: b           L_801DB9CC
    // 0x801DB988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DB9CC;
    // 0x801DB988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DB98C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_801DB990:
    // 0x801DB990: jal         0x801CD504
    // 0x801DB994: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801DB994: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801DB998: beq         $v0, $zero, L_801DB9B0
    if (ctx->r2 == 0) {
        // 0x801DB99C: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801DB9B0;
    }
    // 0x801DB99C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DB9A0: jal         0x801D8BF0
    // 0x801DB9A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_2;
    // 0x801DB9A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801DB9A8: b           L_801DB9CC
    // 0x801DB9AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DB9CC;
    // 0x801DB9AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB9B0:
    // 0x801DB9B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DB9B4: jal         0x801CD634
    // 0x801DB9B8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801DB9B8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x801DB9BC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DB9C0: jal         0x801CD780
    // 0x801DB9C4: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801DB9C4: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801DB9C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB9CC:
    // 0x801DB9CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DB9D0: jr          $ra
    // 0x801DB9D4: nop

    TRACE_RETURN()
    return;
    // 0x801DB9D4: nop

;}
RECOMP_FUNC void func_801CC350_63B1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC350: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CC354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CC358: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801CC35C: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801CC360: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CC364: ldc1        $f0, -0x1238($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X1238);
    // 0x801CC368: lwc1        $f10, 0x60($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801CC36C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CC370: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CC374: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801CC378: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x801CC37C: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801CC380: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x801CC384: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
    // 0x801CC388: jal         0x801CBEF8
    // 0x801CC38C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_801CBEF8_63AD48(rdram, ctx);
        goto after_0;
    // 0x801CC38C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x801CC390: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CC394: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x801CC398: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801CC39C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801CC3A0: nop

    // 0x801CC3A4: bc1fl       L_801CC3B4
    if (!c1cs) {
        // 0x801CC3A8: c.lt.s      $f16, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
            goto L_801CC3B4;
    }
    goto skip_0;
    // 0x801CC3A8: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    skip_0:
    // 0x801CC3AC: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x801CC3B0: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
L_801CC3B4:
    // 0x801CC3B4: nop

    // 0x801CC3B8: bc1fl       L_801CC3C8
    if (!c1cs) {
        // 0x801CC3BC: sub.s       $f12, $f2, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f16.fl;
            goto L_801CC3C8;
    }
    goto skip_1;
    // 0x801CC3BC: sub.s       $f12, $f2, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f16.fl;
    skip_1:
    // 0x801CC3C0: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x801CC3C4: sub.s       $f12, $f2, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f16.fl;
L_801CC3C8:
    // 0x801CC3C8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CC3CC: ldc1        $f6, -0x1230($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1230);
    // 0x801CC3D0: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801CC3D4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801CC3D8: sub.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f6.d - ctx->f10.d;
    // 0x801CC3DC: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x801CC3E0: jal         0x80003A94
    // 0x801CC3E4: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    func_80003A94_4694(rdram, ctx);
        goto after_1;
    // 0x801CC3E4: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    after_1:
    // 0x801CC3E8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x801CC3EC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801CC3F0: sra         $t7, $t6, 4
    ctx->r15 = S32(SIGNED(ctx->r14) >> 4);
    // 0x801CC3F4: sh          $t7, 0x358($t8)
    MEM_H(0X358, ctx->r24) = ctx->r15;
    // 0x801CC3F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CC3FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801CC400: jr          $ra
    // 0x801CC404: nop

    TRACE_RETURN()
    return;
    // 0x801CC404: nop

;}
RECOMP_FUNC void func_801DF7A0_64E5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF7A0: lwc1        $f0, 0x7C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x801DF7A4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DF7A8: ldc1        $f2, -0xC90($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0XC90);
    // 0x801DF7AC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801DF7B0: swc1        $f0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->f0.u32l;
    // 0x801DF7B4: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x801DF7B8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801DF7BC: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x801DF7C0: lwc1        $f0, 0x80($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X80);
    // 0x801DF7C4: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801DF7C8: swc1        $f0, 0x8C($a1)
    MEM_W(0X8C, ctx->r5) = ctx->f0.u32l;
    // 0x801DF7CC: mul.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x801DF7D0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DF7D4: swc1        $f18, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f18.u32l;
    // 0x801DF7D8: lwc1        $f0, 0x84($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X84);
    // 0x801DF7DC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801DF7E0: swc1        $f0, 0x90($a1)
    MEM_W(0X90, ctx->r5) = ctx->f0.u32l;
    // 0x801DF7E4: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x801DF7E8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801DF7EC: jr          $ra
    // 0x801DF7F0: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x801DF7F0: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_801E6F9C_655DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6F9C: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x801E6FA0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801E6FA4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801E6FA8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801E6FAC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E6FB0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E6FB4: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E6FB8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E6FBC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E6FC0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E6FC4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E6FC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E6FCC: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E6FD0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E6FD4: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x801E6FD8: addiu       $t9, $sp, 0x50
    ctx->r25 = ADD32(ctx->r29, 0X50);
    // 0x801E6FDC: addiu       $t0, $sp, 0x54
    ctx->r8 = ADD32(ctx->r29, 0X54);
    // 0x801E6FE0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E6FE4: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x801E6FE8: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E6FEC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E6FF0: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E6FF4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E6FF8: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x801E6FFC: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E7000: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E7004: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E7008: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E700C: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x801E7010: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E7014: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E7018: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E701C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E7020: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x801E7024: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E7028: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E702C: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E7030: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E7034: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x801E7038: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E703C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E7040: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E7044: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E7048: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x801E704C: lhu         $t6, 0x14($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X14);
    // 0x801E7050: sh          $t6, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r14;
    // 0x801E7054: lhu         $t7, 0x16($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X16);
    // 0x801E7058: sh          $t7, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r15;
    // 0x801E705C: lhu         $t8, 0x18($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X18);
    // 0x801E7060: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801E7064: sh          $t8, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r24;
    // 0x801E7068: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x801E706C: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    // 0x801E7070: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x801E7074: lwc1        $f6, 0x88($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X88);
    // 0x801E7078: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E707C: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x801E7080: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E7084: lwc1        $f8, 0x8C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x801E7088: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801E708C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E7090: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x801E7094: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E7098: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801E709C: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x801E70A0: nop

    // 0x801E70A4: bc1tl       L_801E70FC
    if (c1cs) {
        // 0x801E70A8: lwc1        $f4, 0x40($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
            goto L_801E70FC;
    }
    goto skip_0;
    // 0x801E70A8: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    skip_0:
    // 0x801E70AC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801E70B0: jal         0x80033898
    // 0x801E70B4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E70B4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x801E70B8: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801E70BC: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E70C0: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E70C4: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E70C8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E70CC: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E70D0: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801E70D4: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801E70D8: swc1        $f16, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f16.u32l;
    // 0x801E70DC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E70E0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E70E4: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E70E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E70EC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E70F0: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
    // 0x801E70F4: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x801E70F8: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
L_801E70FC:
    // 0x801E70FC: lwc1        $f18, 0x78($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E7100: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E7104: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E7108: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x801E710C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E7110: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x801E7114: addiu       $t4, $sp, 0x50
    ctx->r12 = ADD32(ctx->r29, 0X50);
    // 0x801E7118: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
    // 0x801E711C: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x801E7120: lwc1        $f10, 0x7C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x801E7124: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801E7128: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801E712C: lwc1        $f18, 0x80($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X80);
    // 0x801E7130: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x801E7134: lwc1        $f12, 0x68($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E7138: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x801E713C: bc1f        L_801E7150
    if (!c1cs) {
        // 0x801E7140: swc1        $f6, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
            goto L_801E7150;
    }
    // 0x801E7140: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x801E7144: neg.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = -ctx->f16.fl;
    // 0x801E7148: b           L_801E7168
    // 0x801E714C: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
        goto L_801E7168;
    // 0x801E714C: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
L_801E7150:
    // 0x801E7150: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E7154: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E7158: div.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f8.fl);
    // 0x801E715C: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x801E7160: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
    // 0x801E7164: swc1        $f4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f4.u32l;
L_801E7168:
    // 0x801E7168: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x801E716C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E7170: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x801E7174: mul.d       $f16, $f6, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E7178: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x801E717C: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    // 0x801E7180: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E7184: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801E7188: mul.d       $f18, $f4, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801E718C: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x801E7190: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x801E7194: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E7198: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x801E719C: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x801E71A0: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x801E71A4: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x801E71A8: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E71AC: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x801E71B0: mul.d       $f16, $f6, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E71B4: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x801E71B8: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x801E71BC: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E71C0: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801E71C4: mul.d       $f18, $f4, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801E71C8: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x801E71CC: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x801E71D0: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E71D4: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x801E71D8: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x801E71DC: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x801E71E0: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x801E71E4: lhu         $t1, 0x14($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X14);
    // 0x801E71E8: sh          $t1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r9;
    // 0x801E71EC: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x801E71F0: andi        $a0, $t1, 0xFFFF
    ctx->r4 = ctx->r9 & 0XFFFF;
    // 0x801E71F4: sh          $t2, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r10;
    // 0x801E71F8: lhu         $t3, 0x18($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X18);
    // 0x801E71FC: andi        $a1, $t2, 0xFFFF
    ctx->r5 = ctx->r10 & 0XFFFF;
    // 0x801E7200: sh          $t3, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r11;
    // 0x801E7204: lwc1        $f18, 0x84($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X84);
    // 0x801E7208: andi        $a2, $t3, 0xFFFF
    ctx->r6 = ctx->r11 & 0XFFFF;
    // 0x801E720C: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x801E7210: lwc1        $f6, 0x88($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X88);
    // 0x801E7214: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E7218: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x801E721C: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E7220: lwc1        $f16, 0x8C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8C);
    // 0x801E7224: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E7228: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x801E722C: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E7230: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E7234: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x801E7238: nop

    // 0x801E723C: bc1tl       L_801E7288
    if (c1cs) {
        // 0x801E7240: lwc1        $f18, 0x40($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
            goto L_801E7288;
    }
    goto skip_1;
    // 0x801E7240: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    skip_1:
    // 0x801E7244: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801E7248: jal         0x80033898
    // 0x801E724C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801E724C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_1:
    // 0x801E7250: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801E7254: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E7258: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801E725C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E7260: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801E7264: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E7268: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E726C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E7270: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x801E7274: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E7278: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801E727C: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x801E7280: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x801E7284: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
L_801E7288:
    // 0x801E7288: lwc1        $f4, 0x78($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X78);
    // 0x801E728C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E7290: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E7294: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801E7298: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E729C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E72A0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E72A4: addiu       $a2, $sp, 0xC0
    ctx->r6 = ADD32(ctx->r29, 0XC0);
    // 0x801E72A8: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x801E72AC: addiu       $t6, $sp, 0xA0
    ctx->r14 = ADD32(ctx->r29, 0XA0);
    // 0x801E72B0: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x801E72B4: lwc1        $f8, 0x7C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x801E72B8: addiu       $t7, $sp, 0x90
    ctx->r15 = ADD32(ctx->r29, 0X90);
    // 0x801E72BC: addiu       $t8, $sp, 0x80
    ctx->r24 = ADD32(ctx->r29, 0X80);
    // 0x801E72C0: mul.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x801E72C4: addiu       $t9, $sp, 0x70
    ctx->r25 = ADD32(ctx->r29, 0X70);
    // 0x801E72C8: addiu       $t0, $sp, 0x64
    ctx->r8 = ADD32(ctx->r29, 0X64);
    // 0x801E72CC: addiu       $t1, $sp, 0x58
    ctx->r9 = ADD32(ctx->r29, 0X58);
    // 0x801E72D0: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x801E72D4: lwc1        $f4, 0x80($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X80);
    // 0x801E72D8: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x801E72DC: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E72E0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801E72E4: bc1f        L_801E72F8
    if (!c1cs) {
        // 0x801E72E8: swc1        $f6, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
            goto L_801E72F8;
    }
    // 0x801E72E8: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x801E72EC: neg.s       $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = -ctx->f10.fl;
    // 0x801E72F0: b           L_801E7310
    // 0x801E72F4: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
        goto L_801E7310;
    // 0x801E72F4: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
L_801E72F8:
    // 0x801E72F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E72FC: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801E7300: div.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x801E7304: add.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x801E7308: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x801E730C: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
L_801E7310:
    // 0x801E7310: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E7314: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E7318: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801E731C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801E7320: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801E7324: jal         0x801E7340
    // 0x801E7328: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_801E7340_656190(rdram, ctx);
        goto after_2;
    // 0x801E7328: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_2:
    // 0x801E732C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801E7330: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801E7334: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801E7338: jr          $ra
    // 0x801E733C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    TRACE_RETURN()
    return;
    // 0x801E733C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_801D0F6C_63FDBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0F6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D0F70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D0F74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D0F78: lbu         $v0, 0x9D($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9D);
    // 0x801D0F7C: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D0F80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D0F84: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801D0F88: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x801D0F8C: lw          $t9, -0x75A8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X75A8);
    // 0x801D0F90: jalr        $t9
    // 0x801D0F94: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801D0F94: nop

    after_0:
    // 0x801D0F98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D0F9C: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D0FA0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801D0FA4: lbu         $v0, 0x9E($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9E);
    // 0x801D0FA8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x801D0FAC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x801D0FB0: lw          $t9, -0x758C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X758C);
    // 0x801D0FB4: jalr        $t9
    // 0x801D0FB8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801D0FB8: nop

    after_1:
    // 0x801D0FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D0FC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D0FC4: jr          $ra
    // 0x801D0FC8: nop

    TRACE_RETURN()
    return;
    // 0x801D0FC8: nop

;}
RECOMP_FUNC void func_801D1324_640174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1324: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801D1328: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D132C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D1330: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D1334: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801D1338: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D133C: jal         0x801CCE64
    // 0x801D1340: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    func_801CCE64_63BCB4(rdram, ctx);
        goto after_0;
    // 0x801D1340: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    after_0:
    // 0x801D1344: lw          $v0, 0xB4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB4);
    // 0x801D1348: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D134C: ldc1        $f6, -0x1060($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1060);
    // 0x801D1350: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D1354: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D1358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D135C: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D1360: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1364: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x801D1368: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x801D136C: addiu       $t0, $sp, 0x44
    ctx->r8 = ADD32(ctx->r29, 0X44);
    // 0x801D1370: c.le.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d <= ctx->f6.d;
    // 0x801D1374: nop

    // 0x801D1378: bc1fl       L_801D139C
    if (!c1cs) {
        // 0x801D137C: lw          $a0, 0xC8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XC8);
            goto L_801D139C;
    }
    goto skip_0;
    // 0x801D137C: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    skip_0:
    // 0x801D1380: ldc1        $f8, -0x1058($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1058);
    // 0x801D1384: add.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d + ctx->f8.d;
    // 0x801D1388: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D138C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801D1390: nop

    // 0x801D1394: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x801D1398: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
L_801D139C:
    // 0x801D139C: lw          $v0, 0xE4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE4);
    // 0x801D13A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D13A4: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x801D13A8: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x801D13AC: sw          $t7, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->r15;
    // 0x801D13B0: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x801D13B4: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x801D13B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D13BC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x801D13C0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801D13C4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801D13C8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x801D13CC: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x801D13D0: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x801D13D4: jal         0x80033898
    // 0x801D13D8: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801D13D8: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x801D13DC: jal         0x8001D394
    // 0x801D13E0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_8001D394_1DF94(rdram, ctx);
        goto after_2;
    // 0x801D13E0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_2:
    // 0x801D13E4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801D13E8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x801D13EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D13F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D13F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801D13F8: jal         0x8001DB04
    // 0x801D13FC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_8001DB04_1E704(rdram, ctx);
        goto after_3;
    // 0x801D13FC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_3:
    // 0x801D1400: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D1404: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D1408: lwc1        $f4, 0x60($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
    // 0x801D140C: lw          $v0, 0xB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB0);
    // 0x801D1410: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x801D1414: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801D1418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D141C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801D1420: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x801D1424: nop

    // 0x801D1428: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x801D142C: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x801D1430: addiu       $v0, $v0, -0xFA0
    ctx->r2 = ADD32(ctx->r2, -0XFA0);
    // 0x801D1434: slti        $at, $v0, 0x3E80
    ctx->r1 = SIGNED(ctx->r2) < 0X3E80 ? 1 : 0;
    // 0x801D1438: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D143C: sw          $v0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r2;
    // 0x801D1440: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801D1444: beq         $at, $zero, L_801D1450
    if (ctx->r1 == 0) {
        // 0x801D1448: swc1        $f18, 0x60($s0)
        MEM_W(0X60, ctx->r16) = ctx->f18.u32l;
            goto L_801D1450;
    }
    // 0x801D1448: swc1        $f18, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f18.u32l;
    // 0x801D144C: sb          $t2, 0x9D($s0)
    MEM_B(0X9D, ctx->r16) = ctx->r10;
L_801D1450:
    // 0x801D1450: jal         0x801CC350
    // 0x801D1454: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    func_801CC350_63B1A0(rdram, ctx);
        goto after_4;
    // 0x801D1454: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    after_4:
    // 0x801D1458: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D145C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D1460: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801D1464: jr          $ra
    // 0x801D1468: nop

    TRACE_RETURN()
    return;
    // 0x801D1468: nop

;}
