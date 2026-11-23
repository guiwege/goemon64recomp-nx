#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8021033C_5CB80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021033C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210344: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210348: jal         0x80013AC4
    // 0x8021034C: addiu       $a0, $a0, -0x20EC
    ctx->r4 = ADD32(ctx->r4, -0X20EC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021034C: addiu       $a0, $a0, -0x20EC
    ctx->r4 = ADD32(ctx->r4, -0X20EC);
    after_0:
    // 0x80210350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210358: jr          $ra
    // 0x8021035C: nop

    TRACE_RETURN()
    return;
    // 0x8021035C: nop

;}
RECOMP_FUNC void func_8020E428_5C98F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E428: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E42C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E430: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E434: jal         0x80013AC4
    // 0x8020E438: addiu       $a0, $a0, -0x3A10
    ctx->r4 = ADD32(ctx->r4, -0X3A10);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E438: addiu       $a0, $a0, -0x3A10
    ctx->r4 = ADD32(ctx->r4, -0X3A10);
    after_0:
    // 0x8020E43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E444: jr          $ra
    // 0x8020E448: nop

    TRACE_RETURN()
    return;
    // 0x8020E448: nop

;}
RECOMP_FUNC void func_802199B0_5D4E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802199B0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802199B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802199B8: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x802199BC: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x802199C0: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x802199C4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802199C8: lw          $v1, 0x84($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X84);
    // 0x802199CC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802199D0: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802199D4: lwc1        $f14, 0xC($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802199D8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802199DC: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802199E0: sub.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x802199E4: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x802199E8: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x802199EC: sub.s       $f18, $f12, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x802199F0: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x802199F4: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802199F8: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802199FC: andi        $t8, $a3, 0xFFFF
    ctx->r24 = ctx->r7 & 0XFFFF;
    // 0x80219A00: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x80219A04: sub.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x80219A08: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80219A0C: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80219A10: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80219A14: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80219A18: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80219A1C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80219A20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80219A24: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80219A28: mul.s       $f10, $f6, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x80219A2C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80219A30: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80219A34: sqrt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = sqrtf(ctx->f0.fl);
    // 0x80219A38: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x80219A3C: nop

    // 0x80219A40: bc1fl       L_80219A54
    if (!c1cs) {
        // 0x80219A44: div.s       $f6, $f18, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
            goto L_80219A54;
    }
    goto skip_0;
    // 0x80219A44: div.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    skip_0:
    // 0x80219A48: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80219A4C: nop

    // 0x80219A50: div.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
L_80219A54:
    // 0x80219A54: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80219A58: lwc1        $f12, 0x78($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80219A5C: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80219A60: lbu         $t9, 0x73($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X73);
    // 0x80219A64: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x80219A68: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80219A6C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80219A70: div.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80219A74: mul.s       $f0, $f6, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80219A78: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80219A7C: div.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80219A80: mul.s       $f14, $f10, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80219A84: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x80219A88: mul.s       $f16, $f6, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80219A8C: jal         0x80219AA4
    // 0x80219A90: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    func_80219AA4_5D4F74(rdram, ctx);
        goto after_0;
    // 0x80219A90: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x80219A94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80219A98: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80219A9C: jr          $ra
    // 0x80219AA0: nop

    TRACE_RETURN()
    return;
    // 0x80219AA0: nop

;}
RECOMP_FUNC void func_802235B4_5DEA84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802235B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802235B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802235BC: lbu         $v0, 0x99($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X99);
    // 0x802235C0: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x802235C4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802235C8: addiu       $t6, $v0, 0xF
    ctx->r14 = ADD32(ctx->r2, 0XF);
    // 0x802235CC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802235D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802235D4: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802235D8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802235DC: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x802235E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802235E4: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x802235E8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x802235EC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802235F0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802235F4: bgezl       $v0, L_8022360C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802235F8: add.s       $f4, $f16, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f0.fl;
            goto L_8022360C;
    }
    goto skip_0;
    // 0x802235F8: add.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f0.fl;
    skip_0:
    // 0x802235FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80223600: nop

    // 0x80223604: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80223608: add.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f0.fl;
L_8022360C:
    // 0x8022360C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80223610: jal         0x8022350C
    // 0x80223614: nop

    func_8022350C_5DE9DC(rdram, ctx);
        goto after_0;
    // 0x80223614: nop

    after_0:
    // 0x80223618: beq         $v0, $zero, L_8022363C
    if (ctx->r2 == 0) {
        // 0x8022361C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022363C;
    }
    // 0x8022361C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223620: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x80223624: lhu         $t7, 0x790C($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X790C);
    // 0x80223628: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8022362C: beql        $t8, $zero, L_80223640
    if (ctx->r24 == 0) {
        // 0x80223630: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80223640;
    }
    goto skip_1;
    // 0x80223630: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x80223634: b           L_80223640
    // 0x80223638: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80223640;
    // 0x80223638: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022363C:
    // 0x8022363C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80223640:
    // 0x80223640: jr          $ra
    // 0x80223644: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80223644: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80212310_5CD7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80212314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212318: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021231C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x80212320: addiu       $t7, $zero, 0x7E
    ctx->r15 = ADD32(0, 0X7E);
    // 0x80212324: addiu       $t8, $zero, 0x222
    ctx->r24 = ADD32(0, 0X222);
    // 0x80212328: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8021232C: bne         $v0, $zero, L_80212384
    if (ctx->r2 != 0) {
        // 0x80212330: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_80212384;
    }
    // 0x80212330: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x80212334: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80212338: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021233C: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x80212340: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x80212344: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x80212348: sb          $t9, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r25;
    // 0x8021234C: swc1        $f4, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f4.u32l;
    // 0x80212350: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80212354: jal         0x80216DF8
    // 0x80212358: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80216DF8_5D22C8(rdram, ctx);
        goto after_0;
    // 0x80212358: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x8021235C: jal         0x8021A310
    // 0x80212360: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8021A310_5D57E0(rdram, ctx);
        goto after_1;
    // 0x80212360: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80212364: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80212368: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8021236C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80212370: jal         0x80224ABC
    // 0x80212374: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80224ABC_5DFF8C(rdram, ctx);
        goto after_2;
    // 0x80212374: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80212378: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021237C: jal         0x8003521C
    // 0x80212380: addiu       $a0, $a0, 0x2394
    ctx->r4 = ADD32(ctx->r4, 0X2394);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x80212380: addiu       $a0, $a0, 0x2394
    ctx->r4 = ADD32(ctx->r4, 0X2394);
    after_3:
L_80212384:
    // 0x80212384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80212388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021238C: jr          $ra
    // 0x80212390: nop

    TRACE_RETURN()
    return;
    // 0x80212390: nop

;}
RECOMP_FUNC void func_8021A328_5D57F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A328: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021A32C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021A330: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x8021A334: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x8021A338: beql        $t7, $zero, L_8021A4D0
    if (ctx->r15 == 0) {
        // 0x8021A33C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021A4D0;
    }
    goto skip_0;
    // 0x8021A33C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8021A340: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x8021A344: beql        $v1, $zero, L_8021A4D0
    if (ctx->r3 == 0) {
        // 0x8021A348: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021A4D0;
    }
    goto skip_1;
    // 0x8021A348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8021A34C: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x8021A350: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x8021A354: addiu       $a1, $a1, -0x33D0
    ctx->r5 = ADD32(ctx->r5, -0X33D0);
    // 0x8021A358: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8021A35C: lw          $v0, 0x130($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X130);
    // 0x8021A360: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8021A364: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021A368: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021A36C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8021A370: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8021A374: nop

    // 0x8021A378: bc1fl       L_8021A390
    if (!c1cs) {
        // 0x8021A37C: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_8021A390;
    }
    goto skip_2;
    // 0x8021A37C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_2:
    // 0x8021A380: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8021A384: b           L_8021A390
    // 0x8021A388: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_8021A390;
    // 0x8021A388: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x8021A38C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_8021A390:
    // 0x8021A390: lbu         $t9, 0x76($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X76);
    // 0x8021A394: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8021A398: bgez        $t9, L_8021A3B0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8021A39C: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_8021A3B0;
    }
    // 0x8021A39C: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x8021A3A0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8021A3A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8021A3A8: nop

    // 0x8021A3AC: add.d       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f8.d + ctx->f10.d;
