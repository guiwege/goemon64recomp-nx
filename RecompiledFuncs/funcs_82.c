#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801E8410_657260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8410: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E8414: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E8418: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E841C: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E8420: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801E8424: addiu       $t7, $t7, -0x1D20
    ctx->r15 = ADD32(ctx->r15, -0X1D20);
    // 0x801E8428: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E842C: addiu       $t6, $t6, -0x15E8
    ctx->r14 = ADD32(ctx->r14, -0X15E8);
    // 0x801E8430: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801E8434: sw          $t6, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r14;
    // 0x801E8438: sw          $t8, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r24;
    // 0x801E843C: sb          $zero, 0x65($a1)
    MEM_B(0X65, ctx->r5) = 0;
    // 0x801E8440: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801E8444: addiu       $t9, $zero, 0x12B0
    ctx->r25 = ADD32(0, 0X12B0);
    // 0x801E8448: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x801E844C: sh          $t9, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r25;
    // 0x801E8450: sh          $t0, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r8;
    // 0x801E8454: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E8458: jal         0x800101AC
    // 0x801E845C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800101AC_10DAC(rdram, ctx);
        goto after_0;
    // 0x801E845C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E8460: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x801E8464: addiu       $t1, $t1, 0x220
    ctx->r9 = ADD32(ctx->r9, 0X220);
    // 0x801E8468: addiu       $t2, $zero, 0x4BD
    ctx->r10 = ADD32(0, 0X4BD);
    // 0x801E846C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801E8470: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801E8474: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x801E8478: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801E847C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801E8480: jal         0x80010230
    // 0x801E8484: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_1;
    // 0x801E8484: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x801E8488: lui         $t3, 0x800
    ctx->r11 = S32(0X800 << 16);
    // 0x801E848C: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    // 0x801E8490: addiu       $t3, $t3, 0x1220
    ctx->r11 = ADD32(ctx->r11, 0X1220);
    // 0x801E8494: addiu       $t4, $zero, 0x4BD
    ctx->r12 = ADD32(0, 0X4BD);
    // 0x801E8498: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801E849C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E84A0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x801E84A4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801E84A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801E84AC: jal         0x80010230
    // 0x801E84B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_2;
    // 0x801E84B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x801E84B4: sw          $v0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r2;
    // 0x801E84B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E84BC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x801E84C0: jal         0x800103DC
    // 0x801E84C4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_800103DC_10FDC(rdram, ctx);
        goto after_3;
    // 0x801E84C4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
    // 0x801E84C8: sw          $v0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r2;
    // 0x801E84CC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x801E84D0: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
L_801E84D4:
    // 0x801E84D4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x801E84D8: bnel        $v1, $zero, L_801E84D4
    if (ctx->r3 != 0) {
        // 0x801E84DC: sh          $zero, 0x6($v1)
        MEM_H(0X6, ctx->r3) = 0;
            goto L_801E84D4;
    }
    goto skip_0;
    // 0x801E84DC: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    skip_0:
    // 0x801E84E0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E84E4: jal         0x800352EC
    // 0x801E84E8: addiu       $a0, $a0, -0x7B00
    ctx->r4 = ADD32(ctx->r4, -0X7B00);
    func_800352EC_35EEC(rdram, ctx);
        goto after_4;
    // 0x801E84E8: addiu       $a0, $a0, -0x7B00
    ctx->r4 = ADD32(ctx->r4, -0X7B00);
    after_4:
    // 0x801E84EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E84F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E84F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E84F8: jr          $ra
    // 0x801E84FC: nop

    TRACE_RETURN()
    return;
    // 0x801E84FC: nop

;}
RECOMP_FUNC void func_801CC848_63B698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CC84C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CC850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CC854: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801CC858: addiu       $a0, $a0, 0x32C0
    ctx->r4 = ADD32(ctx->r4, 0X32C0);
    // 0x801CC85C: jal         0x80034DD8
    // 0x801CC860: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_0;
    // 0x801CC860: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801CC864: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801CC868: sw          $t6, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r14;
    // 0x801CC86C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CC870: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CC874: jr          $ra
    // 0x801CC878: nop

    TRACE_RETURN()
    return;
    // 0x801CC878: nop

;}
RECOMP_FUNC void func_801D56D4_644524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D56D4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D56D8: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x801D56DC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D56E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D56E4: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D56E8: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801D56EC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D56F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D56F4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D56F8: lwc1        $f8, 0xA8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x801D56FC: add.s       $f0, $f16, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D5700: swc1        $f0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f0.u32l;
    // 0x801D5704: ldc1        $f4, -0xEC8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0XEC8);
    // 0x801D5708: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x801D570C: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x801D5710: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x801D5714: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x801D5718: nop

    // 0x801D571C: bc1f        L_801D5754
    if (!c1cs) {
        // 0x801D5720: nop
    
            goto L_801D5754;
    }
    // 0x801D5720: nop

    // 0x801D5724: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x801D5728: lui         $at, 0x4089
    ctx->r1 = S32(0X4089 << 16);
    // 0x801D572C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801D5730: cvt.d.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.d = CVT_D_W(ctx->f16.u32l);
    // 0x801D5734: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D5738: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D573C: addiu       $t8, $zero, -0x320
    ctx->r24 = ADD32(0, -0X320);
    // 0x801D5740: sb          $t6, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r14;
    // 0x801D5744: add.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d + ctx->f18.d;
    // 0x801D5748: sw          $t8, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r24;
    // 0x801D574C: trunc.w.d   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x801D5750: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
L_801D5754:
    // 0x801D5754: jr          $ra
    // 0x801D5758: nop

    TRACE_RETURN()
    return;
    // 0x801D5758: nop

;}
RECOMP_FUNC void func_801D8BF0_647A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8BF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D8BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D8BF8: lw          $a3, 0xEC($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XEC);
    // 0x801D8BFC: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x801D8C00: sh          $t6, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r14;
    // 0x801D8C04: lw          $t7, 0x190($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X190);
    // 0x801D8C08: addiu       $a1, $a3, 0x190
    ctx->r5 = ADD32(ctx->r7, 0X190);
    // 0x801D8C0C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D8C10: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x801D8C14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D8C18: beq         $a0, $t7, L_801D8C40
    if (ctx->r4 == ctx->r15) {
        // 0x801D8C1C: lbu         $t0, 0x313($a3)
        ctx->r8 = MEM_BU(ctx->r7, 0X313);
            goto L_801D8C40;
    }
    // 0x801D8C1C: lbu         $t0, 0x313($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X313);
    // 0x801D8C20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D8C24:
    // 0x801D8C24: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x801D8C28: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801D8C2C: addu        $t1, $v1, $t9
    ctx->r9 = ADD32(ctx->r3, ctx->r25);
    // 0x801D8C30: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x801D8C34: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x801D8C38: bnel        $a2, $t2, L_801D8C24
    if (ctx->r6 != ctx->r10) {
        // 0x801D8C3C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801D8C24;
    }
    goto skip_0;
    // 0x801D8C3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
L_801D8C40:
    // 0x801D8C40: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x801D8C44: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    // 0x801D8C48: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D8C4C: sb          $a0, 0x313($a3)
    MEM_B(0X313, ctx->r7) = ctx->r4;
    // 0x801D8C50: beq         $at, $zero, L_801D8C84
    if (ctx->r1 == 0) {
        // 0x801D8C54: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801D8C84;
    }
    // 0x801D8C54: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801D8C58:
    // 0x801D8C58: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x801D8C5C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x801D8C60: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x801D8C64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801D8C68: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x801D8C6C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801D8C70: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x801D8C74: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D8C78: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801D8C7C: bne         $at, $zero, L_801D8C58
    if (ctx->r1 != 0) {
        // 0x801D8C80: sw          $t6, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->r14;
            goto L_801D8C58;
    }
    // 0x801D8C80: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
L_801D8C84:
    // 0x801D8C84: jal         0x80034EF8
    // 0x801D8C88: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x801D8C88: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x801D8C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D8C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D8C94: jr          $ra
    // 0x801D8C98: nop

    TRACE_RETURN()
    return;
    // 0x801D8C98: nop

;}
RECOMP_FUNC void func_801E2ED0_651D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2ED0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801E2ED4: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801E2ED8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801E2EDC: lui         $a3, 0x4
    ctx->r7 = S32(0X4 << 16);
    // 0x801E2EE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2EE4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801E2EE8: addu        $a3, $a3, $t6
    ctx->r7 = ADD32(ctx->r7, ctx->r14);
    // 0x801E2EEC: lbu         $a3, -0x520B($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X520B);
    // 0x801E2EF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E2EF4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801E2EF8: bne         $a3, $at, L_801E2F28
    if (ctx->r7 != ctx->r1) {
        // 0x801E2EFC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_801E2F28;
    }
    // 0x801E2EFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E2F00: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E2F04: jal         0x80035EEC
    // 0x801E2F08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801E2F08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801E2F0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801E2F10: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E2F14: sb          $t7, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r15;
    // 0x801E2F18: jal         0x8003521C
    // 0x801E2F1C: addiu       $a0, $a0, 0x309C
    ctx->r4 = ADD32(ctx->r4, 0X309C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801E2F1C: addiu       $a0, $a0, 0x309C
    ctx->r4 = ADD32(ctx->r4, 0X309C);
    after_1:
    // 0x801E2F20: b           L_801E3010
    // 0x801E2F24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E3010;
    // 0x801E2F24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E2F28:
    // 0x801E2F28: jal         0x80035EEC
    // 0x801E2F2C: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_2;
    // 0x801E2F2C: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    after_2:
    // 0x801E2F30: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
    // 0x801E2F34: beq         $v0, $zero, L_801E300C
    if (ctx->r2 == 0) {
        // 0x801E2F38: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801E300C;
    }
    // 0x801E2F38: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801E2F3C: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x801E2F40: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801E2F44: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x801E2F48: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E2F4C: lw          $t8, -0x770C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X770C);
    // 0x801E2F50: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x801E2F54: lw          $t9, -0x1DF0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1DF0);
    // 0x801E2F58: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E2F5C: lhu         $a1, 0x6($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X6);
    // 0x801E2F60: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x801E2F64: lw          $a0, -0x1E00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1E00);
    // 0x801E2F68: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x801E2F6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E2F70: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x801E2F74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E2F78: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x801E2F7C: addiu       $t1, $zero, 0x280
    ctx->r9 = ADD32(0, 0X280);
    // 0x801E2F80: addiu       $t2, $zero, 0xF0
    ctx->r10 = ADD32(0, 0XF0);
    // 0x801E2F84: sb          $zero, 0x5($v1)
    MEM_B(0X5, ctx->r3) = 0;
    // 0x801E2F88: sh          $t0, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r8;
    // 0x801E2F8C: sh          $t1, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r9;
    // 0x801E2F90: sh          $t2, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r10;
    // 0x801E2F94: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E2F98: sh          $a1, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r5;
    // 0x801E2F9C: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x801E2FA0: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x801E2FA4: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x801E2FA8: swc1        $f4, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f4.u32l;
    // 0x801E2FAC: lwc1        $f6, -0xBA0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0XBA0);
    // 0x801E2FB0: lui         $at, 0x436F
    ctx->r1 = S32(0X436F << 16);
    // 0x801E2FB4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E2FB8: addiu       $t3, $zero, 0x13F
    ctx->r11 = ADD32(0, 0X13F);
    // 0x801E2FBC: addiu       $t4, $zero, 0xEF
    ctx->r12 = ADD32(0, 0XEF);
    // 0x801E2FC0: sh          $zero, 0x2E($v1)
    MEM_H(0X2E, ctx->r3) = 0;
    // 0x801E2FC4: sh          $zero, 0x32($v1)
    MEM_H(0X32, ctx->r3) = 0;
    // 0x801E2FC8: sh          $t3, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r11;
    // 0x801E2FCC: sh          $t4, 0x34($v1)
    MEM_H(0X34, ctx->r3) = ctx->r12;
    // 0x801E2FD0: swc1        $f6, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f6.u32l;
    // 0x801E2FD4: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
    // 0x801E2FD8: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x801E2FDC: jal         0x80014840
    // 0x801E2FE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80014840_15440(rdram, ctx);
        goto after_3;
    // 0x801E2FE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_3:
    // 0x801E2FE4: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801E2FE8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801E2FEC: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x801E2FF0: jal         0x80014840
    // 0x801E2FF4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_80014840_15440(rdram, ctx);
        goto after_4;
    // 0x801E2FF4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x801E2FF8: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801E2FFC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E3000: addiu       $a0, $a0, 0x301C
    ctx->r4 = ADD32(ctx->r4, 0X301C);
    // 0x801E3004: jal         0x8003521C
    // 0x801E3008: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801E3008: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    after_5:
L_801E300C:
    // 0x801E300C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E3010:
    // 0x801E3010: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801E3014: jr          $ra
    // 0x801E3018: nop

    TRACE_RETURN()
    return;
    // 0x801E3018: nop

;}
RECOMP_FUNC void func_801D15D4_640424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D15D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D15D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D15DC: lwc1        $f0, 0x324($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X324);
    // 0x801D15E0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D15E4: ldc1        $f6, -0x1040($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1040);
    // 0x801D15E8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801D15EC: lwc1        $f2, 0x64($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D15F0: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801D15F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D15F8: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x801D15FC: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x801D1600: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801D1604: nop

    // 0x801D1608: bc1fl       L_801D1624
    if (!c1cs) {
        // 0x801D160C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D1624;
    }
    goto skip_0;
    // 0x801D160C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D1610: sb          $t6, 0x9E($a0)
    MEM_B(0X9E, ctx->r4) = ctx->r14;
    // 0x801D1614: sb          $t7, 0xA2($a0)
    MEM_B(0XA2, ctx->r4) = ctx->r15;
    // 0x801D1618: jal         0x80038B98
    // 0x801D161C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x801D161C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x801D1620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D1624:
    // 0x801D1624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D1628: jr          $ra
    // 0x801D162C: nop

    TRACE_RETURN()
    return;
    // 0x801D162C: nop

;}
RECOMP_FUNC void func_801E2D98_651BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2D98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E2D9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E2DA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E2DA4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E2DA8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E2DAC: lw          $s0, 0xEC($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XEC);
    // 0x801E2DB0: jal         0x801CC168
    // 0x801E2DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC168_63AFB8(rdram, ctx);
        goto after_0;
    // 0x801E2DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801E2DB8: jal         0x801CC408
    // 0x801E2DBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC408_63B258(rdram, ctx);
        goto after_1;
    // 0x801E2DBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E2DC0: jal         0x801CC1D4
    // 0x801E2DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC1D4_63B024(rdram, ctx);
        goto after_2;
    // 0x801E2DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E2DC8: jal         0x801CC7E0
    // 0x801E2DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC7E0_63B630(rdram, ctx);
        goto after_3;
    // 0x801E2DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E2DD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E2DD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E2DD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E2DDC: jr          $ra
    // 0x801E2DE0: nop

    TRACE_RETURN()
    return;
    // 0x801E2DE0: nop

;}
RECOMP_FUNC void func_801D522C_64407C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D522C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D5230: lw          $v0, 0xAC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XAC);
    // 0x801D5234: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D5238: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D523C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D5240: lwc1        $f16, 0xA8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x801D5244: lh          $v1, 0xBA($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XBA);
    // 0x801D5248: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D524C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x801D5250: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x801D5254: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801D5258: sh          $t7, 0xBA($a0)
    MEM_H(0XBA, ctx->r4) = ctx->r15;
    // 0x801D525C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D5260: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D5264: bne         $t7, $zero, L_801D5288
    if (ctx->r15 != 0) {
        // 0x801D5268: swc1        $f18, 0xA8($a0)
        MEM_W(0XA8, ctx->r4) = ctx->f18.u32l;
            goto L_801D5288;
    }
    // 0x801D5268: swc1        $f18, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f18.u32l;
    // 0x801D526C: lw          $v1, 0xB0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB0);
    // 0x801D5270: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D5274: sb          $t8, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r24;
    // 0x801D5278: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x801D527C: addu        $t9, $v0, $v1
    ctx->r25 = ADD32(ctx->r2, ctx->r3);
    // 0x801D5280: sw          $v1, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r3;
    // 0x801D5284: sw          $t9, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r25;
L_801D5288:
    // 0x801D5288: jr          $ra
    // 0x801D528C: nop

    TRACE_RETURN()
    return;
    // 0x801D528C: nop

;}
RECOMP_FUNC void func_801E199C_6507EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E199C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E19A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E19A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E19A8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801E19AC: bne         $a1, $zero, L_801E19E8
    if (ctx->r5 != 0) {
        // 0x801E19B0: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_801E19E8;
    }
    // 0x801E19B0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801E19B4: lw          $v1, 0xEC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XEC);
    // 0x801E19B8: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E19BC: addiu       $a1, $a1, 0x11E0
    ctx->r5 = ADD32(ctx->r5, 0X11E0);
    // 0x801E19C0: lw          $a0, 0xD4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XD4);
    // 0x801E19C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E19C8: jal         0x80034E08
    // 0x801E19CC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801E19CC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801E19D0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801E19D4: beq         $v0, $zero, L_801E19E8
    if (ctx->r2 == 0) {
        // 0x801E19D8: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_801E19E8;
    }
    // 0x801E19D8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801E19DC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x801E19E0: sw          $v1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r3;
    // 0x801E19E4: sw          $t7, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r15;
L_801E19E8:
    // 0x801E19E8: beql        $a1, $zero, L_801E1A50
    if (ctx->r5 == 0) {
        // 0x801E19EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E1A50;
    }
    goto skip_0;
    // 0x801E19EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E19F0: sb          $zero, 0x6A($a1)
    MEM_B(0X6A, ctx->r5) = 0;
    // 0x801E19F4: lbu         $t8, 0x2B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2B);
    // 0x801E19F8: sb          $t8, 0x6B($a1)
    MEM_B(0X6B, ctx->r5) = ctx->r24;
    // 0x801E19FC: lbu         $t9, 0x2F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2F);
    // 0x801E1A00: sb          $t9, 0x70($a1)
    MEM_B(0X70, ctx->r5) = ctx->r25;
    // 0x801E1A04: lbu         $t0, 0x33($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X33);
    // 0x801E1A08: sb          $t0, 0x71($a1)
    MEM_B(0X71, ctx->r5) = ctx->r8;
    // 0x801E1A0C: lbu         $t1, 0x37($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X37);
    // 0x801E1A10: sb          $t1, 0x72($a1)
    MEM_B(0X72, ctx->r5) = ctx->r9;
    // 0x801E1A14: lbu         $t2, 0x3B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3B);
    // 0x801E1A18: sb          $t2, 0x73($a1)
    MEM_B(0X73, ctx->r5) = ctx->r10;
    // 0x801E1A1C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E1A20: swc1        $f4, 0x78($a1)
    MEM_W(0X78, ctx->r5) = ctx->f4.u32l;
    // 0x801E1A24: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E1A28: swc1        $f6, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f6.u32l;
    // 0x801E1A2C: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E1A30: swc1        $f8, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->f8.u32l;
    // 0x801E1A34: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E1A38: swc1        $f10, 0x84($a1)
    MEM_W(0X84, ctx->r5) = ctx->f10.u32l;
    // 0x801E1A3C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E1A40: swc1        $f16, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->f16.u32l;
    // 0x801E1A44: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E1A48: swc1        $f18, 0x8C($a1)
    MEM_W(0X8C, ctx->r5) = ctx->f18.u32l;
    // 0x801E1A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E1A50:
    // 0x801E1A50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E1A54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x801E1A58: jr          $ra
    // 0x801E1A5C: nop

    TRACE_RETURN()
    return;
    // 0x801E1A5C: nop

;}
RECOMP_FUNC void func_801CC7E0_63B630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC7E0: lwc1        $f4, 0x370($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X370);
    // 0x801CC7E4: lwc1        $f6, 0x344($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X344);
    // 0x801CC7E8: lwc1        $f10, 0x374($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X374);
    // 0x801CC7EC: lwc1        $f16, 0x348($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X348);
    // 0x801CC7F0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801CC7F4: lwc1        $f6, 0x34C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34C);
    // 0x801CC7F8: lwc1        $f4, 0x378($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X378);
    // 0x801CC7FC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801CC800: swc1        $f8, 0x364($a0)
    MEM_W(0X364, ctx->r4) = ctx->f8.u32l;
    // 0x801CC804: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801CC808: swc1        $f18, 0x368($a0)
    MEM_W(0X368, ctx->r4) = ctx->f18.u32l;
    // 0x801CC80C: jr          $ra
    // 0x801CC810: swc1        $f8, 0x36C($a0)
    MEM_W(0X36C, ctx->r4) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x801CC810: swc1        $f8, 0x36C($a0)
    MEM_W(0X36C, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_801CE61C_63D46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE61C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801CE620: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CE624: addiu       $t7, $zero, 0x2710
    ctx->r15 = ADD32(0, 0X2710);
    // 0x801CE628: sb          $t6, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r14;
    // 0x801CE62C: sb          $zero, 0xC4($a0)
    MEM_B(0XC4, ctx->r4) = 0;
    // 0x801CE630: jr          $ra
    // 0x801CE634: sw          $t7, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x801CE634: sw          $t7, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_801D28B0_641700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D28B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D28B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D28B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D28BC: lw          $v1, 0xEC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XEC);
    // 0x801D28C0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D28C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D28C8: lw          $t6, 0x31C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X31C);
    // 0x801D28CC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801D28D0: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801D28D4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801D28D8: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x801D28DC: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x801D28E0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D28E4: lbu         $a1, -0x520B($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X520B);
    // 0x801D28E8: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801D28EC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D28F0: sll         $a3, $a1, 2
    ctx->r7 = S32(ctx->r5 << 2);
    // 0x801D28F4: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x801D28F8: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D28FC: lw          $v0, -0x7570($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7570);
    // 0x801D2900: lwc1        $f10, -0xFF0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0XFF0);
    // 0x801D2904: lui         $t0, 0x801F
    ctx->r8 = S32(0X801F << 16);
    // 0x801D2908: lb          $t8, 0x0($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X0);
    // 0x801D290C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D2910: addu        $t0, $t0, $a3
    ctx->r8 = ADD32(ctx->r8, ctx->r7);
    // 0x801D2914: bltz        $t8, L_801D2954
    if (SIGNED(ctx->r24) < 0) {
        // 0x801D2918: sub.s       $f0, $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f10.fl;
            goto L_801D2954;
    }
    // 0x801D2918: sub.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801D291C: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D2920: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x801D2924: nop

    // 0x801D2928: bc1fl       L_801D2958
    if (!c1cs) {
        // 0x801D292C: sw          $v0, 0x5C($a2)
        MEM_W(0X5C, ctx->r6) = ctx->r2;
            goto L_801D2958;
    }
    goto skip_0;
    // 0x801D292C: sw          $v0, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->r2;
    skip_0:
    // 0x801D2930: lb          $t9, 0x10($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X10);
L_801D2934:
    // 0x801D2934: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x801D2938: bltzl       $t9, L_801D2958
    if (SIGNED(ctx->r25) < 0) {
        // 0x801D293C: sw          $v0, 0x5C($a2)
        MEM_W(0X5C, ctx->r6) = ctx->r2;
            goto L_801D2958;
    }
    goto skip_1;
    // 0x801D293C: sw          $v0, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->r2;
    skip_1:
    // 0x801D2940: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D2944: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801D2948: nop

    // 0x801D294C: bc1tl       L_801D2934
    if (c1cs) {
        // 0x801D2950: lb          $t9, 0x10($v0)
        ctx->r25 = MEM_B(ctx->r2, 0X10);
            goto L_801D2934;
    }
    goto skip_2;
    // 0x801D2950: lb          $t9, 0x10($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X10);
    skip_2:
L_801D2954:
    // 0x801D2954: sw          $v0, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->r2;
L_801D2958:
    // 0x801D2958: lw          $t0, -0x770C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X770C);
    // 0x801D295C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D2960: addiu       $a0, $a0, 0x2980
    ctx->r4 = ADD32(ctx->r4, 0X2980);
    // 0x801D2964: lhu         $t1, 0x8($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X8);
    // 0x801D2968: jal         0x800352EC
    // 0x801D296C: sh          $t1, 0x60($a2)
    MEM_H(0X60, ctx->r6) = ctx->r9;
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D296C: sh          $t1, 0x60($a2)
    MEM_H(0X60, ctx->r6) = ctx->r9;
    after_0:
    // 0x801D2970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D2978: jr          $ra
    // 0x801D297C: nop

    TRACE_RETURN()
    return;
    // 0x801D297C: nop

;}
RECOMP_FUNC void func_801DA090_648EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA090: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801DA094: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801DA098: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801DA09C: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801DA0A0: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801DA0A4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DA0A8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DA0AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA0B0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DA0B4: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801DA0B8: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DA0BC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DA0C0: lui         $at, 0x4039
    ctx->r1 = S32(0X4039 << 16);
    // 0x801DA0C4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DA0C8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DA0CC: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801DA0D0: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801DA0D4: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801DA0D8: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801DA0DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DA0E0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DA0E4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DA0E8: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801DA0EC: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801DA0F0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DA0F4: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801DA0F8: nop

    // 0x801DA0FC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801DA100: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DA104: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801DA108: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801DA10C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DA110: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801DA114: nop

    // 0x801DA118: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801DA11C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DA120: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801DA124: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801DA128: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801DA12C: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801DA130: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DA134: jal         0x80033898
    // 0x801DA138: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DA138: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801DA13C: addiu       $t8, $zero, 0x63
    ctx->r24 = ADD32(0, 0X63);
    // 0x801DA140: addiu       $t9, $zero, 0x43
    ctx->r25 = ADD32(0, 0X43);
    // 0x801DA144: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x801DA148: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801DA14C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801DA150: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801DA154: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801DA158: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801DA15C: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801DA160: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DA164: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DA168: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801DA16C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DA170: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DA174: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x801DA178: addiu       $t3, $zero, 0x300
    ctx->r11 = ADD32(0, 0X300);
    // 0x801DA17C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801DA180: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801DA184: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DA188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DA18C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DA190: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DA194: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801DA198: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801DA19C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801DA1A0: lwc1        $f18, 0x64($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801DA1A4: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x801DA1A8: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801DA1AC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DA1B0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DA1B4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801DA1B8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801DA1BC: jal         0x801CDA88
    // 0x801DA1C0: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801DA1C0: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801DA1C4: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x801DA1C8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DA1CC: lwc1        $f10, 0x5C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801DA1D0: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DA1D4: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DA1D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA1DC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DA1E0: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DA1E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DA1E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DA1EC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801DA1F0: lwc1        $f4, 0x60($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801DA1F4: lui         $a2, 0x4296
    ctx->r6 = S32(0X4296 << 16);
    // 0x801DA1F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801DA1FC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801DA200: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801DA204: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801DA208: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DA20C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DA210: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DA214: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DA218: jal         0x801DF9EC
    // 0x801DA21C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801DA21C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801DA220: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801DA224: lhu         $t5, 0xE2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DA228: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801DA22C: bnel        $t6, $zero, L_801DA284
    if (ctx->r14 != 0) {
        // 0x801DA230: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801DA284;
    }
    goto skip_0;
    // 0x801DA230: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801DA234: lhu         $t7, 0xE4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE4);
    // 0x801DA238: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801DA23C: bne         $t7, $at, L_801DA25C
    if (ctx->r15 != ctx->r1) {
        // 0x801DA240: nop
    
            goto L_801DA25C;
    }
    // 0x801DA240: nop

    // 0x801DA244: jal         0x80038B98
    // 0x801DA248: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801DA248: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801DA24C: lw          $t9, 0xEC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XEC);
    // 0x801DA250: addiu       $t8, $zero, 0x299
    ctx->r24 = ADD32(0, 0X299);
    // 0x801DA254: b           L_801DA270
    // 0x801DA258: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
        goto L_801DA270;
    // 0x801DA258: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
