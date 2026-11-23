#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801E5328_5A1238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5328: lwc1        $f0, 0xA4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x801E532C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E5330: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E5334: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801E5338: nop

    // 0x801E533C: bc1fl       L_801E5350
    if (!c1cs) {
        // 0x801E5340: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801E5350;
    }
    goto skip_0;
    // 0x801E5340: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x801E5344: b           L_801E5350
    // 0x801E5348: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801E5350;
    // 0x801E5348: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801E534C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801E5350:
    // 0x801E5350: ldc1        $f8, -0x4C28($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X4C28);
    // 0x801E5354: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x801E5358: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E535C: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801E5360: nop

    // 0x801E5364: bc1f        L_801E5370
    if (!c1cs) {
        // 0x801E5368: nop
    
            goto L_801E5370;
    }
    // 0x801E5368: nop

    // 0x801E536C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E5370:
    // 0x801E5370: beq         $v0, $zero, L_801E53CC
    if (ctx->r2 == 0) {
        // 0x801E5374: nop
    
            goto L_801E53CC;
    }
    // 0x801E5374: nop

    // 0x801E5378: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801E537C: lhu         $v0, 0x7D9C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7D9C);
    // 0x801E5380: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x801E5384: sltu        $t7, $zero, $t6
    ctx->r15 = 0 < ctx->r14 ? 1 : 0;
    // 0x801E5388: bnel        $t7, $zero, L_801E53C0
    if (ctx->r15 != 0) {
        // 0x801E538C: lw          $t2, 0x5C($a0)
        ctx->r10 = MEM_W(ctx->r4, 0X5C);
            goto L_801E53C0;
    }
    goto skip_1;
    // 0x801E538C: lw          $t2, 0x5C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X5C);
    skip_1:
    // 0x801E5390: lbu         $t8, 0x90($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X90);
    // 0x801E5394: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801E5398: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801E539C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801E53A0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801E53A4: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x801E53A8: lhu         $v0, 0x7DB4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7DB4);
    // 0x801E53AC: andi        $t0, $v0, 0x8000
    ctx->r8 = ctx->r2 & 0X8000;
    // 0x801E53B0: sltu        $v0, $zero, $t0
    ctx->r2 = 0 < ctx->r8 ? 1 : 0;
    // 0x801E53B4: beq         $v0, $zero, L_801E53CC
    if (ctx->r2 == 0) {
        // 0x801E53B8: nop
    
            goto L_801E53CC;
    }
    // 0x801E53B8: nop

    // 0x801E53BC: lw          $t2, 0x5C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X5C);
L_801E53C0:
    // 0x801E53C0: lbu         $v0, 0x18($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X18);
    // 0x801E53C4: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x801E53C8: sltiu       $v0, $t3, 0x1
    ctx->r2 = ctx->r11 < 0X1 ? 1 : 0;
L_801E53CC:
    // 0x801E53CC: jr          $ra
    // 0x801E53D0: nop

    TRACE_RETURN()
    return;
    // 0x801E53D0: nop

;}
RECOMP_FUNC void func_801E3358_59F268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3358: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801E335C: addiu       $t6, $t6, 0x451C
    ctx->r14 = ADD32(ctx->r14, 0X451C);
    // 0x801E3360: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801E3364: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x801E3368: addiu       $v1, $sp, 0x8
    ctx->r3 = ADD32(ctx->r29, 0X8);
    // 0x801E336C: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x801E3370: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x801E3374: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801E3378: addiu       $t0, $t0, 0x4524
    ctx->r8 = ADD32(ctx->r8, 0X4524);
    // 0x801E337C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x801E3380: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x801E3384: addiu       $a1, $sp, 0x0
    ctx->r5 = ADD32(ctx->r29, 0X0);
    // 0x801E3388: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801E338C: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x801E3390: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x801E3394: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E3398: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E339C: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x801E33A0: lw          $t5, 0x5C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X5C);
    // 0x801E33A4: sh          $zero, 0xCE($a0)
    MEM_H(0XCE, ctx->r4) = 0;
    // 0x801E33A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E33AC: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x801E33B0: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801E33B4: swc1        $f0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f0.u32l;
    // 0x801E33B8: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E33BC: lhu         $t7, 0x94($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X94);
    // 0x801E33C0: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801E33C4: swc1        $f4, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f4.u32l;
    // 0x801E33C8: sh          $t7, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r15;
    // 0x801E33CC: lbu         $t9, 0x30($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X30);
    // 0x801E33D0: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E33D4: ori         $t2, $t9, 0x1
    ctx->r10 = ctx->r25 | 0X1;
    // 0x801E33D8: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x801E33DC: sb          $t2, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r10;
    // 0x801E33E0: addu        $t0, $v1, $t1
    ctx->r8 = ADD32(ctx->r3, ctx->r9);
    // 0x801E33E4: lh          $t3, 0x0($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X0);
    // 0x801E33E8: addu        $t4, $a1, $t1
    ctx->r12 = ADD32(ctx->r5, ctx->r9);
    // 0x801E33EC: sh          $t3, 0x40($a0)
    MEM_H(0X40, ctx->r4) = ctx->r11;
    // 0x801E33F0: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x801E33F4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x801E33F8: jr          $ra
    // 0x801E33FC: sh          $t5, 0x42($a0)
    MEM_H(0X42, ctx->r4) = ctx->r13;
    TRACE_RETURN()
    return;
    // 0x801E33FC: sh          $t5, 0x42($a0)
    MEM_H(0X42, ctx->r4) = ctx->r13;
;}
RECOMP_FUNC void func_801E28D8_59E7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E28D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E28DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E28E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E28E4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801E28E8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E28EC: jal         0x801E3834
    // 0x801E28F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E3834_59F744(rdram, ctx);
        goto after_0;
    // 0x801E28F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E28F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E28F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E28FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E2900: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E2904: swc1        $f6, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f6.u32l;
    // 0x801E2908: swc1        $f4, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f4.u32l;
    // 0x801E290C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2910: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2914: jr          $ra
    // 0x801E2918: nop

    TRACE_RETURN()
    return;
    // 0x801E2918: nop

;}
RECOMP_FUNC void func_801DF950_59B860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DF954: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DF958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DF95C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801DF960: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DF964: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DF968: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x801DF96C: jalr        $t9
    // 0x801DF970: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801DF970: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x801DF974: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DF978: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DF97C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801DF980: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801DF984: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DF988: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801DF98C: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    // 0x801DF990: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801DF994: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801DF998: nop

    // 0x801DF99C: bc1fl       L_801DF9E8
    if (!c1cs) {
        // 0x801DF9A0: lbu         $v0, 0x60($a3)
        ctx->r2 = MEM_BU(ctx->r7, 0X60);
            goto L_801DF9E8;
    }
    goto skip_0;
    // 0x801DF9A0: lbu         $v0, 0x60($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X60);
    skip_0:
    // 0x801DF9A4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801DF9A8: jal         0x801DACDC
    // 0x801DF9AC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801DF9AC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x801DF9B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DF9B4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801DF9B8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801DF9BC: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801DF9C0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x801DF9C4: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x801DF9C8: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x801DF9CC: lw          $a2, 0x4360($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4360);
    // 0x801DF9D0: lw          $a1, 0x4340($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4340);
    // 0x801DF9D4: jal         0x801E54E0
    // 0x801DF9D8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    func_801E54E0_5A13F0(rdram, ctx);
        goto after_2;
    // 0x801DF9D8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    after_2:
    // 0x801DF9DC: b           L_801DFA10
    // 0x801DF9E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DFA10;
    // 0x801DF9E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DF9E4: lbu         $v0, 0x60($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X60);
L_801DF9E8:
    // 0x801DF9E8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801DF9EC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801DF9F0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x801DF9F4: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x801DF9F8: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x801DF9FC: lw          $a2, 0x4350($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4350);
    // 0x801DFA00: lw          $a1, 0x4340($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4340);
    // 0x801DFA04: jal         0x801E54E0
    // 0x801DFA08: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    func_801E54E0_5A13F0(rdram, ctx);
        goto after_3;
    // 0x801DFA08: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    after_3:
    // 0x801DFA0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DFA10:
    // 0x801DFA10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DFA14: jr          $ra
    // 0x801DFA18: nop

    TRACE_RETURN()
    return;
    // 0x801DFA18: nop

;}
RECOMP_FUNC void func_801E2F64_59EE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2F64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2F68: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E2F6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2F70: lui         $t7, 0x900
    ctx->r15 = S32(0X900 << 16);
    // 0x801E2F74: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x801E2F78: addiu       $t7, $t7, 0x157C
    ctx->r15 = ADD32(ctx->r15, 0X157C);
    // 0x801E2F7C: sb          $t6, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r14;
    // 0x801E2F80: sw          $t7, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r15;
    // 0x801E2F84: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801E2F88: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801E2F8C: jal         0x80038BC8
    // 0x801E2F90: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801E2F90: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    after_0:
    // 0x801E2F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2F9C: jr          $ra
    // 0x801E2FA0: nop

    TRACE_RETURN()
    return;
    // 0x801E2FA0: nop

;}
RECOMP_FUNC void func_801E1C04_59DB14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1C04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1C08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1C0C: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E1C10: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x801E1C14: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801E1C18: sh          $zero, 0x30($t6)
    MEM_H(0X30, ctx->r14) = 0;
    // 0x801E1C1C: lbu         $t7, 0x60($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X60);
    // 0x801E1C20: bne         $v1, $t7, L_801E1C38
    if (ctx->r3 != ctx->r15) {
        // 0x801E1C24: nop
    
            goto L_801E1C38;
    }
    // 0x801E1C24: nop

    // 0x801E1C28: jal         0x801DACDC
    // 0x801E1C2C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_0;
    // 0x801E1C2C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x801E1C30: b           L_801E1C84
    // 0x801E1C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E1C84;
    // 0x801E1C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E1C38:
    // 0x801E1C38: lbu         $v0, 0x7CD0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7CD0);
    // 0x801E1C3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E1C40: beq         $v0, $zero, L_801E1C58
    if (ctx->r2 == 0) {
        // 0x801E1C44: nop
    
            goto L_801E1C58;
    }
    // 0x801E1C44: nop

    // 0x801E1C48: beq         $v0, $at, L_801E1C68
    if (ctx->r2 == ctx->r1) {
        // 0x801E1C4C: nop
    
            goto L_801E1C68;
    }
    // 0x801E1C4C: nop

    // 0x801E1C50: beq         $v0, $v1, L_801E1C78
    if (ctx->r2 == ctx->r3) {
        // 0x801E1C54: nop
    
            goto L_801E1C78;
    }
    // 0x801E1C54: nop

L_801E1C58:
    // 0x801E1C58: jal         0x801DACDC
    // 0x801E1C5C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801E1C5C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x801E1C60: b           L_801E1C84
    // 0x801E1C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E1C84;
    // 0x801E1C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E1C68:
    // 0x801E1C68: jal         0x801DACDC
    // 0x801E1C6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E1C6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x801E1C70: b           L_801E1C84
    // 0x801E1C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E1C84;
    // 0x801E1C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E1C78:
    // 0x801E1C78: jal         0x801DACDC
    // 0x801E1C7C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801E1C7C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x801E1C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E1C84:
    // 0x801E1C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1C88: jr          $ra
    // 0x801E1C8C: nop

    TRACE_RETURN()
    return;
    // 0x801E1C8C: nop

;}
RECOMP_FUNC void func_801E2FF4_59EF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2FF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E2FF8: nop

    // 0x801E2FFC: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801E3000: jr          $ra
    // 0x801E3004: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x801E3004: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_801F3118_5AF028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3118: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801F311C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801F3120: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801F3124: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801F3128: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801F312C: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801F3130: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F3134: beq         $v0, $zero, L_801F3150
    if (ctx->r2 == 0) {
        // 0x801F3138: lw          $v1, 0x18($t0)
        ctx->r3 = MEM_W(ctx->r8, 0X18);
            goto L_801F3150;
    }
    // 0x801F3138: lw          $v1, 0x18($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X18);
    // 0x801F313C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F3140: beq         $v0, $at, L_801F3270
    if (ctx->r2 == ctx->r1) {
        // 0x801F3144: nop
    
            goto L_801F3270;
    }
    // 0x801F3144: nop

    // 0x801F3148: b           L_801F3288
    // 0x801F314C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801F3288;
    // 0x801F314C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801F3150:
    // 0x801F3150: lw          $v0, 0x8C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8C);
    // 0x801F3154: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x801F3158: beql        $at, $zero, L_801F3244
    if (ctx->r1 == 0) {
        // 0x801F315C: lbu         $t3, 0xCC($t0)
        ctx->r11 = MEM_BU(ctx->r8, 0XCC);
            goto L_801F3244;
    }
    goto skip_0;
    // 0x801F315C: lbu         $t3, 0xCC($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XCC);
    skip_0:
    // 0x801F3160: lw          $t7, 0x88($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X88);
    // 0x801F3164: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x801F3168: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801F316C: bltz        $t7, L_801F3180
    if (SIGNED(ctx->r15) < 0) {
        // 0x801F3170: sw          $t6, 0x8C($s0)
        MEM_W(0X8C, ctx->r16) = ctx->r14;
            goto L_801F3180;
    }
    // 0x801F3170: sw          $t6, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r14;
    // 0x801F3174: addiu       $t8, $zero, -0x19
    ctx->r24 = ADD32(0, -0X19);
    // 0x801F3178: b           L_801F3188
    // 0x801F317C: sw          $t8, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r24;
        goto L_801F3188;
    // 0x801F317C: sw          $t8, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r24;
L_801F3180:
    // 0x801F3180: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x801F3184: sw          $t9, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r25;
L_801F3188:
    // 0x801F3188: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F318C: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801F3190: ldc1        $f2, -0x3F38($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X3F38);
    // 0x801F3194: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801F3198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F319C: ldc1        $f6, -0x3F30($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3F30);
    // 0x801F31A0: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x801F31A4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F31A8: mul.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x801F31AC: ldc1        $f18, -0x3F28($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3F28);
    // 0x801F31B0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801F31B4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x801F31B8: mul.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x801F31BC: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801F31C0: addiu       $t1, $zero, 0x82
    ctx->r9 = ADD32(0, 0X82);
    // 0x801F31C4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801F31C8: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x801F31CC: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x801F31D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F31D4: div.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f2.d);
    // 0x801F31D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F31DC: div.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f2.d);
    // 0x801F31E0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F31E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F31E8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801F31EC: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x801F31F0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801F31F4: jal         0x801F2CD0
    // 0x801F31F8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_801F2CD0_5AEBE0(rdram, ctx);
        goto after_0;
    // 0x801F31F8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801F31FC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801F3200: beq         $v0, $zero, L_801F3240
    if (ctx->r2 == 0) {
        // 0x801F3204: lw          $t0, 0x3C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X3C);
            goto L_801F3240;
    }
    // 0x801F3204: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x801F3208: lw          $t2, 0x88($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X88);
    // 0x801F320C: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x801F3210: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F3214: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x801F3218: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x801F321C: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801F3220: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F3224: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x801F3228: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801F322C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801F3230: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801F3234: jal         0x801EE530
    // 0x801F3238: nop

    func_801EE530_5AA440(rdram, ctx);
        goto after_1;
    // 0x801F3238: nop

    after_1:
    // 0x801F323C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
L_801F3240:
    // 0x801F3240: lbu         $t3, 0xCC($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XCC);
L_801F3244:
    // 0x801F3244: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x801F3248: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801F324C: bnel        $t3, $at, L_801F3264
    if (ctx->r11 != ctx->r1) {
        // 0x801F3250: lbu         $t5, 0x60($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X60);
            goto L_801F3264;
    }
    goto skip_1;
    // 0x801F3250: lbu         $t5, 0x60($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X60);
    skip_1:
    // 0x801F3254: lbu         $t4, -0x3594($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X3594);
    // 0x801F3258: beql        $t4, $zero, L_801F3288
    if (ctx->r12 == 0) {
        // 0x801F325C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801F3288;
    }
    goto skip_2;
    // 0x801F325C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x801F3260: lbu         $t5, 0x60($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X60);
L_801F3264:
    // 0x801F3264: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801F3268: b           L_801F3284
    // 0x801F326C: sb          $t6, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r14;
        goto L_801F3284;
    // 0x801F326C: sb          $t6, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r14;
L_801F3270:
    // 0x801F3270: jal         0x801F3AF0
    // 0x801F3274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F3AF0_5AFA00(rdram, ctx);
        goto after_2;
    // 0x801F3274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F3278: bne         $v0, $zero, L_801F3284
    if (ctx->r2 != 0) {
        // 0x801F327C: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_801F3284;
    }
    // 0x801F327C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801F3280: sb          $t7, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r15;
L_801F3284:
    // 0x801F3284: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801F3288:
    // 0x801F3288: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801F328C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801F3290: jr          $ra
    // 0x801F3294: nop

    TRACE_RETURN()
    return;
    // 0x801F3294: nop

;}
RECOMP_FUNC void func_801E8F50_5A4E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8F50: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x801E8F54: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801E8F58: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801E8F5C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801E8F60: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x801E8F64: lw          $a2, 0x5C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X5C);
    // 0x801E8F68: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801E8F6C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E8F70: lbu         $v0, 0xCC($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XCC);
    // 0x801E8F74: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801E8F78: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x801E8F7C: xori        $a3, $v0, 0x7E
    ctx->r7 = ctx->r2 ^ 0X7E;
    // 0x801E8F80: sltiu       $a3, $a3, 0x1
    ctx->r7 = ctx->r7 < 0X1 ? 1 : 0;
    // 0x801E8F84: bne         $a3, $zero, L_801E8F94
    if (ctx->r7 != 0) {
        // 0x801E8F88: lw          $s1, 0x18($a2)
        ctx->r17 = MEM_W(ctx->r6, 0X18);
            goto L_801E8F94;
    }
    // 0x801E8F88: lw          $s1, 0x18($a2)
    ctx->r17 = MEM_W(ctx->r6, 0X18);
    // 0x801E8F8C: xori        $a3, $v0, 0x81
    ctx->r7 = ctx->r2 ^ 0X81;
    // 0x801E8F90: sltiu       $a3, $a3, 0x1
    ctx->r7 = ctx->r7 < 0X1 ? 1 : 0;