L_8021A3B0:
    // 0x8021A3B0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8021A3B4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8021A3B8: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8021A3BC: div.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f8.d, ctx->f16.d);
    // 0x8021A3C0: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    // 0x8021A3C4: mul.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x8021A3C8: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8021A3CC: nop

    // 0x8021A3D0: bc1fl       L_8021A47C
    if (!c1cs) {
        // 0x8021A3D4: lw          $t2, 0x64($a0)
        ctx->r10 = MEM_W(ctx->r4, 0X64);
            goto L_8021A47C;
    }
    goto skip_3;
    // 0x8021A3D4: lw          $t2, 0x64($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X64);
    skip_3:
    // 0x8021A3D8: lh          $t0, 0x2($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X2);
    // 0x8021A3DC: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021A3E0: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8021A3E4: nop

    // 0x8021A3E8: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021A3EC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8021A3F0: nop

    // 0x8021A3F4: bc1fl       L_8021A40C
    if (!c1cs) {
        // 0x8021A3F8: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_8021A40C;
    }
    goto skip_4;
    // 0x8021A3F8: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_4:
    // 0x8021A3FC: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8021A400: b           L_8021A40C
    // 0x8021A404: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_8021A40C;
    // 0x8021A404: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x8021A408: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_8021A40C:
    // 0x8021A40C: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8021A410: mul.s       $f16, $f14, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x8021A414: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8021A418: nop

    // 0x8021A41C: bc1fl       L_8021A47C
    if (!c1cs) {
        // 0x8021A420: lw          $t2, 0x64($a0)
        ctx->r10 = MEM_W(ctx->r4, 0X64);
            goto L_8021A47C;
    }
    goto skip_5;
    // 0x8021A420: lw          $t2, 0x64($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X64);
    skip_5:
    // 0x8021A424: lh          $t1, 0x4($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X4);
    // 0x8021A428: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021A42C: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8021A430: nop

    // 0x8021A434: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8021A438: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8021A43C: nop

    // 0x8021A440: bc1fl       L_8021A458
    if (!c1cs) {
        // 0x8021A444: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_8021A458;
    }
    goto skip_6;
    // 0x8021A444: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_6:
    // 0x8021A448: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8021A44C: b           L_8021A458
    // 0x8021A450: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_8021A458;
    // 0x8021A450: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x8021A454: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_8021A458:
    // 0x8021A458: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8021A45C: mul.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x8021A460: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8021A464: nop

    // 0x8021A468: bc1fl       L_8021A47C
    if (!c1cs) {
        // 0x8021A46C: lw          $t2, 0x64($a0)
        ctx->r10 = MEM_W(ctx->r4, 0X64);
            goto L_8021A47C;
    }
    goto skip_7;
    // 0x8021A46C: lw          $t2, 0x64($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X64);
    skip_7:
    // 0x8021A470: b           L_8021A4CC
    // 0x8021A474: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A4CC;
    // 0x8021A474: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021A478: lw          $t2, 0x64($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X64);
L_8021A47C:
    // 0x8021A47C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021A480: addiu       $t9, $t9, -0x5B1C
    ctx->r25 = ADD32(ctx->r25, -0X5B1C);
    // 0x8021A484: sll         $t3, $t2, 10
    ctx->r11 = S32(ctx->r10 << 10);
    // 0x8021A488: bgez        $t3, L_8021A4B8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8021A48C: lui         $a1, 0x3F80
        ctx->r5 = S32(0X3F80 << 16);
            goto L_8021A4B8;
    }
    // 0x8021A48C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x8021A490: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8021A494: jalr        $t9
    // 0x8021A498: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8021A498: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8021A49C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8021A4A0: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x8021A4A4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8021A4A8: lw          $t4, 0x64($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X64);
    // 0x8021A4AC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8021A4B0: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8021A4B4: sw          $t5, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r13;
L_8021A4B8:
    // 0x8021A4B8: sb          $zero, 0x10($v1)
    MEM_B(0X10, ctx->r3) = 0;
    // 0x8021A4BC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8021A4C0: sw          $zero, 0x70($a0)
    MEM_W(0X70, ctx->r4) = 0;
    // 0x8021A4C4: sw          $t6, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r14;
    // 0x8021A4C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021A4CC:
    // 0x8021A4CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021A4D0:
    // 0x8021A4D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021A4D4: jr          $ra
    // 0x8021A4D8: nop

    TRACE_RETURN()
    return;
    // 0x8021A4D8: nop

;}
RECOMP_FUNC void func_80221B48_5DD018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221B48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80221B4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80221B50: jal         0x80221A90
    // 0x80221B54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80221A90_5DCF60(rdram, ctx);
        goto after_0;
    // 0x80221B54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80221B58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80221B5C: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80221B60: sb          $t6, 0x99($a0)
    MEM_B(0X99, ctx->r4) = ctx->r14;
    // 0x80221B64: jal         0x80226840
    // 0x80221B68: lhu         $a1, 0xD2($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XD2);
    func_80226840_5E1D10(rdram, ctx);
        goto after_1;
    // 0x80221B68: lhu         $a1, 0xD2($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XD2);
    after_1:
    // 0x80221B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80221B70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80221B74: jr          $ra
    // 0x80221B78: nop

    TRACE_RETURN()
    return;
    // 0x80221B78: nop

;}
RECOMP_FUNC void func_8020FE98_5CB368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FE98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FE9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FEA0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FEA4: jal         0x80013AC4
    // 0x8020FEA8: addiu       $a0, $a0, -0x260C
    ctx->r4 = ADD32(ctx->r4, -0X260C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FEA8: addiu       $a0, $a0, -0x260C
    ctx->r4 = ADD32(ctx->r4, -0X260C);
    after_0:
    // 0x8020FEAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FEB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FEB4: jr          $ra
    // 0x8020FEB8: nop

    TRACE_RETURN()
    return;
    // 0x8020FEB8: nop

;}
RECOMP_FUNC void func_80210870_5CBD40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210878: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021087C: jal         0x80013AC4
    // 0x80210880: addiu       $a0, $a0, -0x1C34
    ctx->r4 = ADD32(ctx->r4, -0X1C34);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210880: addiu       $a0, $a0, -0x1C34
    ctx->r4 = ADD32(ctx->r4, -0X1C34);
    after_0:
    // 0x80210884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021088C: jr          $ra
    // 0x80210890: nop

    TRACE_RETURN()
    return;
    // 0x80210890: nop

;}
RECOMP_FUNC void func_80210DC8_5CC298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210DC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210DCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210DD0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210DD4: jal         0x80013AC4
    // 0x80210DD8: addiu       $a0, $a0, -0x18C8
    ctx->r4 = ADD32(ctx->r4, -0X18C8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210DD8: addiu       $a0, $a0, -0x18C8
    ctx->r4 = ADD32(ctx->r4, -0X18C8);
    after_0:
    // 0x80210DDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210DE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210DE4: jr          $ra
    // 0x80210DE8: nop

    TRACE_RETURN()
    return;
    // 0x80210DE8: nop

;}
RECOMP_FUNC void func_8022255C_5DDA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022255C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80222560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222564: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80222568: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8022256C: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x80222570: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x80222574: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x80222578: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x8022257C: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80222580: lwc1        $f6, 0xC($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0XC);
    // 0x80222584: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80222588: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8022258C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80222590: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80222594: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x80222598: lwc1        $f16, 0x10($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X10);
    // 0x8022259C: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x802225A0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802225A4: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802225A8: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x802225AC: lwc1        $f6, 0x14($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X14);
    // 0x802225B0: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x802225B4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802225B8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x802225BC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802225C0: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x802225C4: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x802225C8: jal         0x8001D394
    // 0x802225CC: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_0;
    // 0x802225CC: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x802225D0: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x802225D4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802225D8: jal         0x8001D5B8
    // 0x802225DC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_8001D5B8_1E1B8(rdram, ctx);
        goto after_1;
    // 0x802225DC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x802225E0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x802225E4: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802225E8: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x802225EC: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802225F0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802225F4: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x802225F8: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802225FC: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80222600: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80222604: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80222608: swc1        $f10, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f10.u32l;
    // 0x8022260C: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80222610: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80222614: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80222618: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8022261C: swc1        $f4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f4.u32l;
    // 0x80222620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80222624: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80222628: jr          $ra
    // 0x8022262C: nop

    TRACE_RETURN()
    return;
    // 0x8022262C: nop

;}
RECOMP_FUNC void func_802209BC_5DBE8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802209BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802209C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802209C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802209C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802209CC: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x802209D0: ori         $t7, $t6, 0x4400
    ctx->r15 = ctx->r14 | 0X4400;
    // 0x802209D4: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x802209D8: jal         0x8003521C
    // 0x802209DC: lw          $a0, 0xB4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x802209DC: lw          $a0, 0xB4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB4);
    after_0:
    // 0x802209E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802209E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802209E8: jr          $ra
    // 0x802209EC: nop

    TRACE_RETURN()
    return;
    // 0x802209EC: nop

;}
RECOMP_FUNC void func_80214F60_5D0430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214F60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80214F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80214F68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80214F6C: jal         0x8003F0FC
    // 0x80214F70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003F0FC_3FCFC(rdram, ctx);
        goto after_0;
    // 0x80214F70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80214F74: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80214F78: bnel        $v0, $at, L_80214F8C
    if (ctx->r2 != ctx->r1) {
        // 0x80214F7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80214F8C;
    }
    goto skip_0;
    // 0x80214F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80214F80: jal         0x80034ED4
    // 0x80214F84: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x80214F84: nop

    after_1:
    // 0x80214F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80214F8C:
    // 0x80214F8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80214F90: jr          $ra
    // 0x80214F94: nop

    TRACE_RETURN()
    return;
    // 0x80214F94: nop