L_801DA25C:
    // 0x801DA25C: jal         0x80038B98
    // 0x801DA260: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801DA260: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801DA264: lw          $t1, 0xEC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XEC);
    // 0x801DA268: addiu       $t0, $zero, 0x298
    ctx->r8 = ADD32(0, 0X298);
    // 0x801DA26C: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_801DA270:
    // 0x801DA270: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801DA274: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DA278: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x801DA27C: sh          $t3, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r11;
    // 0x801DA280: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801DA284:
    // 0x801DA284: jal         0x801E8850
    // 0x801DA288: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_801E8850_6576A0(rdram, ctx);
        goto after_5;
    // 0x801DA288: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x801DA28C: jal         0x801D8BF0
    // 0x801DA290: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_6;
    // 0x801DA290: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801DA294: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801DA298: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801DA29C: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801DA2A0: jr          $ra
    // 0x801DA2A4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801DA2A4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801DA3C8_649218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA3C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DA3CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DA3D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DA3D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DA3D8: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801DA3DC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801DA3E0: bgezl       $t6, L_801DA408
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DA3E4: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_801DA408;
    }
    goto skip_0;
    // 0x801DA3E4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x801DA3E8: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801DA3EC: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801DA3F0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DA3F4: jal         0x800352EC
    // 0x801DA3F8: addiu       $a0, $a0, -0x5BB0
    ctx->r4 = ADD32(ctx->r4, -0X5BB0);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DA3F8: addiu       $a0, $a0, -0x5BB0
    ctx->r4 = ADD32(ctx->r4, -0X5BB0);
    after_0:
    // 0x801DA3FC: b           L_801DA444
    // 0x801DA400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DA444;
    // 0x801DA400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DA404: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_801DA408:
    // 0x801DA408: jal         0x801CD504
    // 0x801DA40C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801DA40C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801DA410: beq         $v0, $zero, L_801DA428
    if (ctx->r2 == 0) {
        // 0x801DA414: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801DA428;
    }
    // 0x801DA414: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DA418: jal         0x801D8BF0
    // 0x801DA41C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_2;
    // 0x801DA41C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801DA420: b           L_801DA444
    // 0x801DA424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DA444;
    // 0x801DA424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DA428:
    // 0x801DA428: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DA42C: jal         0x801CD634
    // 0x801DA430: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801DA430: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x801DA434: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DA438: jal         0x801CD780
    // 0x801DA43C: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801DA43C: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801DA440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DA444:
    // 0x801DA444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DA448: jr          $ra
    // 0x801DA44C: nop

    TRACE_RETURN()
    return;
    // 0x801DA44C: nop

;}
RECOMP_FUNC void func_801D21BC_64100C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D21BC: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x801D21C0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D21C4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801D21C8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801D21CC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801D21D0: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x801D21D4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801D21D8: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D21DC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D21E0: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x801D21E4: beql        $t6, $zero, L_801D2200
    if (ctx->r14 == 0) {
        // 0x801D21E8: lwc1        $f0, 0x5C($s1)
        ctx->f0.u32l = MEM_W(ctx->r17, 0X5C);
            goto L_801D2200;
    }
    goto skip_0;
    // 0x801D21E8: lwc1        $f0, 0x5C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X5C);
    skip_0:
    // 0x801D21EC: jal         0x801D2078
    // 0x801D21F0: nop

    func_801D2078_640EC8(rdram, ctx);
        goto after_0;
    // 0x801D21F0: nop

    after_0:
    // 0x801D21F4: b           L_801D2464
    // 0x801D21F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801D2464;
    // 0x801D21F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D21FC: lwc1        $f0, 0x5C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X5C);
L_801D2200:
    // 0x801D2200: lwc1        $f4, 0xA0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XA0);
    // 0x801D2204: lwc1        $f20, 0x60($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D2208: lwc1        $f6, 0xA4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XA4);
    // 0x801D220C: lwc1        $f22, 0x64($s1)
    ctx->f22.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D2210: lwc1        $f8, 0xA8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XA8);
    // 0x801D2214: add.s       $f16, $f4, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801D2218: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801D221C: add.s       $f2, $f6, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x801D2220: swc1        $f16, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->f16.u32l;
    // 0x801D2224: add.s       $f12, $f8, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x801D2228: swc1        $f2, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->f2.u32l;
    // 0x801D222C: swc1        $f12, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f12.u32l;
    // 0x801D2230: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
    // 0x801D2234: swc1        $f12, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f12.u32l;
    // 0x801D2238: swc1        $f2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f2.u32l;
    // 0x801D223C: jal         0x801CBC94
    // 0x801D2240: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_1;
    // 0x801D2240: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801D2244: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801D2248: lwc1        $f2, 0x9C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801D224C: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x801D2250: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x801D2254: nop

    // 0x801D2258: bc1f        L_801D2394
    if (!c1cs) {
        // 0x801D225C: nop
    
            goto L_801D2394;
    }
    // 0x801D225C: nop

    // 0x801D2260: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801D2264: nop

    // 0x801D2268: bc1f        L_801D2394
    if (!c1cs) {
        // 0x801D226C: nop
    
            goto L_801D2394;
    }
    // 0x801D226C: nop

    // 0x801D2270: c.le.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl <= ctx->f20.fl;
    // 0x801D2274: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801D2278: bc1f        L_801D237C
    if (!c1cs) {
        // 0x801D227C: nop
    
            goto L_801D237C;
    }
    // 0x801D227C: nop

    // 0x801D2280: sub.s       $f0, $f10, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f22.fl;
    // 0x801D2284: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x801D2288: sub.s       $f6, $f16, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x801D228C: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x801D2290: sub.s       $f4, $f2, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f20.fl;
    // 0x801D2294: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801D2298: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x801D229C: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801D22A0: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801D22A4: add.s       $f12, $f4, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x801D22A8: jal         0x801CBC94
    // 0x801D22AC: swc1        $f12, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f12.u32l;
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_2;
    // 0x801D22AC: swc1        $f12, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x801D22B0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801D22B4: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801D22B8: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801D22BC: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x801D22C0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D22C4: bc1f        L_801D237C
    if (!c1cs) {
        // 0x801D22C8: nop
    
            goto L_801D237C;
    }
    // 0x801D22C8: nop

    // 0x801D22CC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801D22D0: nop

    // 0x801D22D4: bc1fl       L_801D22EC
    if (!c1cs) {
        // 0x801D22D8: sub.s       $f2, $f0, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f16.fl;
            goto L_801D22EC;
    }
    goto skip_1;
    // 0x801D22D8: sub.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f16.fl;
    skip_1:
    // 0x801D22DC: sub.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x801D22E0: b           L_801D22EC
    // 0x801D22E4: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_801D22EC;
    // 0x801D22E4: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x801D22E8: sub.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f16.fl;
L_801D22EC:
    // 0x801D22EC: ldc1        $f6, -0x1010($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1010);
    // 0x801D22F0: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801D22F4: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801D22F8: nop

    // 0x801D22FC: bc1fl       L_801D2354
    if (!c1cs) {
        // 0x801D2300: lwc1        $f0, 0x94($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X94);
            goto L_801D2354;
    }
    goto skip_2;
    // 0x801D2300: lwc1        $f0, 0x94($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X94);
    skip_2:
    // 0x801D2304: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801D2308: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801D230C: sub.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x801D2310: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x801D2314: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x801D2318: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801D231C: div.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801D2320: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801D2324: div.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x801D2328: mul.s       $f10, $f2, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x801D232C: sub.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f10.fl;
    // 0x801D2330: mul.s       $f4, $f12, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x801D2334: sub.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x801D2338: sub.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x801D233C: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801D2340: div.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801D2344: sub.s       $f6, $f18, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f22.fl;
    // 0x801D2348: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801D234C: add.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x801D2350: lwc1        $f0, 0x94($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X94);
L_801D2354:
    // 0x801D2354: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801D2358: sub.s       $f6, $f18, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f22.fl;
    // 0x801D235C: sub.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x801D2360: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801D2364: swc1        $f16, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->f16.u32l;
    // 0x801D2368: swc1        $f18, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f18.u32l;
    // 0x801D236C: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D2370: div.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x801D2374: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801D2378: swc1        $f6, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->f6.u32l;
L_801D237C:
    // 0x801D237C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D2380: sb          $zero, 0x9C($s1)
    MEM_B(0X9C, ctx->r17) = 0;
    // 0x801D2384: jal         0x800352EC
    // 0x801D2388: addiu       $a0, $a0, 0x2480
    ctx->r4 = ADD32(ctx->r4, 0X2480);
    func_800352EC_35EEC(rdram, ctx);
        goto after_3;
    // 0x801D2388: addiu       $a0, $a0, 0x2480
    ctx->r4 = ADD32(ctx->r4, 0X2480);
    after_3:
    // 0x801D238C: b           L_801D2464
    // 0x801D2390: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801D2464;
    // 0x801D2390: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801D2394:
    // 0x801D2394: jal         0x801CD504
    // 0x801D2398: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801CD504_63C354(rdram, ctx);
        goto after_4;
    // 0x801D2398: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x801D239C: beq         $v0, $zero, L_801D23B4
    if (ctx->r2 == 0) {
        // 0x801D23A0: nop
    
            goto L_801D23B4;
    }
    // 0x801D23A0: nop

    // 0x801D23A4: jal         0x801D2078
    // 0x801D23A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D2078_640EC8(rdram, ctx);
        goto after_5;
    // 0x801D23A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x801D23AC: b           L_801D2464
    // 0x801D23B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801D2464;
    // 0x801D23B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801D23B4:
    // 0x801D23B4: jal         0x801CD634
    // 0x801D23B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_6;
    // 0x801D23B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801D23BC: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D23C0: lwc1        $f8, 0x8($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801D23C4: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x801D23C8: lwc1        $f10, 0x364($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X364);
    // 0x801D23CC: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x801D23D0: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x801D23D4: lwc1        $f10, 0xC($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801D23D8: lwc1        $f6, 0x368($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X368);
    // 0x801D23DC: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801D23E0: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x801D23E4: lwc1        $f6, 0x10($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801D23E8: lwc1        $f4, 0x36C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X36C);
    // 0x801D23EC: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D23F0: jal         0x8001D394
    // 0x801D23F4: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_7;
    // 0x801D23F4: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x801D23F8: lhu         $s0, 0xAC($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0XAC);
    // 0x801D23FC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801D2400: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D2404: addiu       $t8, $s0, 0x80
    ctx->r24 = ADD32(ctx->r16, 0X80);
    // 0x801D2408: andi        $s0, $t8, 0x3FF
    ctx->r16 = ctx->r24 & 0X3FF;
    // 0x801D240C: sh          $s0, 0xAC($s1)
    MEM_H(0XAC, ctx->r17) = ctx->r16;
    // 0x801D2410: lwc1        $f8, 0xC($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801D2414: lwc1        $f10, 0x10($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801D2418: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x801D241C: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801D2420: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801D2424: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x801D2428: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801D242C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x801D2430: jal         0x8001D14C
    // 0x801D2434: nop

    func_8001D14C_1DD4C(rdram, ctx);
        goto after_8;
    // 0x801D2434: nop

    after_8:
    // 0x801D2438: addu        $t0, $s0, $v0
    ctx->r8 = ADD32(ctx->r16, ctx->r2);
    // 0x801D243C: andi        $a3, $t0, 0xFFFF
    ctx->r7 = ctx->r8 & 0XFFFF;
    // 0x801D2440: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x801D2444: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x801D2448: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D244C: jal         0x8001DB04
    // 0x801D2450: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_9;
    // 0x801D2450: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x801D2454: lwc1        $f12, 0x64($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D2458: jal         0x801CD780
    // 0x801D245C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_10;
    // 0x801D245C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_10:
    // 0x801D2460: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801D2464:
    // 0x801D2464: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801D2468: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x801D246C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801D2470: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801D2474: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801D2478: jr          $ra
    // 0x801D247C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    TRACE_RETURN()
    return;
    // 0x801D247C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_801CBF58_63ADA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBF58: lui         $at, 0x4314
    ctx->r1 = S32(0X4314 << 16);
    // 0x801CBF5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CBF60: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CBF64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CBF68: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801CBF6C: lui         $at, 0x438E
    ctx->r1 = S32(0X438E << 16);
    // 0x801CBF70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CBF74: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801CBF78: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801CBF7C: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801CBF80: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801CBF84: swc1        $f4, 0x370($a0)
    MEM_W(0X370, ctx->r4) = ctx->f4.u32l;
    // 0x801CBF88: swc1        $f6, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f6.u32l;
    // 0x801CBF8C: swc1        $f8, 0x378($a0)
    MEM_W(0X378, ctx->r4) = ctx->f8.u32l;
    // 0x801CBF90: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x801CBF94: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x801CBF98: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x801CBF9C: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x801CBFA0: lhu         $t8, 0x2DF4($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2DF4);
    // 0x801CBFA4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CBFA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CBFAC: bne         $t8, $at, L_801CBFD0
    if (ctx->r24 != ctx->r1) {
        // 0x801CBFB0: addiu       $v1, $zero, 0x20
        ctx->r3 = ADD32(0, 0X20);
            goto L_801CBFD0;
    }
    // 0x801CBFB0: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x801CBFB4: lwc1        $f10, 0x378($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X378);
    // 0x801CBFB8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CBFBC: ldc1        $f18, -0x1240($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X1240);
    // 0x801CBFC0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801CBFC4: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x801CBFC8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801CBFCC: swc1        $f6, 0x378($a0)
    MEM_W(0X378, ctx->r4) = ctx->f6.u32l;
L_801CBFD0:
    // 0x801CBFD0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CBFD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CBFD8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801CBFDC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801CBFE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CBFE4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801CBFE8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CBFEC: addiu       $t9, $zero, 0x1000
    ctx->r25 = ADD32(0, 0X1000);
    // 0x801CBFF0: sh          $zero, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = 0;
    // 0x801CBFF4: sh          $t9, 0x37E($s0)
    MEM_H(0X37E, ctx->r16) = ctx->r25;
    // 0x801CBFF8: sb          $v1, 0x3A0($s0)
    MEM_B(0X3A0, ctx->r16) = ctx->r3;
    // 0x801CBFFC: sb          $v1, 0x3A1($s0)
    MEM_B(0X3A1, ctx->r16) = ctx->r3;
    // 0x801CC000: sb          $zero, 0x3A2($s0)
    MEM_B(0X3A2, ctx->r16) = 0;
    // 0x801CC004: swc1        $f0, 0x388($s0)
    MEM_W(0X388, ctx->r16) = ctx->f0.u32l;
    // 0x801CC008: swc1        $f0, 0x390($s0)
    MEM_W(0X390, ctx->r16) = ctx->f0.u32l;
    // 0x801CC00C: swc1        $f0, 0x394($s0)
    MEM_W(0X394, ctx->r16) = ctx->f0.u32l;
    // 0x801CC010: swc1        $f0, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->f0.u32l;
    // 0x801CC014: swc1        $f0, 0x3B4($s0)
    MEM_W(0X3B4, ctx->r16) = ctx->f0.u32l;
    // 0x801CC018: swc1        $f0, 0x3B8($s0)
    MEM_W(0X3B8, ctx->r16) = ctx->f0.u32l;
    // 0x801CC01C: swc1        $f0, 0x3BC($s0)
    MEM_W(0X3BC, ctx->r16) = ctx->f0.u32l;
    // 0x801CC020: swc1        $f0, 0x3C0($s0)
    MEM_W(0X3C0, ctx->r16) = ctx->f0.u32l;
    // 0x801CC024: swc1        $f2, 0x38C($s0)
    MEM_W(0X38C, ctx->r16) = ctx->f2.u32l;
    // 0x801CC028: swc1        $f2, 0x398($s0)
    MEM_W(0X398, ctx->r16) = ctx->f2.u32l;
    // 0x801CC02C: swc1        $f8, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->f8.u32l;
    // 0x801CC030: swc1        $f10, 0x384($s0)
    MEM_W(0X384, ctx->r16) = ctx->f10.u32l;
    // 0x801CC034: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x801CC038: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CC03C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801CC040: addu        $t1, $t0, $a2
    ctx->r9 = ADD32(ctx->r8, ctx->r6);
    // 0x801CC044: lhu         $v0, 0x2DF4($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X2DF4);
    // 0x801CC048: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801CC04C: lui         $a2, 0x801F
    ctx->r6 = S32(0X801F << 16);
    // 0x801CC050: beq         $v0, $at, L_801CC06C
    if (ctx->r2 == ctx->r1) {
        // 0x801CC054: addiu       $a0, $a0, 0x2CB0
        ctx->r4 = ADD32(ctx->r4, 0X2CB0);
            goto L_801CC06C;
    }
    // 0x801CC054: addiu       $a0, $a0, 0x2CB0
    ctx->r4 = ADD32(ctx->r4, 0X2CB0);
    // 0x801CC058: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CC05C: beq         $v0, $at, L_801CC09C
    if (ctx->r2 == ctx->r1) {
        // 0x801CC060: lui         $a2, 0x801F
        ctx->r6 = S32(0X801F << 16);
            goto L_801CC09C;
    }
    // 0x801CC060: lui         $a2, 0x801F
    ctx->r6 = S32(0X801F << 16);
    // 0x801CC064: b           L_801CC0CC
    // 0x801CC068: lui         $a2, 0x801F
    ctx->r6 = S32(0X801F << 16);
        goto L_801CC0CC;
    // 0x801CC068: lui         $a2, 0x801F
    ctx->r6 = S32(0X801F << 16);
L_801CC06C:
    // 0x801CC06C: addiu       $a2, $a2, -0x1C80
    ctx->r6 = ADD32(ctx->r6, -0X1C80);
    // 0x801CC070: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC074: or          $t2, $a2, $at
    ctx->r10 = ctx->r6 | ctx->r1;
    // 0x801CC078: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x801CC07C: addiu       $t4, $zero, 0x140
    ctx->r12 = ADD32(0, 0X140);
    // 0x801CC080: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x801CC084: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x801CC088: sh          $zero, 0x3AC($s0)
    MEM_H(0X3AC, ctx->r16) = 0;
    // 0x801CC08C: sh          $t3, 0x3AE($s0)
    MEM_H(0X3AE, ctx->r16) = ctx->r11;
    // 0x801CC090: sh          $t4, 0x3B0($s0)
    MEM_H(0X3B0, ctx->r16) = ctx->r12;
    // 0x801CC094: b           L_801CC0F8
    // 0x801CC098: sh          $t5, 0x3B2($s0)
    MEM_H(0X3B2, ctx->r16) = ctx->r13;
        goto L_801CC0F8;
    // 0x801CC098: sh          $t5, 0x3B2($s0)
    MEM_H(0X3B2, ctx->r16) = ctx->r13;
L_801CC09C:
    // 0x801CC09C: addiu       $a2, $a2, -0x1CF0
    ctx->r6 = ADD32(ctx->r6, -0X1CF0);
    // 0x801CC0A0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC0A4: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x801CC0A8: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x801CC0AC: addiu       $t8, $zero, 0x140
    ctx->r24 = ADD32(0, 0X140);
    // 0x801CC0B0: addiu       $t9, $zero, 0xE0
    ctx->r25 = ADD32(0, 0XE0);
    // 0x801CC0B4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801CC0B8: sh          $zero, 0x3AC($s0)
    MEM_H(0X3AC, ctx->r16) = 0;
    // 0x801CC0BC: sh          $t7, 0x3AE($s0)
    MEM_H(0X3AE, ctx->r16) = ctx->r15;
    // 0x801CC0C0: sh          $t8, 0x3B0($s0)
    MEM_H(0X3B0, ctx->r16) = ctx->r24;
    // 0x801CC0C4: b           L_801CC0F8
    // 0x801CC0C8: sh          $t9, 0x3B2($s0)
    MEM_H(0X3B2, ctx->r16) = ctx->r25;
        goto L_801CC0F8;
    // 0x801CC0C8: sh          $t9, 0x3B2($s0)
    MEM_H(0X3B2, ctx->r16) = ctx->r25;
L_801CC0CC:
    // 0x801CC0CC: addiu       $a2, $a2, -0x1CC0
    ctx->r6 = ADD32(ctx->r6, -0X1CC0);
    // 0x801CC0D0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC0D4: or          $t0, $a2, $at
    ctx->r8 = ctx->r6 | ctx->r1;
    // 0x801CC0D8: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x801CC0DC: addiu       $t2, $zero, 0x140
    ctx->r10 = ADD32(0, 0X140);
    // 0x801CC0E0: addiu       $t3, $zero, 0xE0
    ctx->r11 = ADD32(0, 0XE0);
    // 0x801CC0E4: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x801CC0E8: sh          $zero, 0x3AC($s0)
    MEM_H(0X3AC, ctx->r16) = 0;
    // 0x801CC0EC: sh          $t1, 0x3AE($s0)
    MEM_H(0X3AE, ctx->r16) = ctx->r9;
    // 0x801CC0F0: sh          $t2, 0x3B0($s0)
    MEM_H(0X3B0, ctx->r16) = ctx->r10;
    // 0x801CC0F4: sh          $t3, 0x3B2($s0)
    MEM_H(0X3B2, ctx->r16) = ctx->r11;
L_801CC0F8:
    // 0x801CC0F8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801CC0FC: ori         $at, $at, 0x364
    ctx->r1 = ctx->r1 | 0X364;
    // 0x801CC100: addu        $a1, $s0, $at
    ctx->r5 = ADD32(ctx->r16, ctx->r1);
    // 0x801CC104: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801CC108: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801CC10C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CC110: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CC114: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CC118: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801CC11C: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801CC120: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801CC124: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801CC128: jal         0x80035854
    // 0x801CC12C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801CC12C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x801CC130: sw          $s0, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r16;
    // 0x801CC134: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801CC138: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801CC13C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801CC140: jr          $ra
    // 0x801CC144: nop

    TRACE_RETURN()
    return;
    // 0x801CC144: nop

;}
RECOMP_FUNC void func_801D84E8_647338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D84E8: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801D84EC: lbu         $v1, 0x316($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X316);
    // 0x801D84F0: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x801D84F4: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x801D84F8: sw          $a0, 0x2E8($t7)
    MEM_W(0X2E8, ctx->r15) = ctx->r4;
    // 0x801D84FC: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x801D8500: jr          $ra
    // 0x801D8504: sb          $t8, 0x316($v0)
    MEM_B(0X316, ctx->r2) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x801D8504: sb          $t8, 0x316($v0)
    MEM_B(0X316, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_801E257C_6513CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E257C: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801E2580: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801E2584: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x801E2588: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x801E258C: beq         $t6, $zero, L_801E26FC
    if (ctx->r14 == 0) {
        // 0x801E2590: andi        $t7, $v1, 0x2
        ctx->r15 = ctx->r3 & 0X2;
            goto L_801E26FC;
    }
    // 0x801E2590: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x801E2594: beq         $t7, $zero, L_801E25A0
    if (ctx->r15 == 0) {
        // 0x801E2598: lw          $a1, 0x318($v0)
        ctx->r5 = MEM_W(ctx->r2, 0X318);
            goto L_801E25A0;
    }
    // 0x801E2598: lw          $a1, 0x318($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X318);
    // 0x801E259C: addiu       $a1, $zero, 0x5DC0
    ctx->r5 = ADD32(0, 0X5DC0);
L_801E25A0:
    // 0x801E25A0: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801E25A4: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801E25A8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E25AC: addu        $v0, $t8, $a1
    ctx->r2 = ADD32(ctx->r24, ctx->r5);
    // 0x801E25B0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801E25B4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801E25B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E25BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801E25C0: sw          $v0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r2;
    // 0x801E25C4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E25C8: ldc1        $f18, -0xBC8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0XBC8);
    // 0x801E25CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E25D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E25D4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801E25D8: lbu         $v1, 0x60($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X60);
    // 0x801E25DC: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x801E25E0: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x801E25E4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E25E8: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x801E25EC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E25F0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E25F4: div.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x801E25F8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801E25FC: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x801E2600: nop

    // 0x801E2604: cvt.w.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_D(ctx->f10.d);
    // 0x801E2608: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x801E260C: nop

    // 0x801E2610: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x801E2614: beql        $a2, $zero, L_801E2668
    if (ctx->r6 == 0) {
        // 0x801E2618: mfc1        $a2, $f16
        ctx->r6 = (int32_t)ctx->f16.u32l;
            goto L_801E2668;
    }
    goto skip_0;
    // 0x801E2618: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x801E261C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801E2620: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E2624: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E2628: sub.d       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f10.d - ctx->f16.d;
    // 0x801E262C: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x801E2630: nop

    // 0x801E2634: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x801E2638: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x801E263C: nop

    // 0x801E2640: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x801E2644: bne         $a2, $zero, L_801E265C
    if (ctx->r6 != 0) {
        // 0x801E2648: nop
    
            goto L_801E265C;
    }
    // 0x801E2648: nop

    // 0x801E264C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801E2650: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2654: b           L_801E2674
    // 0x801E2658: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_801E2674;
    // 0x801E2658: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_801E265C:
    // 0x801E265C: b           L_801E2674
    // 0x801E2660: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_801E2674;
    // 0x801E2660: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x801E2664: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
L_801E2668:
    // 0x801E2668: nop

    // 0x801E266C: bltz        $a2, L_801E265C
    if (SIGNED(ctx->r6) < 0) {
        // 0x801E2670: nop
    
            goto L_801E265C;
    }
    // 0x801E2670: nop

L_801E2674:
    // 0x801E2674: andi        $t0, $a2, 0xFFFF
    ctx->r8 = ctx->r6 & 0XFFFF;
    // 0x801E2678: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x801E267C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801E2680: beq         $at, $zero, L_801E26FC
    if (ctx->r1 == 0) {
        // 0x801E2684: or          $a2, $t0, $zero
        ctx->r6 = ctx->r8 | 0;
            goto L_801E26FC;
    }
    // 0x801E2684: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x801E2688: sb          $t1, 0x60($a0)
    MEM_B(0X60, ctx->r4) = ctx->r9;
    // 0x801E268C: sw          $a3, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r7;
    // 0x801E2690: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x801E2694: mtc1        $a2, $f18
    ctx->f18.u32l = ctx->r6;
    // 0x801E2698: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801E269C: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x801E26A0: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x801E26A4: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x801E26A8: beql        $a1, $zero, L_801E26C4
    if (ctx->r5 == 0) {
        // 0x801E26AC: sw          $a3, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r7;
            goto L_801E26C4;
    }
    goto skip_1;
    // 0x801E26AC: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    skip_1:
    // 0x801E26B0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_801E26B4:
    // 0x801E26B4: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x801E26B8: bnel        $a1, $zero, L_801E26B4
    if (ctx->r5 != 0) {
        // 0x801E26BC: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_801E26B4;
    }
    goto skip_2;
    // 0x801E26BC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    skip_2:
    // 0x801E26C0: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
L_801E26C4:
    // 0x801E26C4: bgez        $a2, L_801E26DC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x801E26C8: sw          $zero, 0x0($a3)
        MEM_W(0X0, ctx->r7) = 0;
            goto L_801E26DC;
    }
    // 0x801E26C8: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x801E26CC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801E26D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E26D4: nop

    // 0x801E26D8: add.d       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f4.d + ctx->f6.d;
