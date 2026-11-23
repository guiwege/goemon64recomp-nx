#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80037448_38048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037448: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003744C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037450: jal         0x8000383C
    // 0x80037454: nop

    func_8000383C_443C(rdram, ctx);
        goto after_0;
    // 0x80037454: nop

    after_0:
    // 0x80037458: jal         0x80003728
    // 0x8003745C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80003728_4328(rdram, ctx);
        goto after_1;
    // 0x8003745C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x80037460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037468: jr          $ra
    // 0x8003746C: nop

    TRACE_RETURN()
    return;
    // 0x8003746C: nop

;}
RECOMP_FUNC void func_8000AB30_B730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000AB30: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8000AB34: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x8000AB38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000AB3C: lui         $a1, 0xC
    ctx->r5 = S32(0XC << 16);
    // 0x8000AB40: addiu       $a0, $zero, 0x374
    ctx->r4 = ADD32(0, 0X374);
L_8000AB44:
    // 0x8000AB44: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000AB48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000AB4C: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x8000AB50: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8000AB54: slti        $at, $v0, 0xC
    ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x8000AB58: mflo        $t6
    ctx->r14 = lo;
    // 0x8000AB5C: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x8000AB60: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x8000AB64: bne         $at, $zero, L_8000AB44
    if (ctx->r1 != 0) {
        // 0x8000AB68: sb          $zero, 0x3705($t8)
        MEM_B(0X3705, ctx->r24) = 0;
            goto L_8000AB44;
    }
    // 0x8000AB68: sb          $zero, 0x3705($t8)
    MEM_B(0X3705, ctx->r24) = 0;
    // 0x8000AB6C: jr          $ra
    // 0x8000AB70: nop

    TRACE_RETURN()
    return;
    // 0x8000AB70: nop

;}
RECOMP_FUNC void func_8000AB10_B710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000AB10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000AB14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000AB18: jal         0x800041E0
    // 0x8000AB1C: addiu       $a1, $zero, 0x2970
    ctx->r5 = ADD32(0, 0X2970);
    func_800041E0_4DE0(rdram, ctx);
        goto after_0;
    // 0x8000AB1C: addiu       $a1, $zero, 0x2970
    ctx->r5 = ADD32(0, 0X2970);
    after_0:
    // 0x8000AB20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000AB24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000AB28: jr          $ra
    // 0x8000AB2C: nop

    TRACE_RETURN()
    return;
    // 0x8000AB2C: nop

;}
RECOMP_FUNC void _frexpf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004FB28: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x8004FB2C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8004FB30: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8004FB34: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8004FB38: c.eq.d      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.d == ctx->f2.d;
    // 0x8004FB3C: nop

    // 0x8004FB40: bc1fl       L_8004FB54
    if (!c1cs) {
        // 0x8004FB44: c.lt.d      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
            goto L_8004FB54;
    }
    goto skip_0;
    // 0x8004FB44: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    skip_0:
    // 0x8004FB48: jr          $ra
    // 0x8004FB4C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    TRACE_RETURN()
    return;
    // 0x8004FB4C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    // 0x8004FB50: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
L_8004FB54:
    // 0x8004FB54: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x8004FB58: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8004FB5C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8004FB60: bc1fl       L_8004FB74
    if (!c1cs) {
        // 0x8004FB64: neg.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
            goto L_8004FB74;
    }
    goto skip_1;
    // 0x8004FB64: neg.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
    skip_1:
    // 0x8004FB68: b           L_8004FB74
    // 0x8004FB6C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
        goto L_8004FB74;
    // 0x8004FB6C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    // 0x8004FB70: neg.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
L_8004FB74:
    // 0x8004FB74: c.le.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d <= ctx->f0.d;
    // 0x8004FB78: nop

    // 0x8004FB7C: bc1fl       L_8004FBB4
    if (!c1cs) {
        // 0x8004FB80: lui         $at, 0x3FE0
        ctx->r1 = S32(0X3FE0 << 16);
            goto L_8004FBB4;
    }
    goto skip_2;
    // 0x8004FB80: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    skip_2:
    // 0x8004FB84: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8004FB88: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8004FB8C: nop

L_8004FB90:
    // 0x8004FB90: mul.d       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f16.d);
    // 0x8004FB94: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8004FB98: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8004FB9C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8004FBA0: c.le.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d <= ctx->f0.d;
    // 0x8004FBA4: nop

    // 0x8004FBA8: bc1t        L_8004FB90
    if (c1cs) {
        // 0x8004FBAC: nop
    
            goto L_8004FB90;
    }
    // 0x8004FBAC: nop

    // 0x8004FBB0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
L_8004FBB4:
    // 0x8004FBB4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8004FBB8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8004FBBC: nop

    // 0x8004FBC0: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x8004FBC4: nop

    // 0x8004FBC8: bc1fl       L_8004FBF0
    if (!c1cs) {
        // 0x8004FBCC: c.lt.d      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
            goto L_8004FBF0;
    }
    goto skip_3;
    // 0x8004FBCC: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    skip_3:
    // 0x8004FBD0: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
L_8004FBD4:
    // 0x8004FBD4: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x8004FBD8: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x8004FBDC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8004FBE0: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8004FBE4: bc1tl       L_8004FBD4
    if (c1cs) {
        // 0x8004FBE8: add.d       $f0, $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
            goto L_8004FBD4;
    }
    goto skip_4;
    // 0x8004FBE8: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
    skip_4:
    // 0x8004FBEC: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
L_8004FBF0:
    // 0x8004FBF0: nop

    // 0x8004FBF4: bc1fl       L_8004FC08
    if (!c1cs) {
        // 0x8004FBF8: neg.d       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
            goto L_8004FC08;
    }
    goto skip_5;
    // 0x8004FBF8: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
    skip_5:
    // 0x8004FBFC: b           L_8004FC08
    // 0x8004FC00: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
        goto L_8004FC08;
    // 0x8004FC00: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
    // 0x8004FC04: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
L_8004FC08:
    // 0x8004FC08: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x8004FC0C: jr          $ra
    // 0x8004FC10: nop

    TRACE_RETURN()
    return;
    // 0x8004FC10: nop

;}
RECOMP_FUNC void func_80008548_9148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80008548: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000854C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80008550: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80008554: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80008558: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8000855C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80008560: andi        $s3, $a0, 0xFF
    ctx->r19 = ctx->r4 & 0XFF;
    // 0x80008564: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80008568: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8000856C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80008570: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80008574:
    // 0x80008574: addu        $t6, $s1, $s2
    ctx->r14 = ADD32(ctx->r17, ctx->r18);
    // 0x80008578: lbu         $a2, 0x1($t6)
    ctx->r6 = MEM_BU(ctx->r14, 0X1);
    // 0x8000857C: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    // 0x80008580: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x80008584: jal         0x800084F4
    // 0x80008588: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    func_800084F4_90F4(rdram, ctx);
        goto after_0;
    // 0x80008588: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    after_0:
    // 0x8000858C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80008590: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x80008594: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x80008598: bne         $at, $zero, L_80008574
    if (ctx->r1 != 0) {
        // 0x8000859C: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80008574;
    }
    // 0x8000859C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x800085A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800085A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800085A8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800085AC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800085B0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800085B4: jr          $ra
    // 0x800085B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800085B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8000B824_C424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B824: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8000B828: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x8000B82C: lw          $v0, 0xFC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XFC);
    // 0x8000B830: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8000B834: addiu       $a0, $a0, -0x3A28
    ctx->r4 = ADD32(ctx->r4, -0X3A28);
    // 0x8000B838: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8000B83C: bne         $at, $zero, L_8000B85C
    if (ctx->r1 != 0) {
        // 0x8000B840: nop
    
            goto L_8000B85C;
    }
    // 0x8000B840: nop

    // 0x8000B844: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x8000B848: addiu       $t6, $v0, -0x4
    ctx->r14 = ADD32(ctx->r2, -0X4);
    // 0x8000B84C: sw          $t6, 0xFC($v1)
    MEM_W(0XFC, ctx->r3) = ctx->r14;
    // 0x8000B850: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x8000B854: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    // 0x8000B858: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
L_8000B85C:
    // 0x8000B85C: jr          $ra
    // 0x8000B860: nop

    TRACE_RETURN()
    return;
    // 0x8000B860: nop

;}
RECOMP_FUNC void func_8003D080_3DC80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003D084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D088: jal         0x8000C838
    // 0x8003D08C: nop

    func_8000C838_D438(rdram, ctx);
        goto after_0;
    // 0x8003D08C: nop

    after_0:
    // 0x8003D090: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8003D094: jal         0x80035044
    // 0x8003D098: lw          $a0, 0x7860($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7860);
    func_80035044_35C44(rdram, ctx);
        goto after_1;
    // 0x8003D098: lw          $a0, 0x7860($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7860);
    after_1:
    // 0x8003D09C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D0A0: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8003D0A4: sw          $zero, 0x7860($at)
    MEM_W(0X7860, ctx->r1) = 0;
    // 0x8003D0A8: jr          $ra
    // 0x8003D0AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003D0AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800367E4_373E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800367E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800367E8: beq         $a0, $zero, L_80036828
    if (ctx->r4 == 0) {
        // 0x800367EC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80036828;
    }
    // 0x800367EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800367F0: jal         0x80036660
    // 0x800367F4: nop

    func_80036660_37260(rdram, ctx);
        goto after_0;
    // 0x800367F4: nop

    after_0:
    // 0x800367F8: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x800367FC: addiu       $v0, $v0, -0x2550
    ctx->r2 = ADD32(ctx->r2, -0X2550);
    // 0x80036800: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x80036804: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80036808: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8003680C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80036810: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x80036814: lw          $a0, -0x2CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CE0);
    // 0x80036818: beql        $a0, $zero, L_8003682C
    if (ctx->r4 == 0) {
        // 0x8003681C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003682C;
    }
    goto skip_0;
    // 0x8003681C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80036820: jal         0x80035DFC
    // 0x80036824: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035DFC_369FC(rdram, ctx);
        goto after_1;
    // 0x80036824: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_80036828:
    // 0x80036828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003682C:
    // 0x8003682C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036830: jr          $ra
    // 0x80036834: nop

    TRACE_RETURN()
    return;
    // 0x80036834: nop

;}
RECOMP_FUNC void func_8003AD28_3B928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003AD28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AD2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AD30: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003AD34: lb          $t6, 0x9CE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X9CE);
    // 0x8003AD38: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003AD3C: beq         $t6, $zero, L_8003AD54
    if (ctx->r14 == 0) {
        // 0x8003AD40: nop
    
            goto L_8003AD54;
    }
    // 0x8003AD40: nop

    // 0x8003AD44: jal         0x8003AFB0
    // 0x8003AD48: nop

    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_0;
    // 0x8003AD48: nop

    after_0:
    // 0x8003AD4C: b           L_8003ADF8
    // 0x8003AD50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003ADF8;
    // 0x8003AD50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003AD54:
    // 0x8003AD54: lbu         $t7, 0x9D6($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X9D6);
    // 0x8003AD58: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003AD5C: beq         $t7, $zero, L_8003AD74
    if (ctx->r15 == 0) {
        // 0x8003AD60: nop
    
            goto L_8003AD74;
    }
    // 0x8003AD60: nop

    // 0x8003AD64: jal         0x8003AFB0
    // 0x8003AD68: nop

    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_1;
    // 0x8003AD68: nop

    after_1:
    // 0x8003AD6C: b           L_8003ADF8
    // 0x8003AD70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003ADF8;
    // 0x8003AD70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003AD74:
    // 0x8003AD74: lw          $t8, 0x1728($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1728);
    // 0x8003AD78: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003AD7C: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x8003AD80: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8003AD84: addiu       $v0, $v0, 0x9E8
    ctx->r2 = ADD32(ctx->r2, 0X9E8);
    // 0x8003AD88: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003AD8C: andi        $t9, $a0, 0x7FFF
    ctx->r25 = ctx->r4 & 0X7FFF;
    // 0x8003AD90: sltiu       $at, $t9, 0x100
    ctx->r1 = ctx->r25 < 0X100 ? 1 : 0;
    // 0x8003AD94: beq         $at, $zero, L_8003ADC8
    if (ctx->r1 == 0) {
        // 0x8003AD98: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_8003ADC8;
    }
    // 0x8003AD98: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8003AD9C: lbu         $t0, 0x9D3($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X9D3);
    // 0x8003ADA0: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x8003ADA4: bne         $t0, $zero, L_8003ADB8
    if (ctx->r8 != 0) {
        // 0x8003ADA8: nop
    
            goto L_8003ADB8;
    }
    // 0x8003ADA8: nop

    // 0x8003ADAC: lb          $t1, 0x9DB($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X9DB);
    // 0x8003ADB0: beq         $t1, $zero, L_8003ADC8
    if (ctx->r9 == 0) {
        // 0x8003ADB4: nop
    
            goto L_8003ADC8;
    }
    // 0x8003ADB4: nop

L_8003ADB8:
    // 0x8003ADB8: jal         0x8003AFB0
    // 0x8003ADBC: nop

    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_2;
    // 0x8003ADBC: nop

    after_2:
    // 0x8003ADC0: b           L_8003ADF8
    // 0x8003ADC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003ADF8;
    // 0x8003ADC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003ADC8:
    // 0x8003ADC8: addiu       $v1, $v1, 0x9F0
    ctx->r3 = ADD32(ctx->r3, 0X9F0);
    // 0x8003ADCC: lhu         $t2, 0x0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X0);
L_8003ADD0:
    // 0x8003ADD0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8003ADD4: bne         $a0, $t2, L_8003ADEC
    if (ctx->r4 != ctx->r10) {
        // 0x8003ADD8: nop
    
            goto L_8003ADEC;
    }
    // 0x8003ADD8: nop

    // 0x8003ADDC: jal         0x8003AFB0
    // 0x8003ADE0: nop

    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_3;
    // 0x8003ADE0: nop

    after_3:
    // 0x8003ADE4: b           L_8003ADF8
    // 0x8003ADE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003ADF8;
    // 0x8003ADE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003ADEC:
    // 0x8003ADEC: bnel        $v0, $v1, L_8003ADD0
    if (ctx->r2 != ctx->r3) {
        // 0x8003ADF0: lhu         $t2, 0x0($v0)
        ctx->r10 = MEM_HU(ctx->r2, 0X0);
            goto L_8003ADD0;
    }
    goto skip_0;
    // 0x8003ADF0: lhu         $t2, 0x0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X0);
    skip_0:
    // 0x8003ADF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003ADF8:
    // 0x8003ADF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003ADFC: jr          $ra
    // 0x8003AE00: nop

    TRACE_RETURN()
    return;
    // 0x8003AE00: nop

;}
RECOMP_FUNC void func_8003EBA4_3F7A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003EBA4: jr          $ra
    // 0x8003EBA8: nop

    TRACE_RETURN()
    return;
    // 0x8003EBA8: nop

;}
RECOMP_FUNC void func_80005EDC_6ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80005EDC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80005EE0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80005EE4: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x80005EE8: addiu       $s0, $s0, -0x3340
    ctx->r16 = ADD32(ctx->r16, -0X3340);
    // 0x80005EEC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80005EF0: addiu       $t6, $s0, 0x7FFF
    ctx->r14 = ADD32(ctx->r16, 0X7FFF);
    // 0x80005EF4: lbu         $t6, 0x2DD5($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2DD5);
    // 0x80005EF8: addiu       $t7, $s0, 0x7FFF
    ctx->r15 = ADD32(ctx->r16, 0X7FFF);
    // 0x80005EFC: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x80005F00: sb          $t6, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r14;
    // 0x80005F04: lbu         $t7, 0x2DD7($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2DD7);
    // 0x80005F08: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80005F0C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x80005F10: sb          $t7, 0x36($sp)
    MEM_B(0X36, ctx->r29) = ctx->r15;
    // 0x80005F14: sh          $zero, 0x2DCF($at)
    MEM_H(0X2DCF, ctx->r1) = 0;
    // 0x80005F18: sh          $zero, 0x2DD3($at)
    MEM_H(0X2DD3, ctx->r1) = 0;
    // 0x80005F1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80005F20: sw          $zero, -0x7608($at)
    MEM_W(-0X7608, ctx->r1) = 0;
    // 0x80005F24: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    // 0x80005F28: jal         0x8000B640
    // 0x80005F2C: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    func_8000B640_C240(rdram, ctx);
        goto after_0;
    // 0x80005F2C: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    after_0:
    // 0x80005F30: jal         0x8000B5D0
    // 0x80005F34: nop

    func_8000B5D0_C1D0(rdram, ctx);
        goto after_1;
    // 0x80005F34: nop

    after_1:
    // 0x80005F38: addiu       $t8, $s0, 0x7FFF
    ctx->r24 = ADD32(ctx->r16, 0X7FFF);
    // 0x80005F3C: lhu         $t8, 0x2E19($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X2E19);
    // 0x80005F40: lui         $t0, 0x8006
    ctx->r8 = S32(0X8006 << 16);
    // 0x80005F44: addiu       $t0, $t0, -0x4E20
    ctx->r8 = ADD32(ctx->r8, -0X4E20);
    // 0x80005F48: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80005F4C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80005F50: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80005F54: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x80005F58: lhu         $t1, 0xA($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XA);
    // 0x80005F5C: lhu         $t2, 0x2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X2);
    // 0x80005F60: lhu         $t3, 0xE($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XE);
    // 0x80005F64: lw          $t4, 0x10($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X10);
    // 0x80005F68: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x80005F6C: lh          $a1, 0x4($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X4);
    // 0x80005F70: lh          $a2, 0x6($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X6);
    // 0x80005F74: lh          $a3, 0x8($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X8);
    // 0x80005F78: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80005F7C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80005F80: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80005F84: jal         0x8000607C
    // 0x80005F88: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    func_8000607C_6C7C(rdram, ctx);
        goto after_2;
    // 0x80005F88: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_2:
    // 0x80005F8C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80005F90: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x80005F94: jal         0x80004240
    // 0x80005F98: sh          $t5, 0x2E17($at)
    MEM_H(0X2E17, ctx->r1) = ctx->r13;
    func_80004240_4E40(rdram, ctx);
        goto after_3;
    // 0x80005F98: sh          $t5, 0x2E17($at)
    MEM_H(0X2E17, ctx->r1) = ctx->r13;
    after_3:
    // 0x80005F9C: jal         0x8000B364
    // 0x80005FA0: nop

    func_8000B364_BF64(rdram, ctx);
        goto after_4;
    // 0x80005FA0: nop

    after_4:
    // 0x80005FA4: jal         0x8000383C
    // 0x80005FA8: nop

    func_8000383C_443C(rdram, ctx);
        goto after_5;
    // 0x80005FA8: nop

    after_5:
    // 0x80005FAC: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x80005FB0: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x80005FB4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x80005FB8: sb          $t6, 0x2DD5($at)
    MEM_B(0X2DD5, ctx->r1) = ctx->r14;
    // 0x80005FBC: lbu         $t7, 0x36($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X36);
    // 0x80005FC0: jal         0x80003728
    // 0x80005FC4: sb          $t7, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r15;
    func_80003728_4328(rdram, ctx);
        goto after_6;
    // 0x80005FC4: sb          $t7, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r15;
    after_6:
    // 0x80005FC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80005FCC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80005FD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80005FD4: jr          $ra
    // 0x80005FD8: nop

    TRACE_RETURN()
    return;
    // 0x80005FD8: nop

