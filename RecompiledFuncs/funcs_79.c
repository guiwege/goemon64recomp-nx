#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801CFD50_63EBA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CFD50: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801CFD54: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x801CFD58: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x801CFD5C: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x801CFD60: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801CFD64: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x801CFD68: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x801CFD6C: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x801CFD70: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x801CFD74: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801CFD78: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CFD7C: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x801CFD80: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801CFD84: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801CFD88: ldc1        $f28, -0x1110($at)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r1, -0X1110);
    // 0x801CFD8C: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
L_801CFD90:
    // 0x801CFD90: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801CFD94: lwc1        $f6, 0x80($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X80);
    // 0x801CFD98: lwc1        $f10, 0x88($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X88);
    // 0x801CFD9C: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801CFDA0: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x801CFDA4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CFDA8: lwc1        $f20, 0xC($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CFDAC: mov.s       $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    ctx->f14.fl = ctx->f26.fl;
    // 0x801CFDB0: add.d       $f4, $f18, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f28.d); 
    ctx->f4.d = ctx->f18.d + ctx->f28.d;
    // 0x801CFDB4: mov.s       $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    ctx->f24.fl = ctx->f20.fl;
    // 0x801CFDB8: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x801CFDBC: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CFDC0: cvt.s.d     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f22.fl = CVT_S_D(ctx->f4.d);
    // 0x801CFDC4: swc1        $f12, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f12.u32l;
    // 0x801CFDC8: jal         0x801CBEF8
    // 0x801CFDCC: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    func_801CBEF8_63AD48(rdram, ctx);
        goto after_0;
    // 0x801CFDCC: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    after_0:
    // 0x801CFDD0: c.le.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl <= ctx->f0.fl;
    // 0x801CFDD4: nop

    // 0x801CFDD8: bc1fl       L_801CFE18
    if (!c1cs) {
        // 0x801CFDDC: lhu         $v1, 0x8C($s0)
        ctx->r3 = MEM_HU(ctx->r16, 0X8C);
            goto L_801CFE18;
    }
    goto skip_0;
    // 0x801CFDDC: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
    skip_0:
    // 0x801CFDE0: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x801CFDE4: nop

    // 0x801CFDE8: bc1fl       L_801CFE18
    if (!c1cs) {
        // 0x801CFDEC: lhu         $v1, 0x8C($s0)
        ctx->r3 = MEM_HU(ctx->r16, 0X8C);
            goto L_801CFE18;
    }
    goto skip_1;
    // 0x801CFDEC: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
    skip_1:
    // 0x801CFDF0: c.le.s      $f26, $f24
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f26.fl <= ctx->f24.fl;
    // 0x801CFDF4: nop

    // 0x801CFDF8: bc1fl       L_801CFE18
    if (!c1cs) {
        // 0x801CFDFC: lhu         $v1, 0x8C($s0)
        ctx->r3 = MEM_HU(ctx->r16, 0X8C);
            goto L_801CFE18;
    }
    goto skip_2;
    // 0x801CFDFC: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
    skip_2:
    // 0x801CFE00: c.lt.s      $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f22.fl < ctx->f26.fl;
    // 0x801CFE04: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x801CFE08: bc1fl       L_801CFE18
    if (!c1cs) {
        // 0x801CFE0C: lhu         $v1, 0x8C($s0)
        ctx->r3 = MEM_HU(ctx->r16, 0X8C);
            goto L_801CFE18;
    }
    goto skip_3;
    // 0x801CFE0C: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
    skip_3:
    // 0x801CFE10: neg.s       $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = -ctx->f22.fl;
    // 0x801CFE14: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
L_801CFE18:
    // 0x801CFE18: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x801CFE1C: swc1        $f22, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f22.u32l;
    // 0x801CFE20: bnel        $v1, $zero, L_801CFE38
    if (ctx->r3 != 0) {
        // 0x801CFE24: lhu         $t7, 0x14($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X14);
            goto L_801CFE38;
    }
    goto skip_4;
    // 0x801CFE24: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    skip_4:
    // 0x801CFE28: lhu         $t6, 0x8E($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X8E);
    // 0x801CFE2C: beql        $t6, $zero, L_801CFE5C
    if (ctx->r14 == 0) {
        // 0x801CFE30: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801CFE5C;
    }
    goto skip_5;
    // 0x801CFE30: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_5:
    // 0x801CFE34: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
L_801CFE38:
    // 0x801CFE38: lhu         $t0, 0x8E($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X8E);
    // 0x801CFE3C: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x801CFE40: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x801CFE44: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x801CFE48: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x801CFE4C: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x801CFE50: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
    // 0x801CFE54: sh          $t3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r11;
    // 0x801CFE58: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801CFE5C:
    // 0x801CFE5C: bnel        $s0, $zero, L_801CFD90
    if (ctx->r16 != 0) {
        // 0x801CFE60: lwc1        $f0, 0x84($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
            goto L_801CFD90;
    }
    goto skip_6;
    // 0x801CFE60: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    skip_6:
    // 0x801CFE64: jal         0x801CD504
    // 0x801CFE68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801CFE68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x801CFE6C: beq         $v0, $zero, L_801CFE94
    if (ctx->r2 == 0) {
        // 0x801CFE70: addiu       $t4, $zero, 0x5
        ctx->r12 = ADD32(0, 0X5);
            goto L_801CFE94;
    }
    // 0x801CFE70: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x801CFE74: sb          $t4, 0x9C($s1)
    MEM_B(0X9C, ctx->r17) = ctx->r12;
    // 0x801CFE78: sb          $zero, 0x9D($s1)
    MEM_B(0X9D, ctx->r17) = 0;
    // 0x801CFE7C: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    // 0x801CFE80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801CFE84: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
L_801CFE88:
    // 0x801CFE88: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x801CFE8C: bnel        $s0, $zero, L_801CFE88
    if (ctx->r16 != 0) {
        // 0x801CFE90: sb          $v0, 0x64($s0)
        MEM_B(0X64, ctx->r16) = ctx->r2;
            goto L_801CFE88;
    }
    goto skip_7;
    // 0x801CFE90: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    skip_7:
L_801CFE94:
    // 0x801CFE94: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801CFE98: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x801CFE9C: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x801CFEA0: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x801CFEA4: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x801CFEA8: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x801CFEAC: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x801CFEB0: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x801CFEB4: jr          $ra
    // 0x801CFEB8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801CFEB8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801E7D70_656BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7D70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E7D74: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801E7D78: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801E7D7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E7D80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E7D84: jal         0x801E6F9C
    // 0x801E7D88: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801E6F9C_655DEC(rdram, ctx);
        goto after_0;
    // 0x801E7D88: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x801E7D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E7D90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E7D94: jr          $ra
    // 0x801E7D98: nop

    TRACE_RETURN()
    return;
    // 0x801E7D98: nop

;}
RECOMP_FUNC void func_801CCA94_63B8E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCA94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCA98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CCA9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCAA0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801CCAA4: addiu       $a0, $a0, -0x76C0
    ctx->r4 = ADD32(ctx->r4, -0X76C0);
    // 0x801CCAA8: jal         0x80034DD8
    // 0x801CCAAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_0;
    // 0x801CCAAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801CCAB0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801CCAB4: sw          $t6, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r14;
    // 0x801CCAB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CCABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CCAC0: jr          $ra
    // 0x801CCAC4: nop

    TRACE_RETURN()
    return;
    // 0x801CCAC4: nop

;}
RECOMP_FUNC void func_801D1630_640480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1630: lb          $v0, 0xA2($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA2);
    // 0x801D1634: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801D1638: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x801D163C: sll         $t6, $v0, 24
    ctx->r14 = S32(ctx->r2 << 24);
    // 0x801D1640: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x801D1644: bne         $t7, $zero, L_801D165C
    if (ctx->r15 != 0) {
        // 0x801D1648: sb          $t7, 0xA2($a0)
        MEM_B(0XA2, ctx->r4) = ctx->r15;
            goto L_801D165C;
    }
    // 0x801D1648: sb          $t7, 0xA2($a0)
    MEM_B(0XA2, ctx->r4) = ctx->r15;
    // 0x801D164C: sb          $t8, 0x9E($a0)
    MEM_B(0X9E, ctx->r4) = ctx->r24;
    // 0x801D1650: lh          $t9, 0x0($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X0);
    // 0x801D1654: ori         $t0, $t9, 0x4000
    ctx->r8 = ctx->r25 | 0X4000;
    // 0x801D1658: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
L_801D165C:
    // 0x801D165C: jr          $ra
    // 0x801D1660: nop

    TRACE_RETURN()
    return;
    // 0x801D1660: nop

;}
RECOMP_FUNC void func_801D09F8_63F848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D09F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D09FC: lw          $t6, 0xB4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB4);
    // 0x801D0A00: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D0A04: ldc1        $f8, -0x10C8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X10C8);
    // 0x801D0A08: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801D0A0C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D0A10: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D0A14: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D0A18: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D0A1C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801D0A20: nop

    // 0x801D0A24: slti        $at, $v0, 0x61A8
    ctx->r1 = SIGNED(ctx->r2) < 0X61A8 ? 1 : 0;
    // 0x801D0A28: bne         $at, $zero, L_801D0A3C
    if (ctx->r1 != 0) {
        // 0x801D0A2C: nop
    
            goto L_801D0A3C;
    }
    // 0x801D0A2C: nop

    // 0x801D0A30: sb          $t8, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r24;
    // 0x801D0A34: sb          $zero, 0xC4($a0)
    MEM_B(0XC4, ctx->r4) = 0;
    // 0x801D0A38: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
L_801D0A3C:
    // 0x801D0A3C: jr          $ra
    // 0x801D0A40: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801D0A40: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801D4BB0_643A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4BB0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D4BB4: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D4BB8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D4BBC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D4BC0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D4BC4: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801D4BC8: lh          $v1, 0xA8($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA8);
    // 0x801D4BCC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D4BD0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x801D4BD4: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x801D4BD8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801D4BDC: sh          $t7, 0xA8($a0)
    MEM_H(0XA8, ctx->r4) = ctx->r15;
    // 0x801D4BE0: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D4BE4: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D4BE8: bne         $t7, $zero, L_801D4C0C
    if (ctx->r15 != 0) {
        // 0x801D4BEC: swc1        $f18, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
            goto L_801D4C0C;
    }
    // 0x801D4BEC: swc1        $f18, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
    // 0x801D4BF0: lw          $v1, 0xA4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA4);
    // 0x801D4BF4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D4BF8: sb          $t8, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r24;
    // 0x801D4BFC: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x801D4C00: addu        $t9, $v0, $v1
    ctx->r25 = ADD32(ctx->r2, ctx->r3);
    // 0x801D4C04: sw          $v1, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r3;
    // 0x801D4C08: sw          $t9, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r25;
L_801D4C0C:
    // 0x801D4C0C: jr          $ra
    // 0x801D4C10: nop

    TRACE_RETURN()
    return;
    // 0x801D4C10: nop

;}
RECOMP_FUNC void func_801E5C48_654A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5C48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E5C4C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801E5C50: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801E5C54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E5C58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E5C5C: jal         0x801E4E64
    // 0x801E5C60: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801E4E64_653CB4(rdram, ctx);
        goto after_0;
    // 0x801E5C60: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x801E5C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E5C68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E5C6C: jr          $ra
    // 0x801E5C70: nop

    TRACE_RETURN()
    return;
    // 0x801E5C70: nop

;}
RECOMP_FUNC void func_801DE71C_64D56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE71C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DE720: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801DE724: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801DE728: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801DE72C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801DE730: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801DE734: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DE738: bgez        $t6, L_801DE75C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DE73C: nop
    
            goto L_801DE75C;
    }
    // 0x801DE73C: nop

    // 0x801DE740: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801DE744: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801DE748: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DE74C: jal         0x800352EC
    // 0x801DE750: addiu       $a0, $a0, -0x17C0
    ctx->r4 = ADD32(ctx->r4, -0X17C0);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DE750: addiu       $a0, $a0, -0x17C0
    ctx->r4 = ADD32(ctx->r4, -0X17C0);
    after_0:
    // 0x801DE754: b           L_801DE830
    // 0x801DE758: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801DE830;
    // 0x801DE758: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801DE75C:
    // 0x801DE75C: jal         0x801CD504
    // 0x801DE760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801DE760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DE764: beq         $v0, $zero, L_801DE77C
    if (ctx->r2 == 0) {
        // 0x801DE768: nop
    
            goto L_801DE77C;
    }
    // 0x801DE768: nop

    // 0x801DE76C: jal         0x801DBEB0
    // 0x801DE770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DBEB0_64AD00(rdram, ctx);
        goto after_2;
    // 0x801DE770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DE774: b           L_801DE830
    // 0x801DE778: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801DE830;
    // 0x801DE778: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801DE77C:
    // 0x801DE77C: jal         0x801CD634
    // 0x801DE780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801DE780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801DE784: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801DE788: jal         0x801CD780
    // 0x801DE78C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801DE78C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x801DE790: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x801DE794: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DE798: ldc1        $f4, -0xCC0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0XCC0);
    // 0x801DE79C: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801DE7A0: lw          $s1, 0x0($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X0);
    // 0x801DE7A4: lw          $v1, 0xEC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XEC);
    // 0x801DE7A8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801DE7AC: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801DE7B0: mul.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x801DE7B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DE7B8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DE7BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DE7C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DE7C4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x801DE7C8: add.d       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f18.d + ctx->f10.d;
    // 0x801DE7CC: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x801DE7D0: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x801DE7D4: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x801DE7D8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801DE7DC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801DE7E0: jal         0x8001D394
    // 0x801DE7E4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_5;
    // 0x801DE7E4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x801DE7E8: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x801DE7EC: addiu       $s0, $sp, 0x2C
    ctx->r16 = ADD32(ctx->r29, 0X2C);
    // 0x801DE7F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801DE7F4: lwc1        $f16, 0x36C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X36C);
    // 0x801DE7F8: lw          $a2, 0x364($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X364);
    // 0x801DE7FC: lw          $a3, 0x368($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X368);
    // 0x801DE800: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DE804: jal         0x8001D14C
    // 0x801DE808: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_8001D14C_1DD4C(rdram, ctx);
        goto after_6;
    // 0x801DE808: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x801DE80C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x801DE810: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801DE814: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DE818: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x801DE81C: jal         0x8001DB04
    // 0x801DE820: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_7;
    // 0x801DE820: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x801DE824: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x801DE828: sb          $t7, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r15;
    // 0x801DE82C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801DE830:
    // 0x801DE830: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801DE834: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801DE838: jr          $ra
    // 0x801DE83C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801DE83C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801D3E20_642C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3E20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D3E24: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D3E28: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801D3E2C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801D3E30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D3E34: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801D3E38: addiu       $t6, $t6, -0x1BE8
    ctx->r14 = ADD32(ctx->r14, -0X1BE8);
    // 0x801D3E3C: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x801D3E40: sw          $zero, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = 0;
    // 0x801D3E44: sw          $t6, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r14;
    // 0x801D3E48: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
    // 0x801D3E4C: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x801D3E50: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801D3E54: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    // 0x801D3E58: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801D3E5C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D3E60: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D3E64: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801D3E68: lhu         $t9, 0x34($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X34);
    // 0x801D3E6C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801D3E70: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801D3E74: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x801D3E78: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801D3E7C: addiu       $a1, $a1, -0x7530
    ctx->r5 = ADD32(ctx->r5, -0X7530);
    // 0x801D3E80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D3E84: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x801D3E88: jal         0x801CD7C0
    // 0x801D3E8C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_801CD7C0_63C610(rdram, ctx);
        goto after_0;
    // 0x801D3E8C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_0:
    // 0x801D3E90: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x801D3E94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D3E98: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x801D3E9C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D3EA0: addiu       $a0, $a0, 0x3EC0
    ctx->r4 = ADD32(ctx->r4, 0X3EC0);
    // 0x801D3EA4: jal         0x8003521C
    // 0x801D3EA8: swc1        $f6, 0x5C($t1)
    MEM_W(0X5C, ctx->r9) = ctx->f6.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801D3EA8: swc1        $f6, 0x5C($t1)
    MEM_W(0X5C, ctx->r9) = ctx->f6.u32l;
    after_1:
    // 0x801D3EAC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801D3EB0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801D3EB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801D3EB8: jr          $ra
    // 0x801D3EBC: nop

    TRACE_RETURN()
    return;
    // 0x801D3EBC: nop

;}
RECOMP_FUNC void func_801CBBE4_63AA34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBBE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CBBE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBBEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CBBF0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801CBBF4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801CBBF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801CBBFC: jal         0x80035EEC
    // 0x801CBC00: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801CBC00: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x801CBC04: beq         $v0, $zero, L_801CBC84
    if (ctx->r2 == 0) {
        // 0x801CBC08: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801CBC84;
    }
    // 0x801CBC08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CBC0C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CBC10: lwc1        $f0, -0x124C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X124C);
    // 0x801CBC14: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x801CBC18: sb          $t6, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r14;
    // 0x801CBC1C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x801CBC20: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CBC24: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CBC28: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801CBC2C: addiu       $t9, $t9, -0x1BE8
    ctx->r25 = ADD32(ctx->r25, -0X1BE8);
    // 0x801CBC30: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801CBC34: sw          $t8, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r24;
    // 0x801CBC38: sw          $t9, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r25;
    // 0x801CBC3C: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x801CBC40: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x801CBC44: swc1        $f2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f2.u32l;
    // 0x801CBC48: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801CBC4C: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x801CBC50: sh          $zero, 0x16($v0)
    MEM_H(0X16, ctx->r2) = 0;
    // 0x801CBC54: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x801CBC58: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x801CBC5C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x801CBC60: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x801CBC64: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x801CBC68: lhu         $t0, 0x26($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X26);
    // 0x801CBC6C: sh          $zero, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = 0;
    // 0x801CBC70: sh          $zero, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = 0;
    // 0x801CBC74: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x801CBC78: sh          $zero, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = 0;
    // 0x801CBC7C: jal         0x80014218
    // 0x801CBC80: sh          $t0, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r8;
    func_80014218_14E18(rdram, ctx);
        goto after_1;
    // 0x801CBC80: sh          $t0, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r8;
    after_1:
L_801CBC84:
    // 0x801CBC84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CBC88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CBC8C: jr          $ra
    // 0x801CBC90: nop

    TRACE_RETURN()
    return;
    // 0x801CBC90: nop

;}
RECOMP_FUNC void func_801D2F0C_641D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2F0C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D2F10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D2F14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D2F18: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801D2F1C: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D2F20: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D2F24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D2F28: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D2F2C: lwc1        $f16, 0x64($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D2F30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D2F34: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D2F38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D2F3C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D2F40: add.s       $f0, $f16, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D2F44: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x801D2F48: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D2F4C: jal         0x801CD96C
    // 0x801D2F50: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_801CD96C_63C7BC(rdram, ctx);
        goto after_0;
    // 0x801D2F50: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_0:
    // 0x801D2F54: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D2F58: lwc1        $f18, -0xFD0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0XFD0);
    // 0x801D2F5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D2F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D2F64: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x801D2F68: nop

    // 0x801D2F6C: bc1f        L_801D3008
    if (!c1cs) {
        // 0x801D2F70: nop
    
            goto L_801D3008;
    }
    // 0x801D2F70: nop

    // 0x801D2F74: jal         0x801CD96C
    // 0x801D2F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD96C_63C7BC(rdram, ctx);
        goto after_1;
    // 0x801D2F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801D2F7C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D2F80: ldc1        $f6, -0xFC8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XFC8);
    // 0x801D2F84: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801D2F88: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x801D2F8C: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801D2F90: slti        $t8, $t7, 0x0
    ctx->r24 = SIGNED(ctx->r15) < 0X0 ? 1 : 0;
    // 0x801D2F94: bc1fl       L_801D3014
    if (!c1cs) {
        // 0x801D2F98: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D3014;
    }
    goto skip_0;
    // 0x801D2F98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801D2F9C: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x801D2FA0: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801D2FA4: or          $t6, $zero, $zero
    ctx->r14 = 0 | 0;
    // 0x801D2FA8: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x801D2FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D2FB0: lwc1        $f0, 0x64($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X64);
    // 0x801D2FB4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x801D2FB8: nop

    // 0x801D2FBC: bc1f        L_801D2FC8
    if (!c1cs) {
        // 0x801D2FC0: nop
    
            goto L_801D2FC8;
    }
    // 0x801D2FC0: nop

    // 0x801D2FC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_801D2FC8:
    // 0x801D2FC8: bnel        $t6, $t8, L_801D3014
    if (ctx->r14 != ctx->r24) {
        // 0x801D2FCC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D3014;
    }
    goto skip_1;
    // 0x801D2FCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801D2FD0: jal         0x801CD96C
    // 0x801D2FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801CD96C_63C7BC(rdram, ctx);
        goto after_2;
    // 0x801D2FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x801D2FD8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D2FDC: ldc1        $f10, -0xFC0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0XFC0);
    // 0x801D2FE0: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x801D2FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D2FE8: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x801D2FEC: nop

    // 0x801D2FF0: bc1fl       L_801D3014
    if (!c1cs) {
        // 0x801D2FF4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D3014;
    }
    goto skip_2;
    // 0x801D2FF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801D2FF8: jal         0x801D3614
    // 0x801D2FFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801D3614_642464(rdram, ctx);
        goto after_3;
    // 0x801D2FFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x801D3000: b           L_801D3014
    // 0x801D3004: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D3014;
    // 0x801D3004: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D3008:
    // 0x801D3008: jal         0x801D3614
    // 0x801D300C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801D3614_642464(rdram, ctx);
        goto after_4;
    // 0x801D300C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x801D3010: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D3014:
    // 0x801D3014: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D3018: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D301C: jr          $ra
    // 0x801D3020: nop

    TRACE_RETURN()
    return;
    // 0x801D3020: nop

;}
RECOMP_FUNC void func_801D5820_644670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5820: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D5824: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D5828: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801D582C: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801D5830: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801D5834: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D5838: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D583C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D5840: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D5844: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801D5848: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D584C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D5850: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D5854: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D5858: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801D585C: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801D5860: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801D5864: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801D5868: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D586C: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801D5870: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801D5874: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D5878: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D587C: nop

    // 0x801D5880: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D5884: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D5888: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x801D588C: lwc1        $f16, 0x24($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801D5890: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801D5894: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801D5898: nop

    // 0x801D589C: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x801D58A0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801D58A4: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x801D58A8: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801D58AC: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801D58B0: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801D58B4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D58B8: jal         0x80033898
    // 0x801D58BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801D58BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801D58C0: addiu       $t8, $zero, 0xCF
    ctx->r24 = ADD32(0, 0XCF);
    // 0x801D58C4: addiu       $t9, $zero, 0x17
    ctx->r25 = ADD32(0, 0X17);
    // 0x801D58C8: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x801D58CC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801D58D0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801D58D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D58D8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D58DC: lwc1        $f16, 0x5C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D58E0: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D58E4: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D58E8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801D58EC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D58F0: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D58F4: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x801D58F8: addiu       $t2, $zero, 0x300
    ctx->r10 = ADD32(0, 0X300);
    // 0x801D58FC: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x801D5900: lwc1        $f6, 0x60($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D5904: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D5908: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D590C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D5910: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D5914: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D5918: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D591C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801D5920: lwc1        $f16, 0x64($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D5924: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x801D5928: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x801D592C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D5930: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D5934: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D5938: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x801D593C: jal         0x801CDA88
    // 0x801D5940: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801D5940: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x801D5944: addiu       $t3, $zero, 0xC0
    ctx->r11 = ADD32(0, 0XC0);
    // 0x801D5948: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D594C: lwc1        $f8, 0x5C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D5950: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D5954: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D5958: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D595C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D5960: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D5964: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D5968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D596C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801D5970: lwc1        $f18, 0x60($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D5974: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x801D5978: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D597C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D5980: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801D5984: lwc1        $f8, 0x64($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D5988: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D598C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D5990: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D5994: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D5998: jal         0x801DF9EC
    // 0x801D599C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801D599C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x801D59A0: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D59A4: lhu         $t4, 0xE2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D59A8: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x801D59AC: bnel        $t5, $zero, L_801D5A04
    if (ctx->r13 != 0) {
        // 0x801D59B0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801D5A04;
    }
    goto skip_0;
    // 0x801D59B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801D59B4: lhu         $t6, 0xE4($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XE4);
    // 0x801D59B8: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801D59BC: bne         $t6, $at, L_801D59DC
    if (ctx->r14 != ctx->r1) {
        // 0x801D59C0: nop
    
            goto L_801D59DC;
    }
    // 0x801D59C0: nop

    // 0x801D59C4: jal         0x80038B98
    // 0x801D59C8: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801D59C8: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801D59CC: lw          $t8, 0xEC($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XEC);
    // 0x801D59D0: addiu       $t7, $zero, 0x299
    ctx->r15 = ADD32(0, 0X299);
    // 0x801D59D4: b           L_801D59F0
    // 0x801D59D8: sh          $t7, 0xE4($t8)
    MEM_H(0XE4, ctx->r24) = ctx->r15;
        goto L_801D59F0;
    // 0x801D59D8: sh          $t7, 0xE4($t8)
    MEM_H(0XE4, ctx->r24) = ctx->r15;
