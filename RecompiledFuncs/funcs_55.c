#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80222154_5DD624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222154: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x80222158: lbu         $t6, 0x7743($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7743);
    // 0x8022215C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80222160: jr          $ra
    // 0x80222164: sw          $t6, -0x3A04($at)
    MEM_W(-0X3A04, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80222164: sw          $t6, -0x3A04($at)
    MEM_W(-0X3A04, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_802254CC_5E099C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254CC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x802254D0: lw          $v0, -0x3278($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3278);
    // 0x802254D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802254D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802254DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802254E0: bne         $v0, $zero, L_8022551C
    if (ctx->r2 != 0) {
        // 0x802254E4: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8022551C;
    }
    // 0x802254E4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802254E8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x802254EC: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x802254F0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x802254F4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x802254F8: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x802254FC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80225500: jal         0x800148F0
    // 0x80225504: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x80225504: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x80225508: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8022550C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80225510: sw          $v0, 0xC0($a2)
    MEM_W(0XC0, ctx->r6) = ctx->r2;
    // 0x80225514: b           L_80225520
    // 0x80225518: sw          $v0, -0x3278($at)
    MEM_W(-0X3278, ctx->r1) = ctx->r2;
        goto L_80225520;
    // 0x80225518: sw          $v0, -0x3278($at)
    MEM_W(-0X3278, ctx->r1) = ctx->r2;
L_8022551C:
    // 0x8022551C: sw          $v0, 0xC0($a2)
    MEM_W(0XC0, ctx->r6) = ctx->r2;
L_80225520:
    // 0x80225520: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225524: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x80225528: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8022552C: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x80225530: lw          $v0, 0xC0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC0);
    // 0x80225534: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80225538: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8022553C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80225540: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80225544: addiu       $a0, $a0, 0x5624
    ctx->r4 = ADD32(ctx->r4, 0X5624);
    // 0x80225548: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8022554C: nop

    // 0x80225550: sh          $t8, 0xC8($a2)
    MEM_H(0XC8, ctx->r6) = ctx->r24;
    // 0x80225554: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80225558: lwc1        $f8, 0xC($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0XC);
    // 0x8022555C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80225560: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80225564: nop

    // 0x80225568: sh          $t1, 0xCA($a2)
    MEM_H(0XCA, ctx->r6) = ctx->r9;
    // 0x8022556C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80225570: lwc1        $f16, 0x10($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X10);
    // 0x80225574: sh          $t5, 0xE8($a2)
    MEM_H(0XE8, ctx->r6) = ctx->r13;
    // 0x80225578: lui         $t5, 0x8024
    ctx->r13 = S32(0X8024 << 16);
    // 0x8022557C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80225580: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x80225584: nop

    // 0x80225588: sh          $t4, 0xCC($a2)
    MEM_H(0XCC, ctx->r6) = ctx->r12;
    // 0x8022558C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80225590: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80225594: lui         $t6, 0x8024
    ctx->r14 = S32(0X8024 << 16);
    // 0x80225598: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8022559C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x802255A0: nop

    // 0x802255A4: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x802255A8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x802255AC: lwc1        $f8, 0xC($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0XC);
    // 0x802255B0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802255B4: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x802255B8: nop

    // 0x802255BC: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    // 0x802255C0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x802255C4: lwc1        $f16, 0x10($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X10);
    // 0x802255C8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802255CC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x802255D0: nop

    // 0x802255D4: sh          $t4, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r12;
    // 0x802255D8: lw          $t5, -0x4BE8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4BE8);
    // 0x802255DC: bnel        $t5, $at, L_802255F8
    if (ctx->r13 != ctx->r1) {
        // 0x802255E0: lw          $t8, 0x0($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X0);
            goto L_802255F8;
    }
    goto skip_0;
    // 0x802255E0: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x802255E4: lhu         $t7, -0x7690($t6)
    ctx->r15 = MEM_HU(ctx->r14, -0X7690);
    // 0x802255E8: sh          $t7, 0xE8($a2)
    MEM_H(0XE8, ctx->r6) = ctx->r15;
    // 0x802255EC: b           L_80225600
    // 0x802255F0: sh          $t7, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r15;
        goto L_80225600;
    // 0x802255F0: sh          $t7, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r15;
    // 0x802255F4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
L_802255F8:
    // 0x802255F8: lhu         $t9, 0x16($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X16);
    // 0x802255FC: sh          $t9, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r25;
L_80225600:
    // 0x80225600: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80225604: sw          $v0, 0xC0($a2)
    MEM_W(0XC0, ctx->r6) = ctx->r2;
    // 0x80225608: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022560C: jal         0x8003521C
    // 0x80225610: sw          $zero, -0x4BEC($at)
    MEM_W(-0X4BEC, ctx->r1) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80225610: sw          $zero, -0x4BEC($at)
    MEM_W(-0X4BEC, ctx->r1) = 0;
    after_1:
    // 0x80225614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022561C: jr          $ra
    // 0x80225620: nop

    TRACE_RETURN()
    return;
    // 0x80225620: nop

;}
RECOMP_FUNC void func_8020E494_5C9964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E494: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E498: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E49C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E4A0: jal         0x80013AC4
    // 0x8020E4A4: addiu       $a0, $a0, -0x39F8
    ctx->r4 = ADD32(ctx->r4, -0X39F8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E4A4: addiu       $a0, $a0, -0x39F8
    ctx->r4 = ADD32(ctx->r4, -0X39F8);
    after_0:
    // 0x8020E4A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E4AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E4B0: jr          $ra
    // 0x8020E4B4: nop

    TRACE_RETURN()
    return;
    // 0x8020E4B4: nop

;}
RECOMP_FUNC void func_8021069C_5CBB6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021069C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802106A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802106A4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802106A8: jal         0x80013AC4
    // 0x802106AC: addiu       $a0, $a0, -0x1DAC
    ctx->r4 = ADD32(ctx->r4, -0X1DAC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802106AC: addiu       $a0, $a0, -0x1DAC
    ctx->r4 = ADD32(ctx->r4, -0X1DAC);
    after_0:
    // 0x802106B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802106B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802106B8: jr          $ra
    // 0x802106BC: nop

    TRACE_RETURN()
    return;
    // 0x802106BC: nop

;}
RECOMP_FUNC void func_802101B0_5CB680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802101B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802101B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802101B8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802101BC: jal         0x80013AC4
    // 0x802101C0: addiu       $a0, $a0, -0x2288
    ctx->r4 = ADD32(ctx->r4, -0X2288);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802101C0: addiu       $a0, $a0, -0x2288
    ctx->r4 = ADD32(ctx->r4, -0X2288);
    after_0:
    // 0x802101C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802101C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802101CC: jr          $ra
    // 0x802101D0: nop

    TRACE_RETURN()
    return;
    // 0x802101D0: nop

;}
RECOMP_FUNC void func_8021332C_5CE7FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021332C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80213330: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80213334: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80213338: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021333C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80213340: lui         $t7, 0x280
    ctx->r15 = S32(0X280 << 16);
    // 0x80213344: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x80213348: ori         $t7, $t7, 0x720
    ctx->r15 = ctx->r15 | 0X720;
    // 0x8021334C: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x80213350: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x80213354: addiu       $t8, $zero, 0x1E1
    ctx->r24 = ADD32(0, 0X1E1);
    // 0x80213358: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x8021335C: sb          $t9, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r25;
    // 0x80213360: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x80213364: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
    // 0x80213368: swc1        $f18, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f18.u32l;
    // 0x8021336C: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80213370: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80213374: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80213378: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x8021337C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80213380: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x80213384: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80213388: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021338C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80213390: sub.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80213394: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80213398: jalr        $t9
    // 0x8021339C: sub.s       $f14, $f8, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f16.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8021339C: sub.s       $f14, $f8, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f16.fl;
    after_0:
    // 0x802133A0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x802133A4: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x802133A8: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x802133AC: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x802133B0: jalr        $t9
    // 0x802133B4: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802133B4: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    after_1:
    // 0x802133B8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802133BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802133C0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x802133C4: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x802133C8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802133CC: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x802133D0: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x802133D4: jalr        $t9
    // 0x802133D8: lhu         $a0, 0x16($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802133D8: lhu         $a0, 0x16($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X16);
    after_2:
    // 0x802133DC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802133E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802133E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802133E8: lbu         $a1, 0x8F($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X8F);
    // 0x802133EC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802133F0: jal         0x80216DF8
    // 0x802133F4: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    func_80216DF8_5D22C8(rdram, ctx);
        goto after_3;
    // 0x802133F4: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    after_3:
    // 0x802133F8: lw          $t0, 0x64($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X64);
    // 0x802133FC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80213400: addiu       $a0, $a0, 0x3424
    ctx->r4 = ADD32(ctx->r4, 0X3424);
    // 0x80213404: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x80213408: jal         0x8003521C
    // 0x8021340C: sw          $t1, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x8021340C: sw          $t1, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r9;
    after_4:
    // 0x80213410: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80213414: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80213418: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021341C: jr          $ra
    // 0x80213420: nop

    TRACE_RETURN()
    return;
    // 0x80213420: nop

;}
RECOMP_FUNC void func_8020E080_5C9550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E088: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E08C: jal         0x80013AC4
    // 0x8020E090: addiu       $a0, $a0, -0x3BC4
    ctx->r4 = ADD32(ctx->r4, -0X3BC4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E090: addiu       $a0, $a0, -0x3BC4
    ctx->r4 = ADD32(ctx->r4, -0X3BC4);
    after_0:
    // 0x8020E094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E09C: jr          $ra
    // 0x8020E0A0: nop

    TRACE_RETURN()
    return;
    // 0x8020E0A0: nop

;}
RECOMP_FUNC void func_80211B4C_5CD01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211B4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211B50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80211B54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80211B58: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x80211B5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80211B60: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80211B64: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80211B68: bne         $v0, $zero, L_80211BF0
    if (ctx->r2 != 0) {
        // 0x80211B6C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_80211BF0;
    }
    // 0x80211B6C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x80211B70: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x80211B74: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80211B78: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x80211B7C: sll         $t8, $t7, 15
    ctx->r24 = S32(ctx->r15 << 15);
    // 0x80211B80: bgez        $t8, L_80211B98
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80211B84: addiu       $a0, $zero, 0x107
        ctx->r4 = ADD32(0, 0X107);
            goto L_80211B98;
    }
    // 0x80211B84: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    // 0x80211B88: jal         0x80038BC8
    // 0x80211B8C: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x80211B8C: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_0:
    // 0x80211B90: b           L_80211BA4
    // 0x80211B94: addiu       $t9, $zero, 0x7E
    ctx->r25 = ADD32(0, 0X7E);
        goto L_80211BA4;
    // 0x80211B94: addiu       $t9, $zero, 0x7E
    ctx->r25 = ADD32(0, 0X7E);
L_80211B98:
    // 0x80211B98: jal         0x8000F420
    // 0x80211B9C: lui         $a3, 0x44C8
    ctx->r7 = S32(0X44C8 << 16);
    func_8000F420_10020(rdram, ctx);
        goto after_1;
    // 0x80211B9C: lui         $a3, 0x44C8
    ctx->r7 = S32(0X44C8 << 16);
    after_1:
    // 0x80211BA0: addiu       $t9, $zero, 0x7E
    ctx->r25 = ADD32(0, 0X7E);
L_80211BA4:
    // 0x80211BA4: addiu       $t0, $zero, 0x22A
    ctx->r8 = ADD32(0, 0X22A);
    // 0x80211BA8: addiu       $t1, $zero, 0xFC
    ctx->r9 = ADD32(0, 0XFC);
    // 0x80211BAC: sh          $t9, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r25;
    // 0x80211BB0: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x80211BB4: sb          $t1, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r9;
    // 0x80211BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80211BBC: jal         0x80216DF8
    // 0x80211BC0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80216DF8_5D22C8(rdram, ctx);
        goto after_2;
    // 0x80211BC0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80211BC4: jal         0x8021A310
    // 0x80211BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021A310_5D57E0(rdram, ctx);
        goto after_3;
    // 0x80211BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80211BCC: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80211BD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80211BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80211BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80211BDC: jal         0x80224ABC
    // 0x80211BE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80224ABC_5DFF8C(rdram, ctx);
        goto after_4;
    // 0x80211BE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x80211BE4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80211BE8: jal         0x8003521C
    // 0x80211BEC: addiu       $a0, $a0, 0x1C04
    ctx->r4 = ADD32(ctx->r4, 0X1C04);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x80211BEC: addiu       $a0, $a0, 0x1C04
    ctx->r4 = ADD32(ctx->r4, 0X1C04);
    after_5:
L_80211BF0:
    // 0x80211BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80211BF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80211BF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80211BFC: jr          $ra
    // 0x80211C00: nop

    TRACE_RETURN()
    return;
    // 0x80211C00: nop

;}
RECOMP_FUNC void func_80211200_5CC6D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211200: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211208: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021120C: jal         0x80013AC4
    // 0x80211210: addiu       $a0, $a0, -0x164C
    ctx->r4 = ADD32(ctx->r4, -0X164C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80211210: addiu       $a0, $a0, -0x164C
    ctx->r4 = ADD32(ctx->r4, -0X164C);
    after_0:
    // 0x80211214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021121C: jr          $ra
    // 0x80211220: nop

    TRACE_RETURN()
    return;
    // 0x80211220: nop

;}
RECOMP_FUNC void func_8020F160_5CA630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F168: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F16C: jal         0x80013AC4
    // 0x8020F170: addiu       $a0, $a0, -0x3114
    ctx->r4 = ADD32(ctx->r4, -0X3114);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F170: addiu       $a0, $a0, -0x3114
    ctx->r4 = ADD32(ctx->r4, -0X3114);
    after_0:
    // 0x8020F174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F17C: jr          $ra
    // 0x8020F180: nop

    TRACE_RETURN()
    return;
    // 0x8020F180: nop