L_801E8F94:
    // 0x801E8F94: bne         $v1, $a1, L_801E8FA4
    if (ctx->r3 != ctx->r5) {
        // 0x801E8F98: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_801E8FA4;
    }
    // 0x801E8F98: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x801E8F9C: b           L_801E8FA4
    // 0x801E8FA0: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
        goto L_801E8FA4;
    // 0x801E8FA0: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_801E8FA4:
    // 0x801E8FA4: bne         $v1, $v0, L_801E8FB8
    if (ctx->r3 != ctx->r2) {
        // 0x801E8FA8: addiu       $t8, $zero, 0x1B
        ctx->r24 = ADD32(0, 0X1B);
            goto L_801E8FB8;
    }
    // 0x801E8FA8: addiu       $t8, $zero, 0x1B
    ctx->r24 = ADD32(0, 0X1B);
    // 0x801E8FAC: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x801E8FB0: b           L_801E8FBC
    // 0x801E8FB4: sb          $t7, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r15;
        goto L_801E8FBC;
    // 0x801E8FB4: sb          $t7, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r15;
L_801E8FB8:
    // 0x801E8FB8: sb          $t8, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r24;
L_801E8FBC:
    // 0x801E8FBC: bne         $v1, $v0, L_801E8FD0
    if (ctx->r3 != ctx->r2) {
        // 0x801E8FC0: addiu       $t0, $zero, -0x3
        ctx->r8 = ADD32(0, -0X3);
            goto L_801E8FD0;
    }
    // 0x801E8FC0: addiu       $t0, $zero, -0x3
    ctx->r8 = ADD32(0, -0X3);
    // 0x801E8FC4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x801E8FC8: b           L_801E8FD4
    // 0x801E8FCC: sh          $t9, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r25;
        goto L_801E8FD4;
    // 0x801E8FCC: sh          $t9, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r25;
L_801E8FD0:
    // 0x801E8FD0: sh          $t0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r8;
L_801E8FD4:
    // 0x801E8FD4: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x801E8FD8: sb          $a1, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r5;
    // 0x801E8FDC: sw          $a2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r6;
    // 0x801E8FE0: jal         0x801E8C44
    // 0x801E8FE4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801E8FE4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x801E8FE8: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x801E8FEC: bne         $at, $zero, L_801E8FFC
    if (ctx->r1 != 0) {
        // 0x801E8FF0: lw          $a0, 0x80($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X80);
            goto L_801E8FFC;
    }
    // 0x801E8FF0: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x801E8FF4: b           L_801E9290
    // 0x801E8FF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E9290;
    // 0x801E8FF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E8FFC:
    // 0x801E8FFC: lbu         $t1, 0x87($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X87);
    // 0x801E9000: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E9004: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E9008: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801E900C: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x801E9010: jal         0x80034E08
    // 0x801E9014: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801E9014: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    after_1:
    // 0x801E9018: bne         $v0, $zero, L_801E9028
    if (ctx->r2 != 0) {
        // 0x801E901C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801E9028;
    }
    // 0x801E901C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801E9020: b           L_801E9290
    // 0x801E9024: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E9290;
    // 0x801E9024: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E9028:
    // 0x801E9028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E902C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E9030: jal         0x80035EEC
    // 0x801E9034: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_2;
    // 0x801E9034: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801E9038: bne         $v0, $zero, L_801E9050
    if (ctx->r2 != 0) {
        // 0x801E903C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E9050;
    }
    // 0x801E903C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E9040: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801E9044: sb          $t3, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r11;
    // 0x801E9048: b           L_801E9290
    // 0x801E904C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E9290;
    // 0x801E904C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E9050:
    // 0x801E9050: lw          $t4, 0x18($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X18);
    // 0x801E9054: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x801E9058: jal         0x801E92A4
    // 0x801E905C: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    func_801E92A4_5A51B4(rdram, ctx);
        goto after_3;
    // 0x801E905C: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    after_3:
    // 0x801E9060: jal         0x801DCCF0
    // 0x801E9064: lh          $a0, 0x3A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3A);
    func_801DCCF0_598C00(rdram, ctx);
        goto after_4;
    // 0x801E9064: lh          $a0, 0x3A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3A);
    after_4:
    // 0x801E9068: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x801E906C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x801E9070: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E9074: sw          $t5, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r13;
    // 0x801E9078: lbu         $t6, 0x87($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X87);
    // 0x801E907C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801E9080: sh          $zero, 0x62($s0)
    MEM_H(0X62, ctx->r16) = 0;
    // 0x801E9084: sb          $zero, 0x61($s0)
    MEM_B(0X61, ctx->r16) = 0;
    // 0x801E9088: sh          $zero, 0xAA($s0)
    MEM_H(0XAA, ctx->r16) = 0;
    // 0x801E908C: sb          $zero, 0x60($s0)
    MEM_B(0X60, ctx->r16) = 0;
    // 0x801E9090: sb          $t6, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r14;
    // 0x801E9094: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x801E9098: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801E909C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801E90A0: lbu         $a3, 0x43($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X43);
    // 0x801E90A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E90A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E90AC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x801E90B0: jal         0x801EE228
    // 0x801E90B4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_801EE228_5AA138(rdram, ctx);
        goto after_5;
    // 0x801E90B4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_5:
    // 0x801E90B8: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x801E90BC: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    // 0x801E90C0: addiu       $t9, $sp, 0x5C
    ctx->r25 = ADD32(ctx->r29, 0X5C);
    // 0x801E90C4: beq         $v0, $zero, L_801E90D8
    if (ctx->r2 == 0) {
        // 0x801E90C8: addiu       $t0, $sp, 0x58
        ctx->r8 = ADD32(ctx->r29, 0X58);
            goto L_801E90D8;
    }
    // 0x801E90C8: addiu       $t0, $sp, 0x58
    ctx->r8 = ADD32(ctx->r29, 0X58);
    // 0x801E90CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E90D0: b           L_801E90E4
    // 0x801E90D4: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
        goto L_801E90E4;
    // 0x801E90D4: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
L_801E90D8:
    // 0x801E90D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E90DC: nop

    // 0x801E90E0: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
L_801E90E4:
    // 0x801E90E4: beq         $v0, $zero, L_801E90FC
    if (ctx->r2 == 0) {
        // 0x801E90E8: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801E90FC;
    }
    // 0x801E90E8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E90EC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E90F0: lwc1        $f16, -0x480C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X480C);
    // 0x801E90F4: b           L_801E9104
    // 0x801E90F8: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
        goto L_801E9104;
    // 0x801E90F8: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
L_801E90FC:
    // 0x801E90FC: lwc1        $f18, -0x4808($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4808);
    // 0x801E9100: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
L_801E9104:
    // 0x801E9104: beq         $v0, $zero, L_801E911C
    if (ctx->r2 == 0) {
        // 0x801E9108: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801E911C;
    }
    // 0x801E9108: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E910C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9110: lwc1        $f4, -0x4804($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4804);
    // 0x801E9114: b           L_801E9124
    // 0x801E9118: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
        goto L_801E9124;
    // 0x801E9118: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
L_801E911C:
    // 0x801E911C: lwc1        $f6, -0x4800($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4800);
    // 0x801E9120: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
L_801E9124:
    // 0x801E9124: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801E9128: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801E912C: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801E9130: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801E9134: jal         0x80033898
    // 0x801E9138: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80033898_34498(rdram, ctx);
        goto after_6;
    // 0x801E9138: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_6:
    // 0x801E913C: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E9140: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E9144: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x801E9148: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E914C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E9150: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801E9154: addiu       $t1, $sp, 0x50
    ctx->r9 = ADD32(ctx->r29, 0X50);
    // 0x801E9158: addiu       $t2, $sp, 0x4C
    ctx->r10 = ADD32(ctx->r29, 0X4C);
    // 0x801E915C: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x801E9160: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E9164: lwc1        $f18, 0xC($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801E9168: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x801E916C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E9170: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E9174: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x801E9178: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E917C: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801E9180: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E9184: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x801E9188: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x801E918C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x801E9190: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x801E9194: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801E9198: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801E919C: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801E91A0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801E91A4: jal         0x80033898
    // 0x801E91A8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80033898_34498(rdram, ctx);
        goto after_7;
    // 0x801E91A8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_7:
    // 0x801E91AC: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E91B0: addiu       $a0, $s0, 0x9C
    ctx->r4 = ADD32(ctx->r16, 0X9C);
    // 0x801E91B4: swc1        $f4, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f4.u32l;
    // 0x801E91B8: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E91BC: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x801E91C0: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E91C4: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    // 0x801E91C8: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E91CC: swc1        $f10, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f10.u32l;
    // 0x801E91D0: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E91D4: swc1        $f16, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f16.u32l;
    // 0x801E91D8: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E91DC: jal         0x8001D394
    // 0x801E91E0: swc1        $f18, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f18.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_8;
    // 0x801E91E0: swc1        $f18, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f18.u32l;
    after_8:
    // 0x801E91E4: jal         0x8001DA08
    // 0x801E91E8: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    func_8001DA08_1E608(rdram, ctx);
        goto after_9;
    // 0x801E91E8: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    after_9:
    // 0x801E91EC: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801E91F0: sh          $v0, 0xA8($s0)
    MEM_H(0XA8, ctx->r16) = ctx->r2;
    // 0x801E91F4: addiu       $a1, $a1, -0x69B4
    ctx->r5 = ADD32(ctx->r5, -0X69B4);
    // 0x801E91F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E91FC: jal         0x80034E08
    // 0x801E9200: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_10;
    // 0x801E9200: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x801E9204: beq         $v0, $zero, L_801E928C
    if (ctx->r2 == 0) {
        // 0x801E9208: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E928C;
    }
    // 0x801E9208: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E920C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E9210: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E9214: jal         0x80035EEC
    // 0x801E9218: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_11;
    // 0x801E9218: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    after_11:
    // 0x801E921C: beq         $v0, $zero, L_801E928C
    if (ctx->r2 == 0) {
        // 0x801E9220: lw          $a3, 0x6C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X6C);
            goto L_801E928C;
    }
    // 0x801E9220: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x801E9224: lw          $a0, 0x18($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X18);
    // 0x801E9228: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x801E922C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801E9230: jal         0x801EE0C8
    // 0x801E9234: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    func_801EE0C8_5A9FD8(rdram, ctx);
        goto after_12;
    // 0x801E9234: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    after_12:
    // 0x801E9238: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x801E923C: jal         0x801EE25C
    // 0x801E9240: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    func_801EE25C_5AA16C(rdram, ctx);
        goto after_13;
    // 0x801E9240: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    after_13:
    // 0x801E9244: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9248: lwc1        $f0, -0x47FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X47FC);
    // 0x801E924C: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x801E9250: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9254: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x801E9258: lwc1        $f4, -0x47F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X47F8);
    // 0x801E925C: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x801E9260: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x801E9264: swc1        $f4, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f4.u32l;
    // 0x801E9268: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x801E926C: sw          $s0, 0x9C($a3)
    MEM_W(0X9C, ctx->r7) = ctx->r16;
    // 0x801E9270: sw          $t3, 0x5C($a3)
    MEM_W(0X5C, ctx->r7) = ctx->r11;
    // 0x801E9274: lhu         $t4, 0x14($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X14);
    // 0x801E9278: sh          $t4, 0xA0($a3)
    MEM_H(0XA0, ctx->r7) = ctx->r12;
    // 0x801E927C: lhu         $t5, 0x16($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X16);
    // 0x801E9280: sh          $t5, 0xA2($a3)
    MEM_H(0XA2, ctx->r7) = ctx->r13;
    // 0x801E9284: lhu         $t6, 0x18($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X18);
    // 0x801E9288: sh          $t6, 0xA4($a3)
    MEM_H(0XA4, ctx->r7) = ctx->r14;
L_801E928C:
    // 0x801E928C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801E9290:
    // 0x801E9290: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801E9294: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801E9298: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801E929C: jr          $ra
    // 0x801E92A0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x801E92A0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_801D650C_59241C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D650C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D6510: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D6514: addiu       $v0, $v0, -0x2E28
    ctx->r2 = ADD32(ctx->r2, -0X2E28);
    // 0x801D6518: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x801D651C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D6520: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801D6524: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801D6528: lw          $s1, 0x2C($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X2C);
    // 0x801D652C: sh          $t7, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r15;
    // 0x801D6530: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x801D6534: lhu         $t8, 0x66($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X66);
    // 0x801D6538: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801D653C: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801D6540: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x801D6544: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x801D6548: and         $t6, $s1, $at
    ctx->r14 = ctx->r17 & ctx->r1;
    // 0x801D654C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D6550: beq         $t1, $zero, L_801D6568
    if (ctx->r9 == 0) {
        // 0x801D6554: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_801D6568;
    }
    // 0x801D6554: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x801D6558: lhu         $t3, 0xCC($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0XCC);
    // 0x801D655C: subu        $t4, $t7, $t3
    ctx->r12 = SUB32(ctx->r15, ctx->r11);
    // 0x801D6560: b           L_801D6578
    // 0x801D6564: sh          $t4, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r12;
        goto L_801D6578;
    // 0x801D6564: sh          $t4, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r12;
L_801D6568:
    // 0x801D6568: lhu         $t5, 0x6A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X6A);
    // 0x801D656C: lhu         $t6, 0xCC($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XCC);
    // 0x801D6570: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x801D6574: sh          $t7, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r15;
L_801D6578:
    // 0x801D6578: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D657C: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x801D6580: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6584: ldc1        $f4, -0x5350($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5350);
    // 0x801D6588: lwc1        $f0, 0x70($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X70);
    // 0x801D658C: lwc1        $f2, 0x68($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X68);
    // 0x801D6590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6594: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801D6598: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801D659C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D65A0: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D65A4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D65A8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801D65AC: c.lt.d      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.d < ctx->f16.d;
    // 0x801D65B0: nop

    // 0x801D65B4: bc1fl       L_801D65C8
    if (!c1cs) {
        // 0x801D65B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D65C8;
    }
    goto skip_0;
    // 0x801D65B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801D65BC: jal         0x801D7B74
    // 0x801D65C0: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_801D7B74_593A84(rdram, ctx);
        goto after_0;
    // 0x801D65C0: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_0:
    // 0x801D65C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801D65C8:
    // 0x801D65C8: jal         0x801D7F20
    // 0x801D65CC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D7F20_593E30(rdram, ctx);
        goto after_1;
    // 0x801D65CC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x801D65D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D65D4: jal         0x801D5DC0
    // 0x801D65D8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D5DC0_591CD0(rdram, ctx);
        goto after_2;
    // 0x801D65D8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x801D65DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D65E0: jal         0x801D5ECC
    // 0x801D65E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D5ECC_591DDC(rdram, ctx);
        goto after_3;
    // 0x801D65E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x801D65E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D65EC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801D65F0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801D65F4: jr          $ra
    // 0x801D65F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801D65F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801EF568_5AB478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF568: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801EF56C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801EF570: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x801EF574: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x801EF578: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x801EF57C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x801EF580: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x801EF584: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x801EF588: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801EF58C: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x801EF590: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801EF594: lui         $s6, 0x8020
    ctx->r22 = S32(0X8020 << 16);
    // 0x801EF598: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EF59C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x801EF5A0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x801EF5A4: lwc1        $f20, -0x4144($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X4144);
    // 0x801EF5A8: addiu       $s6, $s6, 0x49C0
    ctx->r22 = ADD32(ctx->r22, 0X49C0);
    // 0x801EF5AC: addiu       $s1, $a0, 0x98
    ctx->r17 = ADD32(ctx->r4, 0X98);
    // 0x801EF5B0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801EF5B4: addiu       $s3, $a0, 0xA0
    ctx->r19 = ADD32(ctx->r4, 0XA0);
    // 0x801EF5B8: addiu       $s5, $zero, 0x20
    ctx->r21 = ADD32(0, 0X20);
    // 0x801EF5BC: lw          $s0, 0x0($t7)
    ctx->r16 = MEM_W(ctx->r15, 0X0);
L_801EF5C0:
    // 0x801EF5C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EF5C4: jal         0x801EF6B8
    // 0x801EF5C8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_801EF6B8_5AB5C8(rdram, ctx);
        goto after_0;
    // 0x801EF5C8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
    // 0x801EF5CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EF5D0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x801EF5D4: jal         0x801EE330
    // 0x801EF5D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_1;
    // 0x801EF5D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801EF5DC: beql        $v0, $zero, L_801EF5F0
    if (ctx->r2 == 0) {
        // 0x801EF5E0: lwc1        $f4, 0x1C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
            goto L_801EF5F0;
    }
    goto skip_0;
    // 0x801EF5E0: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    skip_0:
    // 0x801EF5E4: b           L_801EF640
    // 0x801EF5E8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_801EF640;
    // 0x801EF5E8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x801EF5EC: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
L_801EF5F0:
    // 0x801EF5F0: addiu       $t8, $zero, 0xE0
    ctx->r24 = ADD32(0, 0XE0);
    // 0x801EF5F4: addiu       $t9, $zero, 0xE0
    ctx->r25 = ADD32(0, 0XE0);
    // 0x801EF5F8: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x801EF5FC: addiu       $t0, $zero, 0xE0
    ctx->r8 = ADD32(0, 0XE0);
    // 0x801EF600: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EF604: addiu       $a1, $s0, 0x80
    ctx->r5 = ADD32(ctx->r16, 0X80);
    // 0x801EF608: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
    // 0x801EF60C: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EF610: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x801EF614: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EF618: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x801EF61C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x801EF620: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801EF624: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801EF628: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801EF62C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EF630: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EF634: lbu         $t1, 0x0($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X0);
    // 0x801EF638: jal         0x801DC554
    // 0x801EF63C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_801DC554_598464(rdram, ctx);
        goto after_2;
    // 0x801EF63C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_2:
L_801EF640:
    // 0x801EF640: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x801EF644: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801EF648: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x801EF64C: bne         $s2, $s5, L_801EF5C0
    if (ctx->r18 != ctx->r21) {
        // 0x801EF650: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801EF5C0;
    }
    // 0x801EF650: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x801EF654: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x801EF658: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x801EF65C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x801EF660: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x801EF664: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801EF668: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x801EF66C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x801EF670: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x801EF674: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x801EF678: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x801EF67C: jr          $ra
    // 0x801EF680: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801EF680: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801EBF48_5A7E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EBF48: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x801EBF4C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801EBF50: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801EBF54: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801EBF58: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801EBF5C: sw          $a1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r5;
    // 0x801EBF60: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x801EBF64: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    // 0x801EBF68: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801EBF6C: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801EBF70: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801EBF74: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x801EBF78: lw          $s2, 0x18($v1)
    ctx->r18 = MEM_W(ctx->r3, 0X18);
    // 0x801EBF7C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x801EBF80: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
    // 0x801EBF84: lbu         $t8, 0x60($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X60);
    // 0x801EBF88: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x801EBF8C: beq         $at, $zero, L_801EC3FC
    if (ctx->r1 == 0) {
        // 0x801EBF90: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_801EC3FC;
    }
    // 0x801EBF90: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801EBF94: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EBF98: addu        $at, $at, $t8
    gpr jr_addend_801EBFA0 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801EBF9C: lw          $t8, -0x45A0($at)
    ctx->r24 = ADD32(ctx->r1, -0X45A0);
    // 0x801EBFA0: jr          $t8
    // 0x801EBFA4: nop

    switch (jr_addend_801EBFA0 >> 2) {
        case 0: goto L_801EBFA8; break;
        case 1: goto L_801EC098; break;
        case 2: goto L_801EC234; break;
        case 3: goto L_801EC284; break;
        case 4: goto L_801EC350; break;
        default: switch_error(__func__, 0x801EBFA0, 0x8020BA60);
    }
    // 0x801EBFA4: nop

L_801EBFA8:
    // 0x801EBFA8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x801EBFAC: jal         0x801DCCF0
    // 0x801EBFB0: sw          $v1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r3;
    func_801DCCF0_598C00(rdram, ctx);
        goto after_0;
    // 0x801EBFB0: sw          $v1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r3;
    after_0:
    // 0x801EBFB4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EBFB8: jal         0x801EE28C
    // 0x801EBFBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801EE28C_5AA19C(rdram, ctx);
        goto after_1;
    // 0x801EBFBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x801EBFC0: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801EBFC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EBFC8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801EBFCC: lw          $a2, 0xE4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE4);
    // 0x801EBFD0: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801EBFD4: jal         0x801EE530
    // 0x801EBFD8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801EE530_5AA440(rdram, ctx);
        goto after_2;
    // 0x801EBFD8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x801EBFDC: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x801EBFE0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801EBFE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EBFE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801EBFEC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x801EBFF0: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    // 0x801EBFF4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EBFF8: jal         0x801EE228
    // 0x801EBFFC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_801EE228_5AA138(rdram, ctx);
        goto after_3;
    // 0x801EBFFC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_3:
    // 0x801EC000: lw          $v1, 0xD4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XD4);
    // 0x801EC004: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801EC008: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EC00C: lwc1        $f6, 0x68($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X68);
    // 0x801EC010: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801EC014: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EC018: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x801EC01C: lwc1        $f8, 0x6C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X6C);
    // 0x801EC020: addiu       $t1, $sp, 0xB8
    ctx->r9 = ADD32(ctx->r29, 0XB8);
    // 0x801EC024: addiu       $t2, $sp, 0xB4
    ctx->r10 = ADD32(ctx->r29, 0XB4);
    // 0x801EC028: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801EC02C: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    // 0x801EC030: swc1        $f16, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f16.u32l;
    // 0x801EC034: lwc1        $f18, 0x70($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X70);
    // 0x801EC038: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801EC03C: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x801EC040: lhu         $a2, 0x18($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X18);
    // 0x801EC044: lhu         $a1, 0x16($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X16);
    // 0x801EC048: lhu         $a0, 0x14($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X14);
    // 0x801EC04C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801EC050: jal         0x80033898
    // 0x801EC054: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80033898_34498(rdram, ctx);
        goto after_4;
    // 0x801EC054: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_4:
    // 0x801EC058: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801EC05C: lbu         $t4, 0x60($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X60);
    // 0x801EC060: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x801EC064: swc1        $f8, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f8.u32l;
    // 0x801EC068: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801EC06C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x801EC070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EC074: swc1        $f10, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f10.u32l;
    // 0x801EC078: lwc1        $f16, 0xB4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801EC07C: sh          $t3, 0x62($s1)
    MEM_H(0X62, ctx->r17) = ctx->r11;
    // 0x801EC080: sb          $t5, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r13;
    // 0x801EC084: swc1        $f16, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f16.u32l;
    // 0x801EC088: jal         0x801EE160
    // 0x801EC08C: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    func_801EE160_5AA070(rdram, ctx);
        goto after_5;
    // 0x801EC08C: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    after_5:
    // 0x801EC090: b           L_801EC400
    // 0x801EC094: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801EC400;
    // 0x801EC094: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801EC098:
    // 0x801EC098: lhu         $t6, 0x62($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X62);
    // 0x801EC09C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801EC0A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EC0A4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801EC0A8: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x801EC0AC: bgtz        $t8, L_801EC0BC
    if (SIGNED(ctx->r24) > 0) {
        // 0x801EC0B0: sh          $t7, 0x62($s1)
        MEM_H(0X62, ctx->r17) = ctx->r15;
            goto L_801EC0BC;
    }
    // 0x801EC0B0: sh          $t7, 0x62($s1)
    MEM_H(0X62, ctx->r17) = ctx->r15;
    // 0x801EC0B4: b           L_801EC3FC
    // 0x801EC0B8: sb          $t9, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r25;
        goto L_801EC3FC;
    // 0x801EC0B8: sb          $t9, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r25;
L_801EC0BC:
    // 0x801EC0BC: lwc1        $f18, 0x70($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801EC0C0: lwc1        $f4, -0x458C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X458C);
    // 0x801EC0C4: lwc1        $f10, 0x6C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x801EC0C8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801EC0CC: swc1        $f6, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f6.u32l;
    // 0x801EC0D0: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801EC0D4: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EC0D8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801EC0DC: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EC0E0: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x801EC0E4: lwc1        $f4, 0x70($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801EC0E8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801EC0EC: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x801EC0F0: lwc1        $f10, 0x74($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801EC0F4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801EC0F8: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    // 0x801EC0FC: lw          $t1, 0x34($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X34);
    // 0x801EC100: beql        $t1, $zero, L_801EC11C
    if (ctx->r9 == 0) {
        // 0x801EC104: lwc1        $f18, 0x6C($s1)
        ctx->f18.u32l = MEM_W(ctx->r17, 0X6C);
            goto L_801EC11C;
    }
    goto skip_0;
    // 0x801EC104: lwc1        $f18, 0x6C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X6C);
    skip_0:
    // 0x801EC108: lbu         $t2, 0x60($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X60);
    // 0x801EC10C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801EC110: b           L_801EC3FC
    // 0x801EC114: sb          $t3, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r11;
        goto L_801EC3FC;
    // 0x801EC114: sb          $t3, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r11;
    // 0x801EC118: lwc1        $f18, 0x6C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X6C);
L_801EC11C:
    // 0x801EC11C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x801EC120: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x801EC124: lwc1        $f4, 0x70($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801EC128: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x801EC12C: lwc1        $f6, 0x74($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801EC130: jal         0x8001D394
    // 0x801EC134: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_6;
    // 0x801EC134: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x801EC138: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801EC13C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EC140: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EC144: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801EC148: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801EC14C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801EC150: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x801EC154: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x801EC158: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801EC15C: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x801EC160: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801EC164: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801EC168: nop

    // 0x801EC16C: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x801EC170: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x801EC174: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801EC178: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801EC17C: nop

    // 0x801EC180: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x801EC184: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x801EC188: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801EC18C: add.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x801EC190: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x801EC194: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EC198: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x801EC19C: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801EC1A0: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x801EC1A4: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EC1A8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x801EC1AC: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801EC1B0: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x801EC1B4: lwc1        $f4, 0x6C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x801EC1B8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x801EC1BC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801EC1C0: lwc1        $f10, 0x70($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801EC1C4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801EC1C8: lwc1        $f6, 0x74($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801EC1CC: jal         0x8002A458
    // 0x801EC1D0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_8002A458_2B058(rdram, ctx);
        goto after_7;
    // 0x801EC1D0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x801EC1D4: lh          $t4, 0xA4($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XA4);
    // 0x801EC1D8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801EC1DC: lwc1        $f18, 0x84($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X84);
    // 0x801EC1E0: bne         $t4, $at, L_801EC224
    if (ctx->r12 != ctx->r1) {
        // 0x801EC1E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801EC224;
    }
    // 0x801EC1E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EC1E8: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801EC1EC: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EC1F0: add.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801EC1F4: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EC1F8: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x801EC1FC: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801EC200: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801EC204: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x801EC208: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801EC20C: add.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801EC210: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x801EC214: lbu         $t5, 0x60($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X60);
    // 0x801EC218: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801EC21C: b           L_801EC3FC
    // 0x801EC220: sb          $t6, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r14;
        goto L_801EC3FC;
    // 0x801EC220: sb          $t6, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r14;
L_801EC224:
    // 0x801EC224: jal         0x801EE160
    // 0x801EC228: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    func_801EE160_5AA070(rdram, ctx);
        goto after_8;
    // 0x801EC228: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    after_8:
    // 0x801EC22C: b           L_801EC400
    // 0x801EC230: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801EC400;
    // 0x801EC230: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801EC234:
    // 0x801EC234: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801EC238: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x801EC23C: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    // 0x801EC240: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801EC244: lui         $a3, 0x43FA
    ctx->r7 = S32(0X43FA << 16);
    // 0x801EC248: jal         0x8000F420
    // 0x801EC24C: lw          $a1, 0x2C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X2C);
    func_8000F420_10020(rdram, ctx);
        goto after_9;
    // 0x801EC24C: lw          $a1, 0x2C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X2C);
    after_9:
    // 0x801EC250: jal         0x801EC414
    // 0x801EC254: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801EC414_5A8324(rdram, ctx);
        goto after_10;
    // 0x801EC254: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x801EC258: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x801EC25C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801EC260: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801EC264: sb          $t8, 0x64($t9)
    MEM_B(0X64, ctx->r25) = ctx->r24;
    // 0x801EC268: lbu         $t2, 0x60($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X60);
    // 0x801EC26C: addiu       $t1, $zero, 0x64
    ctx->r9 = ADD32(0, 0X64);
    // 0x801EC270: sh          $t1, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r9;
    // 0x801EC274: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801EC278: sb          $t3, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r11;
    // 0x801EC27C: b           L_801EC3FC
    // 0x801EC280: swc1        $f4, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->f4.u32l;
        goto L_801EC3FC;
    // 0x801EC280: swc1        $f4, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->f4.u32l;
L_801EC284:
    // 0x801EC284: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EC288: lwc1        $f14, -0x4588($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X4588);
    // 0x801EC28C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EC290: lwc1        $f6, -0x4584($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4584);
    // 0x801EC294: lwc1        $f10, 0x9C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X9C);
    // 0x801EC298: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EC29C: addiu       $s2, $s1, 0xA0
    ctx->r18 = ADD32(ctx->r17, 0XA0);
    // 0x801EC2A0: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801EC2A4: swc1        $f16, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->f16.u32l;
    // 0x801EC2A8: lwc1        $f2, 0x9C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X9C);
    // 0x801EC2AC: lwc1        $f8, -0x4580($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4580);
    // 0x801EC2B0: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EC2B4: mul.s       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801EC2B8: nop

    // 0x801EC2BC: mul.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x801EC2C0: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801EC2C4: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x801EC2C8: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EC2CC: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x801EC2D0: nop

    // 0x801EC2D4: bc1f        L_801EC2F0
    if (!c1cs) {
        // 0x801EC2D8: nop
    
            goto L_801EC2F0;
    }
    // 0x801EC2D8: nop

    // 0x801EC2DC: swc1        $f14, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f14.u32l;
    // 0x801EC2E0: lbu         $t4, 0x60($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X60);
    // 0x801EC2E4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x801EC2E8: sb          $t5, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r13;
    // 0x801EC2EC: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
L_801EC2F0:
    // 0x801EC2F0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801EC2F4: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x801EC2F8: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x801EC2FC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x801EC300: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x801EC304: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x801EC308: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EC30C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EC310: lbu         $t6, 0x1($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X1);
    // 0x801EC314: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801EC318: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801EC31C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801EC320: lbu         $t7, 0x2($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X2);
    // 0x801EC324: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EC328: addiu       $a1, $s1, 0xA8
    ctx->r5 = ADD32(ctx->r17, 0XA8);
    // 0x801EC32C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801EC330: lbu         $t8, 0x3($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X3);
    // 0x801EC334: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EC338: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801EC33C: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x801EC340: jal         0x801DC554
    // 0x801EC344: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_801DC554_598464(rdram, ctx);
        goto after_11;
    // 0x801EC344: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_11:
    // 0x801EC348: b           L_801EC400
    // 0x801EC34C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801EC400;
    // 0x801EC34C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801EC350:
    // 0x801EC350: addiu       $s2, $s1, 0xA0
    ctx->r18 = ADD32(ctx->r17, 0XA0);
    // 0x801EC354: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EC358: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x801EC35C: jal         0x801EE330
    // 0x801EC360: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_12;
    // 0x801EC360: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x801EC364: beq         $v0, $zero, L_801EC37C
    if (ctx->r2 == 0) {
        // 0x801EC368: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801EC37C;
    }
    // 0x801EC368: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EC36C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801EC370: sb          $t1, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r9;
    // 0x801EC374: b           L_801EC3C0
    // 0x801EC378: lbu         $t0, 0x1($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X1);
        goto L_801EC3C0;
    // 0x801EC378: lbu         $t0, 0x1($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X1);
L_801EC37C:
    // 0x801EC37C: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EC380: lwc1        $f16, -0x457C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X457C);
    // 0x801EC384: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801EC388: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x801EC38C: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
    // 0x801EC390: lwc1        $f2, 0x1C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EC394: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x801EC398: swc1        $f2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f2.u32l;
    // 0x801EC39C: swc1        $f2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f2.u32l;
    // 0x801EC3A0: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x801EC3A4: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x801EC3A8: lbu         $t2, 0x1($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X1);
    // 0x801EC3AC: addiu       $t3, $t2, -0xC
    ctx->r11 = ADD32(ctx->r10, -0XC);
    // 0x801EC3B0: andi        $t0, $t3, 0xFF
    ctx->r8 = ctx->r11 & 0XFF;
    // 0x801EC3B4: sb          $t0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r8;
    // 0x801EC3B8: sb          $t0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r8;
    // 0x801EC3BC: sb          $t3, 0x1($s2)
    MEM_B(0X1, ctx->r18) = ctx->r11;
L_801EC3C0:
    // 0x801EC3C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EC3C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EC3C8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801EC3CC: lbu         $t4, 0x2($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X2);
    // 0x801EC3D0: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801EC3D4: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801EC3D8: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801EC3DC: lbu         $t5, 0x3($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X3);
    // 0x801EC3E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EC3E4: addiu       $a1, $s1, 0xA8
    ctx->r5 = ADD32(ctx->r17, 0XA8);
    // 0x801EC3E8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x801EC3EC: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x801EC3F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EC3F4: jal         0x801DC554
    // 0x801EC3F8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    func_801DC554_598464(rdram, ctx);
        goto after_13;
    // 0x801EC3F8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_13:
L_801EC3FC:
    // 0x801EC3FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801EC400:
    // 0x801EC400: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801EC404: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801EC408: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801EC40C: jr          $ra
    // 0x801EC410: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    TRACE_RETURN()
    return;
    // 0x801EC410: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_801F5998_5B18A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5998: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F599C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F59A0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F59A4: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x801F59A8: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x801F59AC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801F59B0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801F59B4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801F59B8: addiu       $a2, $zero, 0x6A
    ctx->r6 = ADD32(0, 0X6A);
    // 0x801F59BC: jal         0x801F5B04
    // 0x801F59C0: addiu       $a3, $zero, 0x6C
    ctx->r7 = ADD32(0, 0X6C);
    func_801F5B04_5B1A14(rdram, ctx);
        goto after_0;
    // 0x801F59C0: addiu       $a3, $zero, 0x6C
    ctx->r7 = ADD32(0, 0X6C);
    after_0:
    // 0x801F59C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F59C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F59CC: jr          $ra
    // 0x801F59D0: nop

    TRACE_RETURN()
    return;
    // 0x801F59D0: nop

;}
RECOMP_FUNC void func_801EFBDC_5ABAEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EFBDC: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x801EFBE0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801EFBE4: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x801EFBE8: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x801EFBEC: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801EFBF0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801EFBF4: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x801EFBF8: lw          $s2, 0x18($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X18);
    // 0x801EFBFC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801EFC00: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x801EFC04: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x801EFC08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801EFC0C: sw          $t6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r14;
    // 0x801EFC10: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801EFC14: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x801EFC18: sw          $t7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r15;
    // 0x801EFC1C: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801EFC20: beql        $v0, $zero, L_801EFC48
    if (ctx->r2 == 0) {
        // 0x801EFC24: lhu         $t8, 0x62($s1)
        ctx->r24 = MEM_HU(ctx->r17, 0X62);
            goto L_801EFC48;
    }
    goto skip_0;
    // 0x801EFC24: lhu         $t8, 0x62($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X62);
    skip_0:
    // 0x801EFC28: beq         $v0, $at, L_801EFE80
    if (ctx->r2 == ctx->r1) {
        // 0x801EFC2C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_801EFE80;
    }
    // 0x801EFC2C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EFC30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801EFC34: beql        $v0, $at, L_801EFF5C
    if (ctx->r2 == ctx->r1) {
        // 0x801EFC38: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801EFF5C;
    }
    goto skip_1;
    // 0x801EFC38: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x801EFC3C: b           L_801EFF5C
    // 0x801EFC40: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801EFF5C;
    // 0x801EFC40: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801EFC44: lhu         $t8, 0x62($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X62);