L_801D59DC:
    // 0x801D59DC: jal         0x80038B98
    // 0x801D59E0: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801D59E0: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801D59E4: lw          $t0, 0xEC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XEC);
    // 0x801D59E8: addiu       $t9, $zero, 0x298
    ctx->r25 = ADD32(0, 0X298);
    // 0x801D59EC: sh          $t9, 0xE4($t0)
    MEM_H(0XE4, ctx->r8) = ctx->r25;
L_801D59F0:
    // 0x801D59F0: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D59F4: lhu         $t1, 0xE2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D59F8: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x801D59FC: sh          $t2, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r10;
    // 0x801D5A00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801D5A04:
    // 0x801D5A04: jal         0x801E8824
    // 0x801D5A08: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801E8824_657674(rdram, ctx);
        goto after_5;
    // 0x801D5A08: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x801D5A0C: jal         0x801D2B90
    // 0x801D5A10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_6;
    // 0x801D5A10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801D5A14: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D5A18: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801D5A1C: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801D5A20: jr          $ra
    // 0x801D5A24: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D5A24: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801DC07C_64AECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC07C: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x801DC080: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x801DC084: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x801DC088: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x801DC08C: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x801DC090: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x801DC094: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x801DC098: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x801DC09C: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x801DC0A0: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x801DC0A4: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x801DC0A8: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x801DC0AC: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x801DC0B0: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801DC0B4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DC0B8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DC0BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DC0C0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DC0C4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DC0C8: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DC0CC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DC0D0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x801DC0D4: addiu       $t9, $sp, 0xEC
    ctx->r25 = ADD32(ctx->r29, 0XEC);
    // 0x801DC0D8: addiu       $t0, $sp, 0xF0
    ctx->r8 = ADD32(ctx->r29, 0XF0);
    // 0x801DC0DC: addiu       $a3, $sp, 0xE8
    ctx->r7 = ADD32(ctx->r29, 0XE8);
    // 0x801DC0E0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DC0E4: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x801DC0E8: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801DC0EC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DC0F0: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801DC0F4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DC0F8: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    // 0x801DC0FC: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801DC100: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801DC104: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801DC108: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x801DC10C: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x801DC110: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801DC114: ldc1        $f18, -0xD70($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0XD70);
    // 0x801DC118: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x801DC11C: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x801DC120: mul.d       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x801DC124: sh          $t6, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r14;
    // 0x801DC128: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x801DC12C: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801DC130: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801DC134: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x801DC138: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x801DC13C: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x801DC140: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801DC144: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x801DC148: swc1        $f6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f6.u32l;
    // 0x801DC14C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801DC150: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801DC154: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x801DC158: sh          $t8, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r24;
    // 0x801DC15C: jal         0x80033898
    // 0x801DC160: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DC160: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    after_0:
    // 0x801DC164: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DC168: lwc1        $f18, 0x5C($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X5C);
    // 0x801DC16C: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DC170: lui         $at, 0x4250
    ctx->r1 = S32(0X4250 << 16);
    // 0x801DC174: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DC178: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DC17C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DC180: addiu       $t1, $sp, 0xD4
    ctx->r9 = ADD32(ctx->r29, 0XD4);
    // 0x801DC184: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x801DC188: lwc1        $f4, 0x60($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X60);
    // 0x801DC18C: addiu       $t2, $sp, 0xD8
    ctx->r10 = ADD32(ctx->r29, 0XD8);
    // 0x801DC190: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DC194: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801DC198: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DC19C: lwc1        $f8, 0xA4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801DC1A0: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DC1A4: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    // 0x801DC1A8: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801DC1AC: lwc1        $f18, 0x64($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X64);
    // 0x801DC1B0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DC1B4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801DC1B8: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DC1BC: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DC1C0: addiu       $a3, $sp, 0xD0
    ctx->r7 = ADD32(ctx->r29, 0XD0);
    // 0x801DC1C4: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x801DC1C8: neg.s       $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = -ctx->f6.fl;
    // 0x801DC1CC: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    // 0x801DC1D0: swc1        $f16, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f16.u32l;
    // 0x801DC1D4: jal         0x80033898
    // 0x801DC1D8: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801DC1D8: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801DC1DC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801DC1E0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801DC1E4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801DC1E8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801DC1EC: addiu       $s1, $zero, 0x300
    ctx->r17 = ADD32(0, 0X300);
    // 0x801DC1F0: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x801DC1F4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801DC1F8: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_801DC1FC:
    // 0x801DC1FC: lwc1        $f18, 0xE8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DC200: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DC204: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DC208: subu        $a3, $s3, $s0
    ctx->r7 = SUB32(ctx->r19, ctx->r16);
    // 0x801DC20C: andi        $t3, $a3, 0xFF
    ctx->r11 = ctx->r7 & 0XFF;
    // 0x801DC210: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801DC214: addiu       $t4, $zero, 0x42
    ctx->r12 = ADD32(0, 0X42);
    // 0x801DC218: addiu       $t5, $zero, 0x21
    ctx->r13 = ADD32(0, 0X21);
    // 0x801DC21C: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x801DC220: addiu       $t7, $zero, 0x30
    ctx->r15 = ADD32(0, 0X30);
    // 0x801DC224: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x801DC228: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801DC22C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801DC230: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DC234: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x801DC238: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801DC23C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801DC240: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801DC244: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801DC248: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801DC24C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DC250: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x801DC254: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x801DC258: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801DC25C: jal         0x801CDA88
    // 0x801DC260: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_2;
    // 0x801DC260: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x801DC264: lwc1        $f4, 0xE8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DC268: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DC26C: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DC270: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DC274: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DC278: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DC27C: lwc1        $f4, 0xF0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DC280: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DC284: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    // 0x801DC288: addiu       $s1, $s1, 0x30
    ctx->r17 = ADD32(ctx->r17, 0X30);
    // 0x801DC28C: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DC290: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x801DC294: andi        $t8, $s1, 0xFFFF
    ctx->r24 = ctx->r17 & 0XFFFF;
    // 0x801DC298: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x801DC29C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801DC2A0: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x801DC2A4: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x801DC2A8: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x801DC2AC: bne         $t9, $zero, L_801DC1FC
    if (ctx->r25 != 0) {
        // 0x801DC2B0: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_801DC1FC;
    }
    // 0x801DC2B0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x801DC2B4: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x801DC2B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DC2BC: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801DC2C0: lwc1        $f8, 0xA4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801DC2C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DC2C8: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801DC2CC: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801DC2D0: addiu       $t0, $sp, 0xEC
    ctx->r8 = ADD32(ctx->r29, 0XEC);
    // 0x801DC2D4: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801DC2D8: addiu       $t1, $sp, 0xF0
    ctx->r9 = ADD32(ctx->r29, 0XF0);
    // 0x801DC2DC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801DC2E0: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801DC2E4: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x801DC2E8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801DC2EC: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DC2F0: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    // 0x801DC2F4: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DC2F8: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DC2FC: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    // 0x801DC300: jal         0x80033898
    // 0x801DC304: addiu       $a3, $sp, 0xE8
    ctx->r7 = ADD32(ctx->r29, 0XE8);
    func_80033898_34498(rdram, ctx);
        goto after_3;
    // 0x801DC304: addiu       $a3, $sp, 0xE8
    ctx->r7 = ADD32(ctx->r29, 0XE8);
    after_3:
    // 0x801DC308: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DC30C: lwc1        $f8, 0x5C($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X5C);
    // 0x801DC310: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DC314: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DC318: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DC31C: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DC320: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DC324: addiu       $t2, $sp, 0xE0
    ctx->r10 = ADD32(ctx->r29, 0XE0);
    // 0x801DC328: swc1        $f4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f4.u32l;
    // 0x801DC32C: lwc1        $f16, 0x60($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X60);
    // 0x801DC330: addiu       $t3, $sp, 0xE4
    ctx->r11 = ADD32(ctx->r29, 0XE4);
    // 0x801DC334: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DC338: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x801DC33C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DC340: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DC344: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DC348: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x801DC34C: lwc1        $f8, 0x64($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X64);
    // 0x801DC350: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801DC354: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801DC358: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DC35C: addiu       $a3, $sp, 0xDC
    ctx->r7 = ADD32(ctx->r29, 0XDC);
    // 0x801DC360: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x801DC364: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x801DC368: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    // 0x801DC36C: jal         0x80033898
    // 0x801DC370: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_4;
    // 0x801DC370: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x801DC374: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DC378: lui         $at, 0x4252
    ctx->r1 = S32(0X4252 << 16);
    // 0x801DC37C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DC380: addiu       $t4, $sp, 0xD4
    ctx->r12 = ADD32(ctx->r29, 0XD4);
    // 0x801DC384: addiu       $t5, $sp, 0xD8
    ctx->r13 = ADD32(ctx->r29, 0XD8);
    // 0x801DC388: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801DC38C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DC390: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DC394: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DC398: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DC39C: addiu       $a3, $sp, 0xD0
    ctx->r7 = ADD32(ctx->r29, 0XD0);
    // 0x801DC3A0: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x801DC3A4: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    // 0x801DC3A8: jal         0x80033898
    // 0x801DC3AC: swc1        $f16, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f16.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x801DC3AC: swc1        $f16, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x801DC3B0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DC3B4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DC3B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DC3BC: addiu       $t6, $sp, 0xC8
    ctx->r14 = ADD32(ctx->r29, 0XC8);
    // 0x801DC3C0: addiu       $t7, $sp, 0xCC
    ctx->r15 = ADD32(ctx->r29, 0XCC);
    // 0x801DC3C4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DC3C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801DC3CC: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DC3D0: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DC3D4: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DC3D8: addiu       $a3, $sp, 0xC4
    ctx->r7 = ADD32(ctx->r29, 0XC4);
    // 0x801DC3DC: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x801DC3E0: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x801DC3E4: jal         0x80033898
    // 0x801DC3E8: swc1        $f18, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f18.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_6;
    // 0x801DC3E8: swc1        $f18, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x801DC3EC: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x801DC3F0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801DC3F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DC3F8: jal         0x801DFBE0
    // 0x801DC3FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801DFBE0_64EA30(rdram, ctx);
        goto after_7;
    // 0x801DC3FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x801DC400: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DC404: ldc1        $f30, -0xD68($at)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r1, -0XD68);
    // 0x801DC408: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DC40C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801DC410: ldc1        $f28, -0xD60($at)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r1, -0XD60);
    // 0x801DC414: addiu       $s1, $zero, -0x2
    ctx->r17 = ADD32(0, -0X2);
L_801DC418:
    // 0x801DC418: jal         0x8000DD58
    // 0x801DC41C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8000DD58_E958(rdram, ctx);
        goto after_8;
    // 0x801DC41C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_8:
    // 0x801DC420: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801DC424: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801DC428: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801DC42C: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x801DC430: mul.d       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f28.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f28.d);
    // 0x801DC434: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
    // 0x801DC438: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DC43C: add.d       $f10, $f18, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f30.d); 
    ctx->f10.d = ctx->f18.d + ctx->f30.d;
    // 0x801DC440: jal         0x8000DD58
    // 0x801DC444: cvt.s.d     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f22.fl = CVT_S_D(ctx->f10.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_9;
    // 0x801DC444: cvt.s.d     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f22.fl = CVT_S_D(ctx->f10.d);
    after_9:
    // 0x801DC448: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x801DC44C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801DC450: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801DC454: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DC458: mul.d       $f16, $f6, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f28.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f28.d);
    // 0x801DC45C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DC460: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x801DC464: add.d       $f8, $f10, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f30.d); 
    ctx->f8.d = ctx->f10.d + ctx->f30.d;
    // 0x801DC468: jal         0x8000DD58
    // 0x801DC46C: cvt.s.d     $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f24.fl = CVT_S_D(ctx->f8.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_10;
    // 0x801DC46C: cvt.s.d     $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f24.fl = CVT_S_D(ctx->f8.d);
    after_10:
    // 0x801DC470: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801DC474: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x801DC478: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801DC47C: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x801DC480: mul.d       $f18, $f16, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f28.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f28.d);
    // 0x801DC484: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x801DC488: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x801DC48C: add.d       $f4, $f8, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f30.d); 
    ctx->f4.d = ctx->f8.d + ctx->f30.d;
    // 0x801DC490: jal         0x8000DD58
    // 0x801DC494: cvt.s.d     $f26, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f26.fl = CVT_S_D(ctx->f4.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_11;
    // 0x801DC494: cvt.s.d     $f26, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f26.fl = CVT_S_D(ctx->f4.d);
    after_11:
    // 0x801DC498: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x801DC49C: and         $t9, $t8, $s1
    ctx->r25 = ctx->r24 & ctx->r17;
    // 0x801DC4A0: addiu       $t0, $t9, -0xA
    ctx->r8 = ADD32(ctx->r25, -0XA);
    // 0x801DC4A4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x801DC4A8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DC4AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DC4B0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801DC4B4: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801DC4B8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DC4BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DC4C0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DC4C4: ldc1        $f16, -0xD58($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XD58);
    // 0x801DC4C8: add.s       $f20, $f6, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801DC4CC: lwc1        $f18, 0xE8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DC4D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DC4D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801DC4D8: cvt.d.s     $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f10.d = CVT_D_S(ctx->f20.fl);
    // 0x801DC4DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801DC4E0: div.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f8.d);
    // 0x801DC4E4: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DC4E8: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801DC4EC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DC4F0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DC4F4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DC4F8: mul.d       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x801DC4FC: lwc1        $f16, 0xD0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DC500: mul.s       $f8, $f10, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x801DC504: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    // 0x801DC508: mul.s       $f6, $f16, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x801DC50C: add.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x801DC510: lwc1        $f18, 0xC4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801DC514: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DC518: mul.s       $f8, $f18, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x801DC51C: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DC520: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DC524: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DC528: mul.s       $f18, $f6, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x801DC52C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DC530: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DC534: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801DC538: mul.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x801DC53C: add.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801DC540: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801DC544: mul.s       $f18, $f4, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x801DC548: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801DC54C: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DC550: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DC554: mul.s       $f4, $f16, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x801DC558: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x801DC55C: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DC560: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801DC564: mul.s       $f10, $f6, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x801DC568: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801DC56C: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801DC570: mul.s       $f4, $f8, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x801DC574: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DC578: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801DC57C: jal         0x801DFC60
    // 0x801DC580: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_801DFC60_64EAB0(rdram, ctx);
        goto after_12;
    // 0x801DC580: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x801DC584: lwc1        $f18, 0xE8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DC588: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DC58C: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DC590: lwc1        $f16, 0xD4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DC594: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DC598: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DC59C: lwc1        $f18, 0xF0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DC5A0: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801DC5A4: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x801DC5A8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x801DC5AC: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DC5B0: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x801DC5B4: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    // 0x801DC5B8: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x801DC5BC: bne         $t1, $zero, L_801DC418
    if (ctx->r9 != 0) {
        // 0x801DC5C0: swc1        $f8, 0xF0($sp)
        MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
            goto L_801DC418;
    }
    // 0x801DC5C0: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x801DC5C4: lw          $v0, 0xEC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XEC);
    // 0x801DC5C8: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DC5CC: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x801DC5D0: bnel        $t3, $zero, L_801DC628
    if (ctx->r11 != 0) {
        // 0x801DC5D4: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_801DC628;
    }
    goto skip_0;
    // 0x801DC5D4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    skip_0:
    // 0x801DC5D8: lhu         $t4, 0xE6($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XE6);
    // 0x801DC5DC: addiu       $at, $zero, 0x29A
    ctx->r1 = ADD32(0, 0X29A);
    // 0x801DC5E0: bne         $t4, $at, L_801DC600
    if (ctx->r12 != ctx->r1) {
        // 0x801DC5E4: nop
    
            goto L_801DC600;
    }
    // 0x801DC5E4: nop

    // 0x801DC5E8: jal         0x80038B98
    // 0x801DC5EC: addiu       $a0, $zero, 0x29B
    ctx->r4 = ADD32(0, 0X29B);
    func_80038B98_39798(rdram, ctx);
        goto after_13;
    // 0x801DC5EC: addiu       $a0, $zero, 0x29B
    ctx->r4 = ADD32(0, 0X29B);
    after_13:
    // 0x801DC5F0: lw          $t6, 0xEC($s4)
    ctx->r14 = MEM_W(ctx->r20, 0XEC);
    // 0x801DC5F4: addiu       $t5, $zero, 0x29B
    ctx->r13 = ADD32(0, 0X29B);
    // 0x801DC5F8: b           L_801DC614
    // 0x801DC5FC: sh          $t5, 0xE6($t6)
    MEM_H(0XE6, ctx->r14) = ctx->r13;
        goto L_801DC614;
    // 0x801DC5FC: sh          $t5, 0xE6($t6)
    MEM_H(0XE6, ctx->r14) = ctx->r13;
L_801DC600:
    // 0x801DC600: jal         0x80038B98
    // 0x801DC604: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    func_80038B98_39798(rdram, ctx);
        goto after_14;
    // 0x801DC604: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    after_14:
    // 0x801DC608: lw          $t8, 0xEC($s4)
    ctx->r24 = MEM_W(ctx->r20, 0XEC);
    // 0x801DC60C: addiu       $t7, $zero, 0x29A
    ctx->r15 = ADD32(0, 0X29A);
    // 0x801DC610: sh          $t7, 0xE6($t8)
    MEM_H(0XE6, ctx->r24) = ctx->r15;
L_801DC614:
    // 0x801DC614: lw          $v0, 0xEC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XEC);
    // 0x801DC618: lhu         $t9, 0xE2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DC61C: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x801DC620: sh          $t0, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r8;
    // 0x801DC624: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_801DC628:
    // 0x801DC628: jal         0x801E8850
    // 0x801DC62C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801E8850_6576A0(rdram, ctx);
        goto after_15;
    // 0x801DC62C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_15:
    // 0x801DC630: jal         0x801DBEB0
    // 0x801DC634: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_801DBEB0_64AD00(rdram, ctx);
        goto after_16;
    // 0x801DC634: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_16:
    // 0x801DC638: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x801DC63C: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x801DC640: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x801DC644: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x801DC648: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x801DC64C: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x801DC650: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x801DC654: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x801DC658: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x801DC65C: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x801DC660: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x801DC664: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x801DC668: jr          $ra
    // 0x801DC66C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    TRACE_RETURN()
    return;
    // 0x801DC66C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_801D9CD0_648B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9CD0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D9CD4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D9CD8: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801D9CDC: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801D9CE0: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801D9CE4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D9CE8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D9CEC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D9CF0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D9CF4: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801D9CF8: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D9CFC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D9D00: lui         $at, 0x403B
    ctx->r1 = S32(0X403B << 16);
    // 0x801D9D04: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D9D08: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D9D0C: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801D9D10: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801D9D14: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801D9D18: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801D9D1C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D9D20: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D9D24: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D9D28: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801D9D2C: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801D9D30: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D9D34: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D9D38: nop

    // 0x801D9D3C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D9D40: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D9D44: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801D9D48: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801D9D4C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D9D50: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D9D54: nop

    // 0x801D9D58: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801D9D5C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D9D60: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801D9D64: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801D9D68: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801D9D6C: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801D9D70: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D9D74: jal         0x80033898
    // 0x801D9D78: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801D9D78: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801D9D7C: addiu       $t8, $zero, 0x57
    ctx->r24 = ADD32(0, 0X57);
    // 0x801D9D80: addiu       $t9, $zero, 0x2B
    ctx->r25 = ADD32(0, 0X2B);
    // 0x801D9D84: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x801D9D88: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801D9D8C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801D9D90: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801D9D94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801D9D98: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D9D9C: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D9DA0: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D9DA4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801D9DA8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D9DAC: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D9DB0: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x801D9DB4: addiu       $t2, $zero, 0x300
    ctx->r10 = ADD32(0, 0X300);
    // 0x801D9DB8: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801D9DBC: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D9DC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D9DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D9DC8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D9DCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D9DD0: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x801D9DD4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D9DD8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801D9DDC: lwc1        $f18, 0x64($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D9DE0: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x801D9DE4: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x801D9DE8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D9DEC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D9DF0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D9DF4: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801D9DF8: jal         0x801CDA88
    // 0x801D9DFC: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801D9DFC: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801D9E00: addiu       $t3, $zero, 0xC0
    ctx->r11 = ADD32(0, 0XC0);
    // 0x801D9E04: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D9E08: lwc1        $f10, 0x5C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D9E0C: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D9E10: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D9E14: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D9E18: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D9E1C: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D9E20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D9E24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D9E28: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801D9E2C: lwc1        $f4, 0x60($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D9E30: lui         $a2, 0x42A5
    ctx->r6 = S32(0X42A5 << 16);
    // 0x801D9E34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D9E38: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D9E3C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801D9E40: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D9E44: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D9E48: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D9E4C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D9E50: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D9E54: jal         0x801DF9EC
    // 0x801D9E58: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801D9E58: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801D9E5C: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D9E60: lhu         $t4, 0xE2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D9E64: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x801D9E68: bnel        $t5, $zero, L_801D9EC0
    if (ctx->r13 != 0) {
        // 0x801D9E6C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801D9EC0;
    }
    goto skip_0;
    // 0x801D9E6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801D9E70: lhu         $t6, 0xE4($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XE4);
    // 0x801D9E74: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801D9E78: bne         $t6, $at, L_801D9E98
    if (ctx->r14 != ctx->r1) {
        // 0x801D9E7C: nop
    
            goto L_801D9E98;
    }
    // 0x801D9E7C: nop

    // 0x801D9E80: jal         0x80038B98
    // 0x801D9E84: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801D9E84: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801D9E88: lw          $t8, 0xEC($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XEC);
    // 0x801D9E8C: addiu       $t7, $zero, 0x299
    ctx->r15 = ADD32(0, 0X299);
    // 0x801D9E90: b           L_801D9EAC
    // 0x801D9E94: sh          $t7, 0xE4($t8)
    MEM_H(0XE4, ctx->r24) = ctx->r15;
        goto L_801D9EAC;
    // 0x801D9E94: sh          $t7, 0xE4($t8)
    MEM_H(0XE4, ctx->r24) = ctx->r15;