;}
RECOMP_FUNC void func_8022403C_5DF50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022403C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80224040: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80224044: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80224048: lw          $v1, 0xC0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC0);
    // 0x8022404C: lhu         $t6, 0xC8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XC8);
    // 0x80224050: lhu         $t4, 0xCA($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0XCA);
    // 0x80224054: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    // 0x80224058: lh          $t5, 0x2($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X2);
    // 0x8022405C: lhu         $t2, 0x6($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X6);
    // 0x80224060: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80224064: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x80224068: addu        $t0, $t4, $t5
    ctx->r8 = ADD32(ctx->r12, ctx->r13);
    // 0x8022406C: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80224070: sll         $t6, $t0, 16
    ctx->r14 = S32(ctx->r8 << 16);
    // 0x80224074: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80224078: sra         $t0, $t6, 16
    ctx->r8 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8022407C: andi        $t6, $t2, 0xFFF
    ctx->r14 = ctx->r10 & 0XFFF;
    // 0x80224080: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80224084: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80224088: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x8022408C: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80224090: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80224094: lhu         $t8, 0xCC($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XCC);
    // 0x80224098: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8022409C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x802240A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802240A4: lh          $t9, 0x4($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X4);
    // 0x802240A8: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x802240AC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802240B0: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x802240B4: addiu       $t3, $t3, -0x39FC
    ctx->r11 = ADD32(ctx->r11, -0X39FC);
    // 0x802240B8: sll         $t4, $t1, 16
    ctx->r12 = S32(ctx->r9 << 16);
    // 0x802240BC: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x802240C0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802240C4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802240C8: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x802240CC: sra         $t1, $t4, 16
    ctx->r9 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802240D0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x802240D4: lw          $t8, 0x5C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X5C);
    // 0x802240D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802240DC: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802240E0: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x802240E4: lhu         $t9, 0x9C($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X9C);
    // 0x802240E8: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x802240EC: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x802240F0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x802240F4: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x802240F8: addiu       $t9, $t9, -0x7B8
    ctx->r25 = ADD32(ctx->r25, -0X7B8);
    // 0x802240FC: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x80224100: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80224104: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80224108: jalr        $t9
    // 0x8022410C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8022410C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80224110: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80224114: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80224118: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8022411C: nop

    // 0x80224120: bc1fl       L_80224134
    if (!c1cs) {
        // 0x80224124: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80224134;
    }
    goto skip_0;
    // 0x80224124: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x80224128: b           L_80224134
    // 0x8022412C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80224134;
    // 0x8022412C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x80224130: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80224134:
    // 0x80224134: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x80224138: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8022413C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80224140: andi        $t6, $v0, 0xFFF
    ctx->r14 = ctx->r2 & 0XFFF;
    // 0x80224144: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80224148: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8022414C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80224150: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80224154: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80224158: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8022415C: andi        $t7, $v0, 0xC000
    ctx->r15 = ctx->r2 & 0XC000;
    // 0x80224160: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80224164: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x80224168: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8022416C: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x80224170: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80224174: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80224178: nop

    // 0x8022417C: bc1fl       L_80224198
    if (!c1cs) {
        // 0x80224180: sw          $v1, 0xC0($s0)
        MEM_W(0XC0, ctx->r16) = ctx->r3;
            goto L_80224198;
    }
    goto skip_1;
    // 0x80224180: sw          $v1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r3;
    skip_1:
    // 0x80224184: beq         $t7, $zero, L_80224194
    if (ctx->r15 == 0) {
        // 0x80224188: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_80224194;
    }
    // 0x80224188: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8022418C: b           L_80224198
    // 0x80224190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80224198;
    // 0x80224190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80224194:
    // 0x80224194: sw          $v1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r3;
L_80224198:
    // 0x80224198: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022419C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802241A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802241A4: jr          $ra
    // 0x802241A8: nop

    TRACE_RETURN()
    return;
    // 0x802241A8: nop

;}
RECOMP_FUNC void func_80222FB8_5DE488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222FB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80222FBC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80222FC0: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80222FC4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80222FC8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80222FCC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80222FD0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80222FD4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80222FD8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80222FDC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80222FE0: sb          $zero, -0x51DD($at)
    MEM_B(-0X51DD, ctx->r1) = 0;
    // 0x80222FE4: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80222FE8: jal         0x80034EF8
    // 0x80222FEC: lw          $a0, -0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4C00);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x80222FEC: lw          $a0, -0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4C00);
    after_0:
    // 0x80222FF0: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x80222FF4: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80222FF8: addiu       $s2, $s2, -0x4C60
    ctx->r18 = ADD32(ctx->r18, -0X4C60);
    // 0x80222FFC: addiu       $s1, $s1, 0x7DB0
    ctx->r17 = ADD32(ctx->r17, 0X7DB0);
    // 0x80223000: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80223004: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
L_80223008:
    // 0x80223008: jal         0x8022306C
    // 0x8022300C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022306C_5DE53C(rdram, ctx);
        goto after_1;
    // 0x8022300C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80223010: lw          $at, 0x0($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X0);
    // 0x80223014: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    // 0x80223018: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022301C: sw          $at, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r1;
    // 0x80223020: sw          $t8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r24;
    // 0x80223024: lw          $t8, 0xC($s2)
    ctx->r24 = MEM_W(ctx->r18, 0XC);
    // 0x80223028: lw          $at, 0x8($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X8);
    // 0x8022302C: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    // 0x80223030: sw          $t8, -0xC($s1)
    MEM_W(-0XC, ctx->r17) = ctx->r24;
    // 0x80223034: sw          $at, -0x10($s1)
    MEM_W(-0X10, ctx->r17) = ctx->r1;
    // 0x80223038: lw          $at, 0x10($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X10);
    // 0x8022303C: lw          $t8, 0x14($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X14);
    // 0x80223040: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
    // 0x80223044: sw          $at, -0x8($s1)
    MEM_W(-0X8, ctx->r17) = ctx->r1;
    // 0x80223048: bne         $s0, $s3, L_80223008
    if (ctx->r16 != ctx->r19) {
        // 0x8022304C: sw          $t8, -0x4($s1)
        MEM_W(-0X4, ctx->r17) = ctx->r24;
            goto L_80223008;
    }
    // 0x8022304C: sw          $t8, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r24;
    // 0x80223050: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80223054: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80223058: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8022305C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80223060: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80223064: jr          $ra
    // 0x80223068: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80223068: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226840_5E1D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226840: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80226844: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80226848: sh          $a1, 0xC4($a0)
    MEM_H(0XC4, ctx->r4) = ctx->r5;
    // 0x8022684C: sb          $zero, 0xCF($a0)
    MEM_B(0XCF, ctx->r4) = 0;
    // 0x80226850: sh          $zero, 0xC6($a0)
    MEM_H(0XC6, ctx->r4) = 0;
    // 0x80226854: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80226858: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8022685C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80226860: nop

    // 0x80226864: sh          $t8, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r24;
    // 0x80226868: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8022686C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80226870: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80226874: nop

    // 0x80226878: sh          $t0, 0xCA($a0)
    MEM_H(0XCA, ctx->r4) = ctx->r8;
    // 0x8022687C: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80226880: sb          $zero, 0xCE($a0)
    MEM_B(0XCE, ctx->r4) = 0;
    // 0x80226884: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80226888: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x8022688C: nop

    // 0x80226890: sh          $t2, 0xCC($a0)
    MEM_H(0XCC, ctx->r4) = ctx->r10;
    // 0x80226894: lhu         $t3, 0x16($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X16);
    // 0x80226898: sw          $a0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r4;
    // 0x8022689C: sra         $t4, $t3, 2
    ctx->r12 = S32(SIGNED(ctx->r11) >> 2);
    // 0x802268A0: jr          $ra
    // 0x802268A4: sb          $t4, 0xAA($a0)
    MEM_B(0XAA, ctx->r4) = ctx->r12;
    TRACE_RETURN()
    return;
    // 0x802268A4: sb          $t4, 0xAA($a0)
    MEM_B(0XAA, ctx->r4) = ctx->r12;
;}
RECOMP_FUNC void func_8020EBE4_5CA0B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EBE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EBE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EBEC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EBF0: jal         0x80013AC4
    // 0x8020EBF4: addiu       $a0, $a0, -0x34F0
    ctx->r4 = ADD32(ctx->r4, -0X34F0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EBF4: addiu       $a0, $a0, -0x34F0
    ctx->r4 = ADD32(ctx->r4, -0X34F0);
    after_0:
    // 0x8020EBF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EBFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EC00: jr          $ra
    // 0x8020EC04: nop

    TRACE_RETURN()
    return;
    // 0x8020EC04: nop

;}
RECOMP_FUNC void func_80224EF8_5E03C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224EF8: lhu         $t6, 0xA6($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XA6);
    // 0x80224EFC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x80224F00: addiu       $a1, $a1, 0x4CC0
    ctx->r5 = ADD32(ctx->r5, 0X4CC0);
    // 0x80224F04: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80224F08: sh          $t7, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r15;
    // 0x80224F0C: lhu         $t8, 0x307A($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X307A);
    // 0x80224F10: lw          $v0, 0xC4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC4);
    // 0x80224F14: addiu       $at, $zero, 0x2008
    ctx->r1 = ADD32(0, 0X2008);
    // 0x80224F18: andi        $t9, $t8, 0x2008
    ctx->r25 = ctx->r24 & 0X2008;
    // 0x80224F1C: bne         $t9, $at, L_80224F44
    if (ctx->r25 != ctx->r1) {
        // 0x80224F20: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80224F44;
    }
    // 0x80224F20: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80224F24: lhu         $t0, 0x307C($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X307C);
    // 0x80224F28: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x80224F2C: beq         $t1, $zero, L_80224F44
    if (ctx->r9 == 0) {
        // 0x80224F30: nop
    
            goto L_80224F44;
    }
    // 0x80224F30: nop

    // 0x80224F34: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x80224F38: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    // 0x80224F3C: lw          $v0, 0xC4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC4);
    // 0x80224F40: sh          $zero, 0xEA($a0)
    MEM_H(0XEA, ctx->r4) = 0;
L_80224F44:
    // 0x80224F44: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x80224F48: lw          $a1, -0x3274($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3274);
    // 0x80224F4C: bne         $a1, $v0, L_80224F6C
    if (ctx->r5 != ctx->r2) {
        // 0x80224F50: nop
    
            goto L_80224F6C;
    }
    // 0x80224F50: nop

    // 0x80224F54: lhu         $t2, 0xA6($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0XA6);
    // 0x80224F58: slti        $at, $t2, 0x14
    ctx->r1 = SIGNED(ctx->r10) < 0X14 ? 1 : 0;
    // 0x80224F5C: beq         $at, $zero, L_80224F6C
    if (ctx->r1 == 0) {
        // 0x80224F60: nop
    
            goto L_80224F6C;
    }
    // 0x80224F60: nop

    // 0x80224F64: jr          $ra
    // 0x80224F68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80224F68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80224F6C:
    // 0x80224F6C: bne         $a1, $v0, L_80224F80
    if (ctx->r5 != ctx->r2) {
        // 0x80224F70: addiu       $t3, $zero, 0x14
        ctx->r11 = ADD32(0, 0X14);
            goto L_80224F80;
    }
    // 0x80224F70: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x80224F74: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x80224F78: bne         $t4, $zero, L_80224FB0
    if (ctx->r12 != 0) {
        // 0x80224F7C: sh          $t3, 0xA6($a0)
        MEM_H(0XA6, ctx->r4) = ctx->r11;
            goto L_80224FB0;
    }
    // 0x80224F7C: sh          $t3, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r11;
L_80224F80:
    // 0x80224F80: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x80224F84: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x80224F88: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80224F8C: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x80224F90: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80224F94: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x80224F98: lhu         $t8, 0x307A($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X307A);
    // 0x80224F9C: lhu         $t5, 0xEA($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0XEA);
    // 0x80224FA0: bnel        $t5, $t8, L_80224FB4
    if (ctx->r13 != ctx->r24) {
        // 0x80224FA4: lhu         $t9, 0xEA($a0)
        ctx->r25 = MEM_HU(ctx->r4, 0XEA);
            goto L_80224FB4;
    }
    goto skip_0;
    // 0x80224FA4: lhu         $t9, 0xEA($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XEA);
    skip_0:
    // 0x80224FA8: jr          $ra
    // 0x80224FAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80224FAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80224FB0:
    // 0x80224FB0: lhu         $t9, 0xEA($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XEA);
L_80224FB4:
    // 0x80224FB4: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x80224FB8: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x80224FBC: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x80224FC0: lhu         $t0, 0xA6($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XA6);
    // 0x80224FC4: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x80224FC8: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80224FCC: sh          $t0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r8;
    // 0x80224FD0: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x80224FD4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80224FD8: addu        $t2, $t1, $a2
    ctx->r10 = ADD32(ctx->r9, ctx->r6);
    // 0x80224FDC: lhu         $t3, 0x307A($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X307A);
    // 0x80224FE0: sh          $zero, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = 0;
    // 0x80224FE4: sw          $v1, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->r3;
    // 0x80224FE8: sh          $t3, 0xEA($a0)
    MEM_H(0XEA, ctx->r4) = ctx->r11;
    // 0x80224FEC: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x80224FF0: addu        $t6, $t4, $a2
    ctx->r14 = ADD32(ctx->r12, ctx->r6);
    // 0x80224FF4: lhu         $v0, 0x307C($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X307C);
    // 0x80224FF8: jr          $ra
    // 0x80224FFC: nop

    TRACE_RETURN()
    return;
    // 0x80224FFC: nop