;}
RECOMP_FUNC void func_800115B8_121B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800115B8: beq         $a0, $zero, L_800115D8
    if (ctx->r4 == 0) {
        // 0x800115BC: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_800115D8;
    }
    // 0x800115BC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x800115C0: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x800115C4: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x800115C8: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x800115CC: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x800115D0: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x800115D4: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
L_800115D8:
    // 0x800115D8: jr          $ra
    // 0x800115DC: nop

    TRACE_RETURN()
    return;
    // 0x800115DC: nop

;}
RECOMP_FUNC void func_80033D10_34910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80033D10: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x80033D14: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80033D18: beq         $v0, $zero, L_80033D38
    if (ctx->r2 == 0) {
        // 0x80033D1C: nop
    
            goto L_80033D38;
    }
    // 0x80033D1C: nop

    // 0x80033D20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80033D24: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_80033D28:
    // 0x80033D28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80033D2C: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80033D30: bne         $v1, $a0, L_80033D28
    if (ctx->r3 != ctx->r4) {
        // 0x80033D34: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80033D28;
    }
    // 0x80033D34: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_80033D38:
    // 0x80033D38: jr          $ra
    // 0x80033D3C: nop

    TRACE_RETURN()
    return;
    // 0x80033D3C: nop

;}
RECOMP_FUNC void guMtxIdent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80043C28: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80043C2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80043C30: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80043C34: jal         0x80043BA0
    // 0x80043C38: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x80043C38: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80043C3C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80043C40: jal         0x80043AA0
    // 0x80043C44: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x80043C44: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_1:
    // 0x80043C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80043C4C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80043C50: jr          $ra
    // 0x80043C54: nop

    TRACE_RETURN()
    return;
    // 0x80043C54: nop

;}
RECOMP_FUNC void func_8000E160_ED60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E160: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8000E164: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
    // 0x8000E168: sb          $zero, 0x8C($v1)
    MEM_B(0X8C, ctx->r3) = 0;
    // 0x8000E16C: sb          $zero, 0x90($v1)
    MEM_B(0X90, ctx->r3) = 0;
    // 0x8000E170: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x8000E174: lui         $t0, 0x8006
    ctx->r8 = S32(0X8006 << 16);
    // 0x8000E178: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8000E17C: lw          $t0, 0x36D0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X36D0);
    // 0x8000E180: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x8000E184: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x8000E188: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8000E18C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8000E190: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8000E194: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x8000E198: jr          $ra
    // 0x8000E19C: sw          $t8, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x8000E19C: sw          $t8, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r24;
;}
RECOMP_FUNC void func_80035EEC_36AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035EEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80035EF0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80035EF4: sll         $s4, $a1, 16
    ctx->r20 = S32(ctx->r5 << 16);
    // 0x80035EF8: sra         $t6, $s4, 16
    ctx->r14 = S32(SIGNED(ctx->r20) >> 16);
    // 0x80035EFC: sll         $v0, $t6, 1
    ctx->r2 = S32(ctx->r14 << 1);
    // 0x80035F00: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x80035F04: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80035F08: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x80035F0C: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x80035F10: lhu         $t8, -0x2CB0($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X2CB0);
    // 0x80035F14: lh          $t9, -0x2528($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X2528);
    // 0x80035F18: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80035F1C: andi        $s3, $a2, 0xFF
    ctx->r19 = ctx->r6 & 0XFF;
    // 0x80035F20: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x80035F24: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80035F28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80035F2C: slt         $at, $t0, $s3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80035F30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80035F34: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x80035F38: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80035F3C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80035F40: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80035F44: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80035F48: beq         $at, $zero, L_80035F58
    if (ctx->r1 == 0) {
        // 0x80035F4C: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80035F58;
    }
    // 0x80035F4C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80035F50: b           L_80035FBC
    // 0x80035F54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80035FBC;
    // 0x80035F54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80035F58:
    // 0x80035F58: blez        $s3, L_80035FB8
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80035F5C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80035FB8;
    }
    // 0x80035F5C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80035F60:
    // 0x80035F60: sll         $a0, $s4, 16
    ctx->r4 = S32(ctx->r20 << 16);
    // 0x80035F64: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80035F68: jal         0x80035D8C
    // 0x80035F6C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_80035D8C_3698C(rdram, ctx);
        goto after_0;
    // 0x80035F6C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_0:
    // 0x80035F70: bne         $v0, $zero, L_80035F80
    if (ctx->r2 != 0) {
        // 0x80035F74: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80035F80;
    }
    // 0x80035F74: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80035F78: b           L_80035FBC
    // 0x80035F7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80035FBC;
    // 0x80035F7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80035F80:
    // 0x80035F80: bne         $s2, $zero, L_80035F8C
    if (ctx->r18 != 0) {
        // 0x80035F84: andi        $t4, $s1, 0xFFFF
        ctx->r12 = ctx->r17 & 0XFFFF;
            goto L_80035F8C;
    }
    // 0x80035F84: andi        $t4, $s1, 0xFFFF
    ctx->r12 = ctx->r17 & 0XFFFF;
    // 0x80035F88: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_80035F8C:
    // 0x80035F8C: lw          $t2, 0x18($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X18);
    // 0x80035F90: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x80035F94: slt         $at, $t4, $s3
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80035F98: bnel        $t2, $zero, L_80035FAC
    if (ctx->r10 != 0) {
        // 0x80035F9C: lw          $t3, 0x1C($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X1C);
            goto L_80035FAC;
    }
    goto skip_0;
    // 0x80035F9C: lw          $t3, 0x1C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C);
    skip_0:
    // 0x80035FA0: b           L_80035FB0
    // 0x80035FA4: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
        goto L_80035FB0;
    // 0x80035FA4: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80035FA8: lw          $t3, 0x1C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C);
L_80035FAC:
    // 0x80035FAC: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
L_80035FB0:
    // 0x80035FB0: bne         $at, $zero, L_80035F60
    if (ctx->r1 != 0) {
        // 0x80035FB4: sw          $v0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r2;
            goto L_80035F60;
    }
    // 0x80035FB4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_80035FB8:
    // 0x80035FB8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_80035FBC:
    // 0x80035FBC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80035FC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80035FC4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80035FC8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80035FCC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80035FD0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80035FD4: jr          $ra
    // 0x80035FD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80035FD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8000C568_D168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C568: jr          $ra
    // 0x8000C56C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8000C56C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8003F524_40124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F524: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003F528: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003F52C: lw          $t7, 0x7744($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7744);
    // 0x8003F530: lw          $t6, 0x7740($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7740);
    // 0x8003F534: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F538: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8003F53C: jr          $ra
    // 0x8003F540: sw          $t8, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x8003F540: sw          $t8, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void func_80006140_6D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80006140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80006144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006148: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8000614C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80006150: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80006154: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80006158: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8000615C: sh          $t6, 0x7A76($at)
    MEM_H(0X7A76, ctx->r1) = ctx->r14;
    // 0x80006160: andi        $a0, $a3, 0xFFFF
    ctx->r4 = ctx->r7 & 0XFFFF;
    // 0x80006164: jal         0x80006274
    // 0x80006168: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80006274_6E74(rdram, ctx);
        goto after_0;
    // 0x80006168: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8000616C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80006170: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80006174: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80006178: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000617C: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x80006180: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80006184: sb          $t7, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r15;
    // 0x80006188: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8000618C: lbu         $t9, 0x1B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1B);
    // 0x80006190: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80006194: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80006198: addiu       $t0, $t9, 0x21C
    ctx->r8 = ADD32(ctx->r25, 0X21C);
    // 0x8000619C: sh          $t0, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r8;
    // 0x800061A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800061A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800061A8: jr          $ra
    // 0x800061AC: nop

    TRACE_RETURN()
    return;
    // 0x800061AC: nop

;}
RECOMP_FUNC void guPerspectiveF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80043020: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80043024: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80043028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004302C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80043030: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80043034: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80043038: jal         0x80043BA0
    // 0x8004303C: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x8004303C: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x80043040: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80043044: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80043048: ldc1        $f6, -0x2CC0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X2CC0);
    // 0x8004304C: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80043050: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80043054: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80043058: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8004305C: cvt.s.d     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f14.fl = CVT_S_D(ctx->f8.d);
    // 0x80043060: div.s       $f12, $f14, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f10.fl);
    // 0x80043064: jal         0x800419B0
    // 0x80043068: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x80043068: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x8004306C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80043070: jal         0x800417F0
    // 0x80043074: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x80043074: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80043078: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8004307C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80043080: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80043084: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80043088: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8004308C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80043090: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80043094: add.s       $f18, $f14, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f16.fl;
    // 0x80043098: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8004309C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800430A0: sub.s       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x800430A4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800430A8: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
    // 0x800430AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800430B0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800430B4: div.s       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f12.fl);
    // 0x800430B8: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
    // 0x800430BC: div.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f6.fl);
    // 0x800430C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800430C4: swc1        $f10, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f10.u32l;
    // 0x800430C8: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x800430CC: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x800430D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800430D4: nop

    // 0x800430D8: swc1        $f6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f6.u32l;
    // 0x800430DC: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800430E0: div.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800430E4: swc1        $f4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
    // 0x800430E8: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800430EC: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800430F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800430F4: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800430F8: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800430FC: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80043100: beq         $v1, $a0, L_80043144
    if (ctx->r3 == ctx->r4) {
        // 0x80043104: lwc1        $f14, 0xC($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
            goto L_80043144;
    }
    // 0x80043104: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
L_80043108:
    // 0x80043108: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8004310C: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80043110: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80043114: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80043118: lwc1        $f12, 0x18($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8004311C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80043120: mul.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80043124: lwc1        $f14, 0x1C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80043128: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x8004312C: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80043130: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x80043134: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x80043138: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8004313C: bne         $v1, $a0, L_80043108
    if (ctx->r3 != ctx->r4) {
        // 0x80043140: swc1        $f2, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f2.u32l;
            goto L_80043108;
    }
    // 0x80043140: swc1        $f2, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f2.u32l;
L_80043144:
    // 0x80043144: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80043148: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8004314C: swc1        $f10, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f10.u32l;
    // 0x80043150: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80043154: nop

    // 0x80043158: mul.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8004315C: swc1        $f8, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f8.u32l;
    // 0x80043160: swc1        $f4, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f4.u32l;
    // 0x80043164: swc1        $f2, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f2.u32l;
    // 0x80043168: beq         $a1, $zero, L_80043240
    if (ctx->r5 == 0) {
        // 0x8004316C: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_80043240;
    }
    // 0x8004316C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80043170: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80043174: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80043178: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x8004317C: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x80043180: c.le.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d <= ctx->f8.d;
    // 0x80043184: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80043188: bc1fl       L_8004319C
    if (!c1cs) {
        // 0x8004318C: mtc1        $at, $f11
        ctx->f_odd[(11 - 1) * 2] = ctx->r1;
            goto L_8004319C;
    }
    goto skip_0;
    // 0x8004318C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    skip_0:
    // 0x80043190: b           L_80043240
    // 0x80043194: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
        goto L_80043240;
    // 0x80043194: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x80043198: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
L_8004319C:
    // 0x8004319C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800431A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800431A4: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x800431A8: div.d       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x800431AC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800431B0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800431B4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800431B8: nop

    // 0x800431BC: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x800431C0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800431C4: nop

    // 0x800431C8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x800431CC: beql        $t8, $zero, L_80043220
    if (ctx->r24 == 0) {
        // 0x800431D0: mfc1        $t8, $f6
        ctx->r24 = (int32_t)ctx->f6.u32l;
            goto L_80043220;
    }
    goto skip_1;
    // 0x800431D0: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x800431D4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800431D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800431DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800431E0: sub.d       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f6.d = ctx->f4.d - ctx->f6.d;
    // 0x800431E4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800431E8: nop

    // 0x800431EC: cvt.w.d     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_D(ctx->f6.d);
    // 0x800431F0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800431F4: nop

    // 0x800431F8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x800431FC: bne         $t8, $zero, L_80043214
    if (ctx->r24 != 0) {
        // 0x80043200: nop
    
            goto L_80043214;
    }
    // 0x80043200: nop

    // 0x80043204: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80043208: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004320C: b           L_8004322C
    // 0x80043210: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8004322C;
    // 0x80043210: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_80043214:
    // 0x80043214: b           L_8004322C
    // 0x80043218: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8004322C;
    // 0x80043218: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8004321C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
L_80043220:
    // 0x80043220: nop

    // 0x80043224: bltz        $t8, L_80043214
    if (SIGNED(ctx->r24) < 0) {
        // 0x80043228: nop
    
            goto L_80043214;
    }
    // 0x80043228: nop

L_8004322C:
    // 0x8004322C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80043230: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80043234: bgtz        $t9, L_80043240
    if (SIGNED(ctx->r25) > 0) {
        // 0x80043238: sh          $t8, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r24;
            goto L_80043240;
    }
    // 0x80043238: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x8004323C: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
L_80043240:
    // 0x80043240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80043244: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80043248: jr          $ra
    // 0x8004324C: nop

    TRACE_RETURN()
    return;
    // 0x8004324C: nop

;}
RECOMP_FUNC void func_8002A7BC_2B3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A7BC: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8002A7C0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8002A7C4: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8002A7C8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8002A7CC: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8002A7D0: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8002A7D4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8002A7D8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8002A7DC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8002A7E0: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x8002A7E4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8002A7E8: beq         $a1, $zero, L_8002A9C8
    if (ctx->r5 == 0) {
        // 0x8002A7EC: sh          $zero, 0x38($a0)
        MEM_H(0X38, ctx->r4) = 0;
            goto L_8002A9C8;
    }
    // 0x8002A7EC: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x8002A7F0: sw          $a1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r5;
    // 0x8002A7F4: lw          $s4, 0x18($a1)
    ctx->r20 = MEM_W(ctx->r5, 0X18);
    // 0x8002A7F8: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8002A7FC: addiu       $t2, $sp, 0x80
    ctx->r10 = ADD32(ctx->r29, 0X80);
    // 0x8002A800: sw          $s4, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r20;
    // 0x8002A804: lwc1        $f6, 0x8($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X8);
    // 0x8002A808: addiu       $t3, $sp, 0x7C
    ctx->r11 = ADD32(ctx->r29, 0X7C);
    // 0x8002A80C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    // 0x8002A810: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002A814: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x8002A818: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8002A81C: lwc1        $f16, 0xC($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0XC);
    // 0x8002A820: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8002A824: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x8002A828: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8002A82C: lwc1        $f6, 0x10($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X10);
    // 0x8002A830: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002A834: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x8002A838: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8002A83C: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x8002A840: lwc1        $f16, 0x10($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8002A844: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x8002A848: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8002A84C: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x8002A850: lhu         $t0, 0x18($s4)
    ctx->r8 = MEM_HU(ctx->r20, 0X18);
    // 0x8002A854: lhu         $t8, 0x16($s4)
    ctx->r24 = MEM_HU(ctx->r20, 0X16);
    // 0x8002A858: lhu         $t6, 0x14($s4)
    ctx->r14 = MEM_HU(ctx->r20, 0X14);
    // 0x8002A85C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8002A860: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8002A864: andi        $a2, $t0, 0x3FF
    ctx->r6 = ctx->r8 & 0X3FF;
    // 0x8002A868: andi        $a1, $t8, 0x3FF
    ctx->r5 = ctx->r24 & 0X3FF;
    // 0x8002A86C: jal         0x80033A3C
    // 0x8002A870: andi        $a0, $t6, 0x3FF
    ctx->r4 = ctx->r14 & 0X3FF;
    func_80033A3C_3463C(rdram, ctx);
        goto after_0;
    // 0x8002A870: andi        $a0, $t6, 0x3FF
    ctx->r4 = ctx->r14 & 0X3FF;
    after_0:
    // 0x8002A874: lhu         $t4, 0x14($s4)
    ctx->r12 = MEM_HU(ctx->r20, 0X14);
    // 0x8002A878: lhu         $t6, 0x16($s4)
    ctx->r14 = MEM_HU(ctx->r20, 0X16);
    // 0x8002A87C: lhu         $t8, 0x18($s4)
    ctx->r24 = MEM_HU(ctx->r20, 0X18);
    // 0x8002A880: addiu       $t0, $sp, 0x74
    ctx->r8 = ADD32(ctx->r29, 0X74);
    // 0x8002A884: addiu       $t1, $sp, 0x70
    ctx->r9 = ADD32(ctx->r29, 0X70);
    // 0x8002A888: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8002A88C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8002A890: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    // 0x8002A894: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    // 0x8002A898: andi        $a1, $t6, 0x3FF
    ctx->r5 = ctx->r14 & 0X3FF;
    // 0x8002A89C: jal         0x80033A3C
    // 0x8002A8A0: andi        $a2, $t8, 0x3FF
    ctx->r6 = ctx->r24 & 0X3FF;
    func_80033A3C_3463C(rdram, ctx);
        goto after_1;
    // 0x8002A8A0: andi        $a2, $t8, 0x3FF
    ctx->r6 = ctx->r24 & 0X3FF;
    after_1:
    // 0x8002A8A4: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x8002A8A8: lw          $t2, -0x1120($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1120);
    // 0x8002A8AC: lwc1        $f20, 0x1C($s4)
    ctx->f20.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x8002A8B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8002A8B4: beq         $t2, $zero, L_8002A9C8
    if (ctx->r10 == 0) {
        // 0x8002A8B8: sll         $t3, $zero, 3
        ctx->r11 = S32(0 << 3);
            goto L_8002A9C8;
    }
    // 0x8002A8B8: sll         $t3, $zero, 3
    ctx->r11 = S32(0 << 3);
    // 0x8002A8BC: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x8002A8C0: addiu       $t4, $t4, -0x1120
    ctx->r12 = ADD32(ctx->r12, -0X1120);
    // 0x8002A8C4: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x8002A8C8: lui         $s6, 0x8021
    ctx->r22 = S32(0X8021 << 16);
    // 0x8002A8CC: lui         $s3, 0x8017
    ctx->r19 = S32(0X8017 << 16);
    // 0x8002A8D0: lui         $s2, 0x8017
    ctx->r18 = S32(0X8017 << 16);
    // 0x8002A8D4: addiu       $s2, $s2, -0x70A0
    ctx->r18 = ADD32(ctx->r18, -0X70A0);
    // 0x8002A8D8: addiu       $s3, $s3, -0x709C
    ctx->r19 = ADD32(ctx->r19, -0X709C);
    // 0x8002A8DC: addiu       $s6, $s6, -0x1120
    ctx->r22 = ADD32(ctx->r22, -0X1120);
    // 0x8002A8E0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8002A8E4: addiu       $s5, $zero, 0x7FFF
    ctx->r21 = ADD32(0, 0X7FFF);
    // 0x8002A8E8: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