L_801D9E98:
    // 0x801D9E98: jal         0x80038B98
    // 0x801D9E9C: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801D9E9C: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801D9EA0: lw          $t0, 0xEC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XEC);
    // 0x801D9EA4: addiu       $t9, $zero, 0x298
    ctx->r25 = ADD32(0, 0X298);
    // 0x801D9EA8: sh          $t9, 0xE4($t0)
    MEM_H(0XE4, ctx->r8) = ctx->r25;
L_801D9EAC:
    // 0x801D9EAC: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D9EB0: lhu         $t1, 0xE2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D9EB4: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x801D9EB8: sh          $t2, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r10;
    // 0x801D9EBC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801D9EC0:
    // 0x801D9EC0: jal         0x801E8850
    // 0x801D9EC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801E8850_6576A0(rdram, ctx);
        goto after_5;
    // 0x801D9EC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x801D9EC8: jal         0x801D8BF0
    // 0x801D9ECC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_6;
    // 0x801D9ECC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801D9ED0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D9ED4: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801D9ED8: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801D9EDC: jr          $ra
    // 0x801D9EE0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D9EE0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801DD680_64C4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD680: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DD684: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DD688: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801DD68C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801DD690: addiu       $t6, $t6, 0x1360
    ctx->r14 = ADD32(ctx->r14, 0X1360);
    // 0x801DD694: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DD698: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801DD69C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801DD6A0: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801DD6A4: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x801DD6A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DD6AC: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801DD6B0: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801DD6B4: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801DD6B8: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x801DD6BC: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801DD6C0: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801DD6C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DD6C8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801DD6CC: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x801DD6D0: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x801DD6D4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DD6D8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DD6DC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DD6E0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DD6E4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DD6E8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DD6EC: jal         0x801E8378
    // 0x801DD6F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801DD6F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801DD6F4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DD6F8: jal         0x800352EC
    // 0x801DD6FC: addiu       $a0, $a0, -0x28EC
    ctx->r4 = ADD32(ctx->r4, -0X28EC);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801DD6FC: addiu       $a0, $a0, -0x28EC
    ctx->r4 = ADD32(ctx->r4, -0X28EC);
    after_1:
    // 0x801DD700: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DD704: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801DD708: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801DD70C: jr          $ra
    // 0x801DD710: nop

    TRACE_RETURN()
    return;
    // 0x801DD710: nop

;}
RECOMP_FUNC void func_801E31C8_652018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E31C8: lbu         $t6, 0x2C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X2C);
    // 0x801E31CC: beq         $t6, $zero, L_801E32AC
    if (ctx->r14 == 0) {
        // 0x801E31D0: nop
    
            goto L_801E32AC;
    }
    // 0x801E31D0: nop

    // 0x801E31D4: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801E31D8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E31DC: ldc1        $f6, -0xB88($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XB88);
    // 0x801E31E0: lwc1        $f0, 0x324($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X324);
    // 0x801E31E4: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x801E31E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E31EC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E31F0: lwc1        $f10, 0x64($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X64);
    // 0x801E31F4: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801E31F8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801E31FC: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x801E3200: sub.s       $f0, $f10, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x801E3204: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801E3208: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801E320C: nop

    // 0x801E3210: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x801E3214: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801E3218: nop

    // 0x801E321C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801E3220: beql        $a3, $zero, L_801E3270
    if (ctx->r7 == 0) {
        // 0x801E3224: mfc1        $a3, $f16
        ctx->r7 = (int32_t)ctx->f16.u32l;
            goto L_801E3270;
    }
    goto skip_0;
    // 0x801E3224: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x801E3228: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E322C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E3230: sub.s       $f16, $f0, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x801E3234: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801E3238: nop

    // 0x801E323C: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801E3240: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801E3244: nop

    // 0x801E3248: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801E324C: bne         $a3, $zero, L_801E3264
    if (ctx->r7 != 0) {
        // 0x801E3250: nop
    
            goto L_801E3264;
    }
    // 0x801E3250: nop

    // 0x801E3254: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x801E3258: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E325C: b           L_801E327C
    // 0x801E3260: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_801E327C;
    // 0x801E3260: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_801E3264:
    // 0x801E3264: b           L_801E327C
    // 0x801E3268: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_801E327C;
    // 0x801E3268: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x801E326C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
L_801E3270:
    // 0x801E3270: nop

    // 0x801E3274: bltz        $a3, L_801E3264
    if (SIGNED(ctx->r7) < 0) {
        // 0x801E3278: nop
    
            goto L_801E3264;
    }
    // 0x801E3278: nop

L_801E327C:
    // 0x801E327C: sll         $t8, $a3, 8
    ctx->r24 = S32(ctx->r7 << 8);
    // 0x801E3280: srl         $t0, $t8, 11
    ctx->r8 = S32(U32(ctx->r24) >> 11);
    // 0x801E3284: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x801E3288: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801E328C: andi        $t2, $t1, 0xFF00
    ctx->r10 = ctx->r9 & 0XFF00;
    // 0x801E3290: beq         $t2, $zero, L_801E32A8
    if (ctx->r10 == 0) {
        // 0x801E3294: andi        $a2, $t1, 0xFFFF
        ctx->r6 = ctx->r9 & 0XFFFF;
            goto L_801E32A8;
    }
    // 0x801E3294: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x801E3298: lhu         $t3, 0xE($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0XE);
    // 0x801E329C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E32A0: andi        $t4, $t3, 0xFFEF
    ctx->r12 = ctx->r11 & 0XFFEF;
    // 0x801E32A4: sh          $t4, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r12;
L_801E32A8:
    // 0x801E32A8: sb          $a2, 0x2C($a1)
    MEM_B(0X2C, ctx->r5) = ctx->r6;
L_801E32AC:
    // 0x801E32AC: jr          $ra
    // 0x801E32B0: nop

    TRACE_RETURN()
    return;
    // 0x801E32B0: nop

;}
RECOMP_FUNC void func_801D2078_640EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D207C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2080: lw          $a3, 0xEC($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XEC);
    // 0x801D2084: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x801D2088: sh          $t6, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r14;
    // 0x801D208C: lw          $t7, 0x2D0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X2D0);
    // 0x801D2090: addiu       $a1, $a3, 0x2D0
    ctx->r5 = ADD32(ctx->r7, 0X2D0);
    // 0x801D2094: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D2098: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x801D209C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D20A0: beq         $a0, $t7, L_801D20C8
    if (ctx->r4 == ctx->r15) {
        // 0x801D20A4: lbu         $t0, 0x315($a3)
        ctx->r8 = MEM_BU(ctx->r7, 0X315);
            goto L_801D20C8;
    }
    // 0x801D20A4: lbu         $t0, 0x315($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X315);
    // 0x801D20A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D20AC:
    // 0x801D20AC: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x801D20B0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801D20B4: addu        $t1, $v1, $t9
    ctx->r9 = ADD32(ctx->r3, ctx->r25);
    // 0x801D20B8: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x801D20BC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x801D20C0: bnel        $a2, $t2, L_801D20AC
    if (ctx->r6 != ctx->r10) {
        // 0x801D20C4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801D20AC;
    }
    goto skip_0;
    // 0x801D20C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
L_801D20C8:
    // 0x801D20C8: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x801D20CC: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    // 0x801D20D0: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D20D4: sb          $a0, 0x315($a3)
    MEM_B(0X315, ctx->r7) = ctx->r4;
    // 0x801D20D8: beq         $at, $zero, L_801D210C
    if (ctx->r1 == 0) {
        // 0x801D20DC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801D210C;
    }
    // 0x801D20DC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801D20E0:
    // 0x801D20E0: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x801D20E4: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x801D20E8: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x801D20EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801D20F0: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x801D20F4: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801D20F8: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x801D20FC: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D2100: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801D2104: bne         $at, $zero, L_801D20E0
    if (ctx->r1 != 0) {
        // 0x801D2108: sw          $t6, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->r14;
            goto L_801D20E0;
    }
    // 0x801D2108: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
L_801D210C:
    // 0x801D210C: jal         0x80034EF8
    // 0x801D2110: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x801D2110: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x801D2114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D211C: jr          $ra
    // 0x801D2120: nop

    TRACE_RETURN()
    return;
    // 0x801D2120: nop

;}
RECOMP_FUNC void func_801DB5C0_64A410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB5C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DB5C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DB5C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DB5CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DB5D0: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801DB5D4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801DB5D8: bgezl       $t6, L_801DB600
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DB5DC: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_801DB600;
    }
    goto skip_0;
    // 0x801DB5DC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x801DB5E0: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801DB5E4: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801DB5E8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DB5EC: jal         0x800352EC
    // 0x801DB5F0: addiu       $a0, $a0, -0x49B8
    ctx->r4 = ADD32(ctx->r4, -0X49B8);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DB5F0: addiu       $a0, $a0, -0x49B8
    ctx->r4 = ADD32(ctx->r4, -0X49B8);
    after_0:
    // 0x801DB5F4: b           L_801DB63C
    // 0x801DB5F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DB63C;
    // 0x801DB5F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DB5FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_801DB600:
    // 0x801DB600: jal         0x801CD504
    // 0x801DB604: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801DB604: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801DB608: beq         $v0, $zero, L_801DB620
    if (ctx->r2 == 0) {
        // 0x801DB60C: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801DB620;
    }
    // 0x801DB60C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DB610: jal         0x801D8BF0
    // 0x801DB614: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_2;
    // 0x801DB614: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801DB618: b           L_801DB63C
    // 0x801DB61C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DB63C;
    // 0x801DB61C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB620:
    // 0x801DB620: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DB624: jal         0x801CD634
    // 0x801DB628: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801DB628: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x801DB62C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DB630: jal         0x801CD780
    // 0x801DB634: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801DB634: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801DB638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB63C:
    // 0x801DB63C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DB640: jr          $ra
    // 0x801DB644: nop

    TRACE_RETURN()
    return;
    // 0x801DB644: nop

;}
RECOMP_FUNC void func_801CD0F0_63BF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD0F0: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x801CD0F4: lui         $at, 0x4089
    ctx->r1 = S32(0X4089 << 16);
    // 0x801CD0F8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801CD0FC: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CD100: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CD104: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CD108: ldc1        $f16, -0x11F8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X11F8);
    // 0x801CD10C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801CD110: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x801CD114: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x801CD118: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x801CD11C: jr          $ra
    // 0x801CD120: nop

    TRACE_RETURN()
    return;
    // 0x801CD120: nop

;}
RECOMP_FUNC void func_801D25B0_641400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D25B0: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x801D25B4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801D25B8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x801D25BC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x801D25C0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801D25C4: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x801D25C8: lw          $s2, 0xEC($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XEC);
    // 0x801D25CC: lhu         $v0, 0xEA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XEA);
    // 0x801D25D0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801D25D4: beq         $v0, $zero, L_801D25EC
    if (ctx->r2 == 0) {
        // 0x801D25D8: nop
    
            goto L_801D25EC;
    }
    // 0x801D25D8: nop

    // 0x801D25DC: jal         0x801D2124
    // 0x801D25E0: sh          $v0, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r2;
    func_801D2124_640F74(rdram, ctx);
        goto after_0;
    // 0x801D25E0: sh          $v0, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r2;
    after_0:
    // 0x801D25E4: beq         $v0, $zero, L_801D25F4
    if (ctx->r2 == 0) {
        // 0x801D25E8: lui         $at, 0x801F
        ctx->r1 = S32(0X801F << 16);
            goto L_801D25F4;
    }
    // 0x801D25E8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
L_801D25EC:
    // 0x801D25EC: b           L_801D2898
    // 0x801D25F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D2898;
    // 0x801D25F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D25F4:
    // 0x801D25F4: lw          $a0, 0xCC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XCC);
    // 0x801D25F8: lwc1        $f0, -0x1004($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1004);
    // 0x801D25FC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D2600: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801D2604: addiu       $a2, $a2, 0x180
    ctx->r6 = ADD32(ctx->r6, 0X180);
    // 0x801D2608: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D260C: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D2610: lui         $a3, 0x801F
    ctx->r7 = S32(0X801F << 16);
    // 0x801D2614: addiu       $t6, $zero, 0x4BD
    ctx->r14 = ADD32(0, 0X4BD);
    // 0x801D2618: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x801D261C: addiu       $a3, $a3, -0x1BE8
    ctx->r7 = ADD32(ctx->r7, -0X1BE8);
    // 0x801D2620: addiu       $a1, $a1, 0x2160
    ctx->r5 = ADD32(ctx->r5, 0X2160);
    // 0x801D2624: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801D2628: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801D262C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801D2630: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D2634: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D2638: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D263C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D2640: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801D2644: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x801D2648: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801D264C: jal         0x800358E8
    // 0x801D2650: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_1;
    // 0x801D2650: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x801D2654: beq         $v0, $zero, L_801D2898
    if (ctx->r2 == 0) {
        // 0x801D2658: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801D2898;
    }
    // 0x801D2658: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D265C: lw          $s1, 0x18($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X18);
    // 0x801D2660: sw          $s2, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->r18;
    // 0x801D2664: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x801D2668: addiu       $a2, $a2, -0x6D88
    ctx->r6 = ADD32(ctx->r6, -0X6D88);
    // 0x801D266C: lw          $a1, 0x94($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X94);
    // 0x801D2670: jal         0x8001B918
    // 0x801D2674: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B918_1C518(rdram, ctx);
        goto after_2;
    // 0x801D2674: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x801D2678: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D267C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D2680: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x801D2684: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801D2688: jal         0x800040A8
    // 0x801D268C: nop

    func_800040A8_4CA8(rdram, ctx);
        goto after_3;
    // 0x801D268C: nop

    after_3:
    // 0x801D2690: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D2694: addiu       $t7, $v1, -0x100
    ctx->r15 = ADD32(ctx->r3, -0X100);
    // 0x801D2698: andi        $v1, $t7, 0x3FF
    ctx->r3 = ctx->r15 & 0X3FF;
    // 0x801D269C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D26A0: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x801D26A4: sh          $zero, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = 0;
    // 0x801D26A8: sh          $zero, 0x60($sp)
    MEM_H(0X60, ctx->r29) = 0;
    // 0x801D26AC: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x801D26B0: bgez        $v1, L_801D26CC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801D26B4: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_801D26CC;
    }
    // 0x801D26B4: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x801D26B8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D26BC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801D26C0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D26C4: nop

    // 0x801D26C8: add.d       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f8.d + ctx->f10.d;
L_801D26CC:
    // 0x801D26CC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D26D0: ldc1        $f16, -0x1000($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X1000);
    // 0x801D26D4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D26D8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801D26DC: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x801D26E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D26E4: sh          $v1, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r3;
    // 0x801D26E8: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x801D26EC: jal         0x800417F0
    // 0x801D26F0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    __sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x801D26F0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_4:
    // 0x801D26F4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801D26F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D26FC: lhu         $v1, 0x5C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X5C);
    // 0x801D2700: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D2704: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801D2708: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x801D270C: nop

    // 0x801D2710: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x801D2714: neg.s       $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = -ctx->f8.fl;
    // 0x801D2718: bgez        $v1, L_801D2730
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801D271C: swc1        $f16, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
            goto L_801D2730;
    }
    // 0x801D271C: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801D2720: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D2724: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D2728: nop

    // 0x801D272C: add.d       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f4.d + ctx->f6.d;
L_801D2730:
    // 0x801D2730: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D2734: ldc1        $f10, -0xFF8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0XFF8);
    // 0x801D2738: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D273C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801D2740: mul.d       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f10.d);
    // 0x801D2744: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D2748: nop

    // 0x801D274C: div.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f8.d, ctx->f16.d);
    // 0x801D2750: jal         0x800419B0
    // 0x801D2754: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    __cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x801D2754: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_5:
    // 0x801D2758: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801D275C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D2760: addiu       $t2, $sp, 0x68
    ctx->r10 = ADD32(ctx->r29, 0X68);
    // 0x801D2764: addiu       $t3, $sp, 0x6C
    ctx->r11 = ADD32(ctx->r29, 0X6C);
    // 0x801D2768: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801D276C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801D2770: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x801D2774: lhu         $t9, 0x14($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X14);
    // 0x801D2778: sh          $t9, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r25;
    // 0x801D277C: lhu         $t0, 0x16($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X16);
    // 0x801D2780: andi        $a0, $t9, 0xFFFF
    ctx->r4 = ctx->r25 & 0XFFFF;
    // 0x801D2784: sh          $t0, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r8;
    // 0x801D2788: lhu         $t1, 0x18($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X18);
    // 0x801D278C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801D2790: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801D2794: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    // 0x801D2798: sh          $t1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r9;
    // 0x801D279C: jal         0x80033898
    // 0x801D27A0: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    func_80033898_34498(rdram, ctx);
        goto after_6;
    // 0x801D27A0: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    after_6:
    // 0x801D27A4: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D27A8: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x801D27AC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D27B0: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
    // 0x801D27B4: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D27B8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D27BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D27C0: swc1        $f8, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f8.u32l;
    // 0x801D27C4: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D27C8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D27CC: addiu       $t4, $sp, 0x68
    ctx->r12 = ADD32(ctx->r29, 0X68);
    // 0x801D27D0: swc1        $f16, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f16.u32l;
    // 0x801D27D4: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D27D8: addiu       $t5, $sp, 0x6C
    ctx->r13 = ADD32(ctx->r29, 0X6C);
    // 0x801D27DC: lhu         $a2, 0x60($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X60);
    // 0x801D27E0: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x801D27E4: lhu         $a1, 0x5E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X5E);
    // 0x801D27E8: mul.d       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D27EC: lhu         $a0, 0x5C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X5C);
    // 0x801D27F0: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801D27F4: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x801D27F8: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x801D27FC: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D2800: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801D2804: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801D2808: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x801D280C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D2810: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x801D2814: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D2818: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D281C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801D2820: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x801D2824: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D2828: mul.d       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801D282C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801D2830: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D2834: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x801D2838: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x801D283C: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x801D2840: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x801D2844: jal         0x80033898
    // 0x801D2848: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_7;
    // 0x801D2848: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x801D284C: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D2850: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801D2854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D2858: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801D285C: swc1        $f16, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f16.u32l;
    // 0x801D2860: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801D2864: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D2868: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x801D286C: swc1        $f4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f4.u32l;
    // 0x801D2870: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801D2874: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D2878: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801D287C: jal         0x801D2138
    // 0x801D2880: swc1        $f16, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f16.u32l;
    func_801D2138_640F88(rdram, ctx);
        goto after_8;
    // 0x801D2880: swc1        $f16, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f16.u32l;
    after_8:
    // 0x801D2884: lhu         $t6, 0x7E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X7E);
    // 0x801D2888: addiu       $a0, $zero, 0x22D
    ctx->r4 = ADD32(0, 0X22D);
    // 0x801D288C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801D2890: jal         0x80038B98
    // 0x801D2894: sh          $t7, 0xEA($s2)
    MEM_H(0XEA, ctx->r18) = ctx->r15;
    func_80038B98_39798(rdram, ctx);
        goto after_9;
    // 0x801D2894: sh          $t7, 0xEA($s2)
    MEM_H(0XEA, ctx->r18) = ctx->r15;
    after_9:
L_801D2898:
    // 0x801D2898: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x801D289C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801D28A0: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x801D28A4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x801D28A8: jr          $ra
    // 0x801D28AC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x801D28AC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_801DDFDC_64CE2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDFDC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801DDFE0: jr          $ra
    // 0x801DDFE4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801DDFE4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801D4A78_6438C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4A78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D4A7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D4A80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D4A84: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D4A88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D4A8C: bgezl       $t6, L_801D4AB4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D4A90: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_801D4AB4;
    }
    goto skip_0;
    // 0x801D4A90: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    skip_0:
    // 0x801D4A94: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D4A98: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D4A9C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D4AA0: jal         0x800352EC
    // 0x801D4AA4: addiu       $a0, $a0, 0x4C88
    ctx->r4 = ADD32(ctx->r4, 0X4C88);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D4AA4: addiu       $a0, $a0, 0x4C88
    ctx->r4 = ADD32(ctx->r4, 0X4C88);
    after_0:
    // 0x801D4AA8: b           L_801D4BA0
    // 0x801D4AAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D4BA0;
    // 0x801D4AAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D4AB0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
L_801D4AB4:
    // 0x801D4AB4: lbu         $t7, 0x9C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9C);
    // 0x801D4AB8: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D4ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D4AC0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801D4AC4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801D4AC8: lw          $t9, -0x7500($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7500);
    // 0x801D4ACC: jalr        $t9
    // 0x801D4AD0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801D4AD0: nop

    after_1:
    // 0x801D4AD4: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D4AD8: lui         $at, 0xC010
    ctx->r1 = S32(0XC010 << 16);
    // 0x801D4ADC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D4AE0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D4AE4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D4AE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D4AEC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D4AF0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D4AF4: jal         0x801CD504
    // 0x801D4AF8: swc1        $f16, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f16.u32l;
    func_801CD504_63C354(rdram, ctx);
        goto after_2;
    // 0x801D4AF8: swc1        $f16, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f16.u32l;
    after_2:
    // 0x801D4AFC: beq         $v0, $zero, L_801D4B14
    if (ctx->r2 == 0) {
        // 0x801D4B00: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_801D4B14;
    }
    // 0x801D4B00: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D4B04: jal         0x801D2B90
    // 0x801D4B08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_3;
    // 0x801D4B08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801D4B0C: b           L_801D4BA0
    // 0x801D4B10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D4BA0;
    // 0x801D4B10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D4B14:
    // 0x801D4B14: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x801D4B18: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D4B1C: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
    // 0x801D4B20: lw          $t0, 0xA0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XA0);
    // 0x801D4B24: lwc1        $f18, 0x28($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801D4B28: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D4B2C: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x801D4B30: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x801D4B34: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x801D4B38: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801D4B3C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D4B40: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D4B44: lhu         $t3, 0x16($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X16);
    // 0x801D4B48: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801D4B4C: mflo        $t2
    ctx->r10 = lo;
    // 0x801D4B50: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x801D4B54: andi        $t4, $v0, 0x3FF
    ctx->r12 = ctx->r2 & 0X3FF;
    // 0x801D4B58: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x801D4B5C: sh          $t4, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r12;
    // 0x801D4B60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D4B64: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801D4B68: nop

    // 0x801D4B6C: bc1f        L_801D4B88
    if (!c1cs) {
        // 0x801D4B70: nop
    
            goto L_801D4B88;
    }
    // 0x801D4B70: nop

    // 0x801D4B74: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
L_801D4B78:
    // 0x801D4B78: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801D4B7C: nop

    // 0x801D4B80: bc1tl       L_801D4B78
    if (c1cs) {
        // 0x801D4B84: sub.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_801D4B78;
    }
    goto skip_1;
    // 0x801D4B84: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    skip_1:
L_801D4B88:
    // 0x801D4B88: jal         0x801CD634
    // 0x801D4B8C: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    func_801CD634_63C484(rdram, ctx);
        goto after_4;
    // 0x801D4B8C: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    after_4:
    // 0x801D4B90: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D4B94: jal         0x801CD780
    // 0x801D4B98: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_5;
    // 0x801D4B98: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x801D4B9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D4BA0:
    // 0x801D4BA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D4BA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D4BA8: jr          $ra
    // 0x801D4BAC: nop

    TRACE_RETURN()
    return;
    // 0x801D4BAC: nop

;}
RECOMP_FUNC void func_801CCE64_63BCB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCE64: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801CCE68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CCE6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CCE70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CCE74: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x801CCE78: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801CCE7C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x801CCE80: jal         0x801CD0B4
    // 0x801CCE84: lh          $a0, 0x46($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X46);
    func_801CD0B4_63BF04(rdram, ctx);
        goto after_0;
    // 0x801CCE84: lh          $a0, 0x46($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X46);
    after_0:
    // 0x801CCE88: lw          $a1, 0x64($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X64);
    // 0x801CCE8C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x801CCE90: jal         0x801CCD10
    // 0x801CCE94: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_801CCD10_63BB60(rdram, ctx);
        goto after_1;
    // 0x801CCE94: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x801CCE98: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801CCE9C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x801CCEA0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x801CCEA4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x801CCEA8: sw          $v0, 0x318($a0)
    MEM_W(0X318, ctx->r4) = ctx->r2;
    // 0x801CCEAC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x801CCEB0: jal         0x801CCD90
    // 0x801CCEB4: lh          $a1, 0x46($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X46);
    func_801CCD90_63BBE0(rdram, ctx);
        goto after_2;
    // 0x801CCEB4: lh          $a1, 0x46($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X46);
    after_2:
    // 0x801CCEB8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CCEBC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801CCEC0: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801CCEC4: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801CCEC8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x801CCECC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801CCED0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801CCED4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x801CCED8: bne         $v1, $zero, L_801CCF28
    if (ctx->r3 != 0) {
        // 0x801CCEDC: addu        $a2, $a2, $t7
        ctx->r6 = ADD32(ctx->r6, ctx->r15);
            goto L_801CCF28;
    }
    // 0x801CCEDC: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x801CCEE0: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x801CCEE4: lui         $at, 0x4089
    ctx->r1 = S32(0X4089 << 16);
    // 0x801CCEE8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801CCEEC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CCEF0: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x801CCEF4: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x801CCEF8: nop

    // 0x801CCEFC: slt         $t0, $t9, $a2
    ctx->r8 = SIGNED(ctx->r25) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x801CCF00: xori        $t0, $t0, 0x1
    ctx->r8 = ctx->r8 ^ 0X1;
    // 0x801CCF04: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x801CCF08: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x801CCF0C: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x801CCF10: nop

    // 0x801CCF14: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x801CCF18: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801CCF1C: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x801CCF20: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x801CCF24: nop

L_801CCF28:
    // 0x801CCF28: mul.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x801CCF2C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801CCF30: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801CCF34: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x801CCF38: bgezl       $v1, L_801CCF48
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801CCF3C: subu        $t6, $a0, $a2
        ctx->r14 = SUB32(ctx->r4, ctx->r6);
            goto L_801CCF48;
    }
    goto skip_0;
    // 0x801CCF3C: subu        $t6, $a0, $a2
    ctx->r14 = SUB32(ctx->r4, ctx->r6);
    skip_0:
    // 0x801CCF40: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x801CCF44: subu        $t6, $a0, $a2
    ctx->r14 = SUB32(ctx->r4, ctx->r6);
L_801CCF48:
    // 0x801CCF48: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x801CCF4C: sll         $t5, $v0, 1
    ctx->r13 = S32(ctx->r2 << 1);
    // 0x801CCF50: sltu        $at, $t5, $t7
    ctx->r1 = ctx->r13 < ctx->r15 ? 1 : 0;
    // 0x801CCF54: bne         $at, $zero, L_801CCF64
    if (ctx->r1 != 0) {
        // 0x801CCF58: addu        $a2, $a2, $v1
        ctx->r6 = ADD32(ctx->r6, ctx->r3);
            goto L_801CCF64;
    }
    // 0x801CCF58: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x801CCF5C: b           L_801CCF64
    // 0x801CCF60: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
        goto L_801CCF64;
    // 0x801CCF60: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
L_801CCF64:
    // 0x801CCF64: lwc1        $f10, 0x5C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x801CCF68: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x801CCF6C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x801CCF70: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x801CCF74: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CCF78: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801CCF7C: nop

    // 0x801CCF80: addiu       $a2, $a2, -0x64
    ctx->r6 = ADD32(ctx->r6, -0X64);
    // 0x801CCF84: div         $zero, $a2, $v0
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r2)));
    // 0x801CCF88: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801CCF8C: mfhi        $t9
    ctx->r25 = hi;
    // 0x801CCF90: swc1        $f8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f8.u32l;
    // 0x801CCF94: bne         $v0, $zero, L_801CCFA0
    if (ctx->r2 != 0) {
        // 0x801CCF98: nop
    
            goto L_801CCFA0;
    }
    // 0x801CCF98: nop

    // 0x801CCF9C: break       7
    do_break(2149371804);
L_801CCFA0:
    // 0x801CCFA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CCFA4: bne         $v0, $at, L_801CCFB8
    if (ctx->r2 != ctx->r1) {
        // 0x801CCFA8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CCFB8;
    }
    // 0x801CCFA8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CCFAC: bne         $a2, $at, L_801CCFB8
    if (ctx->r6 != ctx->r1) {
        // 0x801CCFB0: nop
    
            goto L_801CCFB8;
    }
    // 0x801CCFB0: nop

    // 0x801CCFB4: break       6
    do_break(2149371828);
L_801CCFB8:
    // 0x801CCFB8: beql        $t9, $zero, L_801CD074
    if (ctx->r25 == 0) {
        // 0x801CCFBC: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_801CD074;
    }
    goto skip_1;
    // 0x801CCFBC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_1:
    // 0x801CCFC0: div         $zero, $a2, $v0
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r2)));
    // 0x801CCFC4: lw          $v1, 0xAC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XAC);
    // 0x801CCFC8: mflo        $t0
    ctx->r8 = lo;
    // 0x801CCFCC: lh          $a1, 0x42($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X42);
    // 0x801CCFD0: slti        $t1, $v1, 0x0
    ctx->r9 = SIGNED(ctx->r3) < 0X0 ? 1 : 0;
    // 0x801CCFD4: xori        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 ^ 0X1;
    // 0x801CCFD8: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x801CCFDC: multu       $t2, $v0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CCFE0: bne         $v0, $zero, L_801CCFEC
    if (ctx->r2 != 0) {
        // 0x801CCFE4: nop
    
            goto L_801CCFEC;
    }
    // 0x801CCFE4: nop

    // 0x801CCFE8: break       7
    do_break(2149371880);
L_801CCFEC:
    // 0x801CCFEC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CCFF0: bne         $v0, $at, L_801CD004
    if (ctx->r2 != ctx->r1) {
        // 0x801CCFF4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CD004;
    }
    // 0x801CCFF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CCFF8: bne         $a2, $at, L_801CD004
    if (ctx->r6 != ctx->r1) {
        // 0x801CCFFC: nop
    
            goto L_801CD004;
    }
    // 0x801CCFFC: nop

    // 0x801CD000: break       6
    do_break(2149371904);
L_801CD004:
    // 0x801CD004: mflo        $a0
    ctx->r4 = lo;
    // 0x801CD008: subu        $t3, $a0, $a2
    ctx->r11 = SUB32(ctx->r4, ctx->r6);
    // 0x801CD00C: addiu       $t4, $t3, 0xA
    ctx->r12 = ADD32(ctx->r11, 0XA);
    // 0x801CD010: sltiu       $at, $t4, 0x14
    ctx->r1 = ctx->r12 < 0X14 ? 1 : 0;
    // 0x801CD014: beq         $at, $zero, L_801CD054
    if (ctx->r1 == 0) {
        // 0x801CD018: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_801CD054;
    }
    // 0x801CD018: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801CD01C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801CD020: jal         0x801CD124
    // 0x801CD024: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801CD124_63BF74(rdram, ctx);
        goto after_3;
    // 0x801CD024: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_3:
    // 0x801CD028: lw          $t6, 0xAC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XAC);
    // 0x801CD02C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x801CD030: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801CD034: beq         $v0, $t6, L_801CD054
    if (ctx->r2 == ctx->r14) {
        // 0x801CD038: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801CD054;
    }
    // 0x801CD038: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801CD03C: addiu       $t5, $a3, 0x64
    ctx->r13 = ADD32(ctx->r7, 0X64);
    // 0x801CD040: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x801CD044: sw          $zero, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = 0;
    // 0x801CD048: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801CD04C: b           L_801CD0A0
    // 0x801CD050: swc1        $f4, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f4.u32l;
        goto L_801CD0A0;
    // 0x801CD050: swc1        $f4, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f4.u32l;
L_801CD054:
    // 0x801CD054: addu        $t7, $a2, $v1
    ctx->r15 = ADD32(ctx->r6, ctx->r3);
    // 0x801CD058: addiu       $t8, $t7, 0x64
    ctx->r24 = ADD32(ctx->r15, 0X64);
    // 0x801CD05C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x801CD060: nop

    // 0x801CD064: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801CD068: b           L_801CD0A0
    // 0x801CD06C: swc1        $f8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f8.u32l;
        goto L_801CD0A0;
    // 0x801CD06C: swc1        $f8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f8.u32l;
    // 0x801CD070: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_801CD074:
    // 0x801CD074: lh          $a1, 0x42($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X42);
    // 0x801CD078: jal         0x801CD124
    // 0x801CD07C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_801CD124_63BF74(rdram, ctx);
        goto after_4;
    // 0x801CD07C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_4:
    // 0x801CD080: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x801CD084: sw          $v0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r2;
    // 0x801CD088: addu        $t9, $a2, $v0
    ctx->r25 = ADD32(ctx->r6, ctx->r2);
    // 0x801CD08C: addiu       $t0, $t9, 0x64
    ctx->r8 = ADD32(ctx->r25, 0X64);
    // 0x801CD090: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x801CD094: nop

    // 0x801CD098: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801CD09C: swc1        $f16, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f16.u32l;
L_801CD0A0:
    // 0x801CD0A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD0A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CD0A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801CD0AC: jr          $ra
    // 0x801CD0B0: nop

    TRACE_RETURN()
    return;
    // 0x801CD0B0: nop

;}
RECOMP_FUNC void func_801D8510_647360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8510: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D8514: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D8518: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D851C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801D8520: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D8524: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801D8528: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D852C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801D8530: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D8534: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D8538: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D853C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D8540: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D8544: jal         0x801E8378
    // 0x801D8548: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801D8548: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801D854C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D8550: jal         0x800352EC
    // 0x801D8554: addiu       $a0, $a0, -0x7A98
    ctx->r4 = ADD32(ctx->r4, -0X7A98);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801D8554: addiu       $a0, $a0, -0x7A98
    ctx->r4 = ADD32(ctx->r4, -0X7A98);
    after_1:
    // 0x801D8558: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801D855C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D8560: jr          $ra
    // 0x801D8564: nop

    TRACE_RETURN()
    return;
    // 0x801D8564: nop

;}
RECOMP_FUNC void func_801CD1C0_63C010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD1C0: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x801CD1C4: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x801CD1C8: sw          $s1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r17;
    // 0x801CD1CC: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x801CD1D0: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x801CD1D4: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x801CD1D8: lwc1        $f4, 0x70($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801CD1DC: lwc1        $f22, 0x5C($a0)
    ctx->f22.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x801CD1E0: lwc1        $f20, 0x64($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801CD1E4: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x801CD1E8: lwc1        $f6, 0xD4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x801CD1EC: lwc1        $f8, 0xD8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x801CD1F0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CD1F4: sub.s       $f2, $f22, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f22.fl - ctx->f6.fl;
    // 0x801CD1F8: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CD1FC: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801CD200: sub.s       $f12, $f20, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f8.fl;
    // 0x801CD204: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801CD208: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801CD20C: lhu         $t7, -0x520C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X520C);
    // 0x801CD210: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801CD214: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CD218: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CD21C: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CD220: bne         $t7, $at, L_801CD464
    if (ctx->r15 != ctx->r1) {
        // 0x801CD224: sqrt.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
            goto L_801CD464;
    }
    // 0x801CD224: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    // 0x801CD228: lwc1        $f12, 0x330($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X330);
    // 0x801CD22C: lwc1        $f18, 0x60($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801CD230: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801CD234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CD238: c.le.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl <= ctx->f12.fl;
    // 0x801CD23C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CD240: bc1fl       L_801CD250
    if (!c1cs) {
        // 0x801CD244: lwc1        $f4, 0x6C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X6C);
            goto L_801CD250;
    }
    goto skip_0;
    // 0x801CD244: lwc1        $f4, 0x6C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X6C);
    skip_0:
    // 0x801CD248: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801CD24C: lwc1        $f4, 0x6C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X6C);
L_801CD250:
    // 0x801CD250: andi        $t8, $v1, 0xFF
    ctx->r24 = ctx->r3 & 0XFF;
    // 0x801CD254: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x801CD258: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x801CD25C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801CD260: bc1fl       L_801CD270
    if (!c1cs) {
        // 0x801CD264: andi        $t9, $v0, 0xFF
        ctx->r25 = ctx->r2 & 0XFF;
            goto L_801CD270;
    }
    goto skip_1;
    // 0x801CD264: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    skip_1:
    // 0x801CD268: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801CD26C: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
L_801CD270:
    // 0x801CD270: or          $t1, $v1, $t9
    ctx->r9 = ctx->r3 | ctx->r25;
    // 0x801CD274: beql        $t1, $zero, L_801CD460
    if (ctx->r9 == 0) {
        // 0x801CD278: swc1        $f22, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->f22.u32l;
            goto L_801CD460;
    }
    goto skip_2;
    // 0x801CD278: swc1        $f22, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f22.u32l;
    skip_2:
    // 0x801CD27C: lw          $a1, 0xD0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD0);
    // 0x801CD280: swc1        $f14, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f14.u32l;
    // 0x801CD284: swc1        $f12, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f12.u32l;
    // 0x801CD288: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x801CD28C: sw          $v1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r3;
    // 0x801CD290: jal         0x801E117C
    // 0x801CD294: sb          $v1, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r3;
    func_801E117C_64FFCC(rdram, ctx);
        goto after_0;
    // 0x801CD294: sb          $v1, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r3;
    after_0:
    // 0x801CD298: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x801CD29C: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x801CD2A0: lbu         $v1, 0xA3($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0XA3);
    // 0x801CD2A4: lwc1        $f12, 0x9C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801CD2A8: lwc1        $f14, 0x88($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801CD2AC: and         $t2, $a3, $t0
    ctx->r10 = ctx->r7 & ctx->r8;
    // 0x801CD2B0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801CD2B4: beq         $t2, $zero, L_801CD3C8
    if (ctx->r10 == 0) {
        // 0x801CD2B8: sw          $v0, 0xD0($s0)
        MEM_W(0XD0, ctx->r16) = ctx->r2;
            goto L_801CD3C8;
    }
    // 0x801CD2B8: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x801CD2BC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801CD2C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CD2C4: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x801CD2C8: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x801CD2CC: nop

    // 0x801CD2D0: bc1tl       L_801CD468
    if (c1cs) {
        // 0x801CD2D4: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_801CD468;
    }
    goto skip_3;
    // 0x801CD2D4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_3:
    // 0x801CD2D8: jal         0x8000DD58
    // 0x801CD2DC: swc1        $f12, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f12.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801CD2DC: swc1        $f12, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x801CD2E0: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801CD2E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CD2E8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CD2EC: sub.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f8.fl;
    // 0x801CD2F0: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x801CD2F4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801CD2F8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CD2FC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801CD300: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CD304: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x801CD308: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CD30C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x801CD310: addiu       $t3, $v0, 0x2
    ctx->r11 = ADD32(ctx->r2, 0X2);
    // 0x801CD314: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x801CD318: addiu       $t5, $t4, 0x14
    ctx->r13 = ADD32(ctx->r12, 0X14);
    // 0x801CD31C: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x801CD320: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801CD324: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CD328: lwc1        $f12, 0x9C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801CD32C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x801CD330: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x801CD334: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x801CD338: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x801CD33C: addiu       $t1, $zero, 0x93
    ctx->r9 = ADD32(0, 0X93);
    // 0x801CD340: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x801CD344: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x801CD348: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x801CD34C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801CD350: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801CD354: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801CD358: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CD35C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CD360: addiu       $a3, $zero, 0xEF
    ctx->r7 = ADD32(0, 0XEF);
    // 0x801CD364: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CD368: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801CD36C: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x801CD370: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801CD374: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x801CD378: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x801CD37C: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x801CD380: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x801CD384: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801CD388: sub.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x801CD38C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801CD390: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801CD394: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801CD398: add.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x801CD39C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CD3A0: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x801CD3A4: nop

    // 0x801CD3A8: mul.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801CD3AC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x801CD3B0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801CD3B4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x801CD3B8: jal         0x801E0F30
    // 0x801CD3BC: nop

    func_801E0F30_64FD80(rdram, ctx);
        goto after_2;
    // 0x801CD3BC: nop

    after_2:
    // 0x801CD3C0: b           L_801CD460
    // 0x801CD3C4: swc1        $f22, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f22.u32l;
        goto L_801CD460;
    // 0x801CD3C4: swc1        $f22, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f22.u32l;
L_801CD3C8:
    // 0x801CD3C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CD3CC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CD3D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CD3D4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801CD3D8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x801CD3DC: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x801CD3E0: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x801CD3E4: addiu       $t7, $zero, 0x93
    ctx->r15 = ADD32(0, 0X93);
    // 0x801CD3E8: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x801CD3EC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801CD3F0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x801CD3F4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x801CD3F8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801CD3FC: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801CD400: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801CD404: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801CD408: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CD40C: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    // 0x801CD410: addiu       $a3, $zero, 0xEF
    ctx->r7 = ADD32(0, 0XEF);
    // 0x801CD414: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CD418: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801CD41C: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801CD420: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x801CD424: sb          $v1, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r3;
    // 0x801CD428: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x801CD42C: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x801CD430: jal         0x801E0F30
    // 0x801CD434: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    func_801E0F30_64FD80(rdram, ctx);
        goto after_3;
    // 0x801CD434: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x801CD438: lbu         $v1, 0xA3($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0XA3);
    // 0x801CD43C: beq         $v1, $zero, L_801CD454
    if (ctx->r3 == 0) {
        // 0x801CD440: nop
    
            goto L_801CD454;
    }
    // 0x801CD440: nop

    // 0x801CD444: jal         0x80038B98
    // 0x801CD448: addiu       $a0, $zero, 0x29E
    ctx->r4 = ADD32(0, 0X29E);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801CD448: addiu       $a0, $zero, 0x29E
    ctx->r4 = ADD32(0, 0X29E);
    after_4:
    // 0x801CD44C: b           L_801CD460
    // 0x801CD450: swc1        $f22, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f22.u32l;
        goto L_801CD460;
    // 0x801CD450: swc1        $f22, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f22.u32l;
L_801CD454:
    // 0x801CD454: jal         0x80038B98
    // 0x801CD458: addiu       $a0, $zero, 0x29F
    ctx->r4 = ADD32(0, 0X29F);
    func_80038B98_39798(rdram, ctx);
        goto after_5;
    // 0x801CD458: addiu       $a0, $zero, 0x29F
    ctx->r4 = ADD32(0, 0X29F);
    after_5:
    // 0x801CD45C: swc1        $f22, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f22.u32l;
L_801CD460:
    // 0x801CD460: swc1        $f20, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f20.u32l;
L_801CD464:
    // 0x801CD464: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_801CD468:
    // 0x801CD468: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x801CD46C: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x801CD470: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x801CD474: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x801CD478: jr          $ra
    // 0x801CD47C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    TRACE_RETURN()
    return;
    // 0x801CD47C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_801DC670_64B4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC670: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DC674: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DC678: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801DC67C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801DC680: addiu       $t6, $t6, 0x11B0
    ctx->r14 = ADD32(ctx->r14, 0X11B0);
    // 0x801DC684: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DC688: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801DC68C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801DC690: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801DC694: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x801DC698: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DC69C: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801DC6A0: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801DC6A4: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801DC6A8: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x801DC6AC: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801DC6B0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801DC6B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DC6B8: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x801DC6BC: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x801DC6C0: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x801DC6C4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DC6C8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DC6CC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DC6D0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DC6D4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DC6D8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DC6DC: jal         0x801E8378
    // 0x801DC6E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801DC6E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801DC6E4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DC6E8: jal         0x800352EC
    // 0x801DC6EC: addiu       $a0, $a0, -0x38FC
    ctx->r4 = ADD32(ctx->r4, -0X38FC);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801DC6EC: addiu       $a0, $a0, -0x38FC
    ctx->r4 = ADD32(ctx->r4, -0X38FC);
    after_1:
    // 0x801DC6F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DC6F4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801DC6F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801DC6FC: jr          $ra
    // 0x801DC700: nop

    TRACE_RETURN()
    return;
    // 0x801DC700: nop

;}
RECOMP_FUNC void func_801D2040_640E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2044: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D2048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D204C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D2050: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D2054: jal         0x8003521C
    // 0x801D2058: addiu       $a0, $a0, 0x206C
    ctx->r4 = ADD32(ctx->r4, 0X206C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801D2058: addiu       $a0, $a0, 0x206C
    ctx->r4 = ADD32(ctx->r4, 0X206C);
    after_0:
    // 0x801D205C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D2064: jr          $ra
    // 0x801D2068: nop

    TRACE_RETURN()
    return;
    // 0x801D2068: nop

;}
RECOMP_FUNC void func_801DF600_64E450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DF604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DF608: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DF60C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DF610: sb          $zero, 0x68($a0)
    MEM_B(0X68, ctx->r4) = 0;
    // 0x801DF614: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DF618: jal         0x800352EC
    // 0x801DF61C: addiu       $a0, $a0, -0x9D0
    ctx->r4 = ADD32(ctx->r4, -0X9D0);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DF61C: addiu       $a0, $a0, -0x9D0
    ctx->r4 = ADD32(ctx->r4, -0X9D0);
    after_0:
    // 0x801DF620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DF624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DF628: jr          $ra
    // 0x801DF62C: nop

    TRACE_RETURN()
    return;
    // 0x801DF62C: nop