;}
RECOMP_FUNC void func_80221CCC_5DD19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221CCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80221CD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80221CD4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80221CD8: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x80221CDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80221CE0: jal         0x8003F1FC
    // 0x80221CE4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_8003F1FC_3FDFC(rdram, ctx);
        goto after_0;
    // 0x80221CE4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x80221CE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80221CEC: bnel        $v0, $at, L_80221D34
    if (ctx->r2 != ctx->r1) {
        // 0x80221CF0: lw          $t8, 0x20($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X20);
            goto L_80221D34;
    }
    goto skip_0;
    // 0x80221CF0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x80221CF4: jal         0x8003F1FC
    // 0x80221CF8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8003F1FC_3FDFC(rdram, ctx);
        goto after_1;
    // 0x80221CF8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x80221CFC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80221D00: bnel        $v0, $at, L_80221D34
    if (ctx->r2 != ctx->r1) {
        // 0x80221D04: lw          $t8, 0x20($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X20);
            goto L_80221D34;
    }
    goto skip_1;
    // 0x80221D04: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    skip_1:
    // 0x80221D08: jal         0x8003F1FC
    // 0x80221D0C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8003F1FC_3FDFC(rdram, ctx);
        goto after_2;
    // 0x80221D0C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x80221D10: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80221D14: bnel        $v0, $at, L_80221D34
    if (ctx->r2 != ctx->r1) {
        // 0x80221D18: lw          $t8, 0x20($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X20);
            goto L_80221D34;
    }
    goto skip_2;
    // 0x80221D18: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    skip_2:
    // 0x80221D1C: jal         0x8003F1FC
    // 0x80221D20: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8003F1FC_3FDFC(rdram, ctx);
        goto after_3;
    // 0x80221D20: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x80221D24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80221D28: beq         $v0, $at, L_80221DF0
    if (ctx->r2 == ctx->r1) {
        // 0x80221D2C: lw          $t3, 0x20($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X20);
            goto L_80221DF0;
    }
    // 0x80221D2C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80221D30: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_80221D34:
    // 0x80221D34: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80221D38: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80221D3C: lhu         $t9, 0xA8($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0XA8);
    // 0x80221D40: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80221D44: bgez        $t9, L_80221D58
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80221D48: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80221D58;
    }
    // 0x80221D48: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80221D4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80221D50: nop

    // 0x80221D54: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80221D58:
    // 0x80221D58: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80221D5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80221D60: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80221D64: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80221D68: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80221D6C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80221D70: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80221D74: nop

    // 0x80221D78: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80221D7C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80221D80: nop

    // 0x80221D84: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80221D88: beql        $t1, $zero, L_80221DD8
    if (ctx->r9 == 0) {
        // 0x80221D8C: mfc1        $t1, $f18
        ctx->r9 = (int32_t)ctx->f18.u32l;
            goto L_80221DD8;
    }
    goto skip_3;
    // 0x80221D8C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    skip_3:
    // 0x80221D90: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80221D94: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80221D98: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80221D9C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80221DA0: nop

    // 0x80221DA4: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80221DA8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80221DAC: nop

    // 0x80221DB0: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80221DB4: bne         $t1, $zero, L_80221DCC
    if (ctx->r9 != 0) {
        // 0x80221DB8: nop
    
            goto L_80221DCC;
    }
    // 0x80221DB8: nop

    // 0x80221DBC: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80221DC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80221DC4: b           L_80221DE4
    // 0x80221DC8: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_80221DE4;
    // 0x80221DC8: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_80221DCC:
    // 0x80221DCC: b           L_80221DE4
    // 0x80221DD0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_80221DE4;
    // 0x80221DD0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80221DD4: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
L_80221DD8:
    // 0x80221DD8: nop

    // 0x80221DDC: bltz        $t1, L_80221DCC
    if (SIGNED(ctx->r9) < 0) {
        // 0x80221DE0: nop
    
            goto L_80221DCC;
    }
    // 0x80221DE0: nop

L_80221DE4:
    // 0x80221DE4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80221DE8: b           L_80221EAC
    // 0x80221DEC: sh          $t1, 0x7E($t2)
    MEM_H(0X7E, ctx->r10) = ctx->r9;
        goto L_80221EAC;
    // 0x80221DEC: sh          $t1, 0x7E($t2)
    MEM_H(0X7E, ctx->r10) = ctx->r9;
L_80221DF0:
    // 0x80221DF0: lhu         $t4, 0xA8($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XA8);
    // 0x80221DF4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80221DF8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80221DFC: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80221E00: bgez        $t4, L_80221E14
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80221E04: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80221E14;
    }
    // 0x80221E04: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80221E08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80221E0C: nop

    // 0x80221E10: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_80221E14:
    // 0x80221E14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80221E18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80221E1C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80221E20: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80221E24: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80221E28: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80221E2C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80221E30: nop

    // 0x80221E34: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80221E38: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80221E3C: nop

    // 0x80221E40: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80221E44: beql        $t6, $zero, L_80221E94
    if (ctx->r14 == 0) {
        // 0x80221E48: mfc1        $t6, $f18
        ctx->r14 = (int32_t)ctx->f18.u32l;
            goto L_80221E94;
    }
    goto skip_4;
    // 0x80221E48: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    skip_4:
    // 0x80221E4C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80221E50: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80221E54: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80221E58: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80221E5C: nop

    // 0x80221E60: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80221E64: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80221E68: nop

    // 0x80221E6C: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80221E70: bne         $t6, $zero, L_80221E88
    if (ctx->r14 != 0) {
        // 0x80221E74: nop
    
            goto L_80221E88;
    }
    // 0x80221E74: nop

    // 0x80221E78: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x80221E7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80221E80: b           L_80221EA0
    // 0x80221E84: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80221EA0;
    // 0x80221E84: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_80221E88:
    // 0x80221E88: b           L_80221EA0
    // 0x80221E8C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80221EA0;
    // 0x80221E8C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80221E90: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
L_80221E94:
    // 0x80221E94: nop

    // 0x80221E98: bltz        $t6, L_80221E88
    if (SIGNED(ctx->r14) < 0) {
        // 0x80221E9C: nop
    
            goto L_80221E88;
    }
    // 0x80221E9C: nop

L_80221EA0:
    // 0x80221EA0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80221EA4: sh          $t6, 0x7E($t7)
    MEM_H(0X7E, ctx->r15) = ctx->r14;
    // 0x80221EA8: nop

L_80221EAC:
    // 0x80221EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80221EB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80221EB4: jr          $ra
    // 0x80221EB8: nop

    TRACE_RETURN()
    return;
    // 0x80221EB8: nop

;}
RECOMP_FUNC void func_80210B64_5CC034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210B64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210B6C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210B70: jal         0x80013AC4
    // 0x80210B74: addiu       $a0, $a0, -0x1A4C
    ctx->r4 = ADD32(ctx->r4, -0X1A4C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210B74: addiu       $a0, $a0, -0x1A4C
    ctx->r4 = ADD32(ctx->r4, -0X1A4C);
    after_0:
    // 0x80210B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210B7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210B80: jr          $ra
    // 0x80210B84: nop

    TRACE_RETURN()
    return;
    // 0x80210B84: nop

;}
RECOMP_FUNC void func_802106E4_5CBBB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802106E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802106E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802106EC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802106F0: jal         0x80013AC4
    // 0x802106F4: addiu       $a0, $a0, -0x1D68
    ctx->r4 = ADD32(ctx->r4, -0X1D68);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802106F4: addiu       $a0, $a0, -0x1D68
    ctx->r4 = ADD32(ctx->r4, -0X1D68);
    after_0:
    // 0x802106F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802106FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210700: jr          $ra
    // 0x80210704: nop

    TRACE_RETURN()
    return;
    // 0x80210704: nop

;}
RECOMP_FUNC void func_8020E278_5C9748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E278: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E27C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E280: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E284: jal         0x80013AC4
    // 0x8020E288: addiu       $a0, $a0, -0x3A94
    ctx->r4 = ADD32(ctx->r4, -0X3A94);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E288: addiu       $a0, $a0, -0x3A94
    ctx->r4 = ADD32(ctx->r4, -0X3A94);
    after_0:
    // 0x8020E28C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E294: jr          $ra
    // 0x8020E298: nop

    TRACE_RETURN()
    return;
    // 0x8020E298: nop

;}
RECOMP_FUNC void func_80210024_5CB4F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210024: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021002C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210030: jal         0x80013AC4
    // 0x80210034: addiu       $a0, $a0, -0x23F8
    ctx->r4 = ADD32(ctx->r4, -0X23F8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210034: addiu       $a0, $a0, -0x23F8
    ctx->r4 = ADD32(ctx->r4, -0X23F8);
    after_0:
    // 0x80210038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021003C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210040: jr          $ra
    // 0x80210044: nop

    TRACE_RETURN()
    return;
    // 0x80210044: nop

;}
RECOMP_FUNC void func_8020FD0C_5CB1DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FD0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FD10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FD14: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FD18: jal         0x80013AC4
    // 0x8020FD1C: addiu       $a0, $a0, -0x27C0
    ctx->r4 = ADD32(ctx->r4, -0X27C0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FD1C: addiu       $a0, $a0, -0x27C0
    ctx->r4 = ADD32(ctx->r4, -0X27C0);
    after_0:
    // 0x8020FD20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FD24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FD28: jr          $ra
    // 0x8020FD2C: nop

    TRACE_RETURN()
    return;
    // 0x8020FD2C: nop

;}
RECOMP_FUNC void func_8020E32C_5C97FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E32C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E334: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E338: jal         0x80013AC4
    // 0x8020E33C: addiu       $a0, $a0, -0x3A64
    ctx->r4 = ADD32(ctx->r4, -0X3A64);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E33C: addiu       $a0, $a0, -0x3A64
    ctx->r4 = ADD32(ctx->r4, -0X3A64);
    after_0:
    // 0x8020E340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E348: jr          $ra
    // 0x8020E34C: nop

    TRACE_RETURN()
    return;
    // 0x8020E34C: nop

;}
RECOMP_FUNC void func_8020FAA8_5CAF78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FAA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FAAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FAB0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FAB4: jal         0x80013AC4
    // 0x8020FAB8: addiu       $a0, $a0, -0x2A3C
    ctx->r4 = ADD32(ctx->r4, -0X2A3C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FAB8: addiu       $a0, $a0, -0x2A3C
    ctx->r4 = ADD32(ctx->r4, -0X2A3C);
    after_0:
    // 0x8020FABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FAC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FAC4: jr          $ra
    // 0x8020FAC8: nop

    TRACE_RETURN()
    return;
    // 0x8020FAC8: nop

;}
RECOMP_FUNC void func_802154FC_5D09CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802154FC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80215500: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80215504: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80215508: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8021550C: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80215510: lbu         $t7, 0x5B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X5B);
    // 0x80215514: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x80215518: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x8021551C: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80215520: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80215524: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80215528: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x8021552C: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80215530: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80215534: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x80215538: bgez        $t7, L_8021554C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8021553C: lwc1        $f12, 0x8($a1)
        ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
            goto L_8021554C;
    }
    // 0x8021553C: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80215540: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80215544: nop

    // 0x80215548: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
L_8021554C:
    // 0x8021554C: sub.s       $f14, $f12, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80215550: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80215554: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x80215558: nop

    // 0x8021555C: bc1fl       L_802157B4
    if (!c1cs) {
        // 0x80215560: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802157B4;
    }
    goto skip_0;
    // 0x80215560: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80215564: add.s       $f16, $f12, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x80215568: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8021556C: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x80215570: nop

    // 0x80215574: bc1fl       L_802157B4
    if (!c1cs) {
        // 0x80215578: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802157B4;
    }
    goto skip_1;
    // 0x80215578: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x8021557C: lwc1        $f0, 0xC($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0XC);
    // 0x80215580: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80215584: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80215588: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8021558C: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80215590: nop

    // 0x80215594: bc1fl       L_802157B4
    if (!c1cs) {
        // 0x80215598: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802157B4;
    }
    goto skip_2;
    // 0x80215598: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x8021559C: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x802155A0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802155A4: nop

    // 0x802155A8: bc1fl       L_802157B4
    if (!c1cs) {
        // 0x802155AC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802157B4;
    }
    goto skip_3;
    // 0x802155AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x802155B0: lwc1        $f0, 0x10($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X10);
    // 0x802155B4: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802155B8: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802155BC: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x802155C0: nop

    // 0x802155C4: bc1fl       L_802157B4
    if (!c1cs) {
        // 0x802155C8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802157B4;
    }
    goto skip_4;
    // 0x802155C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_4:
    // 0x802155CC: add.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x802155D0: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x802155D4: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802155D8: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x802155DC: nop

    // 0x802155E0: bc1fl       L_802157B4
    if (!c1cs) {
        // 0x802155E4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802157B4;
    }
    goto skip_5;
    // 0x802155E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_5:
    // 0x802155E8: lhu         $v0, 0x16($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X16);
    // 0x802155EC: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x802155F0: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802155F4: beql        $v0, $zero, L_80215608
    if (ctx->r2 == 0) {
        // 0x802155F8: c.lt.s      $f14, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
            goto L_80215608;
    }
    goto skip_6;
    // 0x802155F8: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    skip_6:
    // 0x802155FC: bnel        $v0, $at, L_80215660
    if (ctx->r2 != ctx->r1) {
        // 0x80215600: lui         $at, 0x41C8
        ctx->r1 = S32(0X41C8 << 16);
            goto L_80215660;
    }
    goto skip_7;
    // 0x80215600: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    skip_7:
    // 0x80215604: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