L_8002A8EC:
    // 0x8002A8EC: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x8002A8F0: beq         $v1, $zero, L_8002A9C8
    if (ctx->r3 == 0) {
        // 0x8002A8F4: sw          $t5, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r13;
            goto L_8002A9C8;
    }
    // 0x8002A8F4: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
    // 0x8002A8F8: beq         $t5, $zero, L_8002A9C8
    if (ctx->r13 == 0) {
        // 0x8002A8FC: lwc1        $f12, 0x84($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
            goto L_8002A9C8;
    }
    // 0x8002A8FC: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8002A900: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8002A904: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8002A908: lwc1        $f14, 0x80($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8002A90C: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    // 0x8002A910: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x8002A914: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x8002A918: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8002A91C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8002A920: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8002A924: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8002A928: jal         0x80027A7C
    // 0x8002A92C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027A7C_2867C(rdram, ctx);
        goto after_2;
    // 0x8002A92C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x8002A930: lh          $t6, 0x38($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X38);
    // 0x8002A934: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8002A938: andi        $t3, $s0, 0xFFFF
    ctx->r11 = ctx->r16 & 0XFFFF;
    // 0x8002A93C: bne         $s5, $t6, L_8002A9AC
    if (ctx->r21 != ctx->r14) {
        // 0x8002A940: slti        $at, $t3, 0x3
        ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
            goto L_8002A9AC;
    }
    // 0x8002A940: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x8002A944: lhu         $t7, 0x14($s4)
    ctx->r15 = MEM_HU(ctx->r20, 0X14);
    // 0x8002A948: lhu         $t9, 0x16($s4)
    ctx->r25 = MEM_HU(ctx->r20, 0X16);
    // 0x8002A94C: lhu         $t1, 0x18($s4)
    ctx->r9 = MEM_HU(ctx->r20, 0X18);
    // 0x8002A950: addiu       $t3, $s1, 0x1C
    ctx->r11 = ADD32(ctx->r17, 0X1C);
    // 0x8002A954: addiu       $t4, $s1, 0x20
    ctx->r12 = ADD32(ctx->r17, 0X20);
    // 0x8002A958: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8002A95C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8002A960: addiu       $a3, $s1, 0x18
    ctx->r7 = ADD32(ctx->r17, 0X18);
    // 0x8002A964: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    // 0x8002A968: andi        $a1, $t9, 0x3FF
    ctx->r5 = ctx->r25 & 0X3FF;
    // 0x8002A96C: jal         0x80033898
    // 0x8002A970: andi        $a2, $t1, 0x3FF
    ctx->r6 = ctx->r9 & 0X3FF;
    func_80033898_34498(rdram, ctx);
        goto after_3;
    // 0x8002A970: andi        $a2, $t1, 0x3FF
    ctx->r6 = ctx->r9 & 0X3FF;
    after_3:
    // 0x8002A974: lhu         $t5, 0x14($s4)
    ctx->r13 = MEM_HU(ctx->r20, 0X14);
    // 0x8002A978: lhu         $t7, 0x16($s4)
    ctx->r15 = MEM_HU(ctx->r20, 0X16);
    // 0x8002A97C: lhu         $t9, 0x18($s4)
    ctx->r25 = MEM_HU(ctx->r20, 0X18);
    // 0x8002A980: addiu       $t1, $s1, 0x28
    ctx->r9 = ADD32(ctx->r17, 0X28);
    // 0x8002A984: addiu       $t2, $s1, 0x2C
    ctx->r10 = ADD32(ctx->r17, 0X2C);
    // 0x8002A988: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8002A98C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8002A990: addiu       $a3, $s1, 0x24
    ctx->r7 = ADD32(ctx->r17, 0X24);
    // 0x8002A994: andi        $a0, $t5, 0x3FF
    ctx->r4 = ctx->r13 & 0X3FF;
    // 0x8002A998: andi        $a1, $t7, 0x3FF
    ctx->r5 = ctx->r15 & 0X3FF;
    // 0x8002A99C: jal         0x80033898
    // 0x8002A9A0: andi        $a2, $t9, 0x3FF
    ctx->r6 = ctx->r25 & 0X3FF;
    func_80033898_34498(rdram, ctx);
        goto after_4;
    // 0x8002A9A0: andi        $a2, $t9, 0x3FF
    ctx->r6 = ctx->r25 & 0X3FF;
    after_4:
    // 0x8002A9A4: b           L_8002A9CC
    // 0x8002A9A8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_8002A9CC;
    // 0x8002A9A8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8002A9AC:
    // 0x8002A9AC: beq         $at, $zero, L_8002A9C8
    if (ctx->r1 == 0) {
        // 0x8002A9B0: or          $s0, $t3, $zero
        ctx->r16 = ctx->r11 | 0;
            goto L_8002A9C8;
    }
    // 0x8002A9B0: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x8002A9B4: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8002A9B8: addu        $v0, $s6, $t4
    ctx->r2 = ADD32(ctx->r22, ctx->r12);
    // 0x8002A9BC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8002A9C0: bnel        $v1, $zero, L_8002A8EC
    if (ctx->r3 != 0) {
        // 0x8002A9C4: lw          $t5, 0x4($v0)
        ctx->r13 = MEM_W(ctx->r2, 0X4);
            goto L_8002A8EC;
    }
    goto skip_0;
    // 0x8002A9C4: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    skip_0:
L_8002A9C8:
    // 0x8002A9C8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8002A9CC:
    // 0x8002A9CC: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x8002A9D0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8002A9D4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8002A9D8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8002A9DC: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8002A9E0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8002A9E4: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8002A9E8: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8002A9EC: jr          $ra
    // 0x8002A9F0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x8002A9F0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void _loadOutputBuffer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80051D54: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80051D58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80051D5C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80051D60: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80051D64: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80051D68: lw          $t6, 0x24($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X24);
    // 0x80051D6C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80051D70: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x80051D74: beq         $t6, $zero, L_80051F30
    if (ctx->r14 == 0) {
        // 0x80051D78: or          $t2, $a0, $zero
        ctx->r10 = ctx->r4 | 0;
            goto L_80051F30;
    }
    // 0x80051D78: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x80051D7C: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x80051D80: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x80051D84: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80051D88: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80051D8C: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x80051D90: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x80051D94: jal         0x800518E0
    // 0x80051D98: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    _doModFunc(rdram, ctx);
        goto after_0;
    // 0x80051D98: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    after_0:
    // 0x80051D9C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80051DA0: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x80051DA4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80051DA8: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80051DAC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80051DB0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80051DB4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80051DB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80051DBC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80051DC0: addiu       $a2, $zero, 0x280
    ctx->r6 = ADD32(0, 0X280);
    // 0x80051DC4: div.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80051DC8: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80051DCC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80051DD0: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x80051DD4: nop

    // 0x80051DD8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80051DDC: nop

    // 0x80051DE0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80051DE4: div.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80051DE8: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x80051DEC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80051DF0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80051DF4: sub.d       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f4.d - ctx->f16.d;
    // 0x80051DF8: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
    // 0x80051DFC: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x80051E00: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x80051E04: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80051E08: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80051E0C: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80051E10: trunc.w.s   $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x80051E14: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x80051E18: nop

    // 0x80051E1C: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80051E20: nop

    // 0x80051E24: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80051E28: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x80051E2C: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x80051E30: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x80051E34: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x80051E38: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x80051E3C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80051E40: subu        $t4, $t8, $t9
    ctx->r12 = SUB32(ctx->r24, ctx->r25);
    // 0x80051E44: negu        $t5, $t4
    ctx->r13 = SUB32(0, ctx->r12);
    // 0x80051E48: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80051E4C: addu        $t0, $t7, $t6
    ctx->r8 = ADD32(ctx->r15, ctx->r14);
    // 0x80051E50: andi        $v1, $t0, 0x7
    ctx->r3 = ctx->r8 & 0X7;
    // 0x80051E54: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x80051E58: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80051E5C: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x80051E60: subu        $a1, $t0, $t3
    ctx->r5 = SUB32(ctx->r8, ctx->r11);
    // 0x80051E64: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80051E68: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x80051E6C: addu        $a3, $t1, $t8
    ctx->r7 = ADD32(ctx->r9, ctx->r24);
    // 0x80051E70: jal         0x80051BC8
    // 0x80051E74: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    _loadBuffer(rdram, ctx);
        goto after_1;
    // 0x80051E74: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x80051E78: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80051E7C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80051E80: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80051E84: addiu       $t4, $t3, 0x280
    ctx->r12 = ADD32(ctx->r11, 0X280);
    // 0x80051E88: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x80051E8C: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x80051E90: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80051E94: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x80051E98: sll         $t4, $s1, 1
    ctx->r12 = S32(ctx->r17 << 1);
    // 0x80051E9C: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x80051EA0: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80051EA4: or          $t7, $t9, $t5
    ctx->r15 = ctx->r25 | ctx->r13;
    // 0x80051EA8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80051EAC: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x80051EB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80051EB4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80051EB8: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80051EBC: lw          $t5, 0x24($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X24);
    // 0x80051EC0: mul.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80051EC4: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x80051EC8: lw          $t7, 0x24($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X24);
    // 0x80051ECC: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x80051ED0: andi        $t6, $t7, 0xFF
    ctx->r14 = ctx->r15 & 0XFF;
    // 0x80051ED4: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x80051ED8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80051EDC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x80051EE0: nop

    // 0x80051EE4: andi        $t9, $t4, 0xFFFF
    ctx->r25 = ctx->r12 & 0XFFFF;
    // 0x80051EE8: or          $t4, $t8, $at
    ctx->r12 = ctx->r24 | ctx->r1;
    // 0x80051EEC: or          $t5, $t4, $t9
    ctx->r13 = ctx->r12 | ctx->r25;
    // 0x80051EF0: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x80051EF4: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x80051EF8: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x80051EFC: jal         0x80047710
    // 0x80051F00: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x80051F00: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    after_2:
    // 0x80051F04: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80051F08: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80051F0C: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x80051F10: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
    // 0x80051F14: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x80051F18: sw          $zero, 0x24($t8)
    MEM_W(0X24, ctx->r24) = 0;
    // 0x80051F1C: lw          $t4, 0x18($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X18);
    // 0x80051F20: addu        $t9, $t4, $t1
    ctx->r25 = ADD32(ctx->r12, ctx->r9);
    // 0x80051F24: subu        $t5, $t9, $s1
    ctx->r13 = SUB32(ctx->r25, ctx->r17);
    // 0x80051F28: b           L_80051F60
    // 0x80051F2C: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
        goto L_80051F60;
    // 0x80051F2C: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
L_80051F30:
    // 0x80051F30: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x80051F34: lw          $t7, 0x18($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X18);
    // 0x80051F38: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x80051F3C: negu        $t8, $t6
    ctx->r24 = SUB32(0, ctx->r14);
    // 0x80051F40: sll         $t4, $t8, 1
    ctx->r12 = S32(ctx->r24 << 1);
    // 0x80051F44: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80051F48: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80051F4C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x80051F50: addu        $a1, $t7, $t4
    ctx->r5 = ADD32(ctx->r15, ctx->r12);
    // 0x80051F54: jal         0x80051BC8
    // 0x80051F58: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    _loadBuffer(rdram, ctx);
        goto after_3;
    // 0x80051F58: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_3:
    // 0x80051F5C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80051F60:
    // 0x80051F60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80051F64: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80051F68: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80051F6C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80051F70: jr          $ra
    // 0x80051F74: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x80051F74: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80037B78_38778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037B78: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80037B7C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x80037B80: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x80037B84: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80037B88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80037B8C: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80037B90: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80037B94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037B98: addiu       $t7, $t7, 0x71F0
    ctx->r15 = ADD32(ctx->r15, 0X71F0);
    // 0x80037B9C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80037BA0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80037BA4: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    // 0x80037BA8: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x80037BAC: jal         0x8004665C
    // 0x80037BB0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    osMotorInit_recomp(rdram, ctx);
        goto after_0;
    // 0x80037BB0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80037BB4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80037BB8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80037BBC: addiu       $t9, $t9, -0x2510
    ctx->r25 = ADD32(ctx->r25, -0X2510);
    // 0x80037BC0: sll         $t8, $a3, 5
    ctx->r24 = S32(ctx->r7 << 5);
    // 0x80037BC4: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80037BC8: beq         $v0, $zero, L_80037BD8
    if (ctx->r2 == 0) {
        // 0x80037BCC: sw          $v0, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->r2;
            goto L_80037BD8;
    }
    // 0x80037BCC: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x80037BD0: b           L_80037BF8
    // 0x80037BD4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_80037BF8;
    // 0x80037BD4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_80037BD8:
    // 0x80037BD8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80037BDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80037BE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80037BE4: jal         0x80037C20
    // 0x80037BE8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80037C20_38820(rdram, ctx);
        goto after_1;
    // 0x80037BE8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80037BEC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80037BF0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80037BF4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_80037BF8:
    // 0x80037BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037BFC: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x80037C00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80037C04: jr          $ra
    // 0x80037C08: nop

    TRACE_RETURN()
    return;
    // 0x80037C08: nop

;}
RECOMP_FUNC void func_8000DBC0_E7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000DBC0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8000DBC4: jr          $ra
    // 0x8000DBC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8000DBC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8002AA00_2B600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002AA00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002AA04: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002AA08: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8002AA0C: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x8002AA10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002AA14: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    // 0x8002AA18: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8002AA1C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8002AA20: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8002AA24: bc1f        L_8002AA54
    if (!c1cs) {
        // 0x8002AA28: lwc1        $f0, 0x38($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
            goto L_8002AA54;
    }
    // 0x8002AA28: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002AA2C: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002AA30: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8002AA34: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x8002AA38: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x8002AA3C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8002AA40: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x8002AA44: jal         0x8002B3B0
    // 0x8002AA48: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_8002B3B0_2BFB0(rdram, ctx);
        goto after_0;
    // 0x8002AA48: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8002AA4C: b           L_8002AACC
    // 0x8002AA50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8002AACC;
    // 0x8002AA50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002AA54:
    // 0x8002AA54: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8002AA58: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8002AA5C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8002AA60: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8002AA64: bc1fl       L_8002AAAC
    if (!c1cs) {
        // 0x8002AA68: lwc1        $f16, 0x40($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
            goto L_8002AAAC;
    }
    goto skip_0;
    // 0x8002AA68: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    skip_0:
    // 0x8002AA6C: c.eq.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl == ctx->f2.fl;
    // 0x8002AA70: nop

    // 0x8002AA74: bc1fl       L_8002AAAC
    if (!c1cs) {
        // 0x8002AA78: lwc1        $f16, 0x40($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
            goto L_8002AAAC;
    }
    goto skip_1;
    // 0x8002AA78: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    skip_1:
    // 0x8002AA7C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8002AA80: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x8002AA84: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8002AA88: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8002AA8C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x8002AA90: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x8002AA94: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8002AA98: jal         0x8002AAD8
    // 0x8002AA9C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_8002AAD8_2B6D8(rdram, ctx);
        goto after_1;
    // 0x8002AA9C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8002AAA0: b           L_8002AACC
    // 0x8002AAA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8002AACC;
    // 0x8002AAA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002AAA8: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
L_8002AAAC:
    // 0x8002AAAC: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8002AAB0: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x8002AAB4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x8002AAB8: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x8002AABC: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8002AAC0: jal         0x8002BDEC
    // 0x8002AAC4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_8002BDEC_2C9EC(rdram, ctx);
        goto after_2;
    // 0x8002AAC4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x8002AAC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002AACC:
    // 0x8002AACC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8002AAD0: jr          $ra
    // 0x8002AAD4: nop

    TRACE_RETURN()
    return;
    // 0x8002AAD4: nop

;}
RECOMP_FUNC void func_800273E0_27FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800273E0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x800273E4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800273E8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x800273EC: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x800273F0: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x800273F4: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x800273F8: lbu         $t6, 0x93($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X93);
    // 0x800273FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80027400: bnel        $t6, $zero, L_80027418
    if (ctx->r14 != 0) {
        // 0x80027404: lhu         $t7, 0x5E($a1)
        ctx->r15 = MEM_HU(ctx->r5, 0X5E);
            goto L_80027418;
    }
    goto skip_0;
    // 0x80027404: lhu         $t7, 0x5E($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X5E);
    skip_0:
    // 0x80027408: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002740C: nop

    // 0x80027410: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x80027414: lhu         $t7, 0x5E($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X5E);