L_801EFC48:
    // 0x801EFC48: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801EFC4C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801EFC50: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x801EFC54: bgtz        $t0, L_801EFC64
    if (SIGNED(ctx->r8) > 0) {
        // 0x801EFC58: sh          $t9, 0x62($s1)
        MEM_H(0X62, ctx->r17) = ctx->r25;
            goto L_801EFC64;
    }
    // 0x801EFC58: sh          $t9, 0x62($s1)
    MEM_H(0X62, ctx->r17) = ctx->r25;
    // 0x801EFC5C: b           L_801EFF58
    // 0x801EFC60: sb          $t1, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r9;
        goto L_801EFF58;
    // 0x801EFC60: sb          $t1, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r9;
L_801EFC64:
    // 0x801EFC64: lwc1        $f4, 0x8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801EFC68: lwc1        $f6, 0x6C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x801EFC6C: lwc1        $f10, 0xC($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801EFC70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EFC74: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EFC78: lwc1        $f4, 0x10($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801EFC7C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801EFC80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EFC84: swc1        $f8, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f8.u32l;
    // 0x801EFC88: lwc1        $f16, 0x70($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801EFC8C: addiu       $a3, $s1, 0xA0
    ctx->r7 = ADD32(ctx->r17, 0XA0);
    // 0x801EFC90: addiu       $t3, $s1, 0x9C
    ctx->r11 = ADD32(ctx->r17, 0X9C);
    // 0x801EFC94: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EFC98: swc1        $f18, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f18.u32l;
    // 0x801EFC9C: lwc1        $f6, 0x74($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801EFCA0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EFCA4: swc1        $f8, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f8.u32l;
    // 0x801EFCA8: lw          $t2, 0x34($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X34);
    // 0x801EFCAC: beql        $t2, $zero, L_801EFD14
    if (ctx->r10 == 0) {
        // 0x801EFCB0: lhu         $t7, 0x62($s1)
        ctx->r15 = MEM_HU(ctx->r17, 0X62);
            goto L_801EFD14;
    }
    goto skip_2;
    // 0x801EFCB0: lhu         $t7, 0x62($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X62);
    skip_2:
    // 0x801EFCB4: jal         0x801EFF74
    // 0x801EFCB8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_801EFF74_5ABE84(rdram, ctx);
        goto after_0;
    // 0x801EFCB8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_0:
    // 0x801EFCBC: addiu       $t4, $s1, 0x9D
    ctx->r12 = ADD32(ctx->r17, 0X9D);
    // 0x801EFCC0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801EFCC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EFCC8: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    // 0x801EFCCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801EFCD0: jal         0x801EFF74
    // 0x801EFCD4: addiu       $a3, $s1, 0xC4
    ctx->r7 = ADD32(ctx->r17, 0XC4);
    func_801EFF74_5ABE84(rdram, ctx);
        goto after_1;
    // 0x801EFCD4: addiu       $a3, $s1, 0xC4
    ctx->r7 = ADD32(ctx->r17, 0XC4);
    after_1:
    // 0x801EFCD8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EFCDC: jal         0x801EE25C
    // 0x801EFCE0: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    func_801EE25C_5AA16C(rdram, ctx);
        goto after_2;
    // 0x801EFCE0: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    after_2:
    // 0x801EFCE4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EFCE8: jal         0x801EE2BC
    // 0x801EFCEC: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    func_801EE2BC_5AA1CC(rdram, ctx);
        goto after_3;
    // 0x801EFCEC: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    after_3:
    // 0x801EFCF0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EFCF4: jal         0x801EE28C
    // 0x801EFCF8: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    func_801EE28C_5AA19C(rdram, ctx);
        goto after_4;
    // 0x801EFCF8: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    after_4:
    // 0x801EFCFC: lbu         $t5, 0x60($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X60);
    // 0x801EFD00: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x801EFD04: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801EFD08: b           L_801EFF58
    // 0x801EFD0C: sb          $t6, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r14;
        goto L_801EFF58;
    // 0x801EFD0C: sb          $t6, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r14;
    // 0x801EFD10: lhu         $t7, 0x62($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X62);
L_801EFD14:
    // 0x801EFD14: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x801EFD18: beql        $t7, $at, L_801EFE00
    if (ctx->r15 == ctx->r1) {
        // 0x801EFD1C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_801EFE00;
    }
    goto skip_3;
    // 0x801EFD1C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_3:
    // 0x801EFD20: lwc1        $f10, 0x6C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x801EFD24: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x801EFD28: lw          $a2, 0xC($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XC);
    // 0x801EFD2C: lw          $a3, 0x10($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X10);
    // 0x801EFD30: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801EFD34: lwc1        $f16, 0x70($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801EFD38: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x801EFD3C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801EFD40: lwc1        $f18, 0x74($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801EFD44: jal         0x8002A458
    // 0x801EFD48: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_8002A458_2B058(rdram, ctx);
        goto after_5;
    // 0x801EFD48: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x801EFD4C: lh          $t8, 0x88($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X88);
    // 0x801EFD50: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801EFD54: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801EFD58: bnel        $t8, $at, L_801EFE00
    if (ctx->r24 != ctx->r1) {
        // 0x801EFD5C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_801EFE00;
    }
    goto skip_4;
    // 0x801EFD5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_4:
    // 0x801EFD60: lwc1        $f4, 0x8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801EFD64: lwc1        $f10, 0xC($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801EFD68: addiu       $t9, $s1, 0x9C
    ctx->r25 = ADD32(ctx->r17, 0X9C);
    // 0x801EFD6C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EFD70: lwc1        $f4, 0x10($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801EFD74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EFD78: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801EFD7C: swc1        $f8, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f8.u32l;
    // 0x801EFD80: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801EFD84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EFD88: addiu       $a3, $s1, 0xA0
    ctx->r7 = ADD32(ctx->r17, 0XA0);
    // 0x801EFD8C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EFD90: swc1        $f18, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f18.u32l;
    // 0x801EFD94: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801EFD98: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EFD9C: swc1        $f8, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f8.u32l;
    // 0x801EFDA0: jal         0x801EFF74
    // 0x801EFDA4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_801EFF74_5ABE84(rdram, ctx);
        goto after_6;
    // 0x801EFDA4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_6:
    // 0x801EFDA8: addiu       $t0, $s1, 0x9D
    ctx->r8 = ADD32(ctx->r17, 0X9D);
    // 0x801EFDAC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801EFDB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EFDB4: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    // 0x801EFDB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801EFDBC: jal         0x801EFF74
    // 0x801EFDC0: addiu       $a3, $s1, 0xC4
    ctx->r7 = ADD32(ctx->r17, 0XC4);
    func_801EFF74_5ABE84(rdram, ctx);
        goto after_7;
    // 0x801EFDC0: addiu       $a3, $s1, 0xC4
    ctx->r7 = ADD32(ctx->r17, 0XC4);
    after_7:
    // 0x801EFDC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EFDC8: jal         0x801EE25C
    // 0x801EFDCC: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    func_801EE25C_5AA16C(rdram, ctx);
        goto after_8;
    // 0x801EFDCC: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    after_8:
    // 0x801EFDD0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EFDD4: jal         0x801EE2BC
    // 0x801EFDD8: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    func_801EE2BC_5AA1CC(rdram, ctx);
        goto after_9;
    // 0x801EFDD8: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    after_9:
    // 0x801EFDDC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EFDE0: jal         0x801EE28C
    // 0x801EFDE4: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    func_801EE28C_5AA19C(rdram, ctx);
        goto after_10;
    // 0x801EFDE4: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    after_10:
    // 0x801EFDE8: lbu         $t1, 0x60($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X60);
    // 0x801EFDEC: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x801EFDF0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x801EFDF4: b           L_801EFF58
    // 0x801EFDF8: sb          $t2, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r10;
        goto L_801EFF58;
    // 0x801EFDF8: sb          $t2, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r10;
    // 0x801EFDFC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_801EFE00:
    // 0x801EFE00: jal         0x801EE160
    // 0x801EFE04: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    func_801EE160_5AA070(rdram, ctx);
        goto after_11;
    // 0x801EFE04: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    after_11:
    // 0x801EFE08: beql        $s3, $zero, L_801EFF5C
    if (ctx->r19 == 0) {
        // 0x801EFE0C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801EFF5C;
    }
    goto skip_5;
    // 0x801EFE0C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_5:
    // 0x801EFE10: blez        $s3, L_801EFE3C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x801EFE14: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_801EFE3C;
    }
    // 0x801EFE14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_801EFE18:
    // 0x801EFE18: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x801EFE1C: beql        $v0, $zero, L_801EFF5C
    if (ctx->r2 == 0) {
        // 0x801EFE20: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801EFF5C;
    }
    goto skip_6;
    // 0x801EFE20: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_6:
    // 0x801EFE24: lbu         $t3, 0x94($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X94);
    // 0x801EFE28: blez        $t3, L_801EFE3C
    if (SIGNED(ctx->r11) <= 0) {
        // 0x801EFE2C: nop
    
            goto L_801EFE3C;
    }
    // 0x801EFE2C: nop

    // 0x801EFE30: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x801EFE34: bne         $a3, $s3, L_801EFE18
    if (ctx->r7 != ctx->r19) {
        // 0x801EFE38: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801EFE18;
    }
    // 0x801EFE38: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801EFE3C:
    // 0x801EFE3C: beql        $a3, $s3, L_801EFF5C
    if (ctx->r7 == ctx->r19) {
        // 0x801EFE40: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801EFF5C;
    }
    goto skip_7;
    // 0x801EFE40: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_7:
    // 0x801EFE44: lhu         $t4, 0x68($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X68);
    // 0x801EFE48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EFE4C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x801EFE50: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x801EFE54: sh          $t5, 0x68($s1)
    MEM_H(0X68, ctx->r17) = ctx->r13;
    // 0x801EFE58: lhu         $t7, 0xBA($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0XBA);
    // 0x801EFE5C: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x801EFE60: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801EFE64: bnel        $at, $zero, L_801EFF5C
    if (ctx->r1 != 0) {
        // 0x801EFE68: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801EFF5C;
    }
    goto skip_8;
    // 0x801EFE68: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_8:
    // 0x801EFE6C: sh          $zero, 0x68($s1)
    MEM_H(0X68, ctx->r17) = 0;
    // 0x801EFE70: jal         0x801F0180
    // 0x801EFE74: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    func_801F0180_5AC090(rdram, ctx);
        goto after_12;
    // 0x801EFE74: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    after_12:
    // 0x801EFE78: b           L_801EFF5C
    // 0x801EFE7C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801EFF5C;
    // 0x801EFE7C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801EFE80:
    // 0x801EFE80: jal         0x801EE5F4
    // 0x801EFE84: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_801EE5F4_5AA504(rdram, ctx);
        goto after_13;
    // 0x801EFE84: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_13:
    // 0x801EFE88: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x801EFE8C: jal         0x801EE5F4
    // 0x801EFE90: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_801EE5F4_5AA504(rdram, ctx);
        goto after_14;
    // 0x801EFE90: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_14:
    // 0x801EFE94: addiu       $a0, $s1, 0x9C
    ctx->r4 = ADD32(ctx->r17, 0X9C);
    // 0x801EFE98: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801EFE9C: jal         0x801EE330
    // 0x801EFEA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_15;
    // 0x801EFEA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x801EFEA4: addiu       $a0, $s1, 0x9D
    ctx->r4 = ADD32(ctx->r17, 0X9D);
    // 0x801EFEA8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801EFEAC: jal         0x801EE330
    // 0x801EFEB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_16;
    // 0x801EFEB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x801EFEB4: beq         $v0, $zero, L_801EFEC4
    if (ctx->r2 == 0) {
        // 0x801EFEB8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_801EFEC4;
    }
    // 0x801EFEB8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801EFEBC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801EFEC0: sb          $t8, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r24;
L_801EFEC4:
    // 0x801EFEC4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x801EFEC8: addiu       $s0, $s0, 0x4C28
    ctx->r16 = ADD32(ctx->r16, 0X4C28);
    // 0x801EFECC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EFED0: addiu       $t1, $zero, 0xAA
    ctx->r9 = ADD32(0, 0XAA);
    // 0x801EFED4: addiu       $t2, $zero, 0x56
    ctx->r10 = ADD32(0, 0X56);
    // 0x801EFED8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801EFEDC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x801EFEE0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x801EFEE4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801EFEE8: or          $t9, $s0, $at
    ctx->r25 = ctx->r16 | ctx->r1;
    // 0x801EFEEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EFEF0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801EFEF4: lbu         $t4, 0x9C($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X9C);
    // 0x801EFEF8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EFEFC: or          $a2, $t9, $at
    ctx->r6 = ctx->r25 | ctx->r1;
    // 0x801EFF00: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x801EFF04: addiu       $a1, $s1, 0xA0
    ctx->r5 = ADD32(ctx->r17, 0XA0);
    // 0x801EFF08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EFF0C: jal         0x801DC554
    // 0x801EFF10: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    func_801DC554_598464(rdram, ctx);
        goto after_17;
    // 0x801EFF10: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    after_17:
    // 0x801EFF14: addiu       $t5, $zero, 0xD4
    ctx->r13 = ADD32(0, 0XD4);
    // 0x801EFF18: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x801EFF1C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x801EFF20: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x801EFF24: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x801EFF28: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801EFF2C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801EFF30: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801EFF34: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801EFF38: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801EFF3C: lbu         $t0, 0x9D($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X9D);
    // 0x801EFF40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801EFF44: addiu       $a1, $s1, 0xC4
    ctx->r5 = ADD32(ctx->r17, 0XC4);
    // 0x801EFF48: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801EFF4C: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    // 0x801EFF50: jal         0x801DC554
    // 0x801EFF54: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_801DC554_598464(rdram, ctx);
        goto after_18;
    // 0x801EFF54: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_18:
L_801EFF58:
    // 0x801EFF58: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801EFF5C:
    // 0x801EFF5C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801EFF60: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801EFF64: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x801EFF68: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x801EFF6C: jr          $ra
    // 0x801EFF70: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    TRACE_RETURN()
    return;
    // 0x801EFF70: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_801E01A0_59C0B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E01A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E01A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E01A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E01AC: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801E01B0: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x801E01B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E01B8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E01BC: c.le.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d <= ctx->f4.d;
    // 0x801E01C0: nop

    // 0x801E01C4: bc1fl       L_801E01E4
    if (!c1cs) {
        // 0x801E01C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E01E4;
    }
    goto skip_0;
    // 0x801E01C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E01CC: jal         0x801E62D0
    // 0x801E01D0: nop

    func_801E62D0_5A21E0(rdram, ctx);
        goto after_0;
    // 0x801E01D0: nop

    after_0:
    // 0x801E01D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E01D8: jal         0x801DACDC
    // 0x801E01DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801E01DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801E01E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E01E4:
    // 0x801E01E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E01E8: jr          $ra
    // 0x801E01EC: nop

    TRACE_RETURN()
    return;
    // 0x801E01EC: nop

;}
RECOMP_FUNC void func_801F557C_5B148C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F557C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5584: jal         0x801E3AC0
    // 0x801F5588: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801F5588: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F558C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5594: jr          $ra
    // 0x801F5598: nop

    TRACE_RETURN()
    return;
    // 0x801F5598: nop

;}
RECOMP_FUNC void func_801E7544_5A3454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E7548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E754C: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E7550: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801E7554: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801E7558: sb          $t6, 0x2F($t7)
    MEM_B(0X2F, ctx->r15) = ctx->r14;
    // 0x801E755C: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801E7560: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E7564: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E7568: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x801E756C: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    // 0x801E7570: lhu         $t0, 0x94($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X94);
    // 0x801E7574: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E7578: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    // 0x801E757C: swc1        $f6, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f6.u32l;
    // 0x801E7580: swc1        $f4, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f4.u32l;
    // 0x801E7584: jal         0x80038B98
    // 0x801E7588: ori         $a0, $zero, 0x826D
    ctx->r4 = 0 | 0X826D;
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x801E7588: ori         $a0, $zero, 0x826D
    ctx->r4 = 0 | 0X826D;
    after_0:
    // 0x801E758C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E7590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E7594: jr          $ra
    // 0x801E7598: nop

    TRACE_RETURN()
    return;
    // 0x801E7598: nop

;}
RECOMP_FUNC void func_801DDD5C_599C6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDD5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDD60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDD64: jal         0x801E3400
    // 0x801DDD68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3400_59F310(rdram, ctx);
        goto after_0;
    // 0x801DDD68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DDD6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DDD70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDD74: jr          $ra
    // 0x801DDD78: nop

    TRACE_RETURN()
    return;
    // 0x801DDD78: nop

;}
RECOMP_FUNC void func_801F770C_5B361C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F770C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x801F7710: lbu         $t6, 0x7AF8($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7AF8);
    // 0x801F7714: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F7718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F771C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F7720: bne         $t6, $zero, L_801F7794
    if (ctx->r14 != 0) {
        // 0x801F7724: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_801F7794;
    }
    // 0x801F7724: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F7728: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F772C: jal         0x801E7E90
    // 0x801F7730: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    func_801E7E90_5A3DA0(rdram, ctx);
        goto after_0;
    // 0x801F7730: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_0:
    // 0x801F7734: bne         $v0, $zero, L_801F7794
    if (ctx->r2 != 0) {
        // 0x801F7738: lui         $v1, 0x8020
        ctx->r3 = S32(0X8020 << 16);
            goto L_801F7794;
    }
    // 0x801F7738: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801F773C: addiu       $v1, $v1, -0x39FC
    ctx->r3 = ADD32(ctx->r3, -0X39FC);
    // 0x801F7740: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801F7744: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801F7748: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x801F774C: lw          $t9, 0x5C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X5C);
    // 0x801F7750: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F7754: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801F7758: sh          $t7, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r15;
    // 0x801F775C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F7760: lhu         $t0, 0x94($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X94);
    // 0x801F7764: lw          $t1, 0x5C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X5C);
    // 0x801F7768: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    // 0x801F776C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F7770: lhu         $t2, 0x94($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X94);
    // 0x801F7774: lw          $t4, 0x5C($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X5C);
    // 0x801F7778: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x801F777C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x801F7780: swc1        $f0, 0x7DBC($at)
    MEM_W(0X7DBC, ctx->r1) = ctx->f0.u32l;
    // 0x801F7784: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x801F7788: lw          $t6, 0x5C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X5C);
    // 0x801F778C: b           L_801F779C
    // 0x801F7790: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
        goto L_801F779C;
    // 0x801F7790: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