L_80215608:
    // 0x80215608: nop

    // 0x8021560C: bc1fl       L_80215660
    if (!c1cs) {
        // 0x80215610: lui         $at, 0x41C8
        ctx->r1 = S32(0X41C8 << 16);
            goto L_80215660;
    }
    goto skip_8;
    // 0x80215610: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    skip_8:
    // 0x80215614: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x80215618: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x8021561C: bc1fl       L_80215660
    if (!c1cs) {
        // 0x80215620: lui         $at, 0x41C8
        ctx->r1 = S32(0X41C8 << 16);
            goto L_80215660;
    }
    goto skip_9;
    // 0x80215620: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    skip_9:
    // 0x80215624: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80215628: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021562C: sub.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80215630: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80215634: nop

    // 0x80215638: bc1fl       L_80215660
    if (!c1cs) {
        // 0x8021563C: lui         $at, 0x41C8
        ctx->r1 = S32(0X41C8 << 16);
            goto L_80215660;
    }
    goto skip_10;
    // 0x8021563C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    skip_10:
    // 0x80215640: add.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
    // 0x80215644: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x80215648: nop

    // 0x8021564C: bc1fl       L_80215660
    if (!c1cs) {
        // 0x80215650: lui         $at, 0x41C8
        ctx->r1 = S32(0X41C8 << 16);
            goto L_80215660;
    }
    goto skip_11;
    // 0x80215650: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    skip_11:
    // 0x80215654: b           L_802157B4
    // 0x80215658: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_802157B4;
    // 0x80215658: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8021565C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
L_80215660:
    // 0x80215660: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80215664: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x80215668: beq         $v1, $v0, L_80215678
    if (ctx->r3 == ctx->r2) {
        // 0x8021566C: addiu       $at, $zero, 0x300
        ctx->r1 = ADD32(0, 0X300);
            goto L_80215678;
    }
    // 0x8021566C: addiu       $at, $zero, 0x300
    ctx->r1 = ADD32(0, 0X300);
    // 0x80215670: bne         $v0, $at, L_802156D0
    if (ctx->r2 != ctx->r1) {
        // 0x80215674: nop
    
            goto L_802156D0;
    }
    // 0x80215674: nop

L_80215678:
    // 0x80215678: sub.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x8021567C: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80215680: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x80215684: nop

    // 0x80215688: bc1f        L_802156D0
    if (!c1cs) {
        // 0x8021568C: nop
    
            goto L_802156D0;
    }
    // 0x8021568C: nop

    // 0x80215690: add.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x80215694: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80215698: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8021569C: nop

    // 0x802156A0: bc1f        L_802156D0
    if (!c1cs) {
        // 0x802156A4: nop
    
            goto L_802156D0;
    }
    // 0x802156A4: nop

    // 0x802156A8: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x802156AC: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802156B0: bc1f        L_802156D0
    if (!c1cs) {
        // 0x802156B4: nop
    
            goto L_802156D0;
    }
    // 0x802156B4: nop

    // 0x802156B8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802156BC: nop

    // 0x802156C0: bc1f        L_802156D0
    if (!c1cs) {
        // 0x802156C4: nop
    
            goto L_802156D0;
    }
    // 0x802156C4: nop

    // 0x802156C8: b           L_802157B4
    // 0x802156CC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_802157B4;
    // 0x802156CC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_802156D0:
    // 0x802156D0: beql        $v0, $zero, L_802157B4
    if (ctx->r2 == 0) {
        // 0x802156D4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802157B4;
    }
    goto skip_12;
    // 0x802156D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_12:
    // 0x802156D8: beq         $v1, $v0, L_802157B0
    if (ctx->r3 == ctx->r2) {
        // 0x802156DC: addiu       $at, $zero, 0x200
        ctx->r1 = ADD32(0, 0X200);
            goto L_802157B0;
    }
    // 0x802156DC: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x802156E0: beq         $v0, $at, L_802157B0
    if (ctx->r2 == ctx->r1) {
        // 0x802156E4: addiu       $at, $zero, 0x300
        ctx->r1 = ADD32(0, 0X300);
            goto L_802157B0;
    }
    // 0x802156E4: addiu       $at, $zero, 0x300
    ctx->r1 = ADD32(0, 0X300);
    // 0x802156E8: beq         $v0, $at, L_802157B0
    if (ctx->r2 == ctx->r1) {
        // 0x802156EC: lwc1        $f10, 0x4C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_802157B0;
    }
    // 0x802156EC: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802156F0: sub.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x802156F4: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x802156F8: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802156FC: addiu       $t9, $sp, 0x48
    ctx->r25 = ADD32(ctx->r29, 0X48);
    // 0x80215700: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x80215704: lwc1        $f6, 0xC($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0XC);
    // 0x80215708: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021570C: addiu       $t0, $sp, 0x44
    ctx->r8 = ADD32(ctx->r29, 0X44);
    // 0x80215710: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80215714: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80215718: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021571C: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x80215720: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x80215724: lwc1        $f4, 0x10($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X10);
    // 0x80215728: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8021572C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x80215730: lhu         $a1, 0x16($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X16);
    // 0x80215734: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x80215738: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8021573C: jal         0x80033A3C
    // 0x80215740: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80033A3C_3463C(rdram, ctx);
        goto after_0;
    // 0x80215740: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x80215744: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x80215748: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8021574C: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x80215750: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80215754: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80215758: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8021575C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80215760: nop

    // 0x80215764: bc1fl       L_802157B4
    if (!c1cs) {
        // 0x80215768: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802157B4;
    }
    goto skip_13;
    // 0x80215768: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_13:
    // 0x8021576C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80215770: lbu         $t1, 0x5B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X5B);
    // 0x80215774: bc1f        L_802157B0
    if (!c1cs) {
        // 0x80215778: negu        $t2, $t1
        ctx->r10 = SUB32(0, ctx->r9);
            goto L_802157B0;
    }
    // 0x80215778: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x8021577C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80215780: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80215784: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80215788: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8021578C: nop

    // 0x80215790: bc1fl       L_802157B4
    if (!c1cs) {
        // 0x80215794: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802157B4;
    }
    goto skip_14;
    // 0x80215794: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_14:
    // 0x80215798: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8021579C: nop

    // 0x802157A0: bc1fl       L_802157B4
    if (!c1cs) {
        // 0x802157A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802157B4;
    }
    goto skip_15;
    // 0x802157A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_15:
    // 0x802157A8: b           L_802157B4
    // 0x802157AC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_802157B4;
    // 0x802157AC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_802157B0:
    // 0x802157B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802157B4:
    // 0x802157B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802157B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x802157BC: jr          $ra
    // 0x802157C0: nop

    TRACE_RETURN()
    return;
    // 0x802157C0: nop

;}
RECOMP_FUNC void func_80225E60_5E1330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80225E64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225E68: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80225E6C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80225E70: lbu         $a1, 0xCF($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XCF);
    // 0x80225E74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80225E78: lw          $s1, 0xC0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XC0);
    // 0x80225E7C: beq         $a1, $zero, L_80225E98
    if (ctx->r5 == 0) {
        // 0x80225E80: lw          $v1, 0x18($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X18);
            goto L_80225E98;
    }
    // 0x80225E80: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80225E84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80225E88: beql        $a1, $at, L_80225F24
    if (ctx->r5 == ctx->r1) {
        // 0x80225E8C: lw          $t6, 0x68($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X68);
            goto L_80225F24;
    }
    goto skip_0;
    // 0x80225E8C: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    skip_0:
    // 0x80225E90: b           L_80226194
    // 0x80225E94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80226194;
    // 0x80225E94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80225E98:
    // 0x80225E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80225E9C: jal         0x802196E4
    // 0x80225EA0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_802196E4_5D4BB4(rdram, ctx);
        goto after_0;
    // 0x80225EA0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x80225EA4: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x80225EA8: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x80225EAC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80225EB0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80225EB4: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
    // 0x80225EB8: lh          $t2, 0x4($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X4);
    // 0x80225EBC: lh          $t9, 0x0($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X0);
    // 0x80225EC0: lh          $t8, 0xC8($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XC8);
    // 0x80225EC4: lh          $t1, 0xCC($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XCC);
    // 0x80225EC8: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80225ECC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80225ED0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80225ED4: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80225ED8: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80225EDC: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80225EE0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80225EE4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225EE8: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80225EEC: jal         0x8021ADD0
    // 0x80225EF0: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_1;
    // 0x80225EF0: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    after_1:
    // 0x80225EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80225EF8: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x80225EFC: jal         0x8021D9A8
    // 0x80225F00: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8021D9A8_5D8E78(rdram, ctx);
        goto after_2;
    // 0x80225F00: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x80225F04: beq         $v0, $zero, L_80225F18
    if (ctx->r2 == 0) {
        // 0x80225F08: nop
    
            goto L_80225F18;
    }
    // 0x80225F08: nop

    // 0x80225F0C: lbu         $t4, 0xCF($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XCF);
    // 0x80225F10: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80225F14: sb          $t5, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r13;
L_80225F18:
    // 0x80225F18: b           L_80226190
    // 0x80225F1C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80226190;
    // 0x80225F1C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225F20: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
L_80225F24:
    // 0x80225F24: lh          $t8, 0xC8($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XC8);
    // 0x80225F28: lh          $t1, 0xCC($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XCC);
    // 0x80225F2C: ori         $t7, $t6, 0x400
    ctx->r15 = ctx->r14 | 0X400;
    // 0x80225F30: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
    // 0x80225F34: lh          $t2, 0x4($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X4);
    // 0x80225F38: lh          $t9, 0x0($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X0);
    // 0x80225F3C: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80225F40: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80225F44: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80225F48: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80225F4C: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80225F50: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80225F54: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225F58: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80225F5C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80225F60: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80225F64: jal         0x8021ADD0
    // 0x80225F68: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_3;
    // 0x80225F68: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    after_3:
    // 0x80225F6C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80225F70: lhu         $t4, 0x16($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X16);
    // 0x80225F74: subu        $t5, $t4, $v0
    ctx->r13 = SUB32(ctx->r12, ctx->r2);
    // 0x80225F78: bgezl       $t5, L_80225FD8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80225F7C: lh          $t3, 0xC8($s0)
        ctx->r11 = MEM_H(ctx->r16, 0XC8);
            goto L_80225FD8;
    }
    goto skip_1;
    // 0x80225F7C: lh          $t3, 0xC8($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XC8);
    skip_1:
    // 0x80225F80: lh          $t6, 0xC8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XC8);
    // 0x80225F84: lh          $t7, 0x0($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X0);
    // 0x80225F88: lh          $t9, 0xCC($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XCC);
    // 0x80225F8C: lh          $t0, 0x4($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X4);
    // 0x80225F90: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80225F94: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80225F98: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80225F9C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80225FA0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225FA4: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80225FA8: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80225FAC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80225FB0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80225FB4: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80225FB8: jal         0x8021ADD0
    // 0x80225FBC: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_4;
    // 0x80225FBC: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    after_4:
    // 0x80225FC0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80225FC4: lhu         $t2, 0x16($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X16);
    // 0x80225FC8: subu        $a1, $t2, $v0
    ctx->r5 = SUB32(ctx->r10, ctx->r2);
    // 0x80225FCC: b           L_80226020
    // 0x80225FD0: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
        goto L_80226020;
    // 0x80225FD0: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x80225FD4: lh          $t3, 0xC8($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XC8);
L_80225FD8:
    // 0x80225FD8: lh          $t4, 0x0($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X0);
    // 0x80225FDC: lh          $t6, 0xCC($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XCC);
    // 0x80225FE0: lh          $t7, 0x4($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X4);
    // 0x80225FE4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80225FE8: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80225FEC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80225FF0: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80225FF4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225FF8: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80225FFC: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80226000: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80226004: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80226008: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8022600C: jal         0x8021ADD0
    // 0x80226010: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_5;
    // 0x80226010: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    after_5:
    // 0x80226014: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80226018: lhu         $t9, 0x16($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X16);
    // 0x8022601C: subu        $a1, $t9, $v0
    ctx->r5 = SUB32(ctx->r25, ctx->r2);
L_80226020:
    // 0x80226020: slti        $at, $a1, 0x6
    ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
    // 0x80226024: bnel        $at, $zero, L_80226044
    if (ctx->r1 != 0) {
        // 0x80226028: lhu         $t8, 0x6($s1)
        ctx->r24 = MEM_HU(ctx->r17, 0X6);
            goto L_80226044;
    }
    goto skip_2;
    // 0x80226028: lhu         $t8, 0x6($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X6);
    skip_2:
    // 0x8022602C: lbu         $t0, 0xCF($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XCF);
    // 0x80226030: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226034: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80226038: b           L_80226190
    // 0x8022603C: sb          $t1, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r9;
        goto L_80226190;
    // 0x8022603C: sb          $t1, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r9;
    // 0x80226040: lhu         $t8, 0x6($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X6);