L_801E26DC:
    // 0x801E26DC: mul.d       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801E26E0: lui         $at, 0x4039
    ctx->r1 = S32(0X4039 << 16);
    // 0x801E26E4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801E26E8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E26EC: nop

    // 0x801E26F0: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x801E26F4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E26F8: swc1        $f18, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f18.u32l;
L_801E26FC:
    // 0x801E26FC: jr          $ra
    // 0x801E2700: nop

    TRACE_RETURN()
    return;
    // 0x801E2700: nop

;}
RECOMP_FUNC void func_801CD96C_63C7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD96C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801CD970: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801CD974: lwc1        $f2, 0x64($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801CD978: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801CD97C: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x801CD980: lwc1        $f4, 0x64($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X64);
    // 0x801CD984: beq         $t6, $zero, L_801CD9B8
    if (ctx->r14 == 0) {
        // 0x801CD988: sub.s       $f2, $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f4.fl;
            goto L_801CD9B8;
    }
    // 0x801CD988: sub.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x801CD98C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CD990: nop

    // 0x801CD994: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x801CD998: nop

    // 0x801CD99C: bc1fl       L_801CD9B0
    if (!c1cs) {
        // 0x801CD9A0: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_801CD9B0;
    }
    goto skip_0;
    // 0x801CD9A0: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_0:
    // 0x801CD9A4: jr          $ra
    // 0x801CD9A8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    TRACE_RETURN()
    return;
    // 0x801CD9A8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x801CD9AC: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_801CD9B0:
    // 0x801CD9B0: jr          $ra
    // 0x801CD9B4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    TRACE_RETURN()
    return;
    // 0x801CD9B4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_801CD9B8:
    // 0x801CD9B8: lwc1        $f12, 0x5C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x801CD9BC: lwc1        $f8, 0x5C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X5C);
    // 0x801CD9C0: sub.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x801CD9C4: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801CD9C8: nop

    // 0x801CD9CC: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801CD9D0: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CD9D4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CD9D8: jr          $ra
    // 0x801CD9DC: nop

    TRACE_RETURN()
    return;
    // 0x801CD9DC: nop

;}
RECOMP_FUNC void func_801E7340_656190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7340: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x801E7344: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801E7348: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801E734C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801E7350: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801E7354: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x801E7358: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x801E735C: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    // 0x801E7360: sw          $a3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r7;
    // 0x801E7364: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801E7368: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E736C: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801E7370: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x801E7374: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
    // 0x801E7378: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x801E737C: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x801E7380: lw          $s2, 0xD4($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD4);
    // 0x801E7384: lw          $s0, 0xDC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XDC);
    // 0x801E7388: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E738C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E7390: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x801E7394: nop

    // 0x801E7398: sw          $t8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r24;
    // 0x801E739C: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801E73A0: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x801E73A4: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x801E73A8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E73AC: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x801E73B0: nop

    // 0x801E73B4: sw          $t3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r11;
    // 0x801E73B8: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x801E73BC: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x801E73C0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E73C4: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x801E73C8: nop

    // 0x801E73CC: sw          $t6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r14;
    // 0x801E73D0: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x801E73D4: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x801E73D8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E73DC: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x801E73E0: nop

    // 0x801E73E4: sw          $t9, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r25;
    // 0x801E73E8: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x801E73EC: sw          $t9, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r25;
    // 0x801E73F0: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x801E73F4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E73F8: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x801E73FC: nop

    // 0x801E7400: sw          $t3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r11;
    // 0x801E7404: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801E7408: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x801E740C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E7410: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x801E7414: nop

    // 0x801E7418: sw          $t6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r14;
    // 0x801E741C: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x801E7420: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x801E7424: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E7428: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x801E742C: nop

    // 0x801E7430: sw          $t7, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r15;
    // 0x801E7434: lwc1        $f10, 0x0($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X0);
    // 0x801E7438: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x801E743C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E7440: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x801E7444: nop

    // 0x801E7448: sw          $t3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r11;
    // 0x801E744C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801E7450: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x801E7454: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E7458: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x801E745C: nop

    // 0x801E7460: sw          $t5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r13;
    // 0x801E7464: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801E7468: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x801E746C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E7470: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x801E7474: nop

    // 0x801E7478: sw          $t8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r24;
    // 0x801E747C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E7480: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x801E7484: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E7488: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x801E748C: nop

    // 0x801E7490: sw          $t7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r15;
    // 0x801E7494: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E7498: lhu         $t3, 0x14($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X14);
    // 0x801E749C: bnel        $t3, $zero, L_801E74BC
    if (ctx->r11 != 0) {
        // 0x801E74A0: lwc1        $f10, 0x8($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
            goto L_801E74BC;
    }
    goto skip_0;
    // 0x801E74A0: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x801E74A4: lhu         $t4, 0x18($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X18);
    // 0x801E74A8: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x801E74AC: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x801E74B0: beq         $t4, $zero, L_801E7AE8
    if (ctx->r12 == 0) {
        // 0x801E74B4: lw          $t8, 0xA8($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA8);
            goto L_801E7AE8;
    }
    // 0x801E74B4: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x801E74B8: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
L_801E74BC:
    // 0x801E74BC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E74C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E74C4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E74C8: lw          $t5, 0xC0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC0);
    // 0x801E74CC: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801E74D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E74D4: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    // 0x801E74D8: addiu       $t4, $sp, 0x64
    ctx->r12 = ADD32(ctx->r29, 0X64);
    // 0x801E74DC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801E74E0: swc1        $f4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f4.u32l;
    // 0x801E74E4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E74E8: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x801E74EC: addiu       $t5, $sp, 0x68
    ctx->r13 = ADD32(ctx->r29, 0X68);
    // 0x801E74F0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E74F4: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x801E74F8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E74FC: swc1        $f16, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f16.u32l;
    // 0x801E7500: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E7504: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x801E7508: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801E750C: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801E7510: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801E7514: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x801E7518: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E751C: lw          $t3, 0xB8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB8);
    // 0x801E7520: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E7524: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801E7528: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801E752C: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x801E7530: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E7534: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E7538: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x801E753C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E7540: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x801E7544: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E7548: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801E754C: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801E7550: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801E7554: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x801E7558: lhu         $t9, 0x14($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X14);
    // 0x801E755C: sh          $t9, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r25;
    // 0x801E7560: lhu         $t7, 0x16($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X16);
    // 0x801E7564: andi        $a0, $t9, 0xFFFF
    ctx->r4 = ctx->r25 & 0XFFFF;
    // 0x801E7568: sh          $t7, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r15;
    // 0x801E756C: lhu         $t2, 0x18($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X18);
    // 0x801E7570: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801E7574: sh          $t2, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r10;
    // 0x801E7578: lwc1        $f10, 0x84($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X84);
    // 0x801E757C: andi        $a2, $t2, 0xFFFF
    ctx->r6 = ctx->r10 & 0XFFFF;
    // 0x801E7580: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x801E7584: lwc1        $f16, 0x88($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X88);
    // 0x801E7588: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E758C: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801E7590: lwc1        $f18, 0x8C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X8C);
    // 0x801E7594: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E7598: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    // 0x801E759C: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x801E75A0: nop

    // 0x801E75A4: bc1tl       L_801E75FC
    if (c1cs) {
        // 0x801E75A8: lw          $t6, 0xB8($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XB8);
            goto L_801E75FC;
    }
    goto skip_1;
    // 0x801E75A8: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    skip_1:
    // 0x801E75AC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801E75B0: jal         0x80033898
    // 0x801E75B4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E75B4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_0:
    // 0x801E75B8: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x801E75BC: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E75C0: lw          $v1, 0xC4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XC4);
    // 0x801E75C4: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801E75C8: lw          $t1, 0xC8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC8);
    // 0x801E75CC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E75D0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E75D4: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x801E75D8: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E75DC: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801E75E0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E75E4: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x801E75E8: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E75EC: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x801E75F0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E75F4: swc1        $f16, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f16.u32l;
    // 0x801E75F8: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
L_801E75FC:
    // 0x801E75FC: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    // 0x801E7600: lhu         $a1, 0x4E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4E);
    // 0x801E7604: lwc1        $f18, 0x90($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X90);
    // 0x801E7608: lhu         $a2, 0x50($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X50);
    // 0x801E760C: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    // 0x801E7610: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x801E7614: lwc1        $f4, 0x94($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X94);
    // 0x801E7618: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x801E761C: addiu       $t9, $sp, 0x68
    ctx->r25 = ADD32(ctx->r29, 0X68);
    // 0x801E7620: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E7624: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x801E7628: lwc1        $f6, 0x98($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X98);
    // 0x801E762C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E7630: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x801E7634: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x801E7638: nop

    // 0x801E763C: bc1tl       L_801E767C
    if (c1cs) {
        // 0x801E7640: lw          $t7, 0xB8($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XB8);
            goto L_801E767C;
    }
    goto skip_2;
    // 0x801E7640: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    skip_2:
    // 0x801E7644: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801E7648: jal         0x80033898
    // 0x801E764C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801E764C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_1:
    // 0x801E7650: jal         0x8001D394
    // 0x801E7654: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    func_8001D394_1DF94(rdram, ctx);
        goto after_2;
    // 0x801E7654: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_2:
    // 0x801E7658: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x801E765C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x801E7660: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E7664: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E7668: jal         0x8001DB04
    // 0x801E766C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_3;
    // 0x801E766C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x801E7670: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E7674: nop

    // 0x801E7678: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
L_801E767C:
    // 0x801E767C: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E7680: lw          $t2, 0xD8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD8);
    // 0x801E7684: lwc1        $f18, 0x78($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X78);
    // 0x801E7688: lui         $at, 0x3FE8
    ctx->r1 = S32(0X3FE8 << 16);
    // 0x801E768C: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x801E7690: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801E7694: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801E7698: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    // 0x801E769C: addiu       $t3, $sp, 0x64
    ctx->r11 = ADD32(ctx->r29, 0X64);
    // 0x801E76A0: addiu       $t4, $sp, 0x68
    ctx->r12 = ADD32(ctx->r29, 0X68);
    // 0x801E76A4: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x801E76A8: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E76AC: lwc1        $f8, 0x7C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X7C);
    // 0x801E76B0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801E76B4: swc1        $f10, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f10.u32l;
    // 0x801E76B8: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E76BC: lwc1        $f18, 0x80($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X80);
    // 0x801E76C0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801E76C4: swc1        $f4, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f4.u32l;
    // 0x801E76C8: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x801E76CC: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x801E76D0: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x801E76D4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E76D8: mul.d       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f14.d);
    // 0x801E76DC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E76E0: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801E76E4: lwc1        $f0, 0x4($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X4);
    // 0x801E76E8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801E76EC: nop

    // 0x801E76F0: bc1fl       L_801E7710
    if (!c1cs) {
        // 0x801E76F4: lhu         $a0, 0x4C($sp)
        ctx->r4 = MEM_HU(ctx->r29, 0X4C);
            goto L_801E7710;
    }
    goto skip_3;
    // 0x801E76F4: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    skip_3:
    // 0x801E76F8: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x801E76FC: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x801E7700: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x801E7704: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x801E7708: swc1        $f6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f6.u32l;
    // 0x801E770C: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
L_801E7710:
    // 0x801E7710: lhu         $a1, 0x4E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4E);
    // 0x801E7714: lhu         $a2, 0x50($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X50);
    // 0x801E7718: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E771C: jal         0x80033898
    // 0x801E7720: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_80033898_34498(rdram, ctx);
        goto after_4;
    // 0x801E7720: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_4:
    // 0x801E7724: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x801E7728: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E772C: lw          $v1, 0xC4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XC4);
    // 0x801E7730: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801E7734: lw          $t1, 0xC8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC8);
    // 0x801E7738: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E773C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E7740: lui         $at, 0x3FE8
    ctx->r1 = S32(0X3FE8 << 16);
    // 0x801E7744: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x801E7748: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801E774C: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x801E7750: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E7754: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801E7758: addiu       $t6, $sp, 0x64
    ctx->r14 = ADD32(ctx->r29, 0X64);
    // 0x801E775C: addiu       $t8, $sp, 0x68
    ctx->r24 = ADD32(ctx->r29, 0X68);
    // 0x801E7760: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E7764: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    // 0x801E7768: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x801E776C: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E7770: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x801E7774: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E7778: swc1        $f16, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f16.u32l;
    // 0x801E777C: lw          $t5, 0xD8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD8);
    // 0x801E7780: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x801E7784: lhu         $a2, 0x50($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X50);
    // 0x801E7788: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x801E778C: lwc1        $f18, 0x4($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X4);
    // 0x801E7790: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801E7794: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E7798: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801E779C: mul.d       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f14.d);
    // 0x801E77A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E77A4: lhu         $a1, 0x4E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4E);
    // 0x801E77A8: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    // 0x801E77AC: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x801E77B0: sub.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f4.d - ctx->f10.d;
    // 0x801E77B4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E77B8: jal         0x80033898
    // 0x801E77BC: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x801E77BC: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x801E77C0: lw          $a2, 0xC0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC0);
    // 0x801E77C4: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E77C8: lw          $a3, 0xC4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC4);
    // 0x801E77CC: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801E77D0: lw          $t1, 0xC8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC8);
    // 0x801E77D4: lw          $t0, 0xD0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD0);
    // 0x801E77D8: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E77DC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801E77E0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E77E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E77E8: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x801E77EC: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E77F0: lwc1        $f16, 0x0($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801E77F4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E77F8: swc1        $f18, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f18.u32l;
    // 0x801E77FC: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E7800: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x801E7804: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E7808: swc1        $f4, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f4.u32l;
    // 0x801E780C: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x801E7810: lbu         $a0, 0x74($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X74);
    // 0x801E7814: andi        $v1, $a0, 0x3
    ctx->r3 = ctx->r4 & 0X3;
    // 0x801E7818: beql        $v1, $zero, L_801E7848
    if (ctx->r3 == 0) {
        // 0x801E781C: lwc1        $f10, 0x0($s1)
        ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
            goto L_801E7848;
    }
    goto skip_4;
    // 0x801E781C: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    skip_4:
    // 0x801E7820: beq         $v1, $at, L_801E789C
    if (ctx->r3 == ctx->r1) {
        // 0x801E7824: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_801E789C;
    }
    // 0x801E7824: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x801E7828: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E782C: beq         $v1, $at, L_801E7A60
    if (ctx->r3 == ctx->r1) {
        // 0x801E7830: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801E7A60;
    }
    // 0x801E7830: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E7834: beql        $v1, $at, L_801E78A0
    if (ctx->r3 == ctx->r1) {
        // 0x801E7838: lwc1        $f8, 0x0($s1)
        ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
            goto L_801E78A0;
    }
    goto skip_5;
    // 0x801E7838: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    skip_5:
    // 0x801E783C: b           L_801E7AB4
    // 0x801E7840: lwc1        $f2, 0x74($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X74);
        goto L_801E7AB4;
    // 0x801E7840: lwc1        $f2, 0x74($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E7844: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
L_801E7848:
    // 0x801E7848: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801E784C: andi        $t7, $a0, 0x4
    ctx->r15 = ctx->r4 & 0X4;
    // 0x801E7850: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801E7854: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    // 0x801E7858: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x801E785C: swc1        $f6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f6.u32l;
    // 0x801E7860: lwc1        $f8, 0x0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X0);
    // 0x801E7864: swc1        $f8, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f8.u32l;
    // 0x801E7868: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801E786C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801E7870: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801E7874: swc1        $f16, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f16.u32l;
    // 0x801E7878: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x801E787C: swc1        $f18, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f18.u32l;
    // 0x801E7880: lwc1        $f6, 0x0($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X0);
    // 0x801E7884: beq         $t7, $zero, L_801E7894
    if (ctx->r15 == 0) {
        // 0x801E7888: swc1        $f6, 0x8($s2)
        MEM_W(0X8, ctx->r18) = ctx->f6.u32l;
            goto L_801E7894;
    }
    // 0x801E7888: swc1        $f6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f6.u32l;
    // 0x801E788C: b           L_801E7AB4
    // 0x801E7890: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
        goto L_801E7AB4;
    // 0x801E7890: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
L_801E7894:
    // 0x801E7894: b           L_801E7AB4
    // 0x801E7898: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
        goto L_801E7AB4;
    // 0x801E7898: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
L_801E789C:
    // 0x801E789C: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
L_801E78A0:
    // 0x801E78A0: andi        $t2, $a0, 0x4
    ctx->r10 = ctx->r4 & 0X4;
    // 0x801E78A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E78A8: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
    // 0x801E78AC: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x801E78B0: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801E78B4: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801E78B8: swc1        $f16, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f16.u32l;
    // 0x801E78BC: lwc1        $f18, 0x0($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X0);
    // 0x801E78C0: swc1        $f18, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f18.u32l;
    // 0x801E78C4: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801E78C8: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    // 0x801E78CC: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x801E78D0: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801E78D4: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801E78D8: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
    // 0x801E78DC: lwc1        $f16, 0x0($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X0);
    // 0x801E78E0: beq         $t2, $zero, L_801E78F0
    if (ctx->r10 == 0) {
        // 0x801E78E4: swc1        $f16, 0x8($s2)
        MEM_W(0X8, ctx->r18) = ctx->f16.u32l;
            goto L_801E78F0;
    }
    // 0x801E78E4: swc1        $f16, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f16.u32l;
    // 0x801E78E8: b           L_801E78F4
    // 0x801E78EC: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
        goto L_801E78F4;
    // 0x801E78EC: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
L_801E78F0:
    // 0x801E78F0: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
L_801E78F4:
    // 0x801E78F4: bnel        $v0, $at, L_801E7AB8
    if (ctx->r2 != ctx->r1) {
        // 0x801E78F8: lw          $t2, 0xD8($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XD8);
            goto L_801E7AB8;
    }
    goto skip_6;
    // 0x801E78F8: lw          $t2, 0xD8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD8);
    skip_6:
    // 0x801E78FC: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801E7900: c.eq.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl == ctx->f18.fl;
    // 0x801E7904: nop

    // 0x801E7908: bc1tl       L_801E79B0
    if (c1cs) {
        // 0x801E790C: lwc1        $f4, 0x8($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
            goto L_801E79B0;
    }
    goto skip_7;
    // 0x801E790C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    skip_7:
    // 0x801E7910: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801E7914: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    // 0x801E7918: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x801E791C: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x801E7920: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x801E7924: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x801E7928: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x801E792C: subu        $v0, $t8, $t9
    ctx->r2 = SUB32(ctx->r24, ctx->r25);
    // 0x801E7930: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x801E7934: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801E7938: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x801E793C: nop

    // 0x801E7940: subu        $t3, $t4, $t2
    ctx->r11 = SUB32(ctx->r12, ctx->r10);
    // 0x801E7944: addu        $t5, $t3, $v0
    ctx->r13 = ADD32(ctx->r11, ctx->r2);
    // 0x801E7948: sltu        $at, $t7, $t5
    ctx->r1 = ctx->r15 < ctx->r13 ? 1 : 0;
    // 0x801E794C: bne         $at, $zero, L_801E7960
    if (ctx->r1 != 0) {
        // 0x801E7950: sw          $t4, 0xB0($sp)
        MEM_W(0XB0, ctx->r29) = ctx->r12;
            goto L_801E7960;
    }
    // 0x801E7950: sw          $t4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r12;
    // 0x801E7954: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801E7958: b           L_801E79A4
    // 0x801E795C: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
        goto L_801E79A4;
    // 0x801E795C: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
L_801E7960:
    // 0x801E7960: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801E7964: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801E7968: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801E796C: nop

    // 0x801E7970: bc1fl       L_801E7994
    if (!c1cs) {
        // 0x801E7974: lwc1        $f10, 0x0($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
            goto L_801E7994;
    }
    goto skip_8;
    // 0x801E7974: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    skip_8:
    // 0x801E7978: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801E797C: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E7980: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x801E7984: add.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x801E7988: b           L_801E79A4
    // 0x801E798C: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
        goto L_801E79A4;
    // 0x801E798C: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    // 0x801E7990: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
L_801E7994:
    // 0x801E7994: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E7998: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801E799C: sub.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x801E79A0: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
L_801E79A4:
    // 0x801E79A4: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801E79A8: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    // 0x801E79AC: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
L_801E79B0:
    // 0x801E79B0: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x801E79B4: nop

    // 0x801E79B8: bc1tl       L_801E7AB8
    if (c1cs) {
        // 0x801E79BC: lw          $t2, 0xD8($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XD8);
            goto L_801E7AB8;
    }
    goto skip_9;
    // 0x801E79BC: lw          $t2, 0xD8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD8);
    skip_9:
    // 0x801E79C0: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x801E79C4: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x801E79C8: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x801E79CC: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x801E79D0: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x801E79D4: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x801E79D8: addu        $t2, $t9, $t4
    ctx->r10 = ADD32(ctx->r25, ctx->r12);
    // 0x801E79DC: subu        $v0, $t2, $t3
    ctx->r2 = SUB32(ctx->r10, ctx->r11);
    // 0x801E79E0: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x801E79E4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E79E8: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x801E79EC: nop

    // 0x801E79F0: subu        $t6, $t8, $t5
    ctx->r14 = SUB32(ctx->r24, ctx->r13);
    // 0x801E79F4: addu        $t9, $t6, $v0
    ctx->r25 = ADD32(ctx->r14, ctx->r2);
    // 0x801E79F8: sltu        $at, $t7, $t9
    ctx->r1 = ctx->r15 < ctx->r25 ? 1 : 0;
    // 0x801E79FC: bne         $at, $zero, L_801E7A10
    if (ctx->r1 != 0) {
        // 0x801E7A00: sw          $t8, 0xA8($sp)
        MEM_W(0XA8, ctx->r29) = ctx->r24;
            goto L_801E7A10;
    }
    // 0x801E7A00: sw          $t8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r24;
    // 0x801E7A04: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x801E7A08: b           L_801E7A54
    // 0x801E7A0C: swc1        $f6, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f6.u32l;
        goto L_801E7A54;
    // 0x801E7A0C: swc1        $f6, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f6.u32l;
L_801E7A10:
    // 0x801E7A10: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x801E7A14: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x801E7A18: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x801E7A1C: nop

    // 0x801E7A20: bc1fl       L_801E7A44
    if (!c1cs) {
        // 0x801E7A24: lwc1        $f6, 0x8($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
            goto L_801E7A44;
    }
    goto skip_10;
    // 0x801E7A24: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    skip_10:
    // 0x801E7A28: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E7A2C: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801E7A30: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801E7A34: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x801E7A38: b           L_801E7A54
    // 0x801E7A3C: swc1        $f18, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f18.u32l;
        goto L_801E7A54;
    // 0x801E7A3C: swc1        $f18, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f18.u32l;
    // 0x801E7A40: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
L_801E7A44:
    // 0x801E7A44: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801E7A48: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E7A4C: sub.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x801E7A50: swc1        $f10, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f10.u32l;
L_801E7A54:
    // 0x801E7A54: lwc1        $f16, 0x4($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X4);
    // 0x801E7A58: b           L_801E7AB4
    // 0x801E7A5C: swc1        $f16, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f16.u32l;
        goto L_801E7AB4;
    // 0x801E7A5C: swc1        $f16, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f16.u32l;
L_801E7A60:
    // 0x801E7A60: lwc1        $f18, 0x0($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801E7A64: andi        $t4, $a0, 0x4
    ctx->r12 = ctx->r4 & 0X4;
    // 0x801E7A68: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    // 0x801E7A6C: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x801E7A70: swc1        $f6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f6.u32l;
    // 0x801E7A74: lwc1        $f8, 0x0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X0);
    // 0x801E7A78: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E7A7C: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x801E7A80: swc1        $f10, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f10.u32l;
    // 0x801E7A84: lwc1        $f16, 0x0($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801E7A88: swc1        $f16, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f16.u32l;
    // 0x801E7A8C: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x801E7A90: swc1        $f18, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f18.u32l;
    // 0x801E7A94: lwc1        $f8, 0x0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X0);
    // 0x801E7A98: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E7A9C: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E7AA0: beq         $t4, $zero, L_801E7AB0
    if (ctx->r12 == 0) {
        // 0x801E7AA4: swc1        $f4, 0x8($s2)
        MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
            goto L_801E7AB0;
    }
    // 0x801E7AA4: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x801E7AA8: b           L_801E7AB4
    // 0x801E7AAC: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
        goto L_801E7AB4;
    // 0x801E7AAC: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
L_801E7AB0:
    // 0x801E7AB0: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
L_801E7AB4:
    // 0x801E7AB4: lw          $t2, 0xD8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD8);