;}
RECOMP_FUNC void func_801D8E18_647C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8E18: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D8E1C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D8E20: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801D8E24: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801D8E28: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801D8E2C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D8E30: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D8E34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D8E38: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D8E3C: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801D8E40: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D8E44: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D8E48: lui         $at, 0x4039
    ctx->r1 = S32(0X4039 << 16);
    // 0x801D8E4C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D8E50: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D8E54: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801D8E58: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801D8E5C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801D8E60: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801D8E64: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D8E68: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D8E6C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D8E70: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801D8E74: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801D8E78: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D8E7C: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D8E80: nop

    // 0x801D8E84: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D8E88: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D8E8C: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801D8E90: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801D8E94: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D8E98: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D8E9C: nop

    // 0x801D8EA0: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801D8EA4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D8EA8: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801D8EAC: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801D8EB0: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801D8EB4: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801D8EB8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D8EBC: jal         0x80033898
    // 0x801D8EC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801D8EC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801D8EC4: addiu       $t8, $zero, 0x29
    ctx->r24 = ADD32(0, 0X29);
    // 0x801D8EC8: addiu       $t9, $zero, 0x39
    ctx->r25 = ADD32(0, 0X39);
    // 0x801D8ECC: addiu       $t0, $zero, 0x39
    ctx->r8 = ADD32(0, 0X39);
    // 0x801D8ED0: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801D8ED4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801D8ED8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801D8EDC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801D8EE0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D8EE4: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D8EE8: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D8EEC: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D8EF0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801D8EF4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D8EF8: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D8EFC: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x801D8F00: addiu       $t3, $zero, 0x300
    ctx->r11 = ADD32(0, 0X300);
    // 0x801D8F04: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801D8F08: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D8F0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D8F10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D8F14: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D8F18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D8F1C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D8F20: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D8F24: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801D8F28: lwc1        $f18, 0x64($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D8F2C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x801D8F30: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801D8F34: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D8F38: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D8F3C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D8F40: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801D8F44: jal         0x801CDA88
    // 0x801D8F48: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801D8F48: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801D8F4C: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x801D8F50: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D8F54: lwc1        $f10, 0x5C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D8F58: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D8F5C: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D8F60: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D8F64: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D8F68: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D8F6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D8F70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D8F74: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801D8F78: lwc1        $f4, 0x60($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D8F7C: lui         $a2, 0x4296
    ctx->r6 = S32(0X4296 << 16);
    // 0x801D8F80: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D8F84: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D8F88: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801D8F8C: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D8F90: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D8F94: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D8F98: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D8F9C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D8FA0: jal         0x801DF9EC
    // 0x801D8FA4: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801D8FA4: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801D8FA8: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D8FAC: lhu         $t5, 0xE2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D8FB0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801D8FB4: bnel        $t6, $zero, L_801D900C
    if (ctx->r14 != 0) {
        // 0x801D8FB8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801D900C;
    }
    goto skip_0;
    // 0x801D8FB8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801D8FBC: lhu         $t7, 0xE4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE4);
    // 0x801D8FC0: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801D8FC4: bne         $t7, $at, L_801D8FE4
    if (ctx->r15 != ctx->r1) {
        // 0x801D8FC8: nop
    
            goto L_801D8FE4;
    }
    // 0x801D8FC8: nop

    // 0x801D8FCC: jal         0x80038B98
    // 0x801D8FD0: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801D8FD0: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801D8FD4: lw          $t9, 0xEC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XEC);
    // 0x801D8FD8: addiu       $t8, $zero, 0x299
    ctx->r24 = ADD32(0, 0X299);
    // 0x801D8FDC: b           L_801D8FF8
    // 0x801D8FE0: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
        goto L_801D8FF8;
    // 0x801D8FE0: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
L_801D8FE4:
    // 0x801D8FE4: jal         0x80038B98
    // 0x801D8FE8: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801D8FE8: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801D8FEC: lw          $t1, 0xEC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XEC);
    // 0x801D8FF0: addiu       $t0, $zero, 0x298
    ctx->r8 = ADD32(0, 0X298);
    // 0x801D8FF4: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_801D8FF8:
    // 0x801D8FF8: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D8FFC: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D9000: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x801D9004: sh          $t3, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r11;
    // 0x801D9008: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801D900C:
    // 0x801D900C: jal         0x801E8850
    // 0x801D9010: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_801E8850_6576A0(rdram, ctx);
        goto after_5;
    // 0x801D9010: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x801D9014: jal         0x801D8BF0
    // 0x801D9018: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_6;
    // 0x801D9018: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801D901C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D9020: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801D9024: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801D9028: jr          $ra
    // 0x801D902C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D902C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801DDD70_64CBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDD70: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DDD74: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801DDD78: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DDD7C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DDD80: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801DDD84: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801DDD88: addiu       $t6, $t6, 0x650
    ctx->r14 = ADD32(ctx->r14, 0X650);
    // 0x801DDD8C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DDD90: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801DDD94: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801DDD98: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x801DDD9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DDDA0: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801DDDA4: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x801DDDA8: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801DDDAC: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801DDDB0: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801DDDB4: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x801DDDB8: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801DDDBC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DDDC0: swc1        $f4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f4.u32l;
    // 0x801DDDC4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x801DDDC8: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    // 0x801DDDCC: lui         $a3, 0x4352
    ctx->r7 = S32(0X4352 << 16);
    // 0x801DDDD0: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x801DDDD4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DDDD8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DDDDC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DDDE0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DDDE4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DDDE8: jal         0x801E8378
    // 0x801DDDEC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801DDDEC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801DDDF0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DDDF4: jal         0x800352EC
    // 0x801DDDF8: addiu       $a0, $a0, -0x21F0
    ctx->r4 = ADD32(ctx->r4, -0X21F0);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801DDDF8: addiu       $a0, $a0, -0x21F0
    ctx->r4 = ADD32(ctx->r4, -0X21F0);
    after_1:
    // 0x801DDDFC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DDE00: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801DDE04: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801DDE08: jr          $ra
    // 0x801DDE0C: nop

    TRACE_RETURN()
    return;
    // 0x801DDE0C: nop

;}
RECOMP_FUNC void func_801E0C74_64FAC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0C74: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801E0C78: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E0C7C: ldc1        $f6, -0xC48($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XC48);
    // 0x801E0C80: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x801E0C84: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801E0C88: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801E0C8C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E0C90: addiu       $a2, $a2, 0x58
    ctx->r6 = ADD32(ctx->r6, 0X58);
    // 0x801E0C94: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801E0C98: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E0C9C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E0CA0: ldc1        $f16, -0xC40($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XC40);
    // 0x801E0CA4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E0CA8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801E0CAC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801E0CB0: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801E0CB4: lw          $v1, 0xEC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XEC);
    // 0x801E0CB8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E0CBC: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E0CC0: lw          $a0, 0xD4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XD4);
    // 0x801E0CC4: addiu       $t7, $zero, 0x4AC
    ctx->r15 = ADD32(0, 0X4AC);
    // 0x801E0CC8: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x801E0CCC: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E0CD0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801E0CD4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801E0CD8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801E0CDC: addiu       $a1, $a1, 0x760
    ctx->r5 = ADD32(ctx->r5, 0X760);
    // 0x801E0CE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E0CE4: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x801E0CE8: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801E0CEC: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801E0CF0: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x801E0CF4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x801E0CF8: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x801E0CFC: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x801E0D00: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x801E0D04: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801E0D08: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801E0D0C: jal         0x800358E8
    // 0x801E0D10: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E0D10: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801E0D14: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x801E0D18: beq         $v0, $zero, L_801E0E98
    if (ctx->r2 == 0) {
        // 0x801E0D1C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E0E98;
    }
    // 0x801E0D1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E0D20: sw          $v1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r3;
    // 0x801E0D24: jal         0x801CDF74
    // 0x801E0D28: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_801CDF74_63CDC4(rdram, ctx);
        goto after_1;
    // 0x801E0D28: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E0D2C: bne         $v0, $zero, L_801E0D44
    if (ctx->r2 != 0) {
        // 0x801E0D30: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_801E0D44;
    }
    // 0x801E0D30: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801E0D34: jal         0x80034EF8
    // 0x801E0D38: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_2;
    // 0x801E0D38: nop

    after_2:
    // 0x801E0D3C: b           L_801E0E9C
    // 0x801E0D40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E0E9C;
    // 0x801E0D40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E0D44:
    // 0x801E0D44: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x801E0D48: sb          $zero, 0x78($a0)
    MEM_B(0X78, ctx->r4) = 0;
    // 0x801E0D4C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E0D50: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
    // 0x801E0D54: lhu         $t8, 0x76($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X76);
    // 0x801E0D58: sb          $zero, 0x6A($a0)
    MEM_B(0X6A, ctx->r4) = 0;
    // 0x801E0D5C: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x801E0D60: sh          $t8, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r24;
    // 0x801E0D64: lbu         $t9, 0x57($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X57);
    // 0x801E0D68: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x801E0D6C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E0D70: sb          $t9, 0x6B($a0)
    MEM_B(0X6B, ctx->r4) = ctx->r25;
    // 0x801E0D74: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801E0D78: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x801E0D7C: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E0D80: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x801E0D84: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x801E0D88: addiu       $t9, $t9, -0x1828
    ctx->r25 = ADD32(ctx->r25, -0X1828);
    // 0x801E0D8C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x801E0D90: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
    // 0x801E0D94: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801E0D98: addiu       $a3, $v0, 0x8
    ctx->r7 = ADD32(ctx->r2, 0X8);
    // 0x801E0D9C: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x801E0DA0: swc1        $f8, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f8.u32l;
    // 0x801E0DA4: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801E0DA8: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x801E0DAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E0DB0: swc1        $f10, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f10.u32l;
    // 0x801E0DB4: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801E0DB8: addiu       $v1, $t0, 0x8
    ctx->r3 = ADD32(ctx->r8, 0X8);
    // 0x801E0DBC: swc1        $f16, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f16.u32l;
    // 0x801E0DC0: lwc1        $f18, 0x94($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801E0DC4: swc1        $f18, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f18.u32l;
    // 0x801E0DC8: lbu         $t2, 0x67($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X67);
    // 0x801E0DCC: lbu         $t1, 0x63($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X63);
    // 0x801E0DD0: lbu         $ra, 0x77($sp)
    ctx->r31 = MEM_BU(ctx->r29, 0X77);
    // 0x801E0DD4: lbu         $t5, 0x73($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X73);
    // 0x801E0DD8: lbu         $t4, 0x6F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X6F);
    // 0x801E0DDC: lbu         $t3, 0x6B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X6B);
    // 0x801E0DE0: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    // 0x801E0DE4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E0DE8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801E0DEC: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x801E0DF0: sll         $t6, $t2, 16
    ctx->r14 = S32(ctx->r10 << 16);
    // 0x801E0DF4: sll         $t8, $t1, 24
    ctx->r24 = S32(ctx->r9 << 24);
    // 0x801E0DF8: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x801E0DFC: sll         $t8, $t3, 8
    ctx->r24 = S32(ctx->r11 << 8);
    // 0x801E0E00: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x801E0E04: or          $t7, $t6, $t4
    ctx->r15 = ctx->r14 | ctx->r12;
    // 0x801E0E08: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x801E0E0C: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x801E0E10: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x801E0E14: sll         $t8, $ra, 16
    ctx->r24 = S32(ctx->r31 << 16);
    // 0x801E0E18: sll         $t9, $t5, 24
    ctx->r25 = S32(ctx->r13 << 24);
    // 0x801E0E1C: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x801E0E20: lbu         $t9, 0x7B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X7B);
    // 0x801E0E24: sll         $t8, $t9, 8
    ctx->r24 = S32(ctx->r25 << 8);
    // 0x801E0E28: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x801E0E2C: lbu         $t6, 0x7F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X7F);
    // 0x801E0E30: lui         $t9, 0xB800
    ctx->r25 = S32(0XB800 << 16);
    // 0x801E0E34: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x801E0E38: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x801E0E3C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x801E0E40: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801E0E44: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    // 0x801E0E48: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E0E4C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x801E0E50: sb          $t7, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r15;
    // 0x801E0E54: sb          $t2, 0x8D($a1)
    MEM_B(0X8D, ctx->r5) = ctx->r10;
    // 0x801E0E58: sb          $t1, 0x8C($a1)
    MEM_B(0X8C, ctx->r5) = ctx->r9;
    // 0x801E0E5C: sb          $ra, 0x91($a1)
    MEM_B(0X91, ctx->r5) = ctx->r31;
    // 0x801E0E60: sb          $t5, 0x90($a1)
    MEM_B(0X90, ctx->r5) = ctx->r13;
    // 0x801E0E64: sb          $t3, 0x8E($a1)
    MEM_B(0X8E, ctx->r5) = ctx->r11;
    // 0x801E0E68: swc1        $f6, 0x94($a1)
    MEM_W(0X94, ctx->r5) = ctx->f6.u32l;
    // 0x801E0E6C: lbu         $t6, 0x7B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X7B);
    // 0x801E0E70: sb          $t4, 0x8F($a1)
    MEM_B(0X8F, ctx->r5) = ctx->r12;
    // 0x801E0E74: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E0E78: sb          $t6, 0x92($a1)
    MEM_B(0X92, ctx->r5) = ctx->r14;
    // 0x801E0E7C: lbu         $t8, 0x7F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X7F);
    // 0x801E0E80: sb          $t8, 0x93($a1)
    MEM_B(0X93, ctx->r5) = ctx->r24;
    // 0x801E0E84: lw          $t9, -0x20C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X20C0);
    // 0x801E0E88: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801E0E8C: jalr        $t9
    // 0x801E0E90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x801E0E90: nop

    after_3:
    // 0x801E0E94: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
L_801E0E98:
    // 0x801E0E98: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_801E0E9C:
    // 0x801E0E9C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E0EA0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E0EA4: jr          $ra
    // 0x801E0EA8: nop

    TRACE_RETURN()
    return;
    // 0x801E0EA8: nop

;}
RECOMP_FUNC void func_801CE5C8_63D418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE5C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CE5CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CE5D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CE5D4: lbu         $v0, 0x9D($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9D);
    // 0x801CE5D8: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801CE5DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CE5E0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801CE5E4: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x801CE5E8: lw          $t9, -0x762C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X762C);
    // 0x801CE5EC: jalr        $t9
    // 0x801CE5F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801CE5F0: nop

    after_0:
    // 0x801CE5F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CE5F8: jal         0x801CCE18
    // 0x801CE5FC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_801CCE18_63BC68(rdram, ctx);
        goto after_1;
    // 0x801CE5FC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801CE600: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CE604: jal         0x801CD1C0
    // 0x801CE608: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_801CD1C0_63C010(rdram, ctx);
        goto after_2;
    // 0x801CE608: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x801CE60C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CE610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CE614: jr          $ra
    // 0x801CE618: nop

    TRACE_RETURN()
    return;
    // 0x801CE618: nop

;}
RECOMP_FUNC void func_801D3228_642078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3228: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801D322C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801D3230: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x801D3234: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x801D3238: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801D323C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D3240: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801D3244: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801D3248: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D324C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801D3250: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D3254: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D3258: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D325C: bc1f        L_801D3268
    if (!c1cs) {
        // 0x801D3260: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D3268;
    }
    // 0x801D3260: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D3264: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D3268:
    // 0x801D3268: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801D326C: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x801D3270: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801D3274: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D3278: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x801D327C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x801D3280: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x801D3284: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x801D3288: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x801D328C: nop

    // 0x801D3290: bc1fl       L_801D32C0
    if (!c1cs) {
        // 0x801D3294: c.le.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
            goto L_801D32C0;
    }
    goto skip_0;
    // 0x801D3294: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    skip_0:
    // 0x801D3298: jal         0x8000DD58
    // 0x801D329C: sb          $zero, 0x9D($s1)
    MEM_B(0X9D, ctx->r17) = 0;
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801D329C: sb          $zero, 0x9D($s1)
    MEM_B(0X9D, ctx->r17) = 0;
    after_0:
    // 0x801D32A0: addiu       $t7, $v0, 0x2
    ctx->r15 = ADD32(ctx->r2, 0X2);
    // 0x801D32A4: andi        $t8, $t7, 0xFFFC
    ctx->r24 = ctx->r15 & 0XFFFC;
    // 0x801D32A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D32AC: addiu       $t9, $t8, 0x1E
    ctx->r25 = ADD32(ctx->r24, 0X1E);
    // 0x801D32B0: sh          $t9, 0xA8($s1)
    MEM_H(0XA8, ctx->r17) = ctx->r25;
    // 0x801D32B4: b           L_801D3598
    // 0x801D32B8: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
        goto L_801D3598;
    // 0x801D32B8: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
    // 0x801D32BC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
L_801D32C0:
    // 0x801D32C0: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x801D32C4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x801D32C8: bc1fl       L_801D32D8
    if (!c1cs) {
        // 0x801D32CC: and         $v0, $v0, $t0
        ctx->r2 = ctx->r2 & ctx->r8;
            goto L_801D32D8;
    }
    goto skip_1;
    // 0x801D32CC: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    skip_1:
    // 0x801D32D0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801D32D4: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
L_801D32D8:
    // 0x801D32D8: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x801D32DC: beql        $t1, $zero, L_801D359C
    if (ctx->r9 == 0) {
        // 0x801D32E0: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_801D359C;
    }
    goto skip_2;
    // 0x801D32E0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_2:
    // 0x801D32E4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D32E8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D32EC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D32F0: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x801D32F4: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801D32F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D32FC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D3300: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D3304: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801D3308: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x801D330C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D3310: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D3314: addiu       $t2, $sp, 0x64
    ctx->r10 = ADD32(ctx->r29, 0X64);
    // 0x801D3318: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x801D331C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D3320: addiu       $t3, $sp, 0x68
    ctx->r11 = ADD32(ctx->r29, 0X68);
    // 0x801D3324: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    // 0x801D3328: mul.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f10.d);
    // 0x801D332C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801D3330: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x801D3334: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801D3338: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x801D333C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D3340: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801D3344: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x801D3348: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x801D334C: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x801D3350: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x801D3354: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x801D3358: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801D335C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801D3360: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801D3364: nop

    // 0x801D3368: mul.d       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x801D336C: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x801D3370: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x801D3374: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801D3378: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x801D337C: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x801D3380: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801D3384: jal         0x80033898
    // 0x801D3388: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801D3388: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x801D338C: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D3390: lwc1        $f16, 0x5C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D3394: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D3398: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D339C: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801D33A0: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D33A4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D33A8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801D33AC: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x801D33B0: lwc1        $f6, 0x60($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D33B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801D33B8: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x801D33BC: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x801D33C0: lwc1        $f16, 0x64($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D33C4: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801D33C8: jal         0x800040A8
    // 0x801D33CC: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    func_800040A8_4CA8(rdram, ctx);
        goto after_2;
    // 0x801D33CC: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x801D33D0: addiu       $v1, $v0, -0x100
    ctx->r3 = ADD32(ctx->r2, -0X100);
    // 0x801D33D4: andi        $t4, $v1, 0x3FF
    ctx->r12 = ctx->r3 & 0X3FF;
    // 0x801D33D8: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x801D33DC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D33E0: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x801D33E4: sh          $t4, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r12;
    // 0x801D33E8: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x801D33EC: bgez        $t5, L_801D3408
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801D33F0: cvt.d.w     $f4, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.d = CVT_D_W(ctx->f6.u32l);
            goto L_801D3408;
    }
    // 0x801D33F0: cvt.d.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.d = CVT_D_W(ctx->f6.u32l);
    // 0x801D33F4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D33F8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D33FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D3400: nop

    // 0x801D3404: add.d       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f4.d + ctx->f8.d;
L_801D3408:
    // 0x801D3408: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D340C: ldc1        $f16, -0xF98($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XF98);
    // 0x801D3410: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D3414: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801D3418: mul.d       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x801D341C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D3420: nop

    // 0x801D3424: div.d       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x801D3428: jal         0x800417F0
    // 0x801D342C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    __sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x801D342C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_3:
    // 0x801D3430: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801D3434: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D3438: lhu         $t6, 0x52($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X52);
    // 0x801D343C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D3440: mul.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x801D3444: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x801D3448: nop

    // 0x801D344C: cvt.d.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
    // 0x801D3450: neg.s       $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = -ctx->f4.fl;
    // 0x801D3454: bgez        $t6, L_801D346C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D3458: swc1        $f16, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
            goto L_801D346C;
    }
    // 0x801D3458: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x801D345C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D3460: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D3464: nop

    // 0x801D3468: add.d       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = ctx->f18.d + ctx->f6.d;
L_801D346C:
    // 0x801D346C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D3470: ldc1        $f8, -0xF90($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XF90);
    // 0x801D3474: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D3478: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801D347C: mul.d       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f8.d);
    // 0x801D3480: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D3484: nop

    // 0x801D3488: div.d       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = DIV_D(ctx->f4.d, ctx->f16.d);
    // 0x801D348C: jal         0x800419B0
    // 0x801D3490: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    __cosf_recomp(rdram, ctx);
        goto after_4;
    // 0x801D3490: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_4:
    // 0x801D3494: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801D3498: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D349C: addiu       $t7, $sp, 0x58
    ctx->r15 = ADD32(ctx->r29, 0X58);
    // 0x801D34A0: addiu       $t8, $sp, 0x5C
    ctx->r24 = ADD32(ctx->r29, 0X5C);
    // 0x801D34A4: mul.s       $f18, $f0, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801D34A8: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x801D34AC: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x801D34B0: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801D34B4: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x801D34B8: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x801D34BC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801D34C0: jal         0x80033898
    // 0x801D34C4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x801D34C4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_5:
    // 0x801D34C8: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D34CC: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D34D0: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801D34D4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D34D8: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D34DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D34E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D34E4: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x801D34E8: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x801D34EC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801D34F0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801D34F4: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801D34F8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x801D34FC: jal         0x801D8808
    // 0x801D3500: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    func_801D8808_647658(rdram, ctx);
        goto after_6;
    // 0x801D3500: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x801D3504: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D3508: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D350C: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D3510: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D3514: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x801D3518: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x801D351C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x801D3520: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x801D3524: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x801D3528: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x801D352C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801D3530: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801D3534: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D3538: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D353C: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x801D3540: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D3544: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x801D3548: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D354C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801D3550: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801D3554: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801D3558: jal         0x801E027C
    // 0x801D355C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801E027C_64F0CC(rdram, ctx);
        goto after_7;
    // 0x801D355C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x801D3560: lw          $v1, 0xEC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XEC);
    // 0x801D3564: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    // 0x801D3568: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801D356C: lhu         $t3, 0xE2($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0XE2);
    // 0x801D3570: addiu       $a1, $v1, 0x364
    ctx->r5 = ADD32(ctx->r3, 0X364);
    // 0x801D3574: andi        $t4, $t3, 0x10
    ctx->r12 = ctx->r11 & 0X10;
    // 0x801D3578: bnel        $t4, $zero, L_801D359C
    if (ctx->r12 != 0) {
        // 0x801D357C: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_801D359C;
    }
    goto skip_3;
    // 0x801D357C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_3:
    // 0x801D3580: jal         0x8000F420
    // 0x801D3584: lui         $a3, 0x43A0
    ctx->r7 = S32(0X43A0 << 16);
    func_8000F420_10020(rdram, ctx);
        goto after_8;
    // 0x801D3584: lui         $a3, 0x43A0
    ctx->r7 = S32(0X43A0 << 16);
    after_8:
    // 0x801D3588: lw          $v1, 0xEC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XEC);
    // 0x801D358C: lhu         $t5, 0xE2($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0XE2);
    // 0x801D3590: ori         $t6, $t5, 0x10
    ctx->r14 = ctx->r13 | 0X10;
    // 0x801D3594: sh          $t6, 0xE2($v1)
    MEM_H(0XE2, ctx->r3) = ctx->r14;