L_80226044:
    // 0x80226044: lh          $t2, 0xC8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XC8);
    // 0x80226048: lh          $t3, 0x0($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X0);
    // 0x8022604C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x80226050: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80226054: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80226058: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8022605C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80226060: lui         $at, 0x4069
    ctx->r1 = S32(0X4069 << 16);
    // 0x80226064: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80226068: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8022606C: lh          $t5, 0xCC($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XCC);
    // 0x80226070: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80226074: lh          $t6, 0x4($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X4);
    // 0x80226078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022607C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80226080: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80226084: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80226088: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x8022608C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80226090: nop

    // 0x80226094: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80226098: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8022609C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802260A0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802260A4: jal         0x8021BB04
    // 0x802260A8: nop

    func_8021BB04_5D6FD4(rdram, ctx);
        goto after_6;
    // 0x802260A8: nop

    after_6:
    // 0x802260AC: bnel        $v0, $zero, L_80226190
    if (ctx->r2 != 0) {
        // 0x802260B0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226190;
    }
    goto skip_3;
    // 0x802260B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_3:
    // 0x802260B4: lw          $t0, 0x68($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X68);
    // 0x802260B8: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x802260BC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x802260C0: sw          $t1, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r9;
    // 0x802260C4: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x802260C8: andi        $t2, $v0, 0x8000
    ctx->r10 = ctx->r2 & 0X8000;
    // 0x802260CC: beq         $t2, $zero, L_802260DC
    if (ctx->r10 == 0) {
        // 0x802260D0: andi        $t3, $v0, 0x4000
        ctx->r11 = ctx->r2 & 0X4000;
            goto L_802260DC;
    }
    // 0x802260D0: andi        $t3, $v0, 0x4000
    ctx->r11 = ctx->r2 & 0X4000;
    // 0x802260D4: b           L_80226190
    // 0x802260D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80226190;
    // 0x802260D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802260DC:
    // 0x802260DC: beq         $t3, $zero, L_80226174
    if (ctx->r11 == 0) {
        // 0x802260E0: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_80226174;
    }
    // 0x802260E0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x802260E4: lhu         $t4, 0xEC($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XEC);
    // 0x802260E8: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802260EC: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x802260F0: addu        $s1, $s1, $t5
    ctx->r17 = ADD32(ctx->r17, ctx->r13);
    // 0x802260F4: lhu         $s1, -0x6660($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X6660);
    // 0x802260F8: jal         0x800141C4
    // 0x802260FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800141C4_14DC4(rdram, ctx);
        goto after_7;
    // 0x802260FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x80226100: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80226104: beq         $v0, $at, L_8022616C
    if (ctx->r2 == ctx->r1) {
        // 0x80226108: nop
    
            goto L_8022616C;
    }
    // 0x80226108: nop

    // 0x8022610C: lhu         $t6, 0xEC($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XEC);
    // 0x80226110: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226114: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80226118: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8022611C: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80226120: jal         0x80225E20
    // 0x80226124: lw          $a0, -0x69D0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X69D0);
    func_80225E20_5E12F0(rdram, ctx);
        goto after_8;
    // 0x80226124: lw          $a0, -0x69D0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X69D0);
    after_8:
    // 0x80226128: lhu         $t8, 0xEC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XEC);
    // 0x8022612C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226130: sw          $v0, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r2;
    // 0x80226134: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80226138: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x8022613C: lw          $a0, -0x6818($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6818);
    // 0x80226140: jal         0x80225E20
    // 0x80226144: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80225E20_5E12F0(rdram, ctx);
        goto after_9;
    // 0x80226144: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x80226148: lw          $s1, 0xC0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XC0);
    // 0x8022614C: lbu         $t1, 0xCF($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XCF);
    // 0x80226150: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
    // 0x80226154: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80226158: sw          $s1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r17;
    // 0x8022615C: lhu         $t0, 0x2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2);
    // 0x80226160: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80226164: sb          $t2, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r10;
    // 0x80226168: sh          $t0, 0xA6($s0)
    MEM_H(0XA6, ctx->r16) = ctx->r8;
L_8022616C:
    // 0x8022616C: b           L_80226190
    // 0x80226170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226190;
    // 0x80226170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226174:
    // 0x80226174: lbu         $t3, 0xCF($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XCF);
    // 0x80226178: sw          $s1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r17;
    // 0x8022617C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226180: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80226184: b           L_80226190
    // 0x80226188: sb          $t4, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r12;
        goto L_80226190;
    // 0x80226188: sb          $t4, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r12;
    // 0x8022618C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80226190:
    // 0x80226190: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80226194:
    // 0x80226194: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80226198: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8022619C: jr          $ra
    // 0x802261A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802261A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80214B4C_5D001C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214B4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80214B50: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80214B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80214B58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80214B5C: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x80214B60: jalr        $t9
    // 0x80214B64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80214B64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80214B68: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x80214B6C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x80214B70: jalr        $t9
    // 0x80214B74: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80214B74: nop

    after_1:
    // 0x80214B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80214B7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80214B80: jr          $ra
    // 0x80214B84: nop

    TRACE_RETURN()
    return;
    // 0x80214B84: nop

;}
RECOMP_FUNC void func_8020F214_5CA6E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F214: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F21C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F220: jal         0x80013AC4
    // 0x8020F224: addiu       $a0, $a0, -0x3074
    ctx->r4 = ADD32(ctx->r4, -0X3074);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F224: addiu       $a0, $a0, -0x3074
    ctx->r4 = ADD32(ctx->r4, -0X3074);
    after_0:
    // 0x8020F228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F22C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F230: jr          $ra
    // 0x8020F234: nop

    TRACE_RETURN()
    return;
    // 0x8020F234: nop

;}
RECOMP_FUNC void func_8021F154_5DA624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F154: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021F158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F15C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8021F160: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8021F164: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8021F168: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8021F16C: jal         0x80003EA0
    // 0x8021F170: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_0;
    // 0x8021F170: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    after_0:
    // 0x8021F174: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8021F178: jal         0x80003E10
    // 0x8021F17C: lhu         $a0, 0x2E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2E);
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x8021F17C: lhu         $a0, 0x2E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2E);
    after_1:
    // 0x8021F180: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021F184: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021F188: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8021F18C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8021F190: nop

    // 0x8021F194: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021F198: swc1        $f10, 0x78($t6)
    MEM_W(0X78, ctx->r14) = ctx->f10.u32l;
    // 0x8021F19C: jal         0x80003E10
    // 0x8021F1A0: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x8021F1A0: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    after_2:
    // 0x8021F1A4: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021F1A8: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
    // 0x8021F1AC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8021F1B0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8021F1B4: swc1        $f4, 0x7C($t7)
    MEM_W(0X7C, ctx->r15) = ctx->f4.u32l;
    // 0x8021F1B8: jal         0x80003EA0
    // 0x8021F1BC: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_3;
    // 0x8021F1BC: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    after_3:
    // 0x8021F1C0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8021F1C4: jal         0x80003EA0
    // 0x8021F1C8: lhu         $a0, 0x2E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2E);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_4;
    // 0x8021F1C8: lhu         $a0, 0x2E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2E);
    after_4:
    // 0x8021F1CC: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021F1D0: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021F1D4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8021F1D8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8021F1DC: nop

    // 0x8021F1E0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021F1E4: swc1        $f16, 0x80($t8)
    MEM_W(0X80, ctx->r24) = ctx->f16.u32l;
    // 0x8021F1E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F1EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021F1F0: jr          $ra
    // 0x8021F1F4: nop

    TRACE_RETURN()
    return;
    // 0x8021F1F4: nop

;}
RECOMP_FUNC void func_80214F2C_5D03FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214F2C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80214F30: jr          $ra
    // 0x80214F34: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80214F34: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80218A54_5D3F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218A54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80218A58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80218A5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80218A60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80218A64: lw          $a0, 0xC($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XC);
    // 0x80218A68: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x80218A6C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80218A70: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x80218A74: addiu       $a3, $a3, -0x3220
    ctx->r7 = ADD32(ctx->r7, -0X3220);
    // 0x80218A78: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80218A7C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80218A80: lhu         $a1, 0x40($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X40);
    // 0x80218A84: jal         0x80014840
    // 0x80218A88: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    func_80014840_15440(rdram, ctx);
        goto after_0;
    // 0x80218A88: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    after_0:
    // 0x80218A8C: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x80218A90: addiu       $a3, $a3, -0x3220
    ctx->r7 = ADD32(ctx->r7, -0X3220);
    // 0x80218A94: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x80218A98: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x80218A9C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80218AA0: lui         $t3, 0x8023
    ctx->r11 = S32(0X8023 << 16);
    // 0x80218AA4: sh          $t8, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r24;
    // 0x80218AA8: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x80218AAC: andi        $t2, $t8, 0xFFFF
    ctx->r10 = ctx->r24 & 0XFFFF;
    // 0x80218AB0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80218AB4: lhu         $t1, 0x0($t9)
    ctx->r9 = MEM_HU(ctx->r25, 0X0);
    // 0x80218AB8: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x80218ABC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80218AC0: sh          $t1, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r9;
    // 0x80218AC4: lbu         $t3, -0x601C($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X601C);
    // 0x80218AC8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80218ACC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80218AD0: sb          $t3, 0x77($s0)
    MEM_B(0X77, ctx->r16) = ctx->r11;
    // 0x80218AD4: sb          $t4, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r12;
    // 0x80218AD8: lh          $t5, 0x0($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X0);
    // 0x80218ADC: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x80218AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80218AE4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80218AE8: nop

    // 0x80218AEC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80218AF0: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x80218AF4: lh          $t6, 0x2($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X2);
    // 0x80218AF8: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80218AFC: nop

    // 0x80218B00: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80218B04: swc1        $f10, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f10.u32l;
    // 0x80218B08: lh          $t7, 0x4($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X4);
    // 0x80218B0C: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80218B10: nop

    // 0x80218B14: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80218B18: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
    // 0x80218B1C: lhu         $t8, 0x6($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X6);
    // 0x80218B20: sh          $t8, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r24;
    // 0x80218B24: lhu         $t9, 0x8($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X8);
    // 0x80218B28: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x80218B2C: sh          $t9, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r25;
    // 0x80218B30: lhu         $t1, 0xA($a2)
    ctx->r9 = MEM_HU(ctx->r6, 0XA);
    // 0x80218B34: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x80218B38: sh          $t1, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r9;
    // 0x80218B3C: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x80218B40: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x80218B44: sw          $t3, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r11;
    // 0x80218B48: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x80218B4C: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x80218B50: sw          $t5, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r13;
    // 0x80218B54: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80218B58: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x80218B5C: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x80218B60: sb          $t8, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r24;
    // 0x80218B64: sh          $zero, 0xA4($s0)
    MEM_H(0XA4, ctx->r16) = 0;
    // 0x80218B68: sb          $t9, 0x76($s0)
    MEM_B(0X76, ctx->r16) = ctx->r25;
    // 0x80218B6C: sh          $v0, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r2;
    // 0x80218B70: sw          $t7, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r15;
    // 0x80218B74: lbu         $t1, 0xD8($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XD8);
    // 0x80218B78: sb          $t1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r9;
    // 0x80218B7C: lbu         $t2, 0xD8($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0XD8);
    // 0x80218B80: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80218B84: sb          $t3, 0xD8($t0)
    MEM_B(0XD8, ctx->r8) = ctx->r11;
    // 0x80218B88: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x80218B8C: jal         0x80217144
    // 0x80218B90: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_80217144_5D2614(rdram, ctx);
        goto after_1;
    // 0x80218B90: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x80218B94: lbu         $t4, 0x99($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X99);
    // 0x80218B98: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80218B9C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80218BA0: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80218BA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80218BA8: bgez        $t4, L_80218BBC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80218BAC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80218BBC;
    }
    // 0x80218BAC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80218BB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80218BB4: nop

    // 0x80218BB8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80218BBC:
    // 0x80218BBC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80218BC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80218BC4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80218BC8: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80218BCC: swc1        $f16, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f16.u32l;
    // 0x80218BD0: lbu         $t5, 0x98($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X98);
    // 0x80218BD4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x80218BD8: bgez        $t5, L_80218BEC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80218BDC: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_80218BEC;
    }
    // 0x80218BDC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80218BE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80218BE4: nop

    // 0x80218BE8: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_80218BEC:
    // 0x80218BEC: jal         0x8021928C
    // 0x80218BF0: swc1        $f4, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = ctx->f4.u32l;
    func_8021928C_5D475C(rdram, ctx);
        goto after_2;
    // 0x80218BF0: swc1        $f4, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = ctx->f4.u32l;
    after_2:
    // 0x80218BF4: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80218BF8: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x80218BFC: jal         0x80035214
    // 0x80218C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80035214_35E14(rdram, ctx);
        goto after_3;
    // 0x80218C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80218C04: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80218C08: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x80218C0C: jal         0x80035244
    // 0x80218C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80035244_35E44(rdram, ctx);
        goto after_4;
    // 0x80218C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80218C14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80218C18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80218C1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80218C20: jr          $ra
    // 0x80218C24: nop

    TRACE_RETURN()
    return;
    // 0x80218C24: nop