L_801E7AB8:
    // 0x801E7AB8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801E7ABC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x801E7AC0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801E7AC4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x801E7AC8: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x801E7ACC: lw          $a0, 0xB8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB8);
    // 0x801E7AD0: lw          $a1, 0xBC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XBC);
    // 0x801E7AD4: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x801E7AD8: jal         0x801E6348
    // 0x801E7ADC: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    func_801E6348_655198(rdram, ctx);
        goto after_6;
    // 0x801E7ADC: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x801E7AE0: b           L_801E7CD4
    // 0x801E7AE4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801E7CD4;
    // 0x801E7AE4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801E7AE8:
    // 0x801E7AE8: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x801E7AEC: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x801E7AF0: sll         $t3, $v0, 1
    ctx->r11 = S32(ctx->r2 << 1);
    // 0x801E7AF4: subu        $t6, $t8, $t5
    ctx->r14 = SUB32(ctx->r24, ctx->r13);
    // 0x801E7AF8: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x801E7AFC: sltu        $at, $t3, $t7
    ctx->r1 = ctx->r11 < ctx->r15 ? 1 : 0;
    // 0x801E7B00: beq         $at, $zero, L_801E7B10
    if (ctx->r1 == 0) {
        // 0x801E7B04: lw          $t9, 0x84($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X84);
            goto L_801E7B10;
    }
    // 0x801E7B04: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x801E7B08: b           L_801E7CD0
    // 0x801E7B0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E7CD0;
    // 0x801E7B0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E7B10:
    // 0x801E7B10: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x801E7B14: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x801E7B18: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x801E7B1C: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x801E7B20: subu        $t5, $t2, $t8
    ctx->r13 = SUB32(ctx->r10, ctx->r24);
    // 0x801E7B24: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x801E7B28: sltu        $at, $t4, $t6
    ctx->r1 = ctx->r12 < ctx->r14 ? 1 : 0;
    // 0x801E7B2C: beq         $at, $zero, L_801E7B3C
    if (ctx->r1 == 0) {
        // 0x801E7B30: lw          $t3, 0x88($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X88);
            goto L_801E7B3C;
    }
    // 0x801E7B30: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x801E7B34: b           L_801E7CD0
    // 0x801E7B38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E7CD0;
    // 0x801E7B38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E7B3C:
    // 0x801E7B3C: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x801E7B40: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x801E7B44: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x801E7B48: addu        $v0, $t3, $t7
    ctx->r2 = ADD32(ctx->r11, ctx->r15);
    // 0x801E7B4C: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x801E7B50: subu        $t5, $t2, $t8
    ctx->r13 = SUB32(ctx->r10, ctx->r24);
    // 0x801E7B54: addu        $t4, $t5, $v0
    ctx->r12 = ADD32(ctx->r13, ctx->r2);
    // 0x801E7B58: sltu        $at, $t9, $t4
    ctx->r1 = ctx->r25 < ctx->r12 ? 1 : 0;
    // 0x801E7B5C: beq         $at, $zero, L_801E7B6C
    if (ctx->r1 == 0) {
        // 0x801E7B60: lw          $t6, 0xC0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XC0);
            goto L_801E7B6C;
    }
    // 0x801E7B60: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x801E7B64: b           L_801E7CD0
    // 0x801E7B68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E7CD0;
    // 0x801E7B68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E7B6C:
    // 0x801E7B6C: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
    // 0x801E7B70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E7B74: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    // 0x801E7B78: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x801E7B7C: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x801E7B80: swc1        $f6, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f6.u32l;
    // 0x801E7B84: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x801E7B88: lw          $t8, 0xB0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB0);
    // 0x801E7B8C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x801E7B90: subu        $t9, $t8, $t5
    ctx->r25 = SUB32(ctx->r24, ctx->r13);
    // 0x801E7B94: addu        $t4, $t9, $t7
    ctx->r12 = ADD32(ctx->r25, ctx->r15);
    // 0x801E7B98: sll         $t2, $t7, 1
    ctx->r10 = S32(ctx->r15 << 1);
    // 0x801E7B9C: sltu        $at, $t2, $t4
    ctx->r1 = ctx->r10 < ctx->r12 ? 1 : 0;
    // 0x801E7BA0: beql        $at, $zero, L_801E7BFC
    if (ctx->r1 == 0) {
        // 0x801E7BA4: lw          $a0, 0x8C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X8C);
            goto L_801E7BFC;
    }
    goto skip_11;
    // 0x801E7BA4: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    skip_11:
    // 0x801E7BA8: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801E7BAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E7BB0: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x801E7BB4: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
    // 0x801E7BB8: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x801E7BBC: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801E7BC0: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x801E7BC4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801E7BC8: nop

    // 0x801E7BCC: bc1fl       L_801E7BDC
    if (!c1cs) {
        // 0x801E7BD0: sll         $t8, $t3, 1
        ctx->r24 = S32(ctx->r11 << 1);
            goto L_801E7BDC;
    }
    goto skip_12;
    // 0x801E7BD0: sll         $t8, $t3, 1
    ctx->r24 = S32(ctx->r11 << 1);
    skip_12:
    // 0x801E7BD4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801E7BD8: sll         $t8, $t3, 1
    ctx->r24 = S32(ctx->r11 << 1);
L_801E7BDC:
    // 0x801E7BDC: addiu       $t5, $t8, -0x1
    ctx->r13 = ADD32(ctx->r24, -0X1);
    // 0x801E7BE0: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x801E7BE4: nop

    // 0x801E7BE8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801E7BEC: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x801E7BF0: add.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x801E7BF4: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
    // 0x801E7BF8: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
L_801E7BFC:
    // 0x801E7BFC: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x801E7C00: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x801E7C04: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x801E7C08: subu        $t4, $t7, $t2
    ctx->r12 = SUB32(ctx->r15, ctx->r10);
    // 0x801E7C0C: addu        $t6, $t4, $a0
    ctx->r14 = ADD32(ctx->r12, ctx->r4);
    // 0x801E7C10: sltu        $at, $t9, $t6
    ctx->r1 = ctx->r25 < ctx->r14 ? 1 : 0;
    // 0x801E7C14: beq         $at, $zero, L_801E7C6C
    if (ctx->r1 == 0) {
        // 0x801E7C18: nop
    
            goto L_801E7C6C;
    }
    // 0x801E7C18: nop

    // 0x801E7C1C: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x801E7C20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E7C24: or          $t8, $zero, $zero
    ctx->r24 = 0 | 0;
    // 0x801E7C28: swc1        $f0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f0.u32l;
    // 0x801E7C2C: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x801E7C30: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E7C34: lwc1        $f10, 0x0($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X0);
    // 0x801E7C38: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x801E7C3C: nop

    // 0x801E7C40: bc1fl       L_801E7C50
    if (!c1cs) {
        // 0x801E7C44: sll         $t5, $t8, 1
        ctx->r13 = S32(ctx->r24 << 1);
            goto L_801E7C50;
    }
    goto skip_13;
    // 0x801E7C44: sll         $t5, $t8, 1
    ctx->r13 = S32(ctx->r24 << 1);
    skip_13:
    // 0x801E7C48: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801E7C4C: sll         $t5, $t8, 1
    ctx->r13 = S32(ctx->r24 << 1);
L_801E7C50:
    // 0x801E7C50: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x801E7C54: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x801E7C58: nop

    // 0x801E7C5C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801E7C60: mul.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x801E7C64: add.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x801E7C68: swc1        $f6, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f6.u32l;
L_801E7C6C:
    // 0x801E7C6C: beq         $v0, $zero, L_801E7C7C
    if (ctx->r2 == 0) {
        // 0x801E7C70: lw          $t2, 0xC0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XC0);
            goto L_801E7C7C;
    }
    // 0x801E7C70: lw          $t2, 0xC0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC0);
    // 0x801E7C74: b           L_801E7CD0
    // 0x801E7C78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E7CD0;
    // 0x801E7C78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E7C7C:
    // 0x801E7C7C: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x801E7C80: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801E7C84: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x801E7C88: lwc1        $f16, 0x4($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X4);
    // 0x801E7C8C: sub.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x801E7C90: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x801E7C94: lw          $t9, 0xD8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD8);
    // 0x801E7C98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E7C9C: sub.s       $f12, $f4, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x801E7CA0: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801E7CA4: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x801E7CA8: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801E7CAC: add.s       $f0, $f18, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x801E7CB0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801E7CB4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x801E7CB8: nop

    // 0x801E7CBC: bc1fl       L_801E7CCC
    if (!c1cs) {
        // 0x801E7CC0: andi        $t6, $v0, 0xFF
        ctx->r14 = ctx->r2 & 0XFF;
            goto L_801E7CCC;
    }
    goto skip_14;
    // 0x801E7CC0: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    skip_14:
    // 0x801E7CC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E7CC8: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
L_801E7CCC:
    // 0x801E7CCC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_801E7CD0:
    // 0x801E7CD0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801E7CD4:
    // 0x801E7CD4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801E7CD8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801E7CDC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801E7CE0: jr          $ra
    // 0x801E7CE4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    TRACE_RETURN()
    return;
    // 0x801E7CE4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_801D2C40_641A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2C40: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D2C44: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D2C48: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801D2C4C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801D2C50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D2C54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801D2C58: jal         0x80035EEC
    // 0x801D2C5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801D2C5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801D2C60: bne         $v0, $zero, L_801D2C78
    if (ctx->r2 != 0) {
        // 0x801D2C64: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801D2C78;
    }
    // 0x801D2C64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D2C68: jal         0x801D2B90
    // 0x801D2C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_1;
    // 0x801D2C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801D2C70: b           L_801D2D40
    // 0x801D2C74: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801D2D40;
    // 0x801D2C74: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801D2C78:
    // 0x801D2C78: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x801D2C7C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D2C80: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x801D2C84: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D2C88: addiu       $t6, $t6, 0x87C
    ctx->r14 = ADD32(ctx->r14, 0X87C);
    // 0x801D2C8C: lwc1        $f0, -0xFE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0XFE0);
    // 0x801D2C90: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x801D2C94: sw          $t7, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->r15;
    // 0x801D2C98: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x801D2C9C: addiu       $t9, $t9, 0x7B8
    ctx->r25 = ADD32(ctx->r25, 0X7B8);
    // 0x801D2CA0: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x801D2CA4: addiu       $t1, $zero, 0x4C0
    ctx->r9 = ADD32(0, 0X4C0);
    // 0x801D2CA8: sw          $t0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r8;
    // 0x801D2CAC: sh          $t1, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r9;
    // 0x801D2CB0: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x801D2CB4: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x801D2CB8: jal         0x80014218
    // 0x801D2CBC: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    func_80014218_14E18(rdram, ctx);
        goto after_2;
    // 0x801D2CBC: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    after_2:
    // 0x801D2CC0: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801D2CC4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D2CC8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x801D2CCC: addiu       $v0, $v0, -0x1BE8
    ctx->r2 = ADD32(ctx->r2, -0X1BE8);
    // 0x801D2CD0: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x801D2CD4: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
L_801D2CD8:
    // 0x801D2CD8: sh          $zero, 0x14($a0)
    MEM_H(0X14, ctx->r4) = 0;
    // 0x801D2CDC: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x801D2CE0: sh          $zero, 0x18($a0)
    MEM_H(0X18, ctx->r4) = 0;
    // 0x801D2CE4: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    // 0x801D2CE8: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x801D2CEC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x801D2CF0: bnel        $a0, $zero, L_801D2CD8
    if (ctx->r4 != 0) {
        // 0x801D2CF4: sw          $v0, 0x30($a0)
        MEM_W(0X30, ctx->r4) = ctx->r2;
            goto L_801D2CD8;
    }
    goto skip_0;
    // 0x801D2CF4: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    skip_0:
    // 0x801D2CF8: sw          $zero, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = 0;
    // 0x801D2CFC: sh          $zero, 0xA8($s0)
    MEM_H(0XA8, ctx->r16) = 0;
    // 0x801D2D00: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D2D04: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D2D08: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D2D0C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D2D10: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D2D14: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D2D18: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801D2D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D2D20: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D2D24: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x801D2D28: jal         0x801E8378
    // 0x801D2D2C: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    func_801E8378_6571C8(rdram, ctx);
        goto after_3;
    // 0x801D2D2C: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    after_3:
    // 0x801D2D30: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D2D34: jal         0x800352EC
    // 0x801D2D38: addiu       $a0, $a0, 0x2D50
    ctx->r4 = ADD32(ctx->r4, 0X2D50);
    func_800352EC_35EEC(rdram, ctx);
        goto after_4;
    // 0x801D2D38: addiu       $a0, $a0, 0x2D50
    ctx->r4 = ADD32(ctx->r4, 0X2D50);
    after_4:
    // 0x801D2D3C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801D2D40:
    // 0x801D2D40: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801D2D44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D2D48: jr          $ra
    // 0x801D2D4C: nop

    TRACE_RETURN()
    return;
    // 0x801D2D4C: nop

;}
RECOMP_FUNC void func_801CFEBC_63ED0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CFEBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CFEC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CFEC4: lbu         $v0, 0x9D($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9D);
    // 0x801CFEC8: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801CFECC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801CFED0: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x801CFED4: lw          $t9, -0x75E4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X75E4);
    // 0x801CFED8: jalr        $t9
    // 0x801CFEDC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801CFEDC: nop

    after_0:
    // 0x801CFEE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CFEE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CFEE8: jr          $ra
    // 0x801CFEEC: nop

    TRACE_RETURN()
    return;
    // 0x801CFEEC: nop

;}
RECOMP_FUNC void func_801CB88C_63A6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB88C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB894: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CB898: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801CB89C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB8A0: addiu       $a0, $a0, -0x4708
    ctx->r4 = ADD32(ctx->r4, -0X4708);
    // 0x801CB8A4: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x801CB8A8: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x801CB8AC: lwc1        $f6, 0x324($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X324);
    // 0x801CB8B0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801CB8B4: sh          $t7, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r15;
    // 0x801CB8B8: lwc1        $f4, 0x64($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X64);
    // 0x801CB8BC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801CB8C0: nop

    // 0x801CB8C4: bc1fl       L_801CB8E8
    if (!c1cs) {
        // 0x801CB8C8: sh          $zero, 0xE2($v0)
        MEM_H(0XE2, ctx->r2) = 0;
            goto L_801CB8E8;
    }
    goto skip_0;
    // 0x801CB8C8: sh          $zero, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = 0;
    skip_0:
    // 0x801CB8CC: jal         0x8003521C
    // 0x801CB8D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801CB8D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801CB8D4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801CB8D8: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x801CB8DC: ori         $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 | 0X8000;
    // 0x801CB8E0: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x801CB8E4: sh          $zero, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = 0;
L_801CB8E8:
    // 0x801CB8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB8EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CB8F0: jr          $ra
    // 0x801CB8F4: nop

    TRACE_RETURN()
    return;
    // 0x801CB8F4: nop

;}
RECOMP_FUNC void func_801CDFE4_63CE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDFE4: lw          $v1, 0x30($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X30);
    // 0x801CDFE8: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801CDFEC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x801CDFF0: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801CDFF4: and         $t6, $v1, $at
    ctx->r14 = ctx->r3 & ctx->r1;
    // 0x801CDFF8: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x801CDFFC: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x801CE000: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    // 0x801CE004: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_801CE008:
    // 0x801CE008: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x801CE00C: multu       $t7, $a0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CE010: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x801CE014: mflo        $t8
    ctx->r24 = lo;
    // 0x801CE018: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x801CE01C: addiu       $t0, $t9, 0x3F0
    ctx->r8 = ADD32(ctx->r25, 0X3F0);
    // 0x801CE020: bne         $v1, $t0, L_801CE058
    if (ctx->r3 != ctx->r8) {
        // 0x801CE024: sra         $t1, $t7, 5
        ctx->r9 = S32(SIGNED(ctx->r15) >> 5);
            goto L_801CE058;
    }
    // 0x801CE024: sra         $t1, $t7, 5
    ctx->r9 = S32(SIGNED(ctx->r15) >> 5);
    // 0x801CE028: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x801CE02C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801CE030: or          $t5, $t7, $zero
    ctx->r13 = ctx->r15 | 0;
    // 0x801CE034: addu        $a0, $v0, $t3
    ctx->r4 = ADD32(ctx->r2, ctx->r11);
    // 0x801CE038: lw          $t4, 0x3E0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X3E0);
    // 0x801CE03C: andi        $t6, $t5, 0x1F
    ctx->r14 = ctx->r13 & 0X1F;
    // 0x801CE040: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CE044: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x801CE048: nor         $t9, $t8, $zero
    ctx->r25 = ~(ctx->r24 | 0);
    // 0x801CE04C: and         $t0, $t4, $t9
    ctx->r8 = ctx->r12 & ctx->r25;
    // 0x801CE050: jr          $ra
    // 0x801CE054: sw          $t0, 0x3E0($a0)
    MEM_W(0X3E0, ctx->r4) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x801CE054: sw          $t0, 0x3E0($a0)
    MEM_W(0X3E0, ctx->r4) = ctx->r8;
L_801CE058:
    // 0x801CE058: bnel        $a2, $zero, L_801CE008
    if (ctx->r6 != 0) {
        // 0x801CE05C: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_801CE008;
    }
    goto skip_0;
    // 0x801CE05C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    skip_0:
    // 0x801CE060: jr          $ra
    // 0x801CE064: nop

    TRACE_RETURN()
    return;
    // 0x801CE064: nop

;}
RECOMP_FUNC void func_801D4400_643250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4400: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D4404: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D4408: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x801D440C: sb          $t6, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r14;
    // 0x801D4410: jr          $ra
    // 0x801D4414: sh          $t7, 0xB6($a0)
    MEM_H(0XB6, ctx->r4) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x801D4414: sh          $t7, 0xB6($a0)
    MEM_H(0XB6, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_801CE0D0_63CF20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE0D0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801CE0D4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801CE0D8: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x801CE0DC: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x801CE0E0: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801CE0E4: lw          $t6, 0xEC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XEC);
    // 0x801CE0E8: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x801CE0EC: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x801CE0F0: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x801CE0F4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801CE0F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CE0FC: sb          $zero, 0x9F($a0)
    MEM_B(0X9F, ctx->r4) = 0;
    // 0x801CE100: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801CE104: sb          $t7, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r15;
    // 0x801CE108: sb          $t8, 0xA0($a0)
    MEM_B(0XA0, ctx->r4) = ctx->r24;
    // 0x801CE10C: sb          $zero, 0xA3($a0)
    MEM_B(0XA3, ctx->r4) = 0;
    // 0x801CE110: sb          $s1, 0xC4($a0)
    MEM_B(0XC4, ctx->r4) = ctx->r17;
    // 0x801CE114: sb          $s1, 0xC6($a0)
    MEM_B(0XC6, ctx->r4) = ctx->r17;
    // 0x801CE118: sb          $s1, 0xC5($a0)
    MEM_B(0XC5, ctx->r4) = ctx->r17;
    // 0x801CE11C: sb          $s1, 0xC7($a0)
    MEM_B(0XC7, ctx->r4) = ctx->r17;
    // 0x801CE120: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801CE124: jal         0x80035EEC
    // 0x801CE128: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801CE128: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_0:
    // 0x801CE12C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801CE130: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801CE134: sb          $v0, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r2;
L_801CE138:
    // 0x801CE138: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x801CE13C: bnel        $v1, $zero, L_801CE138
    if (ctx->r3 != 0) {
        // 0x801CE140: sb          $v0, 0x64($v1)
        MEM_B(0X64, ctx->r3) = ctx->r2;
            goto L_801CE138;
    }
    goto skip_0;
    // 0x801CE140: sb          $v0, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r2;
    skip_0:
    // 0x801CE144: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CE148: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CE14C: lwc1        $f2, -0x11D0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X11D0);
    // 0x801CE150: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x801CE154: swc1        $f0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f0.u32l;
    // 0x801CE158: swc1        $f0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f0.u32l;
    // 0x801CE15C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CE160: lui         $a2, 0x801F
    ctx->r6 = S32(0X801F << 16);
    // 0x801CE164: addiu       $t9, $zero, 0x4BC
    ctx->r25 = ADD32(0, 0X4BC);
    // 0x801CE168: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801CE16C: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801CE170: addiu       $a2, $a2, -0x18A0
    ctx->r6 = ADD32(ctx->r6, -0X18A0);
    // 0x801CE174: addiu       $a0, $a0, 0x19D4
    ctx->r4 = ADD32(ctx->r4, 0X19D4);
    // 0x801CE178: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CE17C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CE180: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CE184: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CE188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CE18C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801CE190: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801CE194: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801CE198: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801CE19C: jal         0x80035854
    // 0x801CE1A0: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801CE1A0: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x801CE1A4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CE1A8: lwc1        $f2, -0x11CC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X11CC);
    // 0x801CE1AC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE1B0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x801CE1B4: sw          $s0, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r16;
    // 0x801CE1B8: sb          $s1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r17;
    // 0x801CE1BC: sw          $t1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r9;
    // 0x801CE1C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CE1C4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CE1C8: lui         $a2, 0x801F
    ctx->r6 = S32(0X801F << 16);
    // 0x801CE1CC: addiu       $t2, $zero, 0x4BC
    ctx->r10 = ADD32(0, 0X4BC);
    // 0x801CE1D0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801CE1D4: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x801CE1D8: addiu       $a2, $a2, -0x18A0
    ctx->r6 = ADD32(ctx->r6, -0X18A0);
    // 0x801CE1DC: addiu       $a0, $a0, 0x1A9C
    ctx->r4 = ADD32(ctx->r4, 0X1A9C);
    // 0x801CE1E0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CE1E4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CE1E8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CE1EC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CE1F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CE1F4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801CE1F8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801CE1FC: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801CE200: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801CE204: jal         0x80035854
    // 0x801CE208: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_2;
    // 0x801CE208: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x801CE20C: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x801CE210: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CE214: lwc1        $f2, -0x11C8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X11C8);
    // 0x801CE218: sw          $s0, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r16;
    // 0x801CE21C: sw          $t3, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r11;
    // 0x801CE220: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x801CE224: sb          $s1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r17;
    // 0x801CE228: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CE22C: sw          $t4, 0xE4($v0)
    MEM_W(0XE4, ctx->r2) = ctx->r12;
    // 0x801CE230: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CE234: lui         $a2, 0x801F
    ctx->r6 = S32(0X801F << 16);
    // 0x801CE238: addiu       $t5, $zero, 0x4BC
    ctx->r13 = ADD32(0, 0X4BC);
    // 0x801CE23C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801CE240: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x801CE244: addiu       $a2, $a2, -0x18A0
    ctx->r6 = ADD32(ctx->r6, -0X18A0);
    // 0x801CE248: addiu       $a0, $a0, 0x1C78
    ctx->r4 = ADD32(ctx->r4, 0X1C78);
    // 0x801CE24C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x801CE250: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CE254: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CE258: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CE25C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CE260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CE264: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801CE268: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801CE26C: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801CE270: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801CE274: jal         0x80035854
    // 0x801CE278: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_3;
    // 0x801CE278: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x801CE27C: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x801CE280: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x801CE284: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801CE288: sw          $s0, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r16;
    // 0x801CE28C: sb          $s1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r17;
    // 0x801CE290: sh          $zero, 0x78($v0)
    MEM_H(0X78, ctx->r2) = 0;
    // 0x801CE294: sh          $zero, 0x7A($v0)
    MEM_H(0X7A, ctx->r2) = 0;
    // 0x801CE298: sb          $zero, 0x74($v0)
    MEM_B(0X74, ctx->r2) = 0;
    // 0x801CE29C: sh          $zero, 0x76($v0)
    MEM_H(0X76, ctx->r2) = 0;
    // 0x801CE2A0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x801CE2A4: sw          $t0, 0xE0($v0)
    MEM_W(0XE0, ctx->r2) = ctx->r8;
    // 0x801CE2A8: sw          $t6, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r14;
L_801CE2AC:
    // 0x801CE2AC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x801CE2B0: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x801CE2B4: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x801CE2B8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801CE2BC: addu        $t1, $v0, $t9
    ctx->r9 = ADD32(ctx->r2, ctx->r25);
    // 0x801CE2C0: andi        $t2, $t7, 0x3
    ctx->r10 = ctx->r15 & 0X3;
    // 0x801CE2C4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x801CE2C8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x801CE2CC: bne         $t7, $zero, L_801CE2AC
    if (ctx->r15 != 0) {
        // 0x801CE2D0: sb          $zero, 0x7C($t3)
        MEM_B(0X7C, ctx->r11) = 0;
            goto L_801CE2AC;
    }
    // 0x801CE2D0: sb          $zero, 0x7C($t3)
    MEM_B(0X7C, ctx->r11) = 0;
    // 0x801CE2D4: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x801CE2D8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CE2DC: sw          $t0, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r8;
    // 0x801CE2E0: sw          $a1, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r5;
    // 0x801CE2E4: addiu       $a0, $a0, -0x1CFC
    ctx->r4 = ADD32(ctx->r4, -0X1CFC);
    // 0x801CE2E8: jal         0x800352EC
    // 0x801CE2EC: sw          $t4, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r12;
    func_800352EC_35EEC(rdram, ctx);
        goto after_4;
    // 0x801CE2EC: sw          $t4, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r12;
    after_4:
    // 0x801CE2F0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801CE2F4: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x801CE2F8: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x801CE2FC: jr          $ra
    // 0x801CE300: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801CE300: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801D2EC0_641D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2EC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2EC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2EC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D2ECC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D2ED0: jal         0x801CD96C
    // 0x801D2ED4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801CD96C_63C7BC(rdram, ctx);
        goto after_0;
    // 0x801D2ED4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801D2ED8: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x801D2EDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D2EE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D2EE4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801D2EE8: nop

    // 0x801D2EEC: bc1fl       L_801D2F00
    if (!c1cs) {
        // 0x801D2EF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D2F00;
    }
    goto skip_0;
    // 0x801D2EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D2EF4: jal         0x801D35AC
    // 0x801D2EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801D35AC_6423FC(rdram, ctx);
        goto after_1;
    // 0x801D2EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801D2EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D2F00:
    // 0x801D2F00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D2F04: jr          $ra
    // 0x801D2F08: nop

    TRACE_RETURN()
    return;
    // 0x801D2F08: nop