L_80027418:
    // 0x80027418: lui         $t9, 0x8023
    ctx->r25 = S32(0X8023 << 16);
    // 0x8002741C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80027420: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80027424: lw          $t9, 0x6984($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6984);
    // 0x80027428: lw          $t3, 0x0($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X0);
    // 0x8002742C: lhu         $a0, 0x0($t3)
    ctx->r4 = MEM_HU(ctx->r11, 0X0);
    // 0x80027430: jal         0x800141C4
    // 0x80027434: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x80027434: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80027438: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x8002743C: lui         $t6, 0x8023
    ctx->r14 = S32(0X8023 << 16);
    // 0x80027440: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x80027444: lhu         $t4, 0x5E($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X5E);
    // 0x80027448: lbu         $t8, 0x6C($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X6C);
    // 0x8002744C: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80027450: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80027454: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80027458: lw          $t6, 0x6984($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6984);
    // 0x8002745C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80027460: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x80027464: addu        $v1, $t7, $t9
    ctx->r3 = ADD32(ctx->r15, ctx->r25);
    // 0x80027468: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8002746C: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x80027470: subu        $t4, $t1, $a2
    ctx->r12 = SUB32(ctx->r9, ctx->r6);
    // 0x80027474: addu        $t1, $t4, $v0
    ctx->r9 = ADD32(ctx->r12, ctx->r2);
    // 0x80027478: lh          $a0, 0x4($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X4);
    // 0x8002747C: sw          $a1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r5;
    // 0x80027480: lw          $t0, 0x18($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X18);
    // 0x80027484: subu        $t3, $t2, $a2
    ctx->r11 = SUB32(ctx->r10, ctx->r6);
    // 0x80027488: addu        $t2, $t3, $v0
    ctx->r10 = ADD32(ctx->r11, ctx->r2);
    // 0x8002748C: sw          $t0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r8;
    // 0x80027490: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80027494: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80027498: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x8002749C: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800274A0: lwc1        $f6, 0xC($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800274A4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800274A8: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x800274AC: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800274B0: lwc1        $f4, 0x10($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X10);
    // 0x800274B4: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800274B8: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x800274BC: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x800274C0: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x800274C4: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x800274C8: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800274CC: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x800274D0: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x800274D4: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x800274D8: beq         $a0, $zero, L_800274F8
    if (ctx->r4 == 0) {
        // 0x800274DC: lwc1        $f18, 0x1C($t0)
        ctx->f18.u32l = MEM_W(ctx->r8, 0X1C);
            goto L_800274F8;
    }
    // 0x800274DC: lwc1        $f18, 0x1C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800274E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800274E4: nop

    // 0x800274E8: c.eq.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl == ctx->f6.fl;
    // 0x800274EC: nop

    // 0x800274F0: bc1f        L_80027500
    if (!c1cs) {
        // 0x800274F4: nop
    
            goto L_80027500;
    }
    // 0x800274F4: nop

L_800274F8:
    // 0x800274F8: b           L_8002752C
    // 0x800274FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_8002752C;
    // 0x800274FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80027500:
    // 0x80027500: bgez        $a0, L_80027510
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80027504: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80027510;
    }
    // 0x80027504: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80027508: b           L_80027510
    // 0x8002750C: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
        goto L_80027510;
    // 0x8002750C: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
L_80027510:
    // 0x80027510: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80027514: nop

    // 0x80027518: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002751C: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80027520: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80027524: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80027528: nop

L_8002752C:
    // 0x8002752C: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x80027530: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80027534: lwc1        $f12, 0x7C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80027538: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002753C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80027540: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80027544: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80027548: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x8002754C: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x80027550: nop

    // 0x80027554: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x80027558: bc1f        L_80027568
    if (!c1cs) {
        // 0x8002755C: cvt.s.w     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80027568;
    }
    // 0x8002755C: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80027560: b           L_8002756C
    // 0x80027564: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_8002756C;
    // 0x80027564: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
L_80027568:
    // 0x80027568: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8002756C:
    // 0x8002756C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80027570: nop

    // 0x80027574: bc1tl       L_800275EC
    if (c1cs) {
        // 0x80027578: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_800275EC;
    }
    goto skip_1;
    // 0x80027578: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_1:
    // 0x8002757C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80027580: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80027584: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x80027588: nop

    // 0x8002758C: bc1fl       L_800275A0
    if (!c1cs) {
        // 0x80027590: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_800275A0;
    }
    goto skip_2;
    // 0x80027590: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    skip_2:
    // 0x80027594: b           L_800275A0
    // 0x80027598: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_800275A0;
    // 0x80027598: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x8002759C: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_800275A0:
    // 0x800275A0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x800275A4: nop

    // 0x800275A8: bc1tl       L_800275EC
    if (c1cs) {
        // 0x800275AC: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_800275EC;
    }
    goto skip_3;
    // 0x800275AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_3:
    // 0x800275B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800275B4: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    // 0x800275B8: addiu       $t6, $sp, 0x78
    ctx->r14 = ADD32(ctx->r29, 0X78);
    // 0x800275BC: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x800275C0: nop

    // 0x800275C4: bc1fl       L_800275D8
    if (!c1cs) {
        // 0x800275C8: mov.s       $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
            goto L_800275D8;
    }
    goto skip_4;
    // 0x800275C8: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    skip_4:
    // 0x800275CC: b           L_800275D8
    // 0x800275D0: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
        goto L_800275D8;
    // 0x800275D0: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    // 0x800275D4: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_800275D8:
    // 0x800275D8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x800275DC: nop

    // 0x800275E0: bc1fl       L_800275F8
    if (!c1cs) {
        // 0x800275E4: lhu         $t8, 0x14($t0)
        ctx->r24 = MEM_HU(ctx->r8, 0X14);
            goto L_800275F8;
    }
    goto skip_5;
    // 0x800275E4: lhu         $t8, 0x14($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X14);
    skip_5:
    // 0x800275E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_800275EC:
    // 0x800275EC: b           L_800277B0
    // 0x800275F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_800277B0;
    // 0x800275F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800275F4: lhu         $t8, 0x14($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X14);
L_800275F8:
    // 0x800275F8: lhu         $t9, 0x16($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X16);
    // 0x800275FC: lhu         $t4, 0x18($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X18);
    // 0x80027600: andi        $a0, $t8, 0x3FF
    ctx->r4 = ctx->r24 & 0X3FF;
    // 0x80027604: addiu       $t8, $sp, 0x74
    ctx->r24 = ADD32(ctx->r29, 0X74);
    // 0x80027608: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8002760C: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x80027610: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x80027614: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x80027618: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x8002761C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80027620: andi        $a1, $t9, 0x3FF
    ctx->r5 = ctx->r25 & 0X3FF;
    // 0x80027624: jal         0x80033A3C
    // 0x80027628: andi        $a2, $t4, 0x3FF
    ctx->r6 = ctx->r12 & 0X3FF;
    func_80033A3C_3463C(rdram, ctx);
        goto after_1;
    // 0x80027628: andi        $a2, $t4, 0x3FF
    ctx->r6 = ctx->r12 & 0X3FF;
    after_1:
    // 0x8002762C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80027630: addiu       $t8, $sp, 0x6C
    ctx->r24 = ADD32(ctx->r29, 0X6C);
    // 0x80027634: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    // 0x80027638: lhu         $t7, 0x14($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X14);
    // 0x8002763C: lhu         $t3, 0x16($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X16);
    // 0x80027640: lhu         $t5, 0x18($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0X18);
    // 0x80027644: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    // 0x80027648: addiu       $t7, $sp, 0x68
    ctx->r15 = ADD32(ctx->r29, 0X68);
    // 0x8002764C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80027650: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80027654: andi        $a1, $t3, 0x3FF
    ctx->r5 = ctx->r11 & 0X3FF;
    // 0x80027658: jal         0x80033A3C
    // 0x8002765C: andi        $a2, $t5, 0x3FF
    ctx->r6 = ctx->r13 & 0X3FF;
    func_80033A3C_3463C(rdram, ctx);
        goto after_2;
    // 0x8002765C: andi        $a2, $t5, 0x3FF
    ctx->r6 = ctx->r13 & 0X3FF;
    after_2:
    // 0x80027660: lbu         $t9, 0x93($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X93);
    // 0x80027664: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80027668: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x8002766C: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80027670: bne         $t9, $zero, L_800276BC
    if (ctx->r25 != 0) {
        // 0x80027674: lwc1        $f18, 0x64($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
            goto L_800276BC;
    }
    // 0x80027674: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80027678: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8002767C: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80027680: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80027684: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80027688: lwc1        $f12, 0x7C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8002768C: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80027690: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x80027694: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80027698: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8002769C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800276A0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800276A4: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x800276A8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800276AC: jal         0x80027A7C
    // 0x800276B0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027A7C_2867C(rdram, ctx);
        goto after_3;
    // 0x800276B0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x800276B4: b           L_80027704
    // 0x800276B8: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
        goto L_80027704;
    // 0x800276B8: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
L_800276BC:
    // 0x800276BC: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x800276C0: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x800276C4: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x800276C8: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x800276CC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x800276D0: lwc1        $f12, 0x7C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x800276D4: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800276D8: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x800276DC: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x800276E0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x800276E4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800276E8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800276EC: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x800276F0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800276F4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x800276F8: jal         0x8002CC94
    // 0x800276FC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    func_8002CC94_2D894(rdram, ctx);
        goto after_4;
    // 0x800276FC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x80027700: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
L_80027704:
    // 0x80027704: lh          $t3, 0x38($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X38);
    // 0x80027708: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002770C: addiu       $a3, $s0, 0x18
    ctx->r7 = ADD32(ctx->r16, 0X18);
    // 0x80027710: bnel        $t3, $at, L_800277A8
    if (ctx->r11 != ctx->r1) {
        // 0x80027714: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_800277A8;
    }
    goto skip_6;
    // 0x80027714: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_6:
    // 0x80027718: lhu         $t4, 0x14($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X14);
    // 0x8002771C: lhu         $t6, 0x16($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X16);
    // 0x80027720: lhu         $t7, 0x18($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X18);
    // 0x80027724: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    // 0x80027728: addiu       $t4, $s0, 0x20
    ctx->r12 = ADD32(ctx->r16, 0X20);
    // 0x8002772C: addiu       $t3, $s0, 0x1C
    ctx->r11 = ADD32(ctx->r16, 0X1C);
    // 0x80027730: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80027734: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80027738: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x8002773C: andi        $a1, $t6, 0x3FF
    ctx->r5 = ctx->r14 & 0X3FF;
    // 0x80027740: jal         0x80033898
    // 0x80027744: andi        $a2, $t7, 0x3FF
    ctx->r6 = ctx->r15 & 0X3FF;
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x80027744: andi        $a2, $t7, 0x3FF
    ctx->r6 = ctx->r15 & 0X3FF;
    after_5:
    // 0x80027748: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8002774C: addiu       $t4, $s0, 0x28
    ctx->r12 = ADD32(ctx->r16, 0X28);
    // 0x80027750: addiu       $a3, $s0, 0x24
    ctx->r7 = ADD32(ctx->r16, 0X24);
    // 0x80027754: lhu         $t5, 0x14($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0X14);
    // 0x80027758: lhu         $t8, 0x16($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X16);
    // 0x8002775C: lhu         $t9, 0x18($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X18);
    // 0x80027760: andi        $a0, $t5, 0x3FF
    ctx->r4 = ctx->r13 & 0X3FF;
    // 0x80027764: addiu       $t5, $s0, 0x2C
    ctx->r13 = ADD32(ctx->r16, 0X2C);
    // 0x80027768: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8002776C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80027770: andi        $a1, $t8, 0x3FF
    ctx->r5 = ctx->r24 & 0X3FF;
    // 0x80027774: jal         0x80033898
    // 0x80027778: andi        $a2, $t9, 0x3FF
    ctx->r6 = ctx->r25 & 0X3FF;
    func_80033898_34498(rdram, ctx);
        goto after_6;
    // 0x80027778: andi        $a2, $t9, 0x3FF
    ctx->r6 = ctx->r25 & 0X3FF;
    after_6:
    // 0x8002777C: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80027780: lwc1        $f12, 0x1C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80027784: lwc1        $f14, 0x20($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80027788: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8002778C: nop

    // 0x80027790: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80027794: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80027798: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8002779C: b           L_800277AC
    // 0x800277A0: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
        goto L_800277AC;
    // 0x800277A0: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800277A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_800277A8:
    // 0x800277A8: nop

L_800277AC:
    // 0x800277AC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800277B0:
    // 0x800277B0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x800277B4: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x800277B8: jr          $ra
    // 0x800277BC: nop

    TRACE_RETURN()
    return;
    // 0x800277BC: nop

;}
RECOMP_FUNC void func_800258D0_264D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800258D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800258D4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800258D8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800258DC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800258E0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800258E4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800258E8: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x800258EC: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x800258F0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800258F4: sw          $a0, 0x74($t0)
    MEM_W(0X74, ctx->r8) = ctx->r4;
    // 0x800258F8: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
    // 0x800258FC: lbu         $a1, 0x27($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X27);
    // 0x80025900: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80025904: lw          $t2, 0x30($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X30);
    // 0x80025908: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8002590C: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80025910: addiu       $t3, $zero, 0x40
    ctx->r11 = ADD32(0, 0X40);
    // 0x80025914: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x80025918: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x8002591C: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x80025920: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x80025924: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80025928: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8002592C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80025930: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80025934: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80025938: addiu       $a2, $a2, -0x2120
    ctx->r6 = ADD32(ctx->r6, -0X2120);
    // 0x8002593C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80025940: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80025944: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80025948: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x8002594C: jal         0x80026FE8
    // 0x80025950: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_80026FE8_27BE8(rdram, ctx);
        goto after_0;
    // 0x80025950: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_0:
    // 0x80025954: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80025958: lui         $t2, 0xB900
    ctx->r10 = S32(0XB900 << 16);
    // 0x8002595C: lui         $t3, 0xC810
    ctx->r11 = S32(0XC810 << 16);
    // 0x80025960: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80025964: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80025968: ori         $t3, $t3, 0x45D8
    ctx->r11 = ctx->r11 | 0X45D8;
    // 0x8002596C: andi        $t7, $t1, 0x4000
    ctx->r15 = ctx->r9 & 0X4000;
    // 0x80025970: beq         $t7, $zero, L_80025984
    if (ctx->r15 == 0) {
        // 0x80025974: ori         $t2, $t2, 0x31D
        ctx->r10 = ctx->r10 | 0X31D;
            goto L_80025984;
    }
    // 0x80025974: ori         $t2, $t2, 0x31D
    ctx->r10 = ctx->r10 | 0X31D;
    // 0x80025978: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x8002597C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80025980: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
L_80025984:
    // 0x80025984: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80025988: sw          $a0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r4;
    // 0x8002598C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80025990: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80025994: jr          $ra
    // 0x80025998: nop

    TRACE_RETURN()
    return;
    // 0x80025998: nop

;}
RECOMP_FUNC void _collectPVoices(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800478E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800478EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800478F0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800478F4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800478F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800478FC: lw          $s0, 0x14($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X14);
    // 0x80047900: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80047904: addiu       $s2, $a0, 0x4
    ctx->r18 = ADD32(ctx->r4, 0X4);
    // 0x80047908: beql        $s0, $zero, L_80047934
    if (ctx->r16 == 0) {
        // 0x8004790C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80047934;
    }
    goto skip_0;
    // 0x8004790C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_80047910:
    // 0x80047910: jal         0x800475F0
    // 0x80047914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x80047914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80047918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8004791C: jal         0x80047620
    // 0x80047920: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alLink(rdram, ctx);
        goto after_1;
    // 0x80047920: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x80047924: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x80047928: bne         $s0, $zero, L_80047910
    if (ctx->r16 != 0) {
        // 0x8004792C: nop
    
            goto L_80047910;
    }
    // 0x8004792C: nop

    // 0x80047930: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80047934:
    // 0x80047934: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80047938: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8004793C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80047940: jr          $ra
    // 0x80047944: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80047944: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8000E6F4_F2F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E6F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000E6F8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8000E6FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E700: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000E704: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x8000E708: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8000E70C: addiu       $a2, $a3, 0x10
    ctx->r6 = ADD32(ctx->r7, 0X10);
    // 0x8000E710: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8000E714: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8000E718: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x8000E71C: jal         0x8000E630
    // 0x8000E720: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x8000E720: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_0:
    // 0x8000E724: lhu         $a1, 0x2A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2A);
    // 0x8000E728: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8000E72C: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x8000E730: andi        $t7, $a1, 0x3FF
    ctx->r15 = ctx->r5 & 0X3FF;
    // 0x8000E734: subu        $a1, $t8, $t7
    ctx->r5 = SUB32(ctx->r24, ctx->r15);
    // 0x8000E738: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x8000E73C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8000E740: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E744: lwc1        $f12, 0x10($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8000E748: jal         0x8000E630
    // 0x8000E74C: addiu       $a2, $a0, 0x8
    ctx->r6 = ADD32(ctx->r4, 0X8);
    func_8000E630_F230(rdram, ctx);
        goto after_1;
    // 0x8000E74C: addiu       $a2, $a0, 0x8
    ctx->r6 = ADD32(ctx->r4, 0X8);
    after_1:
    // 0x8000E750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E754: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000E758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000E75C: jr          $ra
    // 0x8000E760: nop

    TRACE_RETURN()
    return;
    // 0x8000E760: nop

;}
RECOMP_FUNC void func_80039F84_3AB84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80039F84: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80039F88: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80039F8C: addiu       $v0, $v0, 0x9D0
    ctx->r2 = ADD32(ctx->r2, 0X9D0);
    // 0x80039F90: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80039F94: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80039F98: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80039F9C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80039FA0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80039FA4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80039FA8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80039FAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80039FB0: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80039FB4: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80039FB8: addiu       $s1, $s1, 0xC28
    ctx->r17 = ADD32(ctx->r17, 0XC28);
    // 0x80039FBC: beq         $t6, $zero, L_8003A038
    if (ctx->r14 == 0) {
        // 0x80039FC0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8003A038;
    }
    // 0x80039FC0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80039FC4: lui         $s4, 0x801C
    ctx->r20 = S32(0X801C << 16);
    // 0x80039FC8: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x80039FCC: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x80039FD0: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80039FD4: addiu       $s2, $s2, 0x1728
    ctx->r18 = ADD32(ctx->r18, 0X1728);
    // 0x80039FD8: addiu       $s3, $s3, -0x5DD0
    ctx->r19 = ADD32(ctx->r19, -0X5DD0);
    // 0x80039FDC: addiu       $s4, $s4, 0xA68
    ctx->r20 = ADD32(ctx->r20, 0XA68);
    // 0x80039FE0: addiu       $s6, $zero, 0x10
    ctx->r22 = ADD32(0, 0X10);
    // 0x80039FE4: addiu       $s5, $zero, 0x1C
    ctx->r21 = ADD32(0, 0X1C);