;}
RECOMP_FUNC void func_80220ED0_5DC3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80220ED0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80220ED4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80220ED8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80220EDC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80220EE0: lui         $t7, 0x8023
    ctx->r15 = S32(0X8023 << 16);
    // 0x80220EE4: addiu       $t7, $t7, 0x7AE8
    ctx->r15 = ADD32(ctx->r15, 0X7AE8);
    // 0x80220EE8: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80220EEC: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x80220EF0: sw          $t6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r14;
    // 0x80220EF4: sw          $t7, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r15;
    // 0x80220EF8: sw          $t8, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r24;
    // 0x80220EFC: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x80220F00: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80220F04: andi        $t1, $a3, 0xFF
    ctx->r9 = ctx->r7 & 0XFF;
    // 0x80220F08: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x80220F0C: sll         $t0, $a2, 24
    ctx->r8 = S32(ctx->r6 << 24);
    // 0x80220F10: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x80220F14: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x80220F18: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x80220F1C: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x80220F20: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x80220F24: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80220F28: or          $t1, $t7, $t9
    ctx->r9 = ctx->r15 | ctx->r25;
    // 0x80220F2C: lui         $t0, 0xB800
    ctx->r8 = S32(0XB800 << 16);
    // 0x80220F30: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x80220F34: sw          $t1, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r9;
    // 0x80220F38: sw          $t0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r8;
    // 0x80220F3C: sw          $zero, 0x94($a0)
    MEM_W(0X94, ctx->r4) = 0;
    // 0x80220F40: addiu       $t9, $t9, 0x620
    ctx->r25 = ADD32(ctx->r25, 0X620);
    // 0x80220F44: subu        $a1, $s0, $s0
    ctx->r5 = SUB32(ctx->r16, ctx->r16);
    // 0x80220F48: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x80220F4C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80220F50: jalr        $t9
    // 0x80220F54: addiu       $a1, $a1, -0x18
    ctx->r5 = ADD32(ctx->r5, -0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80220F54: addiu       $a1, $a1, -0x18
    ctx->r5 = ADD32(ctx->r5, -0X18);
    after_0:
    // 0x80220F58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80220F5C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80220F60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80220F64: jr          $ra
    // 0x80220F68: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80220F68: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80223E9C_5DF36C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80223E9C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80223EA0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80223EA4: lui         $s0, 0x8007
    ctx->r16 = S32(0X8007 << 16);
    // 0x80223EA8: lw          $s0, 0x7860($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X7860);
    // 0x80223EAC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80223EB0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80223EB4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80223EB8: bne         $s0, $zero, L_80223EC8
    if (ctx->r16 != 0) {
        // 0x80223EBC: sw          $a2, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r6;
            goto L_80223EC8;
    }
    // 0x80223EBC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80223EC0: b           L_80223FF8
    // 0x80223EC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80223FF8;
    // 0x80223EC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80223EC8:
    // 0x80223EC8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80223ECC: lwc1        $f2, -0x546C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X546C);
    // 0x80223ED0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80223ED4: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80223ED8: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x80223EDC: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x80223EE0: addiu       $a1, $a1, 0x43B4
    ctx->r5 = ADD32(ctx->r5, 0X43B4);
    // 0x80223EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80223EE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80223EEC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80223EF0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80223EF4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80223EF8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80223EFC: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80223F00: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x80223F04: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x80223F08: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x80223F0C: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x80223F10: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80223F14: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80223F18: jal         0x80035690
    // 0x80223F1C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_80035690_36290(rdram, ctx);
        goto after_0;
    // 0x80223F1C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x80223F20: bne         $v0, $zero, L_80223F30
    if (ctx->r2 != 0) {
        // 0x80223F24: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80223F30;
    }
    // 0x80223F24: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80223F28: b           L_80223FF8
    // 0x80223F2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80223FF8;
    // 0x80223F2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80223F30:
    // 0x80223F30: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80223F34: sw          $t6, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r14;
    // 0x80223F38: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80223F3C: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80223F40: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80223F44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80223F48: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80223F4C: sb          $a0, -0x51DD($at)
    MEM_B(-0X51DD, ctx->r1) = ctx->r4;
    // 0x80223F50: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80223F54: addiu       $v1, $v1, -0x39FC
    ctx->r3 = ADD32(ctx->r3, -0X39FC);
    // 0x80223F58: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80223F5C: lwc1        $f4, -0x5468($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5468);
    // 0x80223F60: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80223F64: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80223F68: swc1        $f4, 0xE4($t8)
    MEM_W(0XE4, ctx->r24) = ctx->f4.u32l;
    // 0x80223F6C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80223F70: lwc1        $f6, -0x5464($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5464);
    // 0x80223F74: swc1        $f6, 0xE8($t9)
    MEM_W(0XE8, ctx->r25) = ctx->f6.u32l;
    // 0x80223F78: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80223F7C: sw          $t0, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r8;
    // 0x80223F80: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80223F84: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80223F88: bnel        $t1, $t2, L_80223F9C
    if (ctx->r9 != ctx->r10) {
        // 0x80223F8C: sh          $a0, 0x9C($v0)
        MEM_H(0X9C, ctx->r2) = ctx->r4;
            goto L_80223F9C;
    }
    goto skip_0;
    // 0x80223F8C: sh          $a0, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = ctx->r4;
    skip_0:
    // 0x80223F90: b           L_80223F9C
    // 0x80223F94: sh          $zero, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = 0;
        goto L_80223F9C;
    // 0x80223F94: sh          $zero, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = 0;
    // 0x80223F98: sh          $a0, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = ctx->r4;
L_80223F9C:
    // 0x80223F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80223FA0: jal         0x80225BB8
    // 0x80223FA4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_80225BB8_5E1088(rdram, ctx);
        goto after_1;
    // 0x80223FA4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_1:
    // 0x80223FA8: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x80223FAC: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x80223FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80223FB4: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80223FB8: sw          $v0, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r2;
    // 0x80223FBC: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80223FC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80223FC4: lw          $v1, 0x18($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X18);
    // 0x80223FC8: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80223FCC: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    // 0x80223FD0: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80223FD4: swc1        $f10, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f10.u32l;
    // 0x80223FD8: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80223FDC: jal         0x80035214
    // 0x80223FE0: swc1        $f16, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f16.u32l;
    func_80035214_35E14(rdram, ctx);
        goto after_2;
    // 0x80223FE0: swc1        $f16, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f16.u32l;
    after_2:
    // 0x80223FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80223FE8: jal         0x80035244
    // 0x80223FEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80035244_35E44(rdram, ctx);
        goto after_3;
    // 0x80223FEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80223FF0: sh          $zero, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = 0;
    // 0x80223FF4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80223FF8:
    // 0x80223FF8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80223FFC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80224000: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80224004: jr          $ra
    // 0x80224008: nop

    TRACE_RETURN()
    return;
    // 0x80224008: nop

;}
RECOMP_FUNC void func_80213C5C_5CF12C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213C5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213C60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213C64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80213C68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80213C6C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x80213C70: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80213C74: beq         $v0, $zero, L_80213C84
    if (ctx->r2 == 0) {
        // 0x80213C78: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_80213C84;
    }
    // 0x80213C78: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80213C7C: b           L_80213C9C
    // 0x80213C80: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
        goto L_80213C9C;
    // 0x80213C80: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
L_80213C84:
    // 0x80213C84: lw          $t7, 0x64($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X64);
    // 0x80213C88: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80213C8C: addiu       $a0, $a0, 0x3CAC
    ctx->r4 = ADD32(ctx->r4, 0X3CAC);
    // 0x80213C90: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x80213C94: jal         0x8003521C
    // 0x80213C98: sw          $t8, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80213C98: sw          $t8, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->r24;
    after_0:
L_80213C9C:
    // 0x80213C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213CA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80213CA4: jr          $ra
    // 0x80213CA8: nop

    TRACE_RETURN()
    return;
    // 0x80213CA8: nop

;}
RECOMP_FUNC void func_80221638_5DCB08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221638: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022163C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80221640: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80221644: sw          $a2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r6;
    // 0x80221648: jal         0x80220FF0
    // 0x8022164C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80220FF0_5DC4C0(rdram, ctx);
        goto after_0;
    // 0x8022164C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80221650: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80221654: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80221658: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x8022165C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80221660: swc1        $f0, 0x80($a3)
    MEM_W(0X80, ctx->r7) = ctx->f0.u32l;
    // 0x80221664: swc1        $f0, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f0.u32l;
    // 0x80221668: swc1        $f0, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f0.u32l;
    // 0x8022166C: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x80221670: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x80221674: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80221678: sh          $t6, 0xC4($a3)
    MEM_H(0XC4, ctx->r7) = ctx->r14;
    // 0x8022167C: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x80221680: addiu       $t9, $t9, 0x16B8
    ctx->r25 = ADD32(ctx->r25, 0X16B8);
    // 0x80221684: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80221688: sw          $t7, 0xEC($a3)
    MEM_W(0XEC, ctx->r7) = ctx->r15;
    // 0x8022168C: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x80221690: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x80221694: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80221698: sw          $a3, -0x764($at)
    MEM_W(-0X764, ctx->r1) = ctx->r7;
    // 0x8022169C: jal         0x8003521C
    // 0x802216A0: sw          $t9, 0xBC($a3)
    MEM_W(0XBC, ctx->r7) = ctx->r25;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x802216A0: sw          $t9, 0xBC($a3)
    MEM_W(0XBC, ctx->r7) = ctx->r25;
    after_1:
    // 0x802216A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802216A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802216AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802216B0: jr          $ra
    // 0x802216B4: nop

    TRACE_RETURN()
    return;
    // 0x802216B4: nop

;}
RECOMP_FUNC void func_802151E0_5D06B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802151E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802151E4: lwc1        $f0, -0x5DCC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5DCC);
    // 0x802151E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802151EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802151F0: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x802151F4: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x802151F8: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x802151FC: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x80215200: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x80215204: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x80215208: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8021520C: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x80215210: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x80215214: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80215218: jal         0x8003521C
    // 0x8021521C: addiu       $a0, $a0, 0x5230
    ctx->r4 = ADD32(ctx->r4, 0X5230);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x8021521C: addiu       $a0, $a0, 0x5230
    ctx->r4 = ADD32(ctx->r4, 0X5230);
    after_0:
    // 0x80215220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80215224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80215228: jr          $ra
    // 0x8021522C: nop

    TRACE_RETURN()
    return;
    // 0x8021522C: nop

;}
RECOMP_FUNC void func_8020FE50_5CB320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FE50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FE54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FE58: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FE5C: jal         0x80013AC4
    // 0x8020FE60: addiu       $a0, $a0, -0x2650
    ctx->r4 = ADD32(ctx->r4, -0X2650);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FE60: addiu       $a0, $a0, -0x2650
    ctx->r4 = ADD32(ctx->r4, -0X2650);
    after_0:
    // 0x8020FE64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FE68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FE6C: jr          $ra
    // 0x8020FE70: nop

    TRACE_RETURN()
    return;
    // 0x8020FE70: nop

;}
RECOMP_FUNC void func_801D6B14_601EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6B14: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D6B18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D6B1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D6B20: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D6B24: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x801D6B28: jal         0x801D6CB0
    // 0x801D6B2C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    func_801D6CB0_602090(rdram, ctx);
        goto after_0;
    // 0x801D6B2C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x801D6B30: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x801D6B34: jal         0x801D600C
    // 0x801D6B38: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D600C_6013EC(rdram, ctx);
        goto after_1;
    // 0x801D6B38: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801D6B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D6B40: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x801D6B44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D6B48: jr          $ra
    // 0x801D6B4C: nop

    TRACE_RETURN()
    return;
    // 0x801D6B4C: nop

;}
RECOMP_FUNC void func_801D641C_6017FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D641C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D6420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D6424: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D6428: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801D642C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801D6430: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D6434: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801D6438: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801D643C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D6440: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D6444: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x801D6448: nop

    // 0x801D644C: bc1fl       L_801D6460
    if (!c1cs) {
        // 0x801D6450: mov.s       $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
            goto L_801D6460;
    }
    goto skip_0;
    // 0x801D6450: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    skip_0:
    // 0x801D6454: b           L_801D6460
    // 0x801D6458: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
        goto L_801D6460;
    // 0x801D6458: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
    // 0x801D645C: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
L_801D6460:
    // 0x801D6460: lwc1        $f0, 0x78($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801D6464: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801D6468: nop

    // 0x801D646C: bc1fl       L_801D6480
    if (!c1cs) {
        // 0x801D6470: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_801D6480;
    }
    goto skip_1;
    // 0x801D6470: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_1:
    // 0x801D6474: b           L_801D6480
    // 0x801D6478: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_801D6480;
    // 0x801D6478: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    // 0x801D647C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_801D6480:
    // 0x801D6480: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x801D6484: nop

    // 0x801D6488: bc1fl       L_801D64F8
    if (!c1cs) {
        // 0x801D648C: swc1        $f18, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
            goto L_801D64F8;
    }
    goto skip_2;
    // 0x801D648C: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
    skip_2:
    // 0x801D6490: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x801D6494: nop

    // 0x801D6498: bc1fl       L_801D64C8
    if (!c1cs) {
        // 0x801D649C: c.lt.s      $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
            goto L_801D64C8;
    }
    goto skip_3;
    // 0x801D649C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    skip_3:
    // 0x801D64A0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801D64A4: nop

    // 0x801D64A8: bc1f        L_801D64BC
    if (!c1cs) {
        // 0x801D64AC: nop
    
            goto L_801D64BC;
    }
    // 0x801D64AC: nop

    // 0x801D64B0: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x801D64B4: b           L_801D64E4
    // 0x801D64B8: swc1        $f8, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f8.u32l;
        goto L_801D64E4;
    // 0x801D64B8: swc1        $f8, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f8.u32l;
L_801D64BC:
    // 0x801D64BC: b           L_801D64E4
    // 0x801D64C0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
        goto L_801D64E4;
    // 0x801D64C0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x801D64C4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