;}
RECOMP_FUNC void func_801CF434_63E284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF434: addiu       $sp, $sp, -0x1A0
    ctx->r29 = ADD32(ctx->r29, -0X1A0);
    // 0x801CF438: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x801CF43C: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x801CF440: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x801CF444: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x801CF448: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x801CF44C: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x801CF450: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x801CF454: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x801CF458: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x801CF45C: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x801CF460: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x801CF464: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x801CF468: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x801CF46C: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x801CF470: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x801CF474: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x801CF478: lbu         $s0, 0x9E($a0)
    ctx->r16 = MEM_BU(ctx->r4, 0X9E);
    // 0x801CF47C: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801CF480: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x801CF484: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x801CF488: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x801CF48C: lw          $t9, -0x75F0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X75F0);
    // 0x801CF490: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x801CF494: jalr        $t9
    // 0x801CF498: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801CF498: nop

    after_0:
    // 0x801CF49C: lbu         $a0, 0x9E($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X9E);
    // 0x801CF4A0: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x801CF4A4: lw          $s2, 0xA4($s7)
    ctx->r18 = MEM_W(ctx->r23, 0XA4);
    // 0x801CF4A8: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x801CF4AC: beq         $at, $zero, L_801CF4D8
    if (ctx->r1 == 0) {
        // 0x801CF4B0: addiu       $fp, $sp, 0x170
        ctx->r30 = ADD32(ctx->r29, 0X170);
            goto L_801CF4D8;
    }
    // 0x801CF4B0: addiu       $fp, $sp, 0x170
    ctx->r30 = ADD32(ctx->r29, 0X170);
    // 0x801CF4B4: lw          $v1, 0xA8($s7)
    ctx->r3 = MEM_W(ctx->r23, 0XA8);
    // 0x801CF4B8: lw          $v0, 0xB0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XB0);
    // 0x801CF4BC: lw          $t7, 0xAC($s7)
    ctx->r15 = MEM_W(ctx->r23, 0XAC);
    // 0x801CF4C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x801CF4C4: addiu       $v0, $v0, -0xFA0
    ctx->r2 = ADD32(ctx->r2, -0XFA0);
    // 0x801CF4C8: addu        $s2, $s2, $t7
    ctx->r18 = ADD32(ctx->r18, ctx->r15);
    // 0x801CF4CC: sw          $s2, 0xA4($s7)
    MEM_W(0XA4, ctx->r23) = ctx->r18;
    // 0x801CF4D0: sw          $v1, 0xA8($s7)
    MEM_W(0XA8, ctx->r23) = ctx->r3;
    // 0x801CF4D4: sw          $v0, 0xB0($s7)
    MEM_W(0XB0, ctx->r23) = ctx->r2;
L_801CF4D8:
    // 0x801CF4D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CF4DC: beq         $a0, $at, L_801CF4F0
    if (ctx->r4 == ctx->r1) {
        // 0x801CF4E0: lw          $v0, 0xC8($s7)
        ctx->r2 = MEM_W(ctx->r23, 0XC8);
            goto L_801CF4F0;
    }
    // 0x801CF4E0: lw          $v0, 0xC8($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC8);
    // 0x801CF4E4: lw          $t8, 0xCC($s7)
    ctx->r24 = MEM_W(ctx->r23, 0XCC);
    // 0x801CF4E8: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x801CF4EC: sw          $v0, 0xC8($s7)
    MEM_W(0XC8, ctx->r23) = ctx->r2;
L_801CF4F0:
    // 0x801CF4F0: lw          $s0, 0xE4($s7)
    ctx->r16 = MEM_W(ctx->r23, 0XE4);
    // 0x801CF4F4: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x801CF4F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CF4FC: lw          $s1, 0x18($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X18);
    // 0x801CF500: srl         $t0, $v0, 22
    ctx->r8 = S32(U32(ctx->r2) >> 22);
    // 0x801CF504: addiu       $t1, $sp, 0x174
    ctx->r9 = ADD32(ctx->r29, 0X174);
    // 0x801CF508: addiu       $t2, $sp, 0x178
    ctx->r10 = ADD32(ctx->r29, 0X178);
    // 0x801CF50C: swc1        $f24, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f24.u32l;
    // 0x801CF510: swc1        $f24, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f24.u32l;
    // 0x801CF514: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801CF518: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801CF51C: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    // 0x801CF520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CF524: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CF528: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x801CF52C: jal         0x80033898
    // 0x801CF530: swc1        $f4, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f4.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801CF530: swc1        $f4, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801CF534: mtc1        $s2, $f6
    ctx->f6.u32l = ctx->r18;
    // 0x801CF538: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CF53C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CF540: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801CF544: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    // 0x801CF548: div.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801CF54C: jal         0x801CBC94
    // 0x801CF550: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_2;
    // 0x801CF550: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x801CF554: lwc1        $f16, 0x178($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X178);
    // 0x801CF558: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x801CF55C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801CF560: sub.s       $f12, $f20, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f16.fl;
    // 0x801CF564: bc1f        L_801CF570
    if (!c1cs) {
        // 0x801CF568: swc1        $f12, 0x64($s7)
        MEM_W(0X64, ctx->r23) = ctx->f12.u32l;
            goto L_801CF570;
    }
    // 0x801CF568: swc1        $f12, 0x64($s7)
    MEM_W(0X64, ctx->r23) = ctx->f12.u32l;
    // 0x801CF56C: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
L_801CF570:
    // 0x801CF570: lb          $v0, 0x9F($s7)
    ctx->r2 = MEM_B(ctx->r23, 0X9F);
    // 0x801CF574: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x801CF578: beql        $t3, $zero, L_801CF58C
    if (ctx->r11 == 0) {
        // 0x801CF57C: lw          $t4, 0xA8($s7)
        ctx->r12 = MEM_W(ctx->r23, 0XA8);
            goto L_801CF58C;
    }
    goto skip_0;
    // 0x801CF57C: lw          $t4, 0xA8($s7)
    ctx->r12 = MEM_W(ctx->r23, 0XA8);
    skip_0:
    // 0x801CF580: b           L_801CF5CC
    // 0x801CF584: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
        goto L_801CF5CC;
    // 0x801CF584: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x801CF588: lw          $t4, 0xA8($s7)
    ctx->r12 = MEM_W(ctx->r23, 0XA8);
L_801CF58C:
    // 0x801CF58C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CF590: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CF594: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x801CF598: nop

    // 0x801CF59C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801CF5A0: div.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801CF5A4: c.le.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl <= ctx->f2.fl;
    // 0x801CF5A8: nop

    // 0x801CF5AC: bc1fl       L_801CF5D0
    if (!c1cs) {
        // 0x801CF5B0: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_801CF5D0;
    }
    goto skip_1;
    // 0x801CF5B0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    skip_1:
    // 0x801CF5B4: lw          $t5, 0xB0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0XB0);
    // 0x801CF5B8: ori         $t6, $v0, 0x1
    ctx->r14 = ctx->r2 | 0X1;
    // 0x801CF5BC: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x801CF5C0: bgez        $t5, L_801CF5CC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801CF5C4: nop
    
            goto L_801CF5CC;
    }
    // 0x801CF5C4: nop

    // 0x801CF5C8: sb          $t6, 0x9F($s7)
    MEM_B(0X9F, ctx->r23) = ctx->r14;
L_801CF5CC:
    // 0x801CF5CC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
L_801CF5D0:
    // 0x801CF5D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF5D4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x801CF5D8: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x801CF5DC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x801CF5E0: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x801CF5E4: nop

    // 0x801CF5E8: sw          $t7, 0xA8($s7)
    MEM_W(0XA8, ctx->r23) = ctx->r15;
    // 0x801CF5EC: lwc1        $f18, 0x174($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X174);
    // 0x801CF5F0: sub.s       $f20, $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f18.fl;
    // 0x801CF5F4: swc1        $f20, 0x60($s7)
    MEM_W(0X60, ctx->r23) = ctx->f20.u32l;
    // 0x801CF5F8: jal         0x8001D394
    // 0x801CF5FC: swc1        $f12, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f12.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_3;
    // 0x801CF5FC: swc1        $f12, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x801CF600: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x801CF604: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x801CF608: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CF60C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801CF610: jal         0x8001DB04
    // 0x801CF614: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_4;
    // 0x801CF614: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x801CF618: lbu         $t8, 0x9D($s7)
    ctx->r24 = MEM_BU(ctx->r23, 0X9D);
    // 0x801CF61C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CF620: beql        $t8, $at, L_801CFBA4
    if (ctx->r24 == ctx->r1) {
        // 0x801CF624: lw          $ra, 0x94($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X94);
            goto L_801CFBA4;
    }
    goto skip_2;
    // 0x801CF624: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    skip_2:
    // 0x801CF628: lh          $t0, 0x0($s3)
    ctx->r8 = MEM_H(ctx->r19, 0X0);
    // 0x801CF62C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CF630: ldc1        $f0, -0x1150($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X1150);
    // 0x801CF634: andi        $t1, $t0, 0xFFBF
    ctx->r9 = ctx->r8 & 0XFFBF;
    // 0x801CF638: sh          $t1, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r9;
    // 0x801CF63C: lwc1        $f30, 0x5C($s7)
    ctx->f30.u32l = MEM_W(ctx->r23, 0X5C);
    // 0x801CF640: cvt.d.s     $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f10.d = CVT_D_S(ctx->f20.fl);
    // 0x801CF644: lb          $t2, 0x9F($s7)
    ctx->r10 = MEM_B(ctx->r23, 0X9F);
    // 0x801CF648: cvt.d.s     $f4, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); 
    ctx->f4.d = CVT_D_S(ctx->f30.fl);
    // 0x801CF64C: lui         $s4, 0x801F
    ctx->r20 = S32(0X801F << 16);
    // 0x801CF650: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801CF654: andi        $t3, $t2, 0xFF7F
    ctx->r11 = ctx->r10 & 0XFF7F;
    // 0x801CF658: sb          $t3, 0x9F($s7)
    MEM_B(0X9F, ctx->r23) = ctx->r11;
    // 0x801CF65C: addiu       $s4, $s4, -0x76CC
    ctx->r20 = ADD32(ctx->r20, -0X76CC);
    // 0x801CF660: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801CF664: addiu       $s5, $zero, 0xFF
    ctx->r21 = ADD32(0, 0XFF);
    // 0x801CF668: addiu       $s6, $zero, 0x10
    ctx->r22 = ADD32(0, 0X10);
    // 0x801CF66C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CF670: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CF674: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CF678: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801CF67C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801CF680: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    // 0x801CF684: swc1        $f18, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f18.u32l;
    // 0x801CF688: lwc1        $f4, 0x184($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X184);
    // 0x801CF68C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CF690: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801CF694: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801CF698: jal         0x801DFBE0
    // 0x801CF69C: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
    func_801DFBE0_64EA30(rdram, ctx);
        goto after_5;
    // 0x801CF69C: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
    after_5:
    // 0x801CF6A0: sw          $v0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r2;
    // 0x801CF6A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CF6A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CF6AC: jal         0x801E0494
    // 0x801CF6B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801E0494_64F2E4(rdram, ctx);
        goto after_6;
    // 0x801CF6B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x801CF6B4: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x801CF6B8: mtc1        $at, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r1;
    // 0x801CF6BC: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x801CF6C0: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x801CF6C4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801CF6C8: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x801CF6CC: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x801CF6D0: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x801CF6D4: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801CF6D8: sw          $v0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r2;
    // 0x801CF6DC: lbu         $s3, 0xB2($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0XB2);
L_801CF6E0:
    // 0x801CF6E0: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x801CF6E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801CF6E8: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x801CF6EC: jal         0x8001B918
    // 0x801CF6F0: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
    func_8001B918_1C518(rdram, ctx);
        goto after_7;
    // 0x801CF6F0: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
    after_7:
    // 0x801CF6F4: lwc1        $f16, 0xC0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801CF6F8: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801CF6FC: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x801CF700: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801CF704: lwc1        $f16, 0xC8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801CF708: mul.d       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f22.d);
    // 0x801CF70C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801CF710: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801CF714: mul.d       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f22.d);
    // 0x801CF718: cvt.s.d     $f30, $f4
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f30.fl = CVT_S_D(ctx->f4.d);
    // 0x801CF71C: mul.d       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f22.d);
    // 0x801CF720: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
    // 0x801CF724: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801CF728: jal         0x8000DD58
    // 0x801CF72C: swc1        $f6, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f6.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_8;
    // 0x801CF72C: swc1        $f6, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x801CF730: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x801CF734: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x801CF738: andi        $t4, $s3, 0xFF
    ctx->r12 = ctx->r19 & 0XFF;
    // 0x801CF73C: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x801CF740: bne         $v1, $s2, L_801CF750
    if (ctx->r3 != ctx->r18) {
        // 0x801CF744: or          $s3, $t4, $zero
        ctx->r19 = ctx->r12 | 0;
            goto L_801CF750;
    }
    // 0x801CF744: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
    // 0x801CF748: bne         $t4, $zero, L_801CF76C
    if (ctx->r12 != 0) {
        // 0x801CF74C: nop
    
            goto L_801CF76C;
    }
    // 0x801CF74C: nop

L_801CF750:
    // 0x801CF750: bne         $v1, $s2, L_801CF75C
    if (ctx->r3 != ctx->r18) {
        // 0x801CF754: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_801CF75C;
    }
    // 0x801CF754: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801CF758: xori        $s0, $v1, 0x1
    ctx->r16 = ctx->r3 ^ 0X1;
L_801CF75C:
    // 0x801CF75C: subu        $s3, $t6, $s0
    ctx->r19 = SUB32(ctx->r14, ctx->r16);
    // 0x801CF760: andi        $t9, $s3, 0xFF
    ctx->r25 = ctx->r19 & 0XFF;
    // 0x801CF764: andi        $s5, $s0, 0xFF
    ctx->r21 = ctx->r16 & 0XFF;
    // 0x801CF768: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
L_801CF76C:
    // 0x801CF76C: beq         $s5, $zero, L_801CF7D0
    if (ctx->r21 == 0) {
        // 0x801CF770: lw          $a0, 0xAC($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XAC);
            goto L_801CF7D0;
    }
    // 0x801CF770: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x801CF774: cvt.d.s     $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f8.d = CVT_D_S(ctx->f20.fl);
    // 0x801CF778: lwc1        $f16, 0x184($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X184);
    // 0x801CF77C: add.d       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f26.d); 
    ctx->f10.d = ctx->f8.d + ctx->f26.d;
    // 0x801CF780: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x801CF784: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x801CF788: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x801CF78C: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
    // 0x801CF790: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801CF794: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CF798: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CF79C: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x801CF7A0: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x801CF7A4: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801CF7A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801CF7AC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x801CF7B0: swc1        $f30, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f30.u32l;
    // 0x801CF7B4: swc1        $f24, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f24.u32l;
    // 0x801CF7B8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x801CF7BC: swc1        $f24, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f24.u32l;
    // 0x801CF7C0: jal         0x801E0514
    // 0x801CF7C4: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    func_801E0514_64F364(rdram, ctx);
        goto after_9;
    // 0x801CF7C4: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x801CF7C8: b           L_801CF80C
    // 0x801CF7CC: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
        goto L_801CF80C;
    // 0x801CF7CC: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
L_801CF7D0:
    // 0x801CF7D0: cvt.d.s     $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f18.d = CVT_D_S(ctx->f20.fl);
    // 0x801CF7D4: lwc1        $f6, 0x184($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X184);
    // 0x801CF7D8: add.d       $f4, $f18, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f28.d); 
    ctx->f4.d = ctx->f18.d + ctx->f28.d;
    // 0x801CF7DC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x801CF7E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801CF7E4: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801CF7E8: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x801CF7EC: swc1        $f30, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f30.u32l;
    // 0x801CF7F0: swc1        $f24, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f24.u32l;
    // 0x801CF7F4: swc1        $f24, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f24.u32l;
    // 0x801CF7F8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801CF7FC: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x801CF800: jal         0x801DFC60
    // 0x801CF804: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_801DFC60_64EAB0(rdram, ctx);
        goto after_10;
    // 0x801CF804: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x801CF808: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
L_801CF80C:
    // 0x801CF80C: bne         $s6, $zero, L_801CF6E0
    if (ctx->r22 != 0) {
        // 0x801CF810: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_801CF6E0;
    }
    // 0x801CF810: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x801CF814: sb          $s3, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r19;
    // 0x801CF818: jal         0x80036260
    // 0x801CF81C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_80036260_36E60(rdram, ctx);
        goto after_11;
    // 0x801CF81C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_11:
    // 0x801CF820: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x801CF824: jal         0x8001B740
    // 0x801CF828: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8001B740_1C340(rdram, ctx);
        goto after_12;
    // 0x801CF828: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_12:
    // 0x801CF82C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CF830: lw          $s1, 0x18($s7)
    ctx->r17 = MEM_W(ctx->r23, 0X18);
    // 0x801CF834: lwc1        $f20, -0x1148($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X1148);
    // 0x801CF838: addiu       $s6, $zero, 0x5A0
    ctx->r22 = ADD32(0, 0X5A0);
    // 0x801CF83C: addiu       $s5, $zero, 0xF0
    ctx->r21 = ADD32(0, 0XF0);
    // 0x801CF840: addiu       $s4, $zero, 0xC8
    ctx->r20 = ADD32(0, 0XC8);
    // 0x801CF844: addiu       $s3, $zero, 0xC0
    ctx->r19 = ADD32(0, 0XC0);
    // 0x801CF848: addiu       $s2, $zero, 0x14
    ctx->r18 = ADD32(0, 0X14);
    // 0x801CF84C: lwc1        $f12, 0x10($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10);
L_801CF850:
    // 0x801CF850: jal         0x801CBEF8
    // 0x801CF854: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    func_801CBEF8_63AD48(rdram, ctx);
        goto after_13;
    // 0x801CF854: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    after_13:
    // 0x801CF858: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x801CF85C: nop

    // 0x801CF860: bc1fl       L_801CF884
    if (!c1cs) {
        // 0x801CF864: lwc1        $f10, 0x10($s1)
        ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
            goto L_801CF884;
    }
    goto skip_3;
    // 0x801CF864: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    skip_3:
    // 0x801CF868: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801CF86C: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x801CF870: nop

    // 0x801CF874: bc1fl       L_801CF884
    if (!c1cs) {
        // 0x801CF878: lwc1        $f10, 0x10($s1)
        ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
            goto L_801CF884;
    }
    goto skip_4;
    // 0x801CF878: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    skip_4:
    // 0x801CF87C: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
    // 0x801CF880: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
L_801CF884:
    // 0x801CF884: lwc1        $f4, 0x184($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X184);
    // 0x801CF888: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801CF88C: mul.d       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f22.d);
    // 0x801CF890: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x801CF894: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x801CF898: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801CF89C: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x801CF8A0: nop

    // 0x801CF8A4: slti        $at, $v0, 0xC9
    ctx->r1 = SIGNED(ctx->r2) < 0XC9 ? 1 : 0;
    // 0x801CF8A8: bne         $at, $zero, L_801CF8B4
    if (ctx->r1 != 0) {
        // 0x801CF8AC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801CF8B4;
    }
    // 0x801CF8AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801CF8B0: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
L_801CF8B4:
    // 0x801CF8B4: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CF8B8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x801CF8BC: mflo        $t2
    ctx->r10 = lo;
    // 0x801CF8C0: nop

    // 0x801CF8C4: nop

    // 0x801CF8C8: div         $zero, $t2, $s4
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r20)));
    // 0x801CF8CC: mflo        $t3
    ctx->r11 = lo;
    // 0x801CF8D0: bne         $s4, $zero, L_801CF8DC
    if (ctx->r20 != 0) {
        // 0x801CF8D4: nop
    
            goto L_801CF8DC;
    }
    // 0x801CF8D4: nop

    // 0x801CF8D8: break       7
    do_break(2149382360);
L_801CF8DC:
    // 0x801CF8DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CF8E0: bne         $s4, $at, L_801CF8F4
    if (ctx->r20 != ctx->r1) {
        // 0x801CF8E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CF8F4;
    }
    // 0x801CF8E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CF8E8: bne         $t2, $at, L_801CF8F4
    if (ctx->r10 != ctx->r1) {
        // 0x801CF8EC: nop
    
            goto L_801CF8F4;
    }
    // 0x801CF8EC: nop

    // 0x801CF8F0: break       6
    do_break(2149382384);
L_801CF8F4:
    // 0x801CF8F4: multu       $t3, $s5
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CF8F8: mflo        $t4
    ctx->r12 = lo;
    // 0x801CF8FC: addiu       $t6, $t4, 0xF0
    ctx->r14 = ADD32(ctx->r12, 0XF0);
    // 0x801CF900: nop

    // 0x801CF904: div         $zero, $t6, $s2
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r18)));
    // 0x801CF908: mflo        $t5
    ctx->r13 = lo;
    // 0x801CF90C: negu        $t9, $t5
    ctx->r25 = SUB32(0, ctx->r13);
    // 0x801CF910: bne         $s2, $zero, L_801CF91C
    if (ctx->r18 != 0) {
        // 0x801CF914: nop
    
            goto L_801CF91C;
    }
    // 0x801CF914: nop

    // 0x801CF918: break       7
    do_break(2149382424);
L_801CF91C:
    // 0x801CF91C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CF920: bne         $s2, $at, L_801CF934
    if (ctx->r18 != ctx->r1) {
        // 0x801CF924: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CF934;
    }
    // 0x801CF924: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CF928: bne         $t6, $at, L_801CF934
    if (ctx->r14 != ctx->r1) {
        // 0x801CF92C: nop
    
            goto L_801CF934;
    }
    // 0x801CF92C: nop

    // 0x801CF930: break       6
    do_break(2149382448);
L_801CF934:
    // 0x801CF934: sh          $t9, 0x168($sp)
    MEM_H(0X168, ctx->r29) = ctx->r25;
    // 0x801CF938: jal         0x8000DD58
    // 0x801CF93C: nop

    func_8000DD58_E958(rdram, ctx);
        goto after_14;
    // 0x801CF93C: nop

    after_14:
    // 0x801CF940: multu       $v0, $s6
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CF944: lhu         $t7, 0x168($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X168);
    // 0x801CF948: mflo        $t8
    ctx->r24 = lo;
    // 0x801CF94C: nop

    // 0x801CF950: nop

    // 0x801CF954: div         $zero, $t8, $s2
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r18)));
    // 0x801CF958: mflo        $t0
    ctx->r8 = lo;
    // 0x801CF95C: subu        $t1, $t7, $t0
    ctx->r9 = SUB32(ctx->r15, ctx->r8);
    // 0x801CF960: sh          $t1, 0x168($sp)
    MEM_H(0X168, ctx->r29) = ctx->r9;
    // 0x801CF964: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801CF968: bne         $s2, $zero, L_801CF974
    if (ctx->r18 != 0) {
        // 0x801CF96C: nop
    
            goto L_801CF974;
    }
    // 0x801CF96C: nop

    // 0x801CF970: break       7
    do_break(2149382512);
L_801CF974:
    // 0x801CF974: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CF978: bne         $s2, $at, L_801CF98C
    if (ctx->r18 != ctx->r1) {
        // 0x801CF97C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CF98C;
    }
    // 0x801CF97C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CF980: bne         $t8, $at, L_801CF98C
    if (ctx->r24 != ctx->r1) {
        // 0x801CF984: nop
    
            goto L_801CF98C;
    }
    // 0x801CF984: nop

    // 0x801CF988: break       6
    do_break(2149382536);
L_801CF98C:
    // 0x801CF98C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801CF990: mul.d       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f22.d);
    // 0x801CF994: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x801CF998: sub.s       $f4, $f0, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f30.fl;
    // 0x801CF99C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801CF9A0: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x801CF9A4: nop

    // 0x801CF9A8: slti        $at, $v1, -0x60
    ctx->r1 = SIGNED(ctx->r3) < -0X60 ? 1 : 0;
    // 0x801CF9AC: beq         $at, $zero, L_801CF9B8
    if (ctx->r1 == 0) {
        // 0x801CF9B0: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_801CF9B8;
    }
    // 0x801CF9B0: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x801CF9B4: addiu       $s0, $zero, -0x60
    ctx->r16 = ADD32(0, -0X60);
L_801CF9B8:
    // 0x801CF9B8: slti        $at, $s0, 0x61
    ctx->r1 = SIGNED(ctx->r16) < 0X61 ? 1 : 0;
    // 0x801CF9BC: bnel        $at, $zero, L_801CF9CC
    if (ctx->r1 != 0) {
        // 0x801CF9C0: addiu       $s0, $s0, 0x3
        ctx->r16 = ADD32(ctx->r16, 0X3);
            goto L_801CF9CC;
    }
    goto skip_5;
    // 0x801CF9C0: addiu       $s0, $s0, 0x3
    ctx->r16 = ADD32(ctx->r16, 0X3);
    skip_5:
    // 0x801CF9C4: addiu       $s0, $zero, 0x60
    ctx->r16 = ADD32(0, 0X60);
    // 0x801CF9C8: addiu       $s0, $s0, 0x3
    ctx->r16 = ADD32(ctx->r16, 0X3);
L_801CF9CC:
    // 0x801CF9CC: sll         $v1, $s0, 4
    ctx->r3 = S32(ctx->r16 << 4);
    // 0x801CF9D0: addiu       $at, $zero, 0x60
    ctx->r1 = ADD32(0, 0X60);
    // 0x801CF9D4: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x801CF9D8: mflo        $t3
    ctx->r11 = lo;
    // 0x801CF9DC: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x801CF9E0: nop

    // 0x801CF9E4: multu       $t3, $s3
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CF9E8: mflo        $t4
    ctx->r12 = lo;
    // 0x801CF9EC: bgez        $t4, L_801CF9FC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x801CF9F0: sra         $t6, $t4, 4
        ctx->r14 = S32(SIGNED(ctx->r12) >> 4);
            goto L_801CF9FC;
    }
    // 0x801CF9F0: sra         $t6, $t4, 4
    ctx->r14 = S32(SIGNED(ctx->r12) >> 4);
    // 0x801CF9F4: addiu       $at, $t4, 0xF
    ctx->r1 = ADD32(ctx->r12, 0XF);
    // 0x801CF9F8: sra         $t6, $at, 4
    ctx->r14 = S32(SIGNED(ctx->r1) >> 4);
L_801CF9FC:
    // 0x801CF9FC: beq         $v1, $zero, L_801CFA64
    if (ctx->r3 == 0) {
        // 0x801CFA00: sh          $t6, 0x16A($sp)
        MEM_H(0X16A, ctx->r29) = ctx->r14;
            goto L_801CFA64;
    }
    // 0x801CFA00: sh          $t6, 0x16A($sp)
    MEM_H(0X16A, ctx->r29) = ctx->r14;
    // 0x801CFA04: bgez        $v1, L_801CFA14
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801CFA08: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_801CFA14;
    }
    // 0x801CFA08: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x801CFA0C: b           L_801CFA14
    // 0x801CFA10: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
        goto L_801CFA14;
    // 0x801CFA10: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