L_801D3598:
    // 0x801D3598: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_801D359C:
    // 0x801D359C: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x801D35A0: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x801D35A4: jr          $ra
    // 0x801D35A8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x801D35A8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_801D1940_640790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1940: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D1944: lb          $v0, 0xC4($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC4);
    // 0x801D1948: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x801D194C: srl         $t6, $v0, 1
    ctx->r14 = S32(U32(ctx->r2) >> 1);
    // 0x801D1950: bnel        $t6, $zero, L_801D196C
    if (ctx->r14 != 0) {
        // 0x801D1954: sb          $t8, 0xC5($a0)
        MEM_B(0XC5, ctx->r4) = ctx->r24;
            goto L_801D196C;
    }
    goto skip_0;
    // 0x801D1954: sb          $t8, 0xC5($a0)
    MEM_B(0XC5, ctx->r4) = ctx->r24;
    skip_0:
    // 0x801D1958: lw          $t7, 0xB4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XB4);
    // 0x801D195C: sb          $v0, 0xC5($a0)
    MEM_B(0XC5, ctx->r4) = ctx->r2;
    // 0x801D1960: jr          $ra
    // 0x801D1964: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x801D1964: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x801D1968: sb          $t8, 0xC5($a0)
    MEM_B(0XC5, ctx->r4) = ctx->r24;
L_801D196C:
    // 0x801D196C: jr          $ra
    // 0x801D1970: nop

    TRACE_RETURN()
    return;
    // 0x801D1970: nop

;}
RECOMP_FUNC void func_801D6008_644E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D600C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D6010: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D6014: lw          $v1, 0xEC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XEC);
    // 0x801D6018: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D601C: sb          $t6, 0xA1($a0)
    MEM_B(0XA1, ctx->r4) = ctx->r14;
    // 0x801D6020: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    // 0x801D6024: sw          $zero, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = 0;
    // 0x801D6028: sw          $zero, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = 0;
    // 0x801D602C: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D6030: lwc1        $f6, 0x64($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X64);
    // 0x801D6034: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D6038: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801D603C: nop

    // 0x801D6040: bc1fl       L_801D6050
    if (!c1cs) {
        // 0x801D6044: sll         $t7, $v0, 1
        ctx->r15 = S32(ctx->r2 << 1);
            goto L_801D6050;
    }
    goto skip_0;
    // 0x801D6044: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    skip_0:
    // 0x801D6048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D604C: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
L_801D6050:
    // 0x801D6050: addiu       $v0, $t7, -0x1
    ctx->r2 = ADD32(ctx->r15, -0X1);
    // 0x801D6054: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x801D6058: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D605C: ldc1        $f16, -0xEB0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XEB0);
    // 0x801D6060: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x801D6064: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D6068: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x801D606C: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x801D6070: swc1        $f4, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f4.u32l;
    // 0x801D6074: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801D6078: jal         0x801CD96C
    // 0x801D607C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801CD96C_63C7BC(rdram, ctx);
        goto after_0;
    // 0x801D607C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D6080: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D6084: ldc1        $f6, -0xEA8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XEA8);
    // 0x801D6088: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801D608C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801D6090: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801D6094: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801D6098: bc1f        L_801D60E0
    if (!c1cs) {
        // 0x801D609C: nop
    
            goto L_801D60E0;
    }
    // 0x801D609C: nop

    // 0x801D60A0: lwc1        $f10, 0x5C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x801D60A4: lwc1        $f16, 0x5C($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X5C);
    // 0x801D60A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D60AC: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x801D60B0: nop

    // 0x801D60B4: bc1fl       L_801D60C4
    if (!c1cs) {
        // 0x801D60B8: sll         $t9, $v0, 1
        ctx->r25 = S32(ctx->r2 << 1);
            goto L_801D60C4;
    }
    goto skip_1;
    // 0x801D60B8: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    skip_1:
    // 0x801D60BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D60C0: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
L_801D60C4:
    // 0x801D60C4: addiu       $v0, $t9, -0x1
    ctx->r2 = ADD32(ctx->r25, -0X1);
    // 0x801D60C8: sll         $t0, $v0, 5
    ctx->r8 = S32(ctx->r2 << 5);
    // 0x801D60CC: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x801D60D0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x801D60D4: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x801D60D8: sll         $t0, $t0, 5
    ctx->r8 = S32(ctx->r8 << 5);
    // 0x801D60DC: sw          $t0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r8;
L_801D60E0:
    // 0x801D60E0: jal         0x801D60F8
    // 0x801D60E4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801D60F8_644F48(rdram, ctx);
        goto after_1;
    // 0x801D60E4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x801D60E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D60EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D60F0: jr          $ra
    // 0x801D60F4: nop

    TRACE_RETURN()
    return;
    // 0x801D60F4: nop

;}
RECOMP_FUNC void func_801D79D0_646820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D79D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D79D4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D79D8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801D79DC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801D79E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D79E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801D79E8: jal         0x80035EEC
    // 0x801D79EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801D79EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801D79F0: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x801D79F4: bne         $v0, $zero, L_801D7A0C
    if (ctx->r2 != 0) {
        // 0x801D79F8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801D7A0C;
    }
    // 0x801D79F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D79FC: jal         0x801D2B90
    // 0x801D7A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_1;
    // 0x801D7A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801D7A04: b           L_801D7AF8
    // 0x801D7A08: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801D7AF8;
    // 0x801D7A08: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801D7A0C:
    // 0x801D7A0C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D7A10: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D7A14: lwc1        $f0, -0xE00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0XE00);
    // 0x801D7A18: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x801D7A1C: addiu       $t6, $t6, 0x1570
    ctx->r14 = ADD32(ctx->r14, 0X1570);
    // 0x801D7A20: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801D7A24: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x801D7A28: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801D7A2C: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x801D7A30: sw          $t7, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r15;
    // 0x801D7A34: sw          $t8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r24;
    // 0x801D7A38: addiu       $t9, $t9, 0x2310
    ctx->r25 = ADD32(ctx->r25, 0X2310);
    // 0x801D7A3C: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x801D7A40: sw          $t0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r8;
    // 0x801D7A44: lui         $t2, 0x801F
    ctx->r10 = S32(0X801F << 16);
    // 0x801D7A48: lui         $t6, 0x2080
    ctx->r14 = S32(0X2080 << 16);
    // 0x801D7A4C: addiu       $t2, $t2, -0x1828
    ctx->r10 = ADD32(ctx->r10, -0X1828);
    // 0x801D7A50: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x801D7A54: lui         $t3, 0xFA00
    ctx->r11 = S32(0XFA00 << 16);
    // 0x801D7A58: addiu       $t4, $zero, -0x100
    ctx->r12 = ADD32(0, -0X100);
    // 0x801D7A5C: ori         $t6, $t6, 0xFF00
    ctx->r14 = ctx->r14 | 0XFF00;
    // 0x801D7A60: lui         $t5, 0xFB00
    ctx->r13 = S32(0XFB00 << 16);
    // 0x801D7A64: lui         $t7, 0xB800
    ctx->r15 = S32(0XB800 << 16);
    // 0x801D7A68: sw          $t1, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r9;
    // 0x801D7A6C: sw          $t2, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->r10;
    // 0x801D7A70: sw          $t4, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r12;
    // 0x801D7A74: sw          $t3, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->r11;
    // 0x801D7A78: sw          $t5, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r13;
    // 0x801D7A7C: sw          $t6, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r14;
    // 0x801D7A80: sw          $t7, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r15;
    // 0x801D7A84: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    // 0x801D7A88: addiu       $t8, $s0, 0xC4
    ctx->r24 = ADD32(ctx->r16, 0XC4);
    // 0x801D7A8C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801D7A90: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801D7A94: addiu       $t0, $zero, 0x4C9
    ctx->r8 = ADD32(0, 0X4C9);
    // 0x801D7A98: sw          $t9, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r25;
    // 0x801D7A9C: sh          $t0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r8;
    // 0x801D7AA0: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x801D7AA4: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x801D7AA8: jal         0x80014218
    // 0x801D7AAC: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    func_80014218_14E18(rdram, ctx);
        goto after_2;
    // 0x801D7AAC: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    after_2:
    // 0x801D7AB0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D7AB4: sh          $zero, 0xAA($s0)
    MEM_H(0XAA, ctx->r16) = 0;
    // 0x801D7AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D7ABC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D7AC0: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D7AC4: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    // 0x801D7AC8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D7ACC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D7AD0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D7AD4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D7AD8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D7ADC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D7AE0: jal         0x801E8378
    // 0x801D7AE4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_3;
    // 0x801D7AE4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x801D7AE8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D7AEC: jal         0x800352EC
    // 0x801D7AF0: addiu       $a0, $a0, 0x7B08
    ctx->r4 = ADD32(ctx->r4, 0X7B08);
    func_800352EC_35EEC(rdram, ctx);
        goto after_4;
    // 0x801D7AF0: addiu       $a0, $a0, 0x7B08
    ctx->r4 = ADD32(ctx->r4, 0X7B08);
    after_4:
    // 0x801D7AF4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801D7AF8:
    // 0x801D7AF8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801D7AFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D7B00: jr          $ra
    // 0x801D7B04: nop

    TRACE_RETURN()
    return;
    // 0x801D7B04: nop

;}
RECOMP_FUNC void func_801CF1B4_63E004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF1B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CF1B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CF1BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CF1C0: lb          $t6, 0x9F($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X9F);
    // 0x801CF1C4: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x801CF1C8: beql        $t7, $zero, L_801CF254
    if (ctx->r15 == 0) {
        // 0x801CF1CC: lw          $v0, 0xA8($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XA8);
            goto L_801CF254;
    }
    goto skip_0;
    // 0x801CF1CC: lw          $v0, 0xA8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA8);
    skip_0:
    // 0x801CF1D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CF1D4: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801CF1D8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x801CF1DC: sb          $t8, 0x9E($a0)
    MEM_B(0X9E, ctx->r4) = ctx->r24;
    // 0x801CF1E0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x801CF1E4: nop

    // 0x801CF1E8: bc1fl       L_801CF1F8
    if (!c1cs) {
        // 0x801CF1EC: lw          $v1, 0xC8($a0)
        ctx->r3 = MEM_W(ctx->r4, 0XC8);
            goto L_801CF1F8;
    }
    goto skip_1;
    // 0x801CF1EC: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    skip_1:
    // 0x801CF1F0: swc1        $f0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f0.u32l;
    // 0x801CF1F4: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
L_801CF1F8:
    // 0x801CF1F8: lwc1        $f12, 0x64($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801CF1FC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CF200: sll         $t9, $v1, 22
    ctx->r25 = S32(ctx->r3 << 22);
    // 0x801CF204: sw          $t9, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->r25;
    // 0x801CF208: ldc1        $f8, -0x1168($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1168);
    // 0x801CF20C: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x801CF210: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CF214: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801CF218: jal         0x801CD480
    // 0x801CF21C: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    func_801CD480_63C2D0(rdram, ctx);
        goto after_0;
    // 0x801CF21C: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x801CF220: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CF224: addiu       $t0, $v0, -0x4000
    ctx->r8 = ADD32(ctx->r2, -0X4000);
    // 0x801CF228: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x801CF22C: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x801CF230: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x801CF234: subu        $v1, $t2, $t3
    ctx->r3 = SUB32(ctx->r10, ctx->r11);
    // 0x801CF238: srl         $t4, $v1, 2
    ctx->r12 = S32(U32(ctx->r3) >> 2);
    // 0x801CF23C: sw          $t4, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r12;
    // 0x801CF240: jal         0x801CF290
    // 0x801CF244: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_801CF290_63E0E0(rdram, ctx);
        goto after_1;
    // 0x801CF244: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801CF248: b           L_801CF284
    // 0x801CF24C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CF284;
    // 0x801CF24C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CF250: lw          $v0, 0xA8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA8);
L_801CF254:
    // 0x801CF254: lw          $v1, 0xB0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB0);
    // 0x801CF258: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CF25C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CF260: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x801CF264: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x801CF268: addiu       $v1, $v1, -0xFA0
    ctx->r3 = ADD32(ctx->r3, -0XFA0);
    // 0x801CF26C: sw          $v0, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r2;
    // 0x801CF270: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801CF274: sw          $v1, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r3;
    // 0x801CF278: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801CF27C: swc1        $f6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f6.u32l;
    // 0x801CF280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CF284:
    // 0x801CF284: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CF288: jr          $ra
    // 0x801CF28C: nop

    TRACE_RETURN()
    return;
    // 0x801CF28C: nop

;}
RECOMP_FUNC void func_801D6FD4_645E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6FD4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D6FD8: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
    // 0x801D6FDC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D6FE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D6FE4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D6FE8: lwc1        $f16, 0xA0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x801D6FEC: lw          $t6, 0xA8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA8);
    // 0x801D6FF0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D6FF4: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x801D6FF8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801D6FFC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D7000: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D7004: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D7008: bgez        $v0, L_801D7018
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D700C: swc1        $f18, 0xA0($a0)
        MEM_W(0XA0, ctx->r4) = ctx->f18.u32l;
            goto L_801D7018;
    }
    // 0x801D700C: swc1        $f18, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f18.u32l;
    // 0x801D7010: b           L_801D7018
    // 0x801D7014: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_801D7018;
    // 0x801D7014: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_801D7018:
    // 0x801D7018: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D701C: lui         $at, 0x4054
    ctx->r1 = S32(0X4054 << 16);
    // 0x801D7020: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D7024: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D7028: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D702C: nop

    // 0x801D7030: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801D7034: nop

    // 0x801D7038: bc1f        L_801D7048
    if (!c1cs) {
        // 0x801D703C: nop
    
            goto L_801D7048;
    }
    // 0x801D703C: nop

    // 0x801D7040: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D7044: sh          $t7, 0xAC($a0)
    MEM_H(0XAC, ctx->r4) = ctx->r15;
L_801D7048:
    // 0x801D7048: jr          $ra
    // 0x801D704C: sw          $v0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801D704C: sw          $v0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801D5AE4_644934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5AE4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801D5AE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D5AEC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801D5AF0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801D5AF4: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D5AF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D5AFC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801D5B00: bgezl       $t6, L_801D5B60
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D5B04: lbu         $t0, 0x9C($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X9C);
            goto L_801D5B60;
    }
    goto skip_0;
    // 0x801D5B04: lbu         $t0, 0x9C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X9C);
    skip_0:
    // 0x801D5B08: lb          $t7, 0x9F($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X9F);
    // 0x801D5B0C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x801D5B10: beql        $t8, $zero, L_801D5B38
    if (ctx->r24 == 0) {
        // 0x801D5B14: lbu         $v0, 0x9C($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X9C);
            goto L_801D5B38;
    }
    goto skip_1;
    // 0x801D5B14: lbu         $v0, 0x9C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9C);
    skip_1:
    // 0x801D5B18: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D5B1C: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D5B20: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D5B24: jal         0x800352EC
    // 0x801D5B28: addiu       $a0, $a0, 0x6224
    ctx->r4 = ADD32(ctx->r4, 0X6224);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D5B28: addiu       $a0, $a0, 0x6224
    ctx->r4 = ADD32(ctx->r4, 0X6224);
    after_0:
    // 0x801D5B2C: b           L_801D5D74
    // 0x801D5B30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801D5D74;
    // 0x801D5B30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D5B34: lbu         $v0, 0x9C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9C);
L_801D5B38:
    // 0x801D5B38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D5B3C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801D5B40: beq         $v0, $at, L_801D5B5C
    if (ctx->r2 == ctx->r1) {
        // 0x801D5B44: addiu       $a0, $zero, 0x24F
        ctx->r4 = ADD32(0, 0X24F);
            goto L_801D5B5C;
    }
    // 0x801D5B44: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    // 0x801D5B48: sb          $v0, 0x9D($s0)
    MEM_B(0X9D, ctx->r16) = ctx->r2;
    // 0x801D5B4C: sb          $t9, 0x9C($s0)
    MEM_B(0X9C, ctx->r16) = ctx->r25;
    // 0x801D5B50: sb          $zero, 0xA0($s0)
    MEM_B(0XA0, ctx->r16) = 0;
    // 0x801D5B54: jal         0x80038B98
    // 0x801D5B58: sb          $zero, 0xA1($s0)
    MEM_B(0XA1, ctx->r16) = 0;
    func_80038B98_39798(rdram, ctx);
        goto after_1;
    // 0x801D5B58: sb          $zero, 0xA1($s0)
    MEM_B(0XA1, ctx->r16) = 0;
    after_1:
L_801D5B5C:
    // 0x801D5B5C: lbu         $t0, 0x9C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X9C);
L_801D5B60:
    // 0x801D5B60: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D5B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D5B68: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x801D5B6C: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x801D5B70: lw          $t9, -0x74AC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X74AC);
    // 0x801D5B74: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801D5B78: jalr        $t9
    // 0x801D5B7C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x801D5B7C: nop

    after_2:
    // 0x801D5B80: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D5B84: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D5B88: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D5B8C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D5B90: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D5B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D5B98: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D5B9C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D5BA0: jal         0x801CD504
    // 0x801D5BA4: swc1        $f16, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f16.u32l;
    func_801CD504_63C354(rdram, ctx);
        goto after_3;
    // 0x801D5BA4: swc1        $f16, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f16.u32l;
    after_3:
    // 0x801D5BA8: beq         $v0, $zero, L_801D5C04
    if (ctx->r2 == 0) {
        // 0x801D5BAC: nop
    
            goto L_801D5C04;
    }
    // 0x801D5BAC: nop

    // 0x801D5BB0: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x801D5BB4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D5BB8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801D5BBC: lwc1        $f6, 0x320($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X320);
    // 0x801D5BC0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D5BC4: lwc1        $f18, 0x64($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D5BC8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D5BCC: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801D5BD0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D5BD4: c.lt.d      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.d < ctx->f16.d;
    // 0x801D5BD8: nop

    // 0x801D5BDC: bc1f        L_801D5C04
    if (!c1cs) {
        // 0x801D5BE0: nop
    
            goto L_801D5C04;
    }
    // 0x801D5BE0: nop

    // 0x801D5BE4: jal         0x801DFE68
    // 0x801D5BE8: lw          $a0, 0xC4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC4);
    func_801DFE68_64ECB8(rdram, ctx);
        goto after_4;
    // 0x801D5BE8: lw          $a0, 0xC4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC4);
    after_4:
    // 0x801D5BEC: jal         0x801DFE68
    // 0x801D5BF0: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    func_801DFE68_64ECB8(rdram, ctx);
        goto after_5;
    // 0x801D5BF0: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    after_5:
    // 0x801D5BF4: jal         0x801D2B90
    // 0x801D5BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_6;
    // 0x801D5BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801D5BFC: b           L_801D5D74
    // 0x801D5C00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801D5D74;
    // 0x801D5C00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D5C04:
    // 0x801D5C04: jal         0x801CD634
    // 0x801D5C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_7;
    // 0x801D5C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801D5C0C: lh          $t2, 0xB8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XB8);
    // 0x801D5C10: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D5C14: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x801D5C18: nop

    // 0x801D5C1C: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801D5C20: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x801D5C24: lhu         $t3, 0xBC($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XBC);
    // 0x801D5C28: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x801D5C2C: bgez        $t3, L_801D5C44
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801D5C30: cvt.d.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
            goto L_801D5C44;
    }
    // 0x801D5C30: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x801D5C34: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801D5C38: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D5C3C: nop

    // 0x801D5C40: add.d       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f10.d + ctx->f4.d;
L_801D5C44:
    // 0x801D5C44: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D5C48: ldc1        $f16, -0xEC0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XEC0);
    // 0x801D5C4C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D5C50: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D5C54: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x801D5C58: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D5C5C: nop

    // 0x801D5C60: div.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
    // 0x801D5C64: jal         0x800417F0
    // 0x801D5C68: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    __sinf_recomp(rdram, ctx);
        goto after_8;
    // 0x801D5C68: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_8:
    // 0x801D5C6C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D5C70: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D5C74: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801D5C78: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x801D5C7C: lh          $t4, 0xB8($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XB8);
    // 0x801D5C80: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x801D5C84: nop

    // 0x801D5C88: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801D5C8C: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x801D5C90: lhu         $t5, 0xBC($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XBC);
    // 0x801D5C94: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x801D5C98: bgez        $t5, L_801D5CB0
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801D5C9C: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_801D5CB0;
    }
    // 0x801D5C9C: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x801D5CA0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801D5CA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D5CA8: nop

    // 0x801D5CAC: add.d       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f8.d + ctx->f4.d;
L_801D5CB0:
    // 0x801D5CB0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D5CB4: ldc1        $f10, -0xEB8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0XEB8);
    // 0x801D5CB8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D5CBC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801D5CC0: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801D5CC4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D5CC8: nop

    // 0x801D5CCC: div.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x801D5CD0: jal         0x800419B0
    // 0x801D5CD4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    __cosf_recomp(rdram, ctx);
        goto after_9;
    // 0x801D5CD4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_9:
    // 0x801D5CD8: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D5CDC: lui         $at, 0x44C8
    ctx->r1 = S32(0X44C8 << 16);
    // 0x801D5CE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D5CE4: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801D5CE8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x801D5CEC: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x801D5CF0: jal         0x8001D394
    // 0x801D5CF4: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_10;
    // 0x801D5CF4: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x801D5CF8: lui         $at, 0x44C8
    ctx->r1 = S32(0X44C8 << 16);
    // 0x801D5CFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D5D00: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801D5D04: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801D5D08: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x801D5D0C: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801D5D10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D5D14: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x801D5D18: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801D5D1C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x801D5D20: jal         0x8001D14C
    // 0x801D5D24: nop

    func_8001D14C_1DD4C(rdram, ctx);
        goto after_11;
    // 0x801D5D24: nop

    after_11:
    // 0x801D5D28: lhu         $t6, 0xC0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XC0);
    // 0x801D5D2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801D5D30: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x801D5D34: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x801D5D38: andi        $a3, $t7, 0x3FF
    ctx->r7 = ctx->r15 & 0X3FF;
    // 0x801D5D3C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x801D5D40: jal         0x8001DB04
    // 0x801D5D44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_12;
    // 0x801D5D44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x801D5D48: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D5D4C: jal         0x801CD780
    // 0x801D5D50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_13;
    // 0x801D5D50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x801D5D54: lb          $t0, 0x9F($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X9F);
    // 0x801D5D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D5D5C: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x801D5D60: beql        $t1, $zero, L_801D5D74
    if (ctx->r9 == 0) {
        // 0x801D5D64: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801D5D74;
    }
    goto skip_2;
    // 0x801D5D64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x801D5D68: jal         0x801D697C
    // 0x801D5D6C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D697C_6457CC(rdram, ctx);
        goto after_14;
    // 0x801D5D6C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_14:
    // 0x801D5D70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D5D74:
    // 0x801D5D74: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801D5D78: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801D5D7C: jr          $ra
    // 0x801D5D80: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801D5D80: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801E5328_654178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5328: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E532C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801E5330: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x801E5334: sw          $s0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r16;
    // 0x801E5338: sdc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X0, ctx->r29);
    // 0x801E533C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801E5340: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801E5344: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x801E5348: lw          $s0, 0x6C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X6C);
    // 0x801E534C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801E5350: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801E5354: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801E5358: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801E535C: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801E5360: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801E5364: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E5368: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801E536C: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E5370: sub.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x801E5374: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x801E5378: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801E537C: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x801E5380: sub.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801E5384: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801E5388: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801E538C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E5390: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801E5394: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E5398: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x801E539C: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801E53A0: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801E53A4: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x801E53A8: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x801E53AC: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801E53B0: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801E53B4: sub.s       $f6, $f18, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x801E53B8: mul.s       $f6, $f2, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x801E53BC: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E53C0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801E53C4: div.s       $f14, $f6, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801E53C8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x801E53CC: mul.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x801E53D0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E53D4: mul.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x801E53D8: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
    // 0x801E53DC: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801E53E0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E53E4: mul.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x801E53E8: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x801E53EC: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801E53F0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E53F4: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x801E53F8: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x801E53FC: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801E5400: lwc1        $f18, 0x0($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X0);
    // 0x801E5404: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x801E5408: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801E540C: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x801E5410: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E5414: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801E5418: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E541C: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801E5420: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801E5424: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x801E5428: sub.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801E542C: mul.s       $f6, $f2, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x801E5430: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E5434: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E5438: sub.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x801E543C: mul.s       $f6, $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x801E5440: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801E5444: div.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801E5448: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x801E544C: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x801E5450: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801E5454: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x801E5458: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801E545C: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801E5460: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801E5464: sub.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801E5468: mul.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x801E546C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E5470: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E5474: sub.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x801E5478: mul.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x801E547C: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801E5480: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x801E5484: div.s       $f20, $f10, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801E5488: bc1f        L_801E54B8
    if (!c1cs) {
        // 0x801E548C: neg.s       $f20, $f20
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
            goto L_801E54B8;
    }
    // 0x801E548C: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x801E5490: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x801E5494: nop

    // 0x801E5498: bc1fl       L_801E54E0
    if (!c1cs) {
        // 0x801E549C: sll         $a2, $v1, 2
        ctx->r6 = S32(ctx->r3 << 2);
            goto L_801E54E0;
    }
    goto skip_0;
    // 0x801E549C: sll         $a2, $v1, 2
    ctx->r6 = S32(ctx->r3 << 2);
    skip_0:
    // 0x801E54A0: c.lt.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl < ctx->f6.fl;
    // 0x801E54A4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x801E54A8: bc1fl       L_801E54E0
    if (!c1cs) {
        // 0x801E54AC: sll         $a2, $v1, 2
        ctx->r6 = S32(ctx->r3 << 2);
            goto L_801E54E0;
    }
    goto skip_1;
    // 0x801E54AC: sll         $a2, $v1, 2
    ctx->r6 = S32(ctx->r3 << 2);
    skip_1:
    // 0x801E54B0: b           L_801E54DC
    // 0x801E54B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_801E54DC;
    // 0x801E54B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_801E54B8:
    // 0x801E54B8: c.lt.s      $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f20.fl < ctx->f14.fl;
    // 0x801E54BC: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E54C0: bc1fl       L_801E54E0
    if (!c1cs) {
        // 0x801E54C4: sll         $a2, $v1, 2
        ctx->r6 = S32(ctx->r3 << 2);
            goto L_801E54E0;
    }
    goto skip_2;
    // 0x801E54C4: sll         $a2, $v1, 2
    ctx->r6 = S32(ctx->r3 << 2);
    skip_2:
    // 0x801E54C8: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x801E54CC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x801E54D0: bc1fl       L_801E54E0
    if (!c1cs) {
        // 0x801E54D4: sll         $a2, $v1, 2
        ctx->r6 = S32(ctx->r3 << 2);
            goto L_801E54E0;
    }
    goto skip_3;
    // 0x801E54D4: sll         $a2, $v1, 2
    ctx->r6 = S32(ctx->r3 << 2);
    skip_3:
    // 0x801E54D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_801E54DC:
    // 0x801E54DC: sll         $a2, $v1, 2
    ctx->r6 = S32(ctx->r3 << 2);