L_80039FE8:
    // 0x80039FE8: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
    // 0x80039FEC: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80039FF0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80039FF4: beql        $t7, $zero, L_8003A030
    if (ctx->r15 == 0) {
        // 0x80039FF8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8003A030;
    }
    goto skip_0;
    // 0x80039FF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80039FFC: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x8003A000: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003A004: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x8003A008: sb          $t9, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r25;
    // 0x8003A00C: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x8003A010: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8003A014: lhu         $a2, 0x58($t1)
    ctx->r6 = MEM_HU(ctx->r9, 0X58);
    // 0x8003A018: mflo        $t0
    ctx->r8 = lo;
    // 0x8003A01C: sra         $t3, $a2, 8
    ctx->r11 = S32(SIGNED(ctx->r6) >> 8);
    // 0x8003A020: andi        $a2, $t3, 0x7F
    ctx->r6 = ctx->r11 & 0X7F;
    // 0x8003A024: jal         0x800485B0
    // 0x8003A028: addu        $a1, $s4, $t0
    ctx->r5 = ADD32(ctx->r20, ctx->r8);
    alSynSetPan(rdram, ctx);
        goto after_0;
    // 0x8003A028: addu        $a1, $s4, $t0
    ctx->r5 = ADD32(ctx->r20, ctx->r8);
    after_0:
    // 0x8003A02C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8003A030:
    // 0x8003A030: bne         $s0, $s6, L_80039FE8
    if (ctx->r16 != ctx->r22) {
        // 0x8003A034: addiu       $s1, $s1, 0xB0
        ctx->r17 = ADD32(ctx->r17, 0XB0);
            goto L_80039FE8;
    }
    // 0x8003A034: addiu       $s1, $s1, 0xB0
    ctx->r17 = ADD32(ctx->r17, 0XB0);
L_8003A038:
    // 0x8003A038: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8003A03C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003A040: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003A044: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003A048: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003A04C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003A050: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8003A054: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8003A058: jr          $ra
    // 0x8003A05C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8003A05C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8000E23C_EE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E23C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8000E240: addu        $v0, $a0, $a2
    ctx->r2 = ADD32(ctx->r4, ctx->r6);
    // 0x8000E244: sb          $zero, 0x8C($v0)
    MEM_B(0X8C, ctx->r2) = 0;
    // 0x8000E248: sb          $a3, 0x90($v0)
    MEM_B(0X90, ctx->r2) = ctx->r7;
    // 0x8000E24C: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x8000E250: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8000E254: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x8000E258: lui         $t4, 0x8006
    ctx->r12 = S32(0X8006 << 16);
    // 0x8000E25C: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x8000E260: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8000E264: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x8000E268: lw          $t4, 0x36D0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X36D0);
    // 0x8000E26C: lw          $t0, 0x38($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X38);
    // 0x8000E270: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x8000E274: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x8000E278: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x8000E27C: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x8000E280: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x8000E284: jr          $ra
    // 0x8000E288: sw          $t2, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r10;
    TRACE_RETURN()
    return;
    // 0x8000E288: sw          $t2, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r10;
;}
RECOMP_FUNC void _timeToSamples(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047858: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x8004785C: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x80047860: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80047864: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80047868: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004786C: ldc1        $f4, -0x2C80($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X2C80);
    // 0x80047870: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80047874: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80047878: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8004787C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80047880: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80047884: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80047888: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8004788C: div.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x80047890: add.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d + ctx->f6.d;
    // 0x80047894: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x80047898: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8004789C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x800478A0: nop

    // 0x800478A4: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x800478A8: jr          $ra
    // 0x800478AC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    TRACE_RETURN()
    return;
    // 0x800478AC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_80011734_12334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80011734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80011738: beq         $a0, $zero, L_80011750
    if (ctx->r4 == 0) {
        // 0x8001173C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80011750;
    }
    // 0x8001173C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80011740: sw          $a1, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r5;
    // 0x80011744: lui         $a0, 0x8001
    ctx->r4 = S32(0X8001 << 16);
    // 0x80011748: jal         0x8003521C
    // 0x8001174C: addiu       $a0, $a0, 0x16DC
    ctx->r4 = ADD32(ctx->r4, 0X16DC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x8001174C: addiu       $a0, $a0, 0x16DC
    ctx->r4 = ADD32(ctx->r4, 0X16DC);
    after_0:
L_80011750:
    // 0x80011750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80011754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80011758: jr          $ra
    // 0x8001175C: nop

    TRACE_RETURN()
    return;
    // 0x8001175C: nop

;}
RECOMP_FUNC void func_8000F52C_1012C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000F52C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000F530: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8000F534: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000F538: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8000F53C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8000F540: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8000F544: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8000F548: or          $t6, $a2, $zero
    ctx->r14 = ctx->r6 | 0;
    // 0x8000F54C: lw          $a1, 0x8($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X8);
    // 0x8000F550: lw          $a2, 0xC($a2)
    ctx->r6 = MEM_W(ctx->r6, 0XC);
    // 0x8000F554: lw          $a3, 0x10($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X10);
    // 0x8000F558: addiu       $t7, $sp, 0x24
    ctx->r15 = ADD32(ctx->r29, 0X24);
    // 0x8000F55C: addiu       $t8, $sp, 0x20
    ctx->r24 = ADD32(ctx->r29, 0X20);
    // 0x8000F560: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8000F564: jal         0x8001CC38
    // 0x8000F568: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8001CC38_1D838(rdram, ctx);
        goto after_0;
    // 0x8000F568: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x8000F56C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000F570: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x8000F574: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x8000F578: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000F57C: bc1fl       L_8000F5EC
    if (!c1cs) {
        // 0x8000F580: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000F5EC;
    }
    goto skip_0;
    // 0x8000F580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8000F584: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8000F588: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x8000F58C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8000F590: nop

    // 0x8000F594: bc1tl       L_8000F5EC
    if (c1cs) {
        // 0x8000F598: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000F5EC;
    }
    goto skip_1;
    // 0x8000F598: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8000F59C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000F5A0: nop

    // 0x8000F5A4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8000F5A8: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000F5AC: bc1tl       L_8000F5EC
    if (c1cs) {
        // 0x8000F5B0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000F5EC;
    }
    goto skip_2;
    // 0x8000F5B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x8000F5B4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8000F5B8: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x8000F5BC: bc1tl       L_8000F5EC
    if (c1cs) {
        // 0x8000F5C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000F5EC;
    }
    goto skip_3;
    // 0x8000F5C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x8000F5C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000F5C8: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    // 0x8000F5CC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8000F5D0: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8000F5D4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8000F5D8: bc1tl       L_8000F5EC
    if (c1cs) {
        // 0x8000F5DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000F5EC;
    }
    goto skip_4;
    // 0x8000F5DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x8000F5E0: jal         0x8000F420
    // 0x8000F5E4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    func_8000F420_10020(rdram, ctx);
        goto after_1;
    // 0x8000F5E4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x8000F5E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8000F5EC:
    // 0x8000F5EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000F5F0: jr          $ra
    // 0x8000F5F4: nop

    TRACE_RETURN()
    return;
    // 0x8000F5F4: nop

;}
RECOMP_FUNC void func_80001FE8_2BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001FE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001FEC: lui         $a1, 0xC
    ctx->r5 = S32(0XC << 16);
    // 0x80001FF0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80001FF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001FF8: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x80001FFC: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80002000: addiu       $v0, $zero, 0x7C
    ctx->r2 = ADD32(0, 0X7C);
L_80002004:
    // 0x80002004: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80002008: sltiu       $v1, $v0, 0x4
    ctx->r3 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8000200C: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x80002010: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80002014: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80002018: sw          $zero, 0x780C($t8)
    MEM_W(0X780C, ctx->r24) = 0;
    // 0x8000201C: bne         $v1, $zero, L_80002004
    if (ctx->r3 != 0) {
        // 0x80002020: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_80002004;
    }
    // 0x80002020: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80002024: jal         0x80041720
    // 0x80002028: nop

    osUnmapTLBAll_recomp(rdram, ctx);
        goto after_0;
    // 0x80002028: nop

    after_0:
    // 0x8000202C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002034: jr          $ra
    // 0x80002038: nop

    TRACE_RETURN()
    return;
    // 0x80002038: nop

;}
RECOMP_FUNC void func_8000E764_F364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E764: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000E768: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000E76C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8000E770: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000E774: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8000E778: andi        $s0, $t6, 0x3FF
    ctx->r16 = ctx->r14 & 0X3FF;
    // 0x8000E77C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8000E780: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8000E784: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8000E788: jal         0x80003EA0
    // 0x8000E78C: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_0;
    // 0x8000E78C: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_0:
    // 0x8000E790: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8000E794: jal         0x80003E10
    // 0x8000E798: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x8000E798: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_1:
    // 0x8000E79C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000E7A0: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000E7A4: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000E7A8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8000E7AC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8000E7B0: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x8000E7B4: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8000E7B8: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8000E7BC: jal         0x80003E10
    // 0x8000E7C0: swc1        $f18, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f18.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x8000E7C0: swc1        $f18, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f18.u32l;
    after_2:
    // 0x8000E7C4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8000E7C8: jal         0x80003EA0
    // 0x8000E7CC: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_3;
    // 0x8000E7CC: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_3:
    // 0x8000E7D0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000E7D4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000E7D8: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000E7DC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8000E7E0: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8000E7E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000E7E8: mul.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8000E7EC: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000E7F0: swc1        $f18, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f18.u32l;
    // 0x8000E7F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E7F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000E7FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000E800: jr          $ra
    // 0x8000E804: nop

    TRACE_RETURN()
    return;
    // 0x8000E804: nop

;}
RECOMP_FUNC void _decodeChunk(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004F234: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8004F238: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8004F23C: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x8004F240: sll         $t8, $s5, 16
    ctx->r24 = S32(ctx->r21 << 16);
    // 0x8004F244: sra         $s5, $t8, 16
    ctx->r21 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8004F248: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8004F24C: blez        $s1, L_8004F2B8
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8004F250: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8004F2B8;
    }
    // 0x8004F250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004F254: lw          $t9, 0x30($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X30);
    // 0x8004F258: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x8004F25C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8004F260: jalr        $t9
    // 0x8004F264: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8004F264: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    after_0:
    // 0x8004F268: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x8004F26C: addu        $s1, $s1, $a2
    ctx->r17 = ADD32(ctx->r17, ctx->r6);
    // 0x8004F270: andi        $t6, $s3, 0xFFFF
    ctx->r14 = ctx->r19 & 0XFFFF;
    // 0x8004F274: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8004F278: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8004F27C: andi        $t8, $s1, 0x7
    ctx->r24 = ctx->r17 & 0X7;
    // 0x8004F280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8004F284: subu        $t9, $s1, $t8
    ctx->r25 = SUB32(ctx->r17, ctx->r24);
    // 0x8004F288: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x8004F28C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8004F290: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8004F294: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x8004F298: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8004F29C: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x8004F2A0: subu        $t9, $v0, $a2
    ctx->r25 = SUB32(ctx->r2, ctx->r6);
    // 0x8004F2A4: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x8004F2A8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8004F2AC: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x8004F2B0: b           L_8004F2BC
    // 0x8004F2B4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_8004F2BC;
    // 0x8004F2B4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8004F2B8:
    // 0x8004F2B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8004F2BC:
    // 0x8004F2BC: andi        $t6, $s4, 0x2
    ctx->r14 = ctx->r20 & 0X2;
    // 0x8004F2C0: beq         $t6, $zero, L_8004F2E8
    if (ctx->r14 == 0) {
        // 0x8004F2C4: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_8004F2E8;
    }
    // 0x8004F2C4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8004F2C8: lui         $t7, 0xF00
    ctx->r15 = S32(0XF00 << 16);
    // 0x8004F2CC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8004F2D0: lw          $t8, 0x18($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X18);
    // 0x8004F2D4: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x8004F2D8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8004F2DC: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x8004F2E0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8004F2E4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8004F2E8:
    // 0x8004F2E8: addu        $t6, $s3, $a2
    ctx->r14 = ADD32(ctx->r19, ctx->r6);
    // 0x8004F2EC: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x8004F2F0: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8004F2F4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8004F2F8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8004F2FC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8004F300: sll         $t7, $s6, 1
    ctx->r15 = S32(ctx->r22 << 1);
    // 0x8004F304: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8004F308: sll         $t6, $s5, 16
    ctx->r14 = S32(ctx->r21 << 16);
    // 0x8004F30C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x8004F310: andi        $t7, $s4, 0xFF
    ctx->r15 = ctx->r20 & 0XFF;
    // 0x8004F314: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8004F318: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x8004F31C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x8004F320: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8004F324: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x8004F328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8004F32C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8004F330: lw          $t9, 0x14($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X14);
    // 0x8004F334: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x8004F338: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8004F33C: and         $t7, $t9, $at
    ctx->r15 = ctx->r25 & ctx->r1;
    // 0x8004F340: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x8004F344: sw          $zero, 0x40($s2)
    MEM_W(0X40, ctx->r18) = 0;
    // 0x8004F348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004F34C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8004F350: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8004F354: jr          $ra
    // 0x8004F358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004F358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80007ED8_8AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007ED8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80007EDC: andi        $t0, $a3, 0xFF
    ctx->r8 = ctx->r7 & 0XFF;
    // 0x80007EE0: andi        $t1, $t0, 0xF0
    ctx->r9 = ctx->r8 & 0XF0;
    // 0x80007EE4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80007EE8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80007EEC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80007EF0: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80007EF4: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x80007EF8: sra         $t3, $t1, 4
    ctx->r11 = S32(SIGNED(ctx->r9) >> 4);
    // 0x80007EFC: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80007F00: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80007F04: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80007F08: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80007F0C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80007F10: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80007F14: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80007F18: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80007F1C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80007F20: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80007F24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80007F28: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80007F2C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80007F30: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
    // 0x80007F34: andi        $t2, $t3, 0xFF
    ctx->r10 = ctx->r11 & 0XFF;
    // 0x80007F38: beq         $t7, $at, L_80007F54
    if (ctx->r15 == ctx->r1) {
        // 0x80007F3C: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_80007F54;
    }
    // 0x80007F3C: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x80007F40: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80007F44: beq         $t7, $at, L_80008040
    if (ctx->r15 == ctx->r1) {
        // 0x80007F48: andi        $t6, $t0, 0xF
        ctx->r14 = ctx->r8 & 0XF;
            goto L_80008040;
    }
    // 0x80007F48: andi        $t6, $t0, 0xF
    ctx->r14 = ctx->r8 & 0XF;
    // 0x80007F4C: b           L_80007FAC
    // 0x80007F50: andi        $t7, $t1, 0xFF
    ctx->r15 = ctx->r9 & 0XFF;
        goto L_80007FAC;
    // 0x80007F50: andi        $t7, $t1, 0xFF
    ctx->r15 = ctx->r9 & 0XFF;
L_80007F54:
    // 0x80007F54: andi        $t4, $t0, 0xF
    ctx->r12 = ctx->r8 & 0XF;
    // 0x80007F58: andi        $t5, $t1, 0xFF
    ctx->r13 = ctx->r9 & 0XFF;
    // 0x80007F5C: slt         $at, $t5, $t4
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80007F60: bne         $at, $zero, L_80008040
    if (ctx->r1 != 0) {
        // 0x80007F64: andi        $s0, $t4, 0xFF
        ctx->r16 = ctx->r12 & 0XFF;
            goto L_80008040;
    }
    // 0x80007F64: andi        $s0, $t4, 0xFF
    ctx->r16 = ctx->r12 & 0XFF;
    // 0x80007F68: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80007F6C: addiu       $t8, $t8, -0x3340
    ctx->r24 = ADD32(ctx->r24, -0X3340);
    // 0x80007F70: sll         $t7, $a2, 5
    ctx->r15 = S32(ctx->r6 << 5);
    // 0x80007F74: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80007F78: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x80007F7C: lui         $v0, 0xC
    ctx->r2 = S32(0XC << 16);
L_80007F80:
    // 0x80007F80: sll         $t9, $s0, 1
    ctx->r25 = S32(ctx->r16 << 1);
    // 0x80007F84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80007F88: andi        $t5, $s0, 0xFF
    ctx->r13 = ctx->r16 & 0XFF;
    // 0x80007F8C: addu        $t3, $v1, $t9
    ctx->r11 = ADD32(ctx->r3, ctx->r25);
    // 0x80007F90: slt         $at, $s1, $t5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80007F94: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x80007F98: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80007F9C: beq         $at, $zero, L_80007F80
    if (ctx->r1 == 0) {
        // 0x80007FA0: sh          $zero, 0x5D18($t4)
        MEM_H(0X5D18, ctx->r12) = 0;
            goto L_80007F80;
    }
    // 0x80007FA0: sh          $zero, 0x5D18($t4)
    MEM_H(0X5D18, ctx->r12) = 0;
    // 0x80007FA4: b           L_80008044
    // 0x80007FA8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80008044;
    // 0x80007FA8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80007FAC:
    // 0x80007FAC: slt         $at, $t7, $t6
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80007FB0: bne         $at, $zero, L_80008040
    if (ctx->r1 != 0) {
        // 0x80007FB4: andi        $s0, $t6, 0xFF
        ctx->r16 = ctx->r14 & 0XFF;
            goto L_80008040;
    }
    // 0x80007FB4: andi        $s0, $t6, 0xFF
    ctx->r16 = ctx->r14 & 0XFF;
    // 0x80007FB8: lui         $t9, 0x8006
    ctx->r25 = S32(0X8006 << 16);
    // 0x80007FBC: addiu       $t9, $t9, -0x4950
    ctx->r25 = ADD32(ctx->r25, -0X4950);
    // 0x80007FC0: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80007FC4: addu        $s2, $t8, $t9
    ctx->r18 = ADD32(ctx->r24, ctx->r25);
    // 0x80007FC8: andi        $s4, $v1, 0xF0
    ctx->r20 = ctx->r3 & 0XF0;
    // 0x80007FCC: or          $s5, $v1, $zero
    ctx->r21 = ctx->r3 | 0;
    // 0x80007FD0: sll         $t9, $s5, 4
    ctx->r25 = S32(ctx->r21 << 4);
    // 0x80007FD4: sra         $t6, $s4, 4
    ctx->r14 = S32(SIGNED(ctx->r20) >> 4);
    // 0x80007FD8: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x80007FDC: addiu       $t5, $t5, -0x3340
    ctx->r13 = ADD32(ctx->r13, -0X3340);
    // 0x80007FE0: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80007FE4: andi        $t3, $t9, 0xFF
    ctx->r11 = ctx->r25 & 0XFF;
    // 0x80007FE8: sll         $t4, $a2, 5
    ctx->r12 = S32(ctx->r6 << 5);
    // 0x80007FEC: lui         $s6, 0xC
    ctx->r22 = S32(0XC << 16);
    // 0x80007FF0: ori         $s6, $s6, 0x5D18
    ctx->r22 = ctx->r22 | 0X5D18;
    // 0x80007FF4: addu        $s3, $t4, $t5
    ctx->r19 = ADD32(ctx->r12, ctx->r13);
    // 0x80007FF8: sll         $s5, $t3, 1
    ctx->r21 = S32(ctx->r11 << 1);
    // 0x80007FFC: sll         $s4, $t7, 2
    ctx->r20 = S32(ctx->r15 << 2);
    // 0x80008000: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