L_801CFA14:
    // 0x801CFA14: jal         0x8000DD58
    // 0x801CFA18: sw          $v1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r3;
    func_8000DD58_E958(rdram, ctx);
        goto after_15;
    // 0x801CFA18: sw          $v1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r3;
    after_15:
    // 0x801CFA1C: lw          $v1, 0xA0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA0);
    // 0x801CFA20: lhu         $t5, 0x16A($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X16A);
    // 0x801CFA24: slti        $t9, $v1, 0x2
    ctx->r25 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x801CFA28: xori        $t9, $t9, 0x1
    ctx->r25 = ctx->r25 ^ 0X1;
    // 0x801CFA2C: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x801CFA30: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x801CFA34: multu       $v0, $t7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CFA38: mflo        $t0
    ctx->r8 = lo;
    // 0x801CFA3C: nop

    // 0x801CFA40: nop

    // 0x801CFA44: multu       $t0, $s3
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CFA48: mflo        $t1
    ctx->r9 = lo;
    // 0x801CFA4C: bgez        $t1, L_801CFA5C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x801CFA50: sra         $t2, $t1, 4
        ctx->r10 = S32(SIGNED(ctx->r9) >> 4);
            goto L_801CFA5C;
    }
    // 0x801CFA50: sra         $t2, $t1, 4
    ctx->r10 = S32(SIGNED(ctx->r9) >> 4);
    // 0x801CFA54: addiu       $at, $t1, 0xF
    ctx->r1 = ADD32(ctx->r9, 0XF);
    // 0x801CFA58: sra         $t2, $at, 4
    ctx->r10 = S32(SIGNED(ctx->r1) >> 4);
L_801CFA5C:
    // 0x801CFA5C: addu        $t3, $t5, $t2
    ctx->r11 = ADD32(ctx->r13, ctx->r10);
    // 0x801CFA60: sh          $t3, 0x16A($sp)
    MEM_H(0X16A, ctx->r29) = ctx->r11;
L_801CFA64:
    // 0x801CFA64: sh          $zero, 0x16C($sp)
    MEM_H(0X16C, ctx->r29) = 0;
    // 0x801CFA68: swc1        $f24, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f24.u32l;
    // 0x801CFA6C: swc1        $f24, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f24.u32l;
    // 0x801CFA70: lw          $t4, 0xAC($s7)
    ctx->r12 = MEM_W(ctx->r23, 0XAC);
    // 0x801CFA74: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CFA78: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CFA7C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x801CFA80: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CFA84: ldc1        $f6, -0x1140($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1140);
    // 0x801CFA88: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801CFA8C: addiu       $t6, $sp, 0x174
    ctx->r14 = ADD32(ctx->r29, 0X174);
    // 0x801CFA90: addiu       $t9, $sp, 0x178
    ctx->r25 = ADD32(ctx->r29, 0X178);
    // 0x801CFA94: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801CFA98: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CFA9C: lhu         $a0, 0x168($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X168);
    // 0x801CFAA0: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801CFAA4: lhu         $a1, 0x16A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X16A);
    // 0x801CFAA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CFAAC: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x801CFAB0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801CFAB4: swc1        $f18, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f18.u32l;
    // 0x801CFAB8: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801CFABC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801CFAC0: jal         0x80033898
    // 0x801CFAC4: swc1        $f10, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f10.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_16;
    // 0x801CFAC4: swc1        $f10, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f10.u32l;
    after_16:
    // 0x801CFAC8: lwc1        $f16, 0x170($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X170);
    // 0x801CFACC: addiu       $t8, $sp, 0x174
    ctx->r24 = ADD32(ctx->r29, 0X174);
    // 0x801CFAD0: addiu       $t7, $sp, 0x178
    ctx->r15 = ADD32(ctx->r29, 0X178);
    // 0x801CFAD4: swc1        $f16, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f16.u32l;
    // 0x801CFAD8: lwc1        $f18, 0x174($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X174);
    // 0x801CFADC: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x801CFAE0: swc1        $f18, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->f18.u32l;
    // 0x801CFAE4: lwc1        $f4, 0x178($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X178);
    // 0x801CFAE8: swc1        $f4, 0x88($s1)
    MEM_W(0X88, ctx->r17) = ctx->f4.u32l;
    // 0x801CFAEC: swc1        $f24, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f24.u32l;
    // 0x801CFAF0: swc1        $f24, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f24.u32l;
    // 0x801CFAF4: swc1        $f20, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f20.u32l;
    // 0x801CFAF8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801CFAFC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CFB00: lhu         $a2, 0x16C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X16C);
    // 0x801CFB04: lhu         $a1, 0x16A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X16A);
    // 0x801CFB08: jal         0x80033898
    // 0x801CFB0C: lhu         $a0, 0x168($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X168);
    func_80033898_34498(rdram, ctx);
        goto after_17;
    // 0x801CFB0C: lhu         $a0, 0x168($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X168);
    after_17:
    // 0x801CFB10: lwc1        $f6, 0x84($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X84);
    // 0x801CFB14: lwc1        $f8, 0x174($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X174);
    // 0x801CFB18: lhu         $t0, 0x14($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X14);
    // 0x801CFB1C: lhu         $t1, 0x16($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X16);
    // 0x801CFB20: lhu         $t2, 0x18($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X18);
    // 0x801CFB24: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801CFB28: and         $t5, $t0, $t1
    ctx->r13 = ctx->r8 & ctx->r9;
    // 0x801CFB2C: and         $t3, $t5, $t2
    ctx->r11 = ctx->r13 & ctx->r10;
    // 0x801CFB30: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x801CFB34: swc1        $f10, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->f10.u32l;
    // 0x801CFB38: sh          $zero, 0x8C($s1)
    MEM_H(0X8C, ctx->r17) = 0;
    // 0x801CFB3C: bne         $t4, $zero, L_801CFB84
    if (ctx->r12 != 0) {
        // 0x801CFB40: sh          $zero, 0x8E($s1)
        MEM_H(0X8E, ctx->r17) = 0;
            goto L_801CFB84;
    }
    // 0x801CFB40: sh          $zero, 0x8E($s1)
    MEM_H(0X8E, ctx->r17) = 0;
    // 0x801CFB44: jal         0x8000DD58
    // 0x801CFB48: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8000DD58_E958(rdram, ctx);
        goto after_18;
    // 0x801CFB48: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_18:
    // 0x801CFB4C: addiu       $v1, $v0, -0x4
    ctx->r3 = ADD32(ctx->r2, -0X4);
    // 0x801CFB50: bltz        $v1, L_801CFB5C
    if (SIGNED(ctx->r3) < 0) {
        // 0x801CFB54: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_801CFB5C;
    }
    // 0x801CFB54: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x801CFB58: addiu       $s0, $v1, 0x1
    ctx->r16 = ADD32(ctx->r3, 0X1);
L_801CFB5C:
    // 0x801CFB5C: sll         $t6, $s0, 5
    ctx->r14 = S32(ctx->r16 << 5);
    // 0x801CFB60: sh          $t6, 0x8C($s1)
    MEM_H(0X8C, ctx->r17) = ctx->r14;
    // 0x801CFB64: jal         0x8000DD58
    // 0x801CFB68: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8000DD58_E958(rdram, ctx);
        goto after_19;
    // 0x801CFB68: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_19:
    // 0x801CFB6C: addiu       $v1, $v0, -0x4
    ctx->r3 = ADD32(ctx->r2, -0X4);
    // 0x801CFB70: bltz        $v1, L_801CFB7C
    if (SIGNED(ctx->r3) < 0) {
        // 0x801CFB74: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_801CFB7C;
    }
    // 0x801CFB74: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x801CFB78: addiu       $s0, $v1, 0x1
    ctx->r16 = ADD32(ctx->r3, 0X1);
L_801CFB7C:
    // 0x801CFB7C: sll         $t9, $s0, 5
    ctx->r25 = S32(ctx->r16 << 5);
    // 0x801CFB80: sh          $t9, 0x8E($s1)
    MEM_H(0X8E, ctx->r17) = ctx->r25;
L_801CFB84:
    // 0x801CFB84: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x801CFB88: bnel        $s1, $zero, L_801CF850
    if (ctx->r17 != 0) {
        // 0x801CFB8C: lwc1        $f12, 0x10($s1)
        ctx->f12.u32l = MEM_W(ctx->r17, 0X10);
            goto L_801CF850;
    }
    goto skip_6;
    // 0x801CFB8C: lwc1        $f12, 0x10($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10);
    skip_6:
    // 0x801CFB90: jal         0x80038B98
    // 0x801CFB94: addiu       $a0, $zero, 0x14C
    ctx->r4 = ADD32(0, 0X14C);
    func_80038B98_39798(rdram, ctx);
        goto after_20;
    // 0x801CFB94: addiu       $a0, $zero, 0x14C
    ctx->r4 = ADD32(0, 0X14C);
    after_20:
    // 0x801CFB98: jal         0x80038B98
    // 0x801CFB9C: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    func_80038B98_39798(rdram, ctx);
        goto after_21;
    // 0x801CFB9C: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    after_21:
    // 0x801CFBA0: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
L_801CFBA4:
    // 0x801CFBA4: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x801CFBA8: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x801CFBAC: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x801CFBB0: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x801CFBB4: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x801CFBB8: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x801CFBBC: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x801CFBC0: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x801CFBC4: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x801CFBC8: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x801CFBCC: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x801CFBD0: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x801CFBD4: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x801CFBD8: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x801CFBDC: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x801CFBE0: jr          $ra
    // 0x801CFBE4: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
    TRACE_RETURN()
    return;
    // 0x801CFBE4: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
;}
RECOMP_FUNC void func_801DFE28_64EC78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DFE28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DFE2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DFE30: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801DFE34: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x801DFE38: jal         0x801DFBE0
    // 0x801DFE3C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_801DFBE0_64EA30(rdram, ctx);
        goto after_0;
    // 0x801DFE3C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_0:
    // 0x801DFE40: beq         $v0, $zero, L_801DFE54
    if (ctx->r2 == 0) {
        // 0x801DFE44: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_801DFE54;
    }
    // 0x801DFE44: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801DFE48: lb          $t7, 0x78($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X78);
    // 0x801DFE4C: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x801DFE50: sb          $t8, 0x78($v0)
    MEM_B(0X78, ctx->r2) = ctx->r24;
L_801DFE54:
    // 0x801DFE54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DFE58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DFE5C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x801DFE60: jr          $ra
    // 0x801DFE64: nop

    TRACE_RETURN()
    return;
    // 0x801DFE64: nop

;}
RECOMP_FUNC void func_801CDF74_63CDC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDF74: lw          $v1, 0xEC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XEC);
    // 0x801CDF78: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x801CDF7C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_801CDF80:
    // 0x801CDF80: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801CDF84: sra         $t7, $t6, 5
    ctx->r15 = S32(SIGNED(ctx->r14) >> 5);
    // 0x801CDF88: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x801CDF8C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801CDF90: addu        $a3, $v1, $t9
    ctx->r7 = ADD32(ctx->r3, ctx->r25);
    // 0x801CDF94: lw          $t0, 0x3E0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X3E0);
    // 0x801CDF98: andi        $t2, $t6, 0x1F
    ctx->r10 = ctx->r14 & 0X1F;
    // 0x801CDF9C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CDFA0: sllv        $a0, $t3, $t2
    ctx->r4 = S32(ctx->r11 << (ctx->r10 & 31));
    // 0x801CDFA4: and         $t4, $t0, $a0
    ctx->r12 = ctx->r8 & ctx->r4;
    // 0x801CDFA8: bne         $t4, $zero, L_801CDFD0
    if (ctx->r12 != 0) {
        // 0x801CDFAC: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_801CDFD0;
    }
    // 0x801CDFAC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801CDFB0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801CDFB4: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x801CDFB8: sll         $t6, $t6, 6
    ctx->r14 = S32(ctx->r14 << 6);
    // 0x801CDFBC: or          $t5, $t0, $a0
    ctx->r13 = ctx->r8 | ctx->r4;
    // 0x801CDFC0: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    // 0x801CDFC4: sw          $t5, 0x3E0($a3)
    MEM_W(0X3E0, ctx->r7) = ctx->r13;
    // 0x801CDFC8: jr          $ra
    // 0x801CDFCC: addiu       $v0, $v0, 0x3F0
    ctx->r2 = ADD32(ctx->r2, 0X3F0);
    TRACE_RETURN()
    return;
    // 0x801CDFCC: addiu       $v0, $v0, 0x3F0
    ctx->r2 = ADD32(ctx->r2, 0X3F0);
L_801CDFD0:
    // 0x801CDFD0: bnel        $a1, $zero, L_801CDF80
    if (ctx->r5 != 0) {
        // 0x801CDFD4: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_801CDF80;
    }
    goto skip_0;
    // 0x801CDFD4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    skip_0:
    // 0x801CDFD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801CDFDC: jr          $ra
    // 0x801CDFE0: nop

    TRACE_RETURN()
    return;
    // 0x801CDFE0: nop

;}
RECOMP_FUNC void func_801DCFF4_64BE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DCFF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DCFF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DCFFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DD000: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DD004: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801DD008: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801DD00C: bgezl       $t6, L_801DD034
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DD010: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_801DD034;
    }
    goto skip_0;
    // 0x801DD010: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x801DD014: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801DD018: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801DD01C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DD020: jal         0x800352EC
    // 0x801DD024: addiu       $a0, $a0, -0x2F84
    ctx->r4 = ADD32(ctx->r4, -0X2F84);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DD024: addiu       $a0, $a0, -0x2F84
    ctx->r4 = ADD32(ctx->r4, -0X2F84);
    after_0:
    // 0x801DD028: b           L_801DD070
    // 0x801DD02C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DD070;
    // 0x801DD02C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DD030: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_801DD034:
    // 0x801DD034: jal         0x801CD504
    // 0x801DD038: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801DD038: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801DD03C: beq         $v0, $zero, L_801DD054
    if (ctx->r2 == 0) {
        // 0x801DD040: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801DD054;
    }
    // 0x801DD040: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DD044: jal         0x801DBEB0
    // 0x801DD048: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801DBEB0_64AD00(rdram, ctx);
        goto after_2;
    // 0x801DD048: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801DD04C: b           L_801DD070
    // 0x801DD050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DD070;
    // 0x801DD050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DD054:
    // 0x801DD054: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DD058: jal         0x801CD634
    // 0x801DD05C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801DD05C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x801DD060: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DD064: jal         0x801CD780
    // 0x801DD068: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801DD068: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801DD06C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DD070:
    // 0x801DD070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DD074: jr          $ra
    // 0x801DD078: nop

    TRACE_RETURN()
    return;
    // 0x801DD078: nop

;}
RECOMP_FUNC void func_801CCAC8_63B918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCAC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCACC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CCAD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCAD4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801CCAD8: addiu       $a0, $a0, -0x4400
    ctx->r4 = ADD32(ctx->r4, -0X4400);
    // 0x801CCADC: jal         0x80034DD8
    // 0x801CCAE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_0;
    // 0x801CCAE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801CCAE4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801CCAE8: sw          $t6, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r14;
    // 0x801CCAEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CCAF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CCAF4: jr          $ra
    // 0x801CCAF8: nop

    TRACE_RETURN()
    return;
    // 0x801CCAF8: nop

;}
RECOMP_FUNC void func_801D0A78_63F8C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0A78: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x801D0A7C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D0A80: sb          $t6, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r14;
    // 0x801D0A84: sb          $a2, 0xA2($a0)
    MEM_B(0XA2, ctx->r4) = ctx->r6;
    // 0x801D0A88: lw          $t7, 0x318($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X318);
    // 0x801D0A8C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D0A90: ldc1        $f8, -0x10C0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X10C0);
    // 0x801D0A94: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x801D0A98: nop

    // 0x801D0A9C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D0AA0: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x801D0AA4: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D0AA8: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801D0AAC: nop

    // 0x801D0AB0: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x801D0AB4: bne         $a2, $zero, L_801D0AC0
    if (ctx->r6 != 0) {
        // 0x801D0AB8: nop
    
            goto L_801D0AC0;
    }
    // 0x801D0AB8: nop

    // 0x801D0ABC: break       7
    do_break(2149386940);
L_801D0AC0:
    // 0x801D0AC0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801D0AC4: bne         $a2, $at, L_801D0AD8
    if (ctx->r6 != ctx->r1) {
        // 0x801D0AC8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801D0AD8;
    }
    // 0x801D0AC8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D0ACC: bne         $v0, $at, L_801D0AD8
    if (ctx->r2 != ctx->r1) {
        // 0x801D0AD0: nop
    
            goto L_801D0AD8;
    }
    // 0x801D0AD0: nop

    // 0x801D0AD4: break       6
    do_break(2149386964);
L_801D0AD8:
    // 0x801D0AD8: mflo        $v0
    ctx->r2 = lo;
    // 0x801D0ADC: sw          $v0, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r2;
    // 0x801D0AE0: lhu         $v1, 0x358($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X358);
    // 0x801D0AE4: lw          $t9, 0x318($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X318);
    // 0x801D0AE8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x801D0AEC: sll         $t1, $v1, 20
    ctx->r9 = S32(ctx->r3 << 20);
    // 0x801D0AF0: subu        $t0, $t9, $v0
    ctx->r8 = SUB32(ctx->r25, ctx->r2);
    // 0x801D0AF4: sw          $t0, 0x318($a1)
    MEM_W(0X318, ctx->r5) = ctx->r8;
    // 0x801D0AF8: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x801D0AFC: bgez        $t1, L_801D0B08
    if (SIGNED(ctx->r9) >= 0) {
        // 0x801D0B00: sw          $t1, 0x350($a1)
        MEM_W(0X350, ctx->r5) = ctx->r9;
            goto L_801D0B08;
    }
    // 0x801D0B00: sw          $t1, 0x350($a1)
    MEM_W(0X350, ctx->r5) = ctx->r9;
    // 0x801D0B04: negu        $v1, $t1
    ctx->r3 = SUB32(0, ctx->r9);
L_801D0B08:
    // 0x801D0B08: divu        $zero, $v1, $at
    lo = S32(U32(ctx->r3) / U32(ctx->r1)); hi = S32(U32(ctx->r3) % U32(ctx->r1));
    // 0x801D0B0C: mflo        $t2
    ctx->r10 = lo;
    // 0x801D0B10: sw          $t2, 0x354($a1)
    MEM_W(0X354, ctx->r5) = ctx->r10;
    // 0x801D0B14: jr          $ra
    // 0x801D0B18: nop

    TRACE_RETURN()
    return;
    // 0x801D0B18: nop

;}
RECOMP_FUNC void func_801E2DE4_651C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2DE4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E2DE8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801E2DEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E2DF0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E2DF4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801E2DF8: jal         0x8003524C
    // 0x801E2DFC: addiu       $a0, $a0, 0x2D98
    ctx->r4 = ADD32(ctx->r4, 0X2D98);
    func_8003524C_35E4C(rdram, ctx);
        goto after_0;
    // 0x801E2DFC: addiu       $a0, $a0, 0x2D98
    ctx->r4 = ADD32(ctx->r4, 0X2D98);
    after_0:
    // 0x801E2E00: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x801E2E04: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E2E08: addiu       $t7, $sp, 0x2C
    ctx->r15 = ADD32(ctx->r29, 0X2C);
    // 0x801E2E0C: lw          $v0, 0xEC($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XEC);
    // 0x801E2E10: addiu       $t8, $sp, 0x28
    ctx->r24 = ADD32(ctx->r29, 0X28);
    // 0x801E2E14: lwc1        $f14, 0x364($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X364);
    // 0x801E2E18: lwc1        $f4, 0x370($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X370);
    // 0x801E2E1C: lwc1        $f16, 0x36C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X36C);
    // 0x801E2E20: lwc1        $f6, 0x378($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X378);
    // 0x801E2E24: sub.s       $f2, $f4, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x801E2E28: lwc1        $f18, 0x384($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X384);
    // 0x801E2E2C: addiu       $a0, $v0, 0x364
    ctx->r4 = ADD32(ctx->r2, 0X364);
    // 0x801E2E30: sub.s       $f12, $f6, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x801E2E34: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801E2E38: nop

    // 0x801E2E3C: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801E2E40: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E2E44: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x801E2E48: nop

    // 0x801E2E4C: mul.s       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x801E2E50: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801E2E54: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801E2E58: div.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E2E5C: add.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x801E2E60: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x801E2E64: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801E2E68: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801E2E6C: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x801E2E70: lwc1        $f10, 0x330($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X330);
    // 0x801E2E74: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x801E2E78: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801E2E7C: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801E2E80: ldc1        $f10, -0xBB0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0XBB0);
    // 0x801E2E84: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801E2E88: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x801E2E8C: mul.d       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f4.d, ctx->f10.d);
    // 0x801E2E90: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x801E2E94: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x801E2E98: jal         0x8001CC38
    // 0x801E2E9C: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    func_8001CC38_1D838(rdram, ctx);
        goto after_1;
    // 0x801E2E9C: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x801E2EA0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801E2EA4: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x801E2EA8: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801E2EAC: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x801E2EB0: nop

    // 0x801E2EB4: sh          $t0, 0x3B2($v0)
    MEM_H(0X3B2, ctx->r2) = ctx->r8;
    // 0x801E2EB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E2EBC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E2EC0: jr          $ra
    // 0x801E2EC4: nop

    TRACE_RETURN()
    return;
    // 0x801E2EC4: nop

;}
RECOMP_FUNC void func_801E0228_64F078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0228: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x801E022C: lwc1        $f10, 0x88($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X88);
    // 0x801E0230: lwc1        $f4, 0x5C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x801E0234: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x801E0238: lwc1        $f6, 0x60($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X60);
    // 0x801E023C: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
    // 0x801E0240: lwc1        $f8, 0x64($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X64);
    // 0x801E0244: swc1        $f8, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f8.u32l;
    // 0x801E0248: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801E024C: lhu         $t6, 0x14($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X14);
    // 0x801E0250: sh          $t6, 0x72($a0)
    MEM_H(0X72, ctx->r4) = ctx->r14;
    // 0x801E0254: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x801E0258: sh          $t7, 0x74($a0)
    MEM_H(0X74, ctx->r4) = ctx->r15;
    // 0x801E025C: lhu         $t8, 0x18($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X18);
    // 0x801E0260: sh          $t8, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r24;
    // 0x801E0264: swc1        $f10, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->f10.u32l;
    // 0x801E0268: lwc1        $f16, 0x8C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x801E026C: swc1        $f16, 0x8C($a1)
    MEM_W(0X8C, ctx->r5) = ctx->f16.u32l;
    // 0x801E0270: lwc1        $f18, 0x90($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801E0274: jr          $ra
    // 0x801E0278: swc1        $f18, 0x90($a1)
    MEM_W(0X90, ctx->r5) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x801E0278: swc1        $f18, 0x90($a1)
    MEM_W(0X90, ctx->r5) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_801E0494_64F2E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0494: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E0498: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E049C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801E04A0: bne         $a1, $zero, L_801E04E0
    if (ctx->r5 != 0) {
        // 0x801E04A4: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_801E04E0;
    }
    // 0x801E04A4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801E04A8: lw          $v1, 0xEC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XEC);
    // 0x801E04AC: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E04B0: addiu       $a1, $a1, -0x170
    ctx->r5 = ADD32(ctx->r5, -0X170);
    // 0x801E04B4: lw          $a0, 0xD4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XD4);
    // 0x801E04B8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x801E04BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E04C0: jal         0x80034E08
    // 0x801E04C4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801E04C4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801E04C8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801E04CC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801E04D0: beq         $v0, $zero, L_801E04E0
    if (ctx->r2 == 0) {
        // 0x801E04D4: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_801E04E0;
    }
    // 0x801E04D4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801E04D8: sw          $a3, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r7;
    // 0x801E04DC: sw          $v1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r3;
L_801E04E0:
    // 0x801E04E0: beql        $a1, $zero, L_801E0504
    if (ctx->r5 == 0) {
        // 0x801E04E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E0504;
    }
    goto skip_0;
    // 0x801E04E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E04E8: sw          $a3, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r7;
    // 0x801E04EC: sb          $zero, 0x78($a1)
    MEM_B(0X78, ctx->r5) = 0;
    // 0x801E04F0: lhu         $t6, 0x76($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X76);
    // 0x801E04F4: sh          $t6, 0x70($a1)
    MEM_H(0X70, ctx->r5) = ctx->r14;
    // 0x801E04F8: lbu         $t7, 0x2B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2B);
    // 0x801E04FC: sb          $t7, 0x6A($a1)
    MEM_B(0X6A, ctx->r5) = ctx->r15;
    // 0x801E0500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E0504:
    // 0x801E0504: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E0508: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x801E050C: jr          $ra
    // 0x801E0510: nop

    TRACE_RETURN()
    return;
    // 0x801E0510: nop

;}
RECOMP_FUNC void func_801D5DE0_644C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5DE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D5DE4: lw          $v0, 0xA8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA8);
    // 0x801D5DE8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D5DEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D5DF0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D5DF4: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801D5DF8: lw          $t6, 0xAC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XAC);
    // 0x801D5DFC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D5E00: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x801D5E04: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801D5E08: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D5E0C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D5E10: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D5E14: bgez        $v0, L_801D5E24
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D5E18: swc1        $f18, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
            goto L_801D5E24;
    }
    // 0x801D5E18: swc1        $f18, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
    // 0x801D5E1C: b           L_801D5E24
    // 0x801D5E20: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_801D5E24;
    // 0x801D5E20: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_801D5E24:
    // 0x801D5E24: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D5E28: lui         $at, 0x4089
    ctx->r1 = S32(0X4089 << 16);
    // 0x801D5E2C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D5E30: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D5E34: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D5E38: nop

    // 0x801D5E3C: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801D5E40: nop

    // 0x801D5E44: bc1f        L_801D5E54
    if (!c1cs) {
        // 0x801D5E48: nop
    
            goto L_801D5E54;
    }
    // 0x801D5E48: nop

    // 0x801D5E4C: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D5E50: sh          $t7, 0xA2($a0)
    MEM_H(0XA2, ctx->r4) = ctx->r15;