;}
RECOMP_FUNC void func_80214A34_5CFF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214A34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80214A38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80214A3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80214A40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80214A44: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x80214A48: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x80214A4C: sb          $t9, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r25;
    // 0x80214A50: lui         $t6, 0x40
    ctx->r14 = S32(0X40 << 16);
    // 0x80214A54: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80214A58: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x80214A5C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80214A60: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x80214A64: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x80214A68: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80214A6C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x80214A70: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x80214A74: sh          $t0, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r8;
    // 0x80214A78: jalr        $t9
    // 0x80214A7C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80214A7C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80214A80: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80214A84: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x80214A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214A8C: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x80214A90: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x80214A94: jalr        $t9
    // 0x80214A98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80214A98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80214A9C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80214AA0: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x80214AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214AA8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80214AAC: jalr        $t9
    // 0x80214AB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80214AB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80214AB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80214AB8: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x80214ABC: jalr        $t9
    // 0x80214AC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80214AC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80214AC4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x80214AC8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x80214ACC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80214AD0: jalr        $t9
    // 0x80214AD4: addiu       $a0, $a0, 0x4AEC
    ctx->r4 = ADD32(ctx->r4, 0X4AEC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80214AD4: addiu       $a0, $a0, 0x4AEC
    ctx->r4 = ADD32(ctx->r4, 0X4AEC);
    after_4:
    // 0x80214AD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80214ADC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80214AE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80214AE4: jr          $ra
    // 0x80214AE8: nop

    TRACE_RETURN()
    return;
    // 0x80214AE8: nop

;}
RECOMP_FUNC void func_8021B73C_5D6C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B73C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021B740: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021B744: lw          $v1, 0x84($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X84);
    // 0x8021B748: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021B74C: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021B750: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B754: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021B758: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021B75C: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021B760: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021B764: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021B768: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021B76C: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8021B770: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8021B774: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8021B778: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8021B77C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021B780: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021B784: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8021B788: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8021B78C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8021B790: nop

    // 0x8021B794: bc1f        L_8021B7A4
    if (!c1cs) {
        // 0x8021B798: nop
    
            goto L_8021B7A4;
    }
    // 0x8021B798: nop

    // 0x8021B79C: jr          $ra
    // 0x8021B7A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8021B7A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021B7A4:
    // 0x8021B7A4: jr          $ra
    // 0x8021B7A8: nop

    TRACE_RETURN()
    return;
    // 0x8021B7A8: nop

;}
RECOMP_FUNC void func_80211098_5CC568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211098: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021109C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802110A0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802110A4: jal         0x80013AC4
    // 0x802110A8: addiu       $a0, $a0, -0x16E0
    ctx->r4 = ADD32(ctx->r4, -0X16E0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802110A8: addiu       $a0, $a0, -0x16E0
    ctx->r4 = ADD32(ctx->r4, -0X16E0);
    after_0:
    // 0x802110AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802110B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802110B4: jr          $ra
    // 0x802110B8: nop

    TRACE_RETURN()
    return;
    // 0x802110B8: nop

;}
RECOMP_FUNC void func_80224E20_5E02F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224E20: lui         $t6, 0x8024
    ctx->r14 = S32(0X8024 << 16);
    // 0x80224E24: lw          $t6, -0x4BF0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4BF0);
    // 0x80224E28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80224E2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80224E30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80224E34: beq         $t6, $at, L_80224EE8
    if (ctx->r14 == ctx->r1) {
        // 0x80224E38: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80224EE8;
    }
    // 0x80224E38: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80224E3C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80224E40: lw          $v0, -0x3274($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3274);
    // 0x80224E44: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80224E48: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80224E4C: bne         $v0, $zero, L_80224E7C
    if (ctx->r2 != 0) {
        // 0x80224E50: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_80224E7C;
    }
    // 0x80224E50: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80224E54: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80224E58: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    // 0x80224E5C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80224E60: jal         0x800148F0
    // 0x80224E64: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x80224E64: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x80224E68: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80224E6C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80224E70: sw          $v0, 0xC4($a2)
    MEM_W(0XC4, ctx->r6) = ctx->r2;
    // 0x80224E74: b           L_80224E80
    // 0x80224E78: sw          $v0, -0x3274($at)
    MEM_W(-0X3274, ctx->r1) = ctx->r2;
        goto L_80224E80;
    // 0x80224E78: sw          $v0, -0x3274($at)
    MEM_W(-0X3274, ctx->r1) = ctx->r2;
L_80224E7C:
    // 0x80224E7C: sw          $v0, 0xC4($a2)
    MEM_W(0XC4, ctx->r6) = ctx->r2;
L_80224E80:
    // 0x80224E80: lui         $t7, 0x8024
    ctx->r15 = S32(0X8024 << 16);
    // 0x80224E84: lw          $t7, -0x4BF0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4BF0);
    // 0x80224E88: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80224E8C: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    // 0x80224E90: bnel        $t7, $zero, L_80224ED8
    if (ctx->r15 != 0) {
        // 0x80224E94: lw          $v0, 0xC4($a2)
        ctx->r2 = MEM_W(ctx->r6, 0XC4);
            goto L_80224ED8;
    }
    goto skip_0;
    // 0x80224E94: lw          $v0, 0xC4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC4);
    skip_0:
    // 0x80224E98: lw          $v0, 0xC4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC4);
L_80224E9C:
    // 0x80224E9C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80224EA0: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x80224EA4: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x80224EA8: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x80224EAC: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x80224EB0: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
    // 0x80224EB4: sh          $zero, 0xC($v0)
    MEM_H(0XC, ctx->r2) = 0;
    // 0x80224EB8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80224EBC: sh          $zero, -0xE($v0)
    MEM_H(-0XE, ctx->r2) = 0;
    // 0x80224EC0: bne         $v1, $a0, L_80224E9C
    if (ctx->r3 != ctx->r4) {
        // 0x80224EC4: sh          $zero, -0x10($v0)
        MEM_H(-0X10, ctx->r2) = 0;
            goto L_80224E9C;
    }
    // 0x80224EC4: sh          $zero, -0x10($v0)
    MEM_H(-0X10, ctx->r2) = 0;
    // 0x80224EC8: sh          $zero, 0xA6($a2)
    MEM_H(0XA6, ctx->r6) = 0;
    // 0x80224ECC: b           L_80224EE8
    // 0x80224ED0: sh          $zero, 0xEA($a2)
    MEM_H(0XEA, ctx->r6) = 0;
        goto L_80224EE8;
    // 0x80224ED0: sh          $zero, 0xEA($a2)
    MEM_H(0XEA, ctx->r6) = 0;
    // 0x80224ED4: lw          $v0, 0xC4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC4);
L_80224ED8:
    // 0x80224ED8: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x80224EDC: sh          $t8, 0xEA($a2)
    MEM_H(0XEA, ctx->r6) = ctx->r24;
    // 0x80224EE0: lhu         $t9, 0x2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2);
    // 0x80224EE4: sh          $t9, 0xA6($a2)
    MEM_H(0XA6, ctx->r6) = ctx->r25;
L_80224EE8:
    // 0x80224EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80224EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80224EF0: jr          $ra
    // 0x80224EF4: nop

    TRACE_RETURN()
    return;
    // 0x80224EF4: nop

;}
RECOMP_FUNC void func_802258BC_5E0D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802258C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802258C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802258C8: jal         0x80225E60
    // 0x802258CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80225E60_5E1330(rdram, ctx);
        goto after_0;
    // 0x802258CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802258D0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802258D4: beq         $at, $zero, L_802258E4
    if (ctx->r1 == 0) {
        // 0x802258D8: nop
    
            goto L_802258E4;
    }
    // 0x802258D8: nop

    // 0x802258DC: jal         0x80035020
    // 0x802258E0: nop

    func_80035020_35C20(rdram, ctx);
        goto after_1;
    // 0x802258E0: nop

    after_1:
L_802258E4:
    // 0x802258E4: jal         0x80225060
    // 0x802258E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80225060_5E0530(rdram, ctx);
        goto after_2;
    // 0x802258E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x802258EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802258F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802258F4: jr          $ra
    // 0x802258F8: nop

    TRACE_RETURN()
    return;
    // 0x802258F8: nop

;}
RECOMP_FUNC void func_80222034_5DD504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222034: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80222038: lw          $t6, -0x3A18($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A18);
    // 0x8022203C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80222040: jr          $ra
    // 0x80222044: sw          $t6, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80222044: sw          $t6, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80218090_5D3560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218090: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80218094: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80218098: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021809C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802180A0: addiu       $a1, $a1, 0x242C
    ctx->r5 = ADD32(ctx->r5, 0X242C);
    // 0x802180A4: jal         0x802171A8
    // 0x802180A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_0;
    // 0x802180A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802180AC: beq         $v0, $zero, L_80218154
    if (ctx->r2 == 0) {
        // 0x802180B0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80218154;
    }
    // 0x802180B0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802180B4: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x802180B8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x802180BC: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x802180C0: jal         0x802192B4
    // 0x802180C4: sw          $t7, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r15;
    func_802192B4_5D4784(rdram, ctx);
        goto after_1;
    // 0x802180C4: sw          $t7, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r15;
    after_1:
    // 0x802180C8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x802180CC: jal         0x802192B4
    // 0x802180D0: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    func_802192B4_5D4784(rdram, ctx);
        goto after_2;
    // 0x802180D0: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_2:
    // 0x802180D4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x802180D8: jal         0x802192B4
    // 0x802180DC: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    func_802192B4_5D4784(rdram, ctx);
        goto after_3;
    // 0x802180DC: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    after_3:
    // 0x802180E0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x802180E4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x802180E8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802180EC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x802180F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802180F4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802180F8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802180FC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80218100: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80218104: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80218108: addiu       $t0, $zero, 0x340
    ctx->r8 = ADD32(0, 0X340);
    // 0x8021810C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80218110: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80218114: subu        $a2, $t0, $t9
    ctx->r6 = SUB32(ctx->r8, ctx->r25);
    // 0x80218118: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8021811C: andi        $t1, $a2, 0xFFFF
    ctx->r9 = ctx->r6 & 0XFFFF;
    // 0x80218120: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x80218124: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x80218128: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8021812C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80218130: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80218134: jal         0x8021F154
    // 0x80218138: nop

    func_8021F154_5DA624(rdram, ctx);
        goto after_4;
    // 0x80218138: nop

    after_4:
    // 0x8021813C: jal         0x802192B4
    // 0x80218140: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_802192B4_5D4784(rdram, ctx);
        goto after_5;
    // 0x80218140: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_5:
    // 0x80218144: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x80218148: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x8021814C: b           L_80218158
    // 0x80218150: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_80218158;
    // 0x80218150: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80218154:
    // 0x80218154: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80218158:
    // 0x80218158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021815C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80218160: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80218164: jr          $ra
    // 0x80218168: nop

    TRACE_RETURN()
    return;
    // 0x80218168: nop