L_80008004:
    // 0x80008004: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x80008008: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x8000800C: addu        $t9, $s3, $v0
    ctx->r25 = ADD32(ctx->r19, ctx->r2);
    // 0x80008010: addu        $t6, $t5, $s4
    ctx->r14 = ADD32(ctx->r13, ctx->r20);
    // 0x80008014: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80008018: addu        $a1, $t9, $s6
    ctx->r5 = ADD32(ctx->r25, ctx->r22);
    // 0x8000801C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80008020: addu        $t8, $t7, $s5
    ctx->r24 = ADD32(ctx->r15, ctx->r21);
    // 0x80008024: jal         0x80007970
    // 0x80008028: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    func_80007970_8570(rdram, ctx);
        goto after_0;
    // 0x80008028: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_0:
    // 0x8000802C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80008030: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x80008034: slt         $at, $s1, $t3
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80008038: beq         $at, $zero, L_80008004
    if (ctx->r1 == 0) {
        // 0x8000803C: or          $s0, $t3, $zero
        ctx->r16 = ctx->r11 | 0;
            goto L_80008004;
    }
    // 0x8000803C: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
L_80008040:
    // 0x80008040: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80008044:
    // 0x80008044: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80008048: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000804C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80008050: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80008054: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80008058: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8000805C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80008060: jr          $ra
    // 0x80008064: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80008064: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001D5B8_1E1B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001D5B8: lwc1        $f2, 0x8($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8001D5BC: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8001D5C0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001D5C4: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8001D5C8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8001D5CC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001D5D0: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8001D5D4: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8001D5D8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001D5DC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8001D5E0: nop

    // 0x8001D5E4: bc1fl       L_8001D5F8
    if (!c1cs) {
        // 0x8001D5E8: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_8001D5F8;
    }
    goto skip_0;
    // 0x8001D5E8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_0:
    // 0x8001D5EC: b           L_8001D5F8
    // 0x8001D5F0: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
        goto L_8001D5F8;
    // 0x8001D5F0: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    // 0x8001D5F4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_8001D5F8:
    // 0x8001D5F8: ldc1        $f10, -0x46E0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X46E0);
    // 0x8001D5FC: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x8001D600: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8001D604: nop

    // 0x8001D608: bc1fl       L_8001D668
    if (!c1cs) {
        // 0x8001D60C: lwc1        $f8, 0x4($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
            goto L_8001D668;
    }
    goto skip_1;
    // 0x8001D60C: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    skip_1:
    // 0x8001D610: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001D614: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    // 0x8001D618: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8001D61C: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x8001D620: nop

    // 0x8001D624: bc1fl       L_8001D64C
    if (!c1cs) {
        // 0x8001D628: lwc1        $f18, 0x8($a0)
        ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
            goto L_8001D64C;
    }
    goto skip_2;
    // 0x8001D628: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    skip_2:
    // 0x8001D62C: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D630: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001D634: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x8001D638: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D63C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8001D640: b           L_8001D710
    // 0x8001D644: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
        goto L_8001D710;
    // 0x8001D644: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x8001D648: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
L_8001D64C:
    // 0x8001D64C: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x8001D650: swc1        $f4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f4.u32l;
    // 0x8001D654: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D658: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x8001D65C: b           L_8001D710
    // 0x8001D660: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001D710;
    // 0x8001D660: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001D664: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
L_8001D668:
    // 0x8001D668: lwc1        $f18, 0x4($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8001D66C: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001D670: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8001D674: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001D678: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8001D67C: nop

    // 0x8001D680: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8001D684: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D688: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8001D68C: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x8001D690: div.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001D694: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8001D698: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x8001D69C: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D6A0: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8001D6A4: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D6A8: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8001D6AC: nop

    // 0x8001D6B0: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8001D6B4: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8001D6B8: swc1        $f6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f6.u32l;
    // 0x8001D6BC: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8001D6C0: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001D6C4: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D6C8: lwc1        $f2, 0x8($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8001D6CC: mul.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8001D6D0: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8001D6D4: mul.s       $f18, $f6, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8001D6D8: nop

    // 0x8001D6DC: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8001D6E0: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8001D6E4: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D6E8: neg.s       $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = -ctx->f18.fl;
    // 0x8001D6EC: mul.s       $f18, $f2, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x8001D6F0: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8001D6F4: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x8001D6F8: swc1        $f8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f8.u32l;
    // 0x8001D6FC: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x8001D700: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8001D704: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x8001D708: lwc1        $f18, 0xC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8001D70C: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
L_8001D710:
    // 0x8001D710: jr          $ra
    // 0x8001D714: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8001D714: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void alClose(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047644: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80047648: lw          $t6, -0x5DD0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5DD0);
    // 0x8004764C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80047650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047654: beql        $t6, $zero, L_80047670
    if (ctx->r14 == 0) {
        // 0x80047658: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80047670;
    }
    goto skip_0;
    // 0x80047658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8004765C: jal         0x8004E220
    // 0x80047660: nop

    alSynDelete(rdram, ctx);
        goto after_0;
    // 0x80047660: nop

    after_0:
    // 0x80047664: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80047668: sw          $zero, -0x5DD0($at)
    MEM_W(-0X5DD0, ctx->r1) = 0;
    // 0x8004766C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047670:
    // 0x80047670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80047674: jr          $ra
    // 0x80047678: nop

    TRACE_RETURN()
    return;
    // 0x80047678: nop

;}
RECOMP_FUNC void alSynAllocVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800482F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800482FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80048300: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80048304: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80048308: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8004830C: lh          $t6, 0x0($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X0);
    // 0x80048310: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80048314: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
    // 0x80048318: lbu         $t7, 0x4($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X4);
    // 0x8004831C: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x80048320: sh          $t7, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r15;
    // 0x80048324: lh          $t8, 0x2($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X2);
    // 0x80048328: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x8004832C: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x80048330: sh          $t8, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r24;
    // 0x80048334: lh          $a2, 0x0($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X0);
    // 0x80048338: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8004833C: jal         0x80048210
    // 0x80048340: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    _allocatePVoice(rdram, ctx);
        goto after_0;
    // 0x80048340: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x80048344: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80048348: beql        $t9, $zero, L_80048420
    if (ctx->r25 == 0) {
        // 0x8004834C: lw          $v0, 0x2C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X2C);
            goto L_80048420;
    }
    goto skip_0;
    // 0x8004834C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x80048350: beq         $v0, $zero, L_80048404
    if (ctx->r2 == 0) {
        // 0x80048354: lw          $a0, 0xC($t9)
        ctx->r4 = MEM_W(ctx->r25, 0XC);
            goto L_80048404;
    }
    // 0x80048354: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x80048358: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    // 0x8004835C: sw          $t0, 0xD8($t9)
    MEM_W(0XD8, ctx->r25) = ctx->r8;
    // 0x80048360: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80048364: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x80048368: sw          $zero, 0x8($t2)
    MEM_W(0X8, ctx->r10) = 0;
    // 0x8004836C: jal         0x80047960
    // 0x80048370: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    __allocParam(rdram, ctx);
        goto after_1;
    // 0x80048370: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_1:
    // 0x80048374: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80048378: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8004837C: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x80048380: lw          $t4, 0x1C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1C);
    // 0x80048384: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    // 0x80048388: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x8004838C: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80048390: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80048394: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80048398: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8004839C: lw          $t7, 0xD8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XD8);
    // 0x800483A0: addiu       $t8, $t7, -0x40
    ctx->r24 = ADD32(ctx->r15, -0X40);
    // 0x800483A4: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x800483A8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800483AC: jalr        $t9
    // 0x800483B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x800483B0: nop

    after_2:
    // 0x800483B4: jal         0x80047960
    // 0x800483B8: nop

    __allocParam(rdram, ctx);
        goto after_3;
    // 0x800483B8: nop

    after_3:
    // 0x800483BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800483C0: beq         $v0, $zero, L_8004840C
    if (ctx->r2 == 0) {
        // 0x800483C4: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8004840C;
    }
    // 0x800483C4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800483C8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800483CC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800483D0: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x800483D4: lw          $t1, 0x1C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1C);
    // 0x800483D8: lw          $t3, 0xD8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XD8);
    // 0x800483DC: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    // 0x800483E0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800483E4: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x800483E8: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x800483EC: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800483F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800483F4: jalr        $t9
    // 0x800483F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x800483F8: nop

    after_4:
    // 0x800483FC: b           L_80048410
    // 0x80048400: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_80048410;
    // 0x80048400: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_80048404:
    // 0x80048404: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80048408: sw          $zero, 0xD8($t6)
    MEM_W(0XD8, ctx->r14) = 0;
L_8004840C:
    // 0x8004840C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_80048410:
    // 0x80048410: sw          $s0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r16;
    // 0x80048414: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80048418: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
    // 0x8004841C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_80048420:
    // 0x80048420: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80048424: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80048428: sltu        $t0, $zero, $v0
    ctx->r8 = 0 < ctx->r2 ? 1 : 0;
    // 0x8004842C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80048430: jr          $ra
    // 0x80048434: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80048434: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8000B51C_C11C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B51C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8000B520: addiu       $v1, $v1, -0x3A28
    ctx->r3 = ADD32(ctx->r3, -0X3A28);
    // 0x8000B524: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x8000B528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000B52C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000B530: beq         $v0, $zero, L_8000B540
    if (ctx->r2 == 0) {
        // 0x8000B534: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_8000B540;
    }
    // 0x8000B534: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8000B538: bne         $t6, $zero, L_8000B564
    if (ctx->r14 != 0) {
        // 0x8000B53C: sw          $t6, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->r14;
            goto L_8000B564;
    }
    // 0x8000B53C: sw          $t6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r14;
L_8000B540:
    // 0x8000B540: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8000B544: jal         0x801E5274
    // 0x8000B548: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(0x801E5274)(rdram, ctx);
        goto after_0;
    // 0x8000B548: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_0:
    // 0x8000B54C: bnel        $v0, $zero, L_8000B568
    if (ctx->r2 != 0) {
        // 0x8000B550: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8000B568;
    }
    goto skip_0;
    // 0x8000B550: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8000B554: jal         0x8000B578
    // 0x8000B558: nop

    func_8000B578_C178(rdram, ctx);
        goto after_1;
    // 0x8000B558: nop

    after_1:
    // 0x8000B55C: b           L_8000B56C
    // 0x8000B560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000B56C;
    // 0x8000B560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000B564:
    // 0x8000B564: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8000B568:
    // 0x8000B568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000B56C:
    // 0x8000B56C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000B570: jr          $ra
    // 0x8000B574: nop

    TRACE_RETURN()
    return;
    // 0x8000B574: nop

;}
RECOMP_FUNC void func_80026AAC_276AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026AAC: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80026AB0: lw          $v0, 0xD0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD0);
    // 0x80026AB4: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80026AB8: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80026ABC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80026AC0: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x80026AC4: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x80026AC8: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x80026ACC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80026AD0: div         $zero, $t6, $t0
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r8)));
    // 0x80026AD4: mflo        $t7
    ctx->r15 = lo;
    // 0x80026AD8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80026ADC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80026AE0: bne         $t0, $zero, L_80026AEC
    if (ctx->r8 != 0) {
        // 0x80026AE4: nop
    
            goto L_80026AEC;
    }
    // 0x80026AE4: nop

    // 0x80026AE8: break       7
    do_break(2147642088);
L_80026AEC:
    // 0x80026AEC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80026AF0: bne         $t0, $at, L_80026B04
    if (ctx->r8 != ctx->r1) {
        // 0x80026AF4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80026B04;
    }
    // 0x80026AF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80026AF8: bne         $t6, $at, L_80026B04
    if (ctx->r14 != ctx->r1) {
        // 0x80026AFC: nop
    
            goto L_80026B04;
    }
    // 0x80026AFC: nop

    // 0x80026B00: break       6
    do_break(2147642112);
L_80026B04:
    // 0x80026B04: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80026B08: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80026B0C: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x80026B10: div         $zero, $t8, $t0
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r8)));
    // 0x80026B14: mflo        $t9
    ctx->r25 = lo;
    // 0x80026B18: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80026B1C: bne         $t0, $zero, L_80026B28
    if (ctx->r8 != 0) {
        // 0x80026B20: nop
    
            goto L_80026B28;
    }
    // 0x80026B20: nop

    // 0x80026B24: break       7
    do_break(2147642148);
L_80026B28:
    // 0x80026B28: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80026B2C: bne         $t0, $at, L_80026B40
    if (ctx->r8 != ctx->r1) {
        // 0x80026B30: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80026B40;
    }
    // 0x80026B30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80026B34: bne         $t8, $at, L_80026B40
    if (ctx->r24 != ctx->r1) {
        // 0x80026B38: nop
    
            goto L_80026B40;
    }
    // 0x80026B38: nop

    // 0x80026B3C: break       6
    do_break(2147642172);
L_80026B40:
    // 0x80026B40: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80026B44: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80026B48: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80026B4C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80026B50: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80026B54: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x80026B58: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x80026B5C: sub.s       $f16, $f12, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x80026B60: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80026B64: sub.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80026B68: mtc1        $a2, $f10
    ctx->f10.u32l = ctx->r6;
    // 0x80026B6C: nop

    // 0x80026B70: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80026B74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80026B78: nop

    // 0x80026B7C: sub.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80026B80: div.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80026B84: div.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80026B88: div.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x80026B8C: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x80026B90: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80026B94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80026B98: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80026B9C: sub.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80026BA0: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80026BA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80026BA8: nop

    // 0x80026BAC: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x80026BB0: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80026BB4: div.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80026BB8: bc1t        L_80026BE8
    if (c1cs) {
        // 0x80026BBC: add.s       $f18, $f10, $f8
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
            goto L_80026BE8;
    }
    // 0x80026BBC: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80026BC0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80026BC4: nop

    // 0x80026BC8: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x80026BCC: nop

    // 0x80026BD0: bc1tl       L_80026BEC
    if (c1cs) {
        // 0x80026BD4: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_80026BEC;
    }
    goto skip_0;
    // 0x80026BD4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x80026BD8: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80026BDC: nop

    // 0x80026BE0: bc1fl       L_80026BF8
    if (!c1cs) {
        // 0x80026BE4: trunc.w.s   $f10, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
            goto L_80026BF8;
    }
    goto skip_1;
    // 0x80026BE4: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    skip_1:
L_80026BE8:
    // 0x80026BE8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_80026BEC:
    // 0x80026BEC: b           L_80026FE0
    // 0x80026BF0: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
        goto L_80026FE0;
    // 0x80026BF0: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x80026BF4: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
L_80026BF8:
    // 0x80026BF8: sll         $t9, $a3, 1
    ctx->r25 = S32(ctx->r7 << 1);
    // 0x80026BFC: addiu       $t3, $t9, -0x2
    ctx->r11 = ADD32(ctx->r25, -0X2);
    // 0x80026C00: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80026C04: nop

    // 0x80026C08: andi        $t2, $t0, 0x1
    ctx->r10 = ctx->r8 & 0X1;
    // 0x80026C0C: bne         $t2, $zero, L_80026C30
    if (ctx->r10 != 0) {
        // 0x80026C10: nop
    
            goto L_80026C30;
    }
    // 0x80026C10: nop

    // 0x80026C14: mul.s       $f8, $f18, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x80026C18: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80026C1C: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x80026C20: nop

    // 0x80026C24: andi        $t5, $t1, 0x1
    ctx->r13 = ctx->r9 & 0X1;
    // 0x80026C28: beql        $t5, $zero, L_80026C50
    if (ctx->r13 == 0) {
        // 0x80026C2C: mtc1        $t1, $f8
        ctx->f8.u32l = ctx->r9;
            goto L_80026C50;
    }
    goto skip_2;
    // 0x80026C2C: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    skip_2:
L_80026C30:
    // 0x80026C30: mul.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x80026C34: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80026C38: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80026C3C: beq         $t2, $zero, L_80026CA0
    if (ctx->r10 == 0) {
        // 0x80026C40: andi        $t7, $t1, 0x1
        ctx->r15 = ctx->r9 & 0X1;
            goto L_80026CA0;
    }
    // 0x80026C40: andi        $t7, $t1, 0x1
    ctx->r15 = ctx->r9 & 0X1;
    // 0x80026C44: beql        $t7, $zero, L_80026CA4
    if (ctx->r15 == 0) {
        // 0x80026C48: addiu       $t8, $t1, 0x1
        ctx->r24 = ADD32(ctx->r9, 0X1);
            goto L_80026CA4;
    }
    goto skip_3;
    // 0x80026C48: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    skip_3:
    // 0x80026C4C: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