L_801D5E54:
    // 0x801D5E54: jr          $ra
    // 0x801D5E58: sw          $v0, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801D5E58: sw          $v0, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801D8A10_647860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8A10: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x801D8A14: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x801D8A18: sw          $s5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r21;
    // 0x801D8A1C: sw          $s4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r20;
    // 0x801D8A20: sw          $s3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r19;
    // 0x801D8A24: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    // 0x801D8A28: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x801D8A2C: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x801D8A30: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x801D8A34: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x801D8A38: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x801D8A3C: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x801D8A40: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x801D8A44: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x801D8A48: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x801D8A4C: lw          $s2, 0xEC($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XEC);
    // 0x801D8A50: lw          $s1, 0x5C($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X5C);
    // 0x801D8A54: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D8A58: lw          $t7, 0x31C($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X31C);
    // 0x801D8A5C: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x801D8A60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D8A64: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x801D8A68: lhu         $s5, 0x60($a0)
    ctx->r21 = MEM_HU(ctx->r4, 0X60);
    // 0x801D8A6C: lbu         $s3, 0x313($s2)
    ctx->r19 = MEM_BU(ctx->r18, 0X313);
    // 0x801D8A70: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D8A74: bltz        $v0, L_801D8BAC
    if (SIGNED(ctx->r2) < 0) {
        // 0x801D8A78: div.s       $f28, $f6, $f8
        CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f28.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
            goto L_801D8BAC;
    }
    // 0x801D8A78: div.s       $f28, $f6, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f28.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D8A7C: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801D8A80: lui         $s4, 0x801F
    ctx->r20 = S32(0X801F << 16);
    // 0x801D8A84: addiu       $s4, $s4, -0x6140
    ctx->r20 = ADD32(ctx->r20, -0X6140);
    // 0x801D8A88: c.le.s      $f10, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f10.fl <= ctx->f28.fl;
    // 0x801D8A8C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D8A90: bc1fl       L_801D8BB0
    if (!c1cs) {
        // 0x801D8A94: lw          $t7, 0x80($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X80);
            goto L_801D8BB0;
    }
    goto skip_0;
    // 0x801D8A94: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    skip_0:
    // 0x801D8A98: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801D8A9C: lwc1        $f26, -0xDCC($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0XDCC);
    // 0x801D8AA0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
L_801D8AA4:
    // 0x801D8AA4: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x801D8AA8: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x801D8AAC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801D8AB0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D8AB4: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x801D8AB8: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x801D8ABC: swc1        $f26, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f26.u32l;
    // 0x801D8AC0: swc1        $f26, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f26.u32l;
    // 0x801D8AC4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D8AC8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D8ACC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D8AD0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801D8AD4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x801D8AD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D8ADC: jal         0x80035854
    // 0x801D8AE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801D8AE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801D8AE4: beq         $v0, $zero, L_801D8B88
    if (ctx->r2 == 0) {
        // 0x801D8AE8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801D8B88;
    }
    // 0x801D8AE8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D8AEC: sll         $t0, $s3, 2
    ctx->r8 = S32(ctx->r19 << 2);
    // 0x801D8AF0: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x801D8AF4: sw          $v0, 0x190($t1)
    MEM_W(0X190, ctx->r9) = ctx->r2;
    // 0x801D8AF8: lb          $t3, 0x1($s1)
    ctx->r11 = MEM_B(ctx->r17, 0X1);
    // 0x801D8AFC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x801D8B00: andi        $t2, $s3, 0xFF
    ctx->r10 = ctx->r19 & 0XFF;
    // 0x801D8B04: sb          $t3, 0x9E($v0)
    MEM_B(0X9E, ctx->r2) = ctx->r11;
    // 0x801D8B08: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D8B0C: or          $s3, $t2, $zero
    ctx->r19 = ctx->r10 | 0;
    // 0x801D8B10: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x801D8B14: swc1        $f16, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f16.u32l;
    // 0x801D8B18: lwc1        $f24, 0xC($s1)
    ctx->f24.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801D8B1C: lwc1        $f22, 0x8($s1)
    ctx->f22.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D8B20: jal         0x801CBC94
    // 0x801D8B24: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_1;
    // 0x801D8B24: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_1:
    // 0x801D8B28: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x801D8B2C: swc1        $f24, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f24.u32l;
    // 0x801D8B30: sb          $zero, 0x9F($s0)
    MEM_B(0X9F, ctx->r16) = 0;
    // 0x801D8B34: sb          $zero, 0x9C($s0)
    MEM_B(0X9C, ctx->r16) = 0;
    // 0x801D8B38: swc1        $f22, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f22.u32l;
    // 0x801D8B3C: sb          $zero, 0x9D($s0)
    MEM_B(0X9D, ctx->r16) = 0;
    // 0x801D8B40: sw          $s2, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->r18;
    // 0x801D8B44: jal         0x801CD634
    // 0x801D8B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_2;
    // 0x801D8B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801D8B4C: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x801D8B50: lh          $t4, 0x310($s2)
    ctx->r12 = MEM_H(ctx->r18, 0X310);
    // 0x801D8B54: sh          $t4, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r12;
    // 0x801D8B58: lh          $t5, 0x310($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X310);
    // 0x801D8B5C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801D8B60: sh          $t6, 0x310($s2)
    MEM_H(0X310, ctx->r18) = ctx->r14;
    // 0x801D8B64: swc1        $f20, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f20.u32l;
    // 0x801D8B68: swc1        $f20, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f20.u32l;
    // 0x801D8B6C: swc1        $f20, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f20.u32l;
    // 0x801D8B70: swc1        $f20, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f20.u32l;
    // 0x801D8B74: swc1        $f20, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f20.u32l;
    // 0x801D8B78: swc1        $f20, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f20.u32l;
    // 0x801D8B7C: swc1        $f20, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f20.u32l;
    // 0x801D8B80: swc1        $f20, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f20.u32l;
    // 0x801D8B84: swc1        $f20, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f20.u32l;
L_801D8B88:
    // 0x801D8B88: lb          $v0, 0x10($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X10);
    // 0x801D8B8C: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x801D8B90: bltzl       $v0, L_801D8BB0
    if (SIGNED(ctx->r2) < 0) {
        // 0x801D8B94: lw          $t7, 0x80($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X80);
            goto L_801D8BB0;
    }
    goto skip_1;
    // 0x801D8B94: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    skip_1:
    // 0x801D8B98: lwc1        $f18, 0xC($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801D8B9C: c.le.s      $f18, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f18.fl <= ctx->f28.fl;
    // 0x801D8BA0: nop

    // 0x801D8BA4: bc1tl       L_801D8AA4
    if (c1cs) {
        // 0x801D8BA8: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_801D8AA4;
    }
    goto skip_2;
    // 0x801D8BA8: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    skip_2:
L_801D8BAC:
    // 0x801D8BAC: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
L_801D8BB0:
    // 0x801D8BB0: sw          $s1, 0x5C($t7)
    MEM_W(0X5C, ctx->r15) = ctx->r17;
    // 0x801D8BB4: sb          $s3, 0x313($s2)
    MEM_B(0X313, ctx->r18) = ctx->r19;
    // 0x801D8BB8: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x801D8BBC: lw          $s5, 0x78($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X78);
    // 0x801D8BC0: lw          $s4, 0x74($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X74);
    // 0x801D8BC4: lw          $s3, 0x70($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X70);
    // 0x801D8BC8: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x801D8BCC: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x801D8BD0: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x801D8BD4: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x801D8BD8: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x801D8BDC: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x801D8BE0: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x801D8BE4: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x801D8BE8: jr          $ra
    // 0x801D8BEC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x801D8BEC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_801D255C_6413AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D255C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2564: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801D2568: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801D256C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D2570: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D2574: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D2578: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x801D257C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D2580: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D2584: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x801D2588: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x801D258C: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    // 0x801D2590: bc1fl       L_801D25A4
    if (!c1cs) {
        // 0x801D2594: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D25A4;
    }
    goto skip_0;
    // 0x801D2594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D2598: jal         0x801D2078
    // 0x801D259C: nop

    func_801D2078_640EC8(rdram, ctx);
        goto after_0;
    // 0x801D259C: nop

    after_0:
    // 0x801D25A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D25A4:
    // 0x801D25A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D25A8: jr          $ra
    // 0x801D25AC: nop

    TRACE_RETURN()
    return;
    // 0x801D25AC: nop

;}
RECOMP_FUNC void func_801E35D0_652420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E35D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E35D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801E35D8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x801E35DC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x801E35E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E35E4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801E35E8: lw          $s0, 0xEC($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XEC);
    // 0x801E35EC: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x801E35F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E35F4: addiu       $a1, $s0, 0x110
    ctx->r5 = ADD32(ctx->r16, 0X110);
    // 0x801E35F8: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x801E35FC: beq         $t7, $zero, L_801E3678
    if (ctx->r15 == 0) {
        // 0x801E3600: nop
    
            goto L_801E3678;
    }
    // 0x801E3600: nop

    // 0x801E3604: lw          $s1, 0x8($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X8);
    // 0x801E3608: lbu         $a3, 0x312($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X312);
    // 0x801E360C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3610: lw          $s1, 0xE4($s1)
    ctx->r17 = MEM_W(ctx->r17, 0XE4);
    // 0x801E3614: addiu       $a2, $s0, 0x110
    ctx->r6 = ADD32(ctx->r16, 0X110);
    // 0x801E3618: lbu         $s2, 0x75($s1)
    ctx->r18 = MEM_BU(ctx->r17, 0X75);
    // 0x801E361C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E3620: jal         0x801E36C8
    // 0x801E3624: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_801E36C8_652518(rdram, ctx);
        goto after_0;
    // 0x801E3624: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_0:
    // 0x801E3628: lbu         $a3, 0x313($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X313);
    // 0x801E362C: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x801E3630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3634: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E3638: jal         0x801E36C8
    // 0x801E363C: addiu       $a2, $s0, 0x190
    ctx->r6 = ADD32(ctx->r16, 0X190);
    func_801E36C8_652518(rdram, ctx);
        goto after_1;
    // 0x801E363C: addiu       $a2, $s0, 0x190
    ctx->r6 = ADD32(ctx->r16, 0X190);
    after_1:
    // 0x801E3640: lbu         $a3, 0x314($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X314);
    // 0x801E3644: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x801E3648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E364C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E3650: jal         0x801E3EA8
    // 0x801E3654: addiu       $a2, $s0, 0x290
    ctx->r6 = ADD32(ctx->r16, 0X290);
    func_801E3EA8_652CF8(rdram, ctx);
        goto after_2;
    // 0x801E3654: addiu       $a2, $s0, 0x290
    ctx->r6 = ADD32(ctx->r16, 0X290);
    after_2:
    // 0x801E3658: lbu         $a3, 0x316($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X316);
    // 0x801E365C: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x801E3660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3664: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E3668: jal         0x801E36C8
    // 0x801E366C: addiu       $a2, $s0, 0x2E8
    ctx->r6 = ADD32(ctx->r16, 0X2E8);
    func_801E36C8_652518(rdram, ctx);
        goto after_3;
    // 0x801E366C: addiu       $a2, $s0, 0x2E8
    ctx->r6 = ADD32(ctx->r16, 0X2E8);
    after_3:
    // 0x801E3670: b           L_801E36B4
    // 0x801E3674: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801E36B4;
    // 0x801E3674: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801E3678:
    // 0x801E3678: jal         0x801E462C
    // 0x801E367C: lbu         $a2, 0x312($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X312);
    func_801E462C_65347C(rdram, ctx);
        goto after_4;
    // 0x801E367C: lbu         $a2, 0x312($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X312);
    after_4:
    // 0x801E3680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3684: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x801E3688: jal         0x801E462C
    // 0x801E368C: lbu         $a2, 0x313($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X313);
    func_801E462C_65347C(rdram, ctx);
        goto after_5;
    // 0x801E368C: lbu         $a2, 0x313($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X313);
    after_5:
    // 0x801E3690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3694: addiu       $a1, $s0, 0x290
    ctx->r5 = ADD32(ctx->r16, 0X290);
    // 0x801E3698: jal         0x801E462C
    // 0x801E369C: lbu         $a2, 0x314($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X314);
    func_801E462C_65347C(rdram, ctx);
        goto after_6;
    // 0x801E369C: lbu         $a2, 0x314($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X314);
    after_6:
    // 0x801E36A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E36A4: addiu       $a1, $s0, 0x2E8
    ctx->r5 = ADD32(ctx->r16, 0X2E8);
    // 0x801E36A8: jal         0x801E462C
    // 0x801E36AC: lbu         $a2, 0x316($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X316);
    func_801E462C_65347C(rdram, ctx);
        goto after_7;
    // 0x801E36AC: lbu         $a2, 0x316($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X316);
    after_7:
    // 0x801E36B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801E36B4:
    // 0x801E36B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E36B8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x801E36BC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x801E36C0: jr          $ra
    // 0x801E36C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801E36C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801D1C78_640AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1C78: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D1C7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D1C80: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801D1C84: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801D1C88: lw          $t5, 0xEC($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XEC);
    // 0x801D1C8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D1C90: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801D1C94: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x801D1C98: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x801D1C9C: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801D1CA0: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x801D1CA4: beq         $t7, $zero, L_801D1CD8
    if (ctx->r15 == 0) {
        // 0x801D1CA8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801D1CD8;
    }
    // 0x801D1CA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D1CAC: lbu         $t8, 0x3($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0X3);
    // 0x801D1CB0: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801D1CB4: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x801D1CB8: andi        $t6, $t8, 0xFF
    ctx->r14 = ctx->r24 & 0XFF;
    // 0x801D1CBC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801D1CC0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801D1CC4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801D1CC8: sb          $t8, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r24;
    // 0x801D1CCC: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x801D1CD0: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x801D1CD4: lhu         $t1, -0x4F84($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X4F84);
L_801D1CD8:
    // 0x801D1CD8: lbu         $a3, 0x74($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X74);
    // 0x801D1CDC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x801D1CE0: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x801D1CE4: sra         $t9, $a3, 2
    ctx->r25 = S32(SIGNED(ctx->r7) >> 2);
    // 0x801D1CE8: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x801D1CEC: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x801D1CF0: andi        $t9, $a3, 0x3
    ctx->r25 = ctx->r7 & 0X3;
    // 0x801D1CF4: addu        $t7, $t8, $t9
    ctx->r15 = ADD32(ctx->r24, ctx->r25);
    // 0x801D1CF8: sb          $t1, 0x7C($t7)
    MEM_B(0X7C, ctx->r15) = ctx->r9;
    // 0x801D1CFC: lw          $t3, 0xE8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XE8);
    // 0x801D1D00: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    // 0x801D1D04: andi        $t9, $t8, 0x1F
    ctx->r25 = ctx->r24 & 0X1F;
    // 0x801D1D08: sb          $t9, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r25;
    // 0x801D1D0C: lbu         $t4, 0xC6($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XC6);
    // 0x801D1D10: lw          $t2, 0xE0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XE0);
    // 0x801D1D14: and         $t6, $t4, $at
    ctx->r14 = ctx->r12 & ctx->r1;
    // 0x801D1D18: sltu        $t7, $zero, $t6
    ctx->r15 = 0 < ctx->r14 ? 1 : 0;
    // 0x801D1D1C: andi        $t4, $t7, 0xFF
    ctx->r12 = ctx->r15 & 0XFF;
    // 0x801D1D20: sb          $t4, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r12;
    // 0x801D1D24: lb          $v0, 0xC5($t3)
    ctx->r2 = MEM_B(ctx->r11, 0XC5);
    // 0x801D1D28: sb          $t4, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r12;
    // 0x801D1D2C: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x801D1D30: bltzl       $v0, L_801D2008
    if (SIGNED(ctx->r2) < 0) {
        // 0x801D1D34: lbu         $t4, 0x60($sp)
        ctx->r12 = MEM_BU(ctx->r29, 0X60);
            goto L_801D2008;
    }
    goto skip_0;
    // 0x801D1D34: lbu         $t4, 0x60($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X60);
    skip_0:
    // 0x801D1D38: lb          $t9, 0xD8($s0)
    ctx->r25 = MEM_B(ctx->r16, 0XD8);
    // 0x801D1D3C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801D1D40: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801D1D44: beq         $v0, $t9, L_801D1D58
    if (ctx->r2 == ctx->r25) {
        // 0x801D1D48: addu        $t7, $t7, $t6
        ctx->r15 = ADD32(ctx->r15, ctx->r14);
            goto L_801D1D58;
    }
    // 0x801D1D48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801D1D4C: sb          $v0, 0xD8($s0)
    MEM_B(0XD8, ctx->r16) = ctx->r2;
    // 0x801D1D50: lw          $t7, -0x76D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X76D8);
    // 0x801D1D54: sw          $t7, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r15;
L_801D1D58:
    // 0x801D1D58: lwc1        $f4, 0xC0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0XC0);
    // 0x801D1D5C: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x801D1D60: addiu       $a2, $a2, -0x7000
    ctx->r6 = ADD32(ctx->r6, -0X7000);
    // 0x801D1D64: swc1        $f4, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f4.u32l;
    // 0x801D1D68: lw          $a1, 0x18($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X18);
    // 0x801D1D6C: sw          $t5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r13;
    // 0x801D1D70: sb          $t4, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r12;
    // 0x801D1D74: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x801D1D78: sh          $t1, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r9;
    // 0x801D1D7C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x801D1D80: jal         0x8001B918
    // 0x801D1D84: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_8001B918_1C518(rdram, ctx);
        goto after_0;
    // 0x801D1D84: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x801D1D88: lh          $a0, 0x7A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X7A);
    // 0x801D1D8C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x801D1D90: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x801D1D94: lhu         $t1, 0x5C($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X5C);
    // 0x801D1D98: beq         $a0, $zero, L_801D1DE4
    if (ctx->r4 == 0) {
        // 0x801D1D9C: lhu         $v1, 0x78($s0)
        ctx->r3 = MEM_HU(ctx->r16, 0X78);
            goto L_801D1DE4;
    }
    // 0x801D1D9C: lhu         $v1, 0x78($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X78);
    // 0x801D1DA0: addu        $t8, $v1, $a0
    ctx->r24 = ADD32(ctx->r3, ctx->r4);
    // 0x801D1DA4: andi        $v1, $t8, 0x3FF
    ctx->r3 = ctx->r24 & 0X3FF;
    // 0x801D1DA8: bne         $v1, $zero, L_801D1DB4
    if (ctx->r3 != 0) {
        // 0x801D1DAC: sh          $v1, 0x78($s0)
        MEM_H(0X78, ctx->r16) = ctx->r3;
            goto L_801D1DB4;
    }
    // 0x801D1DAC: sh          $v1, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r3;
    // 0x801D1DB0: sh          $zero, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = 0;
L_801D1DB4:
    // 0x801D1DB4: addiu       $at, $zero, 0x280
    ctx->r1 = ADD32(0, 0X280);
    // 0x801D1DB8: bne         $v1, $at, L_801D1DE4
    if (ctx->r3 != ctx->r1) {
        // 0x801D1DBC: addiu       $a0, $zero, 0x143
        ctx->r4 = ADD32(0, 0X143);
            goto L_801D1DE4;
    }
    // 0x801D1DBC: addiu       $a0, $zero, 0x143
    ctx->r4 = ADD32(0, 0X143);
    // 0x801D1DC0: sh          $v1, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r3;
    // 0x801D1DC4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x801D1DC8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x801D1DCC: jal         0x80038B98
    // 0x801D1DD0: sh          $t1, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r9;
    func_80038B98_39798(rdram, ctx);
        goto after_1;
    // 0x801D1DD0: sh          $t1, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r9;
    after_1:
    // 0x801D1DD4: lhu         $v1, 0x5E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X5E);
    // 0x801D1DD8: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x801D1DDC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x801D1DE0: lhu         $t1, 0x5C($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X5C);
L_801D1DE4:
    // 0x801D1DE4: bne         $v1, $zero, L_801D1EF0
    if (ctx->r3 != 0) {
        // 0x801D1DE8: sw          $v1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r3;
            goto L_801D1EF0;
    }
    // 0x801D1DE8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x801D1DEC: andi        $t6, $t0, 0x2000
    ctx->r14 = ctx->r8 & 0X2000;
    // 0x801D1DF0: bne         $t6, $zero, L_801D1EF0
    if (ctx->r14 != 0) {
        // 0x801D1DF4: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_801D1EF0;
    }
    // 0x801D1DF4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801D1DF8: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801D1DFC: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x801D1E00: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x801D1E04: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x801D1E08: lhu         $t8, 0x2DF4($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2DF4);
    // 0x801D1E0C: lbu         $t9, 0x59($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X59);
    // 0x801D1E10: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801D1E14: beq         $t8, $at, L_801D1E3C
    if (ctx->r24 == ctx->r1) {
        // 0x801D1E18: sll         $t6, $t9, 2
        ctx->r14 = S32(ctx->r25 << 2);
            goto L_801D1E3C;
    }
    // 0x801D1E18: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x801D1E1C: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x801D1E20: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x801D1E24: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x801D1E28: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x801D1E2C: lhu         $t9, 0x307A($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X307A);
    // 0x801D1E30: andi        $t6, $t9, 0x10
    ctx->r14 = ctx->r25 & 0X10;
    // 0x801D1E34: beql        $t6, $zero, L_801D1EF0
    if (ctx->r14 == 0) {
        // 0x801D1E38: sh          $zero, 0x76($s0)
        MEM_H(0X76, ctx->r16) = 0;
            goto L_801D1EF0;
    }
    goto skip_1;
    // 0x801D1E38: sh          $zero, 0x76($s0)
    MEM_H(0X76, ctx->r16) = 0;
    skip_1:
L_801D1E3C:
    // 0x801D1E3C: lh          $v0, 0x76($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X76);
    // 0x801D1E40: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x801D1E44: andi        $t9, $t1, 0x3
    ctx->r25 = ctx->r9 & 0X3;
    // 0x801D1E48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801D1E4C: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x801D1E50: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x801D1E54: slti        $at, $v0, 0x11
    ctx->r1 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x801D1E58: bne         $at, $zero, L_801D1E64
    if (ctx->r1 != 0) {
        // 0x801D1E5C: or          $t1, $t9, $zero
        ctx->r9 = ctx->r25 | 0;
            goto L_801D1E64;
    }
    // 0x801D1E5C: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
    // 0x801D1E60: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_801D1E64:
    // 0x801D1E64: beq         $t9, $zero, L_801D1EF0
    if (ctx->r25 == 0) {
        // 0x801D1E68: sh          $v0, 0x76($s0)
        MEM_H(0X76, ctx->r16) = ctx->r2;
            goto L_801D1EF0;
    }
    // 0x801D1E68: sh          $v0, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r2;
    // 0x801D1E6C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x801D1E70: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x801D1E74: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801D1E78: blez        $v0, L_801D1EF0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x801D1E7C: or          $t0, $t9, $zero
        ctx->r8 = ctx->r25 | 0;
            goto L_801D1EF0;
    }
    // 0x801D1E7C: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x801D1E80: addiu       $t8, $a3, -0x1
    ctx->r24 = ADD32(ctx->r7, -0X1);
L_801D1E84:
    // 0x801D1E84: andi        $a3, $t8, 0x1F
    ctx->r7 = ctx->r24 & 0X1F;
    // 0x801D1E88: sra         $t6, $a3, 2
    ctx->r14 = S32(SIGNED(ctx->r7) >> 2);
    // 0x801D1E8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801D1E90: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x801D1E94: andi        $t9, $a3, 0x3
    ctx->r25 = ctx->r7 & 0X3;
    // 0x801D1E98: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x801D1E9C: lbu         $t7, 0x7C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7C);
    // 0x801D1EA0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x801D1EA4: and         $t8, $t7, $t0
    ctx->r24 = ctx->r15 & ctx->r8;
    // 0x801D1EA8: beql        $t8, $zero, L_801D1ED8
    if (ctx->r24 == 0) {
        // 0x801D1EAC: sll         $t8, $v0, 16
        ctx->r24 = S32(ctx->r2 << 16);
            goto L_801D1ED8;
    }
    goto skip_2;
    // 0x801D1EAC: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    skip_2:
    // 0x801D1EB0: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x801D1EB4: andi        $t9, $t1, 0x1
    ctx->r25 = ctx->r9 & 0X1;
    // 0x801D1EB8: sltiu       $t6, $t9, 0x1
    ctx->r14 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x801D1EBC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x801D1EC0: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x801D1EC4: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x801D1EC8: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
    // 0x801D1ECC: b           L_801D1EF0
    // 0x801D1ED0: sh          $t7, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r15;
        goto L_801D1EF0;
    // 0x801D1ED0: sh          $t7, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r15;
    // 0x801D1ED4: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
L_801D1ED8:
    // 0x801D1ED8: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801D1EDC: bgtzl       $v0, L_801D1E84
    if (SIGNED(ctx->r2) > 0) {
        // 0x801D1EE0: addiu       $t8, $a3, -0x1
        ctx->r24 = ADD32(ctx->r7, -0X1);
            goto L_801D1E84;
    }
    goto skip_3;
    // 0x801D1EE0: addiu       $t8, $a3, -0x1
    ctx->r24 = ADD32(ctx->r7, -0X1);
    skip_3:
    // 0x801D1EE4: b           L_801D1EF4
    // 0x801D1EE8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
        goto L_801D1EF4;
    // 0x801D1EE8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D1EEC: sh          $zero, 0x76($s0)
    MEM_H(0X76, ctx->r16) = 0;