;}
RECOMP_FUNC void func_80214BBC_5D008C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214BBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80214BC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80214BC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80214BC8: jal         0x80221A90
    // 0x80214BCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80221A90_5DCF60(rdram, ctx);
        goto after_0;
    // 0x80214BCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80214BD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80214BD4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80214BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80214BDC: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x80214BE0: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x80214BE4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80214BE8: jal         0x80216E1C
    // 0x80214BEC: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    func_80216E1C_5D22EC(rdram, ctx);
        goto after_1;
    // 0x80214BEC: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    after_1:
    // 0x80214BF0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80214BF4: jal         0x8003521C
    // 0x80214BF8: addiu       $a0, $a0, 0x4C0C
    ctx->r4 = ADD32(ctx->r4, 0X4C0C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x80214BF8: addiu       $a0, $a0, 0x4C0C
    ctx->r4 = ADD32(ctx->r4, 0X4C0C);
    after_2:
    // 0x80214BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80214C00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80214C04: jr          $ra
    // 0x80214C08: nop

    TRACE_RETURN()
    return;
    // 0x80214C08: nop

;}
RECOMP_FUNC void func_80222630_5DDB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222630: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80222634: addiu       $v0, $v0, -0x667C
    ctx->r2 = ADD32(ctx->r2, -0X667C);
    // 0x80222638: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8022263C: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80222640: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80222644: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x80222648: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8022264C: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80222650: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80222654: sub.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80222658: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x8022265C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80222660: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80222664: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80222668: sub.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8022266C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80222670: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80222674: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80222678: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8022267C: sub.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80222680: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80222684: swc1        $f14, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f14.u32l;
    // 0x80222688: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8022268C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80222690: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80222694: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80222698: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x8022269C: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x802226A0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802226A4: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802226A8: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x802226AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802226B0: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802226B4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x802226B8: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x802226BC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x802226C0: bc1tl       L_802226EC
    if (c1cs) {
        // 0x802226C4: lwc1        $f6, 0x20($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
            goto L_802226EC;
    }
    goto skip_0;
    // 0x802226C4: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x802226C8: add.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802226CC: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802226D0: sqrt.s      $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = sqrtf(ctx->f14.fl);
    // 0x802226D4: div.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x802226D8: div.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f14.fl, ctx->f6.fl);
    // 0x802226DC: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x802226E0: b           L_80222710
    // 0x802226E4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
        goto L_80222710;
    // 0x802226E4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x802226E8: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
L_802226EC:
    // 0x802226EC: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802226F0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802226F4: lwc1        $f4, -0x5558($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5558);
    // 0x802226F8: add.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802226FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80222700: lwc1        $f8, -0x5554($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5554);
    // 0x80222704: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x80222708: sqrt.s      $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = sqrtf(ctx->f14.fl);
    // 0x8022270C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
L_80222710:
    // 0x80222710: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80222714: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80222718: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8022271C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80222720: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80222724: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x80222728: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    // 0x8022272C: mul.s       $f4, $f20, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x80222730: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80222734: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80222738: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8022273C: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    // 0x80222740: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x80222744: mul.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80222748: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x8022274C: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x80222750: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80222754: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80222758: nop

    // 0x8022275C: c.eq.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl == ctx->f4.fl;
    // 0x80222760: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x80222764: lwc1        $f20, 0x78($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80222768: bc1t        L_8022277C
    if (c1cs) {
        // 0x8022276C: nop
    
            goto L_8022277C;
    }
    // 0x8022276C: nop

    // 0x80222770: div.s       $f14, $f18, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = DIV_S(ctx->f18.fl, ctx->f14.fl);
    // 0x80222774: b           L_80222784
    // 0x80222778: div.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
        goto L_80222784;
    // 0x80222778: div.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
L_8022277C:
    // 0x8022277C: lwc1        $f16, -0x5550($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5550);
    // 0x80222780: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
L_80222784:
    // 0x80222784: mul.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80222788: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8022278C: mul.s       $f8, $f20, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x80222790: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x80222794: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80222798: neg.s       $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = -ctx->f16.fl;
    // 0x8022279C: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x802227A0: mul.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x802227A4: nop

    // 0x802227A8: mul.s       $f10, $f20, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x802227AC: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802227B0: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802227B4: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802227B8: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802227BC: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x802227C0: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802227C4: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802227C8: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x802227CC: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x802227D0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802227D4: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    // 0x802227D8: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
    // 0x802227DC: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x802227E0: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802227E4: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x802227E8: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x802227EC: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802227F0: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
    // 0x802227F4: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x802227F8: jr          $ra
    // 0x802227FC: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    TRACE_RETURN()
    return;
    // 0x802227FC: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_8020DF3C_5C940C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DF3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020DF40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DF44: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020DF48: jal         0x80013AC4
    // 0x8020DF4C: addiu       $a0, $a0, -0x3CF4
    ctx->r4 = ADD32(ctx->r4, -0X3CF4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020DF4C: addiu       $a0, $a0, -0x3CF4
    ctx->r4 = ADD32(ctx->r4, -0X3CF4);
    after_0:
    // 0x8020DF50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020DF54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020DF58: jr          $ra
    // 0x8020DF5C: nop

    TRACE_RETURN()
    return;
    // 0x8020DF5C: nop

;}
RECOMP_FUNC void func_80213EDC_5CF3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213EDC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80213EE0: jr          $ra
    // 0x80213EE4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80213EE4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80210414_5CB8E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021041C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210420: jal         0x80013AC4
    // 0x80210424: addiu       $a0, $a0, -0x2014
    ctx->r4 = ADD32(ctx->r4, -0X2014);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210424: addiu       $a0, $a0, -0x2014
    ctx->r4 = ADD32(ctx->r4, -0X2014);
    after_0:
    // 0x80210428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021042C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210430: jr          $ra
    // 0x80210434: nop

    TRACE_RETURN()
    return;
    // 0x80210434: nop

;}
RECOMP_FUNC void func_8020DF84_5C9454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DF84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020DF88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DF8C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020DF90: jal         0x80013AC4
    // 0x8020DF94: addiu       $a0, $a0, -0x3CB4
    ctx->r4 = ADD32(ctx->r4, -0X3CB4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020DF94: addiu       $a0, $a0, -0x3CB4
    ctx->r4 = ADD32(ctx->r4, -0X3CB4);
    after_0:
    // 0x8020DF98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020DF9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020DFA0: jr          $ra
    // 0x8020DFA4: nop

    TRACE_RETURN()
    return;
    // 0x8020DFA4: nop

;}
RECOMP_FUNC void func_80214F54_5D0424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214F54: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80214F58: jr          $ra
    // 0x80214F5C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80214F5C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8020E1C4_5C9694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E1C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E1C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E1CC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E1D0: jal         0x80013AC4
    // 0x8020E1D4: addiu       $a0, $a0, -0x3AF0
    ctx->r4 = ADD32(ctx->r4, -0X3AF0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E1D4: addiu       $a0, $a0, -0x3AF0
    ctx->r4 = ADD32(ctx->r4, -0X3AF0);
    after_0:
    // 0x8020E1D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E1DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E1E0: jr          $ra
    // 0x8020E1E4: nop

    TRACE_RETURN()
    return;
    // 0x8020E1E4: nop

;}
RECOMP_FUNC void func_8020F52C_5CA9FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F52C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F530: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F534: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F538: jal         0x80013AC4
    // 0x8020F53C: addiu       $a0, $a0, -0x2E74
    ctx->r4 = ADD32(ctx->r4, -0X2E74);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F53C: addiu       $a0, $a0, -0x2E74
    ctx->r4 = ADD32(ctx->r4, -0X2E74);
    after_0:
    // 0x8020F540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F548: jr          $ra
    // 0x8020F54C: nop

    TRACE_RETURN()
    return;
    // 0x8020F54C: nop