L_80026C50:
    // 0x80026C50: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80026C54: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80026C58: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80026C5C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80026C60: div.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f14.fl);
    // 0x80026C64: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80026C68: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80026C6C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80026C70: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x80026C74: sub.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x80026C78: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80026C7C: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x80026C80: c.lt.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d < ctx->f6.d;
    // 0x80026C84: nop

    // 0x80026C88: bc1f        L_80026C98
    if (!c1cs) {
        // 0x80026C8C: nop
    
            goto L_80026C98;
    }
    // 0x80026C8C: nop

    // 0x80026C90: b           L_80026CFC
    // 0x80026C94: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
        goto L_80026CFC;
    // 0x80026C94: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
L_80026C98:
    // 0x80026C98: b           L_80026CFC
    // 0x80026C9C: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
        goto L_80026CFC;
    // 0x80026C9C: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
L_80026CA0:
    // 0x80026CA0: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
L_80026CA4:
    // 0x80026CA4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80026CA8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80026CAC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80026CB0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80026CB4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80026CB8: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
    // 0x80026CBC: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x80026CC0: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x80026CC4: mul.d       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x80026CC8: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80026CCC: sub.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f10.d - ctx->f4.d;
    // 0x80026CD0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80026CD4: sub.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x80026CD8: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80026CDC: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80026CE0: mul.d       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x80026CE4: c.lt.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d < ctx->f4.d;
    // 0x80026CE8: nop

    // 0x80026CEC: bc1f        L_80026CFC
    if (!c1cs) {
        // 0x80026CF0: nop
    
            goto L_80026CFC;
    }
    // 0x80026CF0: nop

    // 0x80026CF4: b           L_80026CFC
    // 0x80026CF8: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
        goto L_80026CFC;
    // 0x80026CF8: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
L_80026CFC:
    // 0x80026CFC: slt         $at, $t0, $a2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80026D00: beq         $at, $zero, L_80026D18
    if (ctx->r1 == 0) {
        // 0x80026D04: slt         $at, $t2, $t3
        ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
            goto L_80026D18;
    }
    // 0x80026D04: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80026D08: beql        $at, $zero, L_80026D1C
    if (ctx->r1 == 0) {
        // 0x80026D0C: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_80026D1C;
    }
    goto skip_4;
    // 0x80026D0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_4:
    // 0x80026D10: bgez        $t2, L_80026D24
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80026D14: addiu       $a3, $t2, 0x2
        ctx->r7 = ADD32(ctx->r10, 0X2);
            goto L_80026D24;
    }
    // 0x80026D14: addiu       $a3, $t2, 0x2
    ctx->r7 = ADD32(ctx->r10, 0X2);
L_80026D18:
    // 0x80026D18: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_80026D1C:
    // 0x80026D1C: b           L_80026FE0
    // 0x80026D20: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
        goto L_80026FE0;
    // 0x80026D20: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
L_80026D24:
    // 0x80026D24: addiu       $t8, $a2, 0x1
    ctx->r24 = ADD32(ctx->r6, 0X1);
    // 0x80026D28: multu       $a3, $t8
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026D2C: lw          $t5, 0x60($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X60);
    // 0x80026D30: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x80026D34: subu        $t6, $t6, $t0
    ctx->r14 = SUB32(ctx->r14, ctx->r8);
    // 0x80026D38: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80026D3C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80026D40: addiu       $t4, $sp, 0x5C
    ctx->r12 = ADD32(ctx->r29, 0X5C);
    // 0x80026D44: addiu       $t1, $a3, 0x1
    ctx->r9 = ADD32(ctx->r7, 0X1);
    // 0x80026D48: mflo        $t9
    ctx->r25 = lo;
    // 0x80026D4C: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80026D50: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x80026D54: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80026D58: addu        $t5, $t7, $t3
    ctx->r13 = ADD32(ctx->r15, ctx->r11);
    // 0x80026D5C: lw          $at, 0xC($t5)
    ctx->r1 = MEM_W(ctx->r13, 0XC);
    // 0x80026D60: andi        $t9, $a3, 0x1
    ctx->r25 = ctx->r7 & 0X1;
    // 0x80026D64: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x80026D68: lw          $t8, 0x10($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X10);
    // 0x80026D6C: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x80026D70: lw          $at, 0x14($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X14);
    // 0x80026D74: bne         $t9, $zero, L_80026D94
    if (ctx->r25 != 0) {
        // 0x80026D78: sw          $at, 0x8($t4)
        MEM_W(0X8, ctx->r12) = ctx->r1;
            goto L_80026D94;
    }
    // 0x80026D78: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x80026D7C: bgez        $a3, L_80026D8C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80026D80: sra         $t1, $a3, 1
        ctx->r9 = S32(SIGNED(ctx->r7) >> 1);
            goto L_80026D8C;
    }
    // 0x80026D80: sra         $t1, $a3, 1
    ctx->r9 = S32(SIGNED(ctx->r7) >> 1);
    // 0x80026D84: addiu       $at, $a3, 0x1
    ctx->r1 = ADD32(ctx->r7, 0X1);
    // 0x80026D88: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_80026D8C:
    // 0x80026D8C: b           L_80026DAC
    // 0x80026D90: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
        goto L_80026DAC;
    // 0x80026D90: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
L_80026D94:
    // 0x80026D94: bgez        $t1, L_80026DA4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80026D98: sra         $t7, $t1, 1
        ctx->r15 = S32(SIGNED(ctx->r9) >> 1);
            goto L_80026DA4;
    }
    // 0x80026D98: sra         $t7, $t1, 1
    ctx->r15 = S32(SIGNED(ctx->r9) >> 1);
    // 0x80026D9C: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x80026DA0: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_80026DA4:
    // 0x80026DA4: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x80026DA8: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
L_80026DAC:
    // 0x80026DAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80026DB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80026DB4: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x80026DB8: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80026DBC: addiu       $a3, $t0, 0x1
    ctx->r7 = ADD32(ctx->r8, 0X1);
    // 0x80026DC0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80026DC4: addiu       $t3, $a3, -0x1
    ctx->r11 = ADD32(ctx->r7, -0X1);
    // 0x80026DC8: addiu       $t8, $a2, 0x2
    ctx->r24 = ADD32(ctx->r6, 0X2);
    // 0x80026DCC: multu       $t1, $t8
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026DD0: sll         $t4, $a3, 2
    ctx->r12 = S32(ctx->r7 << 2);
    // 0x80026DD4: sub.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80026DD8: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80026DDC: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80026DE0: mflo        $t9
    ctx->r25 = lo;
    // 0x80026DE4: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80026DE8: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80026DEC: addiu       $t9, $a2, -0x1
    ctx->r25 = ADD32(ctx->r6, -0X1);
    // 0x80026DF0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80026DF4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80026DF8: div.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f14.fl);
    // 0x80026DFC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80026E00: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80026E04: lw          $t6, 0x58($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X58);
    // 0x80026E08: addu        $t5, $t6, $t4
    ctx->r13 = ADD32(ctx->r14, ctx->r12);
    // 0x80026E0C: addu        $t3, $t5, $t7
    ctx->r11 = ADD32(ctx->r13, ctx->r15);
    // 0x80026E10: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80026E14: andi        $t6, $a3, 0x1
    ctx->r14 = ctx->r7 & 0X1;
    // 0x80026E18: bne         $t6, $zero, L_80026E78
    if (ctx->r14 != 0) {
        // 0x80026E1C: swc1        $f6, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
            goto L_80026E78;
    }
    // 0x80026E1C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80026E20: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x80026E24: addiu       $t4, $t1, -0x1
    ctx->r12 = ADD32(ctx->r9, -0X1);
    // 0x80026E28: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80026E2C: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x80026E30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80026E34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80026E38: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80026E3C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80026E40: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80026E44: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x80026E48: sub.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80026E4C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80026E50: nop

    // 0x80026E54: add.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f8.d + ctx->f10.d;
    // 0x80026E58: lwc1        $f8, 0x14($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80026E5C: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80026E60: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80026E64: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80026E68: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80026E6C: div.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80026E70: b           L_80026EB4
    // 0x80026E74: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
        goto L_80026EB4;
    // 0x80026E74: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
L_80026E78:
    // 0x80026E78: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x80026E7C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80026E80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80026E84: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x80026E88: lwc1        $f4, 0x14($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80026E8C: addiu       $t8, $t1, -0x1
    ctx->r24 = ADD32(ctx->r9, -0X1);
    // 0x80026E90: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80026E94: sub.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80026E98: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80026E9C: div.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80026EA0: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80026EA4: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x80026EA8: neg.s       $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = -ctx->f4.fl;
    // 0x80026EAC: div.s       $f6, $f8, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80026EB0: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
L_80026EB4:
    // 0x80026EB4: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80026EB8: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x80026EBC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80026EC0: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x80026EC4: addiu       $t7, $zero, 0x7FFF
    ctx->r15 = ADD32(0, 0X7FFF);
    // 0x80026EC8: c.eq.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d == ctx->f6.d;
    // 0x80026ECC: nop

    // 0x80026ED0: bc1tl       L_80026F6C
    if (c1cs) {
        // 0x80026ED4: mtc1        $zero, $f14
        ctx->f14.u32l = 0;
            goto L_80026F6C;
    }
    goto skip_5;
    // 0x80026ED4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    skip_5:
    // 0x80026ED8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80026EDC: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80026EE0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80026EE4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80026EE8: addiu       $t5, $a3, -0x1
    ctx->r13 = ADD32(ctx->r7, -0X1);
    // 0x80026EEC: div.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80026EF0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80026EF4: nop

    // 0x80026EF8: div.s       $f6, $f2, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = DIV_S(ctx->f2.fl, ctx->f10.fl);
    // 0x80026EFC: sub.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x80026F00: lwc1        $f6, 0x14($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80026F04: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80026F08: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80026F0C: nop

    // 0x80026F10: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80026F14: div.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80026F18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80026F1C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80026F20: div.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80026F24: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80026F28: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80026F2C: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80026F30: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80026F34: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80026F38: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80026F3C: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80026F40: sub.s       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x80026F44: mul.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80026F48: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80026F4C: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x80026F50: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80026F54: div.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80026F58: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80026F5C: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80026F60: b           L_80026F70
    // 0x80026F64: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
        goto L_80026F70;
    // 0x80026F64: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80026F68: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
L_80026F6C:
    // 0x80026F6C: nop

L_80026F70:
    // 0x80026F70: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80026F74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80026F78: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80026F7C: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80026F80: div.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f14.fl, ctx->f10.fl);
    // 0x80026F84: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
    // 0x80026F88: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80026F8C: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80026F90: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80026F94: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80026F98: swc1        $f8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f8.u32l;
    // 0x80026F9C: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
    // 0x80026FA0: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80026FA4: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80026FA8: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
    // 0x80026FAC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80026FB0: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80026FB4: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80026FB8: swc1        $f10, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f10.u32l;
    // 0x80026FBC: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80026FC0: bc1f        L_80026FD0
    if (!c1cs) {
        // 0x80026FC4: swc1        $f4, 0x2C($a0)
        MEM_W(0X2C, ctx->r4) = ctx->f4.u32l;
            goto L_80026FD0;
    }
    // 0x80026FC4: swc1        $f4, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f4.u32l;
    // 0x80026FC8: b           L_80026FD4
    // 0x80026FCC: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
        goto L_80026FD4;
    // 0x80026FCC: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
L_80026FD0:
    // 0x80026FD0: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
L_80026FD4:
    // 0x80026FD4: lw          $t3, 0x18($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X18);
    // 0x80026FD8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80026FDC: sw          $t3, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r11;
L_80026FE0:
    // 0x80026FE0: jr          $ra
    // 0x80026FE4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x80026FE4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80038BF8_397F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038BF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80038BFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80038C00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80038C04: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80038C08: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80038C0C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80038C10: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80038C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80038C18: jal         0x80038C30
    // 0x80038C1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80038C30_39830(rdram, ctx);
        goto after_0;
    // 0x80038C1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80038C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80038C24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038C28: jr          $ra
    // 0x80038C2C: nop

    TRACE_RETURN()
    return;
    // 0x80038C2C: nop

;}
RECOMP_FUNC void func_8000FE1C_10A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000FE1C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000FE20: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8000FE24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000FE28: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8000FE2C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8000FE30: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000FE34: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000FE38: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8000FE3C: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8000FE40: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000FE44: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8000FE48: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8000FE4C: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000FE50: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8000FE54: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8000FE58: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000FE5C: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000FE60: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8000FE64: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8000FE68: jal         0x800417E0
    // 0x8000FE6C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x8000FE6C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x8000FE70: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8000FE74: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8000FE78: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8000FE7C: div.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8000FE80: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8000FE84: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000FE88: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8000FE8C: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8000FE90: nop

    // 0x8000FE94: bc1fl       L_8000FEA4
    if (!c1cs) {
        // 0x8000FE98: cvt.d.s     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
            goto L_8000FEA4;
    }
    goto skip_0;
    // 0x8000FE98: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    skip_0:
    // 0x8000FE9C: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
    // 0x8000FEA0: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
L_8000FEA4:
    // 0x8000FEA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000FEA8: c.lt.d      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.d < ctx->f4.d;
    // 0x8000FEAC: nop

    // 0x8000FEB0: bc1fl       L_8000FEC4
    if (!c1cs) {
        // 0x8000FEB4: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_8000FEC4;
    }
    goto skip_1;
    // 0x8000FEB4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    skip_1:
    // 0x8000FEB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000FEBC: nop

    // 0x8000FEC0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
L_8000FEC4:
    // 0x8000FEC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000FEC8: lui         $at, 0x431F
    ctx->r1 = S32(0X431F << 16);
    // 0x8000FECC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000FED0: nop

    // 0x8000FED4: mul.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x8000FED8: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8000FEDC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8000FEE0: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x8000FEE4: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x8000FEE8: lwc1        $f14, 0x14($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8000FEEC: lwc1        $f12, 0xC($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8000FEF0: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x8000FEF4: jal         0x8000E28C
    // 0x8000FEF8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_8000E28C_EE8C(rdram, ctx);
        goto after_1;
    // 0x8000FEF8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_1:
    // 0x8000FEFC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8000FF00: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x8000FF04: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000FF08: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8000FF0C: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x8000FF10: jal         0x8000E28C
    // 0x8000FF14: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    func_8000E28C_EE8C(rdram, ctx);
        goto after_2;
    // 0x8000FF14: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    after_2:
    // 0x8000FF18: lhu         $t6, 0x1C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X1C);
    // 0x8000FF1C: subu        $v1, $v0, $t6
    ctx->r3 = SUB32(ctx->r2, ctx->r14);
    // 0x8000FF20: andi        $t7, $v1, 0x3FF
    ctx->r15 = ctx->r3 & 0X3FF;
    // 0x8000FF24: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    // 0x8000FF28: jal         0x80003E10
    // 0x8000FF2C: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
    func_80003E10_4A10(rdram, ctx);
        goto after_3;
    // 0x8000FF2C: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
    after_3:
    // 0x8000FF30: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x8000FF34: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8000FF38: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000FF3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000FF40: mul.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8000FF44: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x8000FF48: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x8000FF4C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8000FF50: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8000FF54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000FF58: slti        $at, $v0, 0x101
    ctx->r1 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x8000FF5C: add.s       $f12, $f8, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x8000FF60: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x8000FF64: nop

    // 0x8000FF68: bc1fl       L_8000FF78
    if (!c1cs) {
        // 0x8000FF6C: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_8000FF78;
    }
    goto skip_2;
    // 0x8000FF6C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_2:
    // 0x8000FF70: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
    // 0x8000FF74: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_8000FF78:
    // 0x8000FF78: nop

    // 0x8000FF7C: bc1f        L_8000FF88
    if (!c1cs) {
        // 0x8000FF80: nop
    
            goto L_8000FF88;
    }
    // 0x8000FF80: nop

    // 0x8000FF84: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8000FF88:
    // 0x8000FF88: bne         $at, $zero, L_80010054
    if (ctx->r1 != 0) {
        // 0x8000FF8C: slti        $at, $v0, 0x300
        ctx->r1 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
            goto L_80010054;
    }
    // 0x8000FF8C: slti        $at, $v0, 0x300
    ctx->r1 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x8000FF90: beq         $at, $zero, L_80010054
    if (ctx->r1 == 0) {
        // 0x8000FF94: addiu       $t1, $zero, 0xFF
        ctx->r9 = ADD32(0, 0XFF);
            goto L_80010054;
    }
    // 0x8000FF94: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8000FF98: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000FF9C: ldc1        $f10, -0x5370($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X5370);
    // 0x8000FFA0: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x8000FFA4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000FFA8: mul.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x8000FFAC: ldc1        $f8, -0x5368($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5368);
    // 0x8000FFB0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8000FFB4: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8000FFB8: mul.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x8000FFBC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8000FFC0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000FFC4: nop

    // 0x8000FFC8: cvt.w.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_D(ctx->f6.d);
    // 0x8000FFCC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8000FFD0: nop

    // 0x8000FFD4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8000FFD8: beql        $t9, $zero, L_8001002C
    if (ctx->r25 == 0) {
        // 0x8000FFDC: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_8001002C;
    }
    goto skip_3;
    // 0x8000FFDC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_3:
    // 0x8000FFE0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8000FFE4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000FFE8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8000FFEC: sub.d       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f10.d = ctx->f6.d - ctx->f10.d;
    // 0x8000FFF0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000FFF4: nop

    // 0x8000FFF8: cvt.w.d     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_D(ctx->f10.d);
    // 0x8000FFFC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80010000: nop

    // 0x80010004: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80010008: bne         $t9, $zero, L_80010020
    if (ctx->r25 != 0) {
        // 0x8001000C: nop
    
            goto L_80010020;
    }
    // 0x8001000C: nop

    // 0x80010010: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80010014: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80010018: b           L_80010038
    // 0x8001001C: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_80010038;
    // 0x8001001C: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_80010020:
    // 0x80010020: b           L_80010038
    // 0x80010024: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_80010038;
    // 0x80010024: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80010028: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_8001002C:
    // 0x8001002C: nop

    // 0x80010030: bltz        $t9, L_80010020
    if (SIGNED(ctx->r25) < 0) {
        // 0x80010034: nop
    
            goto L_80010020;
    }
    // 0x80010034: nop