L_801F7794:
    // 0x801F7794: jal         0x801FB2A4
    // 0x801F7798: nop

    func_801FB2A4_5B71B4(rdram, ctx);
        goto after_1;
    // 0x801F7798: nop

    after_1:
L_801F779C:
    // 0x801F779C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F77A0: addiu       $a0, $a0, 0x77F4
    ctx->r4 = ADD32(ctx->r4, 0X77F4);
    // 0x801F77A4: jal         0x8003524C
    // 0x801F77A8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8003524C_35E4C(rdram, ctx);
        goto after_2;
    // 0x801F77A8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_2:
    // 0x801F77AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801F77B0: jal         0x80036860
    // 0x801F77B4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80036860_37460(rdram, ctx);
        goto after_3;
    // 0x801F77B4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_3:
    // 0x801F77B8: bne         $v0, $zero, L_801F77E4
    if (ctx->r2 != 0) {
        // 0x801F77BC: lui         $t8, 0x8020
        ctx->r24 = S32(0X8020 << 16);
            goto L_801F77E4;
    }
    // 0x801F77BC: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801F77C0: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x801F77C4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801F77C8: lw          $t7, 0x5C($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X5C);
    // 0x801F77CC: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x801F77D0: sb          $zero, 0x7AF8($at)
    MEM_B(0X7AF8, ctx->r1) = 0;
    // 0x801F77D4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801F77D8: sb          $zero, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = 0;
    // 0x801F77DC: jal         0x8003521C
    // 0x801F77E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F77E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_4:
L_801F77E4:
    // 0x801F77E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F77E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F77EC: jr          $ra
    // 0x801F77F0: nop

    TRACE_RETURN()
    return;
    // 0x801F77F0: nop

;}
RECOMP_FUNC void func_801EE4AC_5AA3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE4AC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801EE4B0: lw          $t7, 0x5C($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X5C);
    // 0x801EE4B4: sb          $zero, 0x60($a0)
    MEM_B(0X60, ctx->r4) = 0;
    // 0x801EE4B8: sb          $zero, 0x61($a0)
    MEM_B(0X61, ctx->r4) = 0;
    // 0x801EE4BC: sh          $zero, 0x62($a0)
    MEM_H(0X62, ctx->r4) = 0;
    // 0x801EE4C0: sb          $a2, 0x64($a0)
    MEM_B(0X64, ctx->r4) = ctx->r6;
    // 0x801EE4C4: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    // 0x801EE4C8: sb          $zero, 0x66($a0)
    MEM_B(0X66, ctx->r4) = 0;
    // 0x801EE4CC: sw          $a1, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r5;
    // 0x801EE4D0: sb          $zero, 0x67($a0)
    MEM_B(0X67, ctx->r4) = 0;
    // 0x801EE4D4: sh          $zero, 0x68($a0)
    MEM_H(0X68, ctx->r4) = 0;
    // 0x801EE4D8: jr          $ra
    // 0x801EE4DC: sw          $t7, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x801EE4DC: sw          $t7, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_801F7130_5B3040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7130: jr          $ra
    // 0x801F7134: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x801F7134: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
;}
RECOMP_FUNC void func_801E7F50_5A3E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E7F54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E7F58: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E7F5C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801E7F60: sh          $zero, 0x36($t6)
    MEM_H(0X36, ctx->r14) = 0;
    // 0x801E7F64: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E7F68: lw          $v0, 0x4C($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X4C);
    // 0x801E7F6C: beql        $v0, $zero, L_801E7FA8
    if (ctx->r2 == 0) {
        // 0x801E7F70: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E7FA8;
    }
    goto skip_0;
    // 0x801E7F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E7F74: lw          $t8, 0x64($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X64);
    // 0x801E7F78: andi        $t9, $t8, 0x100
    ctx->r25 = ctx->r24 & 0X100;
    // 0x801E7F7C: beql        $t9, $zero, L_801E7FA8
    if (ctx->r25 == 0) {
        // 0x801E7F80: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E7FA8;
    }
    goto skip_1;
    // 0x801E7F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801E7F84: lbu         $t0, 0xD4($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XD4);
    // 0x801E7F88: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x801E7F8C: bnel        $t0, $zero, L_801E7FA8
    if (ctx->r8 != 0) {
        // 0x801E7F90: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E7FA8;
    }
    goto skip_2;
    // 0x801E7F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x801E7F94: jal         0x801DCD48
    // 0x801E7F98: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801DCD48_598C58(rdram, ctx);
        goto after_0;
    // 0x801E7F98: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E7F9C: jal         0x801E3134
    // 0x801E7FA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801E3134_59F044(rdram, ctx);
        goto after_1;
    // 0x801E7FA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801E7FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E7FA8:
    // 0x801E7FA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E7FAC: jr          $ra
    // 0x801E7FB0: nop

    TRACE_RETURN()
    return;
    // 0x801E7FB0: nop

;}
RECOMP_FUNC void func_801EED84_5AAC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EED84: jr          $ra
    // 0x801EED88: nop

    TRACE_RETURN()
    return;
    // 0x801EED88: nop

;}
RECOMP_FUNC void func_801DF5A4_59B4B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF5A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DF5A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DF5AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DF5B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DF5B4: swc1        $f4, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f4.u32l;
    // 0x801DF5B8: jal         0x801E307C
    // 0x801DF5BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E307C_59EF8C(rdram, ctx);
        goto after_0;
    // 0x801DF5BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DF5C0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DF5C4: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DF5C8: jalr        $t9
    // 0x801DF5CC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801DF5CC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801DF5D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DF5D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DF5D8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801DF5DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DF5E0: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801DF5E4: lwc1        $f6, 0x28($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801DF5E8: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x801DF5EC: nop

    // 0x801DF5F0: bc1fl       L_801DF604
    if (!c1cs) {
        // 0x801DF5F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DF604;
    }
    goto skip_0;
    // 0x801DF5F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801DF5F8: jal         0x801DACDC
    // 0x801DF5FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801DF5FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x801DF600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DF604:
    // 0x801DF604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DF608: jr          $ra
    // 0x801DF60C: nop

    TRACE_RETURN()
    return;
    // 0x801DF60C: nop

;}
RECOMP_FUNC void func_801E1E70_59DD80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1E70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1E74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1E78: jal         0x801E7DE8
    // 0x801E1E7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801E1E7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E1E80: beq         $v0, $zero, L_801E1EA8
    if (ctx->r2 == 0) {
        // 0x801E1E84: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801E1EA8;
    }
    // 0x801E1E84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E1E88: lui         $a1, 0x3F38
    ctx->r5 = S32(0X3F38 << 16);
    // 0x801E1E8C: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x801E1E90: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801E1E94: ori         $a1, $a1, 0x51EB
    ctx->r5 = ctx->r5 | 0X51EB;
    // 0x801E1E98: jal         0x801E1F5C
    // 0x801E1E9C: lui         $a3, 0x41C0
    ctx->r7 = S32(0X41C0 << 16);
    func_801E1F5C_59DE6C(rdram, ctx);
        goto after_1;
    // 0x801E1E9C: lui         $a3, 0x41C0
    ctx->r7 = S32(0X41C0 << 16);
    after_1:
    // 0x801E1EA0: b           L_801E1EC4
    // 0x801E1EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E1EC4;
    // 0x801E1EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E1EA8:
    // 0x801E1EA8: lui         $a1, 0x3FE6
    ctx->r5 = S32(0X3FE6 << 16);
    // 0x801E1EAC: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x801E1EB0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801E1EB4: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x801E1EB8: jal         0x801E1F5C
    // 0x801E1EBC: lui         $a3, 0x41C0
    ctx->r7 = S32(0X41C0 << 16);
    func_801E1F5C_59DE6C(rdram, ctx);
        goto after_2;
    // 0x801E1EBC: lui         $a3, 0x41C0
    ctx->r7 = S32(0X41C0 << 16);
    after_2:
    // 0x801E1EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E1EC4:
    // 0x801E1EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1EC8: jr          $ra
    // 0x801E1ECC: nop

    TRACE_RETURN()
    return;
    // 0x801E1ECC: nop

;}
RECOMP_FUNC void func_801F6694_5B25A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F669C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F66A0: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801F66A4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x801F66A8: jal         0x801F6770
    // 0x801F66AC: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_801F6770_5B2680(rdram, ctx);
        goto after_0;
    // 0x801F66AC: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_0:
    // 0x801F66B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F66B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F66B8: jr          $ra
    // 0x801F66BC: nop

    TRACE_RETURN()
    return;
    // 0x801F66BC: nop

;}
RECOMP_FUNC void func_801D5374_591284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5374: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801D5378: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D537C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D5380: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D5384: lhu         $a0, 0x6E($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6E);
    // 0x801D5388: jal         0x80003D88
    // 0x801D538C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_80003D88_4988(rdram, ctx);
        goto after_0;
    // 0x801D538C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x801D5390: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D5394: lwc1        $f4, -0x2E34($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D5398: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D539C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D53A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D53A4: mul.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D53A8: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801D53AC: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x801D53B0: nop

    // 0x801D53B4: bc1fl       L_801D53C8
    if (!c1cs) {
        // 0x801D53B8: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801D53C8;
    }
    goto skip_0;
    // 0x801D53B8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_0:
    // 0x801D53BC: b           L_801D53C8
    // 0x801D53C0: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_801D53C8;
    // 0x801D53C0: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x801D53C4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801D53C8:
    // 0x801D53C8: ldc1        $f16, -0x5388($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X5388);
    // 0x801D53CC: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801D53D0: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x801D53D4: nop

    // 0x801D53D8: bc1tl       L_801D54AC
    if (c1cs) {
        // 0x801D53DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D54AC;
    }
    goto skip_1;
    // 0x801D53DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801D53E0: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x801D53E4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x801D53E8: lhu         $a0, 0x94($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X94);
    // 0x801D53EC: addiu       $a0, $a0, 0x200
    ctx->r4 = ADD32(ctx->r4, 0X200);
    // 0x801D53F0: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x801D53F4: jal         0x80003F30
    // 0x801D53F8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80003F30_4B30(rdram, ctx);
        goto after_1;
    // 0x801D53F8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x801D53FC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801D5400: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D5404: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D5408: lw          $a2, -0x39FC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X39FC);
    // 0x801D540C: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x801D5410: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x801D5414: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x801D5418: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x801D541C: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x801D5420: jal         0x8001D718
    // 0x801D5424: addiu       $a2, $a2, 0x84
    ctx->r6 = ADD32(ctx->r6, 0X84);
    func_8001D718_1E318(rdram, ctx);
        goto after_2;
    // 0x801D5424: addiu       $a2, $a2, 0x84
    ctx->r6 = ADD32(ctx->r6, 0X84);
    after_2:
    // 0x801D5428: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801D542C: jal         0x80003A94
    // 0x801D5430: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    func_80003A94_4694(rdram, ctx);
        goto after_3;
    // 0x801D5430: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    after_3:
    // 0x801D5434: lhu         $t8, 0x66($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X66);
    // 0x801D5438: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D543C: subu        $t9, $v0, $t8
    ctx->r25 = SUB32(ctx->r2, ctx->r24);
    // 0x801D5440: addiu       $t0, $t9, 0x800
    ctx->r8 = ADD32(ctx->r25, 0X800);
    // 0x801D5444: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x801D5448: slti        $at, $t1, 0x1000
    ctx->r1 = SIGNED(ctx->r9) < 0X1000 ? 1 : 0;
    // 0x801D544C: bne         $at, $zero, L_801D5480
    if (ctx->r1 != 0) {
        // 0x801D5450: addiu       $t9, $zero, 0x4
        ctx->r25 = ADD32(0, 0X4);
            goto L_801D5480;
    }
    // 0x801D5450: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x801D5454: lhu         $t2, 0x64($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X64);
    // 0x801D5458: subu        $t3, $v1, $t2
    ctx->r11 = SUB32(ctx->r3, ctx->r10);
    // 0x801D545C: addiu       $t4, $t3, 0x800
    ctx->r12 = ADD32(ctx->r11, 0X800);
    // 0x801D5460: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x801D5464: slti        $at, $t5, 0x1000
    ctx->r1 = SIGNED(ctx->r13) < 0X1000 ? 1 : 0;
    // 0x801D5468: beql        $at, $zero, L_801D5484
    if (ctx->r1 == 0) {
        // 0x801D546C: sb          $zero, 0x63($s0)
        MEM_B(0X63, ctx->r16) = 0;
            goto L_801D5484;
    }
    goto skip_2;
    // 0x801D546C: sb          $zero, 0x63($s0)
    MEM_B(0X63, ctx->r16) = 0;
    skip_2:
    // 0x801D5470: lbu         $t6, 0x63($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X63);
    // 0x801D5474: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801D5478: b           L_801D5484
    // 0x801D547C: sb          $t7, 0x63($s0)
    MEM_B(0X63, ctx->r16) = ctx->r15;
        goto L_801D5484;
    // 0x801D547C: sb          $t7, 0x63($s0)
    MEM_B(0X63, ctx->r16) = ctx->r15;
L_801D5480:
    // 0x801D5480: sb          $zero, 0x63($s0)
    MEM_B(0X63, ctx->r16) = 0;
L_801D5484:
    // 0x801D5484: lbu         $t8, 0x63($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X63);
    // 0x801D5488: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x801D548C: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x801D5490: bnel        $at, $zero, L_801D54A8
    if (ctx->r1 != 0) {
        // 0x801D5494: sh          $v0, 0x64($s0)
        MEM_H(0X64, ctx->r16) = ctx->r2;
            goto L_801D54A8;
    }
    goto skip_3;
    // 0x801D5494: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    skip_3:
    // 0x801D5498: sb          $t9, 0x63($s0)
    MEM_B(0X63, ctx->r16) = ctx->r25;
    // 0x801D549C: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x801D54A0: sb          $t0, 0x62($s0)
    MEM_B(0X62, ctx->r16) = ctx->r8;
    // 0x801D54A4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_801D54A8:
    // 0x801D54A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D54AC:
    // 0x801D54AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D54B0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801D54B4: jr          $ra
    // 0x801D54B8: nop

    TRACE_RETURN()
    return;
    // 0x801D54B8: nop

;}
RECOMP_FUNC void func_801F7F78_5B3E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7F78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F7F7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F7F80: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x801F7F84: addiu       $s0, $s0, -0x3A38
    ctx->r16 = ADD32(ctx->r16, -0X3A38);
    // 0x801F7F88: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F7F8C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x801F7F90: lui         $t6, 0xD
    ctx->r14 = S32(0XD << 16);
    // 0x801F7F94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F7F98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F7F9C: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x801F7FA0: lbu         $t6, -0x773($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X773);
    // 0x801F7FA4: bnel        $t6, $zero, L_801F7FC4
    if (ctx->r14 != 0) {
        // 0x801F7FA8: lui         $a0, 0x4
        ctx->r4 = S32(0X4 << 16);
            goto L_801F7FC4;
    }
    goto skip_0;
    // 0x801F7FA8: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    skip_0:
    // 0x801F7FAC: jal         0x8020D670
    // 0x801F7FB0: nop

    func_8020D670_5C8B40(rdram, ctx);
        goto after_0;
    // 0x801F7FB0: nop

    after_0:
    // 0x801F7FB4: beql        $v0, $zero, L_801F7FDC
    if (ctx->r2 == 0) {
        // 0x801F7FB8: lw          $t7, 0x0($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X0);
            goto L_801F7FDC;
    }
    goto skip_1;
    // 0x801F7FB8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x801F7FBC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x801F7FC0: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
L_801F7FC4:
    // 0x801F7FC4: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x801F7FC8: jal         0x800139A4
    // 0x801F7FCC: lhu         $a0, -0x4FE0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4FE0);
    func_800139A4_145A4(rdram, ctx);
        goto after_1;
    // 0x801F7FCC: lhu         $a0, -0x4FE0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4FE0);
    after_1:
    // 0x801F7FD0: jal         0x8020D6BC
    // 0x801F7FD4: nop

    func_8020D6BC_5C8B8C(rdram, ctx);
        goto after_2;
    // 0x801F7FD4: nop

    after_2:
    // 0x801F7FD8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
L_801F7FDC:
    // 0x801F7FDC: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F7FE0: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801F7FE4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801F7FE8: sw          $zero, -0x71C($at)
    MEM_W(-0X71C, ctx->r1) = 0;
    // 0x801F7FEC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801F7FF0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F7FF4: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F7FF8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x801F7FFC: lbu         $t8, 0x2DF6($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2DF6);
    // 0x801F8000: lhu         $t1, 0x2DF8($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X2DF8);
    // 0x801F8004: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801F8008: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801F800C: lw          $t0, -0x66F4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X66F4);
    // 0x801F8010: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x801F8014: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x801F8018: lhu         $t4, 0x6($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X6);
    // 0x801F801C: beq         $t4, $zero, L_801F8040
    if (ctx->r12 == 0) {
        // 0x801F8020: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_801F8040;
    }
    // 0x801F8020: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F8024: addiu       $a0, $a0, -0x7B6C
    ctx->r4 = ADD32(ctx->r4, -0X7B6C);
    // 0x801F8028: jal         0x80034DD8
    // 0x801F802C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_3;
    // 0x801F802C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x801F8030: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x801F8034: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8038: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801F803C: sw          $v0, -0x71C($at)
    MEM_W(-0X71C, ctx->r1) = ctx->r2;