;}
RECOMP_FUNC void func_802141AC_5CF67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802141AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802141B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802141B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802141B8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802141BC: lw          $t8, 0x64($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X64);
    // 0x802141C0: lui         $t6, 0x6C0
    ctx->r14 = S32(0X6C0 << 16);
    // 0x802141C4: ori         $t6, $t6, 0x7EA
    ctx->r14 = ctx->r14 | 0X7EA;
    // 0x802141C8: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x802141CC: sw          $t9, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r25;
    // 0x802141D0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x802141D4: addiu       $t7, $zero, 0x1E1
    ctx->r15 = ADD32(0, 0X1E1);
    // 0x802141D8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802141DC: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x802141E0: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
    // 0x802141E4: addiu       $t3, $zero, 0x10E
    ctx->r11 = ADD32(0, 0X10E);
    // 0x802141E8: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x802141EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802141F0: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x802141F4: sh          $t7, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r15;
    // 0x802141F8: sh          $t0, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r8;
    // 0x802141FC: sb          $t1, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r9;
    // 0x80214200: sb          $t2, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r10;
    // 0x80214204: sh          $t3, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r11;
    // 0x80214208: jalr        $t9
    // 0x8021420C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8021420C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80214210: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80214214: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x80214218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021421C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80214220: jalr        $t9
    // 0x80214224: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80214224: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80214228: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021422C: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x80214230: jalr        $t9
    // 0x80214234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80214234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80214238: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021423C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x80214240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214244: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x80214248: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x8021424C: jalr        $t9
    // 0x80214250: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80214250: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x80214254: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80214258: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x8021425C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214260: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80214264: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80214268: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x8021426C: jalr        $t9
    // 0x80214270: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80214270: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x80214274: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80214278: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x8021427C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80214280: nop

    // 0x80214284: bc1f        L_802142D4
    if (!c1cs) {
        // 0x80214288: nop
    
            goto L_802142D4;
    }
    // 0x80214288: nop

    // 0x8021428C: lwc1        $f6, 0x7C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x80214290: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80214294: nop

    // 0x80214298: bc1f        L_802142D4
    if (!c1cs) {
        // 0x8021429C: nop
    
            goto L_802142D4;
    }
    // 0x8021429C: nop

    // 0x802142A0: lwc1        $f8, 0x80($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X80);
    // 0x802142A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x802142A8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802142AC: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x802142B0: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x802142B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802142B8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x802142BC: bc1f        L_802142D4
    if (!c1cs) {
        // 0x802142C0: nop
    
            goto L_802142D4;
    }
    // 0x802142C0: nop

    // 0x802142C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802142C8: lhu         $a1, 0x88($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X88);
    // 0x802142CC: jalr        $t9
    // 0x802142D0: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802142D0: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
    after_5:
L_802142D4:
    // 0x802142D4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802142D8: lwc1        $f0, -0x6090($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6090);
    // 0x802142DC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x802142E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x802142E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x802142E8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802142EC: addiu       $a0, $a0, 0x4054
    ctx->r4 = ADD32(ctx->r4, 0X4054);
    // 0x802142F0: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x802142F4: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x802142F8: jalr        $t9
    // 0x802142FC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802142FC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_6:
    // 0x80214300: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80214304: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80214308: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8021430C: jr          $ra
    // 0x80214310: nop

    TRACE_RETURN()
    return;
    // 0x80214310: nop

;}
RECOMP_FUNC void func_80221F70_5DD440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221F70: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x80221F74: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x80221F78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80221F7C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80221F80: sb          $v0, 0x7AE2($at)
    MEM_B(0X7AE2, ctx->r1) = ctx->r2;
    // 0x80221F84: lw          $t7, 0x5C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X5C);
    // 0x80221F88: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80221F8C: addiu       $v1, $v1, 0x4CC0
    ctx->r3 = ADD32(ctx->r3, 0X4CC0);
    // 0x80221F90: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x80221F94: sh          $zero, 0x30F4($v1)
    MEM_H(0X30F4, ctx->r3) = 0;
    // 0x80221F98: sh          $zero, 0x30F2($v1)
    MEM_H(0X30F2, ctx->r3) = 0;
    // 0x80221F9C: sh          $zero, 0x30F6($v1)
    MEM_H(0X30F6, ctx->r3) = 0;
    // 0x80221FA0: sh          $zero, 0x30F8($v1)
    MEM_H(0X30F8, ctx->r3) = 0;
    // 0x80221FA4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80221FA8: jr          $ra
    // 0x80221FAC: sb          $v0, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80221FAC: sb          $v0, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8021AB18_5D5FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021AB18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021AB1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021AB20: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x8021AB24: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x8021AB28: beql        $v1, $zero, L_8021AB84
    if (ctx->r3 == 0) {
        // 0x8021AB2C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021AB84;
    }
    goto skip_0;
    // 0x8021AB2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8021AB30: lbu         $v0, 0x4C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4C);
    // 0x8021AB34: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x8021AB38: beq         $v0, $at, L_8021AB58
    if (ctx->r2 == ctx->r1) {
        // 0x8021AB3C: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_8021AB58;
    }
    // 0x8021AB3C: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x8021AB40: beq         $v0, $at, L_8021AB58
    if (ctx->r2 == ctx->r1) {
        // 0x8021AB44: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_8021AB58;
    }
    // 0x8021AB44: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x8021AB48: beq         $v0, $at, L_8021AB58
    if (ctx->r2 == ctx->r1) {
        // 0x8021AB4C: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_8021AB58;
    }
    // 0x8021AB4C: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x8021AB50: bne         $v0, $at, L_8021AB68
    if (ctx->r2 != ctx->r1) {
        // 0x8021AB54: addiu       $a0, $zero, 0x24F
        ctx->r4 = ADD32(0, 0X24F);
            goto L_8021AB68;
    }
    // 0x8021AB54: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
L_8021AB58:
    // 0x8021AB58: jal         0x80038BC8
    // 0x8021AB5C: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x8021AB5C: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_0:
    // 0x8021AB60: b           L_8021AB84
    // 0x8021AB64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021AB84;
    // 0x8021AB64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021AB68:
    // 0x8021AB68: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x8021AB6C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x8021AB70: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021AB74: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x8021AB78: jalr        $t9
    // 0x8021AB7C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8021AB7C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_1:
    // 0x8021AB80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021AB84:
    // 0x8021AB84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021AB88: jr          $ra
    // 0x8021AB8C: nop

    TRACE_RETURN()
    return;
    // 0x8021AB8C: nop

;}
RECOMP_FUNC void func_8021006C_5CB53C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021006C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210074: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210078: jal         0x80013AC4
    // 0x8021007C: addiu       $a0, $a0, -0x23A0
    ctx->r4 = ADD32(ctx->r4, -0X23A0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021007C: addiu       $a0, $a0, -0x23A0
    ctx->r4 = ADD32(ctx->r4, -0X23A0);
    after_0:
    // 0x80210080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210088: jr          $ra
    // 0x8021008C: nop

    TRACE_RETURN()
    return;
    // 0x8021008C: nop

;}
RECOMP_FUNC void func_802101D4_5CB6A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802101D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802101D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802101DC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802101E0: jal         0x80013AC4
    // 0x802101E4: addiu       $a0, $a0, -0x2258
    ctx->r4 = ADD32(ctx->r4, -0X2258);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802101E4: addiu       $a0, $a0, -0x2258
    ctx->r4 = ADD32(ctx->r4, -0X2258);
    after_0:
    // 0x802101E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802101EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802101F0: jr          $ra
    // 0x802101F4: nop

    TRACE_RETURN()
    return;
    // 0x802101F4: nop