L_80010038:
    // 0x80010038: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x8001003C: subu        $t2, $t1, $t0
    ctx->r10 = SUB32(ctx->r9, ctx->r8);
    // 0x80010040: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80010044: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80010048: nop

    // 0x8001004C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80010050: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
L_80010054:
    // 0x80010054: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80010058: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8001005C: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x80010060: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80010064: cvt.w.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    ctx->f6.u32l = CVT_W_S(ctx->f12.fl);
    // 0x80010068: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8001006C: nop

    // 0x80010070: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x80010074: beql        $a1, $zero, L_800100C4
    if (ctx->r5 == 0) {
        // 0x80010078: mfc1        $a1, $f6
        ctx->r5 = (int32_t)ctx->f6.u32l;
            goto L_800100C4;
    }
    goto skip_4;
    // 0x80010078: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    skip_4:
    // 0x8001007C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80010080: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80010084: sub.s       $f6, $f12, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x80010088: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8001008C: nop

    // 0x80010090: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80010094: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x80010098: nop

    // 0x8001009C: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x800100A0: bne         $a1, $zero, L_800100B8
    if (ctx->r5 != 0) {
        // 0x800100A4: nop
    
            goto L_800100B8;
    }
    // 0x800100A4: nop

    // 0x800100A8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800100AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800100B0: b           L_800100D0
    // 0x800100B4: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_800100D0;
    // 0x800100B4: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_800100B8:
    // 0x800100B8: b           L_800100D0
    // 0x800100BC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_800100D0;
    // 0x800100BC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800100C0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
L_800100C4:
    // 0x800100C4: nop

    // 0x800100C8: bltz        $a1, L_800100B8
    if (SIGNED(ctx->r5) < 0) {
        // 0x800100CC: nop
    
            goto L_800100B8;
    }
    // 0x800100CC: nop

L_800100D0:
    // 0x800100D0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800100D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800100D8: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800100DC: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x800100E0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800100E4: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x800100E8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x800100EC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800100F0: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800100F4: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x800100F8: nop

    // 0x800100FC: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x80010100: beql        $a2, $zero, L_80010150
    if (ctx->r6 == 0) {
        // 0x80010104: mfc1        $a2, $f4
        ctx->r6 = (int32_t)ctx->f4.u32l;
            goto L_80010150;
    }
    goto skip_5;
    // 0x80010104: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    skip_5:
    // 0x80010108: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8001010C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80010110: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80010114: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x80010118: nop

    // 0x8001011C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80010120: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x80010124: nop

    // 0x80010128: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x8001012C: bne         $a2, $zero, L_80010144
    if (ctx->r6 != 0) {
        // 0x80010130: nop
    
            goto L_80010144;
    }
    // 0x80010130: nop

    // 0x80010134: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80010138: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001013C: b           L_8001015C
    // 0x80010140: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_8001015C;
    // 0x80010140: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_80010144:
    // 0x80010144: b           L_8001015C
    // 0x80010148: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_8001015C;
    // 0x80010148: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8001014C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
L_80010150:
    // 0x80010150: nop

    // 0x80010154: bltz        $a2, L_80010144
    if (SIGNED(ctx->r6) < 0) {
        // 0x80010158: nop
    
            goto L_80010144;
    }
    // 0x80010158: nop

L_8001015C:
    // 0x8001015C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80010160: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x80010164: jal         0x80038C30
    // 0x80010168: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_80038C30_39830(rdram, ctx);
        goto after_4;
    // 0x80010168: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_4:
    // 0x8001016C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80010170: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80010174: jr          $ra
    // 0x80010178: nop

    TRACE_RETURN()
    return;
    // 0x80010178: nop

;}
RECOMP_FUNC void alResampleParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F800: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x8004F804: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004F808: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x8004F80C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004F810: beq         $at, $zero, L_8004F8C0
    if (ctx->r1 == 0) {
        // 0x8004F814: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8004F8C0;
    }
    // 0x8004F814: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8004F818: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004F81C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8004F820: addu        $at, $at, $t6
    gpr jr_addend_8004F828 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8004F824: lw          $t6, -0x2B70($at)
    ctx->r14 = ADD32(ctx->r1, -0X2B70);
    // 0x8004F828: jr          $t6
    // 0x8004F82C: nop

    switch (jr_addend_8004F828 >> 2) {
        case 0: goto L_8004F830; break;
        case 1: goto L_8004F8C0; break;
        case 2: goto L_8004F8C0; break;
        case 3: goto L_8004F838; break;
        case 4: goto L_8004F8C0; break;
        case 5: goto L_8004F8C0; break;
        case 6: goto L_8004F8A4; break;
        case 7: goto L_8004F8B4; break;
        case 8: goto L_8004F874; break;
        default: switch_error(__func__, 0x8004F828, 0x8007D490);
    }
    // 0x8004F82C: nop

L_8004F830:
    // 0x8004F830: b           L_8004F8D8
    // 0x8004F834: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
        goto L_8004F8D8;
    // 0x8004F834: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
L_8004F838:
    // 0x8004F838: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8004F83C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8004F840: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8004F844: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
    // 0x8004F848: sw          $zero, 0x30($a3)
    MEM_W(0X30, ctx->r7) = 0;
    // 0x8004F84C: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
    // 0x8004F850: beq         $a0, $zero, L_8004F8D8
    if (ctx->r4 == 0) {
        // 0x8004F854: swc1        $f4, 0x20($a3)
        MEM_W(0X20, ctx->r7) = ctx->f4.u32l;
            goto L_8004F8D8;
    }
    // 0x8004F854: swc1        $f4, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f4.u32l;
    // 0x8004F858: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8004F85C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8004F860: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004F864: jalr        $t9
    // 0x8004F868: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8004F868: nop

    after_0:
    // 0x8004F86C: b           L_8004F8DC
    // 0x8004F870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004F8DC;
    // 0x8004F870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004F874:
    // 0x8004F874: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8004F878: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8004F87C: sw          $t8, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r24;
    // 0x8004F880: beql        $a0, $zero, L_8004F8DC
    if (ctx->r4 == 0) {
        // 0x8004F884: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004F8DC;
    }
    goto skip_0;
    // 0x8004F884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8004F888: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8004F88C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8004F890: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004F894: jalr        $t9
    // 0x8004F898: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8004F898: nop

    after_1:
    // 0x8004F89C: b           L_8004F8DC
    // 0x8004F8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004F8DC;
    // 0x8004F8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004F8A4:
    // 0x8004F8A4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8004F8A8: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8004F8AC: b           L_8004F8D8
    // 0x8004F8B0: swc1        $f6, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f6.u32l;
        goto L_8004F8D8;
    // 0x8004F8B0: swc1        $f6, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f6.u32l;
L_8004F8B4:
    // 0x8004F8B4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8004F8B8: b           L_8004F8D8
    // 0x8004F8BC: sw          $t0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r8;
        goto L_8004F8D8;
    // 0x8004F8BC: sw          $t0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r8;
L_8004F8C0:
    // 0x8004F8C0: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8004F8C4: beql        $a0, $zero, L_8004F8DC
    if (ctx->r4 == 0) {
        // 0x8004F8C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004F8DC;
    }
    goto skip_1;
    // 0x8004F8C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8004F8CC: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8004F8D0: jalr        $t9
    // 0x8004F8D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8004F8D4: nop

    after_2:
L_8004F8D8:
    // 0x8004F8D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004F8DC:
    // 0x8004F8DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8004F8E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F8E4: jr          $ra
    // 0x8004F8E8: nop

    TRACE_RETURN()
    return;
    // 0x8004F8E8: nop

;}
RECOMP_FUNC void func_8001570C_1630C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001570C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80015710: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80015714: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80015718: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8001571C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80015720: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80015724: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80015728: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001572C: lui         $s5, 0x8017
    ctx->r21 = S32(0X8017 << 16);
    // 0x80015730: lui         $s6, 0x8017
    ctx->r22 = S32(0X8017 << 16);
    // 0x80015734: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80015738: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001573C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80015740: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x80015744: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80015748: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8001574C: addiu       $s6, $s6, -0x7E88
    ctx->r22 = ADD32(ctx->r22, -0X7E88);
    // 0x80015750: addiu       $s5, $s5, -0x7E8C
    ctx->r21 = ADD32(ctx->r21, -0X7E8C);
    // 0x80015754: addiu       $s7, $zero, 0x10
    ctx->r23 = ADD32(0, 0X10);
L_80015758:
    // 0x80015758: jal         0x80015EFC
    // 0x8001575C: nop

    func_80015EFC_16AFC(rdram, ctx);
        goto after_0;
    // 0x8001575C: nop

    after_0:
    // 0x80015760: addiu       $s2, $v0, -0x1
    ctx->r18 = ADD32(ctx->r2, -0X1);
    // 0x80015764: beql        $s2, $zero, L_800157D8
    if (ctx->r18 == 0) {
        // 0x80015768: lw          $t9, 0x0($s5)
        ctx->r25 = MEM_W(ctx->r21, 0X0);
            goto L_800157D8;
    }
    goto skip_0;
    // 0x80015768: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    skip_0:
    // 0x8001576C: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
L_80015770:
    // 0x80015770: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80015774: bnel        $s0, $t6, L_80015790
    if (ctx->r16 != ctx->r14) {
        // 0x80015778: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80015790;
    }
    goto skip_1;
    // 0x80015778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x8001577C: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80015780: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80015784: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80015788: beq         $s1, $t7, L_80015844
    if (ctx->r17 == ctx->r15) {
        // 0x8001578C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80015844;
    }
    // 0x8001578C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80015790:
    // 0x80015790: jal         0x800161F0
    // 0x80015794: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800161F0_16DF0(rdram, ctx);
        goto after_1;
    // 0x80015794: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x80015798: beq         $v0, $zero, L_800157B8
    if (ctx->r2 == 0) {
        // 0x8001579C: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_800157B8;
    }
    // 0x8001579C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800157A0: lw          $t8, 0x8($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X8);
    // 0x800157A4: andi        $s3, $v0, 0xFFFE
    ctx->r19 = ctx->r2 & 0XFFFE;
    // 0x800157A8: bne         $s7, $t8, L_800157B8
    if (ctx->r23 != ctx->r24) {
        // 0x800157AC: nop
    
            goto L_800157B8;
    }
    // 0x800157AC: nop

    // 0x800157B0: b           L_800157B8
    // 0x800157B4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
        goto L_800157B8;
    // 0x800157B4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
L_800157B8:
    // 0x800157B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800157BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x800157C0: jal         0x80016254
    // 0x800157C4: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    func_80016254_16E54(rdram, ctx);
        goto after_2;
    // 0x800157C4: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_2:
    // 0x800157C8: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x800157CC: bnel        $s2, $zero, L_80015770
    if (ctx->r18 != 0) {
        // 0x800157D0: lw          $t6, 0x0($s5)
        ctx->r14 = MEM_W(ctx->r21, 0X0);
            goto L_80015770;
    }
    goto skip_2;
    // 0x800157D0: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    skip_2:
    // 0x800157D4: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
L_800157D8:
    // 0x800157D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800157DC: bne         $s0, $t9, L_800157F8
    if (ctx->r16 != ctx->r25) {
        // 0x800157E0: nop
    
            goto L_800157F8;
    }
    // 0x800157E0: nop

    // 0x800157E4: lw          $t0, 0x0($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X0);
    // 0x800157E8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800157EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800157F0: beql        $s1, $t0, L_80015848
    if (ctx->r17 == ctx->r8) {
        // 0x800157F4: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80015848;
    }
    goto skip_3;
    // 0x800157F4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_3:
L_800157F8:
    // 0x800157F8: jal         0x80015F58
    // 0x800157FC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80015F58_16B58(rdram, ctx);
        goto after_3;
    // 0x800157FC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_3:
    // 0x80015800: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80015804: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80015808: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8001580C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80015810: jal         0x80016254
    // 0x80015814: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_80016254_16E54(rdram, ctx);
        goto after_4;
    // 0x80015814: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_4:
    // 0x80015818: jal         0x80014CC4
    // 0x8001581C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80014CC4_158C4(rdram, ctx);
        goto after_5;
    // 0x8001581C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x80015820: beq         $v0, $zero, L_80015758
    if (ctx->r2 == 0) {
        // 0x80015824: nop
    
            goto L_80015758;
    }
    // 0x80015824: nop

    // 0x80015828: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8001582C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80015830: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80015834: jal         0x80015870
    // 0x80015838: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    func_80015870_16470(rdram, ctx);
        goto after_6;
    // 0x80015838: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_6:
    // 0x8001583C: b           L_80015758
    // 0x80015840: nop

        goto L_80015758;
    // 0x80015840: nop

L_80015844:
    // 0x80015844: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80015848:
    // 0x80015848: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001584C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80015850: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80015854: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80015858: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8001585C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80015860: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80015864: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80015868: jr          $ra
    // 0x8001586C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8001586C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8003BD68_3C968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BD68: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003BD6C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003BD70: addiu       $a1, $a1, 0x172C
    ctx->r5 = ADD32(ctx->r5, 0X172C);
    // 0x8003BD74: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x8003BD78: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8003BD7C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8003BD80: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x8003BD84: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003BD88: sb          $t7, 0x5B($t8)
    MEM_B(0X5B, ctx->r24) = ctx->r15;
    // 0x8003BD8C: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8003BD90: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8003BD94: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8003BD98: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x8003BD9C: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x8003BDA0: sb          $t2, 0x5A($t3)
    MEM_B(0X5A, ctx->r11) = ctx->r10;
    // 0x8003BDA4: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8003BDA8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003BDAC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8003BDB0: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x8003BDB4: lhu         $v1, 0x58($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X58);
    // 0x8003BDB8: slt         $at, $v1, $at
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8003BDBC: beql        $at, $zero, L_8003BDD8
    if (ctx->r1 == 0) {
        // 0x8003BDC0: lbu         $t8, 0x5A($v0)
        ctx->r24 = MEM_BU(ctx->r2, 0X5A);
            goto L_8003BDD8;
    }
    goto skip_0;
    // 0x8003BDC0: lbu         $t8, 0x5A($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5A);
    skip_0:
    // 0x8003BDC4: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x8003BDC8: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8003BDCC: bne         $t7, $zero, L_8003BE1C
    if (ctx->r15 != 0) {
        // 0x8003BDD0: nop
    
            goto L_8003BE1C;
    }
    // 0x8003BDD0: nop

    // 0x8003BDD4: lbu         $t8, 0x5A($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5A);
L_8003BDD8:
    // 0x8003BDD8: andi        $t1, $v1, 0x7FFF
    ctx->r9 = ctx->r3 & 0X7FFF;
    // 0x8003BDDC: lbu         $t2, 0x5B($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X5B);
    // 0x8003BDE0: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x8003BDE4: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x8003BDE8: subu        $a0, $t0, $t1
    ctx->r4 = SUB32(ctx->r8, ctx->r9);
    // 0x8003BDEC: div         $zero, $a0, $t2
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r10)));
    // 0x8003BDF0: mflo        $t3
    ctx->r11 = lo;
    // 0x8003BDF4: sh          $t3, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = ctx->r11;
    // 0x8003BDF8: bne         $t2, $zero, L_8003BE04
    if (ctx->r10 != 0) {
        // 0x8003BDFC: nop
    
            goto L_8003BE04;
    }
    // 0x8003BDFC: nop

    // 0x8003BE00: break       7
    do_break(2147728896);
L_8003BE04:
    // 0x8003BE04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003BE08: bne         $t2, $at, L_8003BE1C
    if (ctx->r10 != ctx->r1) {
        // 0x8003BE0C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003BE1C;
    }
    // 0x8003BE0C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003BE10: bne         $a0, $at, L_8003BE1C
    if (ctx->r4 != ctx->r1) {
        // 0x8003BE14: nop
    
            goto L_8003BE1C;
    }
    // 0x8003BE14: nop

    // 0x8003BE18: break       6
    do_break(2147728920);
L_8003BE1C:
    // 0x8003BE1C: jr          $ra
    // 0x8003BE20: nop

    TRACE_RETURN()
    return;
    // 0x8003BE20: nop

;}
RECOMP_FUNC void func_80035C7C_3687C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035C7C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80035C80: addiu       $t6, $t6, -0x7CD8
    ctx->r14 = ADD32(ctx->r14, -0X7CD8);
    // 0x80035C84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80035C88: lui         $t0, 0x3
    ctx->r8 = S32(0X3 << 16);
    // 0x80035C8C: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x80035C90: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80035C94: sw          $t6, -0x2534($at)
    MEM_W(-0X2534, ctx->r1) = ctx->r14;
    // 0x80035C98: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x80035C9C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80035CA0: ori         $t0, $t0, 0xB8B8
    ctx->r8 = ctx->r8 | 0XB8B8;
    // 0x80035CA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80035CA8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80035CAC: addiu       $a3, $zero, 0x250
    ctx->r7 = ADD32(0, 0X250);
    // 0x80035CB0: addiu       $a1, $zero, 0x250
    ctx->r5 = ADD32(0, 0X250);
L_80035CB4:
    // 0x80035CB4: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80035CB8: mflo        $t7
    ctx->r15 = lo;
    // 0x80035CBC: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80035CC0: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80035CC4: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80035CC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80035CCC: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80035CD0: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80035CD4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80035CD8: mflo        $t1
    ctx->r9 = lo;
    // 0x80035CDC: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x80035CE0: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x80035CE4: bne         $at, $zero, L_80035CB4
    if (ctx->r1 != 0) {
        // 0x80035CE8: sw          $t9, 0x3668($t3)
        MEM_W(0X3668, ctx->r11) = ctx->r25;
            goto L_80035CB4;
    }
    // 0x80035CE8: sw          $t9, 0x3668($t3)
    MEM_W(0X3668, ctx->r11) = ctx->r25;
    // 0x80035CEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80035CF0: sh          $zero, -0x2522($at)
    MEM_H(-0X2522, ctx->r1) = 0;
    // 0x80035CF4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80035CF8: jr          $ra
    // 0x80035CFC: sw          $zero, -0x7A88($at)
    MEM_W(-0X7A88, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80035CFC: sw          $zero, -0x7A88($at)
    MEM_W(-0X7A88, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80047990_48590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047990: jr          $ra
    // 0x80047994: nop

    TRACE_RETURN()
    return;
    // 0x80047994: nop

;}