L_801F8040:
    // 0x801F8040: jal         0x801F8C4C
    // 0x801F8044: nop

    func_801F8C4C_5B4B5C(rdram, ctx);
        goto after_4;
    // 0x801F8044: nop

    after_4:
    // 0x801F8048: jal         0x80218E04
    // 0x801F804C: nop

    func_80218E04_5D42D4(rdram, ctx);
        goto after_5;
    // 0x801F804C: nop

    after_5:
    // 0x801F8050: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801F8054: addiu       $a0, $a0, 0x3C50
    ctx->r4 = ADD32(ctx->r4, 0X3C50);
    // 0x801F8058: jal         0x80034B24
    // 0x801F805C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034B24_35724(rdram, ctx);
        goto after_6;
    // 0x801F805C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x801F8060: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x801F8064: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F8068: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x801F806C: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8070: sw          $v0, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->r2;
    // 0x801F8074: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F8078: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801F807C: sw          $v0, -0x724($at)
    MEM_W(-0X724, ctx->r1) = ctx->r2;
    // 0x801F8080: addiu       $a0, $a0, -0x7BA4
    ctx->r4 = ADD32(ctx->r4, -0X7BA4);
    // 0x801F8084: jal         0x80034C84
    // 0x801F8088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034C84_35884(rdram, ctx);
        goto after_7;
    // 0x801F8088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x801F808C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x801F8090: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8094: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801F8098: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801F809C: sw          $v0, -0x70C($at)
    MEM_W(-0X70C, ctx->r1) = ctx->r2;
    // 0x801F80A0: addiu       $a0, $a0, -0x28DC
    ctx->r4 = ADD32(ctx->r4, -0X28DC);
    // 0x801F80A4: jal         0x80034DD8
    // 0x801F80A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_8;
    // 0x801F80A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x801F80AC: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x801F80B0: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F80B4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x801F80B8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801F80BC: sw          $v0, -0x720($at)
    MEM_W(-0X720, ctx->r1) = ctx->r2;
    // 0x801F80C0: addiu       $a0, $a0, -0x2FE4
    ctx->r4 = ADD32(ctx->r4, -0X2FE4);
    // 0x801F80C4: jal         0x80034B24
    // 0x801F80C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034B24_35724(rdram, ctx);
        goto after_9;
    // 0x801F80C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x801F80CC: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x801F80D0: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F80D4: lui         $v1, 0xD
    ctx->r3 = S32(0XD << 16);
    // 0x801F80D8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801F80DC: sw          $v0, -0x714($at)
    MEM_W(-0X714, ctx->r1) = ctx->r2;
    // 0x801F80E0: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x801F80E4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F80E8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F80EC: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x801F80F0: lw          $v1, -0x718($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X718);
    // 0x801F80F4: lhu         $t2, 0x22($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X22);
    // 0x801F80F8: andi        $t3, $t2, 0xFFFB
    ctx->r11 = ctx->r10 & 0XFFFB;
    // 0x801F80FC: sh          $t3, 0x22($v1)
    MEM_H(0X22, ctx->r3) = ctx->r11;
    // 0x801F8100: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x801F8104: lui         $v1, 0xD
    ctx->r3 = S32(0XD << 16);
    // 0x801F8108: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x801F810C: lw          $v1, -0x718($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X718);
    // 0x801F8110: lhu         $t5, 0x22($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X22);
    // 0x801F8114: andi        $t6, $t5, 0xFFEF
    ctx->r14 = ctx->r13 & 0XFFEF;
    // 0x801F8118: sh          $t6, 0x22($v1)
    MEM_H(0X22, ctx->r3) = ctx->r14;
    // 0x801F811C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x801F8120: addu        $a0, $a1, $at
    ctx->r4 = ADD32(ctx->r5, ctx->r1);
    // 0x801F8124: lbu         $t7, 0x2DE4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X2DE4);
    // 0x801F8128: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801F812C: bne         $t7, $at, L_801F8148
    if (ctx->r15 != ctx->r1) {
        // 0x801F8130: nop
    
            goto L_801F8148;
    }
    // 0x801F8130: nop

    // 0x801F8134: lbu         $t8, 0x2E29($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2E29);
    // 0x801F8138: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F813C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x801F8140: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x801F8144: sb          $t9, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r25;
L_801F8148:
    // 0x801F8148: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F814C: addiu       $a1, $a1, -0x3A00
    ctx->r5 = ADD32(ctx->r5, -0X3A00);
    // 0x801F8150: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x801F8154: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F8158: addiu       $a2, $a2, -0x39D8
    ctx->r6 = ADD32(ctx->r6, -0X39D8);
    // 0x801F815C: lhu         $t1, 0x22($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X22);
    // 0x801F8160: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x801F8164: andi        $t0, $t1, 0xFFEB
    ctx->r8 = ctx->r9 & 0XFFEB;
    // 0x801F8168: sh          $t0, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r8;
    // 0x801F816C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x801F8170: lbu         $t2, 0x64($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X64);
    // 0x801F8174: andi        $t3, $t2, 0xFFFE
    ctx->r11 = ctx->r10 & 0XFFFE;
    // 0x801F8178: sb          $t3, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r11;
    // 0x801F817C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x801F8180: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x801F8184: lbu         $a0, -0x51D7($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X51D7);
    // 0x801F8188: andi        $t5, $a0, 0x2
    ctx->r13 = ctx->r4 & 0X2;
    // 0x801F818C: beql        $t5, $zero, L_801F81B8
    if (ctx->r13 == 0) {
        // 0x801F8190: andi        $t9, $a0, 0x4
        ctx->r25 = ctx->r4 & 0X4;
            goto L_801F81B8;
    }
    goto skip_2;
    // 0x801F8190: andi        $t9, $a0, 0x4
    ctx->r25 = ctx->r4 & 0X4;
    skip_2:
    // 0x801F8194: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x801F8198: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x801F819C: lhu         $t6, 0x22($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X22);
    // 0x801F81A0: ori         $t7, $t6, 0x14
    ctx->r15 = ctx->r14 | 0X14;
    // 0x801F81A4: sh          $t7, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r15;
    // 0x801F81A8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x801F81AC: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x801F81B0: lbu         $a0, -0x51D7($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X51D7);
    // 0x801F81B4: andi        $t9, $a0, 0x4
    ctx->r25 = ctx->r4 & 0X4;
L_801F81B8:
    // 0x801F81B8: beq         $t9, $zero, L_801F81D0
    if (ctx->r25 == 0) {
        // 0x801F81BC: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_801F81D0;
    }
    // 0x801F81BC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801F81C0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x801F81C4: lbu         $t1, 0x64($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X64);
    // 0x801F81C8: ori         $t0, $t1, 0x1
    ctx->r8 = ctx->r9 | 0X1;
    // 0x801F81CC: sb          $t0, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r8;
L_801F81D0:
    // 0x801F81D0: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801F81D4: addiu       $t2, $v0, 0x7FFF
    ctx->r10 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F81D8: lhu         $t2, 0x2E3B($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X2E3B);
    // 0x801F81DC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801F81E0: addiu       $t3, $v0, 0x7FFF
    ctx->r11 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F81E4: beql        $t2, $at, L_801F8214
    if (ctx->r10 == ctx->r1) {
        // 0x801F81E8: lw          $t4, 0x0($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X0);
            goto L_801F8214;
    }
    goto skip_3;
    // 0x801F81E8: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    skip_3:
    // 0x801F81EC: lhu         $t3, 0x2E17($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X2E17);
    // 0x801F81F0: beql        $t3, $zero, L_801F8214
    if (ctx->r11 == 0) {
        // 0x801F81F4: lw          $t4, 0x0($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X0);
            goto L_801F8214;
    }
    goto skip_4;
    // 0x801F81F4: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    skip_4:
    // 0x801F81F8: jal         0x801FA128
    // 0x801F81FC: nop

    func_801FA128_5B6038(rdram, ctx);
        goto after_10;
    // 0x801F81FC: nop

    after_10:
    // 0x801F8200: jal         0x80006298
    // 0x801F8204: nop

    func_80006298_6E98(rdram, ctx);
        goto after_11;
    // 0x801F8204: nop

    after_11:
    // 0x801F8208: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801F820C: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801F8210: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
L_801F8214:
    // 0x801F8214: lui         $t5, 0x4
    ctx->r13 = S32(0X4 << 16);
    // 0x801F8218: addiu       $t7, $v0, 0x7FFF
    ctx->r15 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F821C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x801F8220: lhu         $t5, -0x4F6E($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X4F6E);
    // 0x801F8224: andi        $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 & 0X8000;
    // 0x801F8228: bne         $t6, $zero, L_801F8240
    if (ctx->r14 != 0) {
        // 0x801F822C: nop
    
            goto L_801F8240;
    }
    // 0x801F822C: nop

    // 0x801F8230: lhu         $t7, 0x2E3B($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X2E3B);
    // 0x801F8234: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801F8238: bnel        $t7, $at, L_801F8268
    if (ctx->r15 != ctx->r1) {
        // 0x801F823C: addiu       $t9, $zero, 0x4
        ctx->r25 = ADD32(0, 0X4);
            goto L_801F8268;
    }
    goto skip_5;
    // 0x801F823C: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    skip_5:
L_801F8240:
    // 0x801F8240: jal         0x801FA128
    // 0x801F8244: nop

    func_801FA128_5B6038(rdram, ctx);
        goto after_12;
    // 0x801F8244: nop

    after_12:
    // 0x801F8248: jal         0x80004910
    // 0x801F824C: nop

    func_80004910_5510(rdram, ctx);
        goto after_13;
    // 0x801F824C: nop

    after_13:
    // 0x801F8250: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F8254: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801F8258: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801F825C: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801F8260: sb          $t8, 0x71BC($at)
    MEM_B(0X71BC, ctx->r1) = ctx->r24;
    // 0x801F8264: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
L_801F8268:
    // 0x801F8268: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F826C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F8270: sb          $t9, 0x301E($at)
    MEM_B(0X301E, ctx->r1) = ctx->r25;
    // 0x801F8274: jal         0x8003521C
    // 0x801F8278: addiu       $a0, $a0, -0x7D70
    ctx->r4 = ADD32(ctx->r4, -0X7D70);
    func_8003521C_35E1C(rdram, ctx);
        goto after_14;
    // 0x801F8278: addiu       $a0, $a0, -0x7D70
    ctx->r4 = ADD32(ctx->r4, -0X7D70);
    after_14:
    // 0x801F827C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F8280: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F8284: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F8288: jr          $ra
    // 0x801F828C: nop

    TRACE_RETURN()
    return;
    // 0x801F828C: nop

;}
RECOMP_FUNC void func_801EFBB4_5ABAC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EFBB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EFBB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EFBBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EFBC0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801EFBC4: jal         0x801EFBDC
    // 0x801EFBC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801EFBDC_5ABAEC(rdram, ctx);
        goto after_0;
    // 0x801EFBC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801EFBCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EFBD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EFBD4: jr          $ra
    // 0x801EFBD8: nop

    TRACE_RETURN()
    return;
    // 0x801EFBD8: nop

;}
RECOMP_FUNC void func_801E2980_59E890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2988: jal         0x801E291C
    // 0x801E298C: nop

    func_801E291C_59E82C(rdram, ctx);
        goto after_0;
    // 0x801E298C: nop

    after_0:
    // 0x801E2990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2998: jr          $ra
    // 0x801E299C: nop

    TRACE_RETURN()
    return;
    // 0x801E299C: nop

;}
RECOMP_FUNC void func_801F38E8_5AF7F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F38E8: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801F38EC: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x801F38F0: sw          $s5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r21;
    // 0x801F38F4: sw          $s4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r20;
    // 0x801F38F8: sw          $s3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r19;
    // 0x801F38FC: sw          $s2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r18;
    // 0x801F3900: sw          $s1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r17;
    // 0x801F3904: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x801F3908: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x801F390C: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x801F3910: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x801F3914: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x801F3918: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x801F391C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x801F3920: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x801F3924: lbu         $v1, 0x60($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X60);
    // 0x801F3928: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801F392C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x801F3930: beq         $v1, $zero, L_801F394C
    if (ctx->r3 == 0) {
        // 0x801F3934: lw          $s3, 0x18($v0)
        ctx->r19 = MEM_W(ctx->r2, 0X18);
            goto L_801F394C;
    }
    // 0x801F3934: lw          $s3, 0x18($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X18);
    // 0x801F3938: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F393C: beq         $v1, $at, L_801F3A4C
    if (ctx->r3 == ctx->r1) {
        // 0x801F3940: nop
    
            goto L_801F3A4C;
    }
    // 0x801F3940: nop

    // 0x801F3944: b           L_801F3A64
    // 0x801F3948: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
        goto L_801F3A64;
    // 0x801F3948: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_801F394C:
    // 0x801F394C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x801F3950: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x801F3954: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F3958: lwc1        $f28, -0x3ED8($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0X3ED8);
    // 0x801F395C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F3960: ldc1        $f26, -0x3ED0($at)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r1, -0X3ED0);
    // 0x801F3964: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F3968: ldc1        $f24, -0x3EC8($at)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r1, -0X3EC8);
    // 0x801F396C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F3970: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801F3974: ldc1        $f22, -0x3EC0($at)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r1, -0X3EC0);
    // 0x801F3978: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
    // 0x801F397C: addiu       $s4, $zero, 0xC
    ctx->r20 = ADD32(0, 0XC);
    // 0x801F3980: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
L_801F3984:
    // 0x801F3984: lwc1        $f4, 0x1C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x801F3988: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801F398C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801F3990: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x801F3994: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x801F3998: mul.d       $f6, $f0, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f24.d);
    // 0x801F399C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801F39A0: swc1        $f30, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f30.u32l;
    // 0x801F39A4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801F39A8: mul.d       $f16, $f0, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f26.d); 
    ctx->f16.d = MUL_D(ctx->f0.d, ctx->f26.d);
    // 0x801F39AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F39B0: div.d       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f22.d);
    // 0x801F39B4: div.d       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f22.d);
    // 0x801F39B8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801F39BC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801F39C0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801F39C4: jal         0x801F2CD0
    // 0x801F39C8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_801F2CD0_5AEBE0(rdram, ctx);
        goto after_0;
    // 0x801F39C8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801F39CC: beq         $v0, $zero, L_801F3A30
    if (ctx->r2 == 0) {
        // 0x801F39D0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801F3A30;
    }
    // 0x801F39D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801F39D4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801F39D8: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x801F39DC: addiu       $t8, $t8, 0x50A0
    ctx->r24 = ADD32(ctx->r24, 0X50A0);
    // 0x801F39E0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801F39E4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801F39E8: sll         $t7, $s2, 3
    ctx->r15 = S32(ctx->r18 << 3);
    // 0x801F39EC: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x801F39F0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x801F39F4: jal         0x801EE530
    // 0x801F39F8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_801EE530_5AA440(rdram, ctx);
        goto after_1;
    // 0x801F39F8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x801F39FC: lwc1        $f0, 0x1C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x801F3A00: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801F3A04: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801F3A08: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801F3A0C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801F3A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F3A14: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801F3A18: div.s       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f28.fl);
    // 0x801F3A1C: div.s       $f4, $f18, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f28.fl);
    // 0x801F3A20: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x801F3A24: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x801F3A28: jal         0x801F3AD0
    // 0x801F3A2C: nop

    func_801F3AD0_5AF9E0(rdram, ctx);
        goto after_2;
    // 0x801F3A2C: nop

    after_2:
L_801F3A30:
    // 0x801F3A30: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801F3A34: bnel        $s2, $s4, L_801F3984
    if (ctx->r18 != ctx->r20) {
        // 0x801F3A38: swc1        $f20, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
            goto L_801F3984;
    }
    goto skip_0;
    // 0x801F3A38: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    skip_0:
    // 0x801F3A3C: lbu         $t9, 0x60($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X60);
    // 0x801F3A40: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x801F3A44: b           L_801F3A60
    // 0x801F3A48: sb          $t0, 0x60($s5)
    MEM_B(0X60, ctx->r21) = ctx->r8;
        goto L_801F3A60;
    // 0x801F3A48: sb          $t0, 0x60($s5)
    MEM_B(0X60, ctx->r21) = ctx->r8;
L_801F3A4C:
    // 0x801F3A4C: jal         0x801F3AF0
    // 0x801F3A50: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_801F3AF0_5AFA00(rdram, ctx);
        goto after_3;
    // 0x801F3A50: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_3:
    // 0x801F3A54: bne         $v0, $zero, L_801F3A60
    if (ctx->r2 != 0) {
        // 0x801F3A58: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_801F3A60;
    }
    // 0x801F3A58: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F3A5C: sb          $t1, 0x65($s5)
    MEM_B(0X65, ctx->r21) = ctx->r9;
L_801F3A60:
    // 0x801F3A60: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_801F3A64:
    // 0x801F3A64: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x801F3A68: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x801F3A6C: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x801F3A70: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x801F3A74: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x801F3A78: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x801F3A7C: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x801F3A80: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x801F3A84: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
    // 0x801F3A88: lw          $s3, 0x68($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X68);
    // 0x801F3A8C: lw          $s4, 0x6C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X6C);
    // 0x801F3A90: lw          $s5, 0x70($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X70);
    // 0x801F3A94: jr          $ra
    // 0x801F3A98: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x801F3A98: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_801EF684_5AB594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EF688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EF68C: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801EF690: addiu       $t6, $t6, 0x4E30
    ctx->r14 = ADD32(ctx->r14, 0X4E30);
    // 0x801EF694: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x801EF698: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x801EF69C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x801EF6A0: jal         0x801EF6B8
    // 0x801EF6A4: sh          $t7, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r15;
    func_801EF6B8_5AB5C8(rdram, ctx);
        goto after_0;
    // 0x801EF6A4: sh          $t7, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r15;
    after_0:
    // 0x801EF6A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EF6AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EF6B0: jr          $ra
    // 0x801EF6B4: nop

    TRACE_RETURN()
    return;
    // 0x801EF6B4: nop

;}
RECOMP_FUNC void func_801F5A3C_5B194C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5A3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5A40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5A44: jal         0x801E3AC0
    // 0x801F5A48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801F5A48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F5A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5A50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5A54: jr          $ra
    // 0x801F5A58: nop

    TRACE_RETURN()
    return;
    // 0x801F5A58: nop

;}
RECOMP_FUNC void func_801E31A8_59F0B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E31A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E31AC: lwc1        $f0, -0x4CB0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4CB0);
    // 0x801E31B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E31B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E31B8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801E31BC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801E31C0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801E31C4: jal         0x801E32D4
    // 0x801E31C8: nop

    func_801E32D4_59F1E4(rdram, ctx);
        goto after_0;
    // 0x801E31C8: nop

    after_0:
    // 0x801E31CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E31D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E31D4: jr          $ra
    // 0x801E31D8: nop

    TRACE_RETURN()
    return;
    // 0x801E31D8: nop