;}
RECOMP_FUNC void func_802139E0_5CEEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802139E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802139E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802139E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802139EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802139F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802139F4: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    // 0x802139F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802139FC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80213A00: jal         0x8021A26C
    // 0x80213A04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x80213A04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x80213A08: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80213A0C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80213A10: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x80213A14: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80213A18: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80213A1C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80213A20: addiu       $t0, $zero, 0x22A
    ctx->r8 = ADD32(0, 0X22A);
    // 0x80213A24: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x80213A28: sh          $t9, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r25;
    // 0x80213A2C: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x80213A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213A34: jal         0x80216DF8
    // 0x80213A38: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80216DF8_5D22C8(rdram, ctx);
        goto after_1;
    // 0x80213A38: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x80213A3C: jal         0x8021A310
    // 0x80213A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021A310_5D57E0(rdram, ctx);
        goto after_2;
    // 0x80213A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80213A44: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x80213A48: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80213A4C: jal         0x80219E08
    // 0x80213A50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80219E08_5D52D8(rdram, ctx);
        goto after_3;
    // 0x80213A50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80213A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213A58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80213A5C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x80213A60: jal         0x80224ABC
    // 0x80213A64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80224ABC_5DFF8C(rdram, ctx);
        goto after_4;
    // 0x80213A64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80213A68: lw          $t2, 0x64($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X64);
    // 0x80213A6C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80213A70: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80213A74: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x80213A78: sb          $t1, 0xD5($s0)
    MEM_B(0XD5, ctx->r16) = ctx->r9;
    // 0x80213A7C: sw          $t3, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r11;
    // 0x80213A80: jal         0x8003521C
    // 0x80213A84: addiu       $a0, $a0, 0x3A9C
    ctx->r4 = ADD32(ctx->r4, 0X3A9C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x80213A84: addiu       $a0, $a0, 0x3A9C
    ctx->r4 = ADD32(ctx->r4, 0X3A9C);
    after_5:
    // 0x80213A88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80213A8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80213A90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80213A94: jr          $ra
    // 0x80213A98: nop

    TRACE_RETURN()
    return;
    // 0x80213A98: nop

;}
RECOMP_FUNC void func_8020F7B4_5CAC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F7B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F7B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F7BC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F7C0: jal         0x80013AC4
    // 0x8020F7C4: addiu       $a0, $a0, -0x2CAC
    ctx->r4 = ADD32(ctx->r4, -0X2CAC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F7C4: addiu       $a0, $a0, -0x2CAC
    ctx->r4 = ADD32(ctx->r4, -0X2CAC);
    after_0:
    // 0x8020F7C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F7CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F7D0: jr          $ra
    // 0x8020F7D4: nop

    TRACE_RETURN()
    return;
    // 0x8020F7D4: nop

;}
RECOMP_FUNC void func_802148E0_5CFDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802148E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802148E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802148E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802148EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802148F0: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x802148F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802148F8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802148FC: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x80214900: beq         $t7, $zero, L_80214914
    if (ctx->r15 == 0) {
        // 0x80214904: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_80214914;
    }
    // 0x80214904: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x80214908: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x8021490C: jalr        $t9
    // 0x80214910: addiu       $a0, $a0, 0x45F0
    ctx->r4 = ADD32(ctx->r4, 0X45F0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80214910: addiu       $a0, $a0, 0x45F0
    ctx->r4 = ADD32(ctx->r4, 0X45F0);
    after_0:
L_80214914:
    // 0x80214914: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80214918: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x8021491C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80214920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214924: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x80214928: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021492C: bc1tl       L_80214954
    if (c1cs) {
        // 0x80214930: lw          $t8, 0x68($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X68);
            goto L_80214954;
    }
    goto skip_0;
    // 0x80214930: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    skip_0:
    // 0x80214934: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80214938: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x8021493C: addiu       $t9, $t9, -0x25E4
    ctx->r25 = ADD32(ctx->r25, -0X25E4);
    // 0x80214940: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80214944: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80214948: jalr        $t9
    // 0x8021494C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8021494C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80214950: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
L_80214954:
    // 0x80214954: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80214958: andi        $t0, $t8, 0x20
    ctx->r8 = ctx->r24 & 0X20;
    // 0x8021495C: bnel        $t0, $zero, L_802149B0
    if (ctx->r8 != 0) {
        // 0x80214960: lhu         $v0, 0x8A($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X8A);
            goto L_802149B0;
    }
    goto skip_1;
    // 0x80214960: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    skip_1:
    // 0x80214964: ldc1        $f0, -0x6070($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X6070);
    // 0x80214968: lwc1        $f6, 0xD0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x8021496C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80214970: ldc1        $f10, -0x6068($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X6068);
    // 0x80214974: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80214978: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x8021497C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80214980: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80214984: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x80214988: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8021498C: lwc1        $f16, 0x80($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X80);
    // 0x80214990: swc1        $f18, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f18.u32l;
    // 0x80214994: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80214998: div.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f0.d);
    // 0x8021499C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802149A0: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    // 0x802149A4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802149A8: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    // 0x802149AC: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
L_802149B0:
    // 0x802149B0: lwc1        $f8, 0x7C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x802149B4: slti        $v1, $v0, 0x78
    ctx->r3 = SIGNED(ctx->r2) < 0X78 ? 1 : 0;
    // 0x802149B8: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x802149BC: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x802149C0: beq         $v1, $zero, L_80214A20
    if (ctx->r3 == 0) {
        // 0x802149C4: swc1        $f8, 0xD0($s0)
        MEM_W(0XD0, ctx->r16) = ctx->f8.u32l;
            goto L_80214A20;
    }
    // 0x802149C4: swc1        $f8, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f8.u32l;
    // 0x802149C8: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x802149CC: bgez        $t2, L_802149E0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802149D0: andi        $t3, $t2, 0x1
        ctx->r11 = ctx->r10 & 0X1;
            goto L_802149E0;
    }
    // 0x802149D0: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x802149D4: beq         $t3, $zero, L_802149E0
    if (ctx->r11 == 0) {
        // 0x802149D8: nop
    
            goto L_802149E0;
    }
    // 0x802149D8: nop

    // 0x802149DC: addiu       $t3, $t3, -0x2
    ctx->r11 = ADD32(ctx->r11, -0X2);
L_802149E0:
    // 0x802149E0: bgtzl       $t3, L_80214A00
    if (SIGNED(ctx->r11) > 0) {
        // 0x802149E4: lw          $t6, 0x60($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X60);
            goto L_80214A00;
    }
    goto skip_2;
    // 0x802149E4: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    skip_2:
    // 0x802149E8: lw          $t4, 0x60($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X60);
    // 0x802149EC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x802149F0: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x802149F4: b           L_80214A08
    // 0x802149F8: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
        goto L_80214A08;
    // 0x802149F8: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
    // 0x802149FC: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
L_80214A00:
    // 0x80214A00: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x80214A04: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
L_80214A08:
    // 0x80214A08: lhu         $t9, 0x8A($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X8A);
    // 0x80214A0C: bnel        $t9, $zero, L_80214A24
    if (ctx->r25 != 0) {
        // 0x80214A10: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80214A24;
    }
    goto skip_3;
    // 0x80214A10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x80214A14: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    // 0x80214A18: ori         $t0, $t8, 0x2
    ctx->r8 = ctx->r24 | 0X2;
    // 0x80214A1C: sw          $t0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r8;
L_80214A20:
    // 0x80214A20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80214A24:
    // 0x80214A24: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80214A28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80214A2C: jr          $ra
    // 0x80214A30: nop

    TRACE_RETURN()
    return;
    // 0x80214A30: nop

;}
RECOMP_FUNC void func_8022634C_5E181C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022634C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80226350: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x80226354: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226358: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022635C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80226360: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80226364: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80226368: andi        $t8, $t0, 0x1
    ctx->r24 = ctx->r8 & 0X1;
    // 0x8022636C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80226370: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80226374: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80226378: beq         $t8, $zero, L_80226384
    if (ctx->r24 == 0) {
        // 0x8022637C: lw          $v0, 0x18($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X18);
            goto L_80226384;
    }
    // 0x8022637C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80226380: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
L_80226384:
    // 0x80226384: andi        $t9, $t0, 0x2
    ctx->r25 = ctx->r8 & 0X2;
    // 0x80226388: beq         $t9, $zero, L_80226398
    if (ctx->r25 == 0) {
        // 0x8022638C: andi        $t3, $a2, 0x8
        ctx->r11 = ctx->r6 & 0X8;
            goto L_80226398;
    }
    // 0x8022638C: andi        $t3, $a2, 0x8
    ctx->r11 = ctx->r6 & 0X8;
    // 0x80226390: ori         $t1, $v1, 0x40
    ctx->r9 = ctx->r3 | 0X40;
    // 0x80226394: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_80226398:
    // 0x80226398: beq         $t3, $zero, L_802263D4
    if (ctx->r11 == 0) {
        // 0x8022639C: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_802263D4;
    }
    // 0x8022639C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802263A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802263A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802263A8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802263AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802263B0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x802263B4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x802263B8: jal         0x8021664C
    // 0x802263BC: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_8021664C_5D1B1C(rdram, ctx);
        goto after_0;
    // 0x802263BC: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_0:
    // 0x802263C0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x802263C4: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x802263C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x802263CC: ori         $t4, $v1, 0x1
    ctx->r12 = ctx->r3 | 0X1;
    // 0x802263D0: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
L_802263D4:
    // 0x802263D4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x802263D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802263DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802263E0: andi        $t6, $t5, 0x4
    ctx->r14 = ctx->r13 & 0X4;
    // 0x802263E4: beq         $t6, $zero, L_80226414
    if (ctx->r14 == 0) {
        // 0x802263E8: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_80226414;
    }
    // 0x802263E8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802263EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802263F0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x802263F4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x802263F8: jal         0x8021664C
    // 0x802263FC: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_8021664C_5D1B1C(rdram, ctx);
        goto after_1;
    // 0x802263FC: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_1:
    // 0x80226400: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80226404: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80226408: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8022640C: ori         $t7, $v1, 0x1
    ctx->r15 = ctx->r3 | 0X1;
    // 0x80226410: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_80226414:
    // 0x80226414: andi        $t8, $t0, 0x8000
    ctx->r24 = ctx->r8 & 0X8000;
    // 0x80226418: beq         $t8, $zero, L_80226458
    if (ctx->r24 == 0) {
        // 0x8022641C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80226458;
    }
    // 0x8022641C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80226420: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80226424: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80226428: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8022642C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80226430: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80226434: jal         0x8021664C
    // 0x80226438: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_8021664C_5D1B1C(rdram, ctx);
        goto after_2;
    // 0x80226438: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_2:
    // 0x8022643C: jal         0x802196E4
    // 0x80226440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802196E4_5D4BB4(rdram, ctx);
        goto after_3;
    // 0x80226440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80226444: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80226448: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8022644C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80226450: ori         $t9, $v1, 0x2
    ctx->r25 = ctx->r3 | 0X2;
    // 0x80226454: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_80226458:
    // 0x80226458: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8022645C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80226460: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80226464: andi        $t2, $t1, 0x4000
    ctx->r10 = ctx->r9 & 0X4000;
    // 0x80226468: beq         $t2, $zero, L_80226488
    if (ctx->r10 == 0) {
        // 0x8022646C: andi        $t8, $t0, 0x10
        ctx->r24 = ctx->r8 & 0X10;
            goto L_80226488;
    }
    // 0x8022646C: andi        $t8, $t0, 0x10
    ctx->r24 = ctx->r8 & 0X10;
    // 0x80226470: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80226474: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80226478: ori         $t4, $v1, 0x8
    ctx->r12 = ctx->r3 | 0X8;
    // 0x8022647C: sh          $t3, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r11;
    // 0x80226480: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x80226484: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