L_801E54E0:
    // 0x801E54E0: addu        $t8, $a0, $a2
    ctx->r24 = ADD32(ctx->r4, ctx->r6);
    // 0x801E54E4: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x801E54E8: addu        $t9, $a1, $a2
    ctx->r25 = ADD32(ctx->r5, ctx->r6);
    // 0x801E54EC: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x801E54F0: sub.s       $f2, $f4, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801E54F4: lwc1        $f6, 0x14($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14);
    // 0x801E54F8: addu        $t0, $s0, $a2
    ctx->r8 = ADD32(ctx->r16, ctx->r6);
    // 0x801E54FC: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x801E5500: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E5504: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801E5508: lw          $s0, 0xC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC);
    // 0x801E550C: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801E5510: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801E5514: ldc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X0);
    // 0x801E5518: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E551C: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801E5520: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801E5524: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E5528: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E552C: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801E5530: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801E5534: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x801E5538: nop

    // 0x801E553C: bc1fl       L_801E554C
    if (!c1cs) {
        // 0x801E5540: andi        $t1, $v0, 0xFF
        ctx->r9 = ctx->r2 & 0XFF;
            goto L_801E554C;
    }
    goto skip_4;
    // 0x801E5540: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    skip_4:
    // 0x801E5544: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E5548: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
L_801E554C:
    // 0x801E554C: jr          $ra
    // 0x801E5550: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    TRACE_RETURN()
    return;
    // 0x801E5550: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
;}
RECOMP_FUNC void func_801CCD10_63BB60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCD10: lw          $v1, 0x31C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X31C);
    // 0x801CCD14: lui         $at, 0xFFCF
    ctx->r1 = S32(0XFFCF << 16);
    // 0x801CCD18: ori         $at, $at, 0x7A20
    ctx->r1 = ctx->r1 | 0X7A20;
    // 0x801CCD1C: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801CCD20: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x801CCD24: ori         $at, $at, 0xC780
    ctx->r1 = ctx->r1 | 0XC780;
    // 0x801CCD28: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801CCD2C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CCD30: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801CCD34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CCD38: addiu       $at, $zero, 0x1F40
    ctx->r1 = ADD32(0, 0X1F40);
    // 0x801CCD3C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CCD40: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x801CCD44: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801CCD48: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x801CCD4C: nop

    // 0x801CCD50: subu        $t8, $t7, $v1
    ctx->r24 = SUB32(ctx->r15, ctx->r3);
    // 0x801CCD54: addiu       $t9, $t8, 0xFA0
    ctx->r25 = ADD32(ctx->r24, 0XFA0);
    // 0x801CCD58: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x801CCD5C: mflo        $t0
    ctx->r8 = lo;
    // 0x801CCD60: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x801CCD64: lui         $at, 0x4089
    ctx->r1 = S32(0X4089 << 16);
    // 0x801CCD68: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801CCD6C: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x801CCD70: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CCD74: ldc1        $f6, -0x1200($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1200);
    // 0x801CCD78: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x801CCD7C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801CCD80: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x801CCD84: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x801CCD88: jr          $ra
    // 0x801CCD8C: nop

    TRACE_RETURN()
    return;
    // 0x801CCD8C: nop

;}
RECOMP_FUNC void func_801E32C0_652110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E32C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801E32C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E32C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801E32CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801E32D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E32D4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801E32D8: lw          $s0, 0xEC($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XEC);
    // 0x801E32DC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801E32E0: lui         $a3, 0x4
    ctx->r7 = S32(0X4 << 16);
    // 0x801E32E4: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x801E32E8: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801E32EC: lui         $t0, 0x801F
    ctx->r8 = S32(0X801F << 16);
    // 0x801E32F0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x801E32F4: addu        $a3, $a3, $t6
    ctx->r7 = ADD32(ctx->r7, ctx->r14);
    // 0x801E32F8: lbu         $a3, -0x520B($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X520B);
    // 0x801E32FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E3300: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E3304: sll         $v1, $a3, 2
    ctx->r3 = S32(ctx->r7 << 2);
    // 0x801E3308: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x801E330C: lw          $t0, -0x1DD4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1DD4);
    // 0x801E3310: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x801E3314: sb          $a3, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r7;
    // 0x801E3318: jal         0x80035EEC
    // 0x801E331C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801E331C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    after_0:
    // 0x801E3320: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801E3324: lbu         $a3, 0x2F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X2F);
    // 0x801E3328: beq         $v0, $zero, L_801E3364
    if (ctx->r2 == 0) {
        // 0x801E332C: lw          $t0, 0x34($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X34);
            goto L_801E3364;
    }
    // 0x801E332C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x801E3330: lwl         $at, 0x0($t0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r8, 0X0);
    // 0x801E3334: lwr         $at, 0x3($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, 0X3);
    // 0x801E3338: lui         $t1, 0x801F
    ctx->r9 = S32(0X801F << 16);
    // 0x801E333C: addu        $t1, $t1, $v1
    ctx->r9 = ADD32(ctx->r9, ctx->r3);
    // 0x801E3340: swl         $at, 0x3C4($s0)
    do_swl(rdram, 0X3C4, ctx->r16, ctx->r1);
    // 0x801E3344: swr         $at, 0x3C7($s0)
    do_swr(rdram, 0X3C7, ctx->r16, ctx->r1);
    // 0x801E3348: lui         $at, 0x5000
    ctx->r1 = S32(0X5000 << 16);
    // 0x801E334C: ori         $at, $at, 0x3C4
    ctx->r1 = ctx->r1 | 0X3C4;
    // 0x801E3350: addu        $t9, $s0, $at
    ctx->r25 = ADD32(ctx->r16, ctx->r1);
    // 0x801E3354: sw          $t9, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r25;
    // 0x801E3358: lw          $t1, -0x1D94($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1D94);
    // 0x801E335C: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x801E3360: sw          $t1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r9;
L_801E3364:
    // 0x801E3364: lui         $s0, 0x801F
    ctx->r16 = S32(0X801F << 16);
    // 0x801E3368: addu        $s0, $s0, $a3
    ctx->r16 = ADD32(ctx->r16, ctx->r7);
    // 0x801E336C: lui         $s1, 0x801F
    ctx->r17 = S32(0X801F << 16);
    // 0x801E3370: lbu         $s0, -0x1D98($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X1D98);
    // 0x801E3374: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    // 0x801E3378: lw          $s1, -0x1DA8($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X1DA8);
    // 0x801E337C: sw          $t0, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->r8;
    // 0x801E3380: sb          $s0, 0x64($s2)
    MEM_B(0X64, ctx->r18) = ctx->r16;
    // 0x801E3384: beq         $s0, $zero, L_801E33AC
    if (ctx->r16 == 0) {
        // 0x801E3388: sw          $s1, 0x60($s2)
        MEM_W(0X60, ctx->r18) = ctx->r17;
            goto L_801E33AC;
    }
    // 0x801E3388: sw          $s1, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r17;
L_801E338C:
    // 0x801E338C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801E3390: jal         0x801CC87C
    // 0x801E3394: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801CC87C_63B6CC(rdram, ctx);
        goto after_1;
    // 0x801E3394: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x801E3398: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x801E339C: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x801E33A0: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    // 0x801E33A4: bne         $t2, $zero, L_801E338C
    if (ctx->r10 != 0) {
        // 0x801E33A8: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_801E338C;
    }
    // 0x801E33A8: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
L_801E33AC:
    // 0x801E33AC: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x801E33B0: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x801E33B4: lui         $t4, 0x4
    ctx->r12 = S32(0X4 << 16);
    // 0x801E33B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E33BC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801E33C0: lhu         $t4, -0x520C($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X520C);
    // 0x801E33C4: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x801E33C8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E33CC: bne         $t4, $at, L_801E33F0
    if (ctx->r12 != ctx->r1) {
        // 0x801E33D0: nop
    
            goto L_801E33F0;
    }
    // 0x801E33D0: nop

    // 0x801E33D4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E33D8: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x801E33DC: sh          $t5, 0x66($s2)
    MEM_H(0X66, ctx->r18) = ctx->r13;
    // 0x801E33E0: jal         0x8003521C
    // 0x801E33E4: addiu       $a0, $a0, 0x341C
    ctx->r4 = ADD32(ctx->r4, 0X341C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E33E4: addiu       $a0, $a0, 0x341C
    ctx->r4 = ADD32(ctx->r4, 0X341C);
    after_2:
    // 0x801E33E8: b           L_801E33FC
    // 0x801E33EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801E33FC;
    // 0x801E33EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E33F0:
    // 0x801E33F0: jal         0x8003521C
    // 0x801E33F4: addiu       $a0, $a0, 0x3410
    ctx->r4 = ADD32(ctx->r4, 0X3410);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E33F4: addiu       $a0, $a0, 0x3410
    ctx->r4 = ADD32(ctx->r4, 0X3410);
    after_3:
    // 0x801E33F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E33FC:
    // 0x801E33FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E3400: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801E3404: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801E3408: jr          $ra
    // 0x801E340C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801E340C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801E4E64_653CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4E64: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x801E4E68: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E4E6C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x801E4E70: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x801E4E74: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801E4E78: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x801E4E7C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E4E80: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E4E84: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E4E88: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E4E8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E4E90: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801E4E94: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E4E98: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E4E9C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E4EA0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E4EA4: addiu       $a3, $sp, 0x6C
    ctx->r7 = ADD32(ctx->r29, 0X6C);
    // 0x801E4EA8: addiu       $t9, $sp, 0x70
    ctx->r25 = ADD32(ctx->r29, 0X70);
    // 0x801E4EAC: addiu       $t0, $sp, 0x74
    ctx->r8 = ADD32(ctx->r29, 0X74);
    // 0x801E4EB0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E4EB4: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    // 0x801E4EB8: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E4EBC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E4EC0: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E4EC4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E4EC8: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x801E4ECC: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E4ED0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E4ED4: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E4ED8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E4EDC: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
    // 0x801E4EE0: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E4EE4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E4EE8: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E4EEC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E4EF0: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x801E4EF4: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E4EF8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E4EFC: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E4F00: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E4F04: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x801E4F08: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E4F0C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E4F10: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E4F14: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E4F18: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x801E4F1C: lhu         $t6, 0x14($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X14);
    // 0x801E4F20: sh          $t6, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r14;
    // 0x801E4F24: lhu         $t7, 0x16($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X16);
    // 0x801E4F28: sh          $t7, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r15;
    // 0x801E4F2C: lhu         $t8, 0x18($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X18);
    // 0x801E4F30: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801E4F34: sh          $t8, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r24;
    // 0x801E4F38: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x801E4F3C: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    // 0x801E4F40: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x801E4F44: lwc1        $f6, 0x88($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X88);
    // 0x801E4F48: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E4F4C: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x801E4F50: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E4F54: lwc1        $f8, 0x8C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x801E4F58: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801E4F5C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E4F60: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x801E4F64: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E4F68: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801E4F6C: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x801E4F70: nop

    // 0x801E4F74: bc1tl       L_801E4FC8
    if (c1cs) {
        // 0x801E4F78: lwc1        $f4, 0x54($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
            goto L_801E4FC8;
    }
    goto skip_0;
    // 0x801E4F78: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    skip_0:
    // 0x801E4F7C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801E4F80: jal         0x80033898
    // 0x801E4F84: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E4F84: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x801E4F88: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801E4F8C: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E4F90: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E4F94: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E4F98: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E4F9C: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E4FA0: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E4FA4: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801E4FA8: swc1        $f16, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f16.u32l;
    // 0x801E4FAC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E4FB0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E4FB4: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E4FB8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E4FBC: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x801E4FC0: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    // 0x801E4FC4: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
L_801E4FC8:
    // 0x801E4FC8: lwc1        $f18, 0x78($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X78);
    // 0x801E4FCC: addiu       $s2, $sp, 0x6C
    ctx->r18 = ADD32(ctx->r29, 0X6C);
    // 0x801E4FD0: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801E4FD4: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x801E4FD8: addiu       $t4, $sp, 0x70
    ctx->r12 = ADD32(ctx->r29, 0X70);
    // 0x801E4FDC: addiu       $t5, $sp, 0x74
    ctx->r13 = ADD32(ctx->r29, 0X74);
    // 0x801E4FE0: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x801E4FE4: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x801E4FE8: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E4FEC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E4FF0: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E4FF4: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x801E4FF8: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x801E4FFC: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E5000: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x801E5004: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E5008: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E500C: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x801E5010: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E5014: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x801E5018: mul.d       $f18, $f4, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801E501C: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x801E5020: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x801E5024: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E5028: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E502C: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E5030: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x801E5034: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x801E5038: lwc1        $f18, 0x20($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E503C: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x801E5040: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E5044: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E5048: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x801E504C: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E5050: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x801E5054: mul.d       $f18, $f4, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801E5058: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x801E505C: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x801E5060: lhu         $t1, 0x14($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X14);
    // 0x801E5064: sh          $t1, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r9;
    // 0x801E5068: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x801E506C: andi        $a0, $t1, 0xFFFF
    ctx->r4 = ctx->r9 & 0XFFFF;
    // 0x801E5070: sh          $t2, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r10;
    // 0x801E5074: lhu         $t3, 0x18($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X18);
    // 0x801E5078: andi        $a1, $t2, 0xFFFF
    ctx->r5 = ctx->r10 & 0XFFFF;
    // 0x801E507C: sh          $t3, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r11;
    // 0x801E5080: lwc1        $f8, 0x84($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X84);
    // 0x801E5084: andi        $a2, $t3, 0xFFFF
    ctx->r6 = ctx->r11 & 0XFFFF;
    // 0x801E5088: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x801E508C: lwc1        $f10, 0x88($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X88);
    // 0x801E5090: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E5094: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x801E5098: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E509C: lwc1        $f16, 0x8C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x801E50A0: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801E50A4: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x801E50A8: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E50AC: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801E50B0: c.eq.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl == ctx->f10.fl;
    // 0x801E50B4: nop

    // 0x801E50B8: bc1tl       L_801E5100
    if (c1cs) {
        // 0x801E50BC: lwc1        $f8, 0x90($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X90);
            goto L_801E5100;
    }
    goto skip_1;
    // 0x801E50BC: lwc1        $f8, 0x90($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X90);
    skip_1:
    // 0x801E50C0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801E50C4: jal         0x80033898
    // 0x801E50C8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801E50C8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_1:
    // 0x801E50CC: lwc1        $f16, 0x9C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801E50D0: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E50D4: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801E50D8: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E50DC: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801E50E0: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E50E4: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801E50E8: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801E50EC: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    // 0x801E50F0: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801E50F4: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x801E50F8: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x801E50FC: lwc1        $f8, 0x90($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X90);
L_801E5100:
    // 0x801E5100: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    // 0x801E5104: lhu         $a1, 0x4E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4E);
    // 0x801E5108: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x801E510C: lwc1        $f6, 0x94($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801E5110: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E5114: lhu         $a2, 0x50($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X50);
    // 0x801E5118: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x801E511C: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E5120: lwc1        $f10, 0x98($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X98);
    // 0x801E5124: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801E5128: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801E512C: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x801E5130: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E5134: addiu       $t6, $sp, 0x70
    ctx->r14 = ADD32(ctx->r29, 0X70);
    // 0x801E5138: addiu       $t7, $sp, 0x74
    ctx->r15 = ADD32(ctx->r29, 0X74);
    // 0x801E513C: add.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x801E5140: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x801E5144: nop

    // 0x801E5148: bc1tl       L_801E5180
    if (c1cs) {
        // 0x801E514C: lwc1        $f10, 0x54($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
            goto L_801E5180;
    }
    goto skip_2;
    // 0x801E514C: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    skip_2:
    // 0x801E5150: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E5154: jal         0x80033898
    // 0x801E5158: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_80033898_34498(rdram, ctx);
        goto after_2;
    // 0x801E5158: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_2:
    // 0x801E515C: jal         0x8001D394
    // 0x801E5160: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8001D394_1DF94(rdram, ctx);
        goto after_3;
    // 0x801E5160: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x801E5164: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x801E5168: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E516C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E5170: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E5174: jal         0x8001DB04
    // 0x801E5178: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_4;
    // 0x801E5178: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x801E517C: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
L_801E5180:
    // 0x801E5180: lwc1        $f16, 0x78($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E5184: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E5188: lui         $at, 0x3FE8
    ctx->r1 = S32(0X3FE8 << 16);
    // 0x801E518C: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801E5190: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E5194: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E5198: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E519C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801E51A0: addiu       $t8, $sp, 0x70
    ctx->r24 = ADD32(ctx->r29, 0X70);
    // 0x801E51A4: addiu       $t9, $sp, 0x74
    ctx->r25 = ADD32(ctx->r29, 0X74);
    // 0x801E51A8: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x801E51AC: lwc1        $f18, 0x7C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x801E51B0: mul.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x801E51B4: cvt.d.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f18.d = CVT_D_S(ctx->f4.fl);
    // 0x801E51B8: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x801E51BC: lwc1        $f16, 0x80($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X80);
    // 0x801E51C0: c.lt.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl < ctx->f20.fl;
    // 0x801E51C4: swc1        $f20, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f20.u32l;
    // 0x801E51C8: mul.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801E51CC: swc1        $f20, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f20.u32l;
    // 0x801E51D0: mul.d       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E51D4: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x801E51D8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E51DC: bc1f        L_801E51F4
    if (!c1cs) {
        // 0x801E51E0: swc1        $f16, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
            goto L_801E51F4;
    }
    // 0x801E51E0: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x801E51E4: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801E51E8: neg.s       $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = -ctx->f6.fl;
    // 0x801E51EC: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x801E51F0: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
L_801E51F4:
    // 0x801E51F4: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    // 0x801E51F8: lhu         $a1, 0x4E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4E);
    // 0x801E51FC: lhu         $a2, 0x50($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X50);
    // 0x801E5200: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801E5204: jal         0x80033898
    // 0x801E5208: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x801E5208: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_5:
    // 0x801E520C: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E5210: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801E5214: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E5218: lwc1        $f16, 0x8C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801E521C: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801E5220: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801E5224: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E5228: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x801E522C: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E5230: lui         $at, 0x3FE8
    ctx->r1 = S32(0X3FE8 << 16);
    // 0x801E5234: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E5238: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E523C: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    // 0x801E5240: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x801E5244: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x801E5248: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801E524C: mul.d       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x801E5250: lwc1        $f2, 0x64($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E5254: addiu       $t0, $sp, 0x70
    ctx->r8 = ADD32(ctx->r29, 0X70);
    // 0x801E5258: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x801E525C: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x801E5260: addiu       $t1, $sp, 0x74
    ctx->r9 = ADD32(ctx->r29, 0X74);
    // 0x801E5264: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801E5268: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801E526C: sub.d       $f18, $f6, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f6.d - ctx->f4.d;
    // 0x801E5270: swc1        $f20, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f20.u32l;
    // 0x801E5274: swc1        $f20, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f20.u32l;
    // 0x801E5278: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    // 0x801E527C: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x801E5280: lhu         $a1, 0x4E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4E);
    // 0x801E5284: lhu         $a2, 0x50($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X50);
    // 0x801E5288: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801E528C: jal         0x80033898
    // 0x801E5290: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_6;
    // 0x801E5290: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x801E5294: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E5298: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801E529C: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E52A0: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801E52A4: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801E52A8: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E52AC: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801E52B0: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801E52B4: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801E52B8: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E52BC: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x801E52C0: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801E52C4: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    // 0x801E52C8: addiu       $t2, $sp, 0xAC
    ctx->r10 = ADD32(ctx->r29, 0XAC);
    // 0x801E52CC: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801E52D0: addiu       $t3, $sp, 0x9C
    ctx->r11 = ADD32(ctx->r29, 0X9C);
    // 0x801E52D4: addiu       $t4, $sp, 0x8C
    ctx->r12 = ADD32(ctx->r29, 0X8C);
    // 0x801E52D8: addiu       $t5, $sp, 0x7C
    ctx->r13 = ADD32(ctx->r29, 0X7C);
    // 0x801E52DC: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x801E52E0: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x801E52E4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801E52E8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801E52EC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801E52F0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801E52F4: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x801E52F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E52FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801E5300: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    // 0x801E5304: jal         0x801E5328
    // 0x801E5308: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    func_801E5328_654178(rdram, ctx);
        goto after_7;
    // 0x801E5308: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    after_7:
    // 0x801E530C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E5310: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x801E5314: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801E5318: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x801E531C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x801E5320: jr          $ra
    // 0x801E5324: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    TRACE_RETURN()
    return;
    // 0x801E5324: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_801D30E8_641F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D30E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D30EC: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D30F0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D30F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D30F8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D30FC: lwc1        $f16, 0x64($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D3100: lw          $t6, 0xA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA4);
    // 0x801D3104: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D3108: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801D310C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D3110: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D3114: bne         $v0, $zero, L_801D3120
    if (ctx->r2 != 0) {
        // 0x801D3118: swc1        $f18, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
            goto L_801D3120;
    }
    // 0x801D3118: swc1        $f18, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
    // 0x801D311C: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
L_801D3120:
    // 0x801D3120: jr          $ra
    // 0x801D3124: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801D3124: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801DAF60_649DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAF60: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801DAF64: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801DAF68: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801DAF6C: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801DAF70: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801DAF74: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DAF78: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DAF7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DAF80: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DAF84: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801DAF88: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DAF8C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DAF90: lui         $at, 0x4039
    ctx->r1 = S32(0X4039 << 16);
    // 0x801DAF94: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DAF98: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DAF9C: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801DAFA0: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801DAFA4: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801DAFA8: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801DAFAC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DAFB0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DAFB4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DAFB8: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801DAFBC: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801DAFC0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DAFC4: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801DAFC8: nop

    // 0x801DAFCC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801DAFD0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DAFD4: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801DAFD8: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801DAFDC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DAFE0: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801DAFE4: nop

    // 0x801DAFE8: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801DAFEC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DAFF0: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801DAFF4: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801DAFF8: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801DAFFC: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801DB000: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DB004: jal         0x80033898
    // 0x801DB008: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DB008: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801DB00C: addiu       $t8, $zero, 0x4A
    ctx->r24 = ADD32(0, 0X4A);
    // 0x801DB010: addiu       $t9, $zero, 0x31
    ctx->r25 = ADD32(0, 0X31);
    // 0x801DB014: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x801DB018: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801DB01C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801DB020: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801DB024: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801DB028: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801DB02C: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801DB030: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DB034: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DB038: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801DB03C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DB040: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DB044: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x801DB048: addiu       $t3, $zero, 0x300
    ctx->r11 = ADD32(0, 0X300);
    // 0x801DB04C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801DB050: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801DB054: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DB05C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DB060: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DB064: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801DB068: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801DB06C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801DB070: lwc1        $f18, 0x64($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801DB074: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x801DB078: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801DB07C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DB080: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DB084: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801DB088: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801DB08C: jal         0x801CDA88
    // 0x801DB090: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801DB090: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801DB094: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x801DB098: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DB09C: lwc1        $f10, 0x5C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801DB0A0: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DB0A4: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DB0A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB0AC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DB0B0: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DB0B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB0B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DB0BC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801DB0C0: lwc1        $f4, 0x60($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801DB0C4: lui         $a2, 0x4296
    ctx->r6 = S32(0X4296 << 16);
    // 0x801DB0C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801DB0CC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801DB0D0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801DB0D4: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801DB0D8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DB0DC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DB0E0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DB0E4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DB0E8: jal         0x801DF9EC
    // 0x801DB0EC: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801DB0EC: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801DB0F0: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801DB0F4: lhu         $t5, 0xE2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DB0F8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801DB0FC: bnel        $t6, $zero, L_801DB154
    if (ctx->r14 != 0) {
        // 0x801DB100: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801DB154;
    }
    goto skip_0;
    // 0x801DB100: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801DB104: lhu         $t7, 0xE4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE4);
    // 0x801DB108: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801DB10C: bne         $t7, $at, L_801DB12C
    if (ctx->r15 != ctx->r1) {
        // 0x801DB110: nop
    
            goto L_801DB12C;
    }
    // 0x801DB110: nop

    // 0x801DB114: jal         0x80038B98
    // 0x801DB118: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801DB118: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801DB11C: lw          $t9, 0xEC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XEC);
    // 0x801DB120: addiu       $t8, $zero, 0x299
    ctx->r24 = ADD32(0, 0X299);
    // 0x801DB124: b           L_801DB140
    // 0x801DB128: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
        goto L_801DB140;
    // 0x801DB128: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
L_801DB12C:
    // 0x801DB12C: jal         0x80038B98
    // 0x801DB130: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801DB130: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801DB134: lw          $t1, 0xEC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XEC);
    // 0x801DB138: addiu       $t0, $zero, 0x298
    ctx->r8 = ADD32(0, 0X298);
    // 0x801DB13C: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_801DB140:
    // 0x801DB140: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801DB144: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DB148: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x801DB14C: sh          $t3, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r11;
    // 0x801DB150: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801DB154:
    // 0x801DB154: jal         0x801E8850
    // 0x801DB158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801E8850_6576A0(rdram, ctx);
        goto after_5;
    // 0x801DB158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x801DB15C: jal         0x801D8BF0
    // 0x801DB160: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_6;
    // 0x801DB160: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801DB164: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801DB168: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801DB16C: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801DB170: jr          $ra
    // 0x801DB174: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801DB174: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801D8D90_647BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8D90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D8D94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D8D98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D8D9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D8DA0: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D8DA4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801D8DA8: bgezl       $t6, L_801D8DD0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D8DAC: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_801D8DD0;
    }
    goto skip_0;
    // 0x801D8DAC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x801D8DB0: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D8DB4: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D8DB8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D8DBC: jal         0x800352EC
    // 0x801D8DC0: addiu       $a0, $a0, -0x71E8
    ctx->r4 = ADD32(ctx->r4, -0X71E8);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D8DC0: addiu       $a0, $a0, -0x71E8
    ctx->r4 = ADD32(ctx->r4, -0X71E8);
    after_0:
    // 0x801D8DC4: b           L_801D8E0C
    // 0x801D8DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D8E0C;
    // 0x801D8DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D8DCC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_801D8DD0:
    // 0x801D8DD0: jal         0x801CD504
    // 0x801D8DD4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801D8DD4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801D8DD8: beq         $v0, $zero, L_801D8DF0
    if (ctx->r2 == 0) {
        // 0x801D8DDC: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801D8DF0;
    }
    // 0x801D8DDC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801D8DE0: jal         0x801D8BF0
    // 0x801D8DE4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_2;
    // 0x801D8DE4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801D8DE8: b           L_801D8E0C
    // 0x801D8DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D8E0C;
    // 0x801D8DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D8DF0:
    // 0x801D8DF0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801D8DF4: jal         0x801CD634
    // 0x801D8DF8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801D8DF8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x801D8DFC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801D8E00: jal         0x801CD780
    // 0x801D8E04: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801D8E04: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801D8E08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D8E0C:
    // 0x801D8E0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D8E10: jr          $ra
    // 0x801D8E14: nop

    TRACE_RETURN()
    return;
    // 0x801D8E14: nop