;}
RECOMP_FUNC void func_801E276C_59E67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E276C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2770: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2774: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2778: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E277C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801E2780: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x801E2784: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801E2788: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801E278C: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801E2790: jal         0x801E7DE8
    // 0x801E2794: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801E2794: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E2798: beq         $v0, $zero, L_801E27BC
    if (ctx->r2 == 0) {
        // 0x801E279C: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801E27BC;
    }
    // 0x801E279C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801E27A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E27A4: lwc1        $f0, -0x4CB8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4CB8);
    // 0x801E27A8: lw          $t8, 0x5C($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X5C);
    // 0x801E27AC: swc1        $f0, 0xE8($a1)
    MEM_W(0XE8, ctx->r5) = ctx->f0.u32l;
    // 0x801E27B0: swc1        $f0, 0xE4($a1)
    MEM_W(0XE4, ctx->r5) = ctx->f0.u32l;
    // 0x801E27B4: b           L_801E27D4
    // 0x801E27B8: swc1        $f0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f0.u32l;
        goto L_801E27D4;
    // 0x801E27B8: swc1        $f0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f0.u32l;
L_801E27BC:
    // 0x801E27BC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E27C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E27C4: lw          $t9, 0x5C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X5C);
    // 0x801E27C8: swc1        $f0, 0xE8($a1)
    MEM_W(0XE8, ctx->r5) = ctx->f0.u32l;
    // 0x801E27CC: swc1        $f0, 0xE4($a1)
    MEM_W(0XE4, ctx->r5) = ctx->f0.u32l;
    // 0x801E27D0: swc1        $f0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f0.u32l;
L_801E27D4:
    // 0x801E27D4: lw          $v0, 0x5C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X5C);
    // 0x801E27D8: addiu       $a0, $zero, 0x22F
    ctx->r4 = ADD32(0, 0X22F);
    // 0x801E27DC: lhu         $t0, 0x1A($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X1A);
    // 0x801E27E0: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    // 0x801E27E4: lw          $t1, 0x5C($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X5C);
    // 0x801E27E8: jal         0x80038BC8
    // 0x801E27EC: sb          $zero, 0x2D($t1)
    MEM_B(0X2D, ctx->r9) = 0;
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801E27EC: sb          $zero, 0x2D($t1)
    MEM_B(0X2D, ctx->r9) = 0;
    after_1:
    // 0x801E27F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E27F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E27F8: jr          $ra
    // 0x801E27FC: nop

    TRACE_RETURN()
    return;
    // 0x801E27FC: nop

;}
RECOMP_FUNC void func_801ED928_5A9838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801ED92C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801ED930: jal         0x801ED968
    // 0x801ED934: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801ED968_5A9878(rdram, ctx);
        goto after_0;
    // 0x801ED934: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801ED938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801ED93C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801ED940: jr          $ra
    // 0x801ED944: nop

    TRACE_RETURN()
    return;
    // 0x801ED944: nop

;}
RECOMP_FUNC void func_801D2B8C_58EA9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2B8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2B94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D2B98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D2B9C: jal         0x80003D28
    // 0x801D2BA0: lhu         $a0, 0x6E($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6E);
    func_80003D28_4928(rdram, ctx);
        goto after_0;
    // 0x801D2BA0: lhu         $a0, 0x6E($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6E);
    after_0:
    // 0x801D2BA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D2BA8: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801D2BAC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801D2BB0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x801D2BB4: jal         0x801D2D10
    // 0x801D2BB8: nop

    func_801D2D10_58EC20(rdram, ctx);
        goto after_1;
    // 0x801D2BB8: nop

    after_1:
    // 0x801D2BBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D2BC0: jal         0x801D2C88
    // 0x801D2BC4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_801D2C88_58EB98(rdram, ctx);
        goto after_2;
    // 0x801D2BC4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x801D2BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2BCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D2BD0: jr          $ra
    // 0x801D2BD4: nop

    TRACE_RETURN()
    return;
    // 0x801D2BD4: nop

;}
RECOMP_FUNC void func_801EE28C_5AA19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE28C: beq         $a0, $zero, L_801EE2B4
    if (ctx->r4 == 0) {
        // 0x801EE290: nop
    
            goto L_801EE2B4;
    }
    // 0x801EE290: nop

    // 0x801EE294: beq         $a1, $zero, L_801EE2B4
    if (ctx->r5 == 0) {
        // 0x801EE298: nop
    
            goto L_801EE2B4;
    }
    // 0x801EE298: nop

    // 0x801EE29C: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x801EE2A0: swc1        $f4, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f4.u32l;
    // 0x801EE2A4: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x801EE2A8: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x801EE2AC: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x801EE2B0: swc1        $f8, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f8.u32l;
L_801EE2B4:
    // 0x801EE2B4: jr          $ra
    // 0x801EE2B8: nop

    TRACE_RETURN()
    return;
    // 0x801EE2B8: nop

;}
RECOMP_FUNC void func_801DE940_59A850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE940: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801DE944: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DE948: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x801DE94C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DE950: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DE954: addiu       $v0, $v0, -0x4A54
    ctx->r2 = ADD32(ctx->r2, -0X4A54);
    // 0x801DE958: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801DE95C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801DE960: jalr        $v0
    // 0x801DE964: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x801DE964: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x801DE968: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DE96C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DE970: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801DE974: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801DE978: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DE97C: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801DE980: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801DE984: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801DE988: nop

    // 0x801DE98C: bc1f        L_801DE9D8
    if (!c1cs) {
        // 0x801DE990: nop
    
            goto L_801DE9D8;
    }
    // 0x801DE990: nop

    // 0x801DE994: lw          $t6, -0x3A1C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A1C);
    // 0x801DE998: bgtz        $t6, L_801DE9BC
    if (SIGNED(ctx->r14) > 0) {
        // 0x801DE99C: nop
    
            goto L_801DE9BC;
    }
    // 0x801DE99C: nop

    // 0x801DE9A0: jal         0x801E3098
    // 0x801DE9A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3098_59EFA8(rdram, ctx);
        goto after_1;
    // 0x801DE9A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DE9A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE9AC: jal         0x801DACDC
    // 0x801DE9B0: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801DE9B0: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_2:
    // 0x801DE9B4: b           L_801DEA18
    // 0x801DE9B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DEA18;
    // 0x801DE9B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE9BC:
    // 0x801DE9BC: jal         0x801E3134
    // 0x801DE9C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3134_59F044(rdram, ctx);
        goto after_3;
    // 0x801DE9C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801DE9C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE9C8: jal         0x801DACDC
    // 0x801DE9CC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801DE9CC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_4:
    // 0x801DE9D0: b           L_801DEA18
    // 0x801DE9D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DEA18;
    // 0x801DE9D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE9D8:
    // 0x801DE9D8: jalr        $v0
    // 0x801DE9DC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x801DE9DC: nop

    after_5:
    // 0x801DE9E0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801DE9E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DE9E8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x801DE9EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE9F0: div.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x801DE9F4: lwc1        $f10, 0x28($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X28);
    // 0x801DE9F8: lui         $a1, 0xBECC
    ctx->r5 = S32(0XBECC << 16);
    // 0x801DE9FC: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x801DEA00: nop

    // 0x801DEA04: bc1fl       L_801DEA18
    if (!c1cs) {
        // 0x801DEA08: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DEA18;
    }
    goto skip_0;
    // 0x801DEA08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801DEA0C: jal         0x801E3B9C
    // 0x801DEA10: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801E3B9C_59FAAC(rdram, ctx);
        goto after_6;
    // 0x801DEA10: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_6:
    // 0x801DEA14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DEA18:
    // 0x801DEA18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DEA1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801DEA20: jr          $ra
    // 0x801DEA24: nop

    TRACE_RETURN()
    return;
    // 0x801DEA24: nop

;}
RECOMP_FUNC void func_801DDA68_599978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDA68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDA6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDA70: jal         0x801E7CC4
    // 0x801DDA74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E7CC4_5A3BD4(rdram, ctx);
        goto after_0;
    // 0x801DDA74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DDA78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DDA7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDA80: jr          $ra
    // 0x801DDA84: nop

    TRACE_RETURN()
    return;
    // 0x801DDA84: nop

;}
RECOMP_FUNC void func_801F4B6C_5B0A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4B6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F4B70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4B74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F4B78: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801F4B7C: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801F4B80: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x801F4B84: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801F4B88: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801F4B8C: lbu         $t7, 0x90($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X90);
    // 0x801F4B90: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x801F4B94: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801F4B98: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801F4B9C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801F4BA0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801F4BA4: lhu         $t9, 0x7DB4($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X7DB4);
    // 0x801F4BA8: andi        $t0, $t9, 0x4000
    ctx->r8 = ctx->r25 & 0X4000;
    // 0x801F4BAC: beq         $t0, $zero, L_801F4BC0
    if (ctx->r8 == 0) {
        // 0x801F4BB0: nop
    
            goto L_801F4BC0;
    }
    // 0x801F4BB0: nop

    // 0x801F4BB4: jal         0x801E4624
    // 0x801F4BB8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_801E4624_5A0534(rdram, ctx);
        goto after_0;
    // 0x801F4BB8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x801F4BBC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_801F4BC0:
    // 0x801F4BC0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F4BC4: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F4BC8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801F4BCC: jalr        $t9
    // 0x801F4BD0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801F4BD0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x801F4BD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F4BD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F4BDC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x801F4BE0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801F4BE4: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F4BE8: lwc1        $f4, 0x28($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X28);
    // 0x801F4BEC: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F4BF0: nop

    // 0x801F4BF4: bc1fl       L_801F4C14
    if (!c1cs) {
        // 0x801F4BF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F4C14;
    }
    goto skip_0;
    // 0x801F4BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F4BFC: lw          $t2, 0x5C($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X5C);
    // 0x801F4C00: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801F4C04: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
    // 0x801F4C08: jal         0x801DACDC
    // 0x801F4C0C: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801F4C0C: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    after_2:
    // 0x801F4C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F4C14:
    // 0x801F4C14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F4C18: jr          $ra
    // 0x801F4C1C: nop

    TRACE_RETURN()
    return;
    // 0x801F4C1C: nop

;}
RECOMP_FUNC void func_801D6A98_5929A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6A98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D6A9C: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801D6AA0: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x801D6AA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D6AA8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801D6AAC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801D6AB0: lw          $t8, 0x5C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X5C);
    // 0x801D6AB4: lw          $s1, 0x2C($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X2C);
    // 0x801D6AB8: lhu         $v0, 0xB8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XB8);
    // 0x801D6ABC: lhu         $t9, 0xA4($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0XA4);
    // 0x801D6AC0: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801D6AC4: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801D6AC8: addiu       $t0, $zero, -0x4000
    ctx->r8 = ADD32(0, -0X4000);
    // 0x801D6ACC: and         $t6, $s1, $at
    ctx->r14 = ctx->r17 & ctx->r1;
    // 0x801D6AD0: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x801D6AD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D6AD8: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x801D6ADC: beq         $v0, $zero, L_801D6B04
    if (ctx->r2 == 0) {
        // 0x801D6AE0: sh          $t1, 0x6A($a0)
        MEM_H(0X6A, ctx->r4) = ctx->r9;
            goto L_801D6B04;
    }
    // 0x801D6AE0: sh          $t1, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r9;
    // 0x801D6AE4: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801D6AE8: lhu         $t3, -0x2E2A($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X2E2A);
    // 0x801D6AEC: subu        $t4, $t1, $t3
    ctx->r12 = SUB32(ctx->r9, ctx->r11);
    // 0x801D6AF0: xor         $t5, $v0, $t4
    ctx->r13 = ctx->r2 ^ ctx->r12;
    // 0x801D6AF4: andi        $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 & 0X8000;
    // 0x801D6AF8: beql        $t6, $zero, L_801D6B08
    if (ctx->r14 == 0) {
        // 0x801D6AFC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D6B08;
    }
    goto skip_0;
    // 0x801D6AFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801D6B00: sh          $zero, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = 0;
L_801D6B04:
    // 0x801D6B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801D6B08:
    // 0x801D6B08: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801D6B0C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x801D6B10: jal         0x801D7B74
    // 0x801D6B14: addiu       $a3, $zero, 0x2D0
    ctx->r7 = ADD32(0, 0X2D0);
    func_801D7B74_593A84(rdram, ctx);
        goto after_0;
    // 0x801D6B14: addiu       $a3, $zero, 0x2D0
    ctx->r7 = ADD32(0, 0X2D0);
    after_0:
    // 0x801D6B18: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801D6B1C: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x801D6B20: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6B24: lwc1        $f6, -0x5330($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5330);
    // 0x801D6B28: lw          $t8, 0x5C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X5C);
    // 0x801D6B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6B30: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801D6B34: lwc1        $f4, 0xAC($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0XAC);
    // 0x801D6B38: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x801D6B3C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801D6B40: nop

    // 0x801D6B44: bc1fl       L_801D6B58
    if (!c1cs) {
        // 0x801D6B48: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D6B58;
    }
    goto skip_1;
    // 0x801D6B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x801D6B4C: jal         0x801D8034
    // 0x801D6B50: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_801D8034_593F44(rdram, ctx);
        goto after_1;
    // 0x801D6B50: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_1:
    // 0x801D6B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801D6B58:
    // 0x801D6B58: jal         0x801D5DC0
    // 0x801D6B5C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D5DC0_591CD0(rdram, ctx);
        goto after_2;
    // 0x801D6B5C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x801D6B60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6B64: jal         0x801D5ECC
    // 0x801D6B68: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D5ECC_591DDC(rdram, ctx);
        goto after_3;
    // 0x801D6B68: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x801D6B6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D6B70: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801D6B74: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801D6B78: jr          $ra
    // 0x801D6B7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801D6B7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801EAF50_5A6E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EAF50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801EAF54: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801EAF58: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x801EAF5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EAF60: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801EAF64: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801EAF68: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x801EAF6C: lw          $v0, 0x2C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X2C);
    // 0x801EAF70: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801EAF74: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801EAF78: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x801EAF7C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801EAF80: bne         $t7, $zero, L_801EAF90
    if (ctx->r15 != 0) {
        // 0x801EAF84: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_801EAF90;
    }
    // 0x801EAF84: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x801EAF88: b           L_801EB00C
    // 0x801EAF8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801EB00C;
    // 0x801EAF8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801EAF90:
    // 0x801EAF90: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801EAF94: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801EAF98: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801EAF9C: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801EAFA0: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801EAFA4: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801EAFA8: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801EAFAC: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801EAFB0: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801EAFB4: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801EAFB8: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801EAFBC: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801EAFC0: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x801EAFC4: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x801EAFC8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x801EAFCC: sub.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x801EAFD0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x801EAFD4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x801EAFD8: jal         0x801CF51C
    // 0x801EAFDC: nop

    func_801CF51C_58B42C(rdram, ctx);
        goto after_0;
    // 0x801EAFDC: nop

    after_0:
    // 0x801EAFE0: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x801EAFE4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x801EAFE8: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x801EAFEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EAFF0: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801EAFF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EAFF8: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x801EAFFC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801EB000: jal         0x80033898
    // 0x801EB004: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801EB004: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_1:
    // 0x801EB008: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
L_801EB00C:
    // 0x801EB00C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EB010: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801EB014: jr          $ra
    // 0x801EB018: nop

    TRACE_RETURN()
    return;
    // 0x801EB018: nop

;}
RECOMP_FUNC void func_801E7338_5A3248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7338: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E733C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E7340: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801E7344: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E7348: lhu         $a1, -0x2D90($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X2D90);
    // 0x801E734C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E7350: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801E7354: jal         0x801DB3E4
    // 0x801E7358: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_801DB3E4_5972F4(rdram, ctx);
        goto after_0;
    // 0x801E7358: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801E735C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E7360: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801E7364: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E7368: lhu         $t6, 0x94($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X94);
    // 0x801E736C: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E7370: addiu       $a1, $a1, 0x4700
    ctx->r5 = ADD32(ctx->r5, 0X4700);
    // 0x801E7374: sh          $t6, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r14;
    // 0x801E7378: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801E737C: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x801E7380: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801E7384: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x801E7388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E738C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E7390: jr          $ra
    // 0x801E7394: nop

    TRACE_RETURN()
    return;
    // 0x801E7394: nop