L_80226488:
    // 0x80226488: lwc1        $f6, 0x7C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x8022648C: andi        $t3, $t0, 0x20
    ctx->r11 = ctx->r8 & 0X20;
    // 0x80226490: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80226494: nop

    // 0x80226498: bc1f        L_802264CC
    if (!c1cs) {
        // 0x8022649C: nop
    
            goto L_802264CC;
    }
    // 0x8022649C: nop

    // 0x802264A0: lh          $t5, 0xE6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XE6);
    // 0x802264A4: andi        $t6, $t0, 0x4000
    ctx->r14 = ctx->r8 & 0X4000;
    // 0x802264A8: beq         $t5, $zero, L_802264CC
    if (ctx->r13 == 0) {
        // 0x802264AC: nop
    
            goto L_802264CC;
    }
    // 0x802264AC: nop

    // 0x802264B0: bne         $t6, $zero, L_802264CC
    if (ctx->r14 != 0) {
        // 0x802264B4: lui         $at, 0x8024
        ctx->r1 = S32(0X8024 << 16);
            goto L_802264CC;
    }
    // 0x802264B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802264B8: lwc1        $f8, -0x4F98($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4F98);
    // 0x802264BC: ori         $t7, $v1, 0x10
    ctx->r15 = ctx->r3 | 0X10;
    // 0x802264C0: sh          $zero, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = 0;
    // 0x802264C4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x802264C8: swc1        $f8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f8.u32l;
L_802264CC:
    // 0x802264CC: beq         $t8, $zero, L_802264E8
    if (ctx->r24 == 0) {
        // 0x802264D0: lui         $at, 0x3FE0
        ctx->r1 = S32(0X3FE0 << 16);
            goto L_802264E8;
    }
    // 0x802264D0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802264D4: lhu         $t9, 0x16($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X16);
    // 0x802264D8: ori         $t2, $v1, 0x4
    ctx->r10 = ctx->r3 | 0X4;
    // 0x802264DC: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x802264E0: addiu       $t1, $t9, -0xA
    ctx->r9 = ADD32(ctx->r25, -0XA);
    // 0x802264E4: sh          $t1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r9;
L_802264E8:
    // 0x802264E8: beql        $t3, $zero, L_80226508
    if (ctx->r11 == 0) {
        // 0x802264EC: lh          $t7, 0xE4($s0)
        ctx->r15 = MEM_H(ctx->r16, 0XE4);
            goto L_80226508;
    }
    goto skip_0;
    // 0x802264EC: lh          $t7, 0xE4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XE4);
    skip_0:
    // 0x802264F0: lhu         $t4, 0x16($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X16);
    // 0x802264F4: ori         $t6, $v1, 0x4
    ctx->r14 = ctx->r3 | 0X4;
    // 0x802264F8: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802264FC: addiu       $t5, $t4, 0xA
    ctx->r13 = ADD32(ctx->r12, 0XA);
    // 0x80226500: sh          $t5, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r13;
    // 0x80226504: lh          $t7, 0xE4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XE4);
L_80226508:
    // 0x80226508: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8022650C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80226510: nop

    // 0x80226514: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80226518: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8022651C: nop

    // 0x80226520: bc1fl       L_80226558
    if (!c1cs) {
        // 0x80226524: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_80226558;
    }
    goto skip_1;
    // 0x80226524: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_1:
    // 0x80226528: lwc1        $f16, 0x7C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x8022652C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80226530: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80226534: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80226538: lh          $t8, 0xE4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XE4);
    // 0x8022653C: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x80226540: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80226544: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80226548: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8022654C: swc1        $f8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f8.u32l;
    // 0x80226550: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80226554: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_80226558:
    // 0x80226558: nop

    // 0x8022655C: bc1fl       L_80226570
    if (!c1cs) {
        // 0x80226560: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80226570;
    }
    goto skip_2;
    // 0x80226560: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x80226564: swc1        $f12, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f12.u32l;
    // 0x80226568: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x8022656C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80226570:
    // 0x80226570: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226574: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80226578: jr          $ra
    // 0x8022657C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x8022657C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8020F310_5CA7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F318: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F31C: jal         0x80013AC4
    // 0x8020F320: addiu       $a0, $a0, -0x2FBC
    ctx->r4 = ADD32(ctx->r4, -0X2FBC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F320: addiu       $a0, $a0, -0x2FBC
    ctx->r4 = ADD32(ctx->r4, -0X2FBC);
    after_0:
    // 0x8020F324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F32C: jr          $ra
    // 0x8020F330: nop

    TRACE_RETURN()
    return;
    // 0x8020F330: nop

;}
RECOMP_FUNC void func_8021FCA4_5DB174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021FCA4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8021FCA8: lui         $t6, 0x8024
    ctx->r14 = S32(0X8024 << 16);
    // 0x8021FCAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021FCB0: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8021FCB4: addiu       $t6, $t6, -0x784C
    ctx->r14 = ADD32(ctx->r14, -0X784C);
    // 0x8021FCB8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8021FCBC: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x8021FCC0: lui         $t1, 0x8024
    ctx->r9 = S32(0X8024 << 16);
    // 0x8021FCC4: sw          $at, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r1;
    // 0x8021FCC8: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8021FCCC: addiu       $t1, $t1, -0x7840
    ctx->r9 = ADD32(ctx->r9, -0X7840);
    // 0x8021FCD0: addiu       $t0, $sp, 0x40
    ctx->r8 = ADD32(ctx->r29, 0X40);
    // 0x8021FCD4: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x8021FCD8: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8021FCDC: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
    // 0x8021FCE0: addiu       $t9, $sp, 0x54
    ctx->r25 = ADD32(ctx->r29, 0X54);
    // 0x8021FCE4: sw          $at, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r1;
    // 0x8021FCE8: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x8021FCEC: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x8021FCF0: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8021FCF4: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x8021FCF8: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x8021FCFC: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x8021FD00: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021FD04: lhu         $t5, 0x14($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X14);
    // 0x8021FD08: bne         $t5, $zero, L_8021FD1C
    if (ctx->r13 != 0) {
        // 0x8021FD0C: sw          $t5, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r13;
            goto L_8021FD1C;
    }
    // 0x8021FD0C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8021FD10: lhu         $t7, 0x18($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X18);
    // 0x8021FD14: beql        $t7, $zero, L_8021FDA0
    if (ctx->r15 == 0) {
        // 0x8021FD18: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8021FDA0;
    }
    goto skip_0;
    // 0x8021FD18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_8021FD1C:
    // 0x8021FD1C: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x8021FD20: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x8021FD24: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8021FD28: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8021FD2C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8021FD30: jal         0x80033898
    // 0x8021FD34: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x8021FD34: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    after_0:
    // 0x8021FD38: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021FD3C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021FD40: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021FD44: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8021FD48: lhu         $a0, 0x5E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X5E);
    // 0x8021FD4C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8021FD50: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8021FD54: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x8021FD58: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x8021FD5C: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x8021FD60: jal         0x8021F6DC
    // 0x8021FD64: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    func_8021F6DC_5DABAC(rdram, ctx);
        goto after_1;
    // 0x8021FD64: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8021FD68: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8021FD6C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x8021FD70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021FD74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021FD78: jal         0x8001DB04
    // 0x8021FD7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_2;
    // 0x8021FD7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x8021FD80: lhu         $t3, 0x2C($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X2C);
    // 0x8021FD84: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8021FD88: andi        $t2, $t3, 0x3FF
    ctx->r10 = ctx->r11 & 0X3FF;
    // 0x8021FD8C: sh          $t2, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r10;
    // 0x8021FD90: lhu         $t0, 0x30($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X30);
    // 0x8021FD94: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x8021FD98: sh          $t1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r9;
    // 0x8021FD9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021FDA0:
    // 0x8021FDA0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8021FDA4: jr          $ra
    // 0x8021FDA8: nop

    TRACE_RETURN()
    return;
    // 0x8021FDA8: nop

;}
RECOMP_FUNC void func_8021508C_5D055C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021508C: jr          $ra
    // 0x80215090: nop

    TRACE_RETURN()
    return;
    // 0x80215090: nop

;}
RECOMP_FUNC void func_80226764_5E1C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226764: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022676C: lw          $t8, 0x18($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X18);
    // 0x80226770: addiu       $t6, $zero, 0x261
    ctx->r14 = ADD32(0, 0X261);
    // 0x80226774: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x80226778: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x8022677C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x80226780: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80226784: jal         0x80225BB8
    // 0x80226788: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_80225BB8_5E1088(rdram, ctx);
        goto after_0;
    // 0x80226788: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_0:
    // 0x8022678C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80226790: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80226794: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80226798: lwc1        $f4, 0xC($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0XC);
    // 0x8022679C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802267A0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802267A4: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x802267A8: jal         0x80219E70
    // 0x802267AC: sh          $t1, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r9;
    func_80219E70_5D5340(rdram, ctx);
        goto after_1;
    // 0x802267AC: sh          $t1, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r9;
    after_1:
    // 0x802267B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802267B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802267B8: jr          $ra
    // 0x802267BC: nop

    TRACE_RETURN()
    return;
    // 0x802267BC: nop