;}
RECOMP_FUNC void func_801D4178_642FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4178: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801D417C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D4180: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801D4184: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801D4188: lh          $t0, 0xB6($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XB6);
    // 0x801D418C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D4190: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801D4194: bne         $t0, $zero, L_801D41A8
    if (ctx->r8 != 0) {
        // 0x801D4198: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_801D41A8;
    }
    // 0x801D4198: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D419C: lw          $t6, 0xAC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XAC);
    // 0x801D41A0: negu        $t7, $t6
    ctx->r15 = SUB32(0, ctx->r14);
    // 0x801D41A4: sw          $t7, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r15;
L_801D41A8:
    // 0x801D41A8: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x801D41AC: lw          $v1, 0xB0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB0);
    // 0x801D41B0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D41B4: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801D41B8: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x801D41BC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D41C0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D41C4: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x801D41C8: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x801D41CC: sll         $t8, $t0, 16
    ctx->r24 = S32(ctx->r8 << 16);
    // 0x801D41D0: sra         $t0, $t8, 16
    ctx->r8 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801D41D4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801D41D8: sll         $a1, $t0, 9
    ctx->r5 = S32(ctx->r8 << 9);
    // 0x801D41DC: addiu       $a1, $a1, 0x1000
    ctx->r5 = ADD32(ctx->r5, 0X1000);
    // 0x801D41E0: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801D41E4: sh          $t0, 0xB6($s0)
    MEM_H(0XB6, ctx->r16) = ctx->r8;
    // 0x801D41E8: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x801D41EC: addiu       $t5, $zero, 0x200
    ctx->r13 = ADD32(0, 0X200);
    // 0x801D41F0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801D41F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D41F8: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x801D41FC: addiu       $t3, $sp, 0x40
    ctx->r11 = ADD32(ctx->r29, 0X40);
    // 0x801D4200: addiu       $t4, $sp, 0x44
    ctx->r12 = ADD32(ctx->r29, 0X44);
    // 0x801D4204: div.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x801D4208: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801D420C: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x801D4210: beq         $t0, $zero, L_801D4224
    if (ctx->r8 == 0) {
        // 0x801D4214: swc1        $f8, 0x5C($s0)
        MEM_W(0X5C, ctx->r16) = ctx->f8.u32l;
            goto L_801D4224;
    }
    // 0x801D4214: swc1        $f8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f8.u32l;
    // 0x801D4218: lw          $t1, 0xAC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XAC);
    // 0x801D421C: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x801D4220: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
L_801D4224:
    // 0x801D4224: lw          $v1, 0xA0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA0);
    // 0x801D4228: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D422C: lui         $at, 0x4099
    ctx->r1 = S32(0X4099 << 16);
    // 0x801D4230: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x801D4234: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x801D4238: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D423C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801D4240: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D4244: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x801D4248: div.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    // 0x801D424C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D4250: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801D4254: sub.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d - ctx->f16.d;
    // 0x801D4258: swc1        $f6, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f6.u32l;
    // 0x801D425C: ldc1        $f6, -0xF38($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XF38);
    // 0x801D4260: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D4264: trunc.w.d   $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x801D4268: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    // 0x801D426C: nop

    // 0x801D4270: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x801D4274: nop

    // 0x801D4278: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x801D427C: c.le.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d <= ctx->f6.d;
    // 0x801D4280: nop

    // 0x801D4284: bc1fl       L_801D42B0
    if (!c1cs) {
        // 0x801D4288: mtc1        $v0, $f4
        ctx->f4.u32l = ctx->r2;
            goto L_801D42B0;
    }
    goto skip_0;
    // 0x801D4288: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    skip_0:
    // 0x801D428C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x801D4290: sb          $t3, 0x9C($s0)
    MEM_B(0X9C, ctx->r16) = ctx->r11;
    // 0x801D4294: sb          $zero, 0x9D($s0)
    MEM_B(0X9D, ctx->r16) = 0;
    // 0x801D4298: addiu       $t4, $zero, 0x100
    ctx->r12 = ADD32(0, 0X100);
    // 0x801D429C: sh          $t4, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r12;
    // 0x801D42A0: sh          $t5, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r13;
    // 0x801D42A4: b           L_801D4390
    // 0x801D42A8: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
        goto L_801D4390;
    // 0x801D42A8: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x801D42AC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
L_801D42B0:
    // 0x801D42B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D42B4: sw          $v1, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r3;
    // 0x801D42B8: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D42BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D42C0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801D42C4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D42C8: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x801D42CC: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x801D42D0: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x801D42D4: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x801D42D8: bgez        $a1, L_801D42E8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801D42DC: sra         $t7, $a1, 4
        ctx->r15 = S32(SIGNED(ctx->r5) >> 4);
            goto L_801D42E8;
    }
    // 0x801D42DC: sra         $t7, $a1, 4
    ctx->r15 = S32(SIGNED(ctx->r5) >> 4);
    // 0x801D42E0: addiu       $at, $a1, 0xF
    ctx->r1 = ADD32(ctx->r5, 0XF);
    // 0x801D42E4: sra         $t7, $at, 4
    ctx->r15 = S32(SIGNED(ctx->r1) >> 4);
L_801D42E8:
    // 0x801D42E8: addiu       $t1, $t7, 0x200
    ctx->r9 = ADD32(ctx->r15, 0X200);
    // 0x801D42EC: jal         0x80033898
    // 0x801D42F0: andi        $a1, $t1, 0x3FF
    ctx->r5 = ctx->r9 & 0X3FF;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801D42F0: andi        $a1, $t1, 0x3FF
    ctx->r5 = ctx->r9 & 0X3FF;
    after_0:
    // 0x801D42F4: jal         0x8001D394
    // 0x801D42F8: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_8001D394_1DF94(rdram, ctx);
        goto after_1;
    // 0x801D42F8: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x801D42FC: jal         0x801CD634
    // 0x801D4300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_2;
    // 0x801D4300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801D4304: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D4308: ldc1        $f0, -0xF30($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0XF30);
    // 0x801D430C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D4310: lwc1        $f6, -0xF28($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0XF28);
    // 0x801D4314: lwc1        $f8, 0x60($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X60);
    // 0x801D4318: lwc1        $f18, 0x5C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x801D431C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D4320: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x801D4324: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x801D4328: cvt.d.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.d = CVT_D_S(ctx->f18.fl);
    // 0x801D432C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801D4330: lwc1        $f10, 0x64($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D4334: mul.d       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801D4338: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801D433C: mul.d       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x801D4340: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x801D4344: mul.d       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801D4348: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x801D434C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x801D4350: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x801D4354: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
    // 0x801D4358: jal         0x8001D14C
    // 0x801D435C: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    func_8001D14C_1DD4C(rdram, ctx);
        goto after_3;
    // 0x801D435C: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    after_3:
    // 0x801D4360: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D4364: andi        $s0, $v0, 0xFFFF
    ctx->r16 = ctx->r2 & 0XFFFF;
    // 0x801D4368: lwc1        $f14, -0xF24($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0XF24);
    // 0x801D436C: jal         0x800040A8
    // 0x801D4370: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    func_800040A8_4CA8(rdram, ctx);
        goto after_4;
    // 0x801D4370: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    after_4:
    // 0x801D4374: subu        $t6, $s0, $v0
    ctx->r14 = SUB32(ctx->r16, ctx->r2);
    // 0x801D4378: andi        $a3, $t6, 0x3FF
    ctx->r7 = ctx->r14 & 0X3FF;
    // 0x801D437C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x801D4380: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x801D4384: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D4388: jal         0x8001DB04
    // 0x801D438C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_5;
    // 0x801D438C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
L_801D4390:
    // 0x801D4390: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D4394: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801D4398: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801D439C: jr          $ra
    // 0x801D43A0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801D43A0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801D11B4_640004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D11B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D11B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D11BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D11C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D11C4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D11C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D11CC: jal         0x801CCE64
    // 0x801D11D0: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    func_801CCE64_63BCB4(rdram, ctx);
        goto after_0;
    // 0x801D11D0: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    after_0:
    // 0x801D11D4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D11D8: lui         $at, 0x40AD
    ctx->r1 = S32(0X40AD << 16);
    // 0x801D11DC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D11E0: lwc1        $f0, 0x324($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X324);
    // 0x801D11E4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D11E8: lwc1        $f2, 0x64($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D11EC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801D11F0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x801D11F4: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801D11F8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801D11FC: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    // 0x801D1200: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x801D1204: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x801D1208: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x801D120C: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801D1210: nop

    // 0x801D1214: bc1f        L_801D1230
    if (!c1cs) {
        // 0x801D1218: nop
    
            goto L_801D1230;
    }
    // 0x801D1218: nop

    // 0x801D121C: sb          $t6, 0x9D($s0)
    MEM_B(0X9D, ctx->r16) = ctx->r14;
    // 0x801D1220: sb          $t7, 0xC4($s0)
    MEM_B(0XC4, ctx->r16) = ctx->r15;
    // 0x801D1224: sw          $zero, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = 0;
    // 0x801D1228: b           L_801D1290
    // 0x801D122C: sh          $zero, 0x358($a1)
    MEM_H(0X358, ctx->r5) = 0;
        goto L_801D1290;
    // 0x801D122C: sh          $zero, 0x358($a1)
    MEM_H(0X358, ctx->r5) = 0;
L_801D1230:
    // 0x801D1230: jal         0x801CCBD0
    // 0x801D1234: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_801CCBD0_63BA20(rdram, ctx);
        goto after_1;
    // 0x801D1234: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x801D1238: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801D123C: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801D1240: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801D1244: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x801D1248: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D124C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D1250: ldc1        $f6, -0x1070($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1070);
    // 0x801D1254: lw          $v1, 0xB4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB4);
    // 0x801D1258: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x801D125C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801D1260: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x801D1264: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x801D1268: nop

    // 0x801D126C: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x801D1270: slti        $at, $v1, 0x7148
    ctx->r1 = SIGNED(ctx->r3) < 0X7148 ? 1 : 0;
    // 0x801D1274: bnel        $at, $zero, L_801D1290
    if (ctx->r1 != 0) {
        // 0x801D1278: sw          $v1, 0xB4($s0)
        MEM_W(0XB4, ctx->r16) = ctx->r3;
            goto L_801D1290;
    }
    goto skip_0;
    // 0x801D1278: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    skip_0:
    // 0x801D127C: addiu       $v1, $v1, -0x7148
    ctx->r3 = ADD32(ctx->r3, -0X7148);
L_801D1280:
    // 0x801D1280: slti        $at, $v1, 0x7148
    ctx->r1 = SIGNED(ctx->r3) < 0X7148 ? 1 : 0;
    // 0x801D1284: beql        $at, $zero, L_801D1280
    if (ctx->r1 == 0) {
        // 0x801D1288: addiu       $v1, $v1, -0x7148
        ctx->r3 = ADD32(ctx->r3, -0X7148);
            goto L_801D1280;
    }
    goto skip_1;
    // 0x801D1288: addiu       $v1, $v1, -0x7148
    ctx->r3 = ADD32(ctx->r3, -0X7148);
    skip_1:
    // 0x801D128C: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
L_801D1290:
    // 0x801D1290: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D1294: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D1298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D129C: jr          $ra
    // 0x801D12A0: nop

    TRACE_RETURN()
    return;
    // 0x801D12A0: nop

;}
RECOMP_FUNC void func_801D6218_645068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6218: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D621C: jr          $ra
    // 0x801D6220: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801D6220: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801CCBD0_63BA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCBD0: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x801CCBD4: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801CCBD8: slt         $v0, $zero, $t7
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801CCBDC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CCBE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801CCBE4: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x801CCBE8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801CCBEC: andi        $t9, $a2, 0xFFFF
    ctx->r25 = ctx->r6 & 0XFFFF;
    // 0x801CCBF0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801CCBF4: andi        $t0, $a3, 0xFFFF
    ctx->r8 = ctx->r7 & 0XFFFF;
    // 0x801CCBF8: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x801CCBFC: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x801CCC00: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x801CCC04: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x801CCC08: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x801CCC0C: bne         $t1, $zero, L_801CCC24
    if (ctx->r9 != 0) {
        // 0x801CCC10: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_801CCC24;
    }
    // 0x801CCC10: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801CCC14: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x801CCC18: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x801CCC1C: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x801CCC20: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
L_801CCC24:
    // 0x801CCC24: subu        $a0, $a0, $a1
    ctx->r4 = SUB32(ctx->r4, ctx->r5);
    // 0x801CCC28: sll         $t4, $a0, 16
    ctx->r12 = S32(ctx->r4 << 16);
    // 0x801CCC2C: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x801CCC30: bgez        $t5, L_801CCC40
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801CCC34: or          $a0, $t5, $zero
        ctx->r4 = ctx->r13 | 0;
            goto L_801CCC40;
    }
    // 0x801CCC34: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x801CCC38: jr          $ra
    // 0x801CCC3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801CCC3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CCC40:
    // 0x801CCC40: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x801CCC44: andi        $t6, $a3, 0xFFFF
    ctx->r14 = ctx->r7 & 0XFFFF;
    // 0x801CCC48: beq         $t6, $zero, L_801CCCF8
    if (ctx->r14 == 0) {
        // 0x801CCC4C: or          $a3, $t6, $zero
        ctx->r7 = ctx->r14 | 0;
            goto L_801CCCF8;
    }
    // 0x801CCC4C: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x801CCC50: div         $zero, $a2, $t6
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r14)));
    // 0x801CCC54: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x801CCC58: bne         $a3, $zero, L_801CCC64
    if (ctx->r7 != 0) {
        // 0x801CCC5C: nop
    
            goto L_801CCC64;
    }
    // 0x801CCC5C: nop

    // 0x801CCC60: break       7
    do_break(2149370976);
L_801CCC64:
    // 0x801CCC64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CCC68: bne         $a3, $at, L_801CCC7C
    if (ctx->r7 != ctx->r1) {
        // 0x801CCC6C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CCC7C;
    }
    // 0x801CCC6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CCC70: bne         $v0, $at, L_801CCC7C
    if (ctx->r2 != ctx->r1) {
        // 0x801CCC74: nop
    
            goto L_801CCC7C;
    }
    // 0x801CCC74: nop

    // 0x801CCC78: break       6
    do_break(2149371000);
L_801CCC7C:
    // 0x801CCC7C: mflo        $a3
    ctx->r7 = lo;
    // 0x801CCC80: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x801CCC84: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801CCC88: beq         $at, $zero, L_801CCC9C
    if (ctx->r1 == 0) {
        // 0x801CCC8C: or          $a3, $t7, $zero
        ctx->r7 = ctx->r15 | 0;
            goto L_801CCC9C;
    }
    // 0x801CCC8C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x801CCC90: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x801CCC94: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x801CCC98: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_801CCC9C:
    // 0x801CCC9C: div         $zero, $a0, $a3
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r7)));
    // 0x801CCCA0: bne         $a3, $zero, L_801CCCAC
    if (ctx->r7 != 0) {
        // 0x801CCCA4: nop
    
            goto L_801CCCAC;
    }
    // 0x801CCCA4: nop

    // 0x801CCCA8: break       7
    do_break(2149371048);
L_801CCCAC:
    // 0x801CCCAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CCCB0: bne         $a3, $at, L_801CCCC4
    if (ctx->r7 != ctx->r1) {
        // 0x801CCCB4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CCCC4;
    }
    // 0x801CCCB4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CCCB8: bne         $a0, $at, L_801CCCC4
    if (ctx->r4 != ctx->r1) {
        // 0x801CCCBC: nop
    
            goto L_801CCCC4;
    }
    // 0x801CCCBC: nop

    // 0x801CCCC0: break       6
    do_break(2149371072);
L_801CCCC4:
    // 0x801CCCC4: mflo        $a0
    ctx->r4 = lo;
    // 0x801CCCC8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x801CCCCC: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x801CCCD0: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x801CCCD4: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x801CCCD8: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x801CCCDC: multu       $t0, $t2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CCCE0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x801CCCE4: mflo        $v0
    ctx->r2 = lo;
    // 0x801CCCE8: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x801CCCEC: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x801CCCF0: jr          $ra
    // 0x801CCCF4: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    TRACE_RETURN()
    return;
    // 0x801CCCF4: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_801CCCF8:
    // 0x801CCCF8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x801CCCFC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x801CCD00: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x801CCD04: sra         $v0, $t5, 16
    ctx->r2 = S32(SIGNED(ctx->r13) >> 16);
    // 0x801CCD08: jr          $ra
    // 0x801CCD0C: nop

    TRACE_RETURN()
    return;
    // 0x801CCD0C: nop

;}