;}
RECOMP_FUNC void func_801E97B8_5A56C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E97B8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801E97BC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801E97C0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x801E97C4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x801E97C8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801E97CC: lbu         $t6, 0x61($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X61);
    // 0x801E97D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E97D4: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x801E97D8: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x801E97DC: beql        $at, $zero, L_801E99B8
    if (ctx->r1 == 0) {
        // 0x801E97E0: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_801E99B8;
    }
    goto skip_0;
    // 0x801E97E0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_0:
    // 0x801E97E4: lhu         $t7, 0xAA($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XAA);
    // 0x801E97E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E97EC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801E97F0: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x801E97F4: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x801E97F8: bne         $at, $zero, L_801E99B4
    if (ctx->r1 != 0) {
        // 0x801E97FC: sh          $t8, 0xAA($a0)
        MEM_H(0XAA, ctx->r4) = ctx->r24;
            goto L_801E99B4;
    }
    // 0x801E97FC: sh          $t8, 0xAA($a0)
    MEM_H(0XAA, ctx->r4) = ctx->r24;
    // 0x801E9800: lbu         $t0, 0x61($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X61);
    // 0x801E9804: sh          $zero, 0xAA($a0)
    MEM_H(0XAA, ctx->r4) = 0;
    // 0x801E9808: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E980C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x801E9810: jal         0x80035EEC
    // 0x801E9814: sb          $t1, 0x61($a0)
    MEM_B(0X61, ctx->r4) = ctx->r9;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801E9814: sb          $t1, 0x61($a0)
    MEM_B(0X61, ctx->r4) = ctx->r9;
    after_0:
    // 0x801E9818: beq         $v0, $zero, L_801E99B4
    if (ctx->r2 == 0) {
        // 0x801E981C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_801E99B4;
    }
    // 0x801E981C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801E9820: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9824: lwc1        $f0, -0x47D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X47D0);
    // 0x801E9828: lui         $a1, 0x900
    ctx->r5 = S32(0X900 << 16);
    // 0x801E982C: addiu       $a1, $a1, 0x25D0
    ctx->r5 = ADD32(ctx->r5, 0X25D0);
    // 0x801E9830: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E9834: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801E9838: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E983C: addiu       $v0, $s0, 0xB8
    ctx->r2 = ADD32(ctx->r16, 0XB8);
    // 0x801E9840: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E9844: or          $a2, $v0, $at
    ctx->r6 = ctx->r2 | ctx->r1;
    // 0x801E9848: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E984C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E9850: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E9854: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x801E9858: ori         $t3, $zero, 0x8000
    ctx->r11 = 0 | 0X8000;
    // 0x801E985C: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x801E9860: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x801E9864: addiu       $t6, $zero, 0x152
    ctx->r14 = ADD32(0, 0X152);
    // 0x801E9868: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801E986C: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x801E9870: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x801E9874: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x801E9878: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x801E987C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x801E9880: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x801E9884: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801E9888: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801E988C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801E9890: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801E9894: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x801E9898: jal         0x80034680
    // 0x801E989C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_80034680_35280(rdram, ctx);
        goto after_1;
    // 0x801E989C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801E98A0: lbu         $t7, 0x61($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X61);
    // 0x801E98A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E98A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E98AC: bne         $t7, $at, L_801E98EC
    if (ctx->r15 != ctx->r1) {
        // 0x801E98B0: lw          $a1, 0x58($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X58);
            goto L_801E98EC;
    }
    // 0x801E98B0: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801E98B4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801E98B8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x801E98BC: addiu       $t9, $zero, 0xFA
    ctx->r25 = ADD32(0, 0XFA);
    // 0x801E98C0: addiu       $t0, $zero, 0x57
    ctx->r8 = ADD32(0, 0X57);
    // 0x801E98C4: addiu       $t1, $zero, 0xD0
    ctx->r9 = ADD32(0, 0XD0);
    // 0x801E98C8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x801E98CC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801E98D0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801E98D4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801E98D8: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801E98DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E98E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801E98E4: jal         0x801DC554
    // 0x801E98E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_801DC554_598464(rdram, ctx);
        goto after_2;
    // 0x801E98E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
L_801E98EC:
    // 0x801E98EC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801E98F0: addiu       $a2, $a2, 0x4830
    ctx->r6 = ADD32(ctx->r6, 0X4830);
    // 0x801E98F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E98F8: jal         0x801E8820
    // 0x801E98FC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_801E8820_5A4730(rdram, ctx);
        goto after_3;
    // 0x801E98FC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
    // 0x801E9900: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x801E9904: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E9908: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x801E990C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801E9910: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E9914: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E9918: sb          $t2, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r10;
    // 0x801E991C: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x801E9920: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x801E9924: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x801E9928: lhu         $a2, 0x18($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X18);
    // 0x801E992C: lhu         $a1, 0x16($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X16);
    // 0x801E9930: lhu         $a0, 0x14($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X14);
    // 0x801E9934: addiu       $t3, $sp, 0x60
    ctx->r11 = ADD32(ctx->r29, 0X60);
    // 0x801E9938: addiu       $t4, $sp, 0x5C
    ctx->r12 = ADD32(ctx->r29, 0X5C);
    // 0x801E993C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801E9940: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E9944: jal         0x80033898
    // 0x801E9948: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_80033898_34498(rdram, ctx);
        goto after_4;
    // 0x801E9948: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_4:
    // 0x801E994C: lwc1        $f16, 0x8($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801E9950: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E9954: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801E9958: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E995C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E9960: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x801E9964: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E9968: lwc1        $f6, 0xC($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801E996C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E9970: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x801E9974: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E9978: lwc1        $f16, 0x10($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801E997C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E9980: swc1        $f4, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f4.u32l;
    // 0x801E9984: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E9988: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x801E998C: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801E9990: swc1        $f10, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->f10.u32l;
    // 0x801E9994: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E9998: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x801E999C: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801E99A0: swc1        $f4, 0x90($s1)
    MEM_W(0X90, ctx->r17) = ctx->f4.u32l;
    // 0x801E99A4: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E99A8: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x801E99AC: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801E99B0: swc1        $f10, 0x94($s1)
    MEM_W(0X94, ctx->r17) = ctx->f10.u32l;
L_801E99B4:
    // 0x801E99B4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_801E99B8:
    // 0x801E99B8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801E99BC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x801E99C0: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x801E99C4: jr          $ra
    // 0x801E99C8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801E99C8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801F7140_5B3050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7140: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801F7144: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F7148: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F714C: lwc1        $f4, 0xAC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XAC);
    // 0x801F7150: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801F7154: lwc1        $f10, 0xD0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x801F7158: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F715C: mul.s       $f0, $f8, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x801F7160: nop

    // 0x801F7164: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801F7168: jr          $ra
    // 0x801F716C: swc1        $f16, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f16.u32l;
    TRACE_RETURN()
    return;
    // 0x801F716C: swc1        $f16, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_801E4078_59FF88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4078: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E407C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E4080: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E4084: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801E4088: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801E408C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x801E4090: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801E4094: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E4098: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x801E409C: lbu         $v0, 0xCC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCC);
    // 0x801E40A0: slti        $at, $v0, 0x85
    ctx->r1 = SIGNED(ctx->r2) < 0X85 ? 1 : 0;
    // 0x801E40A4: bne         $at, $zero, L_801E40BC
    if (ctx->r1 != 0) {
        // 0x801E40A8: addiu       $at, $zero, 0x85
        ctx->r1 = ADD32(0, 0X85);
            goto L_801E40BC;
    }
    // 0x801E40A8: addiu       $at, $zero, 0x85
    ctx->r1 = ADD32(0, 0X85);
    // 0x801E40AC: beql        $v0, $at, L_801E4114
    if (ctx->r2 == ctx->r1) {
        // 0x801E40B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E4114;
    }
    goto skip_0;
    // 0x801E40B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801E40B4: b           L_801E4120
    // 0x801E40B8: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
        goto L_801E4120;
    // 0x801E40B8: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
L_801E40BC:
    // 0x801E40BC: slti        $at, $v0, 0x6A
    ctx->r1 = SIGNED(ctx->r2) < 0X6A ? 1 : 0;
    // 0x801E40C0: bne         $at, $zero, L_801E40DC
    if (ctx->r1 != 0) {
        // 0x801E40C4: addiu       $t7, $v0, -0x58
        ctx->r15 = ADD32(ctx->r2, -0X58);
            goto L_801E40DC;
    }
    // 0x801E40C4: addiu       $t7, $v0, -0x58
    ctx->r15 = ADD32(ctx->r2, -0X58);
    // 0x801E40C8: addiu       $at, $zero, 0x84
    ctx->r1 = ADD32(0, 0X84);
    // 0x801E40CC: beql        $v0, $at, L_801E4100
    if (ctx->r2 == ctx->r1) {
        // 0x801E40D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E4100;
    }
    goto skip_1;
    // 0x801E40D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x801E40D4: b           L_801E4120
    // 0x801E40D8: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
        goto L_801E4120;
    // 0x801E40D8: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
L_801E40DC:
    // 0x801E40DC: sltiu       $at, $t7, 0x12
    ctx->r1 = ctx->r15 < 0X12 ? 1 : 0;
    // 0x801E40E0: beq         $at, $zero, L_801E411C
    if (ctx->r1 == 0) {
        // 0x801E40E4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_801E411C;
    }
    // 0x801E40E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801E40E8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E40EC: addu        $at, $at, $t7
    gpr jr_addend_801E40F4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801E40F0: lw          $t7, -0x4C84($at)
    ctx->r15 = ADD32(ctx->r1, -0X4C84);
    // 0x801E40F4: jr          $t7
    // 0x801E40F8: nop

    switch (jr_addend_801E40F4 >> 2) {
        case 0: goto L_801E40FC; break;
        case 1: goto L_801E4110; break;
        case 2: goto L_801E411C; break;
        case 3: goto L_801E411C; break;
        case 4: goto L_801E411C; break;
        case 5: goto L_801E411C; break;
        case 6: goto L_801E411C; break;
        case 7: goto L_801E411C; break;
        case 8: goto L_801E40FC; break;
        case 9: goto L_801E4110; break;
        case 10: goto L_801E411C; break;
        case 11: goto L_801E411C; break;
        case 12: goto L_801E411C; break;
        case 13: goto L_801E411C; break;
        case 14: goto L_801E411C; break;
        case 15: goto L_801E411C; break;
        case 16: goto L_801E40FC; break;
        case 17: goto L_801E4110; break;
        default: switch_error(__func__, 0x801E40F4, 0x8020B37C);
    }
    // 0x801E40F8: nop

L_801E40FC:
    // 0x801E40FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E4100:
    // 0x801E4100: jal         0x801DD720
    // 0x801E4104: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E4104: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x801E4108: b           L_801E4120
    // 0x801E410C: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
        goto L_801E4120;
    // 0x801E410C: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
L_801E4110:
    // 0x801E4110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E4114:
    // 0x801E4114: jal         0x801DD720
    // 0x801E4118: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801DD720_599630(rdram, ctx);
        goto after_1;
    // 0x801E4118: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
L_801E411C:
    // 0x801E411C: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
L_801E4120:
    // 0x801E4120: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x801E4124: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801E4128: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801E412C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801E4130: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801E4134: lhu         $t0, 0x7DB4($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X7DB4);
    // 0x801E4138: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E413C: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E4140: andi        $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 & 0X4000;
    // 0x801E4144: beq         $t1, $zero, L_801E415C
    if (ctx->r9 == 0) {
        // 0x801E4148: nop
    
            goto L_801E415C;
    }
    // 0x801E4148: nop

    // 0x801E414C: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801E4150: lbu         $t2, 0x2C($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X2C);
    // 0x801E4154: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801E4158: sb          $t3, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r11;
L_801E415C:
    // 0x801E415C: jalr        $t9
    // 0x801E4160: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x801E4160: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x801E4164: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E4168: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E416C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x801E4170: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E4174: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E4178: lwc1        $f4, 0x28($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X28);
    // 0x801E417C: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801E4180: nop

    // 0x801E4184: bc1f        L_801E41E4
    if (!c1cs) {
        // 0x801E4188: nop
    
            goto L_801E41E4;
    }
    // 0x801E4188: nop

    // 0x801E418C: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
    // 0x801E4190: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x801E4194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4198: lbu         $t6, 0x2C($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X2C);
    // 0x801E419C: beql        $t6, $zero, L_801E41CC
    if (ctx->r14 == 0) {
        // 0x801E41A0: sw          $zero, 0x48($s0)
        MEM_W(0X48, ctx->r16) = 0;
            goto L_801E41CC;
    }
    goto skip_2;
    // 0x801E41A0: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    skip_2:
    // 0x801E41A4: jal         0x801E3834
    // 0x801E41A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3834_59F744(rdram, ctx);
        goto after_3;
    // 0x801E41A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E41AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E41B0: jal         0x801DACDC
    // 0x801E41B4: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801E41B4: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    after_4:
    // 0x801E41B8: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801E41BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x801E41C0: b           L_801E424C
    // 0x801E41C4: sb          $zero, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = 0;
        goto L_801E424C;
    // 0x801E41C4: sb          $zero, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = 0;
    // 0x801E41C8: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
L_801E41CC:
    // 0x801E41CC: jal         0x801DACDC
    // 0x801E41D0: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_5;
    // 0x801E41D0: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    after_5:
    // 0x801E41D4: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801E41D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E41DC: b           L_801E424C
    // 0x801E41E0: sb          $zero, 0x2C($t8)
    MEM_B(0X2C, ctx->r24) = 0;
        goto L_801E424C;
    // 0x801E41E0: sb          $zero, 0x2C($t8)
    MEM_B(0X2C, ctx->r24) = 0;
L_801E41E4:
    // 0x801E41E4: lw          $t0, -0x39FC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39FC);
    // 0x801E41E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E41EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E41F0: bnel        $t0, $at, L_801E4234
    if (ctx->r8 != ctx->r1) {
        // 0x801E41F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E4234;
    }
    goto skip_3;
    // 0x801E41F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x801E41F8: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
    // 0x801E41FC: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x801E4200: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E4204: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x801E4208: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x801E420C: lw          $t3, -0x3954($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3954);
    // 0x801E4210: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x801E4214: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x801E4218: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x801E421C: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x801E4220: addu        $t4, $t1, $t9
    ctx->r12 = ADD32(ctx->r9, ctx->r25);
    // 0x801E4224: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x801E4228: jal         0x801E8078
    // 0x801E422C: lw          $a1, 0x448C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X448C);
    func_801E8078_5A3F88(rdram, ctx);
        goto after_6;
    // 0x801E422C: lw          $a1, 0x448C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X448C);
    after_6:
    // 0x801E4230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E4234:
    // 0x801E4234: jal         0x801E3B9C
    // 0x801E4238: lui         $a1, 0xBF00
    ctx->r5 = S32(0XBF00 << 16);
    func_801E3B9C_59FAAC(rdram, ctx);
        goto after_7;
    // 0x801E4238: lui         $a1, 0xBF00
    ctx->r5 = S32(0XBF00 << 16);
    after_7:
    // 0x801E423C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4240: jal         0x801E3D04
    // 0x801E4244: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    func_801E3D04_59FC14(rdram, ctx);
        goto after_8;
    // 0x801E4244: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_8:
    // 0x801E4248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E424C:
    // 0x801E424C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E4250: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E4254: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E4258: jr          $ra
    // 0x801E425C: nop

    TRACE_RETURN()
    return;
    // 0x801E425C: nop

;}
RECOMP_FUNC void func_801E74EC_5A33FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E74EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E74F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E74F4: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E74F8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x801E74FC: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801E7500: sb          $t6, 0x2F($t7)
    MEM_B(0X2F, ctx->r15) = ctx->r14;
    // 0x801E7504: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801E7508: sh          $zero, 0x36($t8)
    MEM_H(0X36, ctx->r24) = 0;
    // 0x801E750C: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801E7510: sb          $zero, 0x68($t9)
    MEM_B(0X68, ctx->r25) = 0;
    // 0x801E7514: lhu         $t0, 0x98($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X98);
    // 0x801E7518: beq         $t0, $zero, L_801E752C
    if (ctx->r8 == 0) {
        // 0x801E751C: nop
    
            goto L_801E752C;
    }
    // 0x801E751C: nop

    // 0x801E7520: lbu         $t1, -0x3594($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X3594);
    // 0x801E7524: bnel        $t1, $zero, L_801E7538
    if (ctx->r9 != 0) {
        // 0x801E7528: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E7538;
    }
    goto skip_0;
    // 0x801E7528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_801E752C:
    // 0x801E752C: jal         0x80038B98
    // 0x801E7530: ori         $a0, $zero, 0x826D
    ctx->r4 = 0 | 0X826D;
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x801E7530: ori         $a0, $zero, 0x826D
    ctx->r4 = 0 | 0X826D;
    after_0:
    // 0x801E7534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E7538:
    // 0x801E7538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E753C: jr          $ra
    // 0x801E7540: nop

    TRACE_RETURN()
    return;
    // 0x801E7540: nop

;}
RECOMP_FUNC void func_801EE5F4_5AA504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE5F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EE5F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EE5FC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801EE600: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801EE604: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x801EE608: addiu       $v0, $v0, -0x4A54
    ctx->r2 = ADD32(ctx->r2, -0X4A54);
    // 0x801EE60C: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x801EE610: swc1        $f6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f6.u32l;
    // 0x801EE614: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801EE618: jalr        $v0
    // 0x801EE61C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x801EE61C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x801EE620: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801EE624: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EE628: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801EE62C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801EE630: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801EE634: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801EE638: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x801EE63C: nop

    // 0x801EE640: bc1fl       L_801EE678
    if (!c1cs) {
        // 0x801EE644: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801EE678;
    }
    goto skip_0;
    // 0x801EE644: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801EE648: jalr        $v0
    // 0x801EE64C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x801EE64C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x801EE650: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801EE654: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EE658: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801EE65C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801EE660: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x801EE664: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801EE668: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x801EE66C: b           L_801EE678
    // 0x801EE670: swc1        $f10, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f10.u32l;
        goto L_801EE678;
    // 0x801EE670: swc1        $f10, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f10.u32l;
    // 0x801EE674: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801EE678:
    // 0x801EE678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EE67C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EE680: jr          $ra
    // 0x801EE684: nop

    TRACE_RETURN()
    return;
    // 0x801EE684: nop

;}
RECOMP_FUNC void func_801E1E10_59DD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1E10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1E18: jal         0x801E7DE8
    // 0x801E1E1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801E1E1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E1E20: beq         $v0, $zero, L_801E1E48
    if (ctx->r2 == 0) {
        // 0x801E1E24: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801E1E48;
    }
    // 0x801E1E24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E1E28: lui         $a1, 0x3EF5
    ctx->r5 = S32(0X3EF5 << 16);
    // 0x801E1E2C: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x801E1E30: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801E1E34: ori         $a1, $a1, 0xC290
    ctx->r5 = ctx->r5 | 0XC290;
    // 0x801E1E38: jal         0x801E1F5C
    // 0x801E1E3C: lui         $a3, 0x4200
    ctx->r7 = S32(0X4200 << 16);
    func_801E1F5C_59DE6C(rdram, ctx);
        goto after_1;
    // 0x801E1E3C: lui         $a3, 0x4200
    ctx->r7 = S32(0X4200 << 16);
    after_1:
    // 0x801E1E40: b           L_801E1E64
    // 0x801E1E44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E1E64;
    // 0x801E1E44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E1E48:
    // 0x801E1E48: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x801E1E4C: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x801E1E50: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801E1E54: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801E1E58: jal         0x801E1F5C
    // 0x801E1E5C: lui         $a3, 0x4200
    ctx->r7 = S32(0X4200 << 16);
    func_801E1F5C_59DE6C(rdram, ctx);
        goto after_2;
    // 0x801E1E5C: lui         $a3, 0x4200
    ctx->r7 = S32(0X4200 << 16);
    after_2:
    // 0x801E1E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E1E64:
    // 0x801E1E64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1E68: jr          $ra
    // 0x801E1E6C: nop

    TRACE_RETURN()
    return;
    // 0x801E1E6C: nop

;}