;}
RECOMP_FUNC void func_8021FF60_5DB430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021FF60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021FF64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021FF68: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x8021FF6C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021FF70: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8021FF74: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021FF78: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x8021FF7C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8021FF80: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x8021FF84: jal         0x8021FDAC
    // 0x8021FF88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8021FDAC_5DB27C(rdram, ctx);
        goto after_0;
    // 0x8021FF88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8021FF8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021FF90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021FF94: jr          $ra
    // 0x8021FF98: nop

    TRACE_RETURN()
    return;
    // 0x8021FF98: nop

;}
RECOMP_FUNC void func_8020F3C4_5CA894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F3C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F3C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F3CC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F3D0: jal         0x80013AC4
    // 0x8020F3D4: addiu       $a0, $a0, -0x2F0C
    ctx->r4 = ADD32(ctx->r4, -0X2F0C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F3D4: addiu       $a0, $a0, -0x2F0C
    ctx->r4 = ADD32(ctx->r4, -0X2F0C);
    after_0:
    // 0x8020F3D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F3DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F3E0: jr          $ra
    // 0x8020F3E4: nop

    TRACE_RETURN()
    return;
    // 0x8020F3E4: nop

;}
RECOMP_FUNC void func_80212464_5CD934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212464: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80212468: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8021246C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80212470: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80212474: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x80212478: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021247C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80212480: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80212484: bne         $v0, $zero, L_80212668
    if (ctx->r2 != 0) {
        // 0x80212488: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_80212668;
    }
    // 0x80212488: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x8021248C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80212490: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80212494: jal         0x8021A26C
    // 0x80212498: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x80212498: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8021249C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802124A0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x802124A4: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x802124A8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x802124AC: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x802124B0: lui         $t0, 0x80
    ctx->r8 = S32(0X80 << 16);
    // 0x802124B4: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    // 0x802124B8: ori         $t0, $t0, 0x620
    ctx->r8 = ctx->r8 | 0X620;
    // 0x802124BC: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x802124C0: addiu       $t2, $zero, 0x7E
    ctx->r10 = ADD32(0, 0X7E);
    // 0x802124C4: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x802124C8: sb          $t1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r9;
    // 0x802124CC: sh          $t2, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r10;
    // 0x802124D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802124D4: jal         0x80216E1C
    // 0x802124D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80216E1C_5D22EC(rdram, ctx);
        goto after_1;
    // 0x802124D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802124DC: addiu       $t3, $zero, 0xF0
    ctx->r11 = ADD32(0, 0XF0);
    // 0x802124E0: sb          $t3, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r11;
    // 0x802124E4: jal         0x802192B4
    // 0x802124E8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_802192B4_5D4784(rdram, ctx);
        goto after_2;
    // 0x802124E8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_2:
    // 0x802124EC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x802124F0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802124F4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802124F8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802124FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80212500: lbu         $t4, 0xDD($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XDD);
    // 0x80212504: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80212508: ldc1        $f18, -0x60E0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X60E0);
    // 0x8021250C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80212510: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80212514: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x80212518: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8021251C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80212520: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80212524: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x80212528: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8021252C: mul.d       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f4.d);
    // 0x80212530: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80212534: jal         0x802192B4
    // 0x80212538: swc1        $f16, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f16.u32l;
    func_802192B4_5D4784(rdram, ctx);
        goto after_3;
    // 0x80212538: swc1        $f16, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f16.u32l;
    after_3:
    // 0x8021253C: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x80212540: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80212544: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80212548: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8021254C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80212550: lbu         $t7, 0xDD($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XDD);
    // 0x80212554: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80212558: ldc1        $f16, -0x60D8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X60D8);
    // 0x8021255C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80212560: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80212564: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80212568: div.d       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f4.d);
    // 0x8021256C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80212570: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80212574: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x80212578: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x8021257C: mul.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f18.d);
    // 0x80212580: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x80212584: jal         0x802192B4
    // 0x80212588: swc1        $f10, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f10.u32l;
    func_802192B4_5D4784(rdram, ctx);
        goto after_4;
    // 0x80212588: swc1        $f10, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f10.u32l;
    after_4:
    // 0x8021258C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80212590: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80212594: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80212598: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8021259C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802125A0: lbu         $t0, 0xDD($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XDD);
    // 0x802125A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802125A8: ldc1        $f10, -0x60D0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X60D0);
    // 0x802125AC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x802125B0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802125B4: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x802125B8: div.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f18.d);
    // 0x802125BC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x802125C0: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x802125C4: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x802125C8: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x802125CC: add.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f4.d + ctx->f10.d;
    // 0x802125D0: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x802125D4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802125D8: swc1        $f4, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f4.u32l;
    // 0x802125DC: lbu         $v1, 0xDD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XDD);
    // 0x802125E0: lwc1        $f6, 0x78($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X78);
    // 0x802125E4: lbu         $t3, 0x75($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X75);
    // 0x802125E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802125EC: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x802125F0: lwc1        $f16, 0x7C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x802125F4: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802125F8: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802125FC: lwc1        $f4, 0x80($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X80);
    // 0x80212600: sh          $t5, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r13;
    // 0x80212604: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80212608: nop

    // 0x8021260C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80212610: mflo        $t4
    ctx->r12 = lo;
    // 0x80212614: sb          $t4, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r12;
    // 0x80212618: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8021261C: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x80212620: swc1        $f18, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f18.u32l;
    // 0x80212624: jal         0x802192B4
    // 0x80212628: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    func_802192B4_5D4784(rdram, ctx);
        goto after_5;
    // 0x80212628: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    after_5:
    // 0x8021262C: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x80212630: sh          $t6, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r14;
    // 0x80212634: jal         0x802192B4
    // 0x80212638: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_802192B4_5D4784(rdram, ctx);
        goto after_6;
    // 0x80212638: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_6:
    // 0x8021263C: andi        $t7, $v0, 0x3FF
    ctx->r15 = ctx->r2 & 0X3FF;
    // 0x80212640: sh          $t7, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r15;
    // 0x80212644: jal         0x802192B4
    // 0x80212648: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_802192B4_5D4784(rdram, ctx);
        goto after_7;
    // 0x80212648: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_7:
    // 0x8021264C: lwc1        $f6, 0x7C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x80212650: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x80212654: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212658: sh          $t8, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r24;
    // 0x8021265C: addiu       $a0, $a0, 0x267C
    ctx->r4 = ADD32(ctx->r4, 0X267C);
    // 0x80212660: jal         0x8003521C
    // 0x80212664: swc1        $f6, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f6.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x80212664: swc1        $f6, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f6.u32l;
    after_8:
L_80212668:
    // 0x80212668: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8021266C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80212670: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80212674: jr          $ra
    // 0x80212678: nop

    TRACE_RETURN()
    return;
    // 0x80212678: nop

;}
RECOMP_FUNC void func_8020F724_5CABF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F724: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F72C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F730: jal         0x80013AC4
    // 0x8020F734: addiu       $a0, $a0, -0x2D24
    ctx->r4 = ADD32(ctx->r4, -0X2D24);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F734: addiu       $a0, $a0, -0x2D24
    ctx->r4 = ADD32(ctx->r4, -0X2D24);
    after_0:
    // 0x8020F738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F73C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F740: jr          $ra
    // 0x8020F744: nop

    TRACE_RETURN()
    return;
    // 0x8020F744: nop

;}
RECOMP_FUNC void func_8020FC58_5CB128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FC58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FC5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FC60: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FC64: jal         0x80013AC4
    // 0x8020FC68: addiu       $a0, $a0, -0x28A0
    ctx->r4 = ADD32(ctx->r4, -0X28A0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FC68: addiu       $a0, $a0, -0x28A0
    ctx->r4 = ADD32(ctx->r4, -0X28A0);
    after_0:
    // 0x8020FC6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FC70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FC74: jr          $ra
    // 0x8020FC78: nop

    TRACE_RETURN()
    return;
    // 0x8020FC78: nop

;}
RECOMP_FUNC void func_80210C84_5CC154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210C84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210C88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210C8C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210C90: jal         0x80013AC4
    // 0x80210C94: addiu       $a0, $a0, -0x1980
    ctx->r4 = ADD32(ctx->r4, -0X1980);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210C94: addiu       $a0, $a0, -0x1980
    ctx->r4 = ADD32(ctx->r4, -0X1980);
    after_0:
    // 0x80210C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210CA0: jr          $ra
    // 0x80210CA4: nop

    TRACE_RETURN()
    return;
    // 0x80210CA4: nop

;}
RECOMP_FUNC void func_8020F040_5CA510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F048: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F04C: jal         0x80013AC4
    // 0x8020F050: addiu       $a0, $a0, -0x320C
    ctx->r4 = ADD32(ctx->r4, -0X320C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F050: addiu       $a0, $a0, -0x320C
    ctx->r4 = ADD32(ctx->r4, -0X320C);
    after_0:
    // 0x8020F054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F05C: jr          $ra
    // 0x8020F060: nop

    TRACE_RETURN()
    return;
    // 0x8020F060: nop

;}
RECOMP_FUNC void func_8020ED94_5CA264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020ED94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020ED98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020ED9C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EDA0: jal         0x80013AC4
    // 0x8020EDA4: addiu       $a0, $a0, -0x3368
    ctx->r4 = ADD32(ctx->r4, -0X3368);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EDA4: addiu       $a0, $a0, -0x3368
    ctx->r4 = ADD32(ctx->r4, -0X3368);
    after_0:
    // 0x8020EDA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EDAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EDB0: jr          $ra
    // 0x8020EDB4: nop

    TRACE_RETURN()
    return;
    // 0x8020EDB4: nop

;}