L_801D64C8:
    // 0x801D64C8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801D64CC: bc1fl       L_801D64E4
    if (!c1cs) {
        // 0x801D64D0: swc1        $f2, 0x78($a0)
        MEM_W(0X78, ctx->r4) = ctx->f2.u32l;
            goto L_801D64E4;
    }
    goto skip_4;
    // 0x801D64D0: swc1        $f2, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f2.u32l;
    skip_4:
    // 0x801D64D4: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    // 0x801D64D8: b           L_801D64E4
    // 0x801D64DC: swc1        $f10, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f10.u32l;
        goto L_801D64E4;
    // 0x801D64DC: swc1        $f10, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f10.u32l;
    // 0x801D64E0: swc1        $f2, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f2.u32l;
L_801D64E4:
    // 0x801D64E4: jal         0x801D606C
    // 0x801D64E8: nop

    func_801D606C_60144C(rdram, ctx);
        goto after_0;
    // 0x801D64E8: nop

    after_0:
    // 0x801D64EC: b           L_801D64F8
    // 0x801D64F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D64F8;
    // 0x801D64F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D64F4: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
L_801D64F8:
    // 0x801D64F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D64FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D6500: jr          $ra
    // 0x801D6504: nop

    TRACE_RETURN()
    return;
    // 0x801D6504: nop

;}
RECOMP_FUNC void func_801F2ED8_61E2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2ED8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F2EDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F2EE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F2EE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F2EE8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F2EEC: jal         0x801D3018
    // 0x801F2EF0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F2EF0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F2EF4: jal         0x801F76D0
    // 0x801F2EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F2EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F2EFC: jal         0x801D614C
    // 0x801F2F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_2;
    // 0x801F2F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F2F04: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F2F08: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F2F0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801F2F10: jal         0x8000ED00
    // 0x801F2F14: lw          $a0, 0x1CC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1CC);
    func_8000ED00_F900(rdram, ctx);
        goto after_3;
    // 0x801F2F14: lw          $a0, 0x1CC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1CC);
    after_3:
    // 0x801F2F18: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x801F2F1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F2F20: lui         $at, 0xC014
    ctx->r1 = S32(0XC014 << 16);
    // 0x801F2F24: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x801F2F28: nop

    // 0x801F2F2C: bc1fl       L_801F2F90
    if (!c1cs) {
        // 0x801F2F30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F2F90;
    }
    goto skip_0;
    // 0x801F2F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F2F34: lwc1        $f6, 0x70($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801F2F38: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801F2F3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F2F40: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801F2F44: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801F2F48: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F2F4C: div.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x801F2F50: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F2F54: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F2F58: addiu       $a1, $a1, -0x4D90
    ctx->r5 = ADD32(ctx->r5, -0X4D90);
    // 0x801F2F5C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F2F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F2F64: swc1        $f18, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f18.u32l;
    // 0x801F2F68: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x801F2F6C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F2F70: swc1        $f16, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f16.u32l;
    // 0x801F2F74: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801F2F78: jal         0x801D31CC
    // 0x801F2F7C: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_4;
    // 0x801F2F7C: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    after_4:
    // 0x801F2F80: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F2F84: jal         0x8003521C
    // 0x801F2F88: addiu       $a0, $a0, 0x2FA0
    ctx->r4 = ADD32(ctx->r4, 0X2FA0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F2F88: addiu       $a0, $a0, 0x2FA0
    ctx->r4 = ADD32(ctx->r4, 0X2FA0);
    after_5:
    // 0x801F2F8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F2F90:
    // 0x801F2F90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F2F94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F2F98: jr          $ra
    // 0x801F2F9C: nop

    TRACE_RETURN()
    return;
    // 0x801F2F9C: nop

;}
RECOMP_FUNC void func_801E67D4_611BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E67D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E67D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E67DC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E67E0: jal         0x801EF268
    // 0x801E67E4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801EF268_61A648(rdram, ctx);
        goto after_0;
    // 0x801E67E4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E67E8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E67EC: addiu       $a1, $a1, -0x4E88
    ctx->r5 = ADD32(ctx->r5, -0X4E88);
    // 0x801E67F0: jal         0x801D31CC
    // 0x801E67F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801E67F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801E67F8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E67FC: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E6800: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801E6804: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E6808: jal         0x801D34D0
    // 0x801E680C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_2;
    // 0x801E680C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x801E6810: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x801E6814: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x801E6818: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E681C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E6820: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801E6824: lui         $a3, 0xC483
    ctx->r7 = S32(0XC483 << 16);
    // 0x801E6828: lw          $a2, 0xC($t6)
    ctx->r6 = MEM_W(ctx->r14, 0XC);
    // 0x801E682C: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x801E6830: jal         0x8000E39C
    // 0x801E6834: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x801E6834: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_3:
    // 0x801E6838: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E683C: jal         0x8003521C
    // 0x801E6840: addiu       $a0, $a0, 0x6854
    ctx->r4 = ADD32(ctx->r4, 0X6854);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E6840: addiu       $a0, $a0, 0x6854
    ctx->r4 = ADD32(ctx->r4, 0X6854);
    after_4:
    // 0x801E6844: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E6848: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E684C: jr          $ra
    // 0x801E6850: nop

    TRACE_RETURN()
    return;
    // 0x801E6850: nop

;}
RECOMP_FUNC void func_801FBB74_626F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FBB74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FBB78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FBB7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FBB80: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801FBB84: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801FBB88: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801FBB8C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801FBB90: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801FBB94: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FBB98: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x801FBB9C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801FBBA0: swc1        $f16, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f16.u32l;
    // 0x801FBBA4: jal         0x801D2F40
    // 0x801FBBA8: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801FBBA8: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x801FBBAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FBBB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FBBB4: jr          $ra
    // 0x801FBBB8: nop

    TRACE_RETURN()
    return;
    // 0x801FBBB8: nop

;}
RECOMP_FUNC void func_801F331C_61E6FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F331C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F3320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F3324: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801F3328: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801F332C: lwc1        $f4, 0x90($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801F3330: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801F3334: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801F3338: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F333C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F3340: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801F3344: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801F3348: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801F334C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801F3350: lui         $a1, 0xC220
    ctx->r5 = S32(0XC220 << 16);
    // 0x801F3354: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F3358: swc1        $f16, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f16.u32l;
    // 0x801F335C: lwc1        $f0, 0x90($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801F3360: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801F3364: nop

    // 0x801F3368: bc1fl       L_801F337C
    if (!c1cs) {
        // 0x801F336C: lhu         $t6, 0x16($a3)
        ctx->r14 = MEM_HU(ctx->r7, 0X16);
            goto L_801F337C;
    }
    goto skip_0;
    // 0x801F336C: lhu         $t6, 0x16($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X16);
    skip_0:
    // 0x801F3370: swc1        $f2, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f2.u32l;
    // 0x801F3374: lwc1        $f0, 0x90($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801F3378: lhu         $t6, 0x16($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X16);
L_801F337C:
    // 0x801F337C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801F3380: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x801F3384: bgez        $t6, L_801F3398
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801F3388: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_801F3398;
    }
    // 0x801F3388: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801F338C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F3390: nop

    // 0x801F3394: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_801F3398:
    // 0x801F3398: add.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801F339C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F33A0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F33A4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801F33A8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801F33AC: nop

    // 0x801F33B0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801F33B4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801F33B8: nop

    // 0x801F33BC: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801F33C0: beql        $t8, $zero, L_801F3410
    if (ctx->r24 == 0) {
        // 0x801F33C4: mfc1        $t8, $f10
        ctx->r24 = (int32_t)ctx->f10.u32l;
            goto L_801F3410;
    }
    goto skip_1;
    // 0x801F33C4: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x801F33C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F33CC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F33D0: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801F33D4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801F33D8: nop

    // 0x801F33DC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801F33E0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801F33E4: nop

    // 0x801F33E8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801F33EC: bne         $t8, $zero, L_801F3404
    if (ctx->r24 != 0) {
        // 0x801F33F0: nop
    
            goto L_801F3404;
    }
    // 0x801F33F0: nop

    // 0x801F33F4: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x801F33F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F33FC: b           L_801F341C
    // 0x801F3400: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_801F341C;
    // 0x801F3400: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_801F3404:
    // 0x801F3404: b           L_801F341C
    // 0x801F3408: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_801F341C;
    // 0x801F3408: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x801F340C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
L_801F3410:
    // 0x801F3410: nop

    // 0x801F3414: bltz        $t8, L_801F3404
    if (SIGNED(ctx->r24) < 0) {
        // 0x801F3418: nop
    
            goto L_801F3404;
    }
    // 0x801F3418: nop

L_801F341C:
    // 0x801F341C: sh          $t8, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r24;
    // 0x801F3420: lw          $t9, 0x7C($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X7C);
    // 0x801F3424: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801F3428: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801F342C: bgtz        $t0, L_801F3488
    if (SIGNED(ctx->r8) > 0) {
        // 0x801F3430: sw          $t0, 0x7C($a2)
        MEM_W(0X7C, ctx->r6) = ctx->r8;
            goto L_801F3488;
    }
    // 0x801F3430: sw          $t0, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r8;
    // 0x801F3434: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801F3438: jal         0x801D2F40
    // 0x801F343C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801F343C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x801F3440: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F3444: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801F3448: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F344C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x801F3450: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F3454: c.le.d      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.d <= ctx->f16.d;
    // 0x801F3458: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801F345C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F3460: addiu       $t2, $zero, 0xC8
    ctx->r10 = ADD32(0, 0XC8);
    // 0x801F3464: bc1f        L_801F3488
    if (!c1cs) {
        // 0x801F3468: addiu       $t3, $zero, 0x15
        ctx->r11 = ADD32(0, 0X15);
            goto L_801F3488;
    }
    // 0x801F3468: addiu       $t3, $zero, 0x15
    ctx->r11 = ADD32(0, 0X15);
    // 0x801F346C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F3470: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3474: addiu       $a0, $a0, 0x3498
    ctx->r4 = ADD32(ctx->r4, 0X3498);
    // 0x801F3478: swc1        $f6, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f6.u32l;
    // 0x801F347C: sw          $t2, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r10;
    // 0x801F3480: jal         0x8003521C
    // 0x801F3484: sw          $t3, 0xD8($a2)
    MEM_W(0XD8, ctx->r6) = ctx->r11;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801F3484: sw          $t3, 0xD8($a2)
    MEM_W(0XD8, ctx->r6) = ctx->r11;
    after_1:
L_801F3488:
    // 0x801F3488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F348C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F3490: jr          $ra
    // 0x801F3494: nop

    TRACE_RETURN()
    return;
    // 0x801F3494: nop

;}
RECOMP_FUNC void func_801FE3C0_6297A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FE3C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FE3C4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801FE3C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FE3CC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FE3D0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x801FE3D4: jal         0x801D2F40
    // 0x801FE3D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801FE3D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801FE3DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801FE3E0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801FE3E4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801FE3E8: nop

    // 0x801FE3EC: bc1fl       L_801FE464
    if (!c1cs) {
        // 0x801FE3F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FE464;
    }
    goto skip_0;
    // 0x801FE3F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801FE3F4: jal         0x801D3A18
    // 0x801FE3F8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_1;
    // 0x801FE3F8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x801FE3FC: beq         $v0, $zero, L_801FE428
    if (ctx->r2 == 0) {
        // 0x801FE400: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_801FE428;
    }
    // 0x801FE400: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801FE404: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FE408: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801FE40C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801FE410: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FE414: addiu       $a0, $a0, -0x4960
    ctx->r4 = ADD32(ctx->r4, -0X4960);
    // 0x801FE418: jal         0x8003521C
    // 0x801FE41C: sb          $t6, 0x2C4($t7)
    MEM_B(0X2C4, ctx->r15) = ctx->r14;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801FE41C: sb          $t6, 0x2C4($t7)
    MEM_B(0X2C4, ctx->r15) = ctx->r14;
    after_2:
    // 0x801FE420: b           L_801FE464
    // 0x801FE424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FE464;
    // 0x801FE424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FE428:
    // 0x801FE428: lw          $t8, 0xE8($a2)
    ctx->r24 = MEM_W(ctx->r6, 0XE8);
    // 0x801FE42C: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x801FE430: bne         $at, $zero, L_801FE458
    if (ctx->r1 != 0) {
        // 0x801FE434: nop
    
            goto L_801FE458;
    }
    // 0x801FE434: nop

    // 0x801FE438: sw          $zero, 0xE8($a2)
    MEM_W(0XE8, ctx->r6) = 0;
    // 0x801FE43C: jal         0x801FFE34
    // 0x801FE440: sw          $zero, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = 0;
    func_801FFE34_62B214(rdram, ctx);
        goto after_3;
    // 0x801FE440: sw          $zero, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = 0;
    after_3:
    // 0x801FE444: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FE448: jal         0x8003521C
    // 0x801FE44C: addiu       $a0, $a0, -0x8D0
    ctx->r4 = ADD32(ctx->r4, -0X8D0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801FE44C: addiu       $a0, $a0, -0x8D0
    ctx->r4 = ADD32(ctx->r4, -0X8D0);
    after_4:
    // 0x801FE450: b           L_801FE464
    // 0x801FE454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FE464;
    // 0x801FE454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FE458:
    // 0x801FE458: jal         0x801FC3FC
    // 0x801FE45C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801FC3FC_6277DC(rdram, ctx);
        goto after_5;
    // 0x801FE45C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_5:
    // 0x801FE460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FE464:
    // 0x801FE464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FE468: jr          $ra
    // 0x801FE46C: nop

    TRACE_RETURN()
    return;
    // 0x801FE46C: nop

;}
RECOMP_FUNC void func_801D3534_5FE914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D3538: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801D353C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x801D3540: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801D3544: beq         $a0, $zero, L_801D3554
    if (ctx->r4 == 0) {
        // 0x801D3548: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_801D3554;
    }
    // 0x801D3548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D354C: jal         0x801D32D4
    // 0x801D3550: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    func_801D32D4_5FE6B4(rdram, ctx);
        goto after_0;
    // 0x801D3550: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    after_0:
L_801D3554:
    // 0x801D3554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D3558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D355C: jr          $ra
    // 0x801D3560: nop

    TRACE_RETURN()
    return;
    // 0x801D3560: nop

;}
RECOMP_FUNC void func_801E332C_60E70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E332C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801E3330: addiu       $v1, $v1, -0x1100
    ctx->r3 = ADD32(ctx->r3, -0X1100);
    // 0x801E3334: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801E3338: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E333C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x801E3340: beq         $v0, $zero, L_801E3358
    if (ctx->r2 == 0) {
        // 0x801E3344: nop
    
            goto L_801E3358;
    }
    // 0x801E3344: nop

    // 0x801E3348: sb          $t6, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r14;
    // 0x801E334C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801E3350: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801E3354: sb          $t7, 0xD($t8)
    MEM_B(0XD, ctx->r24) = ctx->r15;
L_801E3358:
    // 0x801E3358: jr          $ra
    // 0x801E335C: nop

    TRACE_RETURN()
    return;
    // 0x801E335C: nop

;}
RECOMP_FUNC void func_801D32A8_5FE688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D32A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D32AC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D32B0: beq         $a0, $zero, L_801D32C4
    if (ctx->r4 == 0) {
        // 0x801D32B4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_801D32C4;
    }
    // 0x801D32B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D32B8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x801D32BC: jal         0x801D3100
    // 0x801D32C0: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    func_801D3100_5FE4E0(rdram, ctx);
        goto after_0;
    // 0x801D32C0: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    after_0:
L_801D32C4:
    // 0x801D32C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D32C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D32CC: jr          $ra
    // 0x801D32D0: nop

    TRACE_RETURN()
    return;
    // 0x801D32D0: nop

;}
RECOMP_FUNC void func_80206990_631D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80206990: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x80206994: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80206998: addiu       $a2, $a2, 0x8B0
    ctx->r6 = ADD32(ctx->r6, 0X8B0);
    // 0x8020699C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802069A0: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x802069A4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802069A8: lwc1        $f4, -0x1180($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1180);
    // 0x802069AC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802069B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802069B4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802069B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802069BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802069C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802069C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802069C8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802069CC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802069D0: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x802069D4: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x802069D8: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x802069DC: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x802069E0: addiu       $t9, $zero, 0x4B6
    ctx->r25 = ADD32(0, 0X4B6);
    // 0x802069E4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x802069E8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x802069EC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802069F0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802069F4: addiu       $a3, $a3, -0x5238
    ctx->r7 = ADD32(ctx->r7, -0X5238);
    // 0x802069F8: addiu       $a1, $a1, 0x6AA4
    ctx->r5 = ADD32(ctx->r5, 0X6AA4);
    // 0x802069FC: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80206A00: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80206A04: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x80206A08: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x80206A0C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80206A10: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80206A14: jal         0x800358E8
    // 0x80206A18: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x80206A18: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80206A1C: beq         $v0, $zero, L_80206A94
    if (ctx->r2 == 0) {
        // 0x80206A20: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80206A94;
    }
    // 0x80206A20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80206A24: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80206A28: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80206A2C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80206A30: sb          $t0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r8;
    // 0x80206A34: sw          $zero, 0x90($a0)
    MEM_W(0X90, ctx->r4) = 0;
    // 0x80206A38: sw          $zero, 0x98($a0)
    MEM_W(0X98, ctx->r4) = 0;
    // 0x80206A3C: addiu       $t1, $zero, 0x4C
    ctx->r9 = ADD32(0, 0X4C);
    // 0x80206A40: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80206A44: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80206A48: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80206A4C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80206A50: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80206A54: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80206A58: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80206A5C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80206A60: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80206A64: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80206A68: addiu       $a1, $a1, -0x5238
    ctx->r5 = ADD32(ctx->r5, -0X5238);
    // 0x80206A6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80206A70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80206A74: jal         0x8000E030
    // 0x80206A78: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_8000E030_EC30(rdram, ctx);
        goto after_1;
    // 0x80206A78: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_1:
    // 0x80206A7C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80206A80: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80206A84: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x80206A88: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80206A8C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80206A90: sw          $t7, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r15;
L_80206A94:
    // 0x80206A94: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80206A98: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80206A9C: jr          $ra
    // 0x80206AA0: nop

    TRACE_RETURN()
    return;
    // 0x80206AA0: nop

;}
RECOMP_FUNC void func_801F2A98_61DE78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2A98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F2A9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F2AA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F2AA4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801F2AA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F2AAC: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801F2AB0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801F2AB4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F2AB8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801F2ABC: jal         0x801D3B18
    // 0x801F2AC0: nop

    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_0;
    // 0x801F2AC0: nop

    after_0:
    // 0x801F2AC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F2AC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F2ACC: jal         0x801D3F00
    // 0x801F2AD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_1;
    // 0x801F2AD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x801F2AD4: lui         $a1, 0xBE99
    ctx->r5 = S32(0XBE99 << 16);
    // 0x801F2AD8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801F2ADC: jal         0x801D6508
    // 0x801F2AE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D6508_6018E8(rdram, ctx);
        goto after_2;
    // 0x801F2AE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801F2AE4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801F2AE8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801F2AEC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F2AF0: lwc1        $f16, 0x74($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X74);
    // 0x801F2AF4: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x801F2AF8: nop

    // 0x801F2AFC: bc1fl       L_801F2B10
    if (!c1cs) {
        // 0x801F2B00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F2B10;
    }
    goto skip_0;
    // 0x801F2B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F2B04: jal         0x8003521C
    // 0x801F2B08: addiu       $a0, $a0, 0x2B1C
    ctx->r4 = ADD32(ctx->r4, 0X2B1C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F2B08: addiu       $a0, $a0, 0x2B1C
    ctx->r4 = ADD32(ctx->r4, 0X2B1C);
    after_3:
    // 0x801F2B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F2B10:
    // 0x801F2B10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F2B14: jr          $ra
    // 0x801F2B18: nop

    TRACE_RETURN()
    return;
    // 0x801F2B18: nop

;}
RECOMP_FUNC void func_801D4338_5FF718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4338: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x801D433C: lw          $t6, -0x70A0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X70A0);
    // 0x801D4340: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801D4344: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801D4348: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801D434C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D4350: bne         $t6, $zero, L_801D4360
    if (ctx->r14 != 0) {
        // 0x801D4354: sw          $a0, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r4;
            goto L_801D4360;
    }
    // 0x801D4354: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x801D4358: b           L_801D43F8
    // 0x801D435C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D43F8;
    // 0x801D435C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4360:
    // 0x801D4360: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x801D4364: lw          $t7, -0x709C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X709C);
    // 0x801D4368: bne         $t7, $zero, L_801D4378
    if (ctx->r15 != 0) {
        // 0x801D436C: nop
    
            goto L_801D4378;
    }
    // 0x801D436C: nop

    // 0x801D4370: b           L_801D43F8
    // 0x801D4374: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D43F8;
    // 0x801D4374: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4378:
    // 0x801D4378: bne         $a1, $zero, L_801D4388
    if (ctx->r5 != 0) {
        // 0x801D437C: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_801D4388;
    }
    // 0x801D437C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D4380: b           L_801D43F8
    // 0x801D4384: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D43F8;
    // 0x801D4384: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4388:
    // 0x801D4388: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D438C: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x801D4390: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801D4394: lw          $a0, 0x20($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X20);
    // 0x801D4398: sw          $a1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r5;
    // 0x801D439C: jal         0x801D3FCC
    // 0x801D43A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_801D3FCC_5FF3AC(rdram, ctx);
        goto after_0;
    // 0x801D43A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801D43A4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x801D43A8: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x801D43AC: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x801D43B0: lw          $a0, 0x24($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X24);
    // 0x801D43B4: jal         0x801D3FCC
    // 0x801D43B8: sb          $v0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r2;
    func_801D3FCC_5FF3AC(rdram, ctx);
        goto after_1;
    // 0x801D43B8: sb          $v0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r2;
    after_1:
    // 0x801D43BC: lbu         $v1, 0x1B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1B);
    // 0x801D43C0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x801D43C4: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x801D43C8: or          $t9, $v1, $v0
    ctx->r25 = ctx->r3 | ctx->r2;
    // 0x801D43CC: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    // 0x801D43D0: sb          $t9, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r25;
    // 0x801D43D4: jal         0x801D3FCC
    // 0x801D43D8: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    func_801D3FCC_5FF3AC(rdram, ctx);
        goto after_2;
    // 0x801D43D8: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    after_2:
    // 0x801D43DC: lbu         $v1, 0x1B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1B);
    // 0x801D43E0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x801D43E4: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x801D43E8: beq         $t1, $zero, L_801D43F8
    if (ctx->r9 == 0) {
        // 0x801D43EC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D43F8;
    }
    // 0x801D43EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D43F0: b           L_801D43F8
    // 0x801D43F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D43F8;
    // 0x801D43F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D43F8:
    // 0x801D43F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D43FC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801D4400: jr          $ra
    // 0x801D4404: nop

    TRACE_RETURN()
    return;
    // 0x801D4404: nop

;}
RECOMP_FUNC void func_80202BE4_62DFC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80202BE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80202BE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80202BEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80202BF0: jal         0x80203F88
    // 0x80202BF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80203F88_62F368(rdram, ctx);
        goto after_0;
    // 0x80202BF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80202BF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80202BFC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80202C00: ldc1        $f0, -0x1328($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X1328);
    // 0x80202C04: lwc1        $f4, 0xBC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x80202C08: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80202C0C: addiu       $v1, $v1, -0x10C0
    ctx->r3 = ADD32(ctx->r3, -0X10C0);
    // 0x80202C10: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80202C14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80202C18: c.eq.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d == ctx->f6.d;
    // 0x80202C1C: nop

    // 0x80202C20: bc1fl       L_80202C48
    if (!c1cs) {
        // 0x80202C24: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_80202C48;
    }
    goto skip_0;
    // 0x80202C24: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x80202C28: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80202C2C: addiu       $v1, $v1, -0x10C0
    ctx->r3 = ADD32(ctx->r3, -0X10C0);
    // 0x80202C30: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80202C34: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x80202C38: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80202C3C: b           L_80202C54
    // 0x80202C40: sb          $t7, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r15;
        goto L_80202C54;
    // 0x80202C40: sb          $t7, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r15;
    // 0x80202C44: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_80202C48:
    // 0x80202C48: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x80202C4C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80202C50: sb          $t9, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r25;
L_80202C54:
    // 0x80202C54: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80202C58: lbu         $t1, 0x5($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X5);
    // 0x80202C5C: beql        $t1, $zero, L_80202CAC
    if (ctx->r9 == 0) {
        // 0x80202C60: lwc1        $f10, 0xBC($a0)
        ctx->f10.u32l = MEM_W(ctx->r4, 0XBC);
            goto L_80202CAC;
    }
    goto skip_1;
    // 0x80202C60: lwc1        $f10, 0xBC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XBC);
    skip_1:
    // 0x80202C64: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80202C68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80202C6C: lwc1        $f8, 0xBC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x80202C70: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80202C74: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80202C78: swc1        $f16, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f16.u32l;
    // 0x80202C7C: lwc1        $f4, 0xBC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x80202C80: ldc1        $f18, -0x1320($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X1320);
    // 0x80202C84: lui         $at, 0xC387
    ctx->r1 = S32(0XC387 << 16);
    // 0x80202C88: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80202C8C: c.le.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d <= ctx->f18.d;
    // 0x80202C90: nop

    // 0x80202C94: bc1fl       L_80202CE4
    if (!c1cs) {
        // 0x80202C98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80202CE4;
    }
    goto skip_2;
    // 0x80202C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x80202C9C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80202CA0: b           L_80202CE0
    // 0x80202CA4: swc1        $f8, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f8.u32l;
        goto L_80202CE0;
    // 0x80202CA4: swc1        $f8, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f8.u32l;
    // 0x80202CA8: lwc1        $f10, 0xBC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XBC);
L_80202CAC:
    // 0x80202CAC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80202CB0: lui         $at, 0xC32E
    ctx->r1 = S32(0XC32E << 16);
    // 0x80202CB4: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80202CB8: swc1        $f4, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f4.u32l;
    // 0x80202CBC: lwc1        $f18, 0xBC($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x80202CC0: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x80202CC4: c.le.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d <= ctx->f6.d;
    // 0x80202CC8: nop

    // 0x80202CCC: bc1fl       L_80202CE4
    if (!c1cs) {
        // 0x80202CD0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80202CE4;
    }
    goto skip_3;
    // 0x80202CD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x80202CD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80202CD8: nop

    // 0x80202CDC: swc1        $f8, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f8.u32l;
L_80202CE0:
    // 0x80202CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80202CE4:
    // 0x80202CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80202CE8: jr          $ra
    // 0x80202CEC: nop

    TRACE_RETURN()
    return;
    // 0x80202CEC: nop

;}