L_801D1EF0:
    // 0x801D1EF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_801D1EF4:
    // 0x801D1EF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D1EF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D1EFC: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x801D1F00: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x801D1F04: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x801D1F08: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801D1F0C: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801D1F10: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801D1F14: addiu       $t6, $sp, 0x44
    ctx->r14 = ADD32(ctx->r29, 0X44);
    // 0x801D1F18: addiu       $t7, $sp, 0x48
    ctx->r15 = ADD32(ctx->r29, 0X48);
    // 0x801D1F1C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D1F20: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D1F24: sh          $t1, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r9;
    // 0x801D1F28: jal         0x80033898
    // 0x801D1F2C: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    func_80033898_34498(rdram, ctx);
        goto after_2;
    // 0x801D1F2C: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x801D1F30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D1F34: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D1F38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D1F3C: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x801D1F40: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x801D1F44: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x801D1F48: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801D1F4C: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801D1F50: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801D1F54: addiu       $t8, $sp, 0x50
    ctx->r24 = ADD32(ctx->r29, 0X50);
    // 0x801D1F58: addiu       $t9, $sp, 0x54
    ctx->r25 = ADD32(ctx->r29, 0X54);
    // 0x801D1F5C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801D1F60: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D1F64: jal         0x80033898
    // 0x801D1F68: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    func_80033898_34498(rdram, ctx);
        goto after_3;
    // 0x801D1F68: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    after_3:
    // 0x801D1F6C: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801D1F70: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D1F74: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801D1F78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D1F7C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D1F80: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801D1F84: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x801D1F88: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x801D1F8C: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801D1F90: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x801D1F94: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D1F98: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x801D1F9C: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801D1FA0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x801D1FA4: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D1FA8: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x801D1FAC: jal         0x8001D14C
    // 0x801D1FB0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8001D14C_1DD4C(rdram, ctx);
        goto after_4;
    // 0x801D1FB0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x801D1FB4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x801D1FB8: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x801D1FBC: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x801D1FC0: addu        $a3, $t6, $v0
    ctx->r7 = ADD32(ctx->r14, ctx->r2);
    // 0x801D1FC4: or          $t6, $a3, $zero
    ctx->r14 = ctx->r7 | 0;
    // 0x801D1FC8: andi        $a3, $t6, 0x3FF
    ctx->r7 = ctx->r14 & 0X3FF;
    // 0x801D1FCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1FD0: jal         0x8001DB04
    // 0x801D1FD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_5;
    // 0x801D1FD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x801D1FD8: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x801D1FDC: lhu         $t1, 0x5C($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X5C);
    // 0x801D1FE0: lh          $t7, 0x0($t9)
    ctx->r15 = MEM_H(ctx->r25, 0X0);
    // 0x801D1FE4: andi        $t8, $t1, 0x2000
    ctx->r24 = ctx->r9 & 0X2000;
    // 0x801D1FE8: andi        $t6, $t7, 0x2000
    ctx->r14 = ctx->r15 & 0X2000;
    // 0x801D1FEC: bnel        $t6, $zero, L_801D2008
    if (ctx->r14 != 0) {
        // 0x801D1FF0: lbu         $t4, 0x60($sp)
        ctx->r12 = MEM_BU(ctx->r29, 0X60);
            goto L_801D2008;
    }
    goto skip_4;
    // 0x801D1FF0: lbu         $t4, 0x60($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X60);
    skip_4:
    // 0x801D1FF4: beq         $t8, $zero, L_801D2004
    if (ctx->r24 == 0) {
        // 0x801D1FF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D2004;
    }
    // 0x801D1FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D1FFC: jal         0x801D25B0
    // 0x801D2000: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D25B0_641400(rdram, ctx);
        goto after_6;
    // 0x801D2000: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
L_801D2004:
    // 0x801D2004: lbu         $t4, 0x60($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X60);
L_801D2008:
    // 0x801D2008: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x801D200C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801D2010: bnel        $t4, $zero, L_801D2024
    if (ctx->r12 != 0) {
        // 0x801D2014: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801D2024;
    }
    goto skip_5;
    // 0x801D2014: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x801D2018: jal         0x801CD780
    // 0x801D201C: lwc1        $f12, 0x64($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_7;
    // 0x801D201C: lwc1        $f12, 0x64($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X64);
    after_7:
    // 0x801D2020: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D2024:
    // 0x801D2024: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801D2028: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801D202C: jr          $ra
    // 0x801D2030: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D2030: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801DBF60_64ADB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DBF60: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DBF64: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DBF68: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801DBF6C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801DBF70: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DBF74: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801DBF78: addiu       $t6, $t6, 0x4F0
    ctx->r14 = ADD32(ctx->r14, 0X4F0);
    // 0x801DBF7C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DBF80: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801DBF84: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801DBF88: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801DBF8C: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x801DBF90: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DBF94: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801DBF98: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801DBF9C: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801DBFA0: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x801DBFA4: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801DBFA8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x801DBFAC: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    // 0x801DBFB0: lui         $a3, 0x4352
    ctx->r7 = S32(0X4352 << 16);
    // 0x801DBFB4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x801DBFB8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DBFBC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DBFC0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DBFC4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DBFC8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DBFCC: jal         0x801E8378
    // 0x801DBFD0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801DBFD0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801DBFD4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DBFD8: jal         0x800352EC
    // 0x801DBFDC: addiu       $a0, $a0, -0x400C
    ctx->r4 = ADD32(ctx->r4, -0X400C);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801DBFDC: addiu       $a0, $a0, -0x400C
    ctx->r4 = ADD32(ctx->r4, -0X400C);
    after_1:
    // 0x801DBFE0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DBFE4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801DBFE8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801DBFEC: jr          $ra
    // 0x801DBFF0: nop

    TRACE_RETURN()
    return;
    // 0x801DBFF0: nop

;}
RECOMP_FUNC void func_801DF9EC_64E83C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF9EC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801DF9F0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801DF9F4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801DF9F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801DF9FC: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x801DFA00: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801DFA04: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801DFA08: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801DFA0C: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x801DFA10: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DFA14: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801DFA18: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DFA1C: ldc1        $f16, -0xC80($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XC80);
    // 0x801DFA20: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801DFA24: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801DFA28: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x801DFA2C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801DFA30: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x801DFA34: lw          $v1, 0xEC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XEC);
    // 0x801DFA38: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DFA3C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801DFA40: lw          $a0, 0xD4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XD4);
    // 0x801DFA44: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801DFA48: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801DFA4C: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x801DFA50: addiu       $t1, $zero, 0x4A9
    ctx->r9 = ADD32(0, 0X4A9);
    // 0x801DFA54: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x801DFA58: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x801DFA5C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801DFA60: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801DFA64: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801DFA68: addiu       $a1, $a1, -0xA00
    ctx->r5 = ADD32(ctx->r5, -0XA00);
    // 0x801DFA6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801DFA70: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    // 0x801DFA74: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801DFA78: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801DFA7C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x801DFA80: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x801DFA84: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x801DFA88: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x801DFA8C: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x801DFA90: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DFA94: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801DFA98: jal         0x800358E8
    // 0x801DFA9C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801DFA9C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801DFAA0: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x801DFAA4: beq         $v0, $zero, L_801DFBC8
    if (ctx->r2 == 0) {
        // 0x801DFAA8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801DFBC8;
    }
    // 0x801DFAA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801DFAAC: sw          $v1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r3;
    // 0x801DFAB0: jal         0x801CDF74
    // 0x801DFAB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_801CDF74_63CDC4(rdram, ctx);
        goto after_1;
    // 0x801DFAB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x801DFAB8: bne         $v0, $zero, L_801DFAD0
    if (ctx->r2 != 0) {
        // 0x801DFABC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801DFAD0;
    }
    // 0x801DFABC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801DFAC0: jal         0x80034EF8
    // 0x801DFAC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_2;
    // 0x801DFAC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DFAC8: b           L_801DFBCC
    // 0x801DFACC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DFBCC;
    // 0x801DFACC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DFAD0:
    // 0x801DFAD0: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x801DFAD4: sb          $zero, 0x78($s0)
    MEM_B(0X78, ctx->r16) = 0;
    // 0x801DFAD8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DFADC: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
    // 0x801DFAE0: lhu         $t2, 0x76($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X76);
    // 0x801DFAE4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x801DFAE8: or          $t4, $v1, $at
    ctx->r12 = ctx->r3 | ctx->r1;
    // 0x801DFAEC: sh          $t2, 0x70($s0)
    MEM_H(0X70, ctx->r16) = ctx->r10;
    // 0x801DFAF0: lbu         $t3, 0x67($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X67);
    // 0x801DFAF4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801DFAF8: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x801DFAFC: sb          $t3, 0x6A($s0)
    MEM_B(0X6A, ctx->r16) = ctx->r11;
    // 0x801DFB00: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801DFB04: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801DFB08: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801DFB0C: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    // 0x801DFB10: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801DFB14: addiu       $t7, $t7, -0x17B0
    ctx->r15 = ADD32(ctx->r15, -0X17B0);
    // 0x801DFB18: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x801DFB1C: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    // 0x801DFB20: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801DFB24: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x801DFB28: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x801DFB2C: swc1        $f8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f8.u32l;
    // 0x801DFB30: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801DFB34: addiu       $v1, $t0, 0x8
    ctx->r3 = ADD32(ctx->r8, 0X8);
    // 0x801DFB38: lui         $t2, 0xB800
    ctx->r10 = S32(0XB800 << 16);
    // 0x801DFB3C: swc1        $f10, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f10.u32l;
    // 0x801DFB40: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
    // 0x801DFB44: addiu       $t4, $zero, 0x4A9
    ctx->r12 = ADD32(0, 0X4A9);
    // 0x801DFB48: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801DFB4C: swc1        $f16, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f16.u32l;
    // 0x801DFB50: lwc1        $f18, 0x88($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801DFB54: addiu       $a1, $a1, -0x2160
    ctx->r5 = ADD32(ctx->r5, -0X2160);
    // 0x801DFB58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DFB5C: swc1        $f18, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f18.u32l;
    // 0x801DFB60: sw          $t5, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r13;
    // 0x801DFB64: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801DFB68: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801DFB6C: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x801DFB70: lbu         $t1, 0x73($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X73);
    // 0x801DFB74: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x801DFB78: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x801DFB7C: sw          $t1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r9;
    // 0x801DFB80: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x801DFB84: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x801DFB88: lbu         $t3, 0x6F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X6F);
    // 0x801DFB8C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801DFB90: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801DFB94: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801DFB98: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801DFB9C: jal         0x801CD7C0
    // 0x801DFBA0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_801CD7C0_63C610(rdram, ctx);
        goto after_3;
    // 0x801DFBA0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_3:
    // 0x801DFBA4: lbu         $t6, 0x67($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X67);
    // 0x801DFBA8: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801DFBAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFBB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801DFBB4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x801DFBB8: lw          $t9, -0x2120($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2120);
    // 0x801DFBBC: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x801DFBC0: jalr        $t9
    // 0x801DFBC4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x801DFBC4: nop

    after_4:
L_801DFBC8:
    // 0x801DFBC8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801DFBCC:
    // 0x801DFBCC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801DFBD0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801DFBD4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x801DFBD8: jr          $ra
    // 0x801DFBDC: nop

    TRACE_RETURN()
    return;
    // 0x801DFBDC: nop

;}
RECOMP_FUNC void func_801DAC20_649A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAC20: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801DAC24: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801DAC28: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801DAC2C: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801DAC30: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801DAC34: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DAC38: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DAC3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DAC40: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DAC44: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801DAC48: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DAC4C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DAC50: lui         $at, 0x4045
    ctx->r1 = S32(0X4045 << 16);
    // 0x801DAC54: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DAC58: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DAC5C: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801DAC60: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801DAC64: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801DAC68: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801DAC6C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DAC70: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DAC74: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DAC78: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801DAC7C: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801DAC80: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DAC84: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801DAC88: nop

    // 0x801DAC8C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801DAC90: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DAC94: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801DAC98: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801DAC9C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DACA0: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801DACA4: nop

    // 0x801DACA8: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801DACAC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DACB0: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801DACB4: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801DACB8: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801DACBC: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801DACC0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DACC4: jal         0x80033898
    // 0x801DACC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DACC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801DACCC: addiu       $t8, $zero, 0x63
    ctx->r24 = ADD32(0, 0X63);
    // 0x801DACD0: addiu       $t9, $zero, 0x43
    ctx->r25 = ADD32(0, 0X43);
    // 0x801DACD4: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x801DACD8: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801DACDC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801DACE0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801DACE4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801DACE8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801DACEC: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801DACF0: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DACF4: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DACF8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801DACFC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DAD00: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DAD04: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x801DAD08: addiu       $t3, $zero, 0x300
    ctx->r11 = ADD32(0, 0X300);
    // 0x801DAD0C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801DAD10: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801DAD14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DAD18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DAD1C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DAD20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DAD24: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801DAD28: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801DAD2C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801DAD30: lwc1        $f18, 0x64($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801DAD34: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x801DAD38: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801DAD3C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DAD40: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DAD44: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801DAD48: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801DAD4C: jal         0x801CDA88
    // 0x801DAD50: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801DAD50: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801DAD54: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x801DAD58: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DAD5C: lwc1        $f10, 0x5C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801DAD60: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DAD64: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DAD68: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DAD6C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DAD70: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DAD74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DAD78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DAD7C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801DAD80: lwc1        $f4, 0x60($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801DAD84: lui         $a2, 0x42FF
    ctx->r6 = S32(0X42FF << 16);
    // 0x801DAD88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801DAD8C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801DAD90: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801DAD94: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801DAD98: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DAD9C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DADA0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DADA4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DADA8: jal         0x801DF9EC
    // 0x801DADAC: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801DADAC: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801DADB0: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801DADB4: lhu         $t5, 0xE2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DADB8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801DADBC: bnel        $t6, $zero, L_801DAE14
    if (ctx->r14 != 0) {
        // 0x801DADC0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801DAE14;
    }
    goto skip_0;
    // 0x801DADC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801DADC4: lhu         $t7, 0xE4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE4);
    // 0x801DADC8: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801DADCC: bne         $t7, $at, L_801DADEC
    if (ctx->r15 != ctx->r1) {
        // 0x801DADD0: nop
    
            goto L_801DADEC;
    }
    // 0x801DADD0: nop

    // 0x801DADD4: jal         0x80038B98
    // 0x801DADD8: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801DADD8: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801DADDC: lw          $t9, 0xEC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XEC);
    // 0x801DADE0: addiu       $t8, $zero, 0x299
    ctx->r24 = ADD32(0, 0X299);
    // 0x801DADE4: b           L_801DAE00
    // 0x801DADE8: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
        goto L_801DAE00;
    // 0x801DADE8: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
L_801DADEC:
    // 0x801DADEC: jal         0x80038B98
    // 0x801DADF0: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801DADF0: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801DADF4: lw          $t1, 0xEC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XEC);
    // 0x801DADF8: addiu       $t0, $zero, 0x298
    ctx->r8 = ADD32(0, 0X298);
    // 0x801DADFC: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_801DAE00:
    // 0x801DAE00: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801DAE04: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DAE08: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x801DAE0C: sh          $t3, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r11;
    // 0x801DAE10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801DAE14:
    // 0x801DAE14: jal         0x801E8850
    // 0x801DAE18: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801E8850_6576A0(rdram, ctx);
        goto after_5;
    // 0x801DAE18: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x801DAE1C: jal         0x801D8BF0
    // 0x801DAE20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_6;
    // 0x801DAE20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801DAE24: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801DAE28: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801DAE2C: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801DAE30: jr          $ra
    // 0x801DAE34: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801DAE34: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801D43A4_6431F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D43A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D43A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D43AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D43B0: lbu         $t6, 0x9D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X9D);
    // 0x801D43B4: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D43B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801D43BC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x801D43C0: lw          $t9, -0x7514($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7514);
    // 0x801D43C4: jalr        $t9
    // 0x801D43C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801D43C8: nop

    after_0:
    // 0x801D43CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D43D0: lui         $at, 0x403C
    ctx->r1 = S32(0X403C << 16);
    // 0x801D43D4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D43D8: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D43DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D43E0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D43E4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D43E8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D43EC: swc1        $f16, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f16.u32l;
    // 0x801D43F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D43F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D43F8: jr          $ra
    // 0x801D43FC: nop

    TRACE_RETURN()
    return;
    // 0x801D43FC: nop

;}
RECOMP_FUNC void func_801D24DC_64132C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D24DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D24E0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D24E4: lwc1        $f0, -0x1008($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1008);
    // 0x801D24E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D24EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D24F0: sb          $t6, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r14;
    // 0x801D24F4: sb          $zero, 0x74($a0)
    MEM_B(0X74, ctx->r4) = 0;
    // 0x801D24F8: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x801D24FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D2500: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x801D2504: addiu       $t7, $t7, 0x224
    ctx->r15 = ADD32(ctx->r15, 0X224);
    // 0x801D2508: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801D250C: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D2510: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801D2514: addiu       $t9, $t9, -0x18A0
    ctx->r25 = ADD32(ctx->r25, -0X18A0);
    // 0x801D2518: addiu       $t0, $zero, 0x4AA
    ctx->r8 = ADD32(0, 0X4AA);
    // 0x801D251C: sw          $t8, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r24;
    // 0x801D2520: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x801D2524: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x801D2528: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x801D252C: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x801D2530: sh          $t0, 0x34($a1)
    MEM_H(0X34, ctx->r5) = ctx->r8;
    // 0x801D2534: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801D2538: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x801D253C: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x801D2540: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x801D2544: jal         0x80014218
    // 0x801D2548: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    func_80014218_14E18(rdram, ctx);
        goto after_0;
    // 0x801D2548: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    after_0:
    // 0x801D254C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D2554: jr          $ra
    // 0x801D2558: nop

    TRACE_RETURN()
    return;
    // 0x801D2558: nop

;}
RECOMP_FUNC void func_801DF5F0_64E440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF5F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801DF5F4: jr          $ra
    // 0x801DF5F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801DF5F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801D0A44_63F894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0A44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D0A48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D0A4C: lbu         $v0, 0x9D($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9D);
    // 0x801D0A50: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D0A54: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801D0A58: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x801D0A5C: lw          $t9, -0x75C4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X75C4);
    // 0x801D0A60: jalr        $t9
    // 0x801D0A64: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801D0A64: nop

    after_0:
    // 0x801D0A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D0A6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D0A70: jr          $ra
    // 0x801D0A74: nop

    TRACE_RETURN()
    return;
    // 0x801D0A74: nop

;}
RECOMP_FUNC void func_801DB860_64A6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB860: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DB864: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801DB868: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DB86C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801DB870: addiu       $t6, $t6, 0x1B00
    ctx->r14 = ADD32(ctx->r14, 0X1B00);
    // 0x801DB874: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DB878: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801DB87C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801DB880: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801DB884: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801DB888: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801DB88C: lbu         $t9, 0x9E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X9E);
    // 0x801DB890: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DB894: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x801DB898: beq         $t9, $zero, L_801DB8F0
    if (ctx->r25 == 0) {
        // 0x801DB89C: lui         $a2, 0x4220
        ctx->r6 = S32(0X4220 << 16);
            goto L_801DB8F0;
    }
    // 0x801DB89C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801DB8A0: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x801DB8A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB8A8: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801DB8AC: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    // 0x801DB8B0: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801DB8B4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801DB8B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DB8BC: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    // 0x801DB8C0: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x801DB8C4: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x801DB8C8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DB8CC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DB8D0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DB8D4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DB8D8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DB8DC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DB8E0: jal         0x801E8378
    // 0x801DB8E4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801DB8E4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801DB8E8: b           L_801DB930
    // 0x801DB8EC: nop

        goto L_801DB930;
    // 0x801DB8EC: nop

L_801DB8F0:
    // 0x801DB8F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB8F4: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801DB8F8: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x801DB8FC: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801DB900: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801DB904: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DB908: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    // 0x801DB90C: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x801DB910: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DB914: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DB918: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DB91C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DB920: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DB924: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DB928: jal         0x801E8378
    // 0x801DB92C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_1;
    // 0x801DB92C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
L_801DB930:
    // 0x801DB930: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DB934: jal         0x800352EC
    // 0x801DB938: addiu       $a0, $a0, -0x46B0
    ctx->r4 = ADD32(ctx->r4, -0X46B0);
    func_800352EC_35EEC(rdram, ctx);
        goto after_2;
    // 0x801DB938: addiu       $a0, $a0, -0x46B0
    ctx->r4 = ADD32(ctx->r4, -0X46B0);
    after_2:
    // 0x801DB93C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DB940: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801DB944: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801DB948: jr          $ra
    // 0x801DB94C: nop

    TRACE_RETURN()
    return;
    // 0x801DB94C: nop

;}
RECOMP_FUNC void func_801D4EB8_643D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4EB8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x801D4EBC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801D4EC0: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x801D4EC4: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x801D4EC8: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D4ECC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D4ED0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801D4ED4: bgez        $t6, L_801D4EF8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D4ED8: lui         $at, 0xC030
        ctx->r1 = S32(0XC030 << 16);
            goto L_801D4EF8;
    }
    // 0x801D4ED8: lui         $at, 0xC030
    ctx->r1 = S32(0XC030 << 16);
    // 0x801D4EDC: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D4EE0: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D4EE4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D4EE8: jal         0x800352EC
    // 0x801D4EEC: addiu       $a0, $a0, 0x5314
    ctx->r4 = ADD32(ctx->r4, 0X5314);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D4EEC: addiu       $a0, $a0, 0x5314
    ctx->r4 = ADD32(ctx->r4, 0X5314);
    after_0:
    // 0x801D4EF0: b           L_801D5134
    // 0x801D4EF4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_801D5134;
    // 0x801D4EF4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_801D4EF8:
    // 0x801D4EF8: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D4EFC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D4F00: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D4F04: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D4F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D4F0C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D4F10: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x801D4F14: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x801D4F18: jal         0x801CD504
    // 0x801D4F1C: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801D4F1C: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801D4F20: beql        $v0, $zero, L_801D4F44
    if (ctx->r2 == 0) {
        // 0x801D4F24: lbu         $t7, 0x9C($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X9C);
            goto L_801D4F44;
    }
    goto skip_0;
    // 0x801D4F24: lbu         $t7, 0x9C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9C);
    skip_0:
    // 0x801D4F28: jal         0x801E11BC
    // 0x801D4F2C: lw          $a0, 0xBC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XBC);
    func_801E11BC_65000C(rdram, ctx);
        goto after_2;
    // 0x801D4F2C: lw          $a0, 0xBC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XBC);
    after_2:
    // 0x801D4F30: jal         0x801D2B90
    // 0x801D4F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_3;
    // 0x801D4F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801D4F38: b           L_801D5134
    // 0x801D4F3C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_801D5134;
    // 0x801D4F3C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x801D4F40: lbu         $t7, 0x9C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9C);
L_801D4F44:
    // 0x801D4F44: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D4F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D4F4C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801D4F50: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801D4F54: lw          $t9, -0x74F0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X74F0);
    // 0x801D4F58: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801D4F5C: jalr        $t9
    // 0x801D4F60: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x801D4F60: nop

    after_4:
    // 0x801D4F64: lbu         $t0, 0x9D($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X9D);
    // 0x801D4F68: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D4F6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D4F70: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x801D4F74: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x801D4F78: lw          $t9, -0x74E8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X74E8);
    // 0x801D4F7C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801D4F80: jalr        $t9
    // 0x801D4F84: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x801D4F84: nop

    after_5:
    // 0x801D4F88: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x801D4F8C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D4F90: ldc1        $f6, -0xEF8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XEF8);
    // 0x801D4F94: lwc1        $f16, 0x330($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X330);
    // 0x801D4F98: lwc1        $f14, 0x5C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x801D4F9C: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801D4FA0: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x801D4FA4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801D4FA8: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x801D4FAC: lwc1        $f4, 0xA8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x801D4FB0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x801D4FB4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D4FB8: lwc1        $f8, 0xC0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC0);
    // 0x801D4FBC: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801D4FC0: lwc1        $f4, 0xC4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x801D4FC4: sub.s       $f2, $f14, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x801D4FC8: swc1        $f6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f6.u32l;
    // 0x801D4FCC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D4FD0: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801D4FD4: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D4FD8: nop

    // 0x801D4FDC: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801D4FE0: add.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D4FE4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D4FE8: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x801D4FEC: nop

    // 0x801D4FF0: bc1f        L_801D50AC
    if (!c1cs) {
        // 0x801D4FF4: nop
    
            goto L_801D50AC;
    }
    // 0x801D4FF4: nop

    // 0x801D4FF8: swc1        $f14, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f14.u32l;
    // 0x801D4FFC: swc1        $f18, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f18.u32l;
    // 0x801D5000: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    // 0x801D5004: jal         0x8000DD58
    // 0x801D5008: swc1        $f14, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f14.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_6;
    // 0x801D5008: swc1        $f14, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f14.u32l;
    after_6:
    // 0x801D500C: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x801D5010: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x801D5014: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x801D5018: addiu       $t4, $t3, 0x28
    ctx->r12 = ADD32(ctx->r11, 0X28);
    // 0x801D501C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x801D5020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D5024: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D5028: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D502C: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x801D5030: jal         0x801E117C
    // 0x801D5034: lw          $a1, 0xBC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XBC);
    func_801E117C_64FFCC(rdram, ctx);
        goto after_7;
    // 0x801D5034: lw          $a1, 0xBC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XBC);
    after_7:
    // 0x801D5038: lwc1        $f14, 0x88($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801D503C: lwc1        $f16, 0x8C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801D5040: sw          $v0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r2;
    // 0x801D5044: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D5048: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801D504C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x801D5050: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x801D5054: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x801D5058: addiu       $t8, $zero, 0x50
    ctx->r24 = ADD32(0, 0X50);
    // 0x801D505C: addiu       $t0, $zero, 0x93
    ctx->r8 = ADD32(0, 0X93);
    // 0x801D5060: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x801D5064: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x801D5068: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x801D506C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801D5070: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801D5074: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801D5078: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801D507C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D5080: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x801D5084: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D5088: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x801D508C: addiu       $a3, $zero, 0xEF
    ctx->r7 = ADD32(0, 0XEF);
    // 0x801D5090: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x801D5094: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x801D5098: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x801D509C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x801D50A0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x801D50A4: jal         0x801E0F30
    // 0x801D50A8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_801E0F30_64FD80(rdram, ctx);
        goto after_8;
    // 0x801D50A8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_8:
L_801D50AC:
    // 0x801D50AC: jal         0x801CD634
    // 0x801D50B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_9;
    // 0x801D50B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801D50B4: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x801D50B8: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x801D50BC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D50C0: lwc1        $f6, -0xEF0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0XEF0);
    // 0x801D50C4: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x801D50C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D50CC: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x801D50D0: lui         $at, 0xC030
    ctx->r1 = S32(0XC030 << 16);
    // 0x801D50D4: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x801D50D8: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x801D50DC: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801D50E0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D50E4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D50E8: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x801D50EC: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x801D50F0: add.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f10.d + ctx->f6.d;
    // 0x801D50F4: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x801D50F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D50FC: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x801D5100: cvt.s.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f4.fl = CVT_S_D(ctx->f8.d);
    // 0x801D5104: jal         0x8001D14C
    // 0x801D5108: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8001D14C_1DD4C(rdram, ctx);
        goto after_10;
    // 0x801D5108: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x801D510C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x801D5110: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x801D5114: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D5118: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x801D511C: jal         0x8001DB04
    // 0x801D5120: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_11;
    // 0x801D5120: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x801D5124: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D5128: jal         0x801CD780
    // 0x801D512C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_12;
    // 0x801D512C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_12:
    // 0x801D5130: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_801D5134:
    // 0x801D5134: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x801D5138: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x801D513C: jr          $ra
    // 0x801D5140: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    TRACE_RETURN()
    return;
    // 0x801D5140: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
