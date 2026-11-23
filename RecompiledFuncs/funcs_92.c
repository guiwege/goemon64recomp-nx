#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8020D2A0_676C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D2A0: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8020D2A4: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x8020D2A8: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x8020D2AC: lui         $t1, 0x8023
    ctx->r9 = S32(0X8023 << 16);
    // 0x8020D2B0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8020D2B4: lh          $t9, -0x524E($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X524E);
    // 0x8020D2B8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8020D2BC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020D2C0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8020D2C4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8020D2C8: lw          $t1, -0x4CD8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4CD8);
    // 0x8020D2CC: addiu       $a0, $a0, -0xE50
    ctx->r4 = ADD32(ctx->r4, -0XE50);
    // 0x8020D2D0: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x8020D2D4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8020D2D8: jr          $ra
    // 0x8020D2DC: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x8020D2DC: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_8020D4C4_676EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D4C4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8020D4C8: jr          $ra
    // 0x8020D4CC: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8020D4CC: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8020D8E4_6772C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D8E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D8E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D8EC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020D8F0: jal         0x80013AC4
    // 0x8020D8F4: addiu       $a0, $a0, -0x6190
    ctx->r4 = ADD32(ctx->r4, -0X6190);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020D8F4: addiu       $a0, $a0, -0x6190
    ctx->r4 = ADD32(ctx->r4, -0X6190);
    after_0:
    // 0x8020D8F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D8FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D900: jr          $ra
    // 0x8020D904: nop

    TRACE_RETURN()
    return;
    // 0x8020D904: nop

;}
RECOMP_FUNC void func_80212324_67BD04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80212328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021232C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80212330: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80212334: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80212338: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8021233C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80212340: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80212344: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80212348: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x8021234C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80212350: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80212354: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x80212358: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8021235C: nop

    // 0x80212360: sh          $t7, 0x60($a0)
    MEM_H(0X60, ctx->r4) = ctx->r15;
    // 0x80212364: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80212368: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021236C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80212370: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80212374: jal         0x800040A8
    // 0x80212378: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80212378: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    after_0:
    // 0x8021237C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80212380: andi        $t0, $v0, 0x3FF
    ctx->r8 = ctx->r2 & 0X3FF;
    // 0x80212384: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80212388: lhu         $t8, 0x2($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2);
    // 0x8021238C: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x80212390: andi        $t1, $t9, 0xFFFF
    ctx->r9 = ctx->r25 & 0XFFFF;
    // 0x80212394: subu        $a1, $t0, $t1
    ctx->r5 = SUB32(ctx->r8, ctx->r9);
    // 0x80212398: andi        $t2, $a1, 0x3FF
    ctx->r10 = ctx->r5 & 0X3FF;
    // 0x8021239C: slti        $at, $t2, 0x201
    ctx->r1 = SIGNED(ctx->r10) < 0X201 ? 1 : 0;
    // 0x802123A0: sh          $t9, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r25;
    // 0x802123A4: bne         $at, $zero, L_802123B0
    if (ctx->r1 != 0) {
        // 0x802123A8: or          $a1, $t2, $zero
        ctx->r5 = ctx->r10 | 0;
            goto L_802123B0;
    }
    // 0x802123A8: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x802123AC: addiu       $a1, $a1, -0x400
    ctx->r5 = ADD32(ctx->r5, -0X400);
L_802123B0:
    // 0x802123B0: lh          $t3, 0x4($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X4);
    // 0x802123B4: div         $zero, $a1, $t3
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r11)));
    // 0x802123B8: mflo        $t4
    ctx->r12 = lo;
    // 0x802123BC: sh          $t4, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r12;
    // 0x802123C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802123C4: bne         $t3, $zero, L_802123D0
    if (ctx->r11 != 0) {
        // 0x802123C8: nop
    
            goto L_802123D0;
    }
    // 0x802123C8: nop

    // 0x802123CC: break       7
    do_break(2149655500);
L_802123D0:
    // 0x802123D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802123D4: bne         $t3, $at, L_802123E8
    if (ctx->r11 != ctx->r1) {
        // 0x802123D8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802123E8;
    }
    // 0x802123D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802123DC: bne         $a1, $at, L_802123E8
    if (ctx->r5 != ctx->r1) {
        // 0x802123E0: nop
    
            goto L_802123E8;
    }
    // 0x802123E0: nop

    // 0x802123E4: break       6
    do_break(2149655524);
L_802123E8:
    // 0x802123E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802123EC: jr          $ra
    // 0x802123F0: nop

    TRACE_RETURN()
    return;
    // 0x802123F0: nop

;}
RECOMP_FUNC void func_80225C0C_68F5EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C0C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80225C10: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80225C14: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80225C18: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80225C1C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80225C20: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80225C24: addiu       $a1, $a1, 0x564C
    ctx->r5 = ADD32(ctx->r5, 0X564C);
    // 0x80225C28: jal         0x80034E08
    // 0x80225C2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80225C2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80225C30: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80225C34: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80225C38: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80225C3C: bne         $v0, $zero, L_80225C4C
    if (ctx->r2 != 0) {
        // 0x80225C40: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80225C4C;
    }
    // 0x80225C40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80225C44: b           L_80225CB4
    // 0x80225C48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80225CB4;
    // 0x80225C48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80225C4C:
    // 0x80225C4C: swc1        $f2, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f2.u32l;
    // 0x80225C50: swc1        $f12, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f12.u32l;
    // 0x80225C54: swc1        $f14, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f14.u32l;
    // 0x80225C58: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80225C5C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80225C60: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80225C64: addiu       $a1, $a1, 0x39B0
    ctx->r5 = ADD32(ctx->r5, 0X39B0);
    // 0x80225C68: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80225C6C: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80225C70: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80225C74: addiu       $t6, $zero, 0x4BC
    ctx->r14 = ADD32(0, 0X4BC);
    // 0x80225C78: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80225C7C: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x80225C80: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80225C84: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80225C88: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80225C8C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80225C90: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80225C94: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80225C98: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x80225C9C: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x80225CA0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80225CA4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80225CA8: jal         0x8000DBF0
    // 0x80225CAC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80225CAC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80225CB0: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_80225CB4:
    // 0x80225CB4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80225CB8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80225CBC: jr          $ra
    // 0x80225CC0: nop

    TRACE_RETURN()
    return;
    // 0x80225CC0: nop

;}
RECOMP_FUNC void func_8020D84C_67722C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D84C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D854: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020D858: jal         0x80013AC4
    // 0x8020D85C: addiu       $a0, $a0, -0x61B0
    ctx->r4 = ADD32(ctx->r4, -0X61B0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020D85C: addiu       $a0, $a0, -0x61B0
    ctx->r4 = ADD32(ctx->r4, -0X61B0);
    after_0:
    // 0x8020D860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D868: jr          $ra
    // 0x8020D86C: nop

    TRACE_RETURN()
    return;
    // 0x8020D86C: nop

;}
RECOMP_FUNC void func_8020D908_6772E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D90C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D910: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020D914: jal         0x80013C70
    // 0x8020D918: addiu       $a0, $a0, -0x618C
    ctx->r4 = ADD32(ctx->r4, -0X618C);
    func_80013C70_14870(rdram, ctx);
        goto after_0;
    // 0x8020D918: addiu       $a0, $a0, -0x618C
    ctx->r4 = ADD32(ctx->r4, -0X618C);
    after_0:
    // 0x8020D91C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D920: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D924: jr          $ra
    // 0x8020D928: nop

    TRACE_RETURN()
    return;
    // 0x8020D928: nop

;}
RECOMP_FUNC void func_80224744_68E124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224744: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80224748: jr          $ra
    // 0x8022474C: swc1        $f12, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8022474C: swc1        $f12, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021A578_683F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A578: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021A57C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8021A580: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8021A584: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8021A588: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021A58C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8021A590: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021A594: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8021A598: addiu       $a1, $a1, -0x5AF0
    ctx->r5 = ADD32(ctx->r5, -0X5AF0);
    // 0x8021A59C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021A5A0: jal         0x80034E08
    // 0x8021A5A4: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021A5A4: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8021A5A8: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8021A5AC: bne         $v0, $zero, L_8021A5BC
    if (ctx->r2 != 0) {
        // 0x8021A5B0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021A5BC;
    }
    // 0x8021A5B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021A5B4: b           L_8021A680
    // 0x8021A5B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A680;
    // 0x8021A5B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021A5BC:
    // 0x8021A5BC: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8021A5C0: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8021A5C4: beq         $a3, $zero, L_8021A5F0
    if (ctx->r7 == 0) {
        // 0x8021A5C8: sw          $t6, 0x5C($v0)
        MEM_W(0X5C, ctx->r2) = ctx->r14;
            goto L_8021A5F0;
    }
    // 0x8021A5C8: sw          $t6, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->r14;
    // 0x8021A5CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021A5D0: beq         $a3, $at, L_8021A604
    if (ctx->r7 == ctx->r1) {
        // 0x8021A5D4: lui         $a1, 0x800
        ctx->r5 = S32(0X800 << 16);
            goto L_8021A604;
    }
    // 0x8021A5D4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021A5D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8021A5DC: beq         $a3, $at, L_8021A614
    if (ctx->r7 == ctx->r1) {
        // 0x8021A5E0: lui         $a1, 0x800
        ctx->r5 = S32(0X800 << 16);
            goto L_8021A614;
    }
    // 0x8021A5E0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021A5E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8021A5E8: beq         $a3, $at, L_8021A624
    if (ctx->r7 == ctx->r1) {
        // 0x8021A5EC: lui         $a1, 0x800
        ctx->r5 = S32(0X800 << 16);
            goto L_8021A624;
    }
    // 0x8021A5EC: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
L_8021A5F0:
    // 0x8021A5F0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021A5F4: addiu       $a1, $a1, 0x1D0
    ctx->r5 = ADD32(ctx->r5, 0X1D0);
    // 0x8021A5F8: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021A5FC: b           L_8021A630
    // 0x8021A600: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
        goto L_8021A630;
    // 0x8021A600: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_8021A604:
    // 0x8021A604: addiu       $a1, $a1, 0x3B0
    ctx->r5 = ADD32(ctx->r5, 0X3B0);
    // 0x8021A608: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021A60C: b           L_8021A630
    // 0x8021A610: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
        goto L_8021A630;
    // 0x8021A610: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_8021A614:
    // 0x8021A614: addiu       $a1, $a1, 0x574
    ctx->r5 = ADD32(ctx->r5, 0X574);
    // 0x8021A618: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021A61C: b           L_8021A630
    // 0x8021A620: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
        goto L_8021A630;
    // 0x8021A620: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_8021A624:
    // 0x8021A624: addiu       $a1, $a1, 0x74C
    ctx->r5 = ADD32(ctx->r5, 0X74C);
    // 0x8021A628: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021A62C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_8021A630:
    // 0x8021A630: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021A634: lwc1        $f0, -0x5368($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5368);
    // 0x8021A638: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021A63C: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021A640: addiu       $t7, $zero, 0x2B2
    ctx->r15 = ADD32(0, 0X2B2);
    // 0x8021A644: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8021A648: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x8021A64C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x8021A650: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021A654: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021A658: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021A65C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021A660: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x8021A664: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021A668: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021A66C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021A670: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8021A674: jal         0x8000DBF0
    // 0x8021A678: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021A678: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8021A67C: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_8021A680:
    // 0x8021A680: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021A684: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8021A688: jr          $ra
    // 0x8021A68C: nop

    TRACE_RETURN()
    return;
    // 0x8021A68C: nop

;}
RECOMP_FUNC void func_8020D890_677270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D898: jal         0x8003FF50
    // 0x8020D89C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_0;
    // 0x8020D89C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x8020D8A0: jal         0x80038BC8
    // 0x8020D8A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x8020D8A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8020D8A8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020D8AC: jal         0x80013AC4
    // 0x8020D8B0: addiu       $a0, $a0, -0x61A8
    ctx->r4 = ADD32(ctx->r4, -0X61A8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_2;
    // 0x8020D8B0: addiu       $a0, $a0, -0x61A8
    ctx->r4 = ADD32(ctx->r4, -0X61A8);
    after_2:
    // 0x8020D8B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D8B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D8BC: jr          $ra
    // 0x8020D8C0: nop

    TRACE_RETURN()
    return;
    // 0x8020D8C0: nop

;}
RECOMP_FUNC void func_8020D780_677160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D780: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8020D784: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8020D788: lui         $v0, 0xD
    ctx->r2 = S32(0XD << 16);
    // 0x8020D78C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8020D790: lw          $v0, -0x71C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71C);
    // 0x8020D794: beq         $v0, $zero, L_8020D7AC
    if (ctx->r2 == 0) {
        // 0x8020D798: nop
    
            goto L_8020D7AC;
    }
    // 0x8020D798: nop

    // 0x8020D79C: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x8020D7A0: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
    // 0x8020D7A4: ori         $t8, $t7, 0x80
    ctx->r24 = ctx->r15 | 0X80;
    // 0x8020D7A8: sb          $t8, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r24;
L_8020D7AC:
    // 0x8020D7AC: jr          $ra
    // 0x8020D7B0: nop

    TRACE_RETURN()
    return;
    // 0x8020D7B0: nop

;}
RECOMP_FUNC void func_8022652C_68FF0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022652C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80226530: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80226534: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80226538: bgez        $t6, L_80226550
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8022653C: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80226550;
    }
    // 0x8022653C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80226540: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80226544: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80226548: nop

    // 0x8022654C: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80226550:
    // 0x80226550: lwc1        $f8, 0x60($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80226554: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x80226558: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8022655C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80226560: nop

    // 0x80226564: bc1fl       L_80226588
    if (!c1cs) {
        // 0x80226568: lwc1        $f18, 0x8($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
            goto L_80226588;
    }
    goto skip_0;
    // 0x80226568: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x8022656C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80226570: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80226574: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80226578: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8022657C: b           L_80226590
    // 0x80226580: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80226590;
    // 0x80226580: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80226584: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
L_80226588:
    // 0x80226588: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8022658C: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_80226590:
    // 0x80226590: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80226594: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80226598: jr          $ra
    // 0x8022659C: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8022659C: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_802291EC_692BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802291EC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802291F0: jr          $ra
    // 0x802291F4: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x802291F4: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021EE84_688864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021EE84: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021EE88: jr          $ra
    // 0x8021EE8C: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8021EE8C: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8022413C_68DB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022413C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80224140: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80224144: lwc1        $f6, 0x64($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80224148: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8022414C: swc1        $f12, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f12.u32l;
    // 0x80224150: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80224154: swc1        $f14, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f14.u32l;
    // 0x80224158: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8022415C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80224160: bc1f        L_80224180
    if (!c1cs) {
        // 0x80224164: swc1        $f4, 0xA8($a0)
        MEM_W(0XA8, ctx->r4) = ctx->f4.u32l;
            goto L_80224180;
    }
    // 0x80224164: swc1        $f4, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f4.u32l;
    // 0x80224168: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8022416C: lwc1        $f8, 0x3C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x80224170: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80224174: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80224178: b           L_8022418C
    // 0x8022417C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8022418C;
    // 0x8022417C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80224180:
    // 0x80224180: lwc1        $f16, 0x3C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x80224184: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80224188: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_8022418C:
    // 0x8022418C: lwc1        $f14, 0x38($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X38);
    // 0x80224190: lwc1        $f2, 0x44($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80224194: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80224198: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8022419C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802241A0: nop

    // 0x802241A4: bc1f        L_802241B8
    if (!c1cs) {
        // 0x802241A8: swc1        $f4, 0x40($v0)
        MEM_W(0X40, ctx->r2) = ctx->f4.u32l;
            goto L_802241B8;
    }
    // 0x802241A8: swc1        $f4, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f4.u32l;
    // 0x802241AC: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802241B0: b           L_802241BC
    // 0x802241B4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802241BC;
    // 0x802241B4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_802241B8:
    // 0x802241B8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_802241BC:
    // 0x802241BC: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x802241C0: lwc1        $f2, 0x4C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x802241C4: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802241C8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802241CC: nop

    // 0x802241D0: bc1f        L_802241E4
    if (!c1cs) {
        // 0x802241D4: swc1        $f6, 0x48($v0)
        MEM_W(0X48, ctx->r2) = ctx->f6.u32l;
            goto L_802241E4;
    }
    // 0x802241D4: swc1        $f6, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f6.u32l;
    // 0x802241D8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802241DC: b           L_802241E8
    // 0x802241E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802241E8;
    // 0x802241E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_802241E4:
    // 0x802241E4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_802241E8:
    // 0x802241E8: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x802241EC: jr          $ra
    // 0x802241F0: swc1        $f8, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x802241F0: swc1        $f8, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8021F000_6889E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021F004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F008: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021F00C: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x8021F010: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8021F014: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8021F018: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8021F01C: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x8021F020: swc1        $f14, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f14.u32l;
    // 0x8021F024: bc1fl       L_8021F048
    if (!c1cs) {
        // 0x8021F028: lwc1        $f10, 0x10($v1)
        ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
            goto L_8021F048;
    }
    goto skip_0;
    // 0x8021F028: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    skip_0:
    // 0x8021F02C: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8021F030: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021F034: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021F038: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021F03C: b           L_8021F050
    // 0x8021F040: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021F050;
    // 0x8021F040: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021F044: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
L_8021F048:
    // 0x8021F048: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021F04C: sub.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f18.fl;
L_8021F050:
    // 0x8021F050: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021F054: lwc1        $f2, 0x28($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X28);
    // 0x8021F058: lwc1        $f12, 0x24($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X24);
    // 0x8021F05C: div.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8021F060: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8021F064: nop

    // 0x8021F068: bc1f        L_8021F07C
    if (!c1cs) {
        // 0x8021F06C: swc1        $f4, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
            goto L_8021F07C;
    }
    // 0x8021F06C: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    // 0x8021F070: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8021F074: b           L_8021F084
    // 0x8021F078: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_8021F084;
    // 0x8021F078: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_8021F07C:
    // 0x8021F07C: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8021F080: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8021F084:
    // 0x8021F084: div.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8021F088: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021F08C: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021F090: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021F094: swc1        $f6, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f6.u32l;
    // 0x8021F098: jal         0x800040A8
    // 0x8021F09C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8021F09C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8021F0A0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8021F0A4: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x8021F0A8: sh          $t6, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r14;
    // 0x8021F0AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F0B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8021F0B4: jr          $ra
    // 0x8021F0B8: nop

    TRACE_RETURN()
    return;
    // 0x8021F0B8: nop

;}
RECOMP_FUNC void func_8020D540_676F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D540: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8020D544: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D548: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020D54C: addiu       $a1, $a1, -0x2CC8
    ctx->r5 = ADD32(ctx->r5, -0X2CC8);
    // 0x8020D550: jal         0x80034E08
    // 0x8020D554: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8020D554: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8020D558: bne         $v0, $zero, L_8020D568
    if (ctx->r2 != 0) {
        // 0x8020D55C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8020D568;
    }
    // 0x8020D55C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020D560: b           L_8020D594
    // 0x8020D564: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020D594;
    // 0x8020D564: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020D568:
    // 0x8020D568: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8020D56C: jal         0x800119D4
    // 0x8020D570: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800119D4_125D4(rdram, ctx);
        goto after_1;
    // 0x8020D570: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8020D574: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8020D578: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8020D57C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020D580: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020D584: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020D588: addiu       $v1, $v0, 0x5C
    ctx->r3 = ADD32(ctx->r2, 0X5C);
    // 0x8020D58C: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x8020D590: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
L_8020D594:
    // 0x8020D594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D598: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8020D59C: jr          $ra
    // 0x8020D5A0: nop

    TRACE_RETURN()
    return;
    // 0x8020D5A0: nop

;}
RECOMP_FUNC void func_8021AF0C_6848EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021AF0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021AF10: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8021AF14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021AF18: beq         $a1, $at, L_8021AF34
    if (ctx->r5 == ctx->r1) {
        // 0x8021AF1C: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8021AF34;
    }
    // 0x8021AF1C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8021AF20: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8021AF24: beq         $a1, $at, L_8021AF78
    if (ctx->r5 == ctx->r1) {
        // 0x8021AF28: lui         $v1, 0x1000
        ctx->r3 = S32(0X1000 << 16);
            goto L_8021AF78;
    }
    // 0x8021AF28: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x8021AF2C: b           L_8021AFF8
    // 0x8021AF30: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
        goto L_8021AFF8;
    // 0x8021AF30: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_8021AF34:
    // 0x8021AF34: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
    // 0x8021AF38: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x8021AF3C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021AF40: lwc1        $f4, -0x5350($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5350);
    // 0x8021AF44: lw          $t8, 0x54($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X54);
    // 0x8021AF48: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x8021AF4C: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x8021AF50: addiu       $t6, $t6, 0x37C
    ctx->r14 = ADD32(ctx->r14, 0X37C);
    // 0x8021AF54: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x8021AF58: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x8021AF5C: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x8021AF60: sw          $t7, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->r15;
    // 0x8021AF64: lw          $t1, 0x58($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X58);
    // 0x8021AF68: addiu       $t9, $t9, 0x3C8
    ctx->r25 = ADD32(ctx->r25, 0X3C8);
    // 0x8021AF6C: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x8021AF70: b           L_8021AFF8
    // 0x8021AF74: sw          $t0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r8;
        goto L_8021AFF8;
    // 0x8021AF74: sw          $t0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r8;
L_8021AF78:
    // 0x8021AF78: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021AF7C: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
    // 0x8021AF80: lw          $t4, 0x54($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X54);
    // 0x8021AF84: lui         $t2, 0x800
    ctx->r10 = S32(0X800 << 16);
    // 0x8021AF88: addiu       $t2, $t2, 0x37C
    ctx->r10 = ADD32(ctx->r10, 0X37C);
    // 0x8021AF8C: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x8021AF90: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x8021AF94: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x8021AF98: sw          $t3, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r11;
    // 0x8021AF9C: lw          $t7, 0x58($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X58);
    // 0x8021AFA0: lui         $t5, 0x800
    ctx->r13 = S32(0X800 << 16);
    // 0x8021AFA4: addiu       $t5, $t5, 0x3C8
    ctx->r13 = ADD32(ctx->r13, 0X3C8);
    // 0x8021AFA8: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x8021AFAC: sw          $t6, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r14;
    // 0x8021AFB0: lw          $a0, 0x54($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X54);
    // 0x8021AFB4: jal         0x8001B5AC
    // 0x8021AFB8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x8021AFB8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8021AFBC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021AFC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021AFC4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8021AFC8: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8021AFCC: lw          $t8, 0x54($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X54);
    // 0x8021AFD0: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
    // 0x8021AFD4: jal         0x8001B5AC
    // 0x8021AFD8: lw          $a0, 0x58($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X58);
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_1;
    // 0x8021AFD8: lw          $a0, 0x58($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X58);
    after_1:
    // 0x8021AFDC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021AFE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021AFE4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8021AFE8: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8021AFEC: lw          $t9, 0x58($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X58);
    // 0x8021AFF0: b           L_8021B00C
    // 0x8021AFF4: swc1        $f16, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f16.u32l;
        goto L_8021B00C;
    // 0x8021AFF4: swc1        $f16, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f16.u32l;
L_8021AFF8:
    // 0x8021AFF8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021AFFC: lw          $t0, 0x54($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X54);
    // 0x8021B000: swc1        $f0, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f0.u32l;
    // 0x8021B004: lw          $t1, 0x58($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X58);
    // 0x8021B008: swc1        $f0, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f0.u32l;
L_8021B00C:
    // 0x8021B00C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021B010: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8021B014: jr          $ra
    // 0x8021B018: nop

    TRACE_RETURN()
    return;
    // 0x8021B018: nop

;}
RECOMP_FUNC void func_802135E4_67CFC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802135E4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802135E8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x802135EC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802135F0: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x802135F4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802135F8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x802135FC: addiu       $a1, $a1, 0x3540
    ctx->r5 = ADD32(ctx->r5, 0X3540);
    // 0x80213600: jal         0x80034E08
    // 0x80213604: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80213604: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80213608: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x8021360C: bne         $v0, $zero, L_8021361C
    if (ctx->r2 != 0) {
        // 0x80213610: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021361C;
    }
    // 0x80213610: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80213614: b           L_8021370C
    // 0x80213618: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021370C;
    // 0x80213618: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021361C:
    // 0x8021361C: beq         $t0, $zero, L_80213644
    if (ctx->r8 == 0) {
        // 0x80213620: lui         $a2, 0x8007
        ctx->r6 = S32(0X8007 << 16);
            goto L_80213644;
    }
    // 0x80213620: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80213624: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80213628: beq         $t0, $at, L_8021365C
    if (ctx->r8 == ctx->r1) {
        // 0x8021362C: lui         $t8, 0x800
        ctx->r24 = S32(0X800 << 16);
            goto L_8021365C;
    }
    // 0x8021362C: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x80213630: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80213634: beq         $t0, $at, L_80213670
    if (ctx->r8 == ctx->r1) {
        // 0x80213638: lui         $t1, 0x800
        ctx->r9 = S32(0X800 << 16);
            goto L_80213670;
    }
    // 0x80213638: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x8021363C: b           L_80213680
    // 0x80213640: nop

        goto L_80213680;
    // 0x80213640: nop

L_80213644:
    // 0x80213644: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x80213648: addiu       $t6, $t6, 0xAC
    ctx->r14 = ADD32(ctx->r14, 0XAC);
    // 0x8021364C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80213650: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x80213654: b           L_80213680
    // 0x80213658: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
        goto L_80213680;
    // 0x80213658: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
L_8021365C:
    // 0x8021365C: addiu       $t8, $t8, 0x65F0
    ctx->r24 = ADD32(ctx->r24, 0X65F0);
    // 0x80213660: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80213664: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80213668: b           L_80213680
    // 0x8021366C: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
        goto L_80213680;
    // 0x8021366C: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
L_80213670:
    // 0x80213670: addiu       $t1, $t1, 0x3EC0
    ctx->r9 = ADD32(ctx->r9, 0X3EC0);
    // 0x80213674: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80213678: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x8021367C: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
L_80213680:
    // 0x80213680: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80213684: lwc1        $f0, -0x5738($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5738);
    // 0x80213688: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021368C: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80213690: addiu       $t3, $zero, 0x288
    ctx->r11 = ADD32(0, 0X288);
    // 0x80213694: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x80213698: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x8021369C: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x802136A0: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x802136A4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802136A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802136AC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802136B0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802136B4: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x802136B8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802136BC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802136C0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802136C4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802136C8: jal         0x8000DBF0
    // 0x802136CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x802136CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802136D0: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x802136D4: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802136D8: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x802136DC: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x802136E0: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x802136E4: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802136E8: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x802136EC: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802136F0: bne         $t0, $zero, L_80213708
    if (ctx->r8 != 0) {
        // 0x802136F4: swc1        $f16, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
            goto L_80213708;
    }
    // 0x802136F4: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x802136F8: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x802136FC: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x80213700: sh          $v1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r3;
    // 0x80213704: sh          $v1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r3;
L_80213708:
    // 0x80213708: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8021370C:
    // 0x8021370C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80213710: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80213714: jr          $ra
    // 0x80213718: nop

    TRACE_RETURN()
    return;
    // 0x80213718: nop

;}
RECOMP_FUNC void func_8021B134_684B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B134: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021B138: jr          $ra
    // 0x8021B13C: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8021B13C: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_802240B0_68DA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802240B0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802240B4: lw          $t6, 0xB8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB8);
    // 0x802240B8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802240BC: swc1        $f12, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f12.u32l;
    // 0x802240C0: lwc1        $f4, 0x24($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X24);
    // 0x802240C4: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x802240C8: nop

    // 0x802240CC: bc1fl       L_802240F4
    if (!c1cs) {
        // 0x802240D0: lw          $t8, 0x5C($v0)
        ctx->r24 = MEM_W(ctx->r2, 0X5C);
            goto L_802240F4;
    }
    goto skip_0;
    // 0x802240D0: lw          $t8, 0x5C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X5C);
    skip_0:
    // 0x802240D4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802240D8: lw          $t7, 0x5C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X5C);
    // 0x802240DC: lwc1        $f6, 0x54($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X54);
    // 0x802240E0: lwc1        $f8, 0x24($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X24);
    // 0x802240E4: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802240E8: b           L_80224100
    // 0x802240EC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80224100;
    // 0x802240EC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802240F0: lw          $t8, 0x5C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X5C);
L_802240F4:
    // 0x802240F4: lwc1        $f10, 0x54($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X54);
    // 0x802240F8: lwc1        $f16, 0x24($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X24);
    // 0x802240FC: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_80224100:
    // 0x80224100: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x80224104: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80224108: jr          $ra
    // 0x8022410C: swc1        $f4, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8022410C: swc1        $f4, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_802272AC_690C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802272B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802272B4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802272B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802272BC: lwc1        $f10, 0x80($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X80);
    // 0x802272C0: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x802272C4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802272C8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802272CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802272D0: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802272D4: jal         0x800040A8
    // 0x802272D8: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x802272D8: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x802272DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802272E0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802272E4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802272E8: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x802272EC: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802272F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802272F4: lhu         $t0, 0x30($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X30);
    // 0x802272F8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802272FC: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x80227300: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80227304: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80227308: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x8022730C: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x80227310: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80227314: nop

    // 0x80227318: sh          $t7, 0x32($v1)
    MEM_H(0X32, ctx->r3) = ctx->r15;
    // 0x8022731C: lh          $t2, 0x32($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X32);
    // 0x80227320: div         $zero, $t1, $t2
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r10)));
    // 0x80227324: mflo        $t3
    ctx->r11 = lo;
    // 0x80227328: sh          $t3, 0x34($v1)
    MEM_H(0X34, ctx->r3) = ctx->r11;
    // 0x8022732C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227330: bne         $t2, $zero, L_8022733C
    if (ctx->r10 != 0) {
        // 0x80227334: nop
    
            goto L_8022733C;
    }
    // 0x80227334: nop

    // 0x80227338: break       7
    do_break(2149741368);
L_8022733C:
    // 0x8022733C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80227340: bne         $t2, $at, L_80227354
    if (ctx->r10 != ctx->r1) {
        // 0x80227344: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80227354;
    }
    // 0x80227344: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80227348: bne         $t1, $at, L_80227354
    if (ctx->r9 != ctx->r1) {
        // 0x8022734C: nop
    
            goto L_80227354;
    }
    // 0x8022734C: nop

    // 0x80227350: break       6
    do_break(2149741392);
L_80227354:
    // 0x80227354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80227358: jr          $ra
    // 0x8022735C: nop

    TRACE_RETURN()
    return;
    // 0x8022735C: nop

;}
RECOMP_FUNC void func_8021D30C_686CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D30C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021D310: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x8021D314: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021D318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021D31C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8021D320: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021D324: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x8021D328: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021D32C: sb          $t6, 0x61($a0)
    MEM_B(0X61, ctx->r4) = ctx->r14;
    // 0x8021D330: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x8021D334: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021D338: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8021D33C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8021D340: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
    // 0x8021D344: lw          $a0, 0x7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7C);
    // 0x8021D348: jal         0x8001B5AC
    // 0x8021D34C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x8021D34C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x8021D350: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8021D354: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021D358: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021D35C: addiu       $ra, $a1, 0x5C
    ctx->r31 = ADD32(ctx->r5, 0X5C);
    // 0x8021D360: lw          $a0, 0x20($ra)
    ctx->r4 = MEM_W(ctx->r31, 0X20);
    // 0x8021D364: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8021D368: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8021D36C: lwc1        $f10, 0x28($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8021D370: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x8021D374: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x8021D378: nop

    // 0x8021D37C: bc1fl       L_8021D3B4
    if (!c1cs) {
        // 0x8021D380: lw          $t8, 0x0($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X0);
            goto L_8021D3B4;
    }
    goto skip_0;
    // 0x8021D380: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x8021D384: lbu         $t7, 0x5($ra)
    ctx->r15 = MEM_BU(ctx->r31, 0X5);
    // 0x8021D388: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021D38C: bnel        $t7, $at, L_8021D3AC
    if (ctx->r15 != ctx->r1) {
        // 0x8021D390: swc1        $f2, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->f2.u32l;
            goto L_8021D3AC;
    }
    goto skip_1;
    // 0x8021D390: swc1        $f2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f2.u32l;
    skip_1:
    // 0x8021D394: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8021D398: nop

    // 0x8021D39C: swc1        $f16, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f16.u32l;
    // 0x8021D3A0: b           L_8021D3B0
    // 0x8021D3A4: lw          $a0, 0x20($ra)
    ctx->r4 = MEM_W(ctx->r31, 0X20);
        goto L_8021D3B0;
    // 0x8021D3A4: lw          $a0, 0x20($ra)
    ctx->r4 = MEM_W(ctx->r31, 0X20);
    // 0x8021D3A8: swc1        $f2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f2.u32l;
L_8021D3AC:
    // 0x8021D3AC: lw          $a0, 0x20($ra)
    ctx->r4 = MEM_W(ctx->r31, 0X20);
L_8021D3B0:
    // 0x8021D3B0: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
L_8021D3B4:
    // 0x8021D3B4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8021D3B8: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8021D3BC: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8021D3C0: sw          $t9, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r25;
    // 0x8021D3C4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D3C8: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x8021D3CC: addiu       $t8, $t8, -0x5D90
    ctx->r24 = ADD32(ctx->r24, -0X5D90);
    // 0x8021D3D0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D3D4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D3D8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021D3DC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D3E0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D3E4: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8021D3E8: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x8021D3EC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D3F0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D3F4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D3F8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D3FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D400: lui         $t9, 0x802
    ctx->r25 = S32(0X802 << 16);
    // 0x8021D404: addiu       $t9, $t9, 0x58D0
    ctx->r25 = ADD32(ctx->r25, 0X58D0);
    // 0x8021D408: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D40C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D410: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8021D414: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D418: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D41C: lui         $t8, 0x701
    ctx->r24 = S32(0X701 << 16);
    // 0x8021D420: ori         $t8, $t8, 0x8050
    ctx->r24 = ctx->r24 | 0X8050;
    // 0x8021D424: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D428: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D42C: lui         $t7, 0xF510
    ctx->r15 = S32(0XF510 << 16);
    // 0x8021D430: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D434: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021D438: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D43C: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8021D440: lui         $t8, 0xF300
    ctx->r24 = S32(0XF300 << 16);
    // 0x8021D444: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D448: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D44C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D450: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D454: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D458: lui         $t9, 0x77F
    ctx->r25 = S32(0X77F << 16);
    // 0x8021D45C: ori         $t9, $t9, 0xF100
    ctx->r25 = ctx->r25 | 0XF100;
    // 0x8021D460: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D464: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D468: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8021D46C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D470: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D474: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8021D478: lui         $t9, 0xF510
    ctx->r25 = S32(0XF510 << 16);
    // 0x8021D47C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D480: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D484: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D488: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D48C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D490: lui         $t6, 0x1
    ctx->r14 = S32(0X1 << 16);
    // 0x8021D494: ori         $t6, $t6, 0x8050
    ctx->r14 = ctx->r14 | 0X8050;
    // 0x8021D498: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D49C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D4A0: ori         $t9, $t9, 0x1000
    ctx->r25 = ctx->r25 | 0X1000;
    // 0x8021D4A4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D4A8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021D4AC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D4B0: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8021D4B4: lui         $t0, 0x8FFF
    ctx->r8 = S32(0X8FFF << 16);
    // 0x8021D4B8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D4BC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D4C0: lw          $t8, 0x24($ra)
    ctx->r24 = MEM_W(ctx->r31, 0X24);
    // 0x8021D4C4: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x8021D4C8: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8021D4CC: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x8021D4D0: lui         $t8, 0x7
    ctx->r24 = S32(0X7 << 16);
    // 0x8021D4D4: ori         $t8, $t8, 0xC0FC
    ctx->r24 = ctx->r24 | 0XC0FC;
    // 0x8021D4D8: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8021D4DC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D4E0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021D4E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D4E8: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x8021D4EC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D4F0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D4F4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D4F8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D4FC: lw          $t7, 0x20($ra)
    ctx->r15 = MEM_W(ctx->r31, 0X20);
    // 0x8021D500: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8021D504: lw          $a3, 0x30($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X30);
    // 0x8021D508: subu        $t9, $t0, $a3
    ctx->r25 = SUB32(ctx->r8, ctx->r7);
    // 0x8021D50C: and         $t6, $t8, $t9
    ctx->r14 = ctx->r24 & ctx->r25;
    // 0x8021D510: and         $a1, $t6, $t0
    ctx->r5 = ctx->r14 & ctx->r8;
    // 0x8021D514: jal         0x80040620
    // 0x8021D518: and         $a0, $a3, $t0
    ctx->r4 = ctx->r7 & ctx->r8;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x8021D518: and         $a0, $a3, $t0
    ctx->r4 = ctx->r7 & ctx->r8;
    after_1:
    // 0x8021D51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021D520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021D524: jr          $ra
    // 0x8021D528: nop

    TRACE_RETURN()
    return;
    // 0x8021D528: nop

;}
RECOMP_FUNC void func_8021DF88_687968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DF88: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021DF8C: jr          $ra
    // 0x8021DF90: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8021DF90: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021F9CC_6893AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F9CC: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8021F9D0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021F9D4: addiu       $t7, $a0, 0x5C
    ctx->r15 = ADD32(ctx->r4, 0X5C);
    // 0x8021F9D8: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x8021F9DC: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x8021F9E0: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8021F9E4: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x8021F9E8: jal         0x8020D2A0
    // 0x8021F9EC: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    func_8020D2A0_676C80(rdram, ctx);
        goto after_0;
    // 0x8021F9EC: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    after_0:
    // 0x8021F9F0: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x8021F9F4: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x8021F9F8: sltiu       $at, $t9, 0x19
    ctx->r1 = ctx->r25 < 0X19 ? 1 : 0;
    // 0x8021F9FC: beq         $at, $zero, L_80223B08
    if (ctx->r1 == 0) {
        // 0x8021FA00: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80223B08;
    }
    // 0x8021FA00: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8021FA04: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021FA08: addu        $at, $at, $t9
    gpr jr_addend_8021FA10 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8021FA0C: lw          $t9, -0x5134($at)
    ctx->r25 = ADD32(ctx->r1, -0X5134);
    // 0x8021FA10: jr          $t9
    // 0x8021FA14: nop

    switch (jr_addend_8021FA10 >> 2) {
        case 0: goto L_8021FA18; break;
        case 1: goto L_8021FC5C; break;
        case 2: goto L_8021FD3C; break;
        case 3: goto L_802200CC; break;
        case 4: goto L_80220244; break;
        case 5: goto L_80220454; break;
        case 6: goto L_80220860; break;
        case 7: goto L_80220AC4; break;
        case 8: goto L_80220C28; break;
        case 9: goto L_80220E7C; break;
        case 10: goto L_802211F4; break;
        case 11: goto L_80221894; break;
        case 12: goto L_80221BFC; break;
        case 13: goto L_80221D04; break;
        case 14: goto L_802221A8; break;
        case 15: goto L_80222630; break;
        case 16: goto L_80222804; break;
        case 17: goto L_80222BF0; break;
        case 18: goto L_80222D4C; break;
        case 19: goto L_80222EA8; break;
        case 20: goto L_802232CC; break;
        case 21: goto L_8022346C; break;
        case 22: goto L_80223750; break;
        case 23: goto L_80223820; break;
        case 24: goto L_802239A8; break;
        default: switch_error(__func__, 0x8021FA10, 0x8022AECC);
    }
    // 0x8021FA14: nop

L_8021FA18:
    // 0x8021FA18: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x8021FA1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8021FA20: lh          $t1, 0x2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X2);
    // 0x8021FA24: bnel        $t1, $at, L_8021FA40
    if (ctx->r9 != ctx->r1) {
        // 0x8021FA28: lw          $t2, 0x84($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X84);
            goto L_8021FA40;
    }
    goto skip_0;
    // 0x8021FA28: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    skip_0:
    // 0x8021FA2C: jal         0x801FACC4
    // 0x8021FA30: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    func_801FACC4_5B6BD4(rdram, ctx);
        goto after_1;
    // 0x8021FA30: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    after_1:
    // 0x8021FA34: b           L_80223B0C
    // 0x8021FA38: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x8021FA38: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8021FA3C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
L_8021FA40:
    // 0x8021FA40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8021FA44: lh          $t3, 0x2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X2);
    // 0x8021FA48: bnel        $t3, $at, L_80223B0C
    if (ctx->r11 != ctx->r1) {
        // 0x8021FA4C: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_1;
    // 0x8021FA4C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_1:
    // 0x8021FA50: jal         0x801FAD8C
    // 0x8021FA54: nop

    func_801FAD8C_5B6C9C(rdram, ctx);
        goto after_2;
    // 0x8021FA54: nop

    after_2:
    // 0x8021FA58: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x8021FA5C: lw          $t5, -0x39D8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39D8);
    // 0x8021FA60: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8021FA64: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8021FA68: sb          $t4, 0x64($t5)
    MEM_B(0X64, ctx->r13) = ctx->r12;
    // 0x8021FA6C: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x8021FA70: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8021FA74: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021FA78: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8021FA7C: sb          $t6, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = ctx->r14;
    // 0x8021FA80: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8021FA84: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x8021FA88: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8021FA8C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8021FA90: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8021FA94: sb          $t8, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r24;
    // 0x8021FA98: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x8021FA9C: jal         0x80012938
    // 0x8021FAA0: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    func_80012938_13538(rdram, ctx);
        goto after_3;
    // 0x8021FAA0: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    after_3:
    // 0x8021FAA4: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8021FAA8: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x8021FAAC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8021FAB0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8021FAB4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8021FAB8: sw          $v0, -0x51E4($at)
    MEM_W(-0X51E4, ctx->r1) = ctx->r2;
    // 0x8021FABC: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x8021FAC0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8021FAC4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8021FAC8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8021FACC: sh          $zero, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = 0;
    // 0x8021FAD0: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8021FAD4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8021FAD8: jal         0x80212684
    // 0x8021FADC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80212684_67C064(rdram, ctx);
        goto after_4;
    // 0x8021FADC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_4:
    // 0x8021FAE0: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8021FAE4: sw          $v0, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->r2;
    // 0x8021FAE8: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8021FAEC: jal         0x80212640
    // 0x8021FAF0: lw          $a0, 0x28($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X28);
    func_80212640_67C020(rdram, ctx);
        goto after_5;
    // 0x8021FAF0: lw          $a0, 0x28($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X28);
    after_5:
    // 0x8021FAF4: jal         0x8021F8A0
    // 0x8021FAF8: nop

    func_8021F8A0_689280(rdram, ctx);
        goto after_6;
    // 0x8021FAF8: nop

    after_6:
    // 0x8021FAFC: jal         0x8021F8D4
    // 0x8021FB00: nop

    func_8021F8D4_6892B4(rdram, ctx);
        goto after_7;
    // 0x8021FB00: nop

    after_7:
    // 0x8021FB04: jal         0x8021F910
    // 0x8021FB08: nop

    func_8021F910_6892F0(rdram, ctx);
        goto after_8;
    // 0x8021FB08: nop

    after_8:
    // 0x8021FB0C: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x8021FB10: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8021FB14: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8021FB18: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8021FB1C: jal         0x80013484
    // 0x8021FB20: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    func_80013484_14084(rdram, ctx);
        goto after_9;
    // 0x8021FB20: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    after_9:
    // 0x8021FB24: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x8021FB28: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8021FB2C: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x8021FB30: sh          $zero, 0x2($t6)
    MEM_H(0X2, ctx->r14) = 0;
    // 0x8021FB34: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x8021FB38: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8021FB3C: lhu         $t8, -0x520C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X520C);
    // 0x8021FB40: addiu       $t9, $t8, -0xF
    ctx->r25 = ADD32(ctx->r24, -0XF);
    // 0x8021FB44: sltiu       $at, $t9, 0xC
    ctx->r1 = ctx->r25 < 0XC ? 1 : 0;
    // 0x8021FB48: beq         $at, $zero, L_8021FB64
    if (ctx->r1 == 0) {
        // 0x8021FB4C: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_8021FB64;
    }
    // 0x8021FB4C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8021FB50: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021FB54: addu        $at, $at, $t9
    gpr jr_addend_8021FB5C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8021FB58: lw          $t9, -0x50D0($at)
    ctx->r25 = ADD32(ctx->r1, -0X50D0);
    // 0x8021FB5C: jr          $t9
    // 0x8021FB60: nop

    switch (jr_addend_8021FB5C >> 2) {
        case 0: goto L_8021FB64; break;
        case 1: goto L_8021FB74; break;
        case 2: goto L_8021FB84; break;
        case 3: goto L_8021FB94; break;
        case 4: goto L_8021FBBC; break;
        case 5: goto L_8021FBE4; break;
        case 6: goto L_8021FC0C; break;
        case 7: goto L_8021FC0C; break;
        case 8: goto L_8021FC0C; break;
        case 9: goto L_8021FC0C; break;
        case 10: goto L_8021FC0C; break;
        case 11: goto L_8021FC0C; break;
        default: switch_error(__func__, 0x8021FB5C, 0x8022AF30);
    }
    // 0x8021FB60: nop

L_8021FB64:
    // 0x8021FB64: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8021FB68: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8021FB6C: b           L_80223B08
    // 0x8021FB70: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
        goto L_80223B08;
    // 0x8021FB70: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
L_8021FB74:
    // 0x8021FB74: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8021FB78: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x8021FB7C: b           L_80223B08
    // 0x8021FB80: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
        goto L_80223B08;
    // 0x8021FB80: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
L_8021FB84:
    // 0x8021FB84: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x8021FB88: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x8021FB8C: b           L_80223B08
    // 0x8021FB90: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
        goto L_80223B08;
    // 0x8021FB90: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
L_8021FB94:
    // 0x8021FB94: jal         0x8021F944
    // 0x8021FB98: nop

    func_8021F944_689324(rdram, ctx);
        goto after_10;
    // 0x8021FB98: nop

    after_10:
    // 0x8021FB9C: jal         0x8021F964
    // 0x8021FBA0: nop

    func_8021F964_689344(rdram, ctx);
        goto after_11;
    // 0x8021FBA0: nop

    after_11:
    // 0x8021FBA4: jal         0x8021F9A0
    // 0x8021FBA8: nop

    func_8021F9A0_689380(rdram, ctx);
        goto after_12;
    // 0x8021FBA8: nop

    after_12:
    // 0x8021FBAC: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8021FBB0: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8021FBB4: b           L_80223B08
    // 0x8021FBB8: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
        goto L_80223B08;
    // 0x8021FBB8: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
L_8021FBBC:
    // 0x8021FBBC: jal         0x8021F944
    // 0x8021FBC0: nop

    func_8021F944_689324(rdram, ctx);
        goto after_13;
    // 0x8021FBC0: nop

    after_13:
    // 0x8021FBC4: jal         0x8021F964
    // 0x8021FBC8: nop

    func_8021F964_689344(rdram, ctx);
        goto after_14;
    // 0x8021FBC8: nop

    after_14:
    // 0x8021FBCC: jal         0x8021F9A0
    // 0x8021FBD0: nop

    func_8021F9A0_689380(rdram, ctx);
        goto after_15;
    // 0x8021FBD0: nop

    after_15:
    // 0x8021FBD4: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x8021FBD8: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x8021FBDC: b           L_80223B08
    // 0x8021FBE0: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
        goto L_80223B08;
    // 0x8021FBE0: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
L_8021FBE4:
    // 0x8021FBE4: jal         0x8021F944
    // 0x8021FBE8: nop

    func_8021F944_689324(rdram, ctx);
        goto after_16;
    // 0x8021FBE8: nop

    after_16:
    // 0x8021FBEC: jal         0x8021F964
    // 0x8021FBF0: nop

    func_8021F964_689344(rdram, ctx);
        goto after_17;
    // 0x8021FBF0: nop

    after_17:
    // 0x8021FBF4: jal         0x8021F9A0
    // 0x8021FBF8: nop

    func_8021F9A0_689380(rdram, ctx);
        goto after_18;
    // 0x8021FBF8: nop

    after_18:
    // 0x8021FBFC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8021FC00: addiu       $t0, $zero, 0x12
    ctx->r8 = ADD32(0, 0X12);
    // 0x8021FC04: b           L_80223B08
    // 0x8021FC08: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
        goto L_80223B08;
    // 0x8021FC08: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
L_8021FC0C:
    // 0x8021FC0C: jal         0x8021F944
    // 0x8021FC10: nop

    func_8021F944_689324(rdram, ctx);
        goto after_19;
    // 0x8021FC10: nop

    after_19:
    // 0x8021FC14: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8021FC18: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x8021FC1C: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x8021FC20: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8021FC24: lhu         $t3, -0x4F6E($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X4F6E);
    // 0x8021FC28: andi        $t4, $t3, 0x4
    ctx->r12 = ctx->r11 & 0X4;
    // 0x8021FC2C: beq         $t4, $zero, L_8021FC4C
    if (ctx->r12 == 0) {
        // 0x8021FC30: lui         $t5, 0x4
        ctx->r13 = S32(0X4 << 16);
            goto L_8021FC4C;
    }
    // 0x8021FC30: lui         $t5, 0x4
    ctx->r13 = S32(0X4 << 16);
    // 0x8021FC34: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x8021FC38: lhu         $t5, -0x520C($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X520C);
    // 0x8021FC3C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8021FC40: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8021FC44: addiu       $t6, $t5, 0x6
    ctx->r14 = ADD32(ctx->r13, 0X6);
    // 0x8021FC48: sh          $t6, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = ctx->r14;
L_8021FC4C:
    // 0x8021FC4C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x8021FC50: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x8021FC54: b           L_80223B08
    // 0x8021FC58: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
        goto L_80223B08;
    // 0x8021FC58: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
L_8021FC5C:
    // 0x8021FC5C: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x8021FC60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021FC64: lh          $t0, 0x2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X2);
    // 0x8021FC68: bnel        $t0, $at, L_80223B0C
    if (ctx->r8 != ctx->r1) {
        // 0x8021FC6C: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_2;
    // 0x8021FC6C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_2:
    // 0x8021FC70: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    // 0x8021FC74: jal         0x8020D4B8
    // 0x8021FC78: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_20;
    // 0x8021FC78: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_20:
    // 0x8021FC7C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8021FC80: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8021FC84: jal         0x8020D4EC
    // 0x8021FC88: lw          $a0, 0x1C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1C);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_21;
    // 0x8021FC88: lw          $a0, 0x1C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1C);
    after_21:
    // 0x8021FC8C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x8021FC90: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021FC94: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8021FC98: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8021FC9C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8021FCA0: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x8021FCA4: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x8021FCA8: jal         0x802265A0
    // 0x8021FCAC: lui         $a3, 0xC3FA
    ctx->r7 = S32(0XC3FA << 16);
    func_802265A0_68FF80(rdram, ctx);
        goto after_22;
    // 0x8021FCAC: lui         $a3, 0xC3FA
    ctx->r7 = S32(0XC3FA << 16);
    after_22:
    // 0x8021FCB0: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x8021FCB4: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    // 0x8021FCB8: sw          $v0, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->r2;
    // 0x8021FCBC: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x8021FCC0: jal         0x80012500
    // 0x8021FCC4: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    func_80012500_13100(rdram, ctx);
        goto after_23;
    // 0x8021FCC4: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    after_23:
    // 0x8021FCC8: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x8021FCCC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8021FCD0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8021FCD4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8021FCD8: jal         0x80012818
    // 0x8021FCDC: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    func_80012818_13418(rdram, ctx);
        goto after_24;
    // 0x8021FCDC: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    after_24:
    // 0x8021FCE0: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8021FCE4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8021FCE8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8021FCEC: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    // 0x8021FCF0: jal         0x800127B8
    // 0x8021FCF4: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    func_800127B8_133B8(rdram, ctx);
        goto after_25;
    // 0x8021FCF4: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    after_25:
    // 0x8021FCF8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8021FCFC: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x8021FD00: lui         $a2, 0xC1F0
    ctx->r6 = S32(0XC1F0 << 16);
    // 0x8021FD04: jal         0x802241F4
    // 0x8021FD08: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    func_802241F4_68DBD4(rdram, ctx);
        goto after_26;
    // 0x8021FD08: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    after_26:
    // 0x8021FD0C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x8021FD10: addiu       $a0, $zero, 0x2B4
    ctx->r4 = ADD32(0, 0X2B4);
    // 0x8021FD14: jal         0x80038B98
    // 0x8021FD18: sw          $v0, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->r2;
    func_80038B98_39798(rdram, ctx);
        goto after_27;
    // 0x8021FD18: sw          $v0, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->r2;
    after_27:
    // 0x8021FD1C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x8021FD20: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8021FD24: sh          $zero, 0x4($t0)
    MEM_H(0X4, ctx->r8) = 0;
    // 0x8021FD28: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x8021FD2C: sh          $zero, 0x2($t9)
    MEM_H(0X2, ctx->r25) = 0;
    // 0x8021FD30: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8021FD34: b           L_80223B08
    // 0x8021FD38: sb          $t1, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r9;
        goto L_80223B08;
    // 0x8021FD38: sb          $t1, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r9;
L_8021FD3C:
    // 0x8021FD3C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8021FD40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021FD44: lh          $t5, 0x2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X2);
    // 0x8021FD48: bnel        $t5, $at, L_8021FDA4
    if (ctx->r13 != ctx->r1) {
        // 0x8021FD4C: lw          $t0, 0x84($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X84);
            goto L_8021FDA4;
    }
    goto skip_3;
    // 0x8021FD4C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    skip_3:
    // 0x8021FD50: jal         0x80038B98
    // 0x8021FD54: addiu       $a0, $zero, 0x309
    ctx->r4 = ADD32(0, 0X309);
    func_80038B98_39798(rdram, ctx);
        goto after_28;
    // 0x8021FD54: addiu       $a0, $zero, 0x309
    ctx->r4 = ADD32(0, 0X309);
    after_28:
    // 0x8021FD58: jal         0x80038B98
    // 0x8021FD5C: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    func_80038B98_39798(rdram, ctx);
        goto after_29;
    // 0x8021FD5C: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    after_29:
    // 0x8021FD60: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x8021FD64: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021FD68: lwc1        $f4, -0x50A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X50A0);
    // 0x8021FD6C: lw          $a0, 0x38($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X38);
    // 0x8021FD70: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021FD74: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021FD78: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8021FD7C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8021FD80: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x8021FD84: lui         $a2, 0xC080
    ctx->r6 = S32(0XC080 << 16);
    // 0x8021FD88: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8021FD8C: jal         0x80217394
    // 0x8021FD90: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80217394_680D74(rdram, ctx);
        goto after_30;
    // 0x8021FD90: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_30:
    // 0x8021FD94: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x8021FD98: b           L_8021FE34
    // 0x8021FD9C: sw          $v0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->r2;
        goto L_8021FE34;
    // 0x8021FD9C: sw          $v0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->r2;
    // 0x8021FDA0: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
L_8021FDA4:
    // 0x8021FDA4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8021FDA8: lh          $t9, 0x2($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X2);
    // 0x8021FDAC: bne         $t9, $at, L_8021FDEC
    if (ctx->r25 != ctx->r1) {
        // 0x8021FDB0: lui         $at, 0x8023
        ctx->r1 = S32(0X8023 << 16);
            goto L_8021FDEC;
    }
    // 0x8021FDB0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021FDB4: lwc1        $f6, -0x509C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X509C);
    // 0x8021FDB8: lw          $a0, 0x38($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X38);
    // 0x8021FDBC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8021FDC0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8021FDC4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8021FDC8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8021FDCC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x8021FDD0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8021FDD4: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x8021FDD8: jal         0x80217394
    // 0x8021FDDC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80217394_680D74(rdram, ctx);
        goto after_31;
    // 0x8021FDDC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_31:
    // 0x8021FDE0: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8021FDE4: b           L_8021FE34
    // 0x8021FDE8: sw          $v0, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->r2;
        goto L_8021FE34;
    // 0x8021FDE8: sw          $v0, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->r2;
L_8021FDEC:
    // 0x8021FDEC: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x8021FDF0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8021FDF4: lh          $t6, 0x2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X2);
    // 0x8021FDF8: bne         $t6, $at, L_8021FE34
    if (ctx->r14 != ctx->r1) {
        // 0x8021FDFC: lui         $at, 0x8023
        ctx->r1 = S32(0X8023 << 16);
            goto L_8021FE34;
    }
    // 0x8021FDFC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021FE00: lwc1        $f8, -0x5098($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5098);
    // 0x8021FE04: lw          $a0, 0x38($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X38);
    // 0x8021FE08: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021FE0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021FE10: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8021FE14: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8021FE18: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8021FE1C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8021FE20: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x8021FE24: jal         0x80217394
    // 0x8021FE28: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80217394_680D74(rdram, ctx);
        goto after_32;
    // 0x8021FE28: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_32:
    // 0x8021FE2C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x8021FE30: sw          $v0, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->r2;
L_8021FE34:
    // 0x8021FE34: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x8021FE38: lh          $t0, 0x2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X2);
    // 0x8021FE3C: slti        $at, $t0, 0x190
    ctx->r1 = SIGNED(ctx->r8) < 0X190 ? 1 : 0;
    // 0x8021FE40: beql        $at, $zero, L_8021FF98
    if (ctx->r1 == 0) {
        // 0x8021FE44: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_8021FF98;
    }
    goto skip_4;
    // 0x8021FE44: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_4:
    // 0x8021FE48: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8021FE4C: lui         $at, 0x4079
    ctx->r1 = S32(0X4079 << 16);
    // 0x8021FE50: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8021FE54: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021FE58: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021FE5C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8021FE60: addiu       $a1, $a1, -0x5BC8
    ctx->r5 = ADD32(ctx->r5, -0X5BC8);
    // 0x8021FE64: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8021FE68: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8021FE6C: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x8021FE70: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8021FE74: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8021FE78: jal         0x800377F4
    // 0x8021FE7C: nop

    func_800377F4_383F4(rdram, ctx);
        goto after_33;
    // 0x8021FE7C: nop

    after_33:
    // 0x8021FE80: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8021FE84: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x8021FE88: jal         0x80224040
    // 0x8021FE8C: lw          $a0, 0x38($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X38);
    func_80224040_68DA20(rdram, ctx);
        goto after_34;
    // 0x8021FE8C: lw          $a0, 0x38($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X38);
    after_34:
    // 0x8021FE90: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8021FE94: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x8021FE98: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8021FE9C: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x8021FEA0: jal         0x8022413C
    // 0x8021FEA4: lw          $a0, 0x38($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X38);
    func_8022413C_68DB1C(rdram, ctx);
        goto after_35;
    // 0x8021FEA4: lw          $a0, 0x38($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X38);
    after_35:
    // 0x8021FEA8: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8021FEAC: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x8021FEB0: jal         0x80224040
    // 0x8021FEB4: lw          $a0, 0x38($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X38);
    func_80224040_68DA20(rdram, ctx);
        goto after_36;
    // 0x8021FEB4: lw          $a0, 0x38($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X38);
    after_36:
    // 0x8021FEB8: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x8021FEBC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8021FEC0: jal         0x802240B0
    // 0x8021FEC4: lw          $a0, 0x38($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X38);
    func_802240B0_68DA90(rdram, ctx);
        goto after_37;
    // 0x8021FEC4: lw          $a0, 0x38($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X38);
    after_37:
    // 0x8021FEC8: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x8021FECC: lh          $t2, 0x2($t5)
    ctx->r10 = MEM_H(ctx->r13, 0X2);
    // 0x8021FED0: lh          $t7, 0x4($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X4);
    // 0x8021FED4: slt         $at, $t7, $t2
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8021FED8: beql        $at, $zero, L_80223B0C
    if (ctx->r1 == 0) {
        // 0x8021FEDC: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_5;
    // 0x8021FEDC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_5:
    // 0x8021FEE0: lw          $a0, 0x38($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X38);
    // 0x8021FEE4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x8021FEE8: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x8021FEEC: jal         0x8022406C
    // 0x8021FEF0: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    func_8022406C_68DA4C(rdram, ctx);
        goto after_38;
    // 0x8021FEF0: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    after_38:
    // 0x8021FEF4: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x8021FEF8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021FEFC: lwc1        $f10, -0x5094($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5094);
    // 0x8021FF00: lw          $a0, 0x38($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X38);
    // 0x8021FF04: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8021FF08: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021FF0C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8021FF10: addiu       $t3, $zero, 0xE0
    ctx->r11 = ADD32(0, 0XE0);
    // 0x8021FF14: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8021FF18: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8021FF1C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8021FF20: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8021FF24: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8021FF28: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x8021FF2C: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x8021FF30: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x8021FF34: jal         0x80216B30
    // 0x8021FF38: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80216B30_680510(rdram, ctx);
        goto after_39;
    // 0x8021FF38: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_39:
    // 0x8021FF3C: beq         $v0, $zero, L_8021FF74
    if (ctx->r2 == 0) {
        // 0x8021FF40: sw          $v0, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->r2;
            goto L_8021FF74;
    }
    // 0x8021FF40: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x8021FF44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021FF48: jal         0x8021689C
    // 0x8021FF4C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_8021689C_68027C(rdram, ctx);
        goto after_40;
    // 0x8021FF4C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_40:
    // 0x8021FF50: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8021FF54: jal         0x802168A8
    // 0x8021FF58: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_802168A8_680288(rdram, ctx);
        goto after_41;
    // 0x8021FF58: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_41:
    // 0x8021FF5C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8021FF60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021FF64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021FF68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021FF6C: jal         0x802169BC
    // 0x8021FF70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_802169BC_68039C(rdram, ctx);
        goto after_42;
    // 0x8021FF70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_42:
L_8021FF74:
    // 0x8021FF74: jal         0x8000DD58
    // 0x8021FF78: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_8000DD58_E958(rdram, ctx);
        goto after_43;
    // 0x8021FF78: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_43:
    // 0x8021FF7C: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x8021FF80: lh          $t2, 0x2($t6)
    ctx->r10 = MEM_H(ctx->r14, 0X2);
    // 0x8021FF84: addu        $t7, $v0, $t2
    ctx->r15 = ADD32(ctx->r2, ctx->r10);
    // 0x8021FF88: addiu       $t5, $t7, 0xA
    ctx->r13 = ADD32(ctx->r15, 0XA);
    // 0x8021FF8C: b           L_80223B08
    // 0x8021FF90: sh          $t5, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r13;
        goto L_80223B08;
    // 0x8021FF90: sh          $t5, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r13;
    // 0x8021FF94: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_8021FF98:
    // 0x8021FF98: addiu       $at, $zero, 0x190
    ctx->r1 = ADD32(0, 0X190);
    // 0x8021FF9C: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x8021FFA0: bnel        $t9, $at, L_80220060
    if (ctx->r25 != ctx->r1) {
        // 0x8021FFA4: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_80220060;
    }
    goto skip_6;
    // 0x8021FFA4: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_6:
    // 0x8021FFA8: lw          $a0, 0x38($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X38);
    // 0x8021FFAC: jal         0x80224040
    // 0x8021FFB0: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_80224040_68DA20(rdram, ctx);
        goto after_44;
    // 0x8021FFB0: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_44:
    // 0x8021FFB4: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x8021FFB8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8021FFBC: jal         0x802240B0
    // 0x8021FFC0: lw          $a0, 0x38($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X38);
    func_802240B0_68DA90(rdram, ctx);
        goto after_45;
    // 0x8021FFC0: lw          $a0, 0x38($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X38);
    after_45:
    // 0x8021FFC4: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8021FFC8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8021FFCC: sw          $t1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r9;
    // 0x8021FFD0: lw          $t4, 0x3C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X3C);
    // 0x8021FFD4: beql        $t4, $zero, L_80223B0C
    if (ctx->r12 == 0) {
        // 0x8021FFD8: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_7;
    // 0x8021FFD8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_7:
    // 0x8021FFDC: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
L_8021FFE0:
    // 0x8021FFE0: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x8021FFE4: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8021FFE8: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x8021FFEC: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x8021FFF0: jal         0x802171EC
    // 0x8021FFF4: lw          $a0, 0x38($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X38);
    func_802171EC_680BCC(rdram, ctx);
        goto after_46;
    // 0x8021FFF4: lw          $a0, 0x38($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X38);
    after_46:
    // 0x8021FFF8: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x8021FFFC: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80220000: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80220004: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80220008: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8022000C: jal         0x802171F8
    // 0x80220010: lw          $a0, 0x38($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X38);
    func_802171F8_680BD8(rdram, ctx);
        goto after_47;
    // 0x80220010: lw          $a0, 0x38($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X38);
    after_47:
    // 0x80220014: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x80220018: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8022001C: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80220020: addu        $t2, $t3, $t7
    ctx->r10 = ADD32(ctx->r11, ctx->r15);
    // 0x80220024: sw          $zero, 0x38($t2)
    MEM_W(0X38, ctx->r10) = 0;
    // 0x80220028: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x8022002C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80220030: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x80220034: beq         $at, $zero, L_80223B08
    if (ctx->r1 == 0) {
        // 0x80220038: sw          $t6, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r14;
            goto L_80223B08;
    }
    // 0x80220038: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    // 0x8022003C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80220040: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80220044: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80220048: lw          $t1, 0x38($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X38);
    // 0x8022004C: bnel        $t1, $zero, L_8021FFE0
    if (ctx->r9 != 0) {
        // 0x80220050: lw          $t7, 0x78($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X78);
            goto L_8021FFE0;
    }
    goto skip_8;
    // 0x80220050: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    skip_8:
    // 0x80220054: b           L_80223B0C
    // 0x80220058: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80220058: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8022005C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_80220060:
    // 0x80220060: addiu       $at, $zero, 0x1B8
    ctx->r1 = ADD32(0, 0X1B8);
    // 0x80220064: lh          $t3, 0x2($t4)
    ctx->r11 = MEM_H(ctx->r12, 0X2);
    // 0x80220068: bnel        $t3, $at, L_80223B0C
    if (ctx->r11 != ctx->r1) {
        // 0x8022006C: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_9;
    // 0x8022006C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_9:
    // 0x80220070: lw          $a0, 0x38($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X38);
    // 0x80220074: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80220078: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x8022007C: jal         0x8022406C
    // 0x80220080: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    func_8022406C_68DA4C(rdram, ctx);
        goto after_48;
    // 0x80220080: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    after_48:
    // 0x80220084: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80220088: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8022008C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80220090: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x80220094: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x80220098: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x8022009C: jal         0x80225434
    // 0x802200A0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80225434_68EE14(rdram, ctx);
        goto after_49;
    // 0x802200A0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_49:
    // 0x802200A4: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x802200A8: addiu       $a0, $zero, 0x2A9
    ctx->r4 = ADD32(0, 0X2A9);
    // 0x802200AC: jal         0x80038B98
    // 0x802200B0: sw          $v0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->r2;
    func_80038B98_39798(rdram, ctx);
        goto after_50;
    // 0x802200B0: sw          $v0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->r2;
    after_50:
    // 0x802200B4: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x802200B8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x802200BC: sh          $zero, 0x2($t2)
    MEM_H(0X2, ctx->r10) = 0;
    // 0x802200C0: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x802200C4: b           L_80223B08
    // 0x802200C8: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
        goto L_80223B08;
    // 0x802200C8: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
L_802200CC:
    // 0x802200CC: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x802200D0: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802200D4: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x802200D8: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x802200DC: jal         0x8022406C
    // 0x802200E0: lw          $a0, 0x38($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X38);
    func_8022406C_68DA4C(rdram, ctx);
        goto after_51;
    // 0x802200E0: lw          $a0, 0x38($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X38);
    after_51:
    // 0x802200E4: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802200E8: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x802200EC: lh          $t0, 0x2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X2);
    // 0x802200F0: bnel        $t0, $at, L_80220104
    if (ctx->r8 != ctx->r1) {
        // 0x802200F4: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80220104;
    }
    goto skip_10;
    // 0x802200F4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_10:
    // 0x802200F8: jal         0x80038B98
    // 0x802200FC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_80038B98_39798(rdram, ctx);
        goto after_52;
    // 0x802200FC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_52:
    // 0x80220100: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80220104:
    // 0x80220104: lh          $t3, 0x2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X2);
    // 0x80220108: slti        $at, $t3, 0x79
    ctx->r1 = SIGNED(ctx->r11) < 0X79 ? 1 : 0;
    // 0x8022010C: bne         $at, $zero, L_80220158
    if (ctx->r1 != 0) {
        // 0x80220110: slti        $at, $t3, 0x168
        ctx->r1 = SIGNED(ctx->r11) < 0X168 ? 1 : 0;
            goto L_80220158;
    }
    // 0x80220110: slti        $at, $t3, 0x168
    ctx->r1 = SIGNED(ctx->r11) < 0X168 ? 1 : 0;
    // 0x80220114: beql        $at, $zero, L_8022015C
    if (ctx->r1 == 0) {
        // 0x80220118: lw          $t2, 0x84($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X84);
            goto L_8022015C;
    }
    goto skip_11;
    // 0x80220118: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    skip_11:
    // 0x8022011C: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    // 0x80220120: jal         0x800124A0
    // 0x80220124: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_53;
    // 0x80220124: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_53:
    // 0x80220128: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8022012C: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x80220130: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x80220134: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x80220138: jal         0x80012628
    // 0x8022013C: lw          $a0, 0x18($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X18);
    func_80012628_13228(rdram, ctx);
        goto after_54;
    // 0x8022013C: lw          $a0, 0x18($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X18);
    after_54:
    // 0x80220140: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80220144: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x80220148: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x8022014C: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    // 0x80220150: jal         0x80012518
    // 0x80220154: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    func_80012518_13118(rdram, ctx);
        goto after_55;
    // 0x80220154: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    after_55:
L_80220158:
    // 0x80220158: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
L_8022015C:
    // 0x8022015C: addiu       $at, $zero, 0x21C
    ctx->r1 = ADD32(0, 0X21C);
    // 0x80220160: lh          $t5, 0x2($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X2);
    // 0x80220164: bnel        $t5, $at, L_80220220
    if (ctx->r13 != ctx->r1) {
        // 0x80220168: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_80220220;
    }
    goto skip_12;
    // 0x80220168: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_12:
    // 0x8022016C: jal         0x80012470
    // 0x80220170: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    func_80012470_13070(rdram, ctx);
        goto after_56;
    // 0x80220170: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    after_56:
    // 0x80220174: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80220178: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022017C: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80220180: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80220184: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x80220188: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8022018C: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x80220190: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80220194: jal         0x80224BA4
    // 0x80220198: nop

    func_80224BA4_68E584(rdram, ctx);
        goto after_57;
    // 0x80220198: nop

    after_57:
    // 0x8022019C: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x802201A0: lui         $a1, 0x42C0
    ctx->r5 = S32(0X42C0 << 16);
    // 0x802201A4: sw          $v0, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->r2;
    // 0x802201A8: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x802201AC: jal         0x80224B24
    // 0x802201B0: lw          $a0, 0x40($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X40);
    func_80224B24_68E504(rdram, ctx);
        goto after_58;
    // 0x802201B0: lw          $a0, 0x40($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X40);
    after_58:
    // 0x802201B4: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802201B8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802201BC: jal         0x80224B30
    // 0x802201C0: lw          $a0, 0x40($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X40);
    func_80224B30_68E510(rdram, ctx);
        goto after_59;
    // 0x802201C0: lw          $a0, 0x40($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X40);
    after_59:
    // 0x802201C4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x802201C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802201CC: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802201D0: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x802201D4: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x802201D8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802201DC: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x802201E0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x802201E4: jal         0x80224F6C
    // 0x802201E8: nop

    func_80224F6C_68E94C(rdram, ctx);
        goto after_60;
    // 0x802201E8: nop

    after_60:
    // 0x802201EC: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802201F0: lui         $a1, 0x42C0
    ctx->r5 = S32(0X42C0 << 16);
    // 0x802201F4: sw          $v0, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->r2;
    // 0x802201F8: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x802201FC: jal         0x80224EEC
    // 0x80220200: lw          $a0, 0x44($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X44);
    func_80224EEC_68E8CC(rdram, ctx);
        goto after_61;
    // 0x80220200: lw          $a0, 0x44($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X44);
    after_61:
    // 0x80220204: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80220208: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022020C: jal         0x80224EF8
    // 0x80220210: lw          $a0, 0x44($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X44);
    func_80224EF8_68E8D8(rdram, ctx);
        goto after_62;
    // 0x80220210: lw          $a0, 0x44($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X44);
    after_62:
    // 0x80220214: b           L_80223B0C
    // 0x80220218: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80220218: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8022021C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_80220220:
    // 0x80220220: addiu       $at, $zero, 0x280
    ctx->r1 = ADD32(0, 0X280);
    // 0x80220224: lh          $t7, 0x2($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X2);
    // 0x80220228: bnel        $t7, $at, L_80223B0C
    if (ctx->r15 != ctx->r1) {
        // 0x8022022C: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_13;
    // 0x8022022C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_13:
    // 0x80220230: sh          $zero, 0x2($t4)
    MEM_H(0X2, ctx->r12) = 0;
    // 0x80220234: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80220238: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x8022023C: b           L_80223B08
    // 0x80220240: sb          $t5, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r13;
        goto L_80223B08;
    // 0x80220240: sb          $t5, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r13;
L_80220244:
    // 0x80220244: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80220248: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x8022024C: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x80220250: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x80220254: jal         0x8022406C
    // 0x80220258: lw          $a0, 0x38($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X38);
    func_8022406C_68DA4C(rdram, ctx);
        goto after_63;
    // 0x80220258: lw          $a0, 0x38($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X38);
    after_63:
    // 0x8022025C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80220260: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80220264: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x80220268: bnel        $t9, $at, L_802203F0
    if (ctx->r25 != ctx->r1) {
        // 0x8022026C: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_802203F0;
    }
    goto skip_14;
    // 0x8022026C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_14:
    // 0x80220270: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    // 0x80220274: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x80220278: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x8022027C: jal         0x800133E0
    // 0x80220280: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    func_800133E0_13FE0(rdram, ctx);
        goto after_64;
    // 0x80220280: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    after_64:
    // 0x80220284: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80220288: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x8022028C: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    // 0x80220290: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x80220294: jal         0x80013400
    // 0x80220298: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    func_80013400_14000(rdram, ctx);
        goto after_65;
    // 0x80220298: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    after_65:
    // 0x8022029C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802202A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802202A4: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802202A8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x802202AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802202B0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802202B4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802202B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802202BC: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802202C0: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802202C4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802202C8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802202CC: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x802202D0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802202D4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802202D8: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x802202DC: jal         0x80225C0C
    // 0x802202E0: nop

    func_80225C0C_68F5EC(rdram, ctx);
        goto after_66;
    // 0x802202E0: nop

    after_66:
    // 0x802202E4: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x802202E8: sw          $v0, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->r2;
    // 0x802202EC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802202F0: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x802202F4: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x802202F8: jal         0x80225AB0
    // 0x802202FC: lw          $a0, 0x48($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X48);
    func_80225AB0_68F490(rdram, ctx);
        goto after_67;
    // 0x802202FC: lw          $a0, 0x48($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X48);
    after_67:
    // 0x80220300: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80220304: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80220308: jal         0x802259DC
    // 0x8022030C: lw          $a0, 0x48($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X48);
    func_802259DC_68F3BC(rdram, ctx);
        goto after_68;
    // 0x8022030C: lw          $a0, 0x48($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X48);
    after_68:
    // 0x80220310: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80220314: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    // 0x80220318: jal         0x80225980
    // 0x8022031C: lw          $a0, 0x48($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X48);
    func_80225980_68F360(rdram, ctx);
        goto after_69;
    // 0x8022031C: lw          $a0, 0x48($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X48);
    after_69:
    // 0x80220320: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80220324: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80220328: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8022032C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80220330: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80220334: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80220338: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8022033C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80220340: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80220344: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80220348: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8022034C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80220350: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80220354: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80220358: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8022035C: lw          $a0, 0x48($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X48);
    // 0x80220360: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80220364: jal         0x80225B54
    // 0x80220368: nop

    func_80225B54_68F534(rdram, ctx);
        goto after_70;
    // 0x80220368: nop

    after_70:
    // 0x8022036C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80220370: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    // 0x80220374: jal         0x800124A0
    // 0x80220378: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    func_800124A0_130A0(rdram, ctx);
        goto after_71;
    // 0x80220378: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    after_71:
    // 0x8022037C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80220380: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80220384: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80220388: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x8022038C: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x80220390: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80220394: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x80220398: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    // 0x8022039C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802203A0: jal         0x80012628
    // 0x802203A4: nop

    func_80012628_13228(rdram, ctx);
        goto after_72;
    // 0x802203A4: nop

    after_72:
    // 0x802203A8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802203AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802203B0: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x802203B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802203B8: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802203BC: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802203C0: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802203C4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802203C8: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x802203CC: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    // 0x802203D0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802203D4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x802203D8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802203DC: jal         0x80012518
    // 0x802203E0: nop

    func_80012518_13118(rdram, ctx);
        goto after_73;
    // 0x802203E0: nop

    after_73:
    // 0x802203E4: b           L_80223B0C
    // 0x802203E8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x802203E8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802203EC: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_802203F0:
    // 0x802203F0: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x802203F4: lh          $t0, 0x2($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X2);
    // 0x802203F8: bnel        $t0, $at, L_80220430
    if (ctx->r8 != ctx->r1) {
        // 0x802203FC: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80220430;
    }
    goto skip_15;
    // 0x802203FC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_15:
    // 0x80220400: lw          $a0, 0x1C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1C);
    // 0x80220404: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80220408: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8022040C: jal         0x8020D4D0
    // 0x80220410: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_74;
    // 0x80220410: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_74:
    // 0x80220414: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80220418: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x8022041C: jal         0x8020D4EC
    // 0x80220420: lw          $a0, 0x1C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X1C);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_75;
    // 0x80220420: lw          $a0, 0x1C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X1C);
    after_75:
    // 0x80220424: b           L_80223B0C
    // 0x80220428: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80220428: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8022042C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80220430:
    // 0x80220430: addiu       $at, $zero, 0x104
    ctx->r1 = ADD32(0, 0X104);
    // 0x80220434: lh          $t7, 0x2($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X2);
    // 0x80220438: bnel        $t7, $at, L_80223B0C
    if (ctx->r15 != ctx->r1) {
        // 0x8022043C: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_16;
    // 0x8022043C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_16:
    // 0x80220440: sh          $zero, 0x2($t1)
    MEM_H(0X2, ctx->r9) = 0;
    // 0x80220444: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80220448: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x8022044C: b           L_80223B08
    // 0x80220450: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
        goto L_80223B08;
    // 0x80220450: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
L_80220454:
    // 0x80220454: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80220458: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8022045C: lh          $t6, 0x2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X2);
    // 0x80220460: bnel        $t6, $at, L_802206E0
    if (ctx->r14 != ctx->r1) {
        // 0x80220464: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_802206E0;
    }
    goto skip_17;
    // 0x80220464: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_17:
    // 0x80220468: lw          $a0, 0x1C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X1C);
    // 0x8022046C: jal         0x8020D4B8
    // 0x80220470: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_76;
    // 0x80220470: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_76:
    // 0x80220474: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80220478: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8022047C: jal         0x8020D4EC
    // 0x80220480: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_77;
    // 0x80220480: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    after_77:
    // 0x80220484: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
L_80220488:
    // 0x80220488: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x8022048C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80220490: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x80220494: addu        $t7, $t0, $t3
    ctx->r15 = ADD32(ctx->r8, ctx->r11);
    // 0x80220498: lw          $t1, 0x38($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X38);
    // 0x8022049C: beql        $t1, $zero, L_802204C4
    if (ctx->r9 == 0) {
        // 0x802204A0: lw          $t9, 0x78($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X78);
            goto L_802204C4;
    }
    goto skip_18;
    // 0x802204A0: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    skip_18:
    // 0x802204A4: jal         0x80034EF8
    // 0x802204A8: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_78;
    // 0x802204A8: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_78:
    // 0x802204AC: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x802204B0: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x802204B4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x802204B8: addu        $t2, $t4, $t6
    ctx->r10 = ADD32(ctx->r12, ctx->r14);
    // 0x802204BC: sw          $zero, 0x38($t2)
    MEM_W(0X38, ctx->r10) = 0;
    // 0x802204C0: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
L_802204C4:
    // 0x802204C4: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x802204C8: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x802204CC: bne         $at, $zero, L_80220488
    if (ctx->r1 != 0) {
        // 0x802204D0: sw          $t8, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r24;
            goto L_80220488;
    }
    // 0x802204D0: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    // 0x802204D4: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802204D8: lw          $t3, 0x20($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X20);
    // 0x802204DC: beql        $t3, $zero, L_802204F8
    if (ctx->r11 == 0) {
        // 0x802204E0: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_802204F8;
    }
    goto skip_19;
    // 0x802204E0: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_19:
    // 0x802204E4: jal         0x80034EF8
    // 0x802204E8: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_79;
    // 0x802204E8: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_79:
    // 0x802204EC: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x802204F0: sw          $zero, 0x20($t7)
    MEM_W(0X20, ctx->r15) = 0;
    // 0x802204F4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_802204F8:
    // 0x802204F8: lw          $t5, 0x28($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X28);
    // 0x802204FC: bnel        $t5, $zero, L_80220524
    if (ctx->r13 != 0) {
        // 0x80220500: lw          $t6, 0x84($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X84);
            goto L_80220524;
    }
    goto skip_20;
    // 0x80220500: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    skip_20:
    // 0x80220504: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80220508: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8022050C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80220510: jal         0x80212684
    // 0x80220514: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80212684_67C064(rdram, ctx);
        goto after_80;
    // 0x80220514: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_80:
    // 0x80220518: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8022051C: sw          $v0, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->r2;
    // 0x80220520: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
L_80220524:
    // 0x80220524: jal         0x80212664
    // 0x80220528: lw          $a0, 0x28($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X28);
    func_80212664_67C044(rdram, ctx);
        goto after_81;
    // 0x80220528: lw          $a0, 0x28($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X28);
    after_81:
    // 0x8022052C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80220530: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80220534: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    // 0x80220538: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    // 0x8022053C: jal         0x802122D4
    // 0x80220540: lw          $a0, 0x28($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X28);
    func_802122D4_67BCB4(rdram, ctx);
        goto after_82;
    // 0x80220540: lw          $a0, 0x28($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X28);
    after_82:
    // 0x80220544: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x80220548: addiu       $t9, $t9, -0x39FC
    ctx->r25 = ADD32(ctx->r25, -0X39FC);
    // 0x8022054C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80220550: jal         0x801DACDC
    // 0x80220554: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_83;
    // 0x80220554: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    after_83:
    // 0x80220558: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x8022055C: lw          $t0, 0x2C($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X2C);
    // 0x80220560: bnel        $t0, $zero, L_80220588
    if (ctx->r8 != 0) {
        // 0x80220564: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80220588;
    }
    goto skip_21;
    // 0x80220564: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_21:
    // 0x80220568: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8022056C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80220570: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80220574: jal         0x80228368
    // 0x80220578: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80228368_691D48(rdram, ctx);
        goto after_84;
    // 0x80220578: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_84:
    // 0x8022057C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80220580: sw          $v0, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r2;
    // 0x80220584: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80220588:
    // 0x80220588: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x8022058C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    // 0x80220590: lui         $a3, 0xC150
    ctx->r7 = S32(0XC150 << 16);
    // 0x80220594: jal         0x8022817C
    // 0x80220598: lw          $a0, 0x2C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X2C);
    func_8022817C_691B5C(rdram, ctx);
        goto after_85;
    // 0x80220598: lw          $a0, 0x2C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X2C);
    after_85:
    // 0x8022059C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802205A0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802205A4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802205A8: jal         0x80227FA8
    // 0x802205AC: lw          $a0, 0x2C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X2C);
    func_80227FA8_691988(rdram, ctx);
        goto after_86;
    // 0x802205AC: lw          $a0, 0x2C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X2C);
    after_86:
    // 0x802205B0: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x802205B4: lw          $t4, 0x34($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X34);
    // 0x802205B8: bnel        $t4, $zero, L_802205E0
    if (ctx->r12 != 0) {
        // 0x802205BC: lw          $t2, 0x84($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X84);
            goto L_802205E0;
    }
    goto skip_22;
    // 0x802205BC: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    skip_22:
    // 0x802205C0: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x802205C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802205C8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802205CC: jal         0x80227BCC
    // 0x802205D0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80227BCC_6915AC(rdram, ctx);
        goto after_87;
    // 0x802205D0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_87:
    // 0x802205D4: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x802205D8: sw          $v0, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->r2;
    // 0x802205DC: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
L_802205E0:
    // 0x802205E0: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    // 0x802205E4: lui         $a2, 0x4130
    ctx->r6 = S32(0X4130 << 16);
    // 0x802205E8: lui         $a3, 0xC140
    ctx->r7 = S32(0XC140 << 16);
    // 0x802205EC: jal         0x802279E0
    // 0x802205F0: lw          $a0, 0x34($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X34);
    func_802279E0_6913C0(rdram, ctx);
        goto after_88;
    // 0x802205F0: lw          $a0, 0x34($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X34);
    after_88:
    // 0x802205F4: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802205F8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802205FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80220600: jal         0x80227870
    // 0x80220604: lw          $a0, 0x34($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X34);
    func_80227870_691250(rdram, ctx);
        goto after_89;
    // 0x80220604: lw          $a0, 0x34($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X34);
    after_89:
    // 0x80220608: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x8022060C: lw          $t0, 0x30($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X30);
    // 0x80220610: bnel        $t0, $zero, L_80220638
    if (ctx->r8 != 0) {
        // 0x80220614: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80220638;
    }
    goto skip_23;
    // 0x80220614: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_23:
    // 0x80220618: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8022061C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80220620: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80220624: jal         0x80227494
    // 0x80220628: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80227494_690E74(rdram, ctx);
        goto after_90;
    // 0x80220628: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_90:
    // 0x8022062C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80220630: sw          $v0, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r2;
    // 0x80220634: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80220638:
    // 0x80220638: lui         $a1, 0xC180
    ctx->r5 = S32(0XC180 << 16);
    // 0x8022063C: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    // 0x80220640: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    // 0x80220644: jal         0x8022725C
    // 0x80220648: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    func_8022725C_690C3C(rdram, ctx);
        goto after_91;
    // 0x80220648: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    after_91:
    // 0x8022064C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80220650: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80220654: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80220658: jal         0x80227130
    // 0x8022065C: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    func_80227130_690B10(rdram, ctx);
        goto after_92;
    // 0x8022065C: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    after_92:
    // 0x80220660: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80220664: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80220668: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022066C: jal         0x80225CD0
    // 0x80220670: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80225CD0_68F6B0(rdram, ctx);
        goto after_93;
    // 0x80220670: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_93:
    // 0x80220674: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80220678: addiu       $a1, $zero, 0x780
    ctx->r5 = ADD32(0, 0X780);
    // 0x8022067C: sw          $v0, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r2;
    // 0x80220680: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80220684: jal         0x80012500
    // 0x80220688: lw          $a0, 0x18($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X18);
    func_80012500_13100(rdram, ctx);
        goto after_94;
    // 0x80220688: lw          $a0, 0x18($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X18);
    after_94:
    // 0x8022068C: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80220690: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80220694: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x80220698: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8022069C: jal         0x80012818
    // 0x802206A0: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    func_80012818_13418(rdram, ctx);
        goto after_95;
    // 0x802206A0: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    after_95:
    // 0x802206A4: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x802206A8: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x802206AC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802206B0: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x802206B4: jal         0x800127B8
    // 0x802206B8: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    func_800127B8_133B8(rdram, ctx);
        goto after_96;
    // 0x802206B8: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    after_96:
    // 0x802206BC: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802206C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802206C4: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x802206C8: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x802206CC: jal         0x800133E0
    // 0x802206D0: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    func_800133E0_13FE0(rdram, ctx);
        goto after_97;
    // 0x802206D0: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    after_97:
    // 0x802206D4: b           L_80223B0C
    // 0x802206D8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x802206D8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802206DC: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_802206E0:
    // 0x802206E0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x802206E4: lh          $t0, 0x2($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X2);
    // 0x802206E8: bnel        $t0, $at, L_80220720
    if (ctx->r8 != ctx->r1) {
        // 0x802206EC: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80220720;
    }
    goto skip_24;
    // 0x802206EC: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_24:
    // 0x802206F0: jal         0x8003D310
    // 0x802206F4: addiu       $a0, $zero, 0x2F8
    ctx->r4 = ADD32(0, 0X2F8);
    func_8003D310_3DF10(rdram, ctx);
        goto after_98;
    // 0x802206F4: addiu       $a0, $zero, 0x2F8
    ctx->r4 = ADD32(0, 0X2F8);
    after_98:
    // 0x802206F8: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x802206FC: addiu       $t3, $t3, -0x39FC
    ctx->r11 = ADD32(ctx->r11, -0X39FC);
    // 0x80220700: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x80220704: addiu       $a1, $zero, 0xDF
    ctx->r5 = ADD32(0, 0XDF);
    // 0x80220708: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x8022070C: jal         0x801DAC7C
    // 0x80220710: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_99;
    // 0x80220710: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_99:
    // 0x80220714: b           L_80223B0C
    // 0x80220718: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80220718: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8022071C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80220720:
    // 0x80220720: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x80220724: lh          $t1, 0x2($t7)
    ctx->r9 = MEM_H(ctx->r15, 0X2);
    // 0x80220728: bne         $t1, $at, L_80220750
    if (ctx->r9 != ctx->r1) {
        // 0x8022072C: lui         $t5, 0x8020
        ctx->r13 = S32(0X8020 << 16);
            goto L_80220750;
    }
    // 0x8022072C: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x80220730: addiu       $t5, $t5, -0x39FC
    ctx->r13 = ADD32(ctx->r13, -0X39FC);
    // 0x80220734: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x80220738: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    // 0x8022073C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80220740: jal         0x801DAC7C
    // 0x80220744: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_100;
    // 0x80220744: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_100:
    // 0x80220748: b           L_80223B0C
    // 0x8022074C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x8022074C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80220750:
    // 0x80220750: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80220754: addiu       $at, $zero, 0xAA
    ctx->r1 = ADD32(0, 0XAA);
    // 0x80220758: lh          $t6, 0x2($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X2);
    // 0x8022075C: bnel        $t6, $at, L_80220780
    if (ctx->r14 != ctx->r1) {
        // 0x80220760: lw          $t2, 0x84($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X84);
            goto L_80220780;
    }
    goto skip_25;
    // 0x80220760: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    skip_25:
    // 0x80220764: lw          $a0, 0x30($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X30);
    // 0x80220768: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022076C: jal         0x80227130
    // 0x80220770: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80227130_690B10(rdram, ctx);
        goto after_101;
    // 0x80220770: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_101:
    // 0x80220774: b           L_80223B0C
    // 0x80220778: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80220778: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8022077C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
L_80220780:
    // 0x80220780: addiu       $at, $zero, 0x212
    ctx->r1 = ADD32(0, 0X212);
    // 0x80220784: lh          $t9, 0x2($t2)
    ctx->r25 = MEM_H(ctx->r10, 0X2);
    // 0x80220788: bnel        $t9, $at, L_802207AC
    if (ctx->r25 != ctx->r1) {
        // 0x8022078C: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_802207AC;
    }
    goto skip_26;
    // 0x8022078C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_26:
    // 0x80220790: lw          $a0, 0x30($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X30);
    // 0x80220794: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80220798: jal         0x80227130
    // 0x8022079C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80227130_690B10(rdram, ctx);
        goto after_102;
    // 0x8022079C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_102:
    // 0x802207A0: b           L_80223B0C
    // 0x802207A4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x802207A4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802207A8: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_802207AC:
    // 0x802207AC: addiu       $at, $zero, 0x1FE
    ctx->r1 = ADD32(0, 0X1FE);
    // 0x802207B0: lh          $t0, 0x2($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X2);
    // 0x802207B4: bnel        $t0, $at, L_802207FC
    if (ctx->r8 != ctx->r1) {
        // 0x802207B8: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_802207FC;
    }
    goto skip_27;
    // 0x802207B8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_27:
    // 0x802207BC: lw          $a0, 0x18($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18);
    // 0x802207C0: jal         0x800124A0
    // 0x802207C4: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_103;
    // 0x802207C4: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_103:
    // 0x802207C8: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x802207CC: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    // 0x802207D0: jal         0x800124AC
    // 0x802207D4: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    func_800124AC_130AC(rdram, ctx);
        goto after_104;
    // 0x802207D4: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    after_104:
    // 0x802207D8: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x802207DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802207E0: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x802207E4: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x802207E8: jal         0x80012518
    // 0x802207EC: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    func_80012518_13118(rdram, ctx);
        goto after_105;
    // 0x802207EC: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    after_105:
    // 0x802207F0: b           L_80223B0C
    // 0x802207F4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x802207F4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802207F8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_802207FC:
    // 0x802207FC: addiu       $at, $zero, 0x276
    ctx->r1 = ADD32(0, 0X276);
    // 0x80220800: lh          $t5, 0x2($t1)
    ctx->r13 = MEM_H(ctx->r9, 0X2);
    // 0x80220804: bnel        $t5, $at, L_8022083C
    if (ctx->r13 != ctx->r1) {
        // 0x80220808: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_8022083C;
    }
    goto skip_28;
    // 0x80220808: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_28:
    // 0x8022080C: jal         0x8003D310
    // 0x80220810: addiu       $a0, $zero, 0x2F9
    ctx->r4 = ADD32(0, 0X2F9);
    func_8003D310_3DF10(rdram, ctx);
        goto after_106;
    // 0x80220810: addiu       $a0, $zero, 0x2F9
    ctx->r4 = ADD32(0, 0X2F9);
    after_106:
    // 0x80220814: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x80220818: addiu       $t6, $t6, -0x39FC
    ctx->r14 = ADD32(ctx->r14, -0X39FC);
    // 0x8022081C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x80220820: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x80220824: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x80220828: jal         0x801DAC7C
    // 0x8022082C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_107;
    // 0x8022082C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_107:
    // 0x80220830: b           L_80223B0C
    // 0x80220834: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80220834: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80220838: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_8022083C:
    // 0x8022083C: addiu       $at, $zero, 0x2EE
    ctx->r1 = ADD32(0, 0X2EE);
    // 0x80220840: lh          $t9, 0x2($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X2);
    // 0x80220844: bnel        $t9, $at, L_80223B0C
    if (ctx->r25 != ctx->r1) {
        // 0x80220848: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_29;
    // 0x80220848: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_29:
    // 0x8022084C: sh          $zero, 0x2($t4)
    MEM_H(0X2, ctx->r12) = 0;
    // 0x80220850: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80220854: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x80220858: b           L_80223B08
    // 0x8022085C: sb          $t2, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r10;
        goto L_80223B08;
    // 0x8022085C: sb          $t2, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r10;
L_80220860:
    // 0x80220860: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80220864: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80220868: lh          $t3, 0x2($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X2);
    // 0x8022086C: bnel        $t3, $at, L_802209EC
    if (ctx->r11 != ctx->r1) {
        // 0x80220870: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_802209EC;
    }
    goto skip_30;
    // 0x80220870: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_30:
    // 0x80220874: jal         0x8003F5FC
    // 0x80220878: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003F5FC_401FC(rdram, ctx);
        goto after_108;
    // 0x80220878: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_108:
    // 0x8022087C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80220880: lw          $t1, 0x38($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X38);
    // 0x80220884: beql        $t1, $zero, L_802208A0
    if (ctx->r9 == 0) {
        // 0x80220888: lw          $t6, 0x84($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X84);
            goto L_802208A0;
    }
    goto skip_31;
    // 0x80220888: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    skip_31:
    // 0x8022088C: jal         0x80034EF8
    // 0x80220890: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_109;
    // 0x80220890: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_109:
    // 0x80220894: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80220898: sw          $zero, 0x38($t5)
    MEM_W(0X38, ctx->r13) = 0;
    // 0x8022089C: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
L_802208A0:
    // 0x802208A0: lw          $t9, 0x30($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X30);
    // 0x802208A4: beql        $t9, $zero, L_802208C0
    if (ctx->r25 == 0) {
        // 0x802208A8: lw          $t2, 0x84($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X84);
            goto L_802208C0;
    }
    goto skip_32;
    // 0x802208A8: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    skip_32:
    // 0x802208AC: jal         0x80034EF8
    // 0x802208B0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_110;
    // 0x802208B0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_110:
    // 0x802208B4: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x802208B8: sw          $zero, 0x30($t4)
    MEM_W(0X30, ctx->r12) = 0;
    // 0x802208BC: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
L_802208C0:
    // 0x802208C0: lw          $t0, 0x20($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X20);
    // 0x802208C4: bne         $t0, $zero, L_802208F8
    if (ctx->r8 != 0) {
        // 0x802208C8: lui         $a1, 0xC38D
        ctx->r5 = S32(0XC38D << 16);
            goto L_802208F8;
    }
    // 0x802208C8: lui         $a1, 0xC38D
    ctx->r5 = S32(0XC38D << 16);
    // 0x802208CC: lui         $a3, 0xC4BB
    ctx->r7 = S32(0XC4BB << 16);
    // 0x802208D0: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x802208D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802208D8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802208DC: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x802208E0: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x802208E4: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x802208E8: jal         0x802265A0
    // 0x802208EC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_802265A0_68FF80(rdram, ctx);
        goto after_111;
    // 0x802208EC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_111:
    // 0x802208F0: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x802208F4: sw          $v0, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->r2;
L_802208F8:
    // 0x802208F8: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x802208FC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x80220900: jal         0x80226520
    // 0x80220904: lw          $a0, 0x20($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X20);
    func_80226520_68FF00(rdram, ctx);
        goto after_112;
    // 0x80220904: lw          $a0, 0x20($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X20);
    after_112:
    // 0x80220908: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8022090C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80220910: jal         0x8022652C
    // 0x80220914: lw          $a0, 0x20($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X20);
    func_8022652C_68FF0C(rdram, ctx);
        goto after_113;
    // 0x80220914: lw          $a0, 0x20($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X20);
    after_113:
    // 0x80220918: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x8022091C: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80220920: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x80220924: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x80220928: jal         0x802122F4
    // 0x8022092C: lw          $a0, 0x28($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X28);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_114;
    // 0x8022092C: lw          $a0, 0x28($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X28);
    after_114:
    // 0x80220930: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80220934: lui         $at, 0x4025
    ctx->r1 = S32(0X4025 << 16);
    // 0x80220938: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8022093C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80220940: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80220944: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80220948: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x8022094C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80220950: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80220954: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80220958: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8022095C: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x80220960: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80220964: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80220968: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8022096C: jal         0x8021B34C
    // 0x80220970: nop

    func_8021B34C_684D2C(rdram, ctx);
        goto after_115;
    // 0x80220970: nop

    after_115:
    // 0x80220974: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80220978: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8022097C: sw          $v0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->r2;
    // 0x80220980: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80220984: jal         0x8021AF0C
    // 0x80220988: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    func_8021AF0C_6848EC(rdram, ctx);
        goto after_116;
    // 0x80220988: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    after_116:
    // 0x8022098C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80220990: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80220994: jal         0x8021B120
    // 0x80220998: lw          $a0, 0x3C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X3C);
    func_8021B120_684B00(rdram, ctx);
        goto after_117;
    // 0x80220998: lw          $a0, 0x3C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X3C);
    after_117:
    // 0x8022099C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x802209A0: lui         $a1, 0x3C8B
    ctx->r5 = S32(0X3C8B << 16);
    // 0x802209A4: ori         $a1, $a1, 0x4396
    ctx->r5 = ctx->r5 | 0X4396;
    // 0x802209A8: jal         0x8021B1BC
    // 0x802209AC: lw          $a0, 0x3C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X3C);
    func_8021B1BC_684B9C(rdram, ctx);
        goto after_118;
    // 0x802209AC: lw          $a0, 0x3C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X3C);
    after_118:
    // 0x802209B0: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802209B4: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x802209B8: jal         0x8021B134
    // 0x802209BC: lw          $a0, 0x3C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X3C);
    func_8021B134_684B14(rdram, ctx);
        goto after_119;
    // 0x802209BC: lw          $a0, 0x3C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X3C);
    after_119:
    // 0x802209C0: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x802209C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802209C8: jal         0x8021B270
    // 0x802209CC: lw          $a0, 0x3C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X3C);
    func_8021B270_684C50(rdram, ctx);
        goto after_120;
    // 0x802209CC: lw          $a0, 0x3C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X3C);
    after_120:
    // 0x802209D0: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x802209D4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802209D8: jal         0x8021B1FC
    // 0x802209DC: lw          $a0, 0x3C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X3C);
    func_8021B1FC_684BDC(rdram, ctx);
        goto after_121;
    // 0x802209DC: lw          $a0, 0x3C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X3C);
    after_121:
    // 0x802209E0: b           L_80223B0C
    // 0x802209E4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x802209E4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802209E8: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_802209EC:
    // 0x802209EC: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x802209F0: lh          $t1, 0x2($t7)
    ctx->r9 = MEM_H(ctx->r15, 0X2);
    // 0x802209F4: bnel        $t1, $at, L_80223B0C
    if (ctx->r9 != ctx->r1) {
        // 0x802209F8: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_33;
    // 0x802209F8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_33:
    // 0x802209FC: jal         0x80212640
    // 0x80220A00: lw          $a0, 0x28($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X28);
    func_80212640_67C020(rdram, ctx);
        goto after_122;
    // 0x80220A00: lw          $a0, 0x28($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X28);
    after_122:
    // 0x80220A04: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80220A08: lw          $t6, 0x28($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X28);
    // 0x80220A0C: beql        $t6, $zero, L_80220A28
    if (ctx->r14 == 0) {
        // 0x80220A10: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_80220A28;
    }
    goto skip_34;
    // 0x80220A10: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_34:
    // 0x80220A14: jal         0x80034EF8
    // 0x80220A18: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_123;
    // 0x80220A18: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_123:
    // 0x80220A1C: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80220A20: sw          $zero, 0x28($t9)
    MEM_W(0X28, ctx->r25) = 0;
    // 0x80220A24: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_80220A28:
    // 0x80220A28: lw          $t2, 0x34($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X34);
    // 0x80220A2C: beql        $t2, $zero, L_80220A48
    if (ctx->r10 == 0) {
        // 0x80220A30: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_80220A48;
    }
    goto skip_35;
    // 0x80220A30: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_35:
    // 0x80220A34: jal         0x80034EF8
    // 0x80220A38: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_124;
    // 0x80220A38: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_124:
    // 0x80220A3C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80220A40: sw          $zero, 0x34($t0)
    MEM_W(0X34, ctx->r8) = 0;
    // 0x80220A44: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_80220A48:
    // 0x80220A48: lw          $t3, 0x2C($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X2C);
    // 0x80220A4C: beql        $t3, $zero, L_80220A68
    if (ctx->r11 == 0) {
        // 0x80220A50: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80220A68;
    }
    goto skip_36;
    // 0x80220A50: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_36:
    // 0x80220A54: jal         0x80034EF8
    // 0x80220A58: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_125;
    // 0x80220A58: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_125:
    // 0x80220A5C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80220A60: sw          $zero, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = 0;
    // 0x80220A64: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80220A68:
    // 0x80220A68: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80220A6C: jal         0x80226514
    // 0x80220A70: lw          $a0, 0x20($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X20);
    func_80226514_68FEF4(rdram, ctx);
        goto after_126;
    // 0x80220A70: lw          $a0, 0x20($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X20);
    after_126:
    // 0x80220A74: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80220A78: lw          $a0, 0x3C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X3C);
    // 0x80220A7C: addiu       $a1, $t5, 0x8
    ctx->r5 = ADD32(ctx->r13, 0X8);
    // 0x80220A80: addiu       $a2, $t5, 0xC
    ctx->r6 = ADD32(ctx->r13, 0XC);
    // 0x80220A84: jal         0x8021B140
    // 0x80220A88: addiu       $a3, $t5, 0x10
    ctx->r7 = ADD32(ctx->r13, 0X10);
    func_8021B140_684B20(rdram, ctx);
        goto after_127;
    // 0x80220A88: addiu       $a3, $t5, 0x10
    ctx->r7 = ADD32(ctx->r13, 0X10);
    after_127:
    // 0x80220A8C: lui         $a1, 0xC40D
    ctx->r5 = S32(0XC40D << 16);
    // 0x80220A90: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80220A94: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80220A98: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    // 0x80220A9C: jal         0x80225DA4
    // 0x80220AA0: lui         $a3, 0xC47A
    ctx->r7 = S32(0XC47A << 16);
    func_80225DA4_68F784(rdram, ctx);
        goto after_128;
    // 0x80220AA0: lui         $a3, 0xC47A
    ctx->r7 = S32(0XC47A << 16);
    after_128:
    // 0x80220AA4: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80220AA8: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x80220AAC: sw          $v0, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r2;
    // 0x80220AB0: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80220AB4: sh          $zero, 0x2($t9)
    MEM_H(0X2, ctx->r25) = 0;
    // 0x80220AB8: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80220ABC: b           L_80223B08
    // 0x80220AC0: sb          $t4, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r12;
        goto L_80223B08;
    // 0x80220AC0: sb          $t4, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r12;
L_80220AC4:
    // 0x80220AC4: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80220AC8: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80220ACC: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x80220AD0: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x80220AD4: jal         0x800127FC
    // 0x80220AD8: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    func_800127FC_133FC(rdram, ctx);
        goto after_129;
    // 0x80220AD8: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    after_129:
    // 0x80220ADC: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80220AE0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80220AE4: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x80220AE8: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x80220AEC: jal         0x8001285C
    // 0x80220AF0: lw          $a0, 0x18($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18);
    func_8001285C_1345C(rdram, ctx);
        goto after_130;
    // 0x80220AF0: lw          $a0, 0x18($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18);
    after_130:
    // 0x80220AF4: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80220AF8: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x80220AFC: lh          $a0, 0x2($t3)
    ctx->r4 = MEM_H(ctx->r11, 0X2);
    // 0x80220B00: sll         $t1, $a0, 9
    ctx->r9 = S32(ctx->r4 << 9);
    // 0x80220B04: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x80220B08: mflo        $a0
    ctx->r4 = lo;
    // 0x80220B0C: jal         0x80003EA0
    // 0x80220B10: nop

    func_80003EA0_4AA0(rdram, ctx);
        goto after_131;
    // 0x80220B10: nop

    after_131:
    // 0x80220B14: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80220B18: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80220B1C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80220B20: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80220B24: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80220B28: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x80220B2C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80220B30: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80220B34: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80220B38: lwc1        $f16, -0x5090($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5090);
    // 0x80220B3C: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x80220B40: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80220B44: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x80220B48: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80220B4C: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80220B50: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x80220B54: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80220B58: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x80220B5C: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x80220B60: jal         0x800124A0
    // 0x80220B64: lw          $a0, 0x18($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X18);
    func_800124A0_130A0(rdram, ctx);
        goto after_132;
    // 0x80220B64: lw          $a0, 0x18($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X18);
    after_132:
    // 0x80220B68: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80220B6C: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x80220B70: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x80220B74: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x80220B78: jal         0x80012518
    // 0x80220B7C: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    func_80012518_13118(rdram, ctx);
        goto after_133;
    // 0x80220B7C: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    after_133:
    // 0x80220B80: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80220B84: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x80220B88: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x80220B8C: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x80220B90: jal         0x80012628
    // 0x80220B94: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    func_80012628_13228(rdram, ctx);
        goto after_134;
    // 0x80220B94: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    after_134:
    // 0x80220B98: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80220B9C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x80220BA0: jal         0x8021B134
    // 0x80220BA4: lw          $a0, 0x3C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X3C);
    func_8021B134_684B14(rdram, ctx);
        goto after_135;
    // 0x80220BA4: lw          $a0, 0x3C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X3C);
    after_135:
    // 0x80220BA8: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80220BAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80220BB0: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80220BB4: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80220BB8: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80220BBC: lwc1        $f10, 0x10($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X10);
    // 0x80220BC0: lw          $a0, 0x3C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X3C);
    // 0x80220BC4: lw          $a1, 0x8($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X8);
    // 0x80220BC8: lw          $a2, 0xC($t2)
    ctx->r6 = MEM_W(ctx->r10, 0XC);
    // 0x80220BCC: mul.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80220BD0: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80220BD4: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80220BD8: jal         0x8021B068
    // 0x80220BDC: nop

    func_8021B068_684A48(rdram, ctx);
        goto after_136;
    // 0x80220BDC: nop

    after_136:
    // 0x80220BE0: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80220BE4: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x80220BE8: lh          $t8, 0x2($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X2);
    // 0x80220BEC: bnel        $t8, $at, L_80223B0C
    if (ctx->r24 != ctx->r1) {
        // 0x80220BF0: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_37;
    // 0x80220BF0: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_37:
    // 0x80220BF4: lw          $t3, 0x3C($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X3C);
    // 0x80220BF8: beql        $t3, $zero, L_80220C14
    if (ctx->r11 == 0) {
        // 0x80220BFC: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80220C14;
    }
    goto skip_38;
    // 0x80220BFC: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_38:
    // 0x80220C00: jal         0x80034EF8
    // 0x80220C04: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_137;
    // 0x80220C04: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_137:
    // 0x80220C08: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80220C0C: sw          $zero, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = 0;
    // 0x80220C10: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80220C14:
    // 0x80220C14: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x80220C18: sh          $zero, 0x2($t7)
    MEM_H(0X2, ctx->r15) = 0;
    // 0x80220C1C: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80220C20: b           L_80223B08
    // 0x80220C24: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
        goto L_80223B08;
    // 0x80220C24: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
L_80220C28:
    // 0x80220C28: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80220C2C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80220C30: lh          $t4, 0x2($t9)
    ctx->r12 = MEM_H(ctx->r25, 0X2);
    // 0x80220C34: bnel        $t4, $at, L_80220D18
    if (ctx->r12 != ctx->r1) {
        // 0x80220C38: lw          $t6, 0x84($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X84);
            goto L_80220D18;
    }
    goto skip_39;
    // 0x80220C38: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    skip_39:
    // 0x80220C3C: lw          $a0, 0x38($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X38);
    // 0x80220C40: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80220C44: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x80220C48: jal         0x80225D84
    // 0x80220C4C: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    func_80225D84_68F764(rdram, ctx);
        goto after_138;
    // 0x80220C4C: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    after_138:
    // 0x80220C50: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80220C54: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80220C58: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x80220C5C: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x80220C60: jal         0x800127FC
    // 0x80220C64: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    func_800127FC_133FC(rdram, ctx);
        goto after_139;
    // 0x80220C64: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    after_139:
    // 0x80220C68: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x80220C6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80220C70: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80220C74: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80220C78: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80220C7C: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80220C80: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80220C84: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x80220C88: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x80220C8C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80220C90: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80220C94: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80220C98: jal         0x80225C0C
    // 0x80220C9C: nop

    func_80225C0C_68F5EC(rdram, ctx);
        goto after_140;
    // 0x80220C9C: nop

    after_140:
    // 0x80220CA0: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80220CA4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80220CA8: sw          $v0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->r2;
    // 0x80220CAC: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80220CB0: jal         0x802259DC
    // 0x80220CB4: lw          $a0, 0x3C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X3C);
    func_802259DC_68F3BC(rdram, ctx);
        goto after_141;
    // 0x80220CB4: lw          $a0, 0x3C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X3C);
    after_141:
    // 0x80220CB8: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80220CBC: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    // 0x80220CC0: jal         0x80225980
    // 0x80220CC4: lw          $a0, 0x3C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X3C);
    func_80225980_68F360(rdram, ctx);
        goto after_142;
    // 0x80220CC4: lw          $a0, 0x3C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X3C);
    after_142:
    // 0x80220CC8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80220CCC: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x80220CD0: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x80220CD4: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x80220CD8: jal         0x80225B54
    // 0x80220CDC: lw          $a0, 0x3C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X3C);
    func_80225B54_68F534(rdram, ctx);
        goto after_143;
    // 0x80220CDC: lw          $a0, 0x3C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X3C);
    after_143:
    // 0x80220CE0: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80220CE4: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x80220CE8: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80220CEC: jal         0x80225AB0
    // 0x80220CF0: lw          $a0, 0x3C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X3C);
    func_80225AB0_68F490(rdram, ctx);
        goto after_144;
    // 0x80220CF0: lw          $a0, 0x3C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X3C);
    after_144:
    // 0x80220CF4: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80220CF8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80220CFC: jal         0x8022598C
    // 0x80220D00: lw          $a0, 0x3C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X3C);
    func_8022598C_68F36C(rdram, ctx);
        goto after_145;
    // 0x80220D00: lw          $a0, 0x3C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X3C);
    after_145:
    // 0x80220D04: jal         0x80038B98
    // 0x80220D08: addiu       $a0, $zero, 0x2AA
    ctx->r4 = ADD32(0, 0X2AA);
    func_80038B98_39798(rdram, ctx);
        goto after_146;
    // 0x80220D08: addiu       $a0, $zero, 0x2AA
    ctx->r4 = ADD32(0, 0X2AA);
    after_146:
    // 0x80220D0C: b           L_80223B0C
    // 0x80220D10: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80220D10: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80220D14: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
L_80220D18:
    // 0x80220D18: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x80220D1C: lh          $t4, 0x2($t6)
    ctx->r12 = MEM_H(ctx->r14, 0X2);
    // 0x80220D20: bnel        $t4, $at, L_80220D94
    if (ctx->r12 != ctx->r1) {
        // 0x80220D24: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_80220D94;
    }
    goto skip_40;
    // 0x80220D24: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_40:
    // 0x80220D28: lw          $a0, 0x3C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X3C);
    // 0x80220D2C: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80220D30: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x80220D34: jal         0x80225B20
    // 0x80220D38: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    func_80225B20_68F500(rdram, ctx);
        goto after_147;
    // 0x80220D38: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    after_147:
    // 0x80220D3C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80220D40: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80220D44: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80220D48: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80220D4C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80220D50: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80220D54: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80220D58: lwc1        $f18, -0x508C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X508C);
    // 0x80220D5C: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80220D60: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80220D64: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x80220D68: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80220D6C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80220D70: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80220D74: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x80220D78: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x80220D7C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80220D80: jal         0x8000EEAC
    // 0x80220D84: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_8000EEAC_FAAC(rdram, ctx);
        goto after_148;
    // 0x80220D84: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_148:
    // 0x80220D88: b           L_80223B0C
    // 0x80220D8C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80220D8C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80220D90: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_80220D94:
    // 0x80220D94: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x80220D98: lh          $t0, 0x2($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X2);
    // 0x80220D9C: bnel        $t0, $at, L_80220DE4
    if (ctx->r8 != ctx->r1) {
        // 0x80220DA0: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80220DE4;
    }
    goto skip_41;
    // 0x80220DA0: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_41:
    // 0x80220DA4: lw          $a0, 0x1C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1C);
    // 0x80220DA8: jal         0x8020D4B8
    // 0x80220DAC: lui         $a1, 0x4200
    ctx->r5 = S32(0X4200 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_149;
    // 0x80220DAC: lui         $a1, 0x4200
    ctx->r5 = S32(0X4200 << 16);
    after_149:
    // 0x80220DB0: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80220DB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80220DB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80220DBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80220DC0: jal         0x8020D4D0
    // 0x80220DC4: lw          $a0, 0x1C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X1C);
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_150;
    // 0x80220DC4: lw          $a0, 0x1C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X1C);
    after_150:
    // 0x80220DC8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80220DCC: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x80220DD0: jal         0x8020D4EC
    // 0x80220DD4: lw          $a0, 0x1C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1C);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_151;
    // 0x80220DD4: lw          $a0, 0x1C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1C);
    after_151:
    // 0x80220DD8: b           L_80223B0C
    // 0x80220DDC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80220DDC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80220DE0: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80220DE4:
    // 0x80220DE4: addiu       $at, $zero, 0x1A4
    ctx->r1 = ADD32(0, 0X1A4);
    // 0x80220DE8: lh          $t5, 0x2($t7)
    ctx->r13 = MEM_H(ctx->r15, 0X2);
    // 0x80220DEC: bnel        $t5, $at, L_80223B0C
    if (ctx->r13 != ctx->r1) {
        // 0x80220DF0: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_42;
    // 0x80220DF0: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_42:
    // 0x80220DF4: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
L_80220DF8:
    // 0x80220DF8: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x80220DFC: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80220E00: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80220E04: addu        $t2, $t4, $t9
    ctx->r10 = ADD32(ctx->r12, ctx->r25);
    // 0x80220E08: lw          $t0, 0x38($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X38);
    // 0x80220E0C: beql        $t0, $zero, L_80220E34
    if (ctx->r8 == 0) {
        // 0x80220E10: lw          $t5, 0x78($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X78);
            goto L_80220E34;
    }
    goto skip_43;
    // 0x80220E10: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    skip_43:
    // 0x80220E14: jal         0x80034EF8
    // 0x80220E18: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_152;
    // 0x80220E18: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_152:
    // 0x80220E1C: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x80220E20: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80220E24: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x80220E28: addu        $t7, $t8, $t1
    ctx->r15 = ADD32(ctx->r24, ctx->r9);
    // 0x80220E2C: sw          $zero, 0x38($t7)
    MEM_W(0X38, ctx->r15) = 0;
    // 0x80220E30: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
L_80220E34:
    // 0x80220E34: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80220E38: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x80220E3C: bne         $at, $zero, L_80220DF8
    if (ctx->r1 != 0) {
        // 0x80220E40: sw          $t6, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r14;
            goto L_80220DF8;
    }
    // 0x80220E40: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    // 0x80220E44: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80220E48: lw          $t9, 0x20($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X20);
    // 0x80220E4C: beql        $t9, $zero, L_80220E68
    if (ctx->r25 == 0) {
        // 0x80220E50: lw          $t0, 0x84($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X84);
            goto L_80220E68;
    }
    goto skip_44;
    // 0x80220E50: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    skip_44:
    // 0x80220E54: jal         0x80034EF8
    // 0x80220E58: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_153;
    // 0x80220E58: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_153:
    // 0x80220E5C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80220E60: sw          $zero, 0x20($t2)
    MEM_W(0X20, ctx->r10) = 0;
    // 0x80220E64: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
L_80220E68:
    // 0x80220E68: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x80220E6C: sh          $zero, 0x2($t0)
    MEM_H(0X2, ctx->r8) = 0;
    // 0x80220E70: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80220E74: b           L_80223B08
    // 0x80220E78: sb          $t3, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r11;
        goto L_80223B08;
    // 0x80220E78: sb          $t3, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r11;
L_80220E7C:
    // 0x80220E7C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80220E80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80220E84: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x80220E88: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80220E8C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80220E90: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80220E94: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x80220E98: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x80220E9C: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x80220EA0: lh          $t7, 0x2($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X2);
    // 0x80220EA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80220EA8: bnel        $t7, $at, L_8022112C
    if (ctx->r15 != ctx->r1) {
        // 0x80220EAC: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_8022112C;
    }
    goto skip_45;
    // 0x80220EAC: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_45:
    // 0x80220EB0: jal         0x8021F944
    // 0x80220EB4: nop

    func_8021F944_689324(rdram, ctx);
        goto after_154;
    // 0x80220EB4: nop

    after_154:
    // 0x80220EB8: jal         0x8021F964
    // 0x80220EBC: nop

    func_8021F964_689344(rdram, ctx);
        goto after_155;
    // 0x80220EBC: nop

    after_155:
    // 0x80220EC0: jal         0x8021F9A0
    // 0x80220EC4: nop

    func_8021F9A0_689380(rdram, ctx);
        goto after_156;
    // 0x80220EC4: nop

    after_156:
    // 0x80220EC8: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80220ECC: lui         $a1, 0x4200
    ctx->r5 = S32(0X4200 << 16);
    // 0x80220ED0: jal         0x8020D4B8
    // 0x80220ED4: lw          $a0, 0x1C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X1C);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_157;
    // 0x80220ED4: lw          $a0, 0x1C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X1C);
    after_157:
    // 0x80220ED8: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80220EDC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80220EE0: jal         0x8020D4EC
    // 0x80220EE4: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_158;
    // 0x80220EE4: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    after_158:
    // 0x80220EE8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80220EEC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80220EF0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80220EF4: jal         0x80224430
    // 0x80220EF8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80224430_68DE10(rdram, ctx);
        goto after_159;
    // 0x80220EF8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_159:
    // 0x80220EFC: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80220F00: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80220F04: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80220F08: sw          $v0, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->r2;
    // 0x80220F0C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80220F10: jal         0x80228860
    // 0x80220F14: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80228860_692240(rdram, ctx);
        goto after_160;
    // 0x80220F14: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_160:
    // 0x80220F18: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80220F1C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80220F20: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80220F24: sw          $v0, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r2;
    // 0x80220F28: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80220F2C: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x80220F30: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x80220F34: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80220F38: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80220F3C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80220F40: jal         0x80225C0C
    // 0x80220F44: nop

    func_80225C0C_68F5EC(rdram, ctx);
        goto after_161;
    // 0x80220F44: nop

    after_161:
    // 0x80220F48: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80220F4C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80220F50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80220F54: sw          $v0, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r2;
    // 0x80220F58: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80220F5C: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80220F60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80220F64: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80220F68: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80220F6C: lw          $a0, 0x38($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X38);
    // 0x80220F70: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80220F74: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80220F78: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80220F7C: jal         0x80225AB0
    // 0x80220F80: nop

    func_80225AB0_68F490(rdram, ctx);
        goto after_162;
    // 0x80220F80: nop

    after_162:
    // 0x80220F84: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80220F88: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80220F8C: jal         0x802259DC
    // 0x80220F90: lw          $a0, 0x38($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X38);
    func_802259DC_68F3BC(rdram, ctx);
        goto after_163;
    // 0x80220F90: lw          $a0, 0x38($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X38);
    after_163:
    // 0x80220F94: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80220F98: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80220F9C: jal         0x80225B3C
    // 0x80220FA0: lw          $a0, 0x38($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X38);
    func_80225B3C_68F51C(rdram, ctx);
        goto after_164;
    // 0x80220FA0: lw          $a0, 0x38($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X38);
    after_164:
    // 0x80220FA4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80220FA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80220FAC: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80220FB0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x80220FB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80220FB8: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80220FBC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80220FC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80220FC4: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80220FC8: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80220FCC: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80220FD0: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80220FD4: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80220FD8: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80220FDC: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80220FE0: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80220FE4: jal         0x80228794
    // 0x80220FE8: nop

    func_80228794_692174(rdram, ctx);
        goto after_165;
    // 0x80220FE8: nop

    after_165:
    // 0x80220FEC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80220FF0: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x80220FF4: sw          $v0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->r2;
    // 0x80220FF8: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80220FFC: jal         0x80228698
    // 0x80221000: lw          $a0, 0x3C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X3C);
    func_80228698_692078(rdram, ctx);
        goto after_166;
    // 0x80221000: lw          $a0, 0x3C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X3C);
    after_166:
    // 0x80221004: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80221008: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022100C: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80221010: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x80221014: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80221018: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022101C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80221020: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80221024: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80221028: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8022102C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80221030: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80221034: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80221038: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022103C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80221040: lw          $a0, 0x3C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X3C);
    // 0x80221044: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80221048: jal         0x802286A4
    // 0x8022104C: nop

    func_802286A4_692084(rdram, ctx);
        goto after_167;
    // 0x8022104C: nop

    after_167:
    // 0x80221050: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80221054: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80221058: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x8022105C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80221060: jal         0x800133E0
    // 0x80221064: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    func_800133E0_13FE0(rdram, ctx);
        goto after_168;
    // 0x80221064: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    after_168:
    // 0x80221068: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8022106C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80221070: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80221074: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x80221078: jal         0x80013400
    // 0x8022107C: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
    func_80013400_14000(rdram, ctx);
        goto after_169;
    // 0x8022107C: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
    after_169:
    // 0x80221080: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80221084: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80221088: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8022108C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x80221090: jal         0x80013484
    // 0x80221094: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    func_80013484_14084(rdram, ctx);
        goto after_170;
    // 0x80221094: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    after_170:
    // 0x80221098: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x8022109C: addiu       $a1, $zero, 0x12C0
    ctx->r5 = ADD32(0, 0X12C0);
    // 0x802210A0: jal         0x80012500
    // 0x802210A4: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    func_80012500_13100(rdram, ctx);
        goto after_171;
    // 0x802210A4: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    after_171:
    // 0x802210A8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802210AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802210B0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802210B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802210B8: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802210BC: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802210C0: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802210C4: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802210C8: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x802210CC: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    // 0x802210D0: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802210D4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x802210D8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x802210DC: jal         0x80012818
    // 0x802210E0: nop

    func_80012818_13418(rdram, ctx);
        goto after_172;
    // 0x802210E0: nop

    after_172:
    // 0x802210E4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802210E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802210EC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802210F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802210F4: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802210F8: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802210FC: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80221100: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80221104: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x80221108: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    // 0x8022110C: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80221110: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80221114: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80221118: jal         0x800127B8
    // 0x8022111C: nop

    func_800127B8_133B8(rdram, ctx);
        goto after_173;
    // 0x8022111C: nop

    after_173:
    // 0x80221120: jal         0x80038B98
    // 0x80221124: addiu       $a0, $zero, 0x2AB
    ctx->r4 = ADD32(0, 0X2AB);
    func_80038B98_39798(rdram, ctx);
        goto after_174;
    // 0x80221124: addiu       $a0, $zero, 0x2AB
    ctx->r4 = ADD32(0, 0X2AB);
    after_174:
    // 0x80221128: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_8022112C:
    // 0x8022112C: lh          $t1, 0x2($t8)
    ctx->r9 = MEM_H(ctx->r24, 0X2);
    // 0x80221130: slti        $at, $t1, 0x79
    ctx->r1 = SIGNED(ctx->r9) < 0X79 ? 1 : 0;
    // 0x80221134: bne         $at, $zero, L_8022117C
    if (ctx->r1 != 0) {
        // 0x80221138: slti        $at, $t1, 0x258
        ctx->r1 = SIGNED(ctx->r9) < 0X258 ? 1 : 0;
            goto L_8022117C;
    }
    // 0x80221138: slti        $at, $t1, 0x258
    ctx->r1 = SIGNED(ctx->r9) < 0X258 ? 1 : 0;
    // 0x8022113C: beql        $at, $zero, L_80221180
    if (ctx->r1 == 0) {
        // 0x80221140: lw          $t5, 0x84($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X84);
            goto L_80221180;
    }
    goto skip_46;
    // 0x80221140: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    skip_46:
    // 0x80221144: lw          $a0, 0x18($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18);
    // 0x80221148: jal         0x800124A0
    // 0x8022114C: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_175;
    // 0x8022114C: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    after_175:
    // 0x80221150: lui         $at, 0x42D2
    ctx->r1 = S32(0X42D2 << 16);
    // 0x80221154: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80221158: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8022115C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80221160: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x80221164: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80221168: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x8022116C: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    // 0x80221170: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80221174: jal         0x80012628
    // 0x80221178: nop

    func_80012628_13228(rdram, ctx);
        goto after_176;
    // 0x80221178: nop

    after_176:
L_8022117C:
    // 0x8022117C: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
L_80221180:
    // 0x80221180: addiu       $at, $zero, 0x2D0
    ctx->r1 = ADD32(0, 0X2D0);
    // 0x80221184: lh          $t6, 0x2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X2);
    // 0x80221188: bnel        $t6, $at, L_802211D0
    if (ctx->r14 != ctx->r1) {
        // 0x8022118C: lw          $t2, 0x84($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X84);
            goto L_802211D0;
    }
    goto skip_47;
    // 0x8022118C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    skip_47:
    // 0x80221190: lw          $a0, 0x1C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X1C);
    // 0x80221194: jal         0x8020D4B8
    // 0x80221198: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_177;
    // 0x80221198: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_177:
    // 0x8022119C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x802211A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802211A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802211A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802211AC: jal         0x8020D4D0
    // 0x802211B0: lw          $a0, 0x1C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X1C);
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_178;
    // 0x802211B0: lw          $a0, 0x1C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X1C);
    after_178:
    // 0x802211B4: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802211B8: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x802211BC: jal         0x8020D4EC
    // 0x802211C0: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_179;
    // 0x802211C0: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    after_179:
    // 0x802211C4: b           L_80223B0C
    // 0x802211C8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x802211C8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802211CC: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
L_802211D0:
    // 0x802211D0: addiu       $at, $zero, 0x2E4
    ctx->r1 = ADD32(0, 0X2E4);
    // 0x802211D4: lh          $t0, 0x2($t2)
    ctx->r8 = MEM_H(ctx->r10, 0X2);
    // 0x802211D8: bnel        $t0, $at, L_80223B0C
    if (ctx->r8 != ctx->r1) {
        // 0x802211DC: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_48;
    // 0x802211DC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_48:
    // 0x802211E0: sh          $zero, 0x2($t2)
    MEM_H(0X2, ctx->r10) = 0;
    // 0x802211E4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802211E8: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802211EC: b           L_80223B08
    // 0x802211F0: sb          $t3, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r11;
        goto L_80223B08;
    // 0x802211F0: sb          $t3, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r11;
L_802211F4:
    // 0x802211F4: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x802211F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802211FC: lh          $t7, 0x2($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X2);
    // 0x80221200: bnel        $t7, $at, L_80221518
    if (ctx->r15 != ctx->r1) {
        // 0x80221204: lw          $t0, 0x84($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X84);
            goto L_80221518;
    }
    goto skip_49;
    // 0x80221204: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    skip_49:
    // 0x80221208: lw          $a0, 0x1C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1C);
    // 0x8022120C: jal         0x8020D4B8
    // 0x80221210: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_180;
    // 0x80221210: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_180:
    // 0x80221214: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80221218: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8022121C: jal         0x8020D4EC
    // 0x80221220: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_181;
    // 0x80221220: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    after_181:
    // 0x80221224: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80221228: lw          $t4, 0x3C($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X3C);
    // 0x8022122C: beql        $t4, $zero, L_80221248
    if (ctx->r12 == 0) {
        // 0x80221230: lw          $t0, 0x84($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X84);
            goto L_80221248;
    }
    goto skip_50;
    // 0x80221230: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    skip_50:
    // 0x80221234: jal         0x80034EF8
    // 0x80221238: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_182;
    // 0x80221238: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_182:
    // 0x8022123C: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80221240: sw          $zero, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = 0;
    // 0x80221244: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
L_80221248:
    // 0x80221248: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8022124C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80221250: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80221254: jal         0x80225B00
    // 0x80221258: lw          $a0, 0x38($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X38);
    func_80225B00_68F4E0(rdram, ctx);
        goto after_183;
    // 0x80221258: lw          $a0, 0x38($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X38);
    after_183:
    // 0x8022125C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80221260: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221264: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80221268: jal         0x80225AB0
    // 0x8022126C: lw          $a0, 0x38($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X38);
    func_80225AB0_68F490(rdram, ctx);
        goto after_184;
    // 0x8022126C: lw          $a0, 0x38($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X38);
    after_184:
    // 0x80221270: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80221274: lw          $t1, 0x28($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X28);
    // 0x80221278: bnel        $t1, $zero, L_802212A0
    if (ctx->r9 != 0) {
        // 0x8022127C: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_802212A0;
    }
    goto skip_51;
    // 0x8022127C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_51:
    // 0x80221280: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80221284: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221288: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022128C: jal         0x80212684
    // 0x80221290: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80212684_67C064(rdram, ctx);
        goto after_185;
    // 0x80221290: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_185:
    // 0x80221294: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80221298: sw          $v0, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r2;
    // 0x8022129C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_802212A0:
    // 0x802212A0: jal         0x80212664
    // 0x802212A4: lw          $a0, 0x28($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X28);
    func_80212664_67C044(rdram, ctx);
        goto after_186;
    // 0x802212A4: lw          $a0, 0x28($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X28);
    after_186:
    // 0x802212A8: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x802212AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802212B0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802212B4: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    // 0x802212B8: jal         0x802122D4
    // 0x802212BC: lw          $a0, 0x28($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X28);
    func_802122D4_67BCB4(rdram, ctx);
        goto after_187;
    // 0x802212BC: lw          $a0, 0x28($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X28);
    after_187:
    // 0x802212C0: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x802212C4: addiu       $t5, $t5, -0x39FC
    ctx->r13 = ADD32(ctx->r13, -0X39FC);
    // 0x802212C8: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x802212CC: jal         0x801DACDC
    // 0x802212D0: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_188;
    // 0x802212D0: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    after_188:
    // 0x802212D4: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x802212D8: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802212DC: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x802212E0: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x802212E4: jal         0x802122F4
    // 0x802212E8: lw          $a0, 0x28($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X28);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_189;
    // 0x802212E8: lw          $a0, 0x28($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X28);
    after_189:
    // 0x802212EC: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802212F0: lw          $t0, 0x2C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X2C);
    // 0x802212F4: bnel        $t0, $zero, L_8022131C
    if (ctx->r8 != 0) {
        // 0x802212F8: lw          $t3, 0x84($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X84);
            goto L_8022131C;
    }
    goto skip_52;
    // 0x802212F8: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    skip_52:
    // 0x802212FC: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80221300: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221304: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80221308: jal         0x80228368
    // 0x8022130C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80228368_691D48(rdram, ctx);
        goto after_190;
    // 0x8022130C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_190:
    // 0x80221310: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80221314: sw          $v0, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r2;
    // 0x80221318: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
L_8022131C:
    // 0x8022131C: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    // 0x80221320: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80221324: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x80221328: jal         0x8022817C
    // 0x8022132C: lw          $a0, 0x2C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X2C);
    func_8022817C_691B5C(rdram, ctx);
        goto after_191;
    // 0x8022132C: lw          $a0, 0x2C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X2C);
    after_191:
    // 0x80221330: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221334: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80221338: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022133C: jal         0x80227FA8
    // 0x80221340: lw          $a0, 0x2C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X2C);
    func_80227FA8_691988(rdram, ctx);
        goto after_192;
    // 0x80221340: lw          $a0, 0x2C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X2C);
    after_192:
    // 0x80221344: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80221348: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022134C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80221350: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80221354: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80221358: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8022135C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80221360: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80221364: lw          $a0, 0x2C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X2C);
    // 0x80221368: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022136C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80221370: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80221374: jal         0x80228130
    // 0x80221378: nop

    func_80228130_691B10(rdram, ctx);
        goto after_193;
    // 0x80221378: nop

    after_193:
    // 0x8022137C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80221380: lw          $t6, 0x34($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X34);
    // 0x80221384: bnel        $t6, $zero, L_802213AC
    if (ctx->r14 != 0) {
        // 0x80221388: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_802213AC;
    }
    goto skip_53;
    // 0x80221388: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_53:
    // 0x8022138C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80221390: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221394: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80221398: jal         0x80227BCC
    // 0x8022139C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80227BCC_6915AC(rdram, ctx);
        goto after_194;
    // 0x8022139C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_194:
    // 0x802213A0: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x802213A4: sw          $v0, 0x34($t5)
    MEM_W(0X34, ctx->r13) = ctx->r2;
    // 0x802213A8: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_802213AC:
    // 0x802213AC: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    // 0x802213B0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802213B4: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x802213B8: jal         0x802279E0
    // 0x802213BC: lw          $a0, 0x34($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X34);
    func_802279E0_6913C0(rdram, ctx);
        goto after_195;
    // 0x802213BC: lw          $a0, 0x34($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X34);
    after_195:
    // 0x802213C0: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802213C4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802213C8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802213CC: jal         0x80227870
    // 0x802213D0: lw          $a0, 0x34($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X34);
    func_80227870_691250(rdram, ctx);
        goto after_196;
    // 0x802213D0: lw          $a0, 0x34($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X34);
    after_196:
    // 0x802213D4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802213D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802213DC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802213E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802213E4: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802213E8: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802213EC: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802213F0: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802213F4: lw          $a0, 0x34($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X34);
    // 0x802213F8: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802213FC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80221400: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80221404: jal         0x80227994
    // 0x80221408: nop

    func_80227994_691374(rdram, ctx);
        goto after_197;
    // 0x80221408: nop

    after_197:
    // 0x8022140C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80221410: lw          $t3, 0x30($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X30);
    // 0x80221414: bnel        $t3, $zero, L_8022143C
    if (ctx->r11 != 0) {
        // 0x80221418: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_8022143C;
    }
    goto skip_54;
    // 0x80221418: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_54:
    // 0x8022141C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80221420: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221424: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80221428: jal         0x80227494
    // 0x8022142C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80227494_690E74(rdram, ctx);
        goto after_198;
    // 0x8022142C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_198:
    // 0x80221430: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221434: sw          $v0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r2;
    // 0x80221438: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_8022143C:
    // 0x8022143C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x80221440: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80221444: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x80221448: jal         0x8022725C
    // 0x8022144C: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    func_8022725C_690C3C(rdram, ctx);
        goto after_199;
    // 0x8022144C: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    after_199:
    // 0x80221450: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80221454: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80221458: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022145C: jal         0x80227130
    // 0x80221460: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    func_80227130_690B10(rdram, ctx);
        goto after_200;
    // 0x80221460: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    after_200:
    // 0x80221464: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80221468: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022146C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80221470: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80221474: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80221478: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8022147C: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80221480: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80221484: lw          $a0, 0x30($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X30);
    // 0x80221488: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022148C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80221490: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80221494: jal         0x80227360
    // 0x80221498: nop

    func_80227360_690D40(rdram, ctx);
        goto after_201;
    // 0x80221498: nop

    after_201:
    // 0x8022149C: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x802214A0: addiu       $a1, $zero, 0xC80
    ctx->r5 = ADD32(0, 0XC80);
    // 0x802214A4: jal         0x80012500
    // 0x802214A8: lw          $a0, 0x18($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X18);
    func_80012500_13100(rdram, ctx);
        goto after_202;
    // 0x802214A8: lw          $a0, 0x18($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X18);
    after_202:
    // 0x802214AC: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x802214B0: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x802214B4: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x802214B8: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x802214BC: jal         0x80012818
    // 0x802214C0: lw          $a0, 0x18($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X18);
    func_80012818_13418(rdram, ctx);
        goto after_203;
    // 0x802214C0: lw          $a0, 0x18($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X18);
    after_203:
    // 0x802214C4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802214C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802214CC: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802214D0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x802214D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802214D8: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802214DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802214E0: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802214E4: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802214E8: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802214EC: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802214F0: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802214F4: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802214F8: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x802214FC: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    // 0x80221500: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80221504: jal         0x800127B8
    // 0x80221508: nop

    func_800127B8_133B8(rdram, ctx);
        goto after_204;
    // 0x80221508: nop

    after_204:
    // 0x8022150C: b           L_80223B0C
    // 0x80221510: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221510: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221514: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
L_80221518:
    // 0x80221518: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x8022151C: lh          $t2, 0x2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X2);
    // 0x80221520: bnel        $t2, $at, L_80221558
    if (ctx->r10 != ctx->r1) {
        // 0x80221524: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80221558;
    }
    goto skip_55;
    // 0x80221524: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_55:
    // 0x80221528: jal         0x8003D310
    // 0x8022152C: addiu       $a0, $zero, 0x2FA
    ctx->r4 = ADD32(0, 0X2FA);
    func_8003D310_3DF10(rdram, ctx);
        goto after_205;
    // 0x8022152C: addiu       $a0, $zero, 0x2FA
    ctx->r4 = ADD32(0, 0X2FA);
    after_205:
    // 0x80221530: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x80221534: addiu       $t3, $t3, -0x39FC
    ctx->r11 = ADD32(ctx->r11, -0X39FC);
    // 0x80221538: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x8022153C: addiu       $a1, $zero, 0xDF
    ctx->r5 = ADD32(0, 0XDF);
    // 0x80221540: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80221544: jal         0x801DAC7C
    // 0x80221548: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_206;
    // 0x80221548: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_206:
    // 0x8022154C: b           L_80223B0C
    // 0x80221550: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221550: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221554: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80221558:
    // 0x80221558: addiu       $at, $zero, 0x118
    ctx->r1 = ADD32(0, 0X118);
    // 0x8022155C: lh          $t7, 0x2($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X2);
    // 0x80221560: bne         $t7, $at, L_80221588
    if (ctx->r15 != ctx->r1) {
        // 0x80221564: lui         $t8, 0x8020
        ctx->r24 = S32(0X8020 << 16);
            goto L_80221588;
    }
    // 0x80221564: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x80221568: addiu       $t8, $t8, -0x39FC
    ctx->r24 = ADD32(ctx->r24, -0X39FC);
    // 0x8022156C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80221570: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    // 0x80221574: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80221578: jal         0x801DAC7C
    // 0x8022157C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_207;
    // 0x8022157C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_207:
    // 0x80221580: b           L_80223B0C
    // 0x80221584: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221584: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80221588:
    // 0x80221588: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x8022158C: addiu       $at, $zero, 0x10E
    ctx->r1 = ADD32(0, 0X10E);
    // 0x80221590: lh          $t5, 0x2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X2);
    // 0x80221594: bnel        $t5, $at, L_802215B8
    if (ctx->r13 != ctx->r1) {
        // 0x80221598: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_802215B8;
    }
    goto skip_56;
    // 0x80221598: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_56:
    // 0x8022159C: lw          $a0, 0x30($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X30);
    // 0x802215A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802215A4: jal         0x80227130
    // 0x802215A8: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80227130_690B10(rdram, ctx);
        goto after_208;
    // 0x802215A8: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_208:
    // 0x802215AC: b           L_80223B0C
    // 0x802215B0: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x802215B0: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802215B4: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_802215B8:
    // 0x802215B8: addiu       $at, $zero, 0x23A
    ctx->r1 = ADD32(0, 0X23A);
    // 0x802215BC: lh          $t9, 0x2($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X2);
    // 0x802215C0: bnel        $t9, $at, L_802215E4
    if (ctx->r25 != ctx->r1) {
        // 0x802215C4: lw          $t0, 0x84($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X84);
            goto L_802215E4;
    }
    goto skip_57;
    // 0x802215C4: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    skip_57:
    // 0x802215C8: lw          $a0, 0x30($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X30);
    // 0x802215CC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802215D0: jal         0x80227130
    // 0x802215D4: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80227130_690B10(rdram, ctx);
        goto after_209;
    // 0x802215D4: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_209:
    // 0x802215D8: b           L_80223B0C
    // 0x802215DC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x802215DC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802215E0: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
L_802215E4:
    // 0x802215E4: addiu       $at, $zero, 0x262
    ctx->r1 = ADD32(0, 0X262);
    // 0x802215E8: lh          $t2, 0x2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X2);
    // 0x802215EC: bne         $t2, $at, L_80221614
    if (ctx->r10 != ctx->r1) {
        // 0x802215F0: lui         $t3, 0x8020
        ctx->r11 = S32(0X8020 << 16);
            goto L_80221614;
    }
    // 0x802215F0: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x802215F4: addiu       $t3, $t3, -0x39FC
    ctx->r11 = ADD32(ctx->r11, -0X39FC);
    // 0x802215F8: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x802215FC: addiu       $a1, $zero, 0xDF
    ctx->r5 = ADD32(0, 0XDF);
    // 0x80221600: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80221604: jal         0x801DAC7C
    // 0x80221608: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_210;
    // 0x80221608: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_210:
    // 0x8022160C: b           L_80223B0C
    // 0x80221610: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221610: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80221614:
    // 0x80221614: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221618: addiu       $at, $zero, 0x352
    ctx->r1 = ADD32(0, 0X352);
    // 0x8022161C: lh          $t7, 0x2($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X2);
    // 0x80221620: bne         $t7, $at, L_80221648
    if (ctx->r15 != ctx->r1) {
        // 0x80221624: lui         $t8, 0x8020
        ctx->r24 = S32(0X8020 << 16);
            goto L_80221648;
    }
    // 0x80221624: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x80221628: addiu       $t8, $t8, -0x39FC
    ctx->r24 = ADD32(ctx->r24, -0X39FC);
    // 0x8022162C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80221630: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    // 0x80221634: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80221638: jal         0x801DAC7C
    // 0x8022163C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_211;
    // 0x8022163C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_211:
    // 0x80221640: b           L_80223B0C
    // 0x80221644: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221644: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80221648:
    // 0x80221648: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x8022164C: addiu       $at, $zero, 0x38E
    ctx->r1 = ADD32(0, 0X38E);
    // 0x80221650: lh          $t6, 0x2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X2);
    // 0x80221654: bne         $t6, $at, L_80221690
    if (ctx->r14 != ctx->r1) {
        // 0x80221658: lui         $at, 0x8023
        ctx->r1 = S32(0X8023 << 16);
            goto L_80221690;
    }
    // 0x80221658: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022165C: lwc1        $f4, -0x5088($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5088);
    // 0x80221660: lw          $a0, 0x18($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X18);
    // 0x80221664: lui         $a2, 0xBDCC
    ctx->r6 = S32(0XBDCC << 16);
    // 0x80221668: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x8022166C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80221670: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80221674: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80221678: jal         0x800125D0
    // 0x8022167C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800125D0_131D0(rdram, ctx);
        goto after_212;
    // 0x8022167C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_212:
    // 0x80221680: jal         0x80038B98
    // 0x80221684: addiu       $a0, $zero, 0x252
    ctx->r4 = ADD32(0, 0X252);
    func_80038B98_39798(rdram, ctx);
        goto after_213;
    // 0x80221684: addiu       $a0, $zero, 0x252
    ctx->r4 = ADD32(0, 0X252);
    after_213:
    // 0x80221688: b           L_80223B0C
    // 0x8022168C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x8022168C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80221690:
    // 0x80221690: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80221694: addiu       $at, $zero, 0x3EE
    ctx->r1 = ADD32(0, 0X3EE);
    // 0x80221698: lh          $t4, 0x2($t9)
    ctx->r12 = MEM_H(ctx->r25, 0X2);
    // 0x8022169C: bnel        $t4, $at, L_80221810
    if (ctx->r12 != ctx->r1) {
        // 0x802216A0: lw          $t0, 0x84($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X84);
            goto L_80221810;
    }
    goto skip_58;
    // 0x802216A0: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    skip_58:
    // 0x802216A4: lw          $t0, 0x38($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X38);
    // 0x802216A8: beql        $t0, $zero, L_802216C4
    if (ctx->r8 == 0) {
        // 0x802216AC: lw          $t3, 0x84($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X84);
            goto L_802216C4;
    }
    goto skip_59;
    // 0x802216AC: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    skip_59:
    // 0x802216B0: jal         0x80034EF8
    // 0x802216B4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_214;
    // 0x802216B4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_214:
    // 0x802216B8: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x802216BC: sw          $zero, 0x38($t2)
    MEM_W(0X38, ctx->r10) = 0;
    // 0x802216C0: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
L_802216C4:
    // 0x802216C4: jal         0x8022833C
    // 0x802216C8: lw          $a0, 0x2C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X2C);
    func_8022833C_691D1C(rdram, ctx);
        goto after_215;
    // 0x802216C8: lw          $a0, 0x2C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X2C);
    after_215:
    // 0x802216CC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802216D0: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802216D4: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x802216D8: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x802216DC: jal         0x802122F4
    // 0x802216E0: lw          $a0, 0x28($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X28);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_216;
    // 0x802216E0: lw          $a0, 0x28($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X28);
    after_216:
    // 0x802216E4: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x802216E8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x802216EC: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x802216F0: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x802216F4: jal         0x8022727C
    // 0x802216F8: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    func_8022727C_690C5C(rdram, ctx);
        goto after_217;
    // 0x802216F8: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    after_217:
    // 0x802216FC: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80221700: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80221704: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80221708: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022170C: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80221710: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80221714: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80221718: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x8022171C: div.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80221720: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80221724: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    // 0x80221728: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022172C: div.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80221730: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x80221734: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x80221738: jal         0x80012500
    // 0x8022173C: lw          $a0, 0x18($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18);
    func_80012500_13100(rdram, ctx);
        goto after_218;
    // 0x8022173C: lw          $a0, 0x18($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18);
    after_218:
    // 0x80221740: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80221744: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80221748: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8022174C: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80221750: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x80221754: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80221758: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x8022175C: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    // 0x80221760: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80221764: jal         0x80012818
    // 0x80221768: nop

    func_80012818_13418(rdram, ctx);
        goto after_219;
    // 0x80221768: nop

    after_219:
    // 0x8022176C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80221770: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80221774: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80221778: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8022177C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80221780: sub.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x80221784: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80221788: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8022178C: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80221790: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80221794: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80221798: sub.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x8022179C: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x802217A0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802217A4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802217A8: lw          $a0, 0x18($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X18);
    // 0x802217AC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802217B0: jal         0x800127B8
    // 0x802217B4: nop

    func_800127B8_133B8(rdram, ctx);
        goto after_220;
    // 0x802217B4: nop

    after_220:
    // 0x802217B8: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x802217BC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802217C0: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x802217C4: lw          $a0, 0x18($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X18);
    // 0x802217C8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x802217CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802217D0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802217D4: jal         0x800125D0
    // 0x802217D8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800125D0_131D0(rdram, ctx);
        goto after_221;
    // 0x802217D8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_221:
    // 0x802217DC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802217E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802217E4: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802217E8: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802217EC: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x802217F0: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802217F4: lw          $a0, 0x30($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X30);
    // 0x802217F8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x802217FC: jal         0x80227360
    // 0x80221800: nop

    func_80227360_690D40(rdram, ctx);
        goto after_222;
    // 0x80221800: nop

    after_222:
    // 0x80221804: b           L_80223B0C
    // 0x80221808: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221808: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8022180C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
L_80221810:
    // 0x80221810: addiu       $at, $zero, 0x42A
    ctx->r1 = ADD32(0, 0X42A);
    // 0x80221814: lh          $t2, 0x2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X2);
    // 0x80221818: bne         $t2, $at, L_8022184C
    if (ctx->r10 != ctx->r1) {
        // 0x8022181C: lui         $t3, 0x8020
        ctx->r11 = S32(0X8020 << 16);
            goto L_8022184C;
    }
    // 0x8022181C: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x80221820: addiu       $t3, $t3, -0x39FC
    ctx->r11 = ADD32(ctx->r11, -0X39FC);
    // 0x80221824: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x80221828: jal         0x801DACDC
    // 0x8022182C: addiu       $a1, $zero, 0xE1
    ctx->r5 = ADD32(0, 0XE1);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_223;
    // 0x8022182C: addiu       $a1, $zero, 0xE1
    ctx->r5 = ADD32(0, 0XE1);
    after_223:
    // 0x80221830: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221834: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80221838: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x8022183C: jal         0x80227130
    // 0x80221840: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    func_80227130_690B10(rdram, ctx);
        goto after_224;
    // 0x80221840: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    after_224:
    // 0x80221844: b           L_80223B0C
    // 0x80221848: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221848: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_8022184C:
    // 0x8022184C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80221850: addiu       $at, $zero, 0x4A2
    ctx->r1 = ADD32(0, 0X4A2);
    // 0x80221854: lh          $t8, 0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2);
    // 0x80221858: bnel        $t8, $at, L_80223B0C
    if (ctx->r24 != ctx->r1) {
        // 0x8022185C: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_60;
    // 0x8022185C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_60:
    // 0x80221860: lw          $t6, 0x24($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X24);
    // 0x80221864: beql        $t6, $zero, L_80221880
    if (ctx->r14 == 0) {
        // 0x80221868: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_80221880;
    }
    goto skip_61;
    // 0x80221868: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_61:
    // 0x8022186C: jal         0x80034EF8
    // 0x80221870: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_225;
    // 0x80221870: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_225:
    // 0x80221874: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80221878: sw          $zero, 0x24($t5)
    MEM_W(0X24, ctx->r13) = 0;
    // 0x8022187C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_80221880:
    // 0x80221880: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x80221884: sh          $zero, 0x2($t4)
    MEM_H(0X2, ctx->r12) = 0;
    // 0x80221888: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x8022188C: b           L_80223B08
    // 0x80221890: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
        goto L_80223B08;
    // 0x80221890: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
L_80221894:
    // 0x80221894: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80221898: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8022189C: lh          $t3, 0x2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X2);
    // 0x802218A0: bnel        $t3, $at, L_80221BB4
    if (ctx->r11 != ctx->r1) {
        // 0x802218A4: lw          $t2, 0x84($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X84);
            goto L_80221BB4;
    }
    goto skip_62;
    // 0x802218A4: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    skip_62:
    // 0x802218A8: lw          $a0, 0x1C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X1C);
    // 0x802218AC: jal         0x8020D4EC
    // 0x802218B0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_226;
    // 0x802218B0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_226:
    // 0x802218B4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802218B8: lw          $t8, 0x20($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X20);
    // 0x802218BC: bnel        $t8, $zero, L_802218E4
    if (ctx->r24 != 0) {
        // 0x802218C0: lw          $a0, 0x88($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X88);
            goto L_802218E4;
    }
    goto skip_63;
    // 0x802218C0: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    skip_63:
    // 0x802218C4: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x802218C8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802218CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802218D0: jal         0x80224430
    // 0x802218D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80224430_68DE10(rdram, ctx);
        goto after_227;
    // 0x802218D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_227:
    // 0x802218D8: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x802218DC: sw          $v0, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->r2;
    // 0x802218E0: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
L_802218E4:
    // 0x802218E4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802218E8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802218EC: jal         0x80228914
    // 0x802218F0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80228914_6922F4(rdram, ctx);
        goto after_228;
    // 0x802218F0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_228:
    // 0x802218F4: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x802218F8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802218FC: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x80221900: sw          $v0, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->r2;
    // 0x80221904: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80221908: jal         0x80228DB0
    // 0x8022190C: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    func_80228DB0_692790(rdram, ctx);
        goto after_229;
    // 0x8022190C: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    after_229:
    // 0x80221910: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80221914: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    // 0x80221918: sw          $v0, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r2;
    // 0x8022191C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80221920: jal         0x80228C48
    // 0x80221924: lw          $a0, 0x38($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X38);
    func_80228C48_692628(rdram, ctx);
        goto after_230;
    // 0x80221924: lw          $a0, 0x38($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X38);
    after_230:
    // 0x80221928: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x8022192C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221930: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80221934: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    // 0x80221938: jal         0x80228CF8
    // 0x8022193C: lw          $a0, 0x38($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X38);
    func_80228CF8_6926D8(rdram, ctx);
        goto after_231;
    // 0x8022193C: lw          $a0, 0x38($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X38);
    after_231:
    // 0x80221940: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80221944: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221948: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x8022194C: jal         0x802289CC
    // 0x80221950: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    func_802289CC_6923AC(rdram, ctx);
        goto after_232;
    // 0x80221950: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    after_232:
    // 0x80221954: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80221958: addiu       $a1, $zero, 0xDC0
    ctx->r5 = ADD32(0, 0XDC0);
    // 0x8022195C: sw          $v0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->r2;
    // 0x80221960: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80221964: jal         0x80012500
    // 0x80221968: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    func_80012500_13100(rdram, ctx);
        goto after_233;
    // 0x80221968: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    after_233:
    // 0x8022196C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80221970: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221974: lui         $a2, 0x430C
    ctx->r6 = S32(0X430C << 16);
    // 0x80221978: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8022197C: jal         0x80012818
    // 0x80221980: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    func_80012818_13418(rdram, ctx);
        goto after_234;
    // 0x80221980: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    after_234:
    // 0x80221984: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221988: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8022198C: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80221990: lui         $a3, 0x43A0
    ctx->r7 = S32(0X43A0 << 16);
    // 0x80221994: jal         0x800127B8
    // 0x80221998: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    func_800127B8_133B8(rdram, ctx);
        goto after_235;
    // 0x80221998: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    after_235:
    // 0x8022199C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x802219A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802219A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802219A8: lw          $a0, 0x18($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18);
    // 0x802219AC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802219B0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802219B4: jal         0x800125D0
    // 0x802219B8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800125D0_131D0(rdram, ctx);
        goto after_236;
    // 0x802219B8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_236:
    // 0x802219BC: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x802219C0: lw          $t6, 0x28($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X28);
    // 0x802219C4: bnel        $t6, $zero, L_802219EC
    if (ctx->r14 != 0) {
        // 0x802219C8: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_802219EC;
    }
    goto skip_64;
    // 0x802219C8: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_64:
    // 0x802219CC: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x802219D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802219D4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802219D8: jal         0x80212684
    // 0x802219DC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80212684_67C064(rdram, ctx);
        goto after_237;
    // 0x802219DC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_237:
    // 0x802219E0: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x802219E4: sw          $v0, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->r2;
    // 0x802219E8: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_802219EC:
    // 0x802219EC: jal         0x80212664
    // 0x802219F0: lw          $a0, 0x28($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X28);
    func_80212664_67C044(rdram, ctx);
        goto after_238;
    // 0x802219F0: lw          $a0, 0x28($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X28);
    after_238:
    // 0x802219F4: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x802219F8: addiu       $t9, $t9, -0x39FC
    ctx->r25 = ADD32(ctx->r25, -0X39FC);
    // 0x802219FC: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80221A00: jal         0x801DACDC
    // 0x80221A04: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_239;
    // 0x80221A04: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    after_239:
    // 0x80221A08: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80221A0C: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    // 0x80221A10: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80221A14: lui         $a3, 0x4396
    ctx->r7 = S32(0X4396 << 16);
    // 0x80221A18: jal         0x802122D4
    // 0x80221A1C: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    func_802122D4_67BCB4(rdram, ctx);
        goto after_240;
    // 0x80221A1C: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    after_240:
    // 0x80221A20: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80221A24: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221A28: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x80221A2C: jal         0x802123F4
    // 0x80221A30: lw          $a0, 0x28($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X28);
    func_802123F4_67BDD4(rdram, ctx);
        goto after_241;
    // 0x80221A30: lw          $a0, 0x28($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X28);
    after_241:
    // 0x80221A34: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80221A38: lw          $t1, 0x2C($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X2C);
    // 0x80221A3C: bnel        $t1, $zero, L_80221A64
    if (ctx->r9 != 0) {
        // 0x80221A40: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80221A64;
    }
    goto skip_65;
    // 0x80221A40: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_65:
    // 0x80221A44: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80221A48: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221A4C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80221A50: jal         0x80228368
    // 0x80221A54: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80228368_691D48(rdram, ctx);
        goto after_242;
    // 0x80221A54: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_242:
    // 0x80221A58: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80221A5C: sw          $v0, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->r2;
    // 0x80221A60: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80221A64:
    // 0x80221A64: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80221A68: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80221A6C: jal         0x80227FA8
    // 0x80221A70: lw          $a0, 0x2C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X2C);
    func_80227FA8_691988(rdram, ctx);
        goto after_243;
    // 0x80221A70: lw          $a0, 0x2C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X2C);
    after_243:
    // 0x80221A74: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80221A78: jal         0x80228354
    // 0x80221A7C: lw          $a0, 0x2C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2C);
    func_80228354_691D34(rdram, ctx);
        goto after_244;
    // 0x80221A7C: lw          $a0, 0x2C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2C);
    after_244:
    // 0x80221A80: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80221A84: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x80221A88: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80221A8C: lui         $a3, 0x4396
    ctx->r7 = S32(0X4396 << 16);
    // 0x80221A90: jal         0x8022817C
    // 0x80221A94: lw          $a0, 0x2C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2C);
    func_8022817C_691B5C(rdram, ctx);
        goto after_245;
    // 0x80221A94: lw          $a0, 0x2C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2C);
    after_245:
    // 0x80221A98: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80221A9C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221AA0: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x80221AA4: jal         0x80228130
    // 0x80221AA8: lw          $a0, 0x2C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X2C);
    func_80228130_691B10(rdram, ctx);
        goto after_246;
    // 0x80221AA8: lw          $a0, 0x2C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X2C);
    after_246:
    // 0x80221AAC: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80221AB0: lw          $t0, 0x30($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X30);
    // 0x80221AB4: bnel        $t0, $zero, L_80221ADC
    if (ctx->r8 != 0) {
        // 0x80221AB8: lw          $t2, 0x84($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X84);
            goto L_80221ADC;
    }
    goto skip_66;
    // 0x80221AB8: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    skip_66:
    // 0x80221ABC: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80221AC0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221AC4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80221AC8: jal         0x80227494
    // 0x80221ACC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80227494_690E74(rdram, ctx);
        goto after_247;
    // 0x80221ACC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_247:
    // 0x80221AD0: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80221AD4: sw          $v0, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r2;
    // 0x80221AD8: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
L_80221ADC:
    // 0x80221ADC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80221AE0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80221AE4: jal         0x80227130
    // 0x80221AE8: lw          $a0, 0x30($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X30);
    func_80227130_690B10(rdram, ctx);
        goto after_248;
    // 0x80221AE8: lw          $a0, 0x30($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X30);
    after_248:
    // 0x80221AEC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221AF0: lui         $a1, 0xC1C0
    ctx->r5 = S32(0XC1C0 << 16);
    // 0x80221AF4: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80221AF8: lui         $a3, 0x4396
    ctx->r7 = S32(0X4396 << 16);
    // 0x80221AFC: jal         0x8022725C
    // 0x80221B00: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    func_8022725C_690C3C(rdram, ctx);
        goto after_249;
    // 0x80221B00: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    after_249:
    // 0x80221B04: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80221B08: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221B0C: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x80221B10: jal         0x80227360
    // 0x80221B14: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    func_80227360_690D40(rdram, ctx);
        goto after_250;
    // 0x80221B14: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    after_250:
    // 0x80221B18: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80221B1C: lw          $t6, 0x34($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X34);
    // 0x80221B20: bnel        $t6, $zero, L_80221B48
    if (ctx->r14 != 0) {
        // 0x80221B24: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_80221B48;
    }
    goto skip_67;
    // 0x80221B24: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_67:
    // 0x80221B28: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80221B2C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221B30: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80221B34: jal         0x80227BCC
    // 0x80221B38: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80227BCC_6915AC(rdram, ctx);
        goto after_251;
    // 0x80221B38: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_251:
    // 0x80221B3C: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80221B40: sw          $v0, 0x34($t5)
    MEM_W(0X34, ctx->r13) = ctx->r2;
    // 0x80221B44: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_80221B48:
    // 0x80221B48: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80221B4C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80221B50: jal         0x80227870
    // 0x80221B54: lw          $a0, 0x34($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X34);
    func_80227870_691250(rdram, ctx);
        goto after_252;
    // 0x80221B54: lw          $a0, 0x34($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X34);
    after_252:
    // 0x80221B58: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80221B5C: lui         $a1, 0x41C0
    ctx->r5 = S32(0X41C0 << 16);
    // 0x80221B60: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80221B64: lui         $a3, 0x4396
    ctx->r7 = S32(0X4396 << 16);
    // 0x80221B68: jal         0x802279E0
    // 0x80221B6C: lw          $a0, 0x34($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X34);
    func_802279E0_6913C0(rdram, ctx);
        goto after_253;
    // 0x80221B6C: lw          $a0, 0x34($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X34);
    after_253:
    // 0x80221B70: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80221B74: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221B78: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x80221B7C: jal         0x80227994
    // 0x80221B80: lw          $a0, 0x34($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X34);
    func_80227994_691374(rdram, ctx);
        goto after_254;
    // 0x80221B80: lw          $a0, 0x34($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X34);
    after_254:
    // 0x80221B84: jal         0x8003D310
    // 0x80221B88: addiu       $a0, $zero, 0x2FB
    ctx->r4 = ADD32(0, 0X2FB);
    func_8003D310_3DF10(rdram, ctx);
        goto after_255;
    // 0x80221B88: addiu       $a0, $zero, 0x2FB
    ctx->r4 = ADD32(0, 0X2FB);
    after_255:
    // 0x80221B8C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80221B90: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80221B94: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80221B98: jal         0x80227FA8
    // 0x80221B9C: lw          $a0, 0x2C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X2C);
    func_80227FA8_691988(rdram, ctx);
        goto after_256;
    // 0x80221B9C: lw          $a0, 0x2C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X2C);
    after_256:
    // 0x80221BA0: jal         0x80038B98
    // 0x80221BA4: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    func_80038B98_39798(rdram, ctx);
        goto after_257;
    // 0x80221BA4: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_257:
    // 0x80221BA8: b           L_80221BD8
    // 0x80221BAC: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
        goto L_80221BD8;
    // 0x80221BAC: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80221BB0: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
L_80221BB4:
    // 0x80221BB4: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x80221BB8: lh          $t1, 0x2($t2)
    ctx->r9 = MEM_H(ctx->r10, 0X2);
    // 0x80221BBC: bnel        $t1, $at, L_80221BD8
    if (ctx->r9 != ctx->r1) {
        // 0x80221BC0: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_80221BD8;
    }
    goto skip_68;
    // 0x80221BC0: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_68:
    // 0x80221BC4: lw          $a0, 0x2C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X2C);
    // 0x80221BC8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80221BCC: jal         0x80227FA8
    // 0x80221BD0: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80227FA8_691988(rdram, ctx);
        goto after_258;
    // 0x80221BD0: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_258:
    // 0x80221BD4: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_80221BD8:
    // 0x80221BD8: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x80221BDC: lh          $t7, 0x2($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X2);
    // 0x80221BE0: bnel        $t7, $at, L_80223B0C
    if (ctx->r15 != ctx->r1) {
        // 0x80221BE4: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_69;
    // 0x80221BE4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_69:
    // 0x80221BE8: sh          $zero, 0x2($t8)
    MEM_H(0X2, ctx->r24) = 0;
    // 0x80221BEC: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80221BF0: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80221BF4: b           L_80223B08
    // 0x80221BF8: sb          $t6, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r14;
        goto L_80223B08;
    // 0x80221BF8: sb          $t6, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r14;
L_80221BFC:
    // 0x80221BFC: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80221C00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80221C04: lh          $t9, 0x2($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X2);
    // 0x80221C08: bnel        $t9, $at, L_80221C40
    if (ctx->r25 != ctx->r1) {
        // 0x80221C0C: lw          $t3, 0x84($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X84);
            goto L_80221C40;
    }
    goto skip_70;
    // 0x80221C0C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    skip_70:
    // 0x80221C10: lw          $a0, 0x18($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X18);
    // 0x80221C14: jal         0x800124A0
    // 0x80221C18: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_259;
    // 0x80221C18: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_259:
    // 0x80221C1C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80221C20: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80221C24: lui         $a2, 0x425C
    ctx->r6 = S32(0X425C << 16);
    // 0x80221C28: lui         $a3, 0x43BE
    ctx->r7 = S32(0X43BE << 16);
    // 0x80221C2C: jal         0x80012518
    // 0x80221C30: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    func_80012518_13118(rdram, ctx);
        goto after_260;
    // 0x80221C30: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    after_260:
    // 0x80221C34: b           L_80223B0C
    // 0x80221C38: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221C38: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221C3C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
L_80221C40:
    // 0x80221C40: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80221C44: lh          $t1, 0x2($t3)
    ctx->r9 = MEM_H(ctx->r11, 0X2);
    // 0x80221C48: bnel        $t1, $at, L_80221C6C
    if (ctx->r9 != ctx->r1) {
        // 0x80221C4C: lw          $t2, 0x84($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X84);
            goto L_80221C6C;
    }
    goto skip_71;
    // 0x80221C4C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    skip_71:
    // 0x80221C50: lw          $a0, 0x34($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X34);
    // 0x80221C54: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80221C58: jal         0x80227870
    // 0x80221C5C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80227870_691250(rdram, ctx);
        goto after_261;
    // 0x80221C5C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_261:
    // 0x80221C60: b           L_80223B0C
    // 0x80221C64: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221C64: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221C68: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
L_80221C6C:
    // 0x80221C6C: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x80221C70: lh          $t7, 0x2($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X2);
    // 0x80221C74: bnel        $t7, $at, L_80221CB8
    if (ctx->r15 != ctx->r1) {
        // 0x80221C78: lw          $t6, 0x84($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X84);
            goto L_80221CB8;
    }
    goto skip_72;
    // 0x80221C78: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    skip_72:
    // 0x80221C7C: lw          $a0, 0x34($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X34);
    // 0x80221C80: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80221C84: jal         0x80227870
    // 0x80221C88: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80227870_691250(rdram, ctx);
        goto after_262;
    // 0x80221C88: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_262:
    // 0x80221C8C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80221C90: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80221C94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80221C98: lw          $a0, 0x18($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18);
    // 0x80221C9C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80221CA0: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x80221CA4: jal         0x800125D0
    // 0x80221CA8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800125D0_131D0(rdram, ctx);
        goto after_263;
    // 0x80221CA8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_263:
    // 0x80221CAC: b           L_80223B0C
    // 0x80221CB0: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221CB0: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221CB4: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
L_80221CB8:
    // 0x80221CB8: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x80221CBC: lh          $t5, 0x2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X2);
    // 0x80221CC0: bnel        $t5, $at, L_80223B0C
    if (ctx->r13 != ctx->r1) {
        // 0x80221CC4: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_73;
    // 0x80221CC4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_73:
    // 0x80221CC8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80221CCC: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    // 0x80221CD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80221CD4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80221CD8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80221CDC: jal         0x800125D0
    // 0x80221CE0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800125D0_131D0(rdram, ctx);
        goto after_264;
    // 0x80221CE0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_264:
    // 0x80221CE4: jal         0x80038B98
    // 0x80221CE8: ori         $a0, $zero, 0x8110
    ctx->r4 = 0 | 0X8110;
    func_80038B98_39798(rdram, ctx);
        goto after_265;
    // 0x80221CE8: ori         $a0, $zero, 0x8110
    ctx->r4 = 0 | 0X8110;
    after_265:
    // 0x80221CEC: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80221CF0: addiu       $t4, $zero, 0xD
    ctx->r12 = ADD32(0, 0XD);
    // 0x80221CF4: sh          $zero, 0x2($t9)
    MEM_H(0X2, ctx->r25) = 0;
    // 0x80221CF8: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80221CFC: b           L_80223B08
    // 0x80221D00: sb          $t4, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r12;
        goto L_80223B08;
    // 0x80221D00: sb          $t4, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r12;
L_80221D04:
    // 0x80221D04: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221D08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80221D0C: lh          $t3, 0x2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X2);
    // 0x80221D10: bnel        $t3, $at, L_80221D58
    if (ctx->r11 != ctx->r1) {
        // 0x80221D14: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_80221D58;
    }
    goto skip_74;
    // 0x80221D14: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_74:
    // 0x80221D18: lw          $a0, 0x34($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X34);
    // 0x80221D1C: jal         0x80227988
    // 0x80221D20: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_80227988_691368(rdram, ctx);
        goto after_266;
    // 0x80221D20: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_266:
    // 0x80221D24: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80221D28: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x80221D2C: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    // 0x80221D30: jal         0x80227A30
    // 0x80221D34: lw          $a0, 0x34($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X34);
    func_80227A30_691410(rdram, ctx);
        goto after_267;
    // 0x80221D34: lw          $a0, 0x34($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X34);
    after_267:
    // 0x80221D38: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80221D3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80221D40: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80221D44: jal         0x80227870
    // 0x80221D48: lw          $a0, 0x34($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X34);
    func_80227870_691250(rdram, ctx);
        goto after_268;
    // 0x80221D48: lw          $a0, 0x34($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X34);
    after_268:
    // 0x80221D4C: b           L_80223B0C
    // 0x80221D50: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221D50: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221D54: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_80221D58:
    // 0x80221D58: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80221D5C: lh          $t5, 0x2($t8)
    ctx->r13 = MEM_H(ctx->r24, 0X2);
    // 0x80221D60: bnel        $t5, $at, L_80221D90
    if (ctx->r13 != ctx->r1) {
        // 0x80221D64: lw          $t9, 0x84($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X84);
            goto L_80221D90;
    }
    goto skip_75;
    // 0x80221D64: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    skip_75:
    // 0x80221D68: jal         0x8003D310
    // 0x80221D6C: addiu       $a0, $zero, 0x2FC
    ctx->r4 = ADD32(0, 0X2FC);
    func_8003D310_3DF10(rdram, ctx);
        goto after_269;
    // 0x80221D6C: addiu       $a0, $zero, 0x2FC
    ctx->r4 = ADD32(0, 0X2FC);
    after_269:
    // 0x80221D70: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80221D74: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80221D78: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80221D7C: jal         0x80227870
    // 0x80221D80: lw          $a0, 0x34($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X34);
    func_80227870_691250(rdram, ctx);
        goto after_270;
    // 0x80221D80: lw          $a0, 0x34($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X34);
    after_270:
    // 0x80221D84: b           L_80223B0C
    // 0x80221D88: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221D88: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221D8C: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
L_80221D90:
    // 0x80221D90: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x80221D94: lh          $t4, 0x2($t9)
    ctx->r12 = MEM_H(ctx->r25, 0X2);
    // 0x80221D98: bnel        $t4, $at, L_80221E14
    if (ctx->r12 != ctx->r1) {
        // 0x80221D9C: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_80221E14;
    }
    goto skip_76;
    // 0x80221D9C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_76:
    // 0x80221DA0: lw          $a0, 0x28($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X28);
    // 0x80221DA4: jal         0x802122A4
    // 0x80221DA8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_802122A4_67BC84(rdram, ctx);
        goto after_271;
    // 0x80221DA8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_271:
    // 0x80221DAC: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80221DB0: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80221DB4: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    // 0x80221DB8: jal         0x80212324
    // 0x80221DBC: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    func_80212324_67BD04(rdram, ctx);
        goto after_272;
    // 0x80221DBC: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    after_272:
    // 0x80221DC0: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80221DC4: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x80221DC8: jal         0x80228124
    // 0x80221DCC: lw          $a0, 0x2C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X2C);
    func_80228124_691B04(rdram, ctx);
        goto after_273;
    // 0x80221DCC: lw          $a0, 0x2C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X2C);
    after_273:
    // 0x80221DD0: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221DD4: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80221DD8: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    // 0x80221DDC: jal         0x802281CC
    // 0x80221DE0: lw          $a0, 0x2C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X2C);
    func_802281CC_691BAC(rdram, ctx);
        goto after_274;
    // 0x80221DE0: lw          $a0, 0x2C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X2C);
    after_274:
    // 0x80221DE4: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80221DE8: lui         $a1, 0x420C
    ctx->r5 = S32(0X420C << 16);
    // 0x80221DEC: jal         0x80227250
    // 0x80221DF0: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    func_80227250_690C30(rdram, ctx);
        goto after_275;
    // 0x80221DF0: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    after_275:
    // 0x80221DF4: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80221DF8: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80221DFC: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    // 0x80221E00: jal         0x802272AC
    // 0x80221E04: lw          $a0, 0x30($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X30);
    func_802272AC_690C8C(rdram, ctx);
        goto after_276;
    // 0x80221E04: lw          $a0, 0x30($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X30);
    after_276:
    // 0x80221E08: b           L_80223B0C
    // 0x80221E0C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221E0C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221E10: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_80221E14:
    // 0x80221E14: addiu       $at, $zero, 0x15E
    ctx->r1 = ADD32(0, 0X15E);
    // 0x80221E18: lh          $t5, 0x2($t8)
    ctx->r13 = MEM_H(ctx->r24, 0X2);
    // 0x80221E1C: bnel        $t5, $at, L_80221E40
    if (ctx->r13 != ctx->r1) {
        // 0x80221E20: lw          $t6, 0x84($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X84);
            goto L_80221E40;
    }
    goto skip_77;
    // 0x80221E20: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    skip_77:
    // 0x80221E24: lw          $a0, 0x34($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X34);
    // 0x80221E28: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80221E2C: jal         0x80227870
    // 0x80221E30: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80227870_691250(rdram, ctx);
        goto after_277;
    // 0x80221E30: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_277:
    // 0x80221E34: b           L_80223B0C
    // 0x80221E38: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221E38: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221E3C: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
L_80221E40:
    // 0x80221E40: addiu       $at, $zero, 0x1C2
    ctx->r1 = ADD32(0, 0X1C2);
    // 0x80221E44: lh          $t4, 0x2($t6)
    ctx->r12 = MEM_H(ctx->r14, 0X2);
    // 0x80221E48: bne         $t4, $at, L_80221E70
    if (ctx->r12 != ctx->r1) {
        // 0x80221E4C: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_80221E70;
    }
    // 0x80221E4C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x80221E50: addiu       $t9, $t9, -0x39FC
    ctx->r25 = ADD32(ctx->r25, -0X39FC);
    // 0x80221E54: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80221E58: addiu       $a1, $zero, 0xDF
    ctx->r5 = ADD32(0, 0XDF);
    // 0x80221E5C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80221E60: jal         0x801DAC7C
    // 0x80221E64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_278;
    // 0x80221E64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_278:
    // 0x80221E68: b           L_80223B0C
    // 0x80221E6C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221E6C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80221E70:
    // 0x80221E70: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80221E74: addiu       $at, $zero, 0x1CC
    ctx->r1 = ADD32(0, 0X1CC);
    // 0x80221E78: lh          $t3, 0x2($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X2);
    // 0x80221E7C: bnel        $t3, $at, L_80221EB0
    if (ctx->r11 != ctx->r1) {
        // 0x80221E80: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80221EB0;
    }
    goto skip_78;
    // 0x80221E80: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_78:
    // 0x80221E84: lw          $a0, 0x2C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X2C);
    // 0x80221E88: jal         0x80228124
    // 0x80221E8C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_80228124_691B04(rdram, ctx);
        goto after_279;
    // 0x80221E8C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_279:
    // 0x80221E90: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221E94: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x80221E98: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    // 0x80221E9C: jal         0x802281CC
    // 0x80221EA0: lw          $a0, 0x2C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X2C);
    func_802281CC_691BAC(rdram, ctx);
        goto after_280;
    // 0x80221EA0: lw          $a0, 0x2C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X2C);
    after_280:
    // 0x80221EA4: b           L_80223B0C
    // 0x80221EA8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221EA8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221EAC: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80221EB0:
    // 0x80221EB0: addiu       $at, $zero, 0x1D6
    ctx->r1 = ADD32(0, 0X1D6);
    // 0x80221EB4: lh          $t2, 0x2($t7)
    ctx->r10 = MEM_H(ctx->r15, 0X2);
    // 0x80221EB8: bne         $t2, $at, L_80221EE0
    if (ctx->r10 != ctx->r1) {
        // 0x80221EBC: lui         $t5, 0x8020
        ctx->r13 = S32(0X8020 << 16);
            goto L_80221EE0;
    }
    // 0x80221EBC: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x80221EC0: addiu       $t5, $t5, -0x39FC
    ctx->r13 = ADD32(ctx->r13, -0X39FC);
    // 0x80221EC4: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x80221EC8: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    // 0x80221ECC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80221ED0: jal         0x801DAC7C
    // 0x80221ED4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_281;
    // 0x80221ED4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_281:
    // 0x80221ED8: b           L_80223B0C
    // 0x80221EDC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221EDC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80221EE0:
    // 0x80221EE0: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80221EE4: addiu       $at, $zero, 0x23A
    ctx->r1 = ADD32(0, 0X23A);
    // 0x80221EE8: lh          $t6, 0x2($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X2);
    // 0x80221EEC: bnel        $t6, $at, L_80221F10
    if (ctx->r14 != ctx->r1) {
        // 0x80221EF0: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_80221F10;
    }
    goto skip_79;
    // 0x80221EF0: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_79:
    // 0x80221EF4: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    // 0x80221EF8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80221EFC: jal         0x80227130
    // 0x80221F00: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80227130_690B10(rdram, ctx);
        goto after_282;
    // 0x80221F00: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_282:
    // 0x80221F04: b           L_80223B0C
    // 0x80221F08: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221F08: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221F0C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_80221F10:
    // 0x80221F10: addiu       $at, $zero, 0x262
    ctx->r1 = ADD32(0, 0X262);
    // 0x80221F14: lh          $t9, 0x2($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X2);
    // 0x80221F18: bnel        $t9, $at, L_80221F3C
    if (ctx->r25 != ctx->r1) {
        // 0x80221F1C: lw          $t3, 0x84($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X84);
            goto L_80221F3C;
    }
    goto skip_80;
    // 0x80221F1C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    skip_80:
    // 0x80221F20: lw          $a0, 0x28($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X28);
    // 0x80221F24: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x80221F28: jal         0x80212324
    // 0x80221F2C: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    func_80212324_67BD04(rdram, ctx);
        goto after_283;
    // 0x80221F2C: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    after_283:
    // 0x80221F30: b           L_80223B0C
    // 0x80221F34: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221F34: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221F38: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
L_80221F3C:
    // 0x80221F3C: addiu       $at, $zero, 0x348
    ctx->r1 = ADD32(0, 0X348);
    // 0x80221F40: lh          $t0, 0x2($t3)
    ctx->r8 = MEM_H(ctx->r11, 0X2);
    // 0x80221F44: bnel        $t0, $at, L_80221F68
    if (ctx->r8 != ctx->r1) {
        // 0x80221F48: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80221F68;
    }
    goto skip_81;
    // 0x80221F48: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_81:
    // 0x80221F4C: lw          $a0, 0x30($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X30);
    // 0x80221F50: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80221F54: jal         0x80227130
    // 0x80221F58: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80227130_690B10(rdram, ctx);
        goto after_284;
    // 0x80221F58: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_284:
    // 0x80221F5C: b           L_80223B0C
    // 0x80221F60: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221F60: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221F64: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80221F68:
    // 0x80221F68: addiu       $at, $zero, 0x384
    ctx->r1 = ADD32(0, 0X384);
    // 0x80221F6C: lh          $t7, 0x2($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X2);
    // 0x80221F70: bne         $t7, $at, L_80221F98
    if (ctx->r15 != ctx->r1) {
        // 0x80221F74: lui         $t2, 0x8020
        ctx->r10 = S32(0X8020 << 16);
            goto L_80221F98;
    }
    // 0x80221F74: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x80221F78: addiu       $t2, $t2, -0x39FC
    ctx->r10 = ADD32(ctx->r10, -0X39FC);
    // 0x80221F7C: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x80221F80: addiu       $a1, $zero, 0xDF
    ctx->r5 = ADD32(0, 0XDF);
    // 0x80221F84: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80221F88: jal         0x801DAC7C
    // 0x80221F8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_285;
    // 0x80221F8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_285:
    // 0x80221F90: b           L_80223B0C
    // 0x80221F94: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221F94: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80221F98:
    // 0x80221F98: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80221F9C: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
    // 0x80221FA0: lh          $t6, 0x2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X2);
    // 0x80221FA4: bne         $t6, $at, L_80221FCC
    if (ctx->r14 != ctx->r1) {
        // 0x80221FA8: lui         $t8, 0x8020
        ctx->r24 = S32(0X8020 << 16);
            goto L_80221FCC;
    }
    // 0x80221FA8: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x80221FAC: addiu       $t8, $t8, -0x39FC
    ctx->r24 = ADD32(ctx->r24, -0X39FC);
    // 0x80221FB0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80221FB4: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    // 0x80221FB8: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80221FBC: jal         0x801DAC7C
    // 0x80221FC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_286;
    // 0x80221FC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_286:
    // 0x80221FC4: b           L_80223B0C
    // 0x80221FC8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221FC8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80221FCC:
    // 0x80221FCC: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80221FD0: addiu       $at, $zero, 0x424
    ctx->r1 = ADD32(0, 0X424);
    // 0x80221FD4: lh          $t4, 0x2($t9)
    ctx->r12 = MEM_H(ctx->r25, 0X2);
    // 0x80221FD8: bnel        $t4, $at, L_80221FFC
    if (ctx->r12 != ctx->r1) {
        // 0x80221FDC: lw          $t0, 0x84($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X84);
            goto L_80221FFC;
    }
    goto skip_82;
    // 0x80221FDC: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    skip_82:
    // 0x80221FE0: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    // 0x80221FE4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80221FE8: jal         0x80227FA8
    // 0x80221FEC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80227FA8_691988(rdram, ctx);
        goto after_287;
    // 0x80221FEC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_287:
    // 0x80221FF0: b           L_80223B0C
    // 0x80221FF4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80221FF4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80221FF8: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
L_80221FFC:
    // 0x80221FFC: addiu       $at, $zero, 0x488
    ctx->r1 = ADD32(0, 0X488);
    // 0x80222000: lh          $t3, 0x2($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X2);
    // 0x80222004: bnel        $t3, $at, L_80222028
    if (ctx->r11 != ctx->r1) {
        // 0x80222008: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80222028;
    }
    goto skip_83;
    // 0x80222008: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_83:
    // 0x8022200C: lw          $a0, 0x2C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X2C);
    // 0x80222010: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80222014: jal         0x80227FA8
    // 0x80222018: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80227FA8_691988(rdram, ctx);
        goto after_288;
    // 0x80222018: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_288:
    // 0x8022201C: b           L_80223B0C
    // 0x80222020: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80222020: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222024: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80222028:
    // 0x80222028: addiu       $at, $zero, 0x4D8
    ctx->r1 = ADD32(0, 0X4D8);
    // 0x8022202C: lh          $t7, 0x2($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X2);
    // 0x80222030: bnel        $t7, $at, L_802220D0
    if (ctx->r15 != ctx->r1) {
        // 0x80222034: lw          $t0, 0x84($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X84);
            goto L_802220D0;
    }
    goto skip_84;
    // 0x80222034: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    skip_84:
    // 0x80222038: lw          $a0, 0x28($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X28);
    // 0x8022203C: jal         0x802122A4
    // 0x80222040: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_802122A4_67BC84(rdram, ctx);
        goto after_289;
    // 0x80222040: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_289:
    // 0x80222044: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80222048: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8022204C: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    // 0x80222050: jal         0x80212324
    // 0x80222054: lw          $a0, 0x28($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X28);
    func_80212324_67BD04(rdram, ctx);
        goto after_290;
    // 0x80222054: lw          $a0, 0x28($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X28);
    after_290:
    // 0x80222058: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x8022205C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x80222060: jal         0x80228124
    // 0x80222064: lw          $a0, 0x2C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2C);
    func_80228124_691B04(rdram, ctx);
        goto after_291;
    // 0x80222064: lw          $a0, 0x2C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2C);
    after_291:
    // 0x80222068: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x8022206C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222070: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    // 0x80222074: jal         0x802281CC
    // 0x80222078: lw          $a0, 0x2C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2C);
    func_802281CC_691BAC(rdram, ctx);
        goto after_292;
    // 0x80222078: lw          $a0, 0x2C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2C);
    after_292:
    // 0x8022207C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80222080: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x80222084: jal         0x80227250
    // 0x80222088: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    func_80227250_690C30(rdram, ctx);
        goto after_293;
    // 0x80222088: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    after_293:
    // 0x8022208C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80222090: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222094: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    // 0x80222098: jal         0x802272AC
    // 0x8022209C: lw          $a0, 0x30($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X30);
    func_802272AC_690C8C(rdram, ctx);
        goto after_294;
    // 0x8022209C: lw          $a0, 0x30($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X30);
    after_294:
    // 0x802220A0: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802220A4: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x802220A8: jal         0x80227988
    // 0x802220AC: lw          $a0, 0x34($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X34);
    func_80227988_691368(rdram, ctx);
        goto after_295;
    // 0x802220AC: lw          $a0, 0x34($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X34);
    after_295:
    // 0x802220B0: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x802220B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802220B8: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    // 0x802220BC: jal         0x80227A30
    // 0x802220C0: lw          $a0, 0x34($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X34);
    func_80227A30_691410(rdram, ctx);
        goto after_296;
    // 0x802220C0: lw          $a0, 0x34($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X34);
    after_296:
    // 0x802220C4: b           L_80223B0C
    // 0x802220C8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x802220C8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802220CC: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
L_802220D0:
    // 0x802220D0: addiu       $at, $zero, 0x514
    ctx->r1 = ADD32(0, 0X514);
    // 0x802220D4: lh          $t7, 0x2($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X2);
    // 0x802220D8: bnel        $t7, $at, L_80223B0C
    if (ctx->r15 != ctx->r1) {
        // 0x802220DC: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_85;
    // 0x802220DC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_85:
    // 0x802220E0: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
L_802220E4:
    // 0x802220E4: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x802220E8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802220EC: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x802220F0: addu        $t6, $t1, $t5
    ctx->r14 = ADD32(ctx->r9, ctx->r13);
    // 0x802220F4: lw          $t8, 0x38($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X38);
    // 0x802220F8: beql        $t8, $zero, L_80222120
    if (ctx->r24 == 0) {
        // 0x802220FC: lw          $t7, 0x78($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X78);
            goto L_80222120;
    }
    goto skip_86;
    // 0x802220FC: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    skip_86:
    // 0x80222100: jal         0x80034EF8
    // 0x80222104: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_297;
    // 0x80222104: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_297:
    // 0x80222108: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x8022210C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80222110: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80222114: addu        $t0, $t4, $t3
    ctx->r8 = ADD32(ctx->r12, ctx->r11);
    // 0x80222118: sw          $zero, 0x38($t0)
    MEM_W(0X38, ctx->r8) = 0;
    // 0x8022211C: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
L_80222120:
    // 0x80222120: addiu       $t2, $t7, 0x1
    ctx->r10 = ADD32(ctx->r15, 0X1);
    // 0x80222124: slti        $at, $t2, 0x6
    ctx->r1 = SIGNED(ctx->r10) < 0X6 ? 1 : 0;
    // 0x80222128: bne         $at, $zero, L_802220E4
    if (ctx->r1 != 0) {
        // 0x8022212C: sw          $t2, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r10;
            goto L_802220E4;
    }
    // 0x8022212C: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
    // 0x80222130: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222134: lw          $t5, 0x24($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X24);
    // 0x80222138: beql        $t5, $zero, L_80222154
    if (ctx->r13 == 0) {
        // 0x8022213C: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_80222154;
    }
    goto skip_87;
    // 0x8022213C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_87:
    // 0x80222140: jal         0x80034EF8
    // 0x80222144: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_298;
    // 0x80222144: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_298:
    // 0x80222148: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x8022214C: sw          $zero, 0x24($t6)
    MEM_W(0X24, ctx->r14) = 0;
    // 0x80222150: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_80222154:
    // 0x80222154: lw          $t9, 0x30($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X30);
    // 0x80222158: beql        $t9, $zero, L_80222174
    if (ctx->r25 == 0) {
        // 0x8022215C: lw          $t3, 0x84($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X84);
            goto L_80222174;
    }
    goto skip_88;
    // 0x8022215C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    skip_88:
    // 0x80222160: jal         0x80034EF8
    // 0x80222164: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_299;
    // 0x80222164: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_299:
    // 0x80222168: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8022216C: sw          $zero, 0x30($t4)
    MEM_W(0X30, ctx->r12) = 0;
    // 0x80222170: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
L_80222174:
    // 0x80222174: lw          $t0, 0x34($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X34);
    // 0x80222178: beql        $t0, $zero, L_80222194
    if (ctx->r8 == 0) {
        // 0x8022217C: lw          $t2, 0x84($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X84);
            goto L_80222194;
    }
    goto skip_89;
    // 0x8022217C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    skip_89:
    // 0x80222180: jal         0x80034EF8
    // 0x80222184: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_300;
    // 0x80222184: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_300:
    // 0x80222188: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8022218C: sw          $zero, 0x34($t7)
    MEM_W(0X34, ctx->r15) = 0;
    // 0x80222190: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
L_80222194:
    // 0x80222194: addiu       $t1, $zero, 0xE
    ctx->r9 = ADD32(0, 0XE);
    // 0x80222198: sh          $zero, 0x2($t2)
    MEM_H(0X2, ctx->r10) = 0;
    // 0x8022219C: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x802221A0: b           L_80223B08
    // 0x802221A4: sb          $t1, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r9;
        goto L_80223B08;
    // 0x802221A4: sb          $t1, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r9;
L_802221A8:
    // 0x802221A8: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x802221AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802221B0: lh          $t8, 0x2($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X2);
    // 0x802221B4: bnel        $t8, $at, L_802223C0
    if (ctx->r24 != ctx->r1) {
        // 0x802221B8: lw          $t5, 0x84($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X84);
            goto L_802223C0;
    }
    goto skip_90;
    // 0x802221B8: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    skip_90:
    // 0x802221BC: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x802221C0: jal         0x8020D4EC
    // 0x802221C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_301;
    // 0x802221C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_301:
    // 0x802221C8: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802221CC: lw          $t4, 0x20($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X20);
    // 0x802221D0: bnel        $t4, $zero, L_802221F8
    if (ctx->r12 != 0) {
        // 0x802221D4: lw          $a0, 0x88($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X88);
            goto L_802221F8;
    }
    goto skip_91;
    // 0x802221D4: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    skip_91:
    // 0x802221D8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x802221DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802221E0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802221E4: jal         0x80224430
    // 0x802221E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80224430_68DE10(rdram, ctx);
        goto after_302;
    // 0x802221E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_302:
    // 0x802221EC: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x802221F0: sw          $v0, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->r2;
    // 0x802221F4: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
L_802221F8:
    // 0x802221F8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802221FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222200: jal         0x80228860
    // 0x80222204: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80228860_692240(rdram, ctx);
        goto after_303;
    // 0x80222204: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_303:
    // 0x80222208: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x8022220C: addiu       $a1, $zero, 0x640
    ctx->r5 = ADD32(0, 0X640);
    // 0x80222210: sw          $v0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r2;
    // 0x80222214: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80222218: jal         0x80012500
    // 0x8022221C: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    func_80012500_13100(rdram, ctx);
        goto after_304;
    // 0x8022221C: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    after_304:
    // 0x80222220: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80222224: lui         $a1, 0x4268
    ctx->r5 = S32(0X4268 << 16);
    // 0x80222228: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x8022222C: lui         $a3, 0x4210
    ctx->r7 = S32(0X4210 << 16);
    // 0x80222230: jal         0x80012818
    // 0x80222234: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    func_80012818_13418(rdram, ctx);
        goto after_305;
    // 0x80222234: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    after_305:
    // 0x80222238: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8022223C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    // 0x80222240: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x80222244: lui         $a3, 0xC2E8
    ctx->r7 = S32(0XC2E8 << 16);
    // 0x80222248: jal         0x800127B8
    // 0x8022224C: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    func_800127B8_133B8(rdram, ctx);
        goto after_306;
    // 0x8022224C: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    after_306:
    // 0x80222250: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80222254: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x80222258: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x8022225C: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    // 0x80222260: jal         0x800133E0
    // 0x80222264: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    func_800133E0_13FE0(rdram, ctx);
        goto after_307;
    // 0x80222264: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    after_307:
    // 0x80222268: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x8022226C: lw          $t6, 0x28($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X28);
    // 0x80222270: bnel        $t6, $zero, L_80222298
    if (ctx->r14 != 0) {
        // 0x80222274: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_80222298;
    }
    goto skip_92;
    // 0x80222274: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_92:
    // 0x80222278: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8022227C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222280: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222284: jal         0x80212684
    // 0x80222288: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80212684_67C064(rdram, ctx);
        goto after_308;
    // 0x80222288: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_308:
    // 0x8022228C: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80222290: sw          $v0, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->r2;
    // 0x80222294: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_80222298:
    // 0x80222298: jal         0x80212664
    // 0x8022229C: lw          $a0, 0x28($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X28);
    func_80212664_67C044(rdram, ctx);
        goto after_309;
    // 0x8022229C: lw          $a0, 0x28($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X28);
    after_309:
    // 0x802222A0: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x802222A4: lui         $a1, 0x4280
    ctx->r5 = S32(0X4280 << 16);
    // 0x802222A8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802222AC: lui         $a3, 0x4210
    ctx->r7 = S32(0X4210 << 16);
    // 0x802222B0: jal         0x802122D4
    // 0x802222B4: lw          $a0, 0x28($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X28);
    func_802122D4_67BCB4(rdram, ctx);
        goto after_310;
    // 0x802222B4: lw          $a0, 0x28($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X28);
    after_310:
    // 0x802222B8: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802222BC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802222C0: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x802222C4: jal         0x802123F4
    // 0x802222C8: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    func_802123F4_67BDD4(rdram, ctx);
        goto after_311;
    // 0x802222C8: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    after_311:
    // 0x802222CC: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x802222D0: lw          $t2, 0x2C($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X2C);
    // 0x802222D4: bnel        $t2, $zero, L_802222FC
    if (ctx->r10 != 0) {
        // 0x802222D8: lw          $t5, 0x84($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X84);
            goto L_802222FC;
    }
    goto skip_93;
    // 0x802222D8: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    skip_93:
    // 0x802222DC: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x802222E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802222E4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802222E8: jal         0x80228368
    // 0x802222EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80228368_691D48(rdram, ctx);
        goto after_312;
    // 0x802222EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_312:
    // 0x802222F0: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802222F4: sw          $v0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r2;
    // 0x802222F8: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
L_802222FC:
    // 0x802222FC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80222300: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222304: jal         0x80227FA8
    // 0x80222308: lw          $a0, 0x2C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2C);
    func_80227FA8_691988(rdram, ctx);
        goto after_313;
    // 0x80222308: lw          $a0, 0x2C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2C);
    after_313:
    // 0x8022230C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80222310: jal         0x80228354
    // 0x80222314: lw          $a0, 0x2C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X2C);
    func_80228354_691D34(rdram, ctx);
        goto after_314;
    // 0x80222314: lw          $a0, 0x2C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X2C);
    after_314:
    // 0x80222318: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x8022231C: lui         $a1, 0x4230
    ctx->r5 = S32(0X4230 << 16);
    // 0x80222320: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222324: lui         $a3, 0x4238
    ctx->r7 = S32(0X4238 << 16);
    // 0x80222328: jal         0x8022817C
    // 0x8022232C: lw          $a0, 0x2C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2C);
    func_8022817C_691B5C(rdram, ctx);
        goto after_315;
    // 0x8022232C: lw          $a0, 0x2C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2C);
    after_315:
    // 0x80222330: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80222334: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222338: lui         $a2, 0xC316
    ctx->r6 = S32(0XC316 << 16);
    // 0x8022233C: jal         0x80228130
    // 0x80222340: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    func_80228130_691B10(rdram, ctx);
        goto after_316;
    // 0x80222340: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    after_316:
    // 0x80222344: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x80222348: addiu       $t4, $t4, -0x39FC
    ctx->r12 = ADD32(ctx->r12, -0X39FC);
    // 0x8022234C: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x80222350: jal         0x801DACDC
    // 0x80222354: addiu       $a1, $zero, 0xE2
    ctx->r5 = ADD32(0, 0XE2);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_317;
    // 0x80222354: addiu       $a1, $zero, 0xE2
    ctx->r5 = ADD32(0, 0XE2);
    after_317:
    // 0x80222358: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8022235C: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x80222360: jal         0x802122A4
    // 0x80222364: lw          $a0, 0x28($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X28);
    func_802122A4_67BC84(rdram, ctx);
        goto after_318;
    // 0x80222364: lw          $a0, 0x28($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X28);
    after_318:
    // 0x80222368: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x8022236C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222370: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x80222374: jal         0x80212440
    // 0x80222378: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    func_80212440_67BE20(rdram, ctx);
        goto after_319;
    // 0x80222378: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    after_319:
    // 0x8022237C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80222380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80222384: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222388: jal         0x80227FA8
    // 0x8022238C: lw          $a0, 0x2C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X2C);
    func_80227FA8_691988(rdram, ctx);
        goto after_320;
    // 0x8022238C: lw          $a0, 0x2C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X2C);
    after_320:
    // 0x80222390: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80222394: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x80222398: jal         0x80228124
    // 0x8022239C: lw          $a0, 0x2C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X2C);
    func_80228124_691B04(rdram, ctx);
        goto after_321;
    // 0x8022239C: lw          $a0, 0x2C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X2C);
    after_321:
    // 0x802223A0: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802223A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802223A8: lui         $a2, 0xC316
    ctx->r6 = S32(0XC316 << 16);
    // 0x802223AC: jal         0x80228280
    // 0x802223B0: lw          $a0, 0x2C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X2C);
    func_80228280_691C60(rdram, ctx);
        goto after_322;
    // 0x802223B0: lw          $a0, 0x2C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X2C);
    after_322:
    // 0x802223B4: b           L_8022254C
    // 0x802223B8: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
        goto L_8022254C;
    // 0x802223B8: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x802223BC: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
L_802223C0:
    // 0x802223C0: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x802223C4: lh          $t8, 0x2($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X2);
    // 0x802223C8: bnel        $t8, $at, L_8022241C
    if (ctx->r24 != ctx->r1) {
        // 0x802223CC: lw          $t3, 0x84($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X84);
            goto L_8022241C;
    }
    goto skip_94;
    // 0x802223CC: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    skip_94:
    // 0x802223D0: jal         0x80038B98
    // 0x802223D4: addiu       $a0, $zero, 0x22F
    ctx->r4 = ADD32(0, 0X22F);
    func_80038B98_39798(rdram, ctx);
        goto after_323;
    // 0x802223D4: addiu       $a0, $zero, 0x22F
    ctx->r4 = ADD32(0, 0X22F);
    after_323:
    // 0x802223D8: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x802223DC: addiu       $t6, $t6, -0x39FC
    ctx->r14 = ADD32(ctx->r14, -0X39FC);
    // 0x802223E0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x802223E4: jal         0x801DACDC
    // 0x802223E8: addiu       $a1, $zero, 0xE3
    ctx->r5 = ADD32(0, 0XE3);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_324;
    // 0x802223E8: addiu       $a1, $zero, 0xE3
    ctx->r5 = ADD32(0, 0XE3);
    after_324:
    // 0x802223EC: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802223F0: lui         $a1, 0x43A0
    ctx->r5 = S32(0X43A0 << 16);
    // 0x802223F4: jal         0x802122A4
    // 0x802223F8: lw          $a0, 0x28($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X28);
    func_802122A4_67BC84(rdram, ctx);
        goto after_325;
    // 0x802223F8: lw          $a0, 0x28($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X28);
    after_325:
    // 0x802223FC: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80222400: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222404: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x80222408: jal         0x80212440
    // 0x8022240C: lw          $a0, 0x28($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X28);
    func_80212440_67BE20(rdram, ctx);
        goto after_326;
    // 0x8022240C: lw          $a0, 0x28($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X28);
    after_326:
    // 0x80222410: b           L_8022254C
    // 0x80222414: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
        goto L_8022254C;
    // 0x80222414: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80222418: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
L_8022241C:
    // 0x8022241C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80222420: lh          $t0, 0x2($t3)
    ctx->r8 = MEM_H(ctx->r11, 0X2);
    // 0x80222424: bnel        $t0, $at, L_8022249C
    if (ctx->r8 != ctx->r1) {
        // 0x80222428: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_8022249C;
    }
    goto skip_95;
    // 0x80222428: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_95:
    // 0x8022242C: lw          $a0, 0x2C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X2C);
    // 0x80222430: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80222434: jal         0x80227FA8
    // 0x80222438: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80227FA8_691988(rdram, ctx);
        goto after_327;
    // 0x80222438: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_327:
    // 0x8022243C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80222440: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    // 0x80222444: jal         0x80228124
    // 0x80222448: lw          $a0, 0x2C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X2C);
    func_80228124_691B04(rdram, ctx);
        goto after_328;
    // 0x80222448: lw          $a0, 0x2C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X2C);
    after_328:
    // 0x8022244C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80222450: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222454: lui         $a2, 0xC316
    ctx->r6 = S32(0XC316 << 16);
    // 0x80222458: jal         0x80228280
    // 0x8022245C: lw          $a0, 0x2C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X2C);
    func_80228280_691C60(rdram, ctx);
        goto after_329;
    // 0x8022245C: lw          $a0, 0x2C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X2C);
    after_329:
    // 0x80222460: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222464: jal         0x80212310
    // 0x80222468: lw          $a0, 0x28($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X28);
    func_80212310_67BCF0(rdram, ctx);
        goto after_330;
    // 0x80222468: lw          $a0, 0x28($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X28);
    after_330:
    // 0x8022246C: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x80222470: addiu       $t5, $t5, -0x39FC
    ctx->r13 = ADD32(ctx->r13, -0X39FC);
    // 0x80222474: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x80222478: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    // 0x8022247C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x80222480: jal         0x801DAC7C
    // 0x80222484: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_331;
    // 0x80222484: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_331:
    // 0x80222488: jal         0x8003D310
    // 0x8022248C: addiu       $a0, $zero, 0x2FD
    ctx->r4 = ADD32(0, 0X2FD);
    func_8003D310_3DF10(rdram, ctx);
        goto after_332;
    // 0x8022248C: addiu       $a0, $zero, 0x2FD
    ctx->r4 = ADD32(0, 0X2FD);
    after_332:
    // 0x80222490: b           L_8022254C
    // 0x80222494: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
        goto L_8022254C;
    // 0x80222494: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80222498: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_8022249C:
    // 0x8022249C: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x802224A0: lh          $t6, 0x2($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X2);
    // 0x802224A4: bnel        $t6, $at, L_802224D4
    if (ctx->r14 != ctx->r1) {
        // 0x802224A8: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_802224D4;
    }
    goto skip_96;
    // 0x802224A8: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_96:
    // 0x802224AC: jal         0x802281B8
    // 0x802224B0: lw          $a0, 0x2C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X2C);
    func_802281B8_691B98(rdram, ctx);
        goto after_333;
    // 0x802224B0: lw          $a0, 0x2C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X2C);
    after_333:
    // 0x802224B4: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802224B8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802224BC: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x802224C0: jal         0x80227FA8
    // 0x802224C4: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    func_80227FA8_691988(rdram, ctx);
        goto after_334;
    // 0x802224C4: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    after_334:
    // 0x802224C8: b           L_8022254C
    // 0x802224CC: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
        goto L_8022254C;
    // 0x802224CC: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x802224D0: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_802224D4:
    // 0x802224D4: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x802224D8: lh          $t0, 0x2($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X2);
    // 0x802224DC: bnel        $t0, $at, L_8022254C
    if (ctx->r8 != ctx->r1) {
        // 0x802224E0: lw          $t5, 0x84($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X84);
            goto L_8022254C;
    }
    goto skip_97;
    // 0x802224E0: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    skip_97:
    // 0x802224E4: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
L_802224E8:
    // 0x802224E8: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x802224EC: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x802224F0: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x802224F4: addu        $t1, $t3, $t2
    ctx->r9 = ADD32(ctx->r11, ctx->r10);
    // 0x802224F8: lw          $t5, 0x38($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X38);
    // 0x802224FC: beql        $t5, $zero, L_80222524
    if (ctx->r13 == 0) {
        // 0x80222500: lw          $t0, 0x78($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X78);
            goto L_80222524;
    }
    goto skip_98;
    // 0x80222500: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    skip_98:
    // 0x80222504: jal         0x80034EF8
    // 0x80222508: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_335;
    // 0x80222508: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_335:
    // 0x8022250C: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x80222510: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80222514: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80222518: addu        $t4, $t6, $t9
    ctx->r12 = ADD32(ctx->r14, ctx->r25);
    // 0x8022251C: sw          $zero, 0x38($t4)
    MEM_W(0X38, ctx->r12) = 0;
    // 0x80222520: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
L_80222524:
    // 0x80222524: addiu       $t7, $t0, 0x1
    ctx->r15 = ADD32(ctx->r8, 0X1);
    // 0x80222528: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x8022252C: bne         $at, $zero, L_802224E8
    if (ctx->r1 != 0) {
        // 0x80222530: sw          $t7, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r15;
            goto L_802224E8;
    }
    // 0x80222530: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    // 0x80222534: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80222538: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x8022253C: sh          $zero, 0x2($t3)
    MEM_H(0X2, ctx->r11) = 0;
    // 0x80222540: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222544: sb          $t2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r10;
    // 0x80222548: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
L_8022254C:
    // 0x8022254C: lh          $t8, 0x2($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X2);
    // 0x80222550: bltz        $t8, L_802225B8
    if (SIGNED(ctx->r24) < 0) {
        // 0x80222554: slti        $at, $t8, 0x29
        ctx->r1 = SIGNED(ctx->r24) < 0X29 ? 1 : 0;
            goto L_802225B8;
    }
    // 0x80222554: slti        $at, $t8, 0x29
    ctx->r1 = SIGNED(ctx->r24) < 0X29 ? 1 : 0;
    // 0x80222558: beq         $at, $zero, L_802225B8
    if (ctx->r1 == 0) {
        // 0x8022255C: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_802225B8;
    }
    // 0x8022255C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80222560: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x80222564: mfhi        $t6
    ctx->r14 = hi;
    // 0x80222568: bnel        $t6, $zero, L_802225BC
    if (ctx->r14 != 0) {
        // 0x8022256C: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_802225BC;
    }
    goto skip_99;
    // 0x8022256C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_99:
    // 0x80222570: lw          $a0, 0x28($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X28);
    // 0x80222574: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80222578: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x8022257C: jal         0x802122F4
    // 0x80222580: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_336;
    // 0x80222580: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    after_336:
    // 0x80222584: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80222588: jal         0x80012938
    // 0x8022258C: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    func_80012938_13538(rdram, ctx);
        goto after_337;
    // 0x8022258C: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    after_337:
    // 0x80222590: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80222594: lwc1        $f6, -0x5084($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5084);
    // 0x80222598: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8022259C: addiu       $a0, $zero, 0x217
    ctx->r4 = ADD32(0, 0X217);
    // 0x802225A0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802225A4: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x802225A8: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x802225AC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x802225B0: jal         0x8000F6E8
    // 0x802225B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8000F6E8_102E8(rdram, ctx);
        goto after_338;
    // 0x802225B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_338:
L_802225B8:
    // 0x802225B8: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_802225BC:
    // 0x802225BC: lh          $t0, 0x2($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X2);
    // 0x802225C0: bltz        $t0, L_80223B08
    if (SIGNED(ctx->r8) < 0) {
        // 0x802225C4: slti        $at, $t0, 0x3D
        ctx->r1 = SIGNED(ctx->r8) < 0X3D ? 1 : 0;
            goto L_80223B08;
    }
    // 0x802225C4: slti        $at, $t0, 0x3D
    ctx->r1 = SIGNED(ctx->r8) < 0X3D ? 1 : 0;
    // 0x802225C8: beq         $at, $zero, L_80223B08
    if (ctx->r1 == 0) {
        // 0x802225CC: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_80223B08;
    }
    // 0x802225CC: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x802225D0: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x802225D4: mfhi        $t7
    ctx->r15 = hi;
    // 0x802225D8: bnel        $t7, $zero, L_80223B0C
    if (ctx->r15 != 0) {
        // 0x802225DC: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_100;
    // 0x802225DC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_100:
    // 0x802225E0: lw          $a0, 0x2C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X2C);
    // 0x802225E4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802225E8: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x802225EC: jal         0x8022819C
    // 0x802225F0: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    func_8022819C_691B7C(rdram, ctx);
        goto after_339;
    // 0x802225F0: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    after_339:
    // 0x802225F4: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x802225F8: jal         0x80012938
    // 0x802225FC: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    func_80012938_13538(rdram, ctx);
        goto after_340;
    // 0x802225FC: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    after_340:
    // 0x80222600: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80222604: lwc1        $f8, -0x5080($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5080);
    // 0x80222608: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8022260C: addiu       $a0, $zero, 0x219
    ctx->r4 = ADD32(0, 0X219);
    // 0x80222610: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80222614: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x80222618: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x8022261C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80222620: jal         0x8000F6E8
    // 0x80222624: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_8000F6E8_102E8(rdram, ctx);
        goto after_341;
    // 0x80222624: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_341:
    // 0x80222628: b           L_80223B0C
    // 0x8022262C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x8022262C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80222630:
    // 0x80222630: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80222634: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80222638: lh          $t1, 0x2($t2)
    ctx->r9 = MEM_H(ctx->r10, 0X2);
    // 0x8022263C: bnel        $t1, $at, L_80222768
    if (ctx->r9 != ctx->r1) {
        // 0x80222640: lw          $t5, 0x84($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X84);
            goto L_80222768;
    }
    goto skip_101;
    // 0x80222640: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    skip_101:
    // 0x80222644: lw          $a0, 0x28($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X28);
    // 0x80222648: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x8022264C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222650: jal         0x802122D4
    // 0x80222654: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_802122D4_67BCB4(rdram, ctx);
        goto after_342;
    // 0x80222654: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_342:
    // 0x80222658: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x8022265C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222660: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x80222664: jal         0x802123F4
    // 0x80222668: lw          $a0, 0x28($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X28);
    func_802123F4_67BDD4(rdram, ctx);
        goto after_343;
    // 0x80222668: lw          $a0, 0x28($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X28);
    after_343:
    // 0x8022266C: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80222670: lui         $a1, 0xC140
    ctx->r5 = S32(0XC140 << 16);
    // 0x80222674: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222678: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x8022267C: jal         0x8022817C
    // 0x80222680: lw          $a0, 0x2C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2C);
    func_8022817C_691B5C(rdram, ctx);
        goto after_344;
    // 0x80222680: lw          $a0, 0x2C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2C);
    after_344:
    // 0x80222684: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80222688: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8022268C: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x80222690: jal         0x80228130
    // 0x80222694: lw          $a0, 0x2C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2C);
    func_80228130_691B10(rdram, ctx);
        goto after_345;
    // 0x80222694: lw          $a0, 0x2C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2C);
    after_345:
    // 0x80222698: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8022269C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802226A0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802226A4: jal         0x80229330
    // 0x802226A8: lui         $a3, 0xC47A
    ctx->r7 = S32(0XC47A << 16);
    func_80229330_692D10(rdram, ctx);
        goto after_346;
    // 0x802226A8: lui         $a3, 0xC47A
    ctx->r7 = S32(0XC47A << 16);
    after_346:
    // 0x802226AC: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802226B0: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    // 0x802226B4: sw          $v0, 0x38($t9)
    MEM_W(0X38, ctx->r25) = ctx->r2;
    // 0x802226B8: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802226BC: jal         0x802291EC
    // 0x802226C0: lw          $a0, 0x38($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X38);
    func_802291EC_692BCC(rdram, ctx);
        goto after_347;
    // 0x802226C0: lw          $a0, 0x38($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X38);
    after_347:
    // 0x802226C4: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x802226C8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802226CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802226D0: lui         $a3, 0xC416
    ctx->r7 = S32(0XC416 << 16);
    // 0x802226D4: jal         0x80229278
    // 0x802226D8: lw          $a0, 0x38($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X38);
    func_80229278_692C58(rdram, ctx);
        goto after_348;
    // 0x802226D8: lw          $a0, 0x38($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X38);
    after_348:
    // 0x802226DC: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x802226E0: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x802226E4: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x802226E8: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x802226EC: jal         0x800133E0
    // 0x802226F0: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
    func_800133E0_13FE0(rdram, ctx);
        goto after_349;
    // 0x802226F0: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
    after_349:
    // 0x802226F4: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x802226F8: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    // 0x802226FC: jal         0x80012500
    // 0x80222700: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    func_80012500_13100(rdram, ctx);
        goto after_350;
    // 0x80222700: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    after_350:
    // 0x80222704: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222708: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8022270C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x80222710: lui         $a3, 0xC348
    ctx->r7 = S32(0XC348 << 16);
    // 0x80222714: jal         0x80012818
    // 0x80222718: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    func_80012818_13418(rdram, ctx);
        goto after_351;
    // 0x80222718: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    after_351:
    // 0x8022271C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80222720: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222724: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    // 0x80222728: lui         $a3, 0x4302
    ctx->r7 = S32(0X4302 << 16);
    // 0x8022272C: jal         0x800127B8
    // 0x80222730: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    func_800127B8_133B8(rdram, ctx);
        goto after_352;
    // 0x80222730: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    after_352:
    // 0x80222734: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80222738: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x8022273C: jal         0x800124A0
    // 0x80222740: lw          $a0, 0x18($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18);
    func_800124A0_130A0(rdram, ctx);
        goto after_353;
    // 0x80222740: lw          $a0, 0x18($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18);
    after_353:
    // 0x80222744: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80222748: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    // 0x8022274C: jal         0x800124AC
    // 0x80222750: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    func_800124AC_130AC(rdram, ctx);
        goto after_354;
    // 0x80222750: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    after_354:
    // 0x80222754: jal         0x80038B98
    // 0x80222758: addiu       $a0, $zero, 0x16D
    ctx->r4 = ADD32(0, 0X16D);
    func_80038B98_39798(rdram, ctx);
        goto after_355;
    // 0x80222758: addiu       $a0, $zero, 0x16D
    ctx->r4 = ADD32(0, 0X16D);
    after_355:
    // 0x8022275C: b           L_80223B0C
    // 0x80222760: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80222760: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222764: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
L_80222768:
    // 0x80222768: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x8022276C: lh          $t9, 0x2($t5)
    ctx->r25 = MEM_H(ctx->r13, 0X2);
    // 0x80222770: bnel        $t9, $at, L_8022278C
    if (ctx->r25 != ctx->r1) {
        // 0x80222774: lw          $t0, 0x84($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X84);
            goto L_8022278C;
    }
    goto skip_102;
    // 0x80222774: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    skip_102:
    // 0x80222778: jal         0x8003D310
    // 0x8022277C: addiu       $a0, $zero, 0x2FE
    ctx->r4 = ADD32(0, 0X2FE);
    func_8003D310_3DF10(rdram, ctx);
        goto after_356;
    // 0x8022277C: addiu       $a0, $zero, 0x2FE
    ctx->r4 = ADD32(0, 0X2FE);
    after_356:
    // 0x80222780: b           L_80223B0C
    // 0x80222784: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80222784: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222788: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
L_8022278C:
    // 0x8022278C: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x80222790: lh          $t7, 0x2($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X2);
    // 0x80222794: bnel        $t7, $at, L_80223B0C
    if (ctx->r15 != ctx->r1) {
        // 0x80222798: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_103;
    // 0x80222798: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_103:
    // 0x8022279C: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
L_802227A0:
    // 0x802227A0: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x802227A4: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x802227A8: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x802227AC: addu        $t2, $t4, $t1
    ctx->r10 = ADD32(ctx->r12, ctx->r9);
    // 0x802227B0: lw          $t8, 0x38($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X38);
    // 0x802227B4: beql        $t8, $zero, L_802227DC
    if (ctx->r24 == 0) {
        // 0x802227B8: lw          $t7, 0x78($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X78);
            goto L_802227DC;
    }
    goto skip_104;
    // 0x802227B8: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    skip_104:
    // 0x802227BC: jal         0x80034EF8
    // 0x802227C0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_357;
    // 0x802227C0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_357:
    // 0x802227C4: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x802227C8: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x802227CC: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x802227D0: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x802227D4: sw          $zero, 0x38($t0)
    MEM_W(0X38, ctx->r8) = 0;
    // 0x802227D8: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
L_802227DC:
    // 0x802227DC: addiu       $t3, $t7, 0x1
    ctx->r11 = ADD32(ctx->r15, 0X1);
    // 0x802227E0: slti        $at, $t3, 0x6
    ctx->r1 = SIGNED(ctx->r11) < 0X6 ? 1 : 0;
    // 0x802227E4: bne         $at, $zero, L_802227A0
    if (ctx->r1 != 0) {
        // 0x802227E8: sw          $t3, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r11;
            goto L_802227A0;
    }
    // 0x802227E8: sw          $t3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r11;
    // 0x802227EC: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x802227F0: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x802227F4: sh          $zero, 0x2($t4)
    MEM_H(0X2, ctx->r12) = 0;
    // 0x802227F8: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x802227FC: b           L_80223B08
    // 0x80222800: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
        goto L_80223B08;
    // 0x80222800: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
L_80222804:
    // 0x80222804: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80222808: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8022280C: lh          $t5, 0x2($t8)
    ctx->r13 = MEM_H(ctx->r24, 0X2);
    // 0x80222810: bnel        $t5, $at, L_80222A40
    if (ctx->r13 != ctx->r1) {
        // 0x80222814: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_80222A40;
    }
    goto skip_105;
    // 0x80222814: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_105:
    // 0x80222818: lw          $t6, 0x28($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X28);
    // 0x8022281C: bnel        $t6, $zero, L_80222844
    if (ctx->r14 != 0) {
        // 0x80222820: lw          $t0, 0x84($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X84);
            goto L_80222844;
    }
    goto skip_106;
    // 0x80222820: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    skip_106:
    // 0x80222824: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80222828: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8022282C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222830: jal         0x80212684
    // 0x80222834: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80212684_67C064(rdram, ctx);
        goto after_358;
    // 0x80222834: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_358:
    // 0x80222838: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x8022283C: sw          $v0, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->r2;
    // 0x80222840: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
L_80222844:
    // 0x80222844: jal         0x80212664
    // 0x80222848: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    func_80212664_67C044(rdram, ctx);
        goto after_359;
    // 0x80222848: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    after_359:
    // 0x8022284C: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x80222850: addiu       $t7, $t7, -0x39FC
    ctx->r15 = ADD32(ctx->r15, -0X39FC);
    // 0x80222854: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80222858: jal         0x801DACDC
    // 0x8022285C: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_360;
    // 0x8022285C: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    after_360:
    // 0x80222860: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80222864: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222868: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022286C: lui         $a3, 0x4250
    ctx->r7 = S32(0X4250 << 16);
    // 0x80222870: jal         0x802122D4
    // 0x80222874: lw          $a0, 0x28($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X28);
    func_802122D4_67BCB4(rdram, ctx);
        goto after_361;
    // 0x80222874: lw          $a0, 0x28($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X28);
    after_361:
    // 0x80222878: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8022287C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222880: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x80222884: jal         0x802123F4
    // 0x80222888: lw          $a0, 0x28($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X28);
    func_802123F4_67BDD4(rdram, ctx);
        goto after_362;
    // 0x80222888: lw          $a0, 0x28($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X28);
    after_362:
    // 0x8022288C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222890: lw          $t2, 0x2C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X2C);
    // 0x80222894: bnel        $t2, $zero, L_802228BC
    if (ctx->r10 != 0) {
        // 0x80222898: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_802228BC;
    }
    goto skip_107;
    // 0x80222898: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_107:
    // 0x8022289C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x802228A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802228A4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802228A8: jal         0x80228368
    // 0x802228AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80228368_691D48(rdram, ctx);
        goto after_363;
    // 0x802228AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_363:
    // 0x802228B0: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x802228B4: sw          $v0, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->r2;
    // 0x802228B8: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_802228BC:
    // 0x802228BC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802228C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802228C4: jal         0x80227FA8
    // 0x802228C8: lw          $a0, 0x2C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X2C);
    func_80227FA8_691988(rdram, ctx);
        goto after_364;
    // 0x802228C8: lw          $a0, 0x2C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X2C);
    after_364:
    // 0x802228CC: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x802228D0: jal         0x80228354
    // 0x802228D4: lw          $a0, 0x2C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2C);
    func_80228354_691D34(rdram, ctx);
        goto after_365;
    // 0x802228D4: lw          $a0, 0x2C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2C);
    after_365:
    // 0x802228D8: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802228DC: lui         $a1, 0xC180
    ctx->r5 = S32(0XC180 << 16);
    // 0x802228E0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802228E4: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x802228E8: jal         0x8022817C
    // 0x802228EC: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    func_8022817C_691B5C(rdram, ctx);
        goto after_366;
    // 0x802228EC: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    after_366:
    // 0x802228F0: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802228F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802228F8: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x802228FC: jal         0x80228130
    // 0x80222900: lw          $a0, 0x2C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X2C);
    func_80228130_691B10(rdram, ctx);
        goto after_367;
    // 0x80222900: lw          $a0, 0x2C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X2C);
    after_367:
    // 0x80222904: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80222908: lw          $t3, 0x30($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X30);
    // 0x8022290C: bnel        $t3, $zero, L_80222934
    if (ctx->r11 != 0) {
        // 0x80222910: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80222934;
    }
    goto skip_108;
    // 0x80222910: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_108:
    // 0x80222914: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80222918: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8022291C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222920: jal         0x80227494
    // 0x80222924: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80227494_690E74(rdram, ctx);
        goto after_368;
    // 0x80222924: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_368:
    // 0x80222928: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8022292C: sw          $v0, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r2;
    // 0x80222930: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80222934:
    // 0x80222934: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80222938: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022293C: jal         0x80227130
    // 0x80222940: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    func_80227130_690B10(rdram, ctx);
        goto after_369;
    // 0x80222940: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    after_369:
    // 0x80222944: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80222948: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    // 0x8022294C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222950: lui         $a3, 0x4240
    ctx->r7 = S32(0X4240 << 16);
    // 0x80222954: jal         0x8022725C
    // 0x80222958: lw          $a0, 0x30($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X30);
    func_8022725C_690C3C(rdram, ctx);
        goto after_370;
    // 0x80222958: lw          $a0, 0x30($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X30);
    after_370:
    // 0x8022295C: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80222960: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222964: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x80222968: jal         0x80227360
    // 0x8022296C: lw          $a0, 0x30($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X30);
    func_80227360_690D40(rdram, ctx);
        goto after_371;
    // 0x8022296C: lw          $a0, 0x30($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X30);
    after_371:
    // 0x80222970: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80222974: lw          $t6, 0x34($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X34);
    // 0x80222978: bnel        $t6, $zero, L_802229A0
    if (ctx->r14 != 0) {
        // 0x8022297C: lw          $t0, 0x84($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X84);
            goto L_802229A0;
    }
    goto skip_109;
    // 0x8022297C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    skip_109:
    // 0x80222980: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80222984: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222988: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022298C: jal         0x80227BCC
    // 0x80222990: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80227BCC_6915AC(rdram, ctx);
        goto after_372;
    // 0x80222990: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_372:
    // 0x80222994: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80222998: sw          $v0, 0x34($t9)
    MEM_W(0X34, ctx->r25) = ctx->r2;
    // 0x8022299C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
L_802229A0:
    // 0x802229A0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802229A4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802229A8: jal         0x80227870
    // 0x802229AC: lw          $a0, 0x34($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X34);
    func_80227870_691250(rdram, ctx);
        goto after_373;
    // 0x802229AC: lw          $a0, 0x34($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X34);
    after_373:
    // 0x802229B0: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x802229B4: lui         $a1, 0xC200
    ctx->r5 = S32(0XC200 << 16);
    // 0x802229B8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802229BC: lui         $a3, 0x4250
    ctx->r7 = S32(0X4250 << 16);
    // 0x802229C0: jal         0x802279E0
    // 0x802229C4: lw          $a0, 0x34($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X34);
    func_802279E0_6913C0(rdram, ctx);
        goto after_374;
    // 0x802229C4: lw          $a0, 0x34($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X34);
    after_374:
    // 0x802229C8: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x802229CC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802229D0: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x802229D4: jal         0x80227994
    // 0x802229D8: lw          $a0, 0x34($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X34);
    func_80227994_691374(rdram, ctx);
        goto after_375;
    // 0x802229D8: lw          $a0, 0x34($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X34);
    after_375:
    // 0x802229DC: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x802229E0: addiu       $a1, $zero, 0x640
    ctx->r5 = ADD32(0, 0X640);
    // 0x802229E4: jal         0x80012500
    // 0x802229E8: lw          $a0, 0x18($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X18);
    func_80012500_13100(rdram, ctx);
        goto after_376;
    // 0x802229E8: lw          $a0, 0x18($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X18);
    after_376:
    // 0x802229EC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802229F0: lui         $a1, 0xC120
    ctx->r5 = S32(0XC120 << 16);
    // 0x802229F4: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x802229F8: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x802229FC: jal         0x80012818
    // 0x80222A00: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    func_80012818_13418(rdram, ctx);
        goto after_377;
    // 0x80222A00: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    after_377:
    // 0x80222A04: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80222A08: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x80222A0C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80222A10: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    // 0x80222A14: jal         0x800127B8
    // 0x80222A18: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    func_800127B8_133B8(rdram, ctx);
        goto after_378;
    // 0x80222A18: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    after_378:
    // 0x80222A1C: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80222A20: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x80222A24: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80222A28: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    // 0x80222A2C: jal         0x800133E0
    // 0x80222A30: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    func_800133E0_13FE0(rdram, ctx);
        goto after_379;
    // 0x80222A30: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    after_379:
    // 0x80222A34: b           L_80223B0C
    // 0x80222A38: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80222A38: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222A3C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_80222A40:
    // 0x80222A40: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80222A44: lh          $t6, 0x2($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X2);
    // 0x80222A48: bnel        $t6, $at, L_80222A78
    if (ctx->r14 != ctx->r1) {
        // 0x80222A4C: lw          $t0, 0x84($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X84);
            goto L_80222A78;
    }
    goto skip_110;
    // 0x80222A4C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    skip_110:
    // 0x80222A50: jal         0x8003D310
    // 0x80222A54: addiu       $a0, $zero, 0x2FF
    ctx->r4 = ADD32(0, 0X2FF);
    func_8003D310_3DF10(rdram, ctx);
        goto after_380;
    // 0x80222A54: addiu       $a0, $zero, 0x2FF
    ctx->r4 = ADD32(0, 0X2FF);
    after_380:
    // 0x80222A58: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80222A5C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80222A60: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80222A64: jal         0x80227FA8
    // 0x80222A68: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    func_80227FA8_691988(rdram, ctx);
        goto after_381;
    // 0x80222A68: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    after_381:
    // 0x80222A6C: b           L_80223B0C
    // 0x80222A70: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80222A70: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222A74: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
L_80222A78:
    // 0x80222A78: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x80222A7C: lh          $t7, 0x2($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X2);
    // 0x80222A80: bnel        $t7, $at, L_80222AA4
    if (ctx->r15 != ctx->r1) {
        // 0x80222A84: lw          $t3, 0x84($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X84);
            goto L_80222AA4;
    }
    goto skip_111;
    // 0x80222A84: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    skip_111:
    // 0x80222A88: lw          $a0, 0x2C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X2C);
    // 0x80222A8C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80222A90: jal         0x80227FA8
    // 0x80222A94: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80227FA8_691988(rdram, ctx);
        goto after_382;
    // 0x80222A94: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_382:
    // 0x80222A98: b           L_80223B0C
    // 0x80222A9C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80222A9C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222AA0: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
L_80222AA4:
    // 0x80222AA4: addiu       $at, $zero, 0x1A4
    ctx->r1 = ADD32(0, 0X1A4);
    // 0x80222AA8: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x80222AAC: bne         $t4, $at, L_80222AD4
    if (ctx->r12 != ctx->r1) {
        // 0x80222AB0: lui         $t1, 0x8020
        ctx->r9 = S32(0X8020 << 16);
            goto L_80222AD4;
    }
    // 0x80222AB0: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80222AB4: addiu       $t1, $t1, -0x39FC
    ctx->r9 = ADD32(ctx->r9, -0X39FC);
    // 0x80222AB8: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x80222ABC: addiu       $a1, $zero, 0xDF
    ctx->r5 = ADD32(0, 0XDF);
    // 0x80222AC0: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80222AC4: jal         0x801DAC7C
    // 0x80222AC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_383;
    // 0x80222AC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_383:
    // 0x80222ACC: b           L_80223B0C
    // 0x80222AD0: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80222AD0: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80222AD4:
    // 0x80222AD4: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80222AD8: addiu       $at, $zero, 0x30C
    ctx->r1 = ADD32(0, 0X30C);
    // 0x80222ADC: lh          $t5, 0x2($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X2);
    // 0x80222AE0: bne         $t5, $at, L_80222B08
    if (ctx->r13 != ctx->r1) {
        // 0x80222AE4: lui         $t8, 0x8020
        ctx->r24 = S32(0X8020 << 16);
            goto L_80222B08;
    }
    // 0x80222AE4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x80222AE8: addiu       $t8, $t8, -0x39FC
    ctx->r24 = ADD32(ctx->r24, -0X39FC);
    // 0x80222AEC: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80222AF0: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    // 0x80222AF4: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80222AF8: jal         0x801DAC7C
    // 0x80222AFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_384;
    // 0x80222AFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_384:
    // 0x80222B00: b           L_80223B0C
    // 0x80222B04: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80222B04: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80222B08:
    // 0x80222B08: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80222B0C: addiu       $at, $zero, 0x352
    ctx->r1 = ADD32(0, 0X352);
    // 0x80222B10: lh          $t9, 0x2($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X2);
    // 0x80222B14: bnel        $t9, $at, L_80222B38
    if (ctx->r25 != ctx->r1) {
        // 0x80222B18: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80222B38;
    }
    goto skip_112;
    // 0x80222B18: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_112:
    // 0x80222B1C: lw          $a0, 0x34($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X34);
    // 0x80222B20: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80222B24: jal         0x80227870
    // 0x80222B28: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80227870_691250(rdram, ctx);
        goto after_385;
    // 0x80222B28: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_385:
    // 0x80222B2C: b           L_80223B0C
    // 0x80222B30: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80222B30: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222B34: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80222B38:
    // 0x80222B38: addiu       $at, $zero, 0x41A
    ctx->r1 = ADD32(0, 0X41A);
    // 0x80222B3C: lh          $t0, 0x2($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X2);
    // 0x80222B40: bnel        $t0, $at, L_80222B64
    if (ctx->r8 != ctx->r1) {
        // 0x80222B44: lw          $t3, 0x84($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X84);
            goto L_80222B64;
    }
    goto skip_113;
    // 0x80222B44: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    skip_113:
    // 0x80222B48: lw          $a0, 0x34($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X34);
    // 0x80222B4C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80222B50: jal         0x80227870
    // 0x80222B54: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80227870_691250(rdram, ctx);
        goto after_386;
    // 0x80222B54: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_386:
    // 0x80222B58: b           L_80223B0C
    // 0x80222B5C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80222B5C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222B60: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
L_80222B64:
    // 0x80222B64: addiu       $at, $zero, 0x438
    ctx->r1 = ADD32(0, 0X438);
    // 0x80222B68: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x80222B6C: bne         $t4, $at, L_80222B94
    if (ctx->r12 != ctx->r1) {
        // 0x80222B70: lui         $t1, 0x8020
        ctx->r9 = S32(0X8020 << 16);
            goto L_80222B94;
    }
    // 0x80222B70: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80222B74: addiu       $t1, $t1, -0x39FC
    ctx->r9 = ADD32(ctx->r9, -0X39FC);
    // 0x80222B78: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x80222B7C: addiu       $a1, $zero, 0xDF
    ctx->r5 = ADD32(0, 0XDF);
    // 0x80222B80: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80222B84: jal         0x801DAC7C
    // 0x80222B88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_387;
    // 0x80222B88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_387:
    // 0x80222B8C: b           L_80223B0C
    // 0x80222B90: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80222B90: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80222B94:
    // 0x80222B94: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80222B98: addiu       $at, $zero, 0x528
    ctx->r1 = ADD32(0, 0X528);
    // 0x80222B9C: lh          $t5, 0x2($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X2);
    // 0x80222BA0: bne         $t5, $at, L_80222BC8
    if (ctx->r13 != ctx->r1) {
        // 0x80222BA4: lui         $t8, 0x8020
        ctx->r24 = S32(0X8020 << 16);
            goto L_80222BC8;
    }
    // 0x80222BA4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x80222BA8: addiu       $t8, $t8, -0x39FC
    ctx->r24 = ADD32(ctx->r24, -0X39FC);
    // 0x80222BAC: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80222BB0: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    // 0x80222BB4: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80222BB8: jal         0x801DAC7C
    // 0x80222BBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_388;
    // 0x80222BBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_388:
    // 0x80222BC0: b           L_80223B0C
    // 0x80222BC4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80222BC4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80222BC8:
    // 0x80222BC8: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80222BCC: addiu       $at, $zero, 0x596
    ctx->r1 = ADD32(0, 0X596);
    // 0x80222BD0: lh          $t6, 0x2($t9)
    ctx->r14 = MEM_H(ctx->r25, 0X2);
    // 0x80222BD4: bnel        $t6, $at, L_80223B0C
    if (ctx->r14 != ctx->r1) {
        // 0x80222BD8: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_114;
    // 0x80222BD8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_114:
    // 0x80222BDC: sh          $zero, 0x2($t9)
    MEM_H(0X2, ctx->r25) = 0;
    // 0x80222BE0: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80222BE4: addiu       $t0, $zero, 0x11
    ctx->r8 = ADD32(0, 0X11);
    // 0x80222BE8: b           L_80223B08
    // 0x80222BEC: sb          $t0, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r8;
        goto L_80223B08;
    // 0x80222BEC: sb          $t0, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r8;
L_80222BF0:
    // 0x80222BF0: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80222BF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80222BF8: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x80222BFC: bnel        $t4, $at, L_80222C70
    if (ctx->r12 != ctx->r1) {
        // 0x80222C00: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_80222C70;
    }
    goto skip_115;
    // 0x80222C00: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_115:
    // 0x80222C04: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    // 0x80222C08: jal         0x80012500
    // 0x80222C0C: addiu       $a1, $zero, 0x780
    ctx->r5 = ADD32(0, 0X780);
    func_80012500_13100(rdram, ctx);
        goto after_389;
    // 0x80222C0C: addiu       $a1, $zero, 0x780
    ctx->r5 = ADD32(0, 0X780);
    after_389:
    // 0x80222C10: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222C14: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222C18: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    // 0x80222C1C: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x80222C20: jal         0x80012818
    // 0x80222C24: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    func_80012818_13418(rdram, ctx);
        goto after_390;
    // 0x80222C24: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    after_390:
    // 0x80222C28: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80222C2C: lui         $a1, 0xC250
    ctx->r5 = S32(0XC250 << 16);
    // 0x80222C30: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80222C34: lui         $a3, 0xC140
    ctx->r7 = S32(0XC140 << 16);
    // 0x80222C38: jal         0x800127B8
    // 0x80222C3C: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    func_800127B8_133B8(rdram, ctx);
        goto after_391;
    // 0x80222C3C: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    after_391:
    // 0x80222C40: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x80222C44: addiu       $t5, $t5, -0x39FC
    ctx->r13 = ADD32(ctx->r13, -0X39FC);
    // 0x80222C48: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x80222C4C: addiu       $a1, $zero, 0xE4
    ctx->r5 = ADD32(0, 0XE4);
    // 0x80222C50: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x80222C54: jal         0x801DAC7C
    // 0x80222C58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_392;
    // 0x80222C58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_392:
    // 0x80222C5C: jal         0x8003D310
    // 0x80222C60: addiu       $a0, $zero, 0x300
    ctx->r4 = ADD32(0, 0X300);
    func_8003D310_3DF10(rdram, ctx);
        goto after_393;
    // 0x80222C60: addiu       $a0, $zero, 0x300
    ctx->r4 = ADD32(0, 0X300);
    after_393:
    // 0x80222C64: b           L_80223B0C
    // 0x80222C68: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80222C68: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222C6C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_80222C70:
    // 0x80222C70: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x80222C74: lh          $t6, 0x2($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X2);
    // 0x80222C78: bnel        $t6, $at, L_80222C9C
    if (ctx->r14 != ctx->r1) {
        // 0x80222C7C: lw          $t9, 0x84($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X84);
            goto L_80222C9C;
    }
    goto skip_116;
    // 0x80222C7C: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    skip_116:
    // 0x80222C80: lw          $a0, 0x2C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X2C);
    // 0x80222C84: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80222C88: jal         0x80227FA8
    // 0x80222C8C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80227FA8_691988(rdram, ctx);
        goto after_394;
    // 0x80222C8C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_394:
    // 0x80222C90: b           L_80223B0C
    // 0x80222C94: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80222C94: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222C98: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
L_80222C9C:
    // 0x80222C9C: addiu       $at, $zero, 0x276
    ctx->r1 = ADD32(0, 0X276);
    // 0x80222CA0: lh          $t0, 0x2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X2);
    // 0x80222CA4: bnel        $t0, $at, L_80223B0C
    if (ctx->r8 != ctx->r1) {
        // 0x80222CA8: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_117;
    // 0x80222CA8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_117:
    // 0x80222CAC: jal         0x80212640
    // 0x80222CB0: lw          $a0, 0x28($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X28);
    func_80212640_67C020(rdram, ctx);
        goto after_395;
    // 0x80222CB0: lw          $a0, 0x28($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X28);
    after_395:
    // 0x80222CB4: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80222CB8: lw          $t4, 0x28($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X28);
    // 0x80222CBC: beql        $t4, $zero, L_80222CD8
    if (ctx->r12 == 0) {
        // 0x80222CC0: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80222CD8;
    }
    goto skip_118;
    // 0x80222CC0: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_118:
    // 0x80222CC4: jal         0x80034EF8
    // 0x80222CC8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_396;
    // 0x80222CC8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_396:
    // 0x80222CCC: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80222CD0: sw          $zero, 0x28($t3)
    MEM_W(0X28, ctx->r11) = 0;
    // 0x80222CD4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80222CD8:
    // 0x80222CD8: lw          $t2, 0x34($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X34);
    // 0x80222CDC: beql        $t2, $zero, L_80222CF8
    if (ctx->r10 == 0) {
        // 0x80222CE0: lw          $t6, 0x84($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X84);
            goto L_80222CF8;
    }
    goto skip_119;
    // 0x80222CE0: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    skip_119:
    // 0x80222CE4: jal         0x80034EF8
    // 0x80222CE8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_397;
    // 0x80222CE8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_397:
    // 0x80222CEC: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80222CF0: sw          $zero, 0x34($t5)
    MEM_W(0X34, ctx->r13) = 0;
    // 0x80222CF4: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
L_80222CF8:
    // 0x80222CF8: lw          $t8, 0x2C($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X2C);
    // 0x80222CFC: beql        $t8, $zero, L_80222D18
    if (ctx->r24 == 0) {
        // 0x80222D00: lw          $t9, 0x84($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X84);
            goto L_80222D18;
    }
    goto skip_120;
    // 0x80222D00: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    skip_120:
    // 0x80222D04: jal         0x80034EF8
    // 0x80222D08: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_398;
    // 0x80222D08: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_398:
    // 0x80222D0C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80222D10: sw          $zero, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = 0;
    // 0x80222D14: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
L_80222D18:
    // 0x80222D18: lw          $t7, 0x30($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X30);
    // 0x80222D1C: beql        $t7, $zero, L_80222D38
    if (ctx->r15 == 0) {
        // 0x80222D20: lw          $t3, 0x84($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X84);
            goto L_80222D38;
    }
    goto skip_121;
    // 0x80222D20: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    skip_121:
    // 0x80222D24: jal         0x80034EF8
    // 0x80222D28: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_399;
    // 0x80222D28: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_399:
    // 0x80222D2C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80222D30: sw          $zero, 0x30($t4)
    MEM_W(0X30, ctx->r12) = 0;
    // 0x80222D34: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
L_80222D38:
    // 0x80222D38: addiu       $t1, $zero, 0x12
    ctx->r9 = ADD32(0, 0X12);
    // 0x80222D3C: sh          $zero, 0x2($t3)
    MEM_H(0X2, ctx->r11) = 0;
    // 0x80222D40: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80222D44: b           L_80223B08
    // 0x80222D48: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
        goto L_80223B08;
    // 0x80222D48: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
L_80222D4C:
    // 0x80222D4C: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80222D50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80222D54: lh          $t6, 0x2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X2);
    // 0x80222D58: bnel        $t6, $at, L_80222E64
    if (ctx->r14 != ctx->r1) {
        // 0x80222D5C: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80222E64;
    }
    goto skip_122;
    // 0x80222D5C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_122:
    // 0x80222D60: lw          $a0, 0x1C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X1C);
    // 0x80222D64: jal         0x8020D4EC
    // 0x80222D68: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_400;
    // 0x80222D68: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_400:
    // 0x80222D6C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80222D70: lw          $t0, 0x20($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X20);
    // 0x80222D74: bnel        $t0, $zero, L_80222D9C
    if (ctx->r8 != 0) {
        // 0x80222D78: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80222D9C;
    }
    goto skip_123;
    // 0x80222D78: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_123:
    // 0x80222D7C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80222D80: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222D84: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222D88: jal         0x80224430
    // 0x80222D8C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80224430_68DE10(rdram, ctx);
        goto after_401;
    // 0x80222D8C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_401:
    // 0x80222D90: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80222D94: sw          $v0, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->r2;
    // 0x80222D98: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80222D9C:
    // 0x80222D9C: lw          $t4, 0x24($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X24);
    // 0x80222DA0: bnel        $t4, $zero, L_80222DC8
    if (ctx->r12 != 0) {
        // 0x80222DA4: lw          $a0, 0x88($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X88);
            goto L_80222DC8;
    }
    goto skip_124;
    // 0x80222DA4: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    skip_124:
    // 0x80222DA8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80222DAC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222DB0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222DB4: jal         0x80228860
    // 0x80222DB8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80228860_692240(rdram, ctx);
        goto after_402;
    // 0x80222DB8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_402:
    // 0x80222DBC: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80222DC0: sw          $v0, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->r2;
    // 0x80222DC4: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
L_80222DC8:
    // 0x80222DC8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222DCC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222DD0: jal         0x80229A54
    // 0x80222DD4: lui         $a3, 0xC448
    ctx->r7 = S32(0XC448 << 16);
    func_80229A54_693434(rdram, ctx);
        goto after_403;
    // 0x80222DD4: lui         $a3, 0xC448
    ctx->r7 = S32(0XC448 << 16);
    after_403:
    // 0x80222DD8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222DDC: sw          $v0, 0x38($t1)
    MEM_W(0X38, ctx->r9) = ctx->r2;
    // 0x80222DE0: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80222DE4: lw          $t6, 0x38($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X38);
    // 0x80222DE8: beq         $t6, $zero, L_80222E10
    if (ctx->r14 == 0) {
        // 0x80222DEC: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_80222E10;
    }
    // 0x80222DEC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80222DF0: jal         0x8022993C
    // 0x80222DF4: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_8022993C_69331C(rdram, ctx);
        goto after_404;
    // 0x80222DF4: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_404:
    // 0x80222DF8: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80222DFC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222E00: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222E04: lui         $a3, 0xC3C8
    ctx->r7 = S32(0XC3C8 << 16);
    // 0x80222E08: jal         0x8022999C
    // 0x80222E0C: lw          $a0, 0x38($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X38);
    func_8022999C_69337C(rdram, ctx);
        goto after_405;
    // 0x80222E0C: lw          $a0, 0x38($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X38);
    after_405:
L_80222E10:
    // 0x80222E10: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80222E14: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    // 0x80222E18: jal         0x80012500
    // 0x80222E1C: lw          $a0, 0x18($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18);
    func_80012500_13100(rdram, ctx);
        goto after_406;
    // 0x80222E1C: lw          $a0, 0x18($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18);
    after_406:
    // 0x80222E20: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80222E24: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222E28: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x80222E2C: lui         $a3, 0xC3C8
    ctx->r7 = S32(0XC3C8 << 16);
    // 0x80222E30: jal         0x80012818
    // 0x80222E34: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    func_80012818_13418(rdram, ctx);
        goto after_407;
    // 0x80222E34: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    after_407:
    // 0x80222E38: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80222E3C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222E40: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    // 0x80222E44: lui         $a3, 0xC348
    ctx->r7 = S32(0XC348 << 16);
    // 0x80222E48: jal         0x800127B8
    // 0x80222E4C: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    func_800127B8_133B8(rdram, ctx);
        goto after_408;
    // 0x80222E4C: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    after_408:
    // 0x80222E50: jal         0x80038B98
    // 0x80222E54: addiu       $a0, $zero, 0x16E
    ctx->r4 = ADD32(0, 0X16E);
    func_80038B98_39798(rdram, ctx);
        goto after_409;
    // 0x80222E54: addiu       $a0, $zero, 0x16E
    ctx->r4 = ADD32(0, 0X16E);
    after_409:
    // 0x80222E58: b           L_80223B0C
    // 0x80222E5C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80222E5C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222E60: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80222E64:
    // 0x80222E64: addiu       $at, $zero, 0xE6
    ctx->r1 = ADD32(0, 0XE6);
    // 0x80222E68: lh          $t4, 0x2($t7)
    ctx->r12 = MEM_H(ctx->r15, 0X2);
    // 0x80222E6C: bnel        $t4, $at, L_80223B0C
    if (ctx->r12 != ctx->r1) {
        // 0x80222E70: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_125;
    // 0x80222E70: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_125:
    // 0x80222E74: lw          $t3, 0x38($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X38);
    // 0x80222E78: beql        $t3, $zero, L_80222E94
    if (ctx->r11 == 0) {
        // 0x80222E7C: lw          $t2, 0x84($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X84);
            goto L_80222E94;
    }
    goto skip_126;
    // 0x80222E7C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    skip_126:
    // 0x80222E80: jal         0x80034EF8
    // 0x80222E84: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_410;
    // 0x80222E84: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_410:
    // 0x80222E88: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222E8C: sw          $zero, 0x38($t1)
    MEM_W(0X38, ctx->r9) = 0;
    // 0x80222E90: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
L_80222E94:
    // 0x80222E94: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x80222E98: sh          $zero, 0x2($t2)
    MEM_H(0X2, ctx->r10) = 0;
    // 0x80222E9C: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80222EA0: b           L_80223B08
    // 0x80222EA4: sb          $t6, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r14;
        goto L_80223B08;
    // 0x80222EA4: sb          $t6, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r14;
L_80222EA8:
    // 0x80222EA8: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80222EAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80222EB0: lh          $t0, 0x2($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X2);
    // 0x80222EB4: bnel        $t0, $at, L_8022311C
    if (ctx->r8 != ctx->r1) {
        // 0x80222EB8: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_8022311C;
    }
    goto skip_127;
    // 0x80222EB8: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_127:
    // 0x80222EBC: lw          $t9, 0x28($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X28);
    // 0x80222EC0: bnel        $t9, $zero, L_80222EE8
    if (ctx->r25 != 0) {
        // 0x80222EC4: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80222EE8;
    }
    goto skip_128;
    // 0x80222EC4: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_128:
    // 0x80222EC8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80222ECC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222ED0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222ED4: jal         0x80212684
    // 0x80222ED8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80212684_67C064(rdram, ctx);
        goto after_411;
    // 0x80222ED8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_411:
    // 0x80222EDC: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80222EE0: sw          $v0, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->r2;
    // 0x80222EE4: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80222EE8:
    // 0x80222EE8: jal         0x80212664
    // 0x80222EEC: lw          $a0, 0x28($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X28);
    func_80212664_67C044(rdram, ctx);
        goto after_412;
    // 0x80222EEC: lw          $a0, 0x28($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X28);
    after_412:
    // 0x80222EF0: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x80222EF4: addiu       $t3, $t3, -0x39FC
    ctx->r11 = ADD32(ctx->r11, -0X39FC);
    // 0x80222EF8: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x80222EFC: jal         0x801DACDC
    // 0x80222F00: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_413;
    // 0x80222F00: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    after_413:
    // 0x80222F04: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80222F08: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222F0C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222F10: lui         $a3, 0x4250
    ctx->r7 = S32(0X4250 << 16);
    // 0x80222F14: jal         0x802122D4
    // 0x80222F18: lw          $a0, 0x28($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X28);
    func_802122D4_67BCB4(rdram, ctx);
        goto after_414;
    // 0x80222F18: lw          $a0, 0x28($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X28);
    after_414:
    // 0x80222F1C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80222F20: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222F24: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x80222F28: jal         0x802123F4
    // 0x80222F2C: lw          $a0, 0x28($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X28);
    func_802123F4_67BDD4(rdram, ctx);
        goto after_415;
    // 0x80222F2C: lw          $a0, 0x28($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X28);
    after_415:
    // 0x80222F30: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80222F34: lw          $t5, 0x2C($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X2C);
    // 0x80222F38: bnel        $t5, $zero, L_80222F60
    if (ctx->r13 != 0) {
        // 0x80222F3C: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_80222F60;
    }
    goto skip_129;
    // 0x80222F3C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_129:
    // 0x80222F40: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80222F44: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222F48: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222F4C: jal         0x80228368
    // 0x80222F50: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80228368_691D48(rdram, ctx);
        goto after_416;
    // 0x80222F50: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_416:
    // 0x80222F54: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80222F58: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
    // 0x80222F5C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_80222F60:
    // 0x80222F60: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80222F64: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222F68: jal         0x80227FA8
    // 0x80222F6C: lw          $a0, 0x2C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X2C);
    func_80227FA8_691988(rdram, ctx);
        goto after_417;
    // 0x80222F6C: lw          $a0, 0x2C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X2C);
    after_417:
    // 0x80222F70: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80222F74: jal         0x80228354
    // 0x80222F78: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    func_80228354_691D34(rdram, ctx);
        goto after_418;
    // 0x80222F78: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    after_418:
    // 0x80222F7C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80222F80: lui         $a1, 0xC180
    ctx->r5 = S32(0XC180 << 16);
    // 0x80222F84: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222F88: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x80222F8C: jal         0x8022817C
    // 0x80222F90: lw          $a0, 0x2C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X2C);
    func_8022817C_691B5C(rdram, ctx);
        goto after_419;
    // 0x80222F90: lw          $a0, 0x2C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X2C);
    after_419:
    // 0x80222F94: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80222F98: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222F9C: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x80222FA0: jal         0x80228130
    // 0x80222FA4: lw          $a0, 0x2C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X2C);
    func_80228130_691B10(rdram, ctx);
        goto after_420;
    // 0x80222FA4: lw          $a0, 0x2C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X2C);
    after_420:
    // 0x80222FA8: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80222FAC: lw          $t1, 0x30($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X30);
    // 0x80222FB0: bnel        $t1, $zero, L_80222FD8
    if (ctx->r9 != 0) {
        // 0x80222FB4: lw          $t6, 0x84($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X84);
            goto L_80222FD8;
    }
    goto skip_130;
    // 0x80222FB4: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    skip_130:
    // 0x80222FB8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80222FBC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80222FC0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222FC4: jal         0x80227494
    // 0x80222FC8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80227494_690E74(rdram, ctx);
        goto after_421;
    // 0x80222FC8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_421:
    // 0x80222FCC: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80222FD0: sw          $v0, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r2;
    // 0x80222FD4: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
L_80222FD8:
    // 0x80222FD8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80222FDC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222FE0: jal         0x80227130
    // 0x80222FE4: lw          $a0, 0x30($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X30);
    func_80227130_690B10(rdram, ctx);
        goto after_422;
    // 0x80222FE4: lw          $a0, 0x30($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X30);
    after_422:
    // 0x80222FE8: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80222FEC: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    // 0x80222FF0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80222FF4: lui         $a3, 0x4240
    ctx->r7 = S32(0X4240 << 16);
    // 0x80222FF8: jal         0x8022725C
    // 0x80222FFC: lw          $a0, 0x30($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X30);
    func_8022725C_690C3C(rdram, ctx);
        goto after_423;
    // 0x80222FFC: lw          $a0, 0x30($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X30);
    after_423:
    // 0x80223000: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80223004: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80223008: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x8022300C: jal         0x80227360
    // 0x80223010: lw          $a0, 0x30($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X30);
    func_80227360_690D40(rdram, ctx);
        goto after_424;
    // 0x80223010: lw          $a0, 0x30($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X30);
    after_424:
    // 0x80223014: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80223018: lw          $t9, 0x34($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X34);
    // 0x8022301C: bnel        $t9, $zero, L_80223044
    if (ctx->r25 != 0) {
        // 0x80223020: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80223044;
    }
    goto skip_131;
    // 0x80223020: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_131:
    // 0x80223024: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80223028: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8022302C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80223030: jal         0x80227BCC
    // 0x80223034: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80227BCC_6915AC(rdram, ctx);
        goto after_425;
    // 0x80223034: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_425:
    // 0x80223038: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8022303C: sw          $v0, 0x34($t4)
    MEM_W(0X34, ctx->r12) = ctx->r2;
    // 0x80223040: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80223044:
    // 0x80223044: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80223048: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022304C: jal         0x80227870
    // 0x80223050: lw          $a0, 0x34($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X34);
    func_80227870_691250(rdram, ctx);
        goto after_426;
    // 0x80223050: lw          $a0, 0x34($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X34);
    after_426:
    // 0x80223054: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80223058: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x8022305C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80223060: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    // 0x80223064: jal         0x802279E0
    // 0x80223068: lw          $a0, 0x34($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X34);
    func_802279E0_6913C0(rdram, ctx);
        goto after_427;
    // 0x80223068: lw          $a0, 0x34($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X34);
    after_427:
    // 0x8022306C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80223070: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x80223074: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x80223078: jal         0x80227994
    // 0x8022307C: lw          $a0, 0x34($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X34);
    func_80227994_691374(rdram, ctx);
        goto after_428;
    // 0x8022307C: lw          $a0, 0x34($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X34);
    after_428:
    // 0x80223080: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80223084: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    // 0x80223088: jal         0x80012500
    // 0x8022308C: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    func_80012500_13100(rdram, ctx);
        goto after_429;
    // 0x8022308C: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    after_429:
    // 0x80223090: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80223094: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80223098: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x8022309C: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    // 0x802230A0: jal         0x80012818
    // 0x802230A4: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    func_80012818_13418(rdram, ctx);
        goto after_430;
    // 0x802230A4: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    after_430:
    // 0x802230A8: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x802230AC: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    // 0x802230B0: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x802230B4: lui         $a3, 0xC2F0
    ctx->r7 = S32(0XC2F0 << 16);
    // 0x802230B8: jal         0x800127B8
    // 0x802230BC: lw          $a0, 0x18($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X18);
    func_800127B8_133B8(rdram, ctx);
        goto after_431;
    // 0x802230BC: lw          $a0, 0x18($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X18);
    after_431:
    // 0x802230C0: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802230C4: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x802230C8: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x802230CC: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    // 0x802230D0: jal         0x800133E0
    // 0x802230D4: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    func_800133E0_13FE0(rdram, ctx);
        goto after_432;
    // 0x802230D4: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    after_432:
    // 0x802230D8: jal         0x8003D310
    // 0x802230DC: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    func_8003D310_3DF10(rdram, ctx);
        goto after_433;
    // 0x802230DC: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    after_433:
    // 0x802230E0: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x802230E4: addiu       $t8, $t8, -0x39FC
    ctx->r24 = ADD32(ctx->r24, -0X39FC);
    // 0x802230E8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x802230EC: addiu       $a1, $zero, 0xE4
    ctx->r5 = ADD32(0, 0XE4);
    // 0x802230F0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802230F4: jal         0x801DAC7C
    // 0x802230F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_434;
    // 0x802230F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_434:
    // 0x802230FC: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80223100: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80223104: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80223108: jal         0x80227FA8
    // 0x8022310C: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    func_80227FA8_691988(rdram, ctx);
        goto after_435;
    // 0x8022310C: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    after_435:
    // 0x80223110: b           L_80223B0C
    // 0x80223114: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80223114: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80223118: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_8022311C:
    // 0x8022311C: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x80223120: lh          $t7, 0x2($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X2);
    // 0x80223124: bnel        $t7, $at, L_80223148
    if (ctx->r15 != ctx->r1) {
        // 0x80223128: lw          $t3, 0x84($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X84);
            goto L_80223148;
    }
    goto skip_132;
    // 0x80223128: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    skip_132:
    // 0x8022312C: lw          $a0, 0x34($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X34);
    // 0x80223130: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80223134: jal         0x80227870
    // 0x80223138: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80227870_691250(rdram, ctx);
        goto after_436;
    // 0x80223138: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_436:
    // 0x8022313C: b           L_80223B0C
    // 0x80223140: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80223140: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80223144: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
L_80223148:
    // 0x80223148: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x8022314C: lh          $t1, 0x2($t3)
    ctx->r9 = MEM_H(ctx->r11, 0X2);
    // 0x80223150: bnel        $t1, $at, L_802231A0
    if (ctx->r9 != ctx->r1) {
        // 0x80223154: lw          $t5, 0x84($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X84);
            goto L_802231A0;
    }
    goto skip_133;
    // 0x80223154: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    skip_133:
    // 0x80223158: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    // 0x8022315C: jal         0x800124A0
    // 0x80223160: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_437;
    // 0x80223160: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_437:
    // 0x80223164: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80223168: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x8022316C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x80223170: lui         $a3, 0xC260
    ctx->r7 = S32(0XC260 << 16);
    // 0x80223174: jal         0x80012628
    // 0x80223178: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    func_80012628_13228(rdram, ctx);
        goto after_438;
    // 0x80223178: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    after_438:
    // 0x8022317C: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80223180: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    // 0x80223184: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x80223188: lui         $a3, 0xC32C
    ctx->r7 = S32(0XC32C << 16);
    // 0x8022318C: jal         0x80012518
    // 0x80223190: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    func_80012518_13118(rdram, ctx);
        goto after_439;
    // 0x80223190: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    after_439:
    // 0x80223194: b           L_80223B0C
    // 0x80223198: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80223198: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8022319C: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
L_802231A0:
    // 0x802231A0: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x802231A4: lh          $t0, 0x2($t5)
    ctx->r8 = MEM_H(ctx->r13, 0X2);
    // 0x802231A8: bnel        $t0, $at, L_802231CC
    if (ctx->r8 != ctx->r1) {
        // 0x802231AC: lw          $t8, 0x84($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X84);
            goto L_802231CC;
    }
    goto skip_134;
    // 0x802231AC: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    skip_134:
    // 0x802231B0: lw          $a0, 0x2C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2C);
    // 0x802231B4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x802231B8: jal         0x80227FA8
    // 0x802231BC: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80227FA8_691988(rdram, ctx);
        goto after_440;
    // 0x802231BC: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_440:
    // 0x802231C0: b           L_80223B0C
    // 0x802231C4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x802231C4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802231C8: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
L_802231CC:
    // 0x802231CC: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x802231D0: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x802231D4: bnel        $t9, $at, L_802231F0
    if (ctx->r25 != ctx->r1) {
        // 0x802231D8: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_802231F0;
    }
    goto skip_135;
    // 0x802231D8: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_135:
    // 0x802231DC: jal         0x802122B0
    // 0x802231E0: lw          $a0, 0x28($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X28);
    func_802122B0_67BC90(rdram, ctx);
        goto after_441;
    // 0x802231E0: lw          $a0, 0x28($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X28);
    after_441:
    // 0x802231E4: b           L_80223B0C
    // 0x802231E8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x802231E8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802231EC: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_802231F0:
    // 0x802231F0: addiu       $at, $zero, 0x1CC
    ctx->r1 = ADD32(0, 0X1CC);
    // 0x802231F4: lh          $t4, 0x2($t7)
    ctx->r12 = MEM_H(ctx->r15, 0X2);
    // 0x802231F8: bnel        $t4, $at, L_80223214
    if (ctx->r12 != ctx->r1) {
        // 0x802231FC: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223214;
    }
    goto skip_136;
    // 0x802231FC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_136:
    // 0x80223200: jal         0x80038B98
    // 0x80223204: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    func_80038B98_39798(rdram, ctx);
        goto after_442;
    // 0x80223204: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_442:
    // 0x80223208: b           L_80223B0C
    // 0x8022320C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x8022320C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80223210: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80223214:
    // 0x80223214: addiu       $at, $zero, 0x1E0
    ctx->r1 = ADD32(0, 0X1E0);
    // 0x80223218: lh          $t3, 0x2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X2);
    // 0x8022321C: bnel        $t3, $at, L_80223B0C
    if (ctx->r11 != ctx->r1) {
        // 0x80223220: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_137;
    // 0x80223220: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_137:
    // 0x80223224: jal         0x80212640
    // 0x80223228: lw          $a0, 0x28($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X28);
    func_80212640_67C020(rdram, ctx);
        goto after_443;
    // 0x80223228: lw          $a0, 0x28($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X28);
    after_443:
    // 0x8022322C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80223230: lw          $t6, 0x28($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X28);
    // 0x80223234: beql        $t6, $zero, L_80223250
    if (ctx->r14 == 0) {
        // 0x80223238: lw          $t5, 0x84($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X84);
            goto L_80223250;
    }
    goto skip_138;
    // 0x80223238: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    skip_138:
    // 0x8022323C: jal         0x80034EF8
    // 0x80223240: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_444;
    // 0x80223240: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_444:
    // 0x80223244: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80223248: sw          $zero, 0x28($t0)
    MEM_W(0X28, ctx->r8) = 0;
    // 0x8022324C: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
L_80223250:
    // 0x80223250: lw          $t9, 0x34($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X34);
    // 0x80223254: beql        $t9, $zero, L_80223270
    if (ctx->r25 == 0) {
        // 0x80223258: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80223270;
    }
    goto skip_139;
    // 0x80223258: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_139:
    // 0x8022325C: jal         0x80034EF8
    // 0x80223260: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_445;
    // 0x80223260: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_445:
    // 0x80223264: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80223268: sw          $zero, 0x34($t8)
    MEM_W(0X34, ctx->r24) = 0;
    // 0x8022326C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80223270:
    // 0x80223270: lw          $t4, 0x2C($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X2C);
    // 0x80223274: beql        $t4, $zero, L_80223290
    if (ctx->r12 == 0) {
        // 0x80223278: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223290;
    }
    goto skip_140;
    // 0x80223278: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_140:
    // 0x8022327C: jal         0x80034EF8
    // 0x80223280: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_446;
    // 0x80223280: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_446:
    // 0x80223284: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80223288: sw          $zero, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = 0;
    // 0x8022328C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80223290:
    // 0x80223290: lw          $t2, 0x30($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X30);
    // 0x80223294: beq         $t2, $zero, L_802232AC
    if (ctx->r10 == 0) {
        // 0x80223298: nop
    
            goto L_802232AC;
    }
    // 0x80223298: nop

    // 0x8022329C: jal         0x80034EF8
    // 0x802232A0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_447;
    // 0x802232A0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_447:
    // 0x802232A4: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x802232A8: sw          $zero, 0x30($t6)
    MEM_W(0X30, ctx->r14) = 0;
L_802232AC:
    // 0x802232AC: jal         0x8003F5FC
    // 0x802232B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003F5FC_401FC(rdram, ctx);
        goto after_448;
    // 0x802232B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_448:
    // 0x802232B4: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802232B8: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x802232BC: sh          $zero, 0x2($t0)
    MEM_H(0X2, ctx->r8) = 0;
    // 0x802232C0: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802232C4: b           L_80223B08
    // 0x802232C8: sb          $t5, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r13;
        goto L_80223B08;
    // 0x802232C8: sb          $t5, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r13;
L_802232CC:
    // 0x802232CC: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x802232D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802232D4: lh          $t7, 0x2($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X2);
    // 0x802232D8: bnel        $t7, $at, L_80223424
    if (ctx->r15 != ctx->r1) {
        // 0x802232DC: lw          $t5, 0x84($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X84);
            goto L_80223424;
    }
    goto skip_141;
    // 0x802232DC: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    skip_141:
    // 0x802232E0: lw          $a0, 0x1C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1C);
    // 0x802232E4: jal         0x8020D4EC
    // 0x802232E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_449;
    // 0x802232E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_449:
    // 0x802232EC: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x802232F0: lw          $t3, 0x20($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X20);
    // 0x802232F4: bnel        $t3, $zero, L_8022331C
    if (ctx->r11 != 0) {
        // 0x802232F8: lw          $t2, 0x84($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X84);
            goto L_8022331C;
    }
    goto skip_142;
    // 0x802232F8: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    skip_142:
    // 0x802232FC: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80223300: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80223304: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80223308: jal         0x80224430
    // 0x8022330C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80224430_68DE10(rdram, ctx);
        goto after_450;
    // 0x8022330C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_450:
    // 0x80223310: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80223314: sw          $v0, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->r2;
    // 0x80223318: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
L_8022331C:
    // 0x8022331C: lw          $t6, 0x24($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X24);
    // 0x80223320: bnel        $t6, $zero, L_80223348
    if (ctx->r14 != 0) {
        // 0x80223324: lw          $a0, 0x88($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X88);
            goto L_80223348;
    }
    goto skip_143;
    // 0x80223324: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    skip_143:
    // 0x80223328: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8022332C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80223330: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80223334: jal         0x80228860
    // 0x80223338: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80228860_692240(rdram, ctx);
        goto after_451;
    // 0x80223338: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_451:
    // 0x8022333C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80223340: sw          $v0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r2;
    // 0x80223344: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
L_80223348:
    // 0x80223348: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8022334C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80223350: jal         0x80229A54
    // 0x80223354: lui         $a3, 0xC3C8
    ctx->r7 = S32(0XC3C8 << 16);
    func_80229A54_693434(rdram, ctx);
        goto after_452;
    // 0x80223354: lui         $a3, 0xC3C8
    ctx->r7 = S32(0XC3C8 << 16);
    after_452:
    // 0x80223358: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x8022335C: sw          $v0, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r2;
    // 0x80223360: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80223364: lw          $t7, 0x38($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X38);
    // 0x80223368: beq         $t7, $zero, L_80223390
    if (ctx->r15 == 0) {
        // 0x8022336C: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_80223390;
    }
    // 0x8022336C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80223370: jal         0x8022993C
    // 0x80223374: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    func_8022993C_69331C(rdram, ctx);
        goto after_453;
    // 0x80223374: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    after_453:
    // 0x80223378: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x8022337C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80223380: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80223384: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80223388: jal         0x8022999C
    // 0x8022338C: lw          $a0, 0x38($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X38);
    func_8022999C_69337C(rdram, ctx);
        goto after_454;
    // 0x8022338C: lw          $a0, 0x38($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X38);
    after_454:
L_80223390:
    // 0x80223390: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80223394: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    // 0x80223398: jal         0x80012500
    // 0x8022339C: lw          $a0, 0x18($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X18);
    func_80012500_13100(rdram, ctx);
        goto after_455;
    // 0x8022339C: lw          $a0, 0x18($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X18);
    after_455:
    // 0x802233A0: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x802233A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802233A8: lui         $a2, 0x4190
    ctx->r6 = S32(0X4190 << 16);
    // 0x802233AC: lui         $a3, 0xC3C8
    ctx->r7 = S32(0XC3C8 << 16);
    // 0x802233B0: jal         0x80012818
    // 0x802233B4: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    func_80012818_13418(rdram, ctx);
        goto after_456;
    // 0x802233B4: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    after_456:
    // 0x802233B8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802233BC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802233C0: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    // 0x802233C4: lui         $a3, 0xC348
    ctx->r7 = S32(0XC348 << 16);
    // 0x802233C8: jal         0x800127B8
    // 0x802233CC: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    func_800127B8_133B8(rdram, ctx);
        goto after_457;
    // 0x802233CC: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    after_457:
    // 0x802233D0: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x802233D4: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    // 0x802233D8: jal         0x800124A0
    // 0x802233DC: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    func_800124A0_130A0(rdram, ctx);
        goto after_458;
    // 0x802233DC: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    after_458:
    // 0x802233E0: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x802233E4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802233E8: lui         $a2, 0x4190
    ctx->r6 = S32(0X4190 << 16);
    // 0x802233EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802233F0: jal         0x80012628
    // 0x802233F4: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    func_80012628_13228(rdram, ctx);
        goto after_459;
    // 0x802233F4: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    after_459:
    // 0x802233F8: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802233FC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80223400: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    // 0x80223404: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    // 0x80223408: jal         0x80012518
    // 0x8022340C: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    func_80012518_13118(rdram, ctx);
        goto after_460;
    // 0x8022340C: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    after_460:
    // 0x80223410: jal         0x80038B98
    // 0x80223414: addiu       $a0, $zero, 0x16F
    ctx->r4 = ADD32(0, 0X16F);
    func_80038B98_39798(rdram, ctx);
        goto after_461;
    // 0x80223414: addiu       $a0, $zero, 0x16F
    ctx->r4 = ADD32(0, 0X16F);
    after_461:
    // 0x80223418: b           L_80223B0C
    // 0x8022341C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x8022341C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80223420: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
L_80223424:
    // 0x80223424: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80223428: lh          $t9, 0x2($t5)
    ctx->r25 = MEM_H(ctx->r13, 0X2);
    // 0x8022342C: bnel        $t9, $at, L_80223448
    if (ctx->r25 != ctx->r1) {
        // 0x80223430: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80223448;
    }
    goto skip_144;
    // 0x80223430: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_144:
    // 0x80223434: jal         0x8003D310
    // 0x80223438: addiu       $a0, $zero, 0x302
    ctx->r4 = ADD32(0, 0X302);
    func_8003D310_3DF10(rdram, ctx);
        goto after_462;
    // 0x80223438: addiu       $a0, $zero, 0x302
    ctx->r4 = ADD32(0, 0X302);
    after_462:
    // 0x8022343C: b           L_80223B0C
    // 0x80223440: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80223440: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80223444: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80223448:
    // 0x80223448: addiu       $at, $zero, 0x370
    ctx->r1 = ADD32(0, 0X370);
    // 0x8022344C: lh          $t8, 0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2);
    // 0x80223450: bnel        $t8, $at, L_80223B0C
    if (ctx->r24 != ctx->r1) {
        // 0x80223454: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_145;
    // 0x80223454: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_145:
    // 0x80223458: sh          $zero, 0x2($t7)
    MEM_H(0X2, ctx->r15) = 0;
    // 0x8022345C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80223460: addiu       $t4, $zero, 0x15
    ctx->r12 = ADD32(0, 0X15);
    // 0x80223464: b           L_80223B08
    // 0x80223468: sb          $t4, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r12;
        goto L_80223B08;
    // 0x80223468: sb          $t4, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r12;
L_8022346C:
    // 0x8022346C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80223470: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80223474: lh          $t2, 0x2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2);
    // 0x80223478: bnel        $t2, $at, L_80223720
    if (ctx->r10 != ctx->r1) {
        // 0x8022347C: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_80223720;
    }
    goto skip_146;
    // 0x8022347C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_146:
    // 0x80223480: lw          $t6, 0x38($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X38);
    // 0x80223484: beql        $t6, $zero, L_802234A0
    if (ctx->r14 == 0) {
        // 0x80223488: lw          $t5, 0x84($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X84);
            goto L_802234A0;
    }
    goto skip_147;
    // 0x80223488: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    skip_147:
    // 0x8022348C: jal         0x80034EF8
    // 0x80223490: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_463;
    // 0x80223490: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_463:
    // 0x80223494: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80223498: sw          $zero, 0x38($t0)
    MEM_W(0X38, ctx->r8) = 0;
    // 0x8022349C: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
L_802234A0:
    // 0x802234A0: lw          $t9, 0x28($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X28);
    // 0x802234A4: bnel        $t9, $zero, L_802234CC
    if (ctx->r25 != 0) {
        // 0x802234A8: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_802234CC;
    }
    goto skip_148;
    // 0x802234A8: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_148:
    // 0x802234AC: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x802234B0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802234B4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802234B8: jal         0x80212684
    // 0x802234BC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80212684_67C064(rdram, ctx);
        goto after_464;
    // 0x802234BC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_464:
    // 0x802234C0: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x802234C4: sw          $v0, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->r2;
    // 0x802234C8: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_802234CC:
    // 0x802234CC: jal         0x80212664
    // 0x802234D0: lw          $a0, 0x28($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X28);
    func_80212664_67C044(rdram, ctx);
        goto after_465;
    // 0x802234D0: lw          $a0, 0x28($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X28);
    after_465:
    // 0x802234D4: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x802234D8: addiu       $t4, $t4, -0x39FC
    ctx->r12 = ADD32(ctx->r12, -0X39FC);
    // 0x802234DC: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x802234E0: jal         0x801DACDC
    // 0x802234E4: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_466;
    // 0x802234E4: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    after_466:
    // 0x802234E8: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x802234EC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802234F0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802234F4: lui         $a3, 0x4250
    ctx->r7 = S32(0X4250 << 16);
    // 0x802234F8: jal         0x802122D4
    // 0x802234FC: lw          $a0, 0x28($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X28);
    func_802122D4_67BCB4(rdram, ctx);
        goto after_467;
    // 0x802234FC: lw          $a0, 0x28($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X28);
    after_467:
    // 0x80223500: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80223504: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80223508: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x8022350C: jal         0x802123F4
    // 0x80223510: lw          $a0, 0x28($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X28);
    func_802123F4_67BDD4(rdram, ctx);
        goto after_468;
    // 0x80223510: lw          $a0, 0x28($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X28);
    after_468:
    // 0x80223514: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80223518: lw          $t6, 0x2C($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X2C);
    // 0x8022351C: bnel        $t6, $zero, L_80223544
    if (ctx->r14 != 0) {
        // 0x80223520: lw          $t5, 0x84($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X84);
            goto L_80223544;
    }
    goto skip_149;
    // 0x80223520: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    skip_149:
    // 0x80223524: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80223528: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8022352C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80223530: jal         0x80228368
    // 0x80223534: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80228368_691D48(rdram, ctx);
        goto after_469;
    // 0x80223534: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_469:
    // 0x80223538: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x8022353C: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
    // 0x80223540: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
L_80223544:
    // 0x80223544: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80223548: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022354C: jal         0x80227FA8
    // 0x80223550: lw          $a0, 0x2C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2C);
    func_80227FA8_691988(rdram, ctx);
        goto after_470;
    // 0x80223550: lw          $a0, 0x2C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2C);
    after_470:
    // 0x80223554: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80223558: jal         0x80228354
    // 0x8022355C: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    func_80228354_691D34(rdram, ctx);
        goto after_471;
    // 0x8022355C: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    after_471:
    // 0x80223560: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80223564: lui         $a1, 0xC160
    ctx->r5 = S32(0XC160 << 16);
    // 0x80223568: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022356C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x80223570: jal         0x8022817C
    // 0x80223574: lw          $a0, 0x2C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X2C);
    func_8022817C_691B5C(rdram, ctx);
        goto after_472;
    // 0x80223574: lw          $a0, 0x2C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X2C);
    after_472:
    // 0x80223578: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8022357C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80223580: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x80223584: jal         0x80228130
    // 0x80223588: lw          $a0, 0x2C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X2C);
    func_80228130_691B10(rdram, ctx);
        goto after_473;
    // 0x80223588: lw          $a0, 0x2C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X2C);
    after_473:
    // 0x8022358C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x80223590: lw          $t3, 0x30($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X30);
    // 0x80223594: bnel        $t3, $zero, L_802235BC
    if (ctx->r11 != 0) {
        // 0x80223598: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_802235BC;
    }
    goto skip_150;
    // 0x80223598: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_150:
    // 0x8022359C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x802235A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802235A4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802235A8: jal         0x80227494
    // 0x802235AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80227494_690E74(rdram, ctx);
        goto after_474;
    // 0x802235AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_474:
    // 0x802235B0: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x802235B4: sw          $v0, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r2;
    // 0x802235B8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_802235BC:
    // 0x802235BC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802235C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802235C4: jal         0x80227130
    // 0x802235C8: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    func_80227130_690B10(rdram, ctx);
        goto after_475;
    // 0x802235C8: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    after_475:
    // 0x802235CC: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x802235D0: lui         $a1, 0x4160
    ctx->r5 = S32(0X4160 << 16);
    // 0x802235D4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802235D8: lui         $a3, 0x4240
    ctx->r7 = S32(0X4240 << 16);
    // 0x802235DC: jal         0x8022725C
    // 0x802235E0: lw          $a0, 0x30($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X30);
    func_8022725C_690C3C(rdram, ctx);
        goto after_476;
    // 0x802235E0: lw          $a0, 0x30($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X30);
    after_476:
    // 0x802235E4: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802235E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802235EC: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x802235F0: jal         0x80227360
    // 0x802235F4: lw          $a0, 0x30($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X30);
    func_80227360_690D40(rdram, ctx);
        goto after_477;
    // 0x802235F4: lw          $a0, 0x30($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X30);
    after_477:
    // 0x802235F8: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x802235FC: lw          $t9, 0x34($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X34);
    // 0x80223600: bnel        $t9, $zero, L_80223628
    if (ctx->r25 != 0) {
        // 0x80223604: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80223628;
    }
    goto skip_151;
    // 0x80223604: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_151:
    // 0x80223608: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8022360C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80223610: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80223614: jal         0x80227BCC
    // 0x80223618: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80227BCC_6915AC(rdram, ctx);
        goto after_478;
    // 0x80223618: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_478:
    // 0x8022361C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80223620: sw          $v0, 0x34($t8)
    MEM_W(0X34, ctx->r24) = ctx->r2;
    // 0x80223624: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80223628:
    // 0x80223628: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8022362C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80223630: jal         0x80227870
    // 0x80223634: lw          $a0, 0x34($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X34);
    func_80227870_691250(rdram, ctx);
        goto after_479;
    // 0x80223634: lw          $a0, 0x34($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X34);
    after_479:
    // 0x80223638: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8022363C: lui         $a1, 0x41E0
    ctx->r5 = S32(0X41E0 << 16);
    // 0x80223640: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80223644: lui         $a3, 0x4238
    ctx->r7 = S32(0X4238 << 16);
    // 0x80223648: jal         0x802279E0
    // 0x8022364C: lw          $a0, 0x34($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X34);
    func_802279E0_6913C0(rdram, ctx);
        goto after_480;
    // 0x8022364C: lw          $a0, 0x34($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X34);
    after_480:
    // 0x80223650: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80223654: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80223658: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x8022365C: jal         0x80227994
    // 0x80223660: lw          $a0, 0x34($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X34);
    func_80227994_691374(rdram, ctx);
        goto after_481;
    // 0x80223660: lw          $a0, 0x34($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X34);
    after_481:
    // 0x80223664: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80223668: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x8022366C: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80223670: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    // 0x80223674: jal         0x800133E0
    // 0x80223678: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    func_800133E0_13FE0(rdram, ctx);
        goto after_482;
    // 0x80223678: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    after_482:
    // 0x8022367C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80223680: addiu       $a1, $zero, 0x640
    ctx->r5 = ADD32(0, 0X640);
    // 0x80223684: jal         0x80012500
    // 0x80223688: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    func_80012500_13100(rdram, ctx);
        goto after_483;
    // 0x80223688: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    after_483:
    // 0x8022368C: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80223690: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x80223694: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x80223698: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8022369C: jal         0x80012818
    // 0x802236A0: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    func_80012818_13418(rdram, ctx);
        goto after_484;
    // 0x802236A0: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    after_484:
    // 0x802236A4: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x802236A8: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x802236AC: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x802236B0: lui         $a3, 0xC304
    ctx->r7 = S32(0XC304 << 16);
    // 0x802236B4: jal         0x800127B8
    // 0x802236B8: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    func_800127B8_133B8(rdram, ctx);
        goto after_485;
    // 0x802236B8: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    after_485:
    // 0x802236BC: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x802236C0: addiu       $t5, $t5, -0x39FC
    ctx->r13 = ADD32(ctx->r13, -0X39FC);
    // 0x802236C4: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x802236C8: jal         0x801DACDC
    // 0x802236CC: addiu       $a1, $zero, 0xD5
    ctx->r5 = ADD32(0, 0XD5);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_486;
    // 0x802236CC: addiu       $a1, $zero, 0xD5
    ctx->r5 = ADD32(0, 0XD5);
    after_486:
    // 0x802236D0: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802236D4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802236D8: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x802236DC: jal         0x80227FA8
    // 0x802236E0: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    func_80227FA8_691988(rdram, ctx);
        goto after_487;
    // 0x802236E0: lw          $a0, 0x2C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X2C);
    after_487:
    // 0x802236E4: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x802236E8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802236EC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x802236F0: jal         0x80227130
    // 0x802236F4: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    func_80227130_690B10(rdram, ctx);
        goto after_488;
    // 0x802236F4: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    after_488:
    // 0x802236F8: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x802236FC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80223700: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80223704: jal         0x80227870
    // 0x80223708: lw          $a0, 0x34($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X34);
    func_80227870_691250(rdram, ctx);
        goto after_489;
    // 0x80223708: lw          $a0, 0x34($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X34);
    after_489:
    // 0x8022370C: jal         0x8003D310
    // 0x80223710: addiu       $a0, $zero, 0x303
    ctx->r4 = ADD32(0, 0X303);
    func_8003D310_3DF10(rdram, ctx);
        goto after_490;
    // 0x80223710: addiu       $a0, $zero, 0x303
    ctx->r4 = ADD32(0, 0X303);
    after_490:
    // 0x80223714: b           L_80223B0C
    // 0x80223718: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80223718: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8022371C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_80223720:
    // 0x80223720: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x80223724: lh          $t3, 0x2($t4)
    ctx->r11 = MEM_H(ctx->r12, 0X2);
    // 0x80223728: bnel        $t3, $at, L_80223B0C
    if (ctx->r11 != ctx->r1) {
        // 0x8022372C: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_152;
    // 0x8022372C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_152:
    // 0x80223730: jal         0x80038B98
    // 0x80223734: addiu       $a0, $zero, 0x115
    ctx->r4 = ADD32(0, 0X115);
    func_80038B98_39798(rdram, ctx);
        goto after_491;
    // 0x80223734: addiu       $a0, $zero, 0x115
    ctx->r4 = ADD32(0, 0X115);
    after_491:
    // 0x80223738: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x8022373C: addiu       $t1, $zero, 0x16
    ctx->r9 = ADD32(0, 0X16);
    // 0x80223740: sh          $zero, 0x2($t2)
    MEM_H(0X2, ctx->r10) = 0;
    // 0x80223744: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80223748: b           L_80223B08
    // 0x8022374C: sb          $t1, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r9;
        goto L_80223B08;
    // 0x8022374C: sb          $t1, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r9;
L_80223750:
    // 0x80223750: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80223754: lh          $t5, 0x2($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X2);
    // 0x80223758: blez        $t5, L_802237F8
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8022375C: slti        $at, $t5, 0xC8
        ctx->r1 = SIGNED(ctx->r13) < 0XC8 ? 1 : 0;
            goto L_802237F8;
    }
    // 0x8022375C: slti        $at, $t5, 0xC8
    ctx->r1 = SIGNED(ctx->r13) < 0XC8 ? 1 : 0;
    // 0x80223760: beq         $at, $zero, L_802237F8
    if (ctx->r1 == 0) {
        // 0x80223764: sll         $t9, $t5, 10
        ctx->r25 = S32(ctx->r13 << 10);
            goto L_802237F8;
    }
    // 0x80223764: sll         $t9, $t5, 10
    ctx->r25 = S32(ctx->r13 << 10);
    // 0x80223768: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x8022376C: subu        $t8, $t8, $t9
    ctx->r24 = SUB32(ctx->r24, ctx->r25);
    // 0x80223770: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x80223774: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x80223778: mflo        $a0
    ctx->r4 = lo;
    // 0x8022377C: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x80223780: lh          $t4, 0x2($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X2);
    // 0x80223784: addiu       $t3, $zero, 0xC8
    ctx->r11 = ADD32(0, 0XC8);
    // 0x80223788: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8022378C: subu        $t2, $t3, $t4
    ctx->r10 = SUB32(ctx->r11, ctx->r12);
    // 0x80223790: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80223794: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80223798: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8022379C: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802237A0: jal         0x80003E10
    // 0x802237A4: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_492;
    // 0x802237A4: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    after_492:
    // 0x802237A8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802237AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802237B0: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802237B4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802237B8: mul.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802237BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802237C0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802237C4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802237C8: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    // 0x802237CC: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802237D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802237D4: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x802237D8: sub.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x802237DC: mul.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x802237E0: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802237E4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802237E8: jal         0x80012500
    // 0x802237EC: nop

    func_80012500_13100(rdram, ctx);
        goto after_493;
    // 0x802237EC: nop

    after_493:
    // 0x802237F0: b           L_80223B0C
    // 0x802237F4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x802237F4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_802237F8:
    // 0x802237F8: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x802237FC: lh          $t9, 0x2($t5)
    ctx->r25 = MEM_H(ctx->r13, 0X2);
    // 0x80223800: slti        $at, $t9, 0xC9
    ctx->r1 = SIGNED(ctx->r25) < 0XC9 ? 1 : 0;
    // 0x80223804: bnel        $at, $zero, L_80223B0C
    if (ctx->r1 != 0) {
        // 0x80223808: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_153;
    // 0x80223808: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_153:
    // 0x8022380C: sh          $zero, 0x2($t5)
    MEM_H(0X2, ctx->r13) = 0;
    // 0x80223810: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80223814: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x80223818: b           L_80223B08
    // 0x8022381C: sb          $t8, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r24;
        goto L_80223B08;
    // 0x8022381C: sb          $t8, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r24;
L_80223820:
    // 0x80223820: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80223824: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80223828: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x8022382C: bnel        $t4, $at, L_80223888
    if (ctx->r12 != ctx->r1) {
        // 0x80223830: lw          $t6, 0x84($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X84);
            goto L_80223888;
    }
    goto skip_154;
    // 0x80223830: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    skip_154:
    // 0x80223834: jal         0x8003D310
    // 0x80223838: addiu       $a0, $zero, 0x304
    ctx->r4 = ADD32(0, 0X304);
    func_8003D310_3DF10(rdram, ctx);
        goto after_494;
    // 0x80223838: addiu       $a0, $zero, 0x304
    ctx->r4 = ADD32(0, 0X304);
    after_494:
    // 0x8022383C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80223840: addiu       $a1, $zero, 0xC80
    ctx->r5 = ADD32(0, 0XC80);
    // 0x80223844: jal         0x80012500
    // 0x80223848: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    func_80012500_13100(rdram, ctx);
        goto after_495;
    // 0x80223848: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    after_495:
    // 0x8022384C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80223850: lui         $a1, 0x4318
    ctx->r5 = S32(0X4318 << 16);
    // 0x80223854: lui         $a2, 0x4320
    ctx->r6 = S32(0X4320 << 16);
    // 0x80223858: lui         $a3, 0x43B1
    ctx->r7 = S32(0X43B1 << 16);
    // 0x8022385C: jal         0x80012818
    // 0x80223860: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    func_80012818_13418(rdram, ctx);
        goto after_496;
    // 0x80223860: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    after_496:
    // 0x80223864: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80223868: lui         $a1, 0x4210
    ctx->r5 = S32(0X4210 << 16);
    // 0x8022386C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x80223870: lui         $a3, 0xC304
    ctx->r7 = S32(0XC304 << 16);
    // 0x80223874: jal         0x800127B8
    // 0x80223878: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    func_800127B8_133B8(rdram, ctx);
        goto after_497;
    // 0x80223878: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    after_497:
    // 0x8022387C: b           L_80223B0C
    // 0x80223880: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80223880: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80223884: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
L_80223888:
    // 0x80223888: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x8022388C: lh          $t9, 0x2($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X2);
    // 0x80223890: bne         $t9, $at, L_802238D8
    if (ctx->r25 != ctx->r1) {
        // 0x80223894: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_802238D8;
    }
    // 0x80223894: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80223898: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022389C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802238A0: lwc1        $f4, -0x507C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X507C);
    // 0x802238A4: lui         $at, 0xBFC0
    ctx->r1 = S32(0XBFC0 << 16);
    // 0x802238A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802238AC: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x802238B0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x802238B4: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x802238B8: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    // 0x802238BC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x802238C0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x802238C4: jal         0x80229CC4
    // 0x802238C8: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_80229CC4_6936A4(rdram, ctx);
        goto after_498;
    // 0x802238C8: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_498:
    // 0x802238CC: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x802238D0: b           L_80223B08
    // 0x802238D4: sw          $v0, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r2;
        goto L_80223B08;
    // 0x802238D4: sw          $v0, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r2;
L_802238D8:
    // 0x802238D8: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x802238DC: addiu       $at, $zero, 0x6E
    ctx->r1 = ADD32(0, 0X6E);
    // 0x802238E0: lh          $t0, 0x2($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X2);
    // 0x802238E4: bnel        $t0, $at, L_8022390C
    if (ctx->r8 != ctx->r1) {
        // 0x802238E8: lw          $t4, 0x84($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X84);
            goto L_8022390C;
    }
    goto skip_155;
    // 0x802238E8: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    skip_155:
    // 0x802238EC: jal         0x8003F5FC
    // 0x802238F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003F5FC_401FC(rdram, ctx);
        goto after_499;
    // 0x802238F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_499:
    // 0x802238F4: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x802238F8: jal         0x80229CB8
    // 0x802238FC: lw          $a0, 0x38($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X38);
    func_80229CB8_693698(rdram, ctx);
        goto after_500;
    // 0x802238FC: lw          $a0, 0x38($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X38);
    after_500:
    // 0x80223900: b           L_80223B0C
    // 0x80223904: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x80223904: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80223908: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
L_8022390C:
    // 0x8022390C: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x80223910: lh          $t2, 0x2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X2);
    // 0x80223914: bnel        $t2, $at, L_80223984
    if (ctx->r10 != ctx->r1) {
        // 0x80223918: lw          $t0, 0x84($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X84);
            goto L_80223984;
    }
    goto skip_156;
    // 0x80223918: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    skip_156:
    // 0x8022391C: jal         0x80038B98
    // 0x80223920: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    func_80038B98_39798(rdram, ctx);
        goto after_501;
    // 0x80223920: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_501:
    // 0x80223924: addiu       $t7, $zero, 0x50
    ctx->r15 = ADD32(0, 0X50);
    // 0x80223928: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
    // 0x8022392C: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80223930: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80223934: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80223938: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8022393C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80223940: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80223944: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    // 0x80223948: jal         0x80226D80
    // 0x8022394C: addiu       $a3, $zero, 0xA0
    ctx->r7 = ADD32(0, 0XA0);
    func_80226D80_690760(rdram, ctx);
        goto after_502;
    // 0x8022394C: addiu       $a3, $zero, 0xA0
    ctx->r7 = ADD32(0, 0XA0);
    after_502:
    // 0x80223950: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80223954: lui         $a1, 0x4200
    ctx->r5 = S32(0X4200 << 16);
    // 0x80223958: sw          $v0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r2;
    // 0x8022395C: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80223960: jal         0x80226D20
    // 0x80223964: lw          $a0, 0x3C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X3C);
    func_80226D20_690700(rdram, ctx);
        goto after_503;
    // 0x80223964: lw          $a0, 0x3C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X3C);
    after_503:
    // 0x80223968: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x8022396C: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x80223970: jal         0x80226D2C
    // 0x80223974: lw          $a0, 0x3C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X3C);
    func_80226D2C_69070C(rdram, ctx);
        goto after_504;
    // 0x80223974: lw          $a0, 0x3C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X3C);
    after_504:
    // 0x80223978: b           L_80223B0C
    // 0x8022397C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x8022397C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80223980: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
L_80223984:
    // 0x80223984: addiu       $at, $zero, 0xDC
    ctx->r1 = ADD32(0, 0XDC);
    // 0x80223988: lh          $t3, 0x2($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X2);
    // 0x8022398C: bnel        $t3, $at, L_80223B0C
    if (ctx->r11 != ctx->r1) {
        // 0x80223990: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_80223B0C;
    }
    goto skip_157;
    // 0x80223990: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_157:
    // 0x80223994: sh          $zero, 0x2($t0)
    MEM_H(0X2, ctx->r8) = 0;
    // 0x80223998: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x8022399C: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    // 0x802239A0: b           L_80223B08
    // 0x802239A4: sb          $t4, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r12;
        goto L_80223B08;
    // 0x802239A4: sb          $t4, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r12;
L_802239A8:
    // 0x802239A8: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x802239AC: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x802239B0: lh          $t1, 0x2($t7)
    ctx->r9 = MEM_H(ctx->r15, 0X2);
    // 0x802239B4: bnel        $t1, $at, L_802239FC
    if (ctx->r9 != ctx->r1) {
        // 0x802239B8: lw          $t5, 0x84($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X84);
            goto L_802239FC;
    }
    goto skip_158;
    // 0x802239B8: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    skip_158:
    // 0x802239BC: lw          $a0, 0x1C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C);
    // 0x802239C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802239C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802239C8: jal         0x8020D4D0
    // 0x802239CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_505;
    // 0x802239CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_505:
    // 0x802239D0: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x802239D4: lui         $a1, 0x4200
    ctx->r5 = S32(0X4200 << 16);
    // 0x802239D8: jal         0x8020D4B8
    // 0x802239DC: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_506;
    // 0x802239DC: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    after_506:
    // 0x802239E0: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802239E4: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x802239E8: jal         0x8020D4EC
    // 0x802239EC: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_507;
    // 0x802239EC: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    after_507:
    // 0x802239F0: b           L_80223B0C
    // 0x802239F4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
        goto L_80223B0C;
    // 0x802239F4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x802239F8: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
L_802239FC:
    // 0x802239FC: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x80223A00: lh          $t8, 0x2($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X2);
    // 0x80223A04: bne         $t8, $at, L_80223B08
    if (ctx->r24 != ctx->r1) {
        // 0x80223A08: lui         $t3, 0x8016
        ctx->r11 = S32(0X8016 << 16);
            goto L_80223B08;
    }
    // 0x80223A08: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80223A0C: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x80223A10: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80223A14: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x80223A18: sh          $zero, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = 0;
    // 0x80223A1C: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x80223A20: lhu         $t0, -0x520C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X520C);
    // 0x80223A24: addiu       $t4, $t0, -0x15
    ctx->r12 = ADD32(ctx->r8, -0X15);
    // 0x80223A28: sltiu       $at, $t4, 0xC
    ctx->r1 = ctx->r12 < 0XC ? 1 : 0;
    // 0x80223A2C: beq         $at, $zero, L_80223A48
    if (ctx->r1 == 0) {
        // 0x80223A30: sll         $t4, $t4, 2
        ctx->r12 = S32(ctx->r12 << 2);
            goto L_80223A48;
    }
    // 0x80223A30: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80223A34: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80223A38: addu        $at, $at, $t4
    gpr jr_addend_80223A40 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80223A3C: lw          $t4, -0x5078($at)
    ctx->r12 = ADD32(ctx->r1, -0X5078);
    // 0x80223A40: jr          $t4
    // 0x80223A44: nop

    switch (jr_addend_80223A40 >> 2) {
        case 0: goto L_80223A48; break;
        case 1: goto L_80223A54; break;
        case 2: goto L_80223A64; break;
        case 3: goto L_80223A74; break;
        case 4: goto L_80223A84; break;
        case 5: goto L_80223A94; break;
        case 6: goto L_80223AA4; break;
        case 7: goto L_80223AB4; break;
        case 8: goto L_80223AC4; break;
        case 9: goto L_80223AD4; break;
        case 10: goto L_80223AE4; break;
        case 11: goto L_80223AF4; break;
        default: switch_error(__func__, 0x80223A40, 0x8022AF88);
    }
    // 0x80223A44: nop

L_80223A48:
    // 0x80223A48: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80223A4C: b           L_80223B00
    // 0x80223A50: sh          $zero, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = 0;
        goto L_80223B00;
    // 0x80223A50: sh          $zero, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = 0;
L_80223A54:
    // 0x80223A54: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80223A58: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80223A5C: b           L_80223B00
    // 0x80223A60: sh          $t2, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r10;
        goto L_80223B00;
    // 0x80223A60: sh          $t2, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r10;
L_80223A64:
    // 0x80223A64: addiu       $t1, $zero, -0x2
    ctx->r9 = ADD32(0, -0X2);
    // 0x80223A68: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80223A6C: b           L_80223B00
    // 0x80223A70: sh          $t1, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r9;
        goto L_80223B00;
    // 0x80223A70: sh          $t1, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r9;
L_80223A74:
    // 0x80223A74: addiu       $t7, $zero, -0x3
    ctx->r15 = ADD32(0, -0X3);
    // 0x80223A78: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80223A7C: b           L_80223B00
    // 0x80223A80: sh          $t7, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r15;
        goto L_80223B00;
    // 0x80223A80: sh          $t7, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r15;
L_80223A84:
    // 0x80223A84: addiu       $t6, $zero, -0x4
    ctx->r14 = ADD32(0, -0X4);
    // 0x80223A88: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80223A8C: b           L_80223B00
    // 0x80223A90: sh          $t6, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r14;
        goto L_80223B00;
    // 0x80223A90: sh          $t6, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r14;
L_80223A94:
    // 0x80223A94: addiu       $t9, $zero, -0x6
    ctx->r25 = ADD32(0, -0X6);
    // 0x80223A98: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80223A9C: b           L_80223B00
    // 0x80223AA0: sh          $t9, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r25;
        goto L_80223B00;
    // 0x80223AA0: sh          $t9, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r25;
L_80223AA4:
    // 0x80223AA4: addiu       $t5, $zero, -0x7
    ctx->r13 = ADD32(0, -0X7);
    // 0x80223AA8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80223AAC: b           L_80223B00
    // 0x80223AB0: sh          $t5, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r13;
        goto L_80223B00;
    // 0x80223AB0: sh          $t5, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r13;
L_80223AB4:
    // 0x80223AB4: addiu       $t8, $zero, -0x8
    ctx->r24 = ADD32(0, -0X8);
    // 0x80223AB8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80223ABC: b           L_80223B00
    // 0x80223AC0: sh          $t8, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r24;
        goto L_80223B00;
    // 0x80223AC0: sh          $t8, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r24;
L_80223AC4:
    // 0x80223AC4: addiu       $t3, $zero, -0x9
    ctx->r11 = ADD32(0, -0X9);
    // 0x80223AC8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80223ACC: b           L_80223B00
    // 0x80223AD0: sh          $t3, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r11;
        goto L_80223B00;
    // 0x80223AD0: sh          $t3, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r11;
L_80223AD4:
    // 0x80223AD4: addiu       $t0, $zero, -0xA
    ctx->r8 = ADD32(0, -0XA);
    // 0x80223AD8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80223ADC: b           L_80223B00
    // 0x80223AE0: sh          $t0, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r8;
        goto L_80223B00;
    // 0x80223AE0: sh          $t0, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r8;
L_80223AE4:
    // 0x80223AE4: addiu       $t4, $zero, -0xB
    ctx->r12 = ADD32(0, -0XB);
    // 0x80223AE8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80223AEC: b           L_80223B00
    // 0x80223AF0: sh          $t4, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r12;
        goto L_80223B00;
    // 0x80223AF0: sh          $t4, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r12;
L_80223AF4:
    // 0x80223AF4: addiu       $t2, $zero, -0xC
    ctx->r10 = ADD32(0, -0XC);
    // 0x80223AF8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80223AFC: sh          $t2, 0x7C70($at)
    MEM_H(0X7C70, ctx->r1) = ctx->r10;
L_80223B00:
    // 0x80223B00: jal         0x8001198C
    // 0x80223B04: nop

    func_8001198C_1258C(rdram, ctx);
        goto after_508;
    // 0x80223B04: nop

    after_508:
L_80223B08:
    // 0x80223B08: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_80223B0C:
    // 0x80223B0C: lw          $t7, 0x18($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X18);
    // 0x80223B10: beq         $t7, $zero, L_80223B40
    if (ctx->r15 == 0) {
        // 0x80223B14: lui         $t6, 0x8020
        ctx->r14 = S32(0X8020 << 16);
            goto L_80223B40;
    }
    // 0x80223B14: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x80223B18: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x80223B1C: beql        $t6, $zero, L_80223B44
    if (ctx->r14 == 0) {
        // 0x80223B20: lw          $t5, 0x84($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X84);
            goto L_80223B44;
    }
    goto skip_159;
    // 0x80223B20: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    skip_159:
    // 0x80223B24: lw          $a1, 0x2C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X2C);
    // 0x80223B28: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x80223B2C: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x80223B30: and         $t9, $a1, $at
    ctx->r25 = ctx->r5 & ctx->r1;
    // 0x80223B34: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80223B38: jal         0x80012900
    // 0x80223B3C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80012900_13500(rdram, ctx);
        goto after_509;
    // 0x80223B3C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_509:
L_80223B40:
    // 0x80223B40: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
L_80223B44:
    // 0x80223B44: lh          $t8, 0x2($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X2);
    // 0x80223B48: addiu       $t3, $t8, 0x1
    ctx->r11 = ADD32(ctx->r24, 0X1);
    // 0x80223B4C: sh          $t3, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r11;
    // 0x80223B50: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80223B54: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80223B58: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x80223B5C: jr          $ra
    // 0x80223B60: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x80223B60: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80228C54_692634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C54: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80228C58: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80228C5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80228C60: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80228C64: div.s       $f2, $f12, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80228C68: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
    // 0x80228C6C: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x80228C70: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80228C74: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x80228C78: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x80228C7C: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x80228C80: lw          $t8, 0x94($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X94);
    // 0x80228C84: swc1        $f2, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f2.u32l;
    // 0x80228C88: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x80228C8C: swc1        $f2, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f2.u32l;
    // 0x80228C90: lw          $t0, 0x94($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X94);
    // 0x80228C94: jr          $ra
    // 0x80228C98: swc1        $f2, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f2.u32l;
    TRACE_RETURN()
    return;
    // 0x80228C98: swc1        $f2, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f2.u32l;
;}
RECOMP_FUNC void func_80226D80_690760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226D84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80226D88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226D8C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80226D90: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80226D94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226D98: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80226D9C: addiu       $a1, $a1, 0x6B88
    ctx->r5 = ADD32(ctx->r5, 0X6B88);
    // 0x80226DA0: jal         0x80034E08
    // 0x80226DA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80226DA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80226DA8: bne         $v0, $zero, L_80226DB8
    if (ctx->r2 != 0) {
        // 0x80226DAC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80226DB8;
    }
    // 0x80226DAC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80226DB0: b           L_80226E24
    // 0x80226DB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80226E24;
    // 0x80226DB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80226DB8:
    // 0x80226DB8: lbu         $t6, 0x27($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X27);
    // 0x80226DBC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80226DC0: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x80226DC4: sb          $t6, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r14;
    // 0x80226DC8: lbu         $t7, 0x2B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2B);
    // 0x80226DCC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80226DD0: addiu       $a1, $zero, 0x4E5
    ctx->r5 = ADD32(0, 0X4E5);
    // 0x80226DD4: sb          $t7, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r15;
    // 0x80226DD8: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x80226DDC: sb          $t8, 0x6E($s0)
    MEM_B(0X6E, ctx->r16) = ctx->r24;
    // 0x80226DE0: lbu         $t9, 0x33($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X33);
    // 0x80226DE4: sb          $t9, 0x6F($s0)
    MEM_B(0X6F, ctx->r16) = ctx->r25;
    // 0x80226DE8: lbu         $t0, 0x37($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X37);
    // 0x80226DEC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x80226DF0: addiu       $t9, $t9, 0x4840
    ctx->r25 = ADD32(ctx->r25, 0X4840);
    // 0x80226DF4: sb          $t0, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r8;
    // 0x80226DF8: lbu         $t1, 0x3B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3B);
    // 0x80226DFC: swc1        $f4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f4.u32l;
    // 0x80226E00: jalr        $t9
    // 0x80226E04: sb          $t1, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80226E04: sb          $t1, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r9;
    after_1:
    // 0x80226E08: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226E0C: jal         0x8022669C
    // 0x80226E10: sw          $v0, -0x2B90($at)
    MEM_W(-0X2B90, ctx->r1) = ctx->r2;
    func_8022669C_69007C(rdram, ctx);
        goto after_2;
    // 0x80226E10: sw          $v0, -0x2B90($at)
    MEM_W(-0X2B90, ctx->r1) = ctx->r2;
    after_2:
    // 0x80226E14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80226E18: jal         0x80011A38
    // 0x80226E1C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80011A38_12638(rdram, ctx);
        goto after_3;
    // 0x80226E1C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x80226E20: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80226E24:
    // 0x80226E24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226E28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226E2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80226E30: jr          $ra
    // 0x80226E34: nop

    TRACE_RETURN()
    return;
    // 0x80226E34: nop

;}
RECOMP_FUNC void func_8020D92C_67730C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D92C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D934: jal         0x80013A24
    // 0x8020D938: addiu       $a0, $zero, 0x4DC
    ctx->r4 = ADD32(0, 0X4DC);
    func_80013A24_14624(rdram, ctx);
        goto after_0;
    // 0x8020D938: addiu       $a0, $zero, 0x4DC
    ctx->r4 = ADD32(0, 0X4DC);
    after_0:
    // 0x8020D93C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D944: jr          $ra
    // 0x8020D948: nop

    TRACE_RETURN()
    return;
    // 0x8020D948: nop

;}
RECOMP_FUNC void func_80227580_690F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227580: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227588: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x8022758C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80227590: bnel        $t6, $zero, L_802276D4
    if (ctx->r14 != 0) {
        // 0x80227594: lwc1        $f10, 0x70($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
            goto L_802276D4;
    }
    goto skip_0;
    // 0x80227594: lwc1        $f10, 0x70($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
    skip_0:
    // 0x80227598: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8022759C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802275A0: ldc1        $f16, -0x4E50($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X4E50);
    // 0x802275A4: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x802275A8: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x802275AC: nop

    // 0x802275B0: bc1fl       L_80227628
    if (!c1cs) {
        // 0x802275B4: lwc1        $f14, 0x2C($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
            goto L_80227628;
    }
    goto skip_1;
    // 0x802275B4: lwc1        $f14, 0x2C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
    skip_1:
    // 0x802275B8: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802275BC: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802275C0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802275C4: nop

    // 0x802275C8: bc1fl       L_802275E0
    if (!c1cs) {
        // 0x802275CC: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_802275E0;
    }
    goto skip_2;
    // 0x802275CC: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_2:
    // 0x802275D0: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x802275D4: b           L_802275E0
    // 0x802275D8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_802275E0;
    // 0x802275D8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x802275DC: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_802275E0:
    // 0x802275E0: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x802275E4: nop

    // 0x802275E8: bc1fl       L_80227604
    if (!c1cs) {
        // 0x802275EC: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_80227604;
    }
    goto skip_3;
    // 0x802275EC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_3:
    // 0x802275F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802275F4: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x802275F8: b           L_80227624
    // 0x802275FC: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
        goto L_80227624;
    // 0x802275FC: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x80227600: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_80227604:
    // 0x80227604: nop

    // 0x80227608: bc1fl       L_80227620
    if (!c1cs) {
        // 0x8022760C: add.s       $f10, $f0, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_80227620;
    }
    goto skip_4;
    // 0x8022760C: add.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
    skip_4:
    // 0x80227610: sub.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80227614: b           L_80227624
    // 0x80227618: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
        goto L_80227624;
    // 0x80227618: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x8022761C: add.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
L_80227620:
    // 0x80227620: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
L_80227624:
    // 0x80227624: lwc1        $f14, 0x2C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
L_80227628:
    // 0x80227628: cvt.d.s     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f18.d = CVT_D_S(ctx->f14.fl);
    // 0x8022762C: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80227630: nop

    // 0x80227634: bc1fl       L_802276AC
    if (!c1cs) {
        // 0x80227638: lh          $v1, 0x32($v0)
        ctx->r3 = MEM_H(ctx->r2, 0X32);
            goto L_802276AC;
    }
    goto skip_5;
    // 0x80227638: lh          $v1, 0x32($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X32);
    skip_5:
    // 0x8022763C: lwc1        $f12, 0x28($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80227640: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80227644: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80227648: nop

    // 0x8022764C: bc1fl       L_80227664
    if (!c1cs) {
        // 0x80227650: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_80227664;
    }
    goto skip_6;
    // 0x80227650: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_6:
    // 0x80227654: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80227658: b           L_80227664
    // 0x8022765C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80227664;
    // 0x8022765C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80227660: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_80227664:
    // 0x80227664: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80227668: nop

    // 0x8022766C: bc1fl       L_80227688
    if (!c1cs) {
        // 0x80227670: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_80227688;
    }
    goto skip_7;
    // 0x80227670: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_7:
    // 0x80227674: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80227678: swc1        $f12, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f12.u32l;
    // 0x8022767C: b           L_802276A8
    // 0x80227680: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
        goto L_802276A8;
    // 0x80227680: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
    // 0x80227684: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_80227688:
    // 0x80227688: nop

    // 0x8022768C: bc1fl       L_802276A4
    if (!c1cs) {
        // 0x80227690: add.s       $f8, $f0, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_802276A4;
    }
    goto skip_8;
    // 0x80227690: add.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
    skip_8:
    // 0x80227694: sub.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80227698: b           L_802276A8
    // 0x8022769C: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
        goto L_802276A8;
    // 0x8022769C: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x802276A0: add.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
L_802276A4:
    // 0x802276A4: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
L_802276A8:
    // 0x802276A8: lh          $v1, 0x32($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X32);
L_802276AC:
    // 0x802276AC: beql        $v1, $zero, L_802276D4
    if (ctx->r3 == 0) {
        // 0x802276B0: lwc1        $f10, 0x70($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
            goto L_802276D4;
    }
    goto skip_9;
    // 0x802276B0: lwc1        $f10, 0x70($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
    skip_9:
    // 0x802276B4: lhu         $t7, 0x30($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X30);
    // 0x802276B8: lh          $t8, 0x34($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X34);
    // 0x802276BC: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x802276C0: sh          $t1, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r9;
    // 0x802276C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802276C8: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x802276CC: sh          $t0, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r8;
    // 0x802276D0: lwc1        $f10, 0x70($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
L_802276D4:
    // 0x802276D4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802276D8: ldc1        $f4, -0x4E48($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X4E48);
    // 0x802276DC: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x802276E0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802276E4: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x802276E8: nop

    // 0x802276EC: bc1fl       L_80227760
    if (!c1cs) {
        // 0x802276F0: lhu         $t3, 0x30($v0)
        ctx->r11 = MEM_HU(ctx->r2, 0X30);
            goto L_80227760;
    }
    goto skip_10;
    // 0x802276F0: lhu         $t3, 0x30($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30);
    skip_10:
    // 0x802276F4: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x802276F8: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802276FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80227700: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80227704: swc1        $f10, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f10.u32l;
    // 0x80227708: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8022770C: jal         0x8001B5AC
    // 0x80227710: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80227710: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x80227714: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80227718: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8022771C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80227720: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80227724: sub.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x80227728: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8022772C: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80227730: nop

    // 0x80227734: bc1fl       L_80227760
    if (!c1cs) {
        // 0x80227738: lhu         $t3, 0x30($v0)
        ctx->r11 = MEM_HU(ctx->r2, 0X30);
            goto L_80227760;
    }
    goto skip_11;
    // 0x80227738: lhu         $t3, 0x30($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30);
    skip_11:
    // 0x8022773C: lbu         $t2, 0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1);
    // 0x80227740: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80227744: bnel        $t2, $at, L_8022775C
    if (ctx->r10 != ctx->r1) {
        // 0x80227748: swc1        $f2, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
            goto L_8022775C;
    }
    goto skip_12;
    // 0x80227748: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    skip_12:
    // 0x8022774C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80227750: b           L_8022775C
    // 0x80227754: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
        goto L_8022775C;
    // 0x80227754: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x80227758: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
L_8022775C:
    // 0x8022775C: lhu         $t3, 0x30($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30);
L_80227760:
    // 0x80227760: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80227764: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x80227768: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8022776C: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x80227770: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x80227774: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80227778: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x8022777C: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80227780: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    // 0x80227784: lw          $t4, 0x38($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X38);
    // 0x80227788: swc1        $f4, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f4.u32l;
    // 0x8022778C: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x80227790: lhu         $t5, 0x30($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X30);
    // 0x80227794: sh          $t5, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r13;
    // 0x80227798: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x8022779C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802277A0: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x802277A4: lui         $t6, 0xC
    ctx->r14 = S32(0XC << 16);
    // 0x802277A8: swc1        $f6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f6.u32l;
    // 0x802277AC: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x802277B0: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x802277B4: swc1        $f8, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f8.u32l;
    // 0x802277B8: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x802277BC: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802277C0: swc1        $f10, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f10.u32l;
    // 0x802277C4: lw          $t0, 0x38($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X38);
    // 0x802277C8: lw          $at, 0x34($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X34);
    // 0x802277CC: sw          $at, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->r1;
    // 0x802277D0: lw          $t2, 0x38($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X38);
    // 0x802277D4: sw          $t2, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r10;
    // 0x802277D8: lw          $t4, 0x38($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X38);
    // 0x802277DC: sh          $t3, 0x3C($t4)
    MEM_H(0X3C, ctx->r12) = ctx->r11;
    // 0x802277E0: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x802277E4: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x802277E8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x802277EC: lhu         $t6, 0x2D90($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X2D90);
    // 0x802277F0: sh          $t6, 0x44($t7)
    MEM_H(0X44, ctx->r15) = ctx->r14;
    // 0x802277F4: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x802277F8: sh          $zero, 0x4C($t8)
    MEM_H(0X4C, ctx->r24) = 0;
    // 0x802277FC: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x80227800: sh          $zero, 0x54($t9)
    MEM_H(0X54, ctx->r25) = 0;
    // 0x80227804: lw          $t1, 0x38($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X38);
    // 0x80227808: sh          $zero, 0x5C($t1)
    MEM_H(0X5C, ctx->r9) = 0;
    // 0x8022780C: lw          $a0, 0x38($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X38);
    // 0x80227810: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80227814: jal         0x80014218
    // 0x80227818: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80014218_14E18(rdram, ctx);
        goto after_1;
    // 0x80227818: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022781C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80227820: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80227824: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x80227828: lw          $t0, 0x2C($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X2C);
    // 0x8022782C: lw          $t3, 0x38($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X38);
    // 0x80227830: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x80227834: sw          $t2, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r10;
    // 0x80227838: lw          $t4, -0x39E4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39E4);
    // 0x8022783C: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x80227840: lw          $t5, 0x30($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X30);
    // 0x80227844: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
    // 0x80227848: lwc1        $f18, 0x28($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8022784C: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x80227850: swc1        $f18, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f18.u32l;
    // 0x80227854: lwc1        $f4, 0x70($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X70);
    // 0x80227858: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x8022785C: swc1        $f4, 0x70($t8)
    MEM_W(0X70, ctx->r24) = ctx->f4.u32l;
    // 0x80227860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227864: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80227868: jr          $ra
    // 0x8022786C: nop

    TRACE_RETURN()
    return;
    // 0x8022786C: nop

;}
RECOMP_FUNC void func_80227BA0_691580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227BA0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80227BA4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80227BA8: sb          $v1, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r3;
    // 0x80227BAC: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80227BB0: jr          $ra
    // 0x80227BB4: sb          $v1, 0x64($t6)
    MEM_B(0X64, ctx->r14) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80227BB4: sb          $v1, 0x64($t6)
    MEM_B(0X64, ctx->r14) = ctx->r3;
;}
RECOMP_FUNC void func_80228A74_692454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A74: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80228A78: lwc1        $f4, 0x6C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x80228A7C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228A80: ldc1        $f16, -0x4D98($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X4D98);
    // 0x80228A84: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80228A88: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80228A8C: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x80228A90: nop

    // 0x80228A94: bc1fl       L_80228B10
    if (!c1cs) {
        // 0x80228A98: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80228B10;
    }
    goto skip_0;
    // 0x80228A98: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x80228A9C: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80228AA0: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80228AA4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80228AA8: nop

    // 0x80228AAC: bc1fl       L_80228AC4
    if (!c1cs) {
        // 0x80228AB0: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_80228AC4;
    }
    goto skip_1;
    // 0x80228AB0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_1:
    // 0x80228AB4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80228AB8: b           L_80228AC4
    // 0x80228ABC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80228AC4;
    // 0x80228ABC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80228AC0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80228AC4:
    // 0x80228AC4: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80228AC8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80228ACC: nop

    // 0x80228AD0: bc1fl       L_80228AEC
    if (!c1cs) {
        // 0x80228AD4: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_80228AEC;
    }
    goto skip_2;
    // 0x80228AD4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_2:
    // 0x80228AD8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80228ADC: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x80228AE0: b           L_80228B0C
    // 0x80228AE4: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
        goto L_80228B0C;
    // 0x80228AE4: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x80228AE8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_80228AEC:
    // 0x80228AEC: nop

    // 0x80228AF0: bc1fl       L_80228B08
    if (!c1cs) {
        // 0x80228AF4: add.s       $f10, $f12, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f14.fl;
            goto L_80228B08;
    }
    goto skip_3;
    // 0x80228AF4: add.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f14.fl;
    skip_3:
    // 0x80228AF8: sub.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80228AFC: b           L_80228B0C
    // 0x80228B00: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
        goto L_80228B0C;
    // 0x80228B00: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x80228B04: add.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f14.fl;
L_80228B08:
    // 0x80228B08: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
L_80228B0C:
    // 0x80228B0C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_80228B10:
    // 0x80228B10: lwc1        $f14, 0x1C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80228B14: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80228B18: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80228B1C: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80228B20: nop

    // 0x80228B24: bc1fl       L_80228B98
    if (!c1cs) {
        // 0x80228B28: lwc1        $f14, 0x28($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X28);
            goto L_80228B98;
    }
    goto skip_4;
    // 0x80228B28: lwc1        $f14, 0x28($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X28);
    skip_4:
    // 0x80228B2C: lwc1        $f2, 0x18($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80228B30: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80228B34: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80228B38: nop

    // 0x80228B3C: bc1fl       L_80228B54
    if (!c1cs) {
        // 0x80228B40: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_80228B54;
    }
    goto skip_5;
    // 0x80228B40: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_5:
    // 0x80228B44: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80228B48: b           L_80228B54
    // 0x80228B4C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80228B54;
    // 0x80228B4C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80228B50: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80228B54:
    // 0x80228B54: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80228B58: nop

    // 0x80228B5C: bc1fl       L_80228B74
    if (!c1cs) {
        // 0x80228B60: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_80228B74;
    }
    goto skip_6;
    // 0x80228B60: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_6:
    // 0x80228B64: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
    // 0x80228B68: b           L_80228B94
    // 0x80228B6C: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
        goto L_80228B94;
    // 0x80228B6C: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x80228B70: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_80228B74:
    // 0x80228B74: nop

    // 0x80228B78: bc1fl       L_80228B90
    if (!c1cs) {
        // 0x80228B7C: add.s       $f8, $f12, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f14.fl;
            goto L_80228B90;
    }
    goto skip_7;
    // 0x80228B7C: add.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f14.fl;
    skip_7:
    // 0x80228B80: sub.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80228B84: b           L_80228B94
    // 0x80228B88: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
        goto L_80228B94;
    // 0x80228B88: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x80228B8C: add.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f14.fl;
L_80228B90:
    // 0x80228B90: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
L_80228B94:
    // 0x80228B94: lwc1        $f14, 0x28($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X28);
L_80228B98:
    // 0x80228B98: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80228B9C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80228BA0: nop

    // 0x80228BA4: bc1fl       L_80228C18
    if (!c1cs) {
        // 0x80228BA8: lhu         $t6, 0x2C($v0)
        ctx->r14 = MEM_HU(ctx->r2, 0X2C);
            goto L_80228C18;
    }
    goto skip_8;
    // 0x80228BA8: lhu         $t6, 0x2C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2C);
    skip_8:
    // 0x80228BAC: lwc1        $f2, 0x24($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80228BB0: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80228BB4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80228BB8: nop

    // 0x80228BBC: bc1fl       L_80228BD4
    if (!c1cs) {
        // 0x80228BC0: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_80228BD4;
    }
    goto skip_9;
    // 0x80228BC0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_9:
    // 0x80228BC4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80228BC8: b           L_80228BD4
    // 0x80228BCC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80228BD4;
    // 0x80228BCC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80228BD0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80228BD4:
    // 0x80228BD4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80228BD8: nop

    // 0x80228BDC: bc1fl       L_80228BF4
    if (!c1cs) {
        // 0x80228BE0: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_80228BF4;
    }
    goto skip_10;
    // 0x80228BE0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_10:
    // 0x80228BE4: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x80228BE8: b           L_80228C14
    // 0x80228BEC: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
        goto L_80228C14;
    // 0x80228BEC: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
    // 0x80228BF0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_80228BF4:
    // 0x80228BF4: nop

    // 0x80228BF8: bc1fl       L_80228C10
    if (!c1cs) {
        // 0x80228BFC: add.s       $f6, $f12, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f14.fl;
            goto L_80228C10;
    }
    goto skip_11;
    // 0x80228BFC: add.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f14.fl;
    skip_11:
    // 0x80228C00: sub.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80228C04: b           L_80228C14
    // 0x80228C08: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
        goto L_80228C14;
    // 0x80228C08: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x80228C0C: add.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f14.fl;
L_80228C10:
    // 0x80228C10: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
L_80228C14:
    // 0x80228C14: lhu         $t6, 0x2C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2C);
L_80228C18:
    // 0x80228C18: lw          $t7, 0x34($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X34);
    // 0x80228C1C: sh          $t6, 0x16($t7)
    MEM_H(0X16, ctx->r15) = ctx->r14;
    // 0x80228C20: lw          $t8, 0x34($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X34);
    // 0x80228C24: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80228C28: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x80228C2C: lw          $t9, 0x34($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X34);
    // 0x80228C30: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80228C34: swc1        $f10, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f10.u32l;
    // 0x80228C38: lw          $t0, 0x34($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X34);
    // 0x80228C3C: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80228C40: jr          $ra
    // 0x80228C44: swc1        $f4, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80228C44: swc1        $f4, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80228CE0_6926C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228CE0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80228CE4: nop

    // 0x80228CE8: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x80228CEC: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x80228CF0: jr          $ra
    // 0x80228CF4: swc1        $f0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x80228CF4: swc1        $f0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_80212C08_67C5E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212C08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80212C0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80212C10: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80212C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212C18: lwc1        $f10, 0x80($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80212C1C: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80212C20: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80212C24: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80212C28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80212C2C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80212C30: jal         0x800040A8
    // 0x80212C34: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80212C34: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x80212C38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80212C3C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80212C40: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80212C44: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80212C48: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80212C4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80212C50: lhu         $t0, 0x30($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X30);
    // 0x80212C54: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80212C58: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x80212C5C: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80212C60: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80212C64: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x80212C68: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x80212C6C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80212C70: nop

    // 0x80212C74: sh          $t7, 0x32($v1)
    MEM_H(0X32, ctx->r3) = ctx->r15;
    // 0x80212C78: lh          $t2, 0x32($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X32);
    // 0x80212C7C: div         $zero, $t1, $t2
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r10)));
    // 0x80212C80: mflo        $t3
    ctx->r11 = lo;
    // 0x80212C84: sh          $t3, 0x34($v1)
    MEM_H(0X34, ctx->r3) = ctx->r11;
    // 0x80212C88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80212C8C: bne         $t2, $zero, L_80212C98
    if (ctx->r10 != 0) {
        // 0x80212C90: nop
    
            goto L_80212C98;
    }
    // 0x80212C90: nop

    // 0x80212C94: break       7
    do_break(2149657748);
L_80212C98:
    // 0x80212C98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80212C9C: bne         $t2, $at, L_80212CB0
    if (ctx->r10 != ctx->r1) {
        // 0x80212CA0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80212CB0;
    }
    // 0x80212CA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80212CA4: bne         $t1, $at, L_80212CB0
    if (ctx->r9 != ctx->r1) {
        // 0x80212CA8: nop
    
            goto L_80212CB0;
    }
    // 0x80212CA8: nop

    // 0x80212CAC: break       6
    do_break(2149657772);
L_80212CB0:
    // 0x80212CB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80212CB4: jr          $ra
    // 0x80212CB8: nop

    TRACE_RETURN()
    return;
    // 0x80212CB8: nop

;}
RECOMP_FUNC void func_8021B068_684A48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B068: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8021B06C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021B070: lwc1        $f6, 0x6C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x8021B074: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8021B078: swc1        $f12, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f12.u32l;
    // 0x8021B07C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8021B080: swc1        $f14, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f14.u32l;
    // 0x8021B084: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8021B088: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021B08C: bc1f        L_8021B0AC
    if (!c1cs) {
        // 0x8021B090: swc1        $f4, 0x88($a0)
        MEM_W(0X88, ctx->r4) = ctx->f4.u32l;
            goto L_8021B0AC;
    }
    // 0x8021B090: swc1        $f4, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f4.u32l;
    // 0x8021B094: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021B098: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021B09C: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B0A0: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021B0A4: b           L_8021B0B8
    // 0x8021B0A8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021B0B8;
    // 0x8021B0A8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8021B0AC:
    // 0x8021B0AC: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021B0B0: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B0B4: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_8021B0B8:
    // 0x8021B0B8: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021B0BC: lwc1        $f2, 0x20($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021B0C0: lwc1        $f12, 0x1C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8021B0C4: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8021B0C8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8021B0CC: nop

    // 0x8021B0D0: bc1f        L_8021B0E4
    if (!c1cs) {
        // 0x8021B0D4: swc1        $f4, 0x18($v0)
        MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
            goto L_8021B0E4;
    }
    // 0x8021B0D4: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    // 0x8021B0D8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8021B0DC: b           L_8021B0E8
    // 0x8021B0E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021B0E8;
    // 0x8021B0E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8021B0E4:
    // 0x8021B0E4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_8021B0E8:
    // 0x8021B0E8: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8021B0EC: lwc1        $f2, 0x2C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x8021B0F0: lwc1        $f12, 0x28($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021B0F4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8021B0F8: nop

    // 0x8021B0FC: bc1f        L_8021B110
    if (!c1cs) {
        // 0x8021B100: swc1        $f6, 0x24($v0)
        MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
            goto L_8021B110;
    }
    // 0x8021B100: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x8021B104: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8021B108: b           L_8021B114
    // 0x8021B10C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021B114;
    // 0x8021B10C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8021B110:
    // 0x8021B110: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_8021B114:
    // 0x8021B114: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8021B118: jr          $ra
    // 0x8021B11C: swc1        $f8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8021B11C: swc1        $f8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8020D72C_67710C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D72C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8020D730: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8020D734: lui         $v0, 0xD
    ctx->r2 = S32(0XD << 16);
    // 0x8020D738: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020D73C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8020D740: lw          $v0, -0x704($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X704);
    // 0x8020D744: jr          $ra
    // 0x8020D748: sb          $t7, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x8020D748: sb          $t7, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_80213100_67CAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213100: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213108: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x8021310C: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x80213110: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x80213114: bnel        $t6, $zero, L_80213124
    if (ctx->r14 != 0) {
        // 0x80213118: lwc1        $f4, 0x28($a1)
        ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
            goto L_80213124;
    }
    goto skip_0;
    // 0x80213118: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    skip_0:
    // 0x8021311C: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x80213120: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
L_80213124:
    // 0x80213124: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80213128: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021312C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80213130: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80213134: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80213138: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8021313C: swc1        $f16, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f16.u32l;
    // 0x80213140: jal         0x8001B5AC
    // 0x80213144: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80213144: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80213148: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021314C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80213150: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80213154: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x80213158: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8021315C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80213160: nop

    // 0x80213164: bc1fl       L_8021317C
    if (!c1cs) {
        // 0x80213168: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021317C;
    }
    goto skip_1;
    // 0x80213168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8021316C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80213170: nop

    // 0x80213174: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x80213178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021317C:
    // 0x8021317C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80213180: jr          $ra
    // 0x80213184: nop

    TRACE_RETURN()
    return;
    // 0x80213184: nop

;}
RECOMP_FUNC void func_8021B29C_684C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B29C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8021B2A0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8021B2A4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021B2A8: bgez        $t6, L_8021B2C0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021B2AC: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021B2C0;
    }
    // 0x8021B2AC: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021B2B0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021B2B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021B2B8: nop

    // 0x8021B2BC: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8021B2C0:
    // 0x8021B2C0: lwc1        $f8, 0x9C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x8021B2C4: swc1        $f0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f0.u32l;
    // 0x8021B2C8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021B2CC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8021B2D0: nop

    // 0x8021B2D4: bc1fl       L_8021B2F8
    if (!c1cs) {
        // 0x8021B2D8: lwc1        $f18, 0x44($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X44);
            goto L_8021B2F8;
    }
    goto skip_0;
    // 0x8021B2D8: lwc1        $f18, 0x44($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X44);
    skip_0:
    // 0x8021B2DC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021B2E0: lwc1        $f10, 0x44($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8021B2E4: lwc1        $f16, 0x40($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X40);
    // 0x8021B2E8: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8021B2EC: b           L_8021B300
    // 0x8021B2F0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021B300;
    // 0x8021B2F0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021B2F4: lwc1        $f18, 0x44($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X44);
L_8021B2F8:
    // 0x8021B2F8: lwc1        $f4, 0x40($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X40);
    // 0x8021B2FC: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_8021B300:
    // 0x8021B300: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021B304: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021B308: sb          $t7, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r15;
    // 0x8021B30C: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8021B310: jr          $ra
    // 0x8021B314: swc1        $f8, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8021B314: swc1        $f8, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8021D148_686B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D148: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021D14C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021D150: swc1        $f12, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f12.u32l;
    // 0x8021D154: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8021D158: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021D15C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8021D160: nop

    // 0x8021D164: bc1fl       L_8021D184
    if (!c1cs) {
        // 0x8021D168: lwc1        $f6, 0x18($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
            goto L_8021D184;
    }
    goto skip_0;
    // 0x8021D168: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    skip_0:
    // 0x8021D16C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021D170: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8021D174: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8021D178: b           L_8021D188
    // 0x8021D17C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8021D188;
    // 0x8021D17C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8021D180: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
L_8021D184:
    // 0x8021D184: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
L_8021D188:
    // 0x8021D188: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8021D18C: div.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8021D190: jr          $ra
    // 0x8021D194: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x8021D194: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_8021483C_67E21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021483C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80214840: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80214844: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80214848: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8021484C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80214850: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80214854: addiu       $a1, $a1, 0x47A0
    ctx->r5 = ADD32(ctx->r5, 0X47A0);
    // 0x80214858: jal         0x80034E08
    // 0x8021485C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021485C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80214860: bne         $v0, $zero, L_80214870
    if (ctx->r2 != 0) {
        // 0x80214864: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80214870;
    }
    // 0x80214864: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80214868: b           L_802148D4
    // 0x8021486C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802148D4;
    // 0x8021486C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80214870:
    // 0x80214870: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80214874: lwc1        $f0, -0x568C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X568C);
    // 0x80214878: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021487C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80214880: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80214884: addiu       $a1, $a1, 0x1870
    ctx->r5 = ADD32(ctx->r5, 0X1870);
    // 0x80214888: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021488C: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80214890: addiu       $t6, $zero, 0x4DE
    ctx->r14 = ADD32(0, 0X4DE);
    // 0x80214894: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80214898: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x8021489C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802148A0: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x802148A4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802148A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802148AC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802148B0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802148B4: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x802148B8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802148BC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802148C0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802148C4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802148C8: jal         0x8000DBF0
    // 0x802148CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x802148CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802148D0: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_802148D4:
    // 0x802148D4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802148D8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802148DC: jr          $ra
    // 0x802148E0: nop

    TRACE_RETURN()
    return;
    // 0x802148E0: nop

;}
RECOMP_FUNC void func_80225130_68EB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225130: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80225134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225138: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8022513C: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x80225140: lwc1        $f6, 0x5C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x80225144: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80225148: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8022514C: addiu       $a1, $a0, 0x5C
    ctx->r5 = ADD32(ctx->r4, 0X5C);
    // 0x80225150: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80225154: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
    // 0x80225158: lwc1        $f10, 0x5C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x8022515C: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x80225160: nop

    // 0x80225164: bc1fl       L_802251B4
    if (!c1cs) {
        // 0x80225168: addiu       $a1, $a0, 0x5C
        ctx->r5 = ADD32(ctx->r4, 0X5C);
            goto L_802251B4;
    }
    goto skip_0;
    // 0x80225168: addiu       $a1, $a0, 0x5C
    ctx->r5 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x8022516C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x80225170: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80225174: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80225178: lwc1        $f16, 0x28($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8022517C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80225180: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x80225184: nop

    // 0x80225188: bc1fl       L_802251B4
    if (!c1cs) {
        // 0x8022518C: addiu       $a1, $a0, 0x5C
        ctx->r5 = ADD32(ctx->r4, 0X5C);
            goto L_802251B4;
    }
    goto skip_1;
    // 0x8022518C: addiu       $a1, $a0, 0x5C
    ctx->r5 = ADD32(ctx->r4, 0X5C);
    skip_1:
    // 0x80225190: swc1        $f12, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f12.u32l;
    // 0x80225194: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80225198: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022519C: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x802251A0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802251A4: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
    // 0x802251A8: b           L_80225204
    // 0x802251AC: lwc1        $f0, 0x28($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X28);
        goto L_80225204;
    // 0x802251AC: lwc1        $f0, 0x28($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X28);
    // 0x802251B0: addiu       $a1, $a0, 0x5C
    ctx->r5 = ADD32(ctx->r4, 0X5C);
L_802251B4:
    // 0x802251B4: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802251B8: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x802251BC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802251C0: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x802251C4: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x802251C8: bc1f        L_80225204
    if (!c1cs) {
        // 0x802251CC: nop
    
            goto L_80225204;
    }
    // 0x802251CC: nop

    // 0x802251D0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802251D4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802251D8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802251DC: nop

    // 0x802251E0: bc1f        L_80225204
    if (!c1cs) {
        // 0x802251E4: nop
    
            goto L_80225204;
    }
    // 0x802251E4: nop

    // 0x802251E8: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
    // 0x802251EC: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802251F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802251F4: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x802251F8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802251FC: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    // 0x80225200: lwc1        $f0, 0x28($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X28);
L_80225204:
    // 0x80225204: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225208: ldc1        $f6, -0x4F10($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X4F10);
    // 0x8022520C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80225210: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80225214: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80225218: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8022521C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80225220: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80225224: nop

    // 0x80225228: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x8022522C: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x80225230: nop

    // 0x80225234: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80225238: beql        $a0, $zero, L_8022528C
    if (ctx->r4 == 0) {
        // 0x8022523C: mfc1        $a0, $f10
        ctx->r4 = (int32_t)ctx->f10.u32l;
            goto L_8022528C;
    }
    goto skip_2;
    // 0x8022523C: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    skip_2:
    // 0x80225240: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80225244: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80225248: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022524C: sub.d       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f10.d = ctx->f8.d - ctx->f10.d;
    // 0x80225250: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80225254: nop

    // 0x80225258: cvt.w.d     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_D(ctx->f10.d);
    // 0x8022525C: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x80225260: nop

    // 0x80225264: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80225268: bne         $a0, $zero, L_80225280
    if (ctx->r4 != 0) {
        // 0x8022526C: nop
    
            goto L_80225280;
    }
    // 0x8022526C: nop

    // 0x80225270: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80225274: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80225278: b           L_80225298
    // 0x8022527C: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_80225298;
    // 0x8022527C: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_80225280:
    // 0x80225280: b           L_80225298
    // 0x80225284: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_80225298;
    // 0x80225284: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80225288: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
L_8022528C:
    // 0x8022528C: nop

    // 0x80225290: bltz        $a0, L_80225280
    if (SIGNED(ctx->r4) < 0) {
        // 0x80225294: nop
    
            goto L_80225280;
    }
    // 0x80225294: nop

L_80225298:
    // 0x80225298: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8022529C: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x802252A0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x802252A4: jal         0x80003E10
    // 0x802252A8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_80003E10_4A10(rdram, ctx);
        goto after_0;
    // 0x802252A8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x802252AC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802252B0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802252B4: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x802252B8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802252BC: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x802252C0: lui         $t4, 0x2000
    ctx->r12 = S32(0X2000 << 16);
    // 0x802252C4: or          $t7, $t6, $t4
    ctx->r15 = ctx->r14 | ctx->r12;
    // 0x802252C8: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x802252CC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802252D0: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x802252D4: lui         $ra, 0xFB00
    ctx->r31 = S32(0XFB00 << 16);
    // 0x802252D8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802252DC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802252E0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802252E4: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x802252E8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252EC: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x802252F0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802252F4: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x802252F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802252FC: addiu       $t7, $a2, 0x8
    ctx->r15 = ADD32(ctx->r6, 0X8);
    // 0x80225300: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80225304: sw          $ra, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r31;
    // 0x80225308: ldc1        $f18, -0x4F08($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X4F08);
    // 0x8022530C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80225310: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80225314: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80225318: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8022531C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80225320: nop

    // 0x80225324: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80225328: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x8022532C: nop

    // 0x80225330: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x80225334: beql        $a3, $zero, L_80225384
    if (ctx->r7 == 0) {
        // 0x80225338: mfc1        $a3, $f8
        ctx->r7 = (int32_t)ctx->f8.u32l;
            goto L_80225384;
    }
    goto skip_3;
    // 0x80225338: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    skip_3:
    // 0x8022533C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80225340: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80225344: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80225348: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x8022534C: nop

    // 0x80225350: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80225354: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80225358: nop

    // 0x8022535C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x80225360: bne         $a3, $zero, L_80225378
    if (ctx->r7 != 0) {
        // 0x80225364: nop
    
            goto L_80225378;
    }
    // 0x80225364: nop

    // 0x80225368: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8022536C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80225370: b           L_80225390
    // 0x80225374: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_80225390;
    // 0x80225374: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_80225378:
    // 0x80225378: b           L_80225390
    // 0x8022537C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_80225390;
    // 0x8022537C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80225380: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
L_80225384:
    // 0x80225384: nop

    // 0x80225388: bltz        $a3, L_80225378
    if (SIGNED(ctx->r7) < 0) {
        // 0x8022538C: nop
    
            goto L_80225378;
    }
    // 0x8022538C: nop

L_80225390:
    // 0x80225390: lui         $at, 0x2020
    ctx->r1 = S32(0X2020 << 16);
    // 0x80225394: ori         $at, $at, 0xFF00
    ctx->r1 = ctx->r1 | 0XFF00;
    // 0x80225398: andi        $t9, $a3, 0xFF
    ctx->r25 = ctx->r7 & 0XFF;
    // 0x8022539C: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x802253A0: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x802253A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802253A8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802253AC: lui         $t8, 0xB800
    ctx->r24 = S32(0XB800 << 16);
    // 0x802253B0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802253B4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802253B8: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x802253BC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802253C0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802253C4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x802253C8: lw          $t7, 0xC($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XC);
    // 0x802253CC: lui         $at, 0x6060
    ctx->r1 = S32(0X6060 << 16);
    // 0x802253D0: or          $t6, $t9, $t4
    ctx->r14 = ctx->r25 | ctx->r12;
    // 0x802253D4: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x802253D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802253DC: ori         $at, $at, 0xFF00
    ctx->r1 = ctx->r1 | 0XFF00;
    // 0x802253E0: or          $t7, $a3, $at
    ctx->r15 = ctx->r7 | ctx->r1;
    // 0x802253E4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802253E8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802253EC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802253F0: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x802253F4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802253F8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802253FC: lui         $t9, 0xB800
    ctx->r25 = S32(0XB800 << 16);
    // 0x80225400: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80225404: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80225408: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8022540C: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x80225410: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80225414: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80225418: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8022541C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80225420: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80225424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225428: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8022542C: jr          $ra
    // 0x80225430: nop

    TRACE_RETURN()
    return;
    // 0x80225430: nop

;}
RECOMP_FUNC void func_80224EF8_68E8D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224EF8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80224EFC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80224F00: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80224F04: bgez        $t6, L_80224F1C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80224F08: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80224F1C;
    }
    // 0x80224F08: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80224F0C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80224F10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80224F14: nop

    // 0x80224F18: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80224F1C:
    // 0x80224F1C: lwc1        $f8, 0x60($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80224F20: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x80224F24: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80224F28: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80224F2C: nop

    // 0x80224F30: bc1fl       L_80224F54
    if (!c1cs) {
        // 0x80224F34: lwc1        $f18, 0x8($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
            goto L_80224F54;
    }
    goto skip_0;
    // 0x80224F34: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x80224F38: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80224F3C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80224F40: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80224F44: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80224F48: b           L_80224F5C
    // 0x80224F4C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80224F5C;
    // 0x80224F4C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80224F50: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
L_80224F54:
    // 0x80224F54: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80224F58: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_80224F5C:
    // 0x80224F5C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80224F60: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80224F64: jr          $ra
    // 0x80224F68: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80224F68: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_802126FC_67C0DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802126FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80212700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212704: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x80212708: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021270C: bnel        $t6, $zero, L_80212850
    if (ctx->r14 != 0) {
        // 0x80212710: lwc1        $f10, 0x70($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
            goto L_80212850;
    }
    goto skip_0;
    // 0x80212710: lwc1        $f10, 0x70($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
    skip_0:
    // 0x80212714: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80212718: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021271C: ldc1        $f16, -0x57A0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X57A0);
    // 0x80212720: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80212724: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80212728: nop

    // 0x8021272C: bc1fl       L_802127A4
    if (!c1cs) {
        // 0x80212730: lwc1        $f14, 0x2C($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
            goto L_802127A4;
    }
    goto skip_1;
    // 0x80212730: lwc1        $f14, 0x2C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
    skip_1:
    // 0x80212734: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80212738: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021273C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80212740: nop

    // 0x80212744: bc1fl       L_8021275C
    if (!c1cs) {
        // 0x80212748: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_8021275C;
    }
    goto skip_2;
    // 0x80212748: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_2:
    // 0x8021274C: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80212750: b           L_8021275C
    // 0x80212754: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8021275C;
    // 0x80212754: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80212758: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_8021275C:
    // 0x8021275C: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80212760: nop

    // 0x80212764: bc1fl       L_80212780
    if (!c1cs) {
        // 0x80212768: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_80212780;
    }
    goto skip_3;
    // 0x80212768: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_3:
    // 0x8021276C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80212770: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x80212774: b           L_802127A0
    // 0x80212778: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
        goto L_802127A0;
    // 0x80212778: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x8021277C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_80212780:
    // 0x80212780: nop

    // 0x80212784: bc1fl       L_8021279C
    if (!c1cs) {
        // 0x80212788: add.s       $f10, $f0, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_8021279C;
    }
    goto skip_4;
    // 0x80212788: add.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
    skip_4:
    // 0x8021278C: sub.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80212790: b           L_802127A0
    // 0x80212794: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
        goto L_802127A0;
    // 0x80212794: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x80212798: add.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
L_8021279C:
    // 0x8021279C: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
L_802127A0:
    // 0x802127A0: lwc1        $f14, 0x2C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
L_802127A4:
    // 0x802127A4: cvt.d.s     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f18.d = CVT_D_S(ctx->f14.fl);
    // 0x802127A8: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x802127AC: nop

    // 0x802127B0: bc1fl       L_80212828
    if (!c1cs) {
        // 0x802127B4: lh          $v1, 0x32($v0)
        ctx->r3 = MEM_H(ctx->r2, 0X32);
            goto L_80212828;
    }
    goto skip_5;
    // 0x802127B4: lh          $v1, 0x32($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X32);
    skip_5:
    // 0x802127B8: lwc1        $f12, 0x28($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X28);
    // 0x802127BC: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802127C0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802127C4: nop

    // 0x802127C8: bc1fl       L_802127E0
    if (!c1cs) {
        // 0x802127CC: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_802127E0;
    }
    goto skip_6;
    // 0x802127CC: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_6:
    // 0x802127D0: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x802127D4: b           L_802127E0
    // 0x802127D8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_802127E0;
    // 0x802127D8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x802127DC: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_802127E0:
    // 0x802127E0: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x802127E4: nop

    // 0x802127E8: bc1fl       L_80212804
    if (!c1cs) {
        // 0x802127EC: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_80212804;
    }
    goto skip_7;
    // 0x802127EC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_7:
    // 0x802127F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802127F4: swc1        $f12, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f12.u32l;
    // 0x802127F8: b           L_80212824
    // 0x802127FC: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
        goto L_80212824;
    // 0x802127FC: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
    // 0x80212800: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_80212804:
    // 0x80212804: nop

    // 0x80212808: bc1fl       L_80212820
    if (!c1cs) {
        // 0x8021280C: add.s       $f8, $f0, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_80212820;
    }
    goto skip_8;
    // 0x8021280C: add.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
    skip_8:
    // 0x80212810: sub.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80212814: b           L_80212824
    // 0x80212818: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
        goto L_80212824;
    // 0x80212818: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x8021281C: add.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
L_80212820:
    // 0x80212820: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
L_80212824:
    // 0x80212824: lh          $v1, 0x32($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X32);
L_80212828:
    // 0x80212828: beql        $v1, $zero, L_80212850
    if (ctx->r3 == 0) {
        // 0x8021282C: lwc1        $f10, 0x70($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
            goto L_80212850;
    }
    goto skip_9;
    // 0x8021282C: lwc1        $f10, 0x70($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
    skip_9:
    // 0x80212830: lhu         $t7, 0x30($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X30);
    // 0x80212834: lh          $t8, 0x34($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X34);
    // 0x80212838: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x8021283C: sh          $t1, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r9;
    // 0x80212840: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80212844: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x80212848: sh          $t0, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r8;
    // 0x8021284C: lwc1        $f10, 0x70($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
L_80212850:
    // 0x80212850: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80212854: ldc1        $f4, -0x5798($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5798);
    // 0x80212858: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x8021285C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80212860: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80212864: nop

    // 0x80212868: bc1fl       L_802128DC
    if (!c1cs) {
        // 0x8021286C: lhu         $t3, 0x30($v0)
        ctx->r11 = MEM_HU(ctx->r2, 0X30);
            goto L_802128DC;
    }
    goto skip_10;
    // 0x8021286C: lhu         $t3, 0x30($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30);
    skip_10:
    // 0x80212870: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80212874: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80212878: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8021287C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80212880: swc1        $f10, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f10.u32l;
    // 0x80212884: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80212888: jal         0x8001B5AC
    // 0x8021288C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x8021288C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x80212890: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80212894: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80212898: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8021289C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x802128A0: sub.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x802128A4: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x802128A8: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x802128AC: nop

    // 0x802128B0: bc1fl       L_802128DC
    if (!c1cs) {
        // 0x802128B4: lhu         $t3, 0x30($v0)
        ctx->r11 = MEM_HU(ctx->r2, 0X30);
            goto L_802128DC;
    }
    goto skip_11;
    // 0x802128B4: lhu         $t3, 0x30($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30);
    skip_11:
    // 0x802128B8: lbu         $t2, 0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1);
    // 0x802128BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802128C0: bnel        $t2, $at, L_802128D8
    if (ctx->r10 != ctx->r1) {
        // 0x802128C4: swc1        $f2, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
            goto L_802128D8;
    }
    goto skip_12;
    // 0x802128C4: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    skip_12:
    // 0x802128C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802128CC: b           L_802128D8
    // 0x802128D0: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
        goto L_802128D8;
    // 0x802128D0: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x802128D4: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
L_802128D8:
    // 0x802128D8: lhu         $t3, 0x30($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30);
L_802128DC:
    // 0x802128DC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802128E0: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x802128E4: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802128E8: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x802128EC: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x802128F0: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x802128F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802128F8: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x802128FC: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80212900: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    // 0x80212904: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80212908: swc1        $f4, -0xE40($at)
    MEM_W(-0XE40, ctx->r1) = ctx->f4.u32l;
    // 0x8021290C: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80212910: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80212914: swc1        $f6, -0xE3C($at)
    MEM_W(-0XE3C, ctx->r1) = ctx->f6.u32l;
    // 0x80212918: lw          $t4, 0x38($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X38);
    // 0x8021291C: swc1        $f8, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f8.u32l;
    // 0x80212920: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x80212924: lhu         $t5, 0x30($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X30);
    // 0x80212928: sh          $t5, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r13;
    // 0x8021292C: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x80212930: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80212934: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80212938: lui         $t6, 0xC
    ctx->r14 = S32(0XC << 16);
    // 0x8021293C: swc1        $f10, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f10.u32l;
    // 0x80212940: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x80212944: lwc1        $f18, 0x18($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80212948: swc1        $f18, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f18.u32l;
    // 0x8021294C: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x80212950: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80212954: swc1        $f4, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f4.u32l;
    // 0x80212958: lw          $t0, 0x38($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X38);
    // 0x8021295C: lw          $at, 0x34($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X34);
    // 0x80212960: sw          $at, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->r1;
    // 0x80212964: lw          $t2, 0x38($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X38);
    // 0x80212968: sw          $t2, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r10;
    // 0x8021296C: lw          $t4, 0x38($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X38);
    // 0x80212970: sh          $t3, 0x3C($t4)
    MEM_H(0X3C, ctx->r12) = ctx->r11;
    // 0x80212974: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x80212978: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x8021297C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80212980: lhu         $t6, 0x2D90($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X2D90);
    // 0x80212984: sh          $t6, 0x44($t7)
    MEM_H(0X44, ctx->r15) = ctx->r14;
    // 0x80212988: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x8021298C: sh          $zero, 0x4C($t8)
    MEM_H(0X4C, ctx->r24) = 0;
    // 0x80212990: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x80212994: sh          $zero, 0x54($t9)
    MEM_H(0X54, ctx->r25) = 0;
    // 0x80212998: lw          $t1, 0x38($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X38);
    // 0x8021299C: sh          $zero, 0x5C($t1)
    MEM_H(0X5C, ctx->r9) = 0;
    // 0x802129A0: lw          $a0, 0x38($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X38);
    // 0x802129A4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802129A8: jal         0x80014218
    // 0x802129AC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80014218_14E18(rdram, ctx);
        goto after_1;
    // 0x802129AC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x802129B0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x802129B4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x802129B8: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x802129BC: lw          $t0, 0x2C($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X2C);
    // 0x802129C0: lw          $t3, 0x38($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X38);
    // 0x802129C4: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x802129C8: sw          $t2, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r10;
    // 0x802129CC: lw          $t4, -0x39E4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39E4);
    // 0x802129D0: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x802129D4: lw          $t5, 0x30($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X30);
    // 0x802129D8: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
    // 0x802129DC: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x802129E0: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x802129E4: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
    // 0x802129E8: lwc1        $f8, 0x70($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X70);
    // 0x802129EC: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x802129F0: swc1        $f8, 0x70($t8)
    MEM_W(0X70, ctx->r24) = ctx->f8.u32l;
    // 0x802129F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802129F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802129FC: jr          $ra
    // 0x80212A00: nop

    TRACE_RETURN()
    return;
    // 0x80212A00: nop

;}
RECOMP_FUNC void func_80212BD8_67C5B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212BD8: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80212BDC: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80212BE0: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x80212BE4: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80212BE8: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80212BEC: jr          $ra
    // 0x80212BF0: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80212BF0: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80216130_67FB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216130: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80216134: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80216138: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021613C: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80216140: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80216144: ldc1        $f16, -0x5630($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X5630);
    // 0x80216148: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8021614C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80216150: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x80216154: addiu       $t2, $a0, 0x5C
    ctx->r10 = ADD32(ctx->r4, 0X5C);
    // 0x80216158: bc1fl       L_802161D4
    if (!c1cs) {
        // 0x8021615C: addiu       $t2, $a0, 0x5C
        ctx->r10 = ADD32(ctx->r4, 0X5C);
            goto L_802161D4;
    }
    goto skip_0;
    // 0x8021615C: addiu       $t2, $a0, 0x5C
    ctx->r10 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x80216160: lwc1        $f12, 0x4($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80216164: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80216168: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021616C: nop

    // 0x80216170: bc1fl       L_80216188
    if (!c1cs) {
        // 0x80216174: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80216188;
    }
    goto skip_1;
    // 0x80216174: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_1:
    // 0x80216178: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021617C: b           L_80216188
    // 0x80216180: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80216188;
    // 0x80216180: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80216184: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80216188:
    // 0x80216188: lwc1        $f14, 0x8($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8021618C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80216190: nop

    // 0x80216194: bc1fl       L_802161B0
    if (!c1cs) {
        // 0x80216198: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_802161B0;
    }
    goto skip_2;
    // 0x80216198: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_2:
    // 0x8021619C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802161A0: swc1        $f12, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f12.u32l;
    // 0x802161A4: b           L_802161D0
    // 0x802161A8: swc1        $f18, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f18.u32l;
        goto L_802161D0;
    // 0x802161A8: swc1        $f18, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f18.u32l;
    // 0x802161AC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_802161B0:
    // 0x802161B0: nop

    // 0x802161B4: bc1fl       L_802161CC
    if (!c1cs) {
        // 0x802161B8: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_802161CC;
    }
    goto skip_3;
    // 0x802161B8: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_3:
    // 0x802161BC: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x802161C0: b           L_802161D0
    // 0x802161C4: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
        goto L_802161D0;
    // 0x802161C4: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x802161C8: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_802161CC:
    // 0x802161CC: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
L_802161D0:
    // 0x802161D0: addiu       $t2, $a0, 0x5C
    ctx->r10 = ADD32(ctx->r4, 0X5C);
L_802161D4:
    // 0x802161D4: lwc1        $f14, 0x10($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X10);
    // 0x802161D8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802161DC: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x802161E0: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x802161E4: nop

    // 0x802161E8: bc1fl       L_8021625C
    if (!c1cs) {
        // 0x802161EC: lwc1        $f14, 0x18($t2)
        ctx->f14.u32l = MEM_W(ctx->r10, 0X18);
            goto L_8021625C;
    }
    goto skip_4;
    // 0x802161EC: lwc1        $f14, 0x18($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X18);
    skip_4:
    // 0x802161F0: lwc1        $f12, 0xC($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0XC);
    // 0x802161F4: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802161F8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802161FC: nop

    // 0x80216200: bc1fl       L_80216218
    if (!c1cs) {
        // 0x80216204: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80216218;
    }
    goto skip_5;
    // 0x80216204: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_5:
    // 0x80216208: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021620C: b           L_80216218
    // 0x80216210: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80216218;
    // 0x80216210: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80216214: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80216218:
    // 0x80216218: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021621C: nop

    // 0x80216220: bc1fl       L_80216238
    if (!c1cs) {
        // 0x80216224: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80216238;
    }
    goto skip_6;
    // 0x80216224: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_6:
    // 0x80216228: swc1        $f12, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f12.u32l;
    // 0x8021622C: b           L_80216258
    // 0x80216230: swc1        $f18, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f18.u32l;
        goto L_80216258;
    // 0x80216230: swc1        $f18, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f18.u32l;
    // 0x80216234: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80216238:
    // 0x80216238: nop

    // 0x8021623C: bc1fl       L_80216254
    if (!c1cs) {
        // 0x80216240: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80216254;
    }
    goto skip_7;
    // 0x80216240: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_7:
    // 0x80216244: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80216248: b           L_80216258
    // 0x8021624C: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
        goto L_80216258;
    // 0x8021624C: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x80216250: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_80216254:
    // 0x80216254: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
L_80216258:
    // 0x80216258: lwc1        $f14, 0x18($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X18);
L_8021625C:
    // 0x8021625C: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80216260: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80216264: nop

    // 0x80216268: bc1fl       L_802162DC
    if (!c1cs) {
        // 0x8021626C: lwc1        $f14, 0x20($t2)
        ctx->f14.u32l = MEM_W(ctx->r10, 0X20);
            goto L_802162DC;
    }
    goto skip_8;
    // 0x8021626C: lwc1        $f14, 0x20($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X20);
    skip_8:
    // 0x80216270: lwc1        $f12, 0x14($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X14);
    // 0x80216274: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80216278: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021627C: nop

    // 0x80216280: bc1fl       L_80216298
    if (!c1cs) {
        // 0x80216284: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80216298;
    }
    goto skip_9;
    // 0x80216284: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_9:
    // 0x80216288: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021628C: b           L_80216298
    // 0x80216290: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80216298;
    // 0x80216290: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80216294: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80216298:
    // 0x80216298: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021629C: nop

    // 0x802162A0: bc1fl       L_802162B8
    if (!c1cs) {
        // 0x802162A4: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_802162B8;
    }
    goto skip_10;
    // 0x802162A4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_10:
    // 0x802162A8: swc1        $f12, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f12.u32l;
    // 0x802162AC: b           L_802162D8
    // 0x802162B0: swc1        $f18, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f18.u32l;
        goto L_802162D8;
    // 0x802162B0: swc1        $f18, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f18.u32l;
    // 0x802162B4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_802162B8:
    // 0x802162B8: nop

    // 0x802162BC: bc1fl       L_802162D4
    if (!c1cs) {
        // 0x802162C0: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_802162D4;
    }
    goto skip_11;
    // 0x802162C0: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_11:
    // 0x802162C4: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x802162C8: b           L_802162D8
    // 0x802162CC: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
        goto L_802162D8;
    // 0x802162CC: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x802162D0: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_802162D4:
    // 0x802162D4: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
L_802162D8:
    // 0x802162D8: lwc1        $f14, 0x20($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X20);
L_802162DC:
    // 0x802162DC: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x802162E0: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x802162E4: nop

    // 0x802162E8: bc1fl       L_80216384
    if (!c1cs) {
        // 0x802162EC: lwc1        $f0, 0x24($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
            goto L_80216384;
    }
    goto skip_12;
    // 0x802162EC: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    skip_12:
    // 0x802162F0: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x802162F4: lwc1        $f2, 0x24($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802162F8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802162FC: nop

    // 0x80216300: bc1fl       L_80216318
    if (!c1cs) {
        // 0x80216304: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80216318;
    }
    goto skip_13;
    // 0x80216304: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_13:
    // 0x80216308: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021630C: b           L_80216318
    // 0x80216310: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80216318;
    // 0x80216310: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80216314: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80216318:
    // 0x80216318: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021631C: nop

    // 0x80216320: bc1fl       L_80216338
    if (!c1cs) {
        // 0x80216324: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80216338;
    }
    goto skip_14;
    // 0x80216324: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_14:
    // 0x80216328: swc1        $f12, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f12.u32l;
    // 0x8021632C: b           L_80216358
    // 0x80216330: swc1        $f18, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f18.u32l;
        goto L_80216358;
    // 0x80216330: swc1        $f18, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f18.u32l;
    // 0x80216334: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80216338:
    // 0x80216338: nop

    // 0x8021633C: bc1fl       L_80216354
    if (!c1cs) {
        // 0x80216340: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80216354;
    }
    goto skip_15;
    // 0x80216340: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_15:
    // 0x80216344: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80216348: b           L_80216358
    // 0x8021634C: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
        goto L_80216358;
    // 0x8021634C: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    // 0x80216350: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_80216354:
    // 0x80216354: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
L_80216358:
    // 0x80216358: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8021635C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80216360: c.lt.d      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.d < ctx->f16.d;
    // 0x80216364: nop

    // 0x80216368: bc1fl       L_80216384
    if (!c1cs) {
        // 0x8021636C: lwc1        $f0, 0x24($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
            goto L_80216384;
    }
    goto skip_16;
    // 0x8021636C: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    skip_16:
    // 0x80216370: jal         0x80034ED4
    // 0x80216374: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x80216374: nop

    after_0:
    // 0x80216378: b           L_8021688C
    // 0x8021637C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021688C;
    // 0x8021637C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80216380: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
L_80216384:
    // 0x80216384: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x80216388: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x8021638C: lwc1        $f14, 0x2C($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80216390: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80216394: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80216398: nop

    // 0x8021639C: bc1fl       L_80216410
    if (!c1cs) {
        // 0x802163A0: lwc1        $f14, 0x38($t2)
        ctx->f14.u32l = MEM_W(ctx->r10, 0X38);
            goto L_80216410;
    }
    goto skip_17;
    // 0x802163A0: lwc1        $f14, 0x38($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X38);
    skip_17:
    // 0x802163A4: lwc1        $f12, 0x28($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X28);
    // 0x802163A8: lwc1        $f2, 0x24($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X24);
    // 0x802163AC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802163B0: nop

    // 0x802163B4: bc1fl       L_802163CC
    if (!c1cs) {
        // 0x802163B8: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_802163CC;
    }
    goto skip_18;
    // 0x802163B8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_18:
    // 0x802163BC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x802163C0: b           L_802163CC
    // 0x802163C4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802163CC;
    // 0x802163C4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802163C8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_802163CC:
    // 0x802163CC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802163D0: nop

    // 0x802163D4: bc1fl       L_802163EC
    if (!c1cs) {
        // 0x802163D8: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_802163EC;
    }
    goto skip_19;
    // 0x802163D8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_19:
    // 0x802163DC: swc1        $f12, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f12.u32l;
    // 0x802163E0: b           L_8021640C
    // 0x802163E4: swc1        $f18, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f18.u32l;
        goto L_8021640C;
    // 0x802163E4: swc1        $f18, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f18.u32l;
    // 0x802163E8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_802163EC:
    // 0x802163EC: nop

    // 0x802163F0: bc1fl       L_80216408
    if (!c1cs) {
        // 0x802163F4: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80216408;
    }
    goto skip_20;
    // 0x802163F4: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_20:
    // 0x802163F8: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x802163FC: b           L_8021640C
    // 0x80216400: swc1        $f4, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f4.u32l;
        goto L_8021640C;
    // 0x80216400: swc1        $f4, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f4.u32l;
    // 0x80216404: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_80216408:
    // 0x80216408: swc1        $f6, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f6.u32l;
L_8021640C:
    // 0x8021640C: lwc1        $f14, 0x38($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X38);
L_80216410:
    // 0x80216410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80216414: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80216418: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x8021641C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80216420: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x80216424: nop

    // 0x80216428: bc1fl       L_8021649C
    if (!c1cs) {
        // 0x8021642C: lwc1        $f14, 0x44($t2)
        ctx->f14.u32l = MEM_W(ctx->r10, 0X44);
            goto L_8021649C;
    }
    goto skip_21;
    // 0x8021642C: lwc1        $f14, 0x44($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X44);
    skip_21:
    // 0x80216430: lwc1        $f12, 0x34($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X34);
    // 0x80216434: lwc1        $f2, 0x30($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X30);
    // 0x80216438: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021643C: nop

    // 0x80216440: bc1fl       L_80216458
    if (!c1cs) {
        // 0x80216444: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80216458;
    }
    goto skip_22;
    // 0x80216444: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_22:
    // 0x80216448: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021644C: b           L_80216458
    // 0x80216450: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80216458;
    // 0x80216450: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80216454: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80216458:
    // 0x80216458: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021645C: nop

    // 0x80216460: bc1fl       L_80216478
    if (!c1cs) {
        // 0x80216464: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80216478;
    }
    goto skip_23;
    // 0x80216464: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_23:
    // 0x80216468: swc1        $f12, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f12.u32l;
    // 0x8021646C: b           L_80216498
    // 0x80216470: swc1        $f18, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->f18.u32l;
        goto L_80216498;
    // 0x80216470: swc1        $f18, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->f18.u32l;
    // 0x80216474: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80216478:
    // 0x80216478: nop

    // 0x8021647C: bc1fl       L_80216494
    if (!c1cs) {
        // 0x80216480: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80216494;
    }
    goto skip_24;
    // 0x80216480: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_24:
    // 0x80216484: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80216488: b           L_80216498
    // 0x8021648C: swc1        $f10, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f10.u32l;
        goto L_80216498;
    // 0x8021648C: swc1        $f10, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f10.u32l;
    // 0x80216490: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_80216494:
    // 0x80216494: swc1        $f4, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f4.u32l;
L_80216498:
    // 0x80216498: lwc1        $f14, 0x44($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X44);
L_8021649C:
    // 0x8021649C: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x802164A0: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x802164A4: nop

    // 0x802164A8: bc1fl       L_8021651C
    if (!c1cs) {
        // 0x802164AC: lwc1        $f14, 0x50($t2)
        ctx->f14.u32l = MEM_W(ctx->r10, 0X50);
            goto L_8021651C;
    }
    goto skip_25;
    // 0x802164AC: lwc1        $f14, 0x50($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X50);
    skip_25:
    // 0x802164B0: lwc1        $f12, 0x40($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X40);
    // 0x802164B4: lwc1        $f2, 0x3C($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x802164B8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802164BC: nop

    // 0x802164C0: bc1fl       L_802164D8
    if (!c1cs) {
        // 0x802164C4: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_802164D8;
    }
    goto skip_26;
    // 0x802164C4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_26:
    // 0x802164C8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x802164CC: b           L_802164D8
    // 0x802164D0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802164D8;
    // 0x802164D0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802164D4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_802164D8:
    // 0x802164D8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802164DC: nop

    // 0x802164E0: bc1fl       L_802164F8
    if (!c1cs) {
        // 0x802164E4: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_802164F8;
    }
    goto skip_27;
    // 0x802164E4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_27:
    // 0x802164E8: swc1        $f12, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f12.u32l;
    // 0x802164EC: b           L_80216518
    // 0x802164F0: swc1        $f18, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f18.u32l;
        goto L_80216518;
    // 0x802164F0: swc1        $f18, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f18.u32l;
    // 0x802164F4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_802164F8:
    // 0x802164F8: nop

    // 0x802164FC: bc1fl       L_80216514
    if (!c1cs) {
        // 0x80216500: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80216514;
    }
    goto skip_28;
    // 0x80216500: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_28:
    // 0x80216504: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80216508: b           L_80216518
    // 0x8021650C: swc1        $f8, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f8.u32l;
        goto L_80216518;
    // 0x8021650C: swc1        $f8, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f8.u32l;
    // 0x80216510: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_80216514:
    // 0x80216514: swc1        $f10, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f10.u32l;
L_80216518:
    // 0x80216518: lwc1        $f14, 0x50($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X50);
L_8021651C:
    // 0x8021651C: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80216520: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80216524: nop

    // 0x80216528: bc1f        L_802165C0
    if (!c1cs) {
        // 0x8021652C: nop
    
            goto L_802165C0;
    }
    // 0x8021652C: nop

    // 0x80216530: lwc1        $f12, 0x4C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X4C);
    // 0x80216534: lwc1        $f2, 0x48($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X48);
    // 0x80216538: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021653C: nop

    // 0x80216540: bc1fl       L_80216558
    if (!c1cs) {
        // 0x80216544: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80216558;
    }
    goto skip_29;
    // 0x80216544: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_29:
    // 0x80216548: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021654C: b           L_80216558
    // 0x80216550: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80216558;
    // 0x80216550: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80216554: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80216558:
    // 0x80216558: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021655C: nop

    // 0x80216560: bc1fl       L_80216578
    if (!c1cs) {
        // 0x80216564: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80216578;
    }
    goto skip_30;
    // 0x80216564: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_30:
    // 0x80216568: swc1        $f12, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f12.u32l;
    // 0x8021656C: b           L_80216598
    // 0x80216570: swc1        $f18, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->f18.u32l;
        goto L_80216598;
    // 0x80216570: swc1        $f18, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->f18.u32l;
    // 0x80216574: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80216578:
    // 0x80216578: nop

    // 0x8021657C: bc1fl       L_80216594
    if (!c1cs) {
        // 0x80216580: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80216594;
    }
    goto skip_31;
    // 0x80216580: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_31:
    // 0x80216584: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80216588: b           L_80216598
    // 0x8021658C: swc1        $f6, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f6.u32l;
        goto L_80216598;
    // 0x8021658C: swc1        $f6, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f6.u32l;
    // 0x80216590: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_80216594:
    // 0x80216594: swc1        $f8, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f8.u32l;
L_80216598:
    // 0x80216598: lwc1        $f10, 0x48($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X48);
    // 0x8021659C: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x802165A0: c.lt.d      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.d < ctx->f16.d;
    // 0x802165A4: nop

    // 0x802165A8: bc1f        L_802165C0
    if (!c1cs) {
        // 0x802165AC: nop
    
            goto L_802165C0;
    }
    // 0x802165AC: nop

    // 0x802165B0: jal         0x80034ED4
    // 0x802165B4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x802165B4: nop

    after_1:
    // 0x802165B8: b           L_8021688C
    // 0x802165BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021688C;
    // 0x802165BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802165C0:
    // 0x802165C0: jal         0x80213F98
    // 0x802165C4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    func_80213F98_67D978(rdram, ctx);
        goto after_2;
    // 0x802165C4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    after_2:
    // 0x802165C8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802165CC: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x802165D0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802165D4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x802165D8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x802165DC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x802165E0: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x802165E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802165E8: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x802165EC: lui         $t6, 0xFB00
    ctx->r14 = S32(0XFB00 << 16);
    // 0x802165F0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802165F4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802165F8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802165FC: lw          $t4, 0x54($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X54);
    // 0x80216600: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80216604: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80216608: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8021660C: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x80216610: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80216614: lui         $t3, 0x8FFF
    ctx->r11 = S32(0X8FFF << 16);
    // 0x80216618: addiu       $t5, $a3, 0x8
    ctx->r13 = ADD32(ctx->r7, 0X8);
    // 0x8021661C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x80216620: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x80216624: lwc1        $f6, 0x24($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X24);
    // 0x80216628: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x8021662C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80216630: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80216634: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80216638: nop

    // 0x8021663C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80216640: beql        $t8, $zero, L_80216690
    if (ctx->r24 == 0) {
        // 0x80216644: mfc1        $t8, $f8
        ctx->r24 = (int32_t)ctx->f8.u32l;
            goto L_80216690;
    }
    goto skip_32;
    // 0x80216644: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    skip_32:
    // 0x80216648: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021664C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80216650: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80216654: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80216658: nop

    // 0x8021665C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80216660: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80216664: nop

    // 0x80216668: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8021666C: bne         $t8, $zero, L_80216684
    if (ctx->r24 != 0) {
        // 0x80216670: nop
    
            goto L_80216684;
    }
    // 0x80216670: nop

    // 0x80216674: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x80216678: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021667C: b           L_8021669C
    // 0x80216680: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8021669C;
    // 0x80216680: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_80216684:
    // 0x80216684: b           L_8021669C
    // 0x80216688: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8021669C;
    // 0x80216688: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8021668C: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
L_80216690:
    // 0x80216690: nop

    // 0x80216694: bltz        $t8, L_80216684
    if (SIGNED(ctx->r24) < 0) {
        // 0x80216698: nop
    
            goto L_80216684;
    }
    // 0x80216698: nop

L_8021669C:
    // 0x8021669C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802166A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802166A4: lwc1        $f10, 0x30($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X30);
    // 0x802166A8: sll         $t4, $t8, 24
    ctx->r12 = S32(ctx->r24 << 24);
    // 0x802166AC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802166B0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802166B4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802166B8: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802166BC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802166C0: nop

    // 0x802166C4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x802166C8: beql        $t6, $zero, L_80216718
    if (ctx->r14 == 0) {
        // 0x802166CC: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_80216718;
    }
    goto skip_33;
    // 0x802166CC: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_33:
    // 0x802166D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802166D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802166D8: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802166DC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802166E0: nop

    // 0x802166E4: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802166E8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802166EC: nop

    // 0x802166F0: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x802166F4: bne         $t6, $zero, L_8021670C
    if (ctx->r14 != 0) {
        // 0x802166F8: nop
    
            goto L_8021670C;
    }
    // 0x802166F8: nop

    // 0x802166FC: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x80216700: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80216704: b           L_80216724
    // 0x80216708: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80216724;
    // 0x80216708: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8021670C:
    // 0x8021670C: b           L_80216724
    // 0x80216710: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80216724;
    // 0x80216710: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80216714: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_80216718:
    // 0x80216718: nop

    // 0x8021671C: bltz        $t6, L_8021670C
    if (SIGNED(ctx->r14) < 0) {
        // 0x80216720: nop
    
            goto L_8021670C;
    }
    // 0x80216720: nop

L_80216724:
    // 0x80216724: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80216728: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8021672C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80216730: lwc1        $f6, 0x3C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80216734: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80216738: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021673C: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x80216740: or          $t9, $t4, $t8
    ctx->r25 = ctx->r12 | ctx->r24;
    // 0x80216744: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80216748: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021674C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80216750: nop

    // 0x80216754: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80216758: beql        $t6, $zero, L_802167A8
    if (ctx->r14 == 0) {
        // 0x8021675C: mfc1        $t6, $f8
        ctx->r14 = (int32_t)ctx->f8.u32l;
            goto L_802167A8;
    }
    goto skip_34;
    // 0x8021675C: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    skip_34:
    // 0x80216760: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80216764: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80216768: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021676C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80216770: nop

    // 0x80216774: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80216778: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8021677C: nop

    // 0x80216780: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80216784: bne         $t6, $zero, L_8021679C
    if (ctx->r14 != 0) {
        // 0x80216788: nop
    
            goto L_8021679C;
    }
    // 0x80216788: nop

    // 0x8021678C: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x80216790: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80216794: b           L_802167B4
    // 0x80216798: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_802167B4;
    // 0x80216798: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8021679C:
    // 0x8021679C: b           L_802167B4
    // 0x802167A0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_802167B4;
    // 0x802167A0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x802167A4: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
L_802167A8:
    // 0x802167A8: nop

    // 0x802167AC: bltz        $t6, L_8021679C
    if (SIGNED(ctx->r14) < 0) {
        // 0x802167B0: nop
    
            goto L_8021679C;
    }
    // 0x802167B0: nop

L_802167B4:
    // 0x802167B4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802167B8: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x802167BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802167C0: lwc1        $f10, 0x48($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X48);
    // 0x802167C4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802167C8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802167CC: sll         $t4, $t7, 8
    ctx->r12 = S32(ctx->r15 << 8);
    // 0x802167D0: or          $t8, $t9, $t4
    ctx->r24 = ctx->r25 | ctx->r12;
    // 0x802167D4: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802167D8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802167DC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802167E0: nop

    // 0x802167E4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x802167E8: beql        $t6, $zero, L_80216838
    if (ctx->r14 == 0) {
        // 0x802167EC: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_80216838;
    }
    goto skip_35;
    // 0x802167EC: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_35:
    // 0x802167F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802167F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802167F8: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802167FC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80216800: nop

    // 0x80216804: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80216808: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8021680C: nop

    // 0x80216810: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80216814: bne         $t6, $zero, L_8021682C
    if (ctx->r14 != 0) {
        // 0x80216818: nop
    
            goto L_8021682C;
    }
    // 0x80216818: nop

    // 0x8021681C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x80216820: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80216824: b           L_80216844
    // 0x80216828: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80216844;
    // 0x80216828: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8021682C:
    // 0x8021682C: b           L_80216844
    // 0x80216830: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80216844;
    // 0x80216830: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80216834: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_80216838:
    // 0x80216838: nop

    // 0x8021683C: bltz        $t6, L_8021682C
    if (SIGNED(ctx->r14) < 0) {
        // 0x80216840: nop
    
            goto L_8021682C;
    }
    // 0x80216840: nop

L_80216844:
    // 0x80216844: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80216848: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8021684C: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x80216850: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80216854: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80216858: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x8021685C: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80216860: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80216864: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80216868: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8021686C: lw          $t1, 0x30($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X30);
    // 0x80216870: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80216874: subu        $t8, $t3, $t1
    ctx->r24 = SUB32(ctx->r11, ctx->r9);
    // 0x80216878: and         $t7, $t6, $t8
    ctx->r15 = ctx->r14 & ctx->r24;
    // 0x8021687C: and         $a1, $t7, $t3
    ctx->r5 = ctx->r15 & ctx->r11;
    // 0x80216880: jal         0x80040620
    // 0x80216884: and         $a0, $t1, $t3
    ctx->r4 = ctx->r9 & ctx->r11;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_3;
    // 0x80216884: and         $a0, $t1, $t3
    ctx->r4 = ctx->r9 & ctx->r11;
    after_3:
    // 0x80216888: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021688C:
    // 0x8021688C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80216890: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80216894: jr          $ra
    // 0x80216898: nop

    TRACE_RETURN()
    return;
    // 0x80216898: nop

;}
RECOMP_FUNC void func_80224040_68DA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224040: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80224044: jr          $ra
    // 0x80224048: swc1        $f12, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80224048: swc1        $f12, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80227BB8_691598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227BB8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80227BBC: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
    // 0x80227BC0: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80227BC4: jr          $ra
    // 0x80227BC8: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    TRACE_RETURN()
    return;
    // 0x80227BC8: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
;}
RECOMP_FUNC void func_80215260_67EC40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215260: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80215264: jr          $ra
    // 0x80215268: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80215268: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8022993C_69331C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022993C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80229940: jr          $ra
    // 0x80229944: swc1        $f12, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80229944: swc1        $f12, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8022404C_68DA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022404C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80224050: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80224054: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80224058: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    // 0x8022405C: swc1        $f14, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f14.u32l;
    // 0x80224060: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80224064: jr          $ra
    // 0x80224068: swc1        $f4, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80224068: swc1        $f4, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_802122F4_67BCD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802122F4: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x802122F8: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x802122FC: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x80212300: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80212304: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80212308: jr          $ra
    // 0x8021230C: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8021230C: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
