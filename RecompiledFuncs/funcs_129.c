#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08001368_6FC568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800136C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001370: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001374: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001378: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800137C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001380: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08001384: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001388: beq         $v1, $zero, L_0800139C
    if (ctx->r3 == 0) {
        // 0x0800138C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800139C;
    }
    // 0x0800138C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001390: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X12DC) << 16);
    // 0x08001394: jalr        $t9
    // 0x08001398: addiu       $a0, $a0, 0x12DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X12DC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001398: addiu       $a0, $a0, 0x12DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X12DC));
    after_0:
L_0800139C:
    // 0x0800139C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080013A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080013A4: jr          $ra
    // 0x080013A8: nop

    TRACE_RETURN()
    return;
    // 0x080013A8: nop

;}
RECOMP_FUNC void func_080003A0_6FB5A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080003A4: jr          $ra
    // 0x080003A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080003A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000F74_6FC174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000F78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000F7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000F80: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x08000F84: lh          $t7, 0xDA($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XDA);
    // 0x08000F88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000F8C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000F90: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x08000F94: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x08000F98: bne         $t0, $zero, L_08000FE8
    if (ctx->r8 != 0) {
        // 0x08000F9C: sh          $t9, 0x14($a1)
        MEM_H(0X14, ctx->r5) = ctx->r25;
            goto L_08000FE8;
    }
    // 0x08000F9C: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
    // 0x08000FA0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FA4: addiu       $t9, $t9, -0xB98
    ctx->r25 = ADD32(ctx->r25, -0XB98);
    // 0x08000FA8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000FAC: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000FB0: addiu       $a0, $zero, 0x2A0
    ctx->r4 = ADD32(0, 0X2A0);
    // 0x08000FB4: jalr        $t9
    // 0x08000FB8: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000FB8: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_0:
    // 0x08000FBC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000FC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000FC4: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x08000FC8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000FCC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XE64) << 16);
    // 0x08000FD0: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x08000FD4: addiu       $a0, $a0, 0xE64
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XE64));
    // 0x08000FD8: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x08000FDC: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x08000FE0: jalr        $t9
    // 0x08000FE4: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000FE4: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    after_1:
L_08000FE8:
    // 0x08000FE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000FEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000FF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000FF4: jr          $ra
    // 0x08000FF8: nop

    TRACE_RETURN()
    return;
    // 0x08000FF8: nop

;}
RECOMP_FUNC void func_08003074_6FE274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003074: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08003078: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800307C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08003080: lw          $v0, 0x9C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9C);
    // 0x08003084: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003088: beql        $v0, $zero, L_080030AC
    if (ctx->r2 == 0) {
        // 0x0800308C: lh          $t6, 0xC8($s0)
        ctx->r14 = MEM_H(ctx->r16, 0XC8);
            goto L_080030AC;
    }
    goto skip_0;
    // 0x0800308C: lh          $t6, 0xC8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XC8);
    skip_0:
    // 0x08003090: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08003094: swc1        $f4, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->f4.u32l;
    // 0x08003098: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0800309C: swc1        $f6, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->f6.u32l;
    // 0x080030A0: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x080030A4: swc1        $f8, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->f8.u32l;
    // 0x080030A8: lh          $t6, 0xC8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XC8);
L_080030AC:
    // 0x080030AC: lh          $t9, 0xD6($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XD6);
    // 0x080030B0: lh          $t7, 0xCA($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XCA);
    // 0x080030B4: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x080030B8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x080030BC: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x080030C0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080030C4: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x080030C8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080030CC: lh          $t8, 0xCC($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XCC);
    // 0x080030D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080030D4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080030D8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x080030DC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080030E0: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x080030E4: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x080030E8: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x080030EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080030F0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080030F4: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x080030F8: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080030FC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08003100: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x08003104: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08003108: jalr        $t9
    // 0x0800310C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800310C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x08003110: bne         $v0, $zero, L_08003128
    if (ctx->r2 != 0) {
        // 0x08003114: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(35, 0X3148) << 16);
            goto L_08003128;
    }
    // 0x08003114: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X3148) << 16);
    // 0x08003118: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800311C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003120: jalr        $t9
    // 0x08003124: addiu       $a0, $a0, 0x3148
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X3148));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003124: addiu       $a0, $a0, 0x3148
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X3148));
    after_1:
L_08003128:
    // 0x08003128: sh          $zero, 0xEC($s0)
    MEM_H(0XEC, ctx->r16) = 0;
    // 0x0800312C: jal         0x080028B4
    // 0x08003130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_080028B4_6FDAB4(rdram, ctx);
        goto after_2;
    // 0x08003130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08003134: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003138: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0800313C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08003140: jr          $ra
    // 0x08003144: nop

    TRACE_RETURN()
    return;
    // 0x08003144: nop

;}
RECOMP_FUNC void func_08001F2C_6FD12C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001F2C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08001F30: jr          $ra
    // 0x08001F34: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08001F34: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080005D0_6FB7D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005D0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080005D4: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x080005D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080005DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080005E0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x080005E4: lw          $t6, 0xA0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XA0);
    // 0x080005E8: bne         $a1, $t6, L_080006E4
    if (ctx->r5 != ctx->r14) {
        // 0x080005EC: nop
    
            goto L_080006E4;
    }
    // 0x080005EC: nop

    // 0x080005F0: lwc1        $f2, 0x68($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X68);
    // 0x080005F4: lwc1        $f14, 0x6C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X6C);
    // 0x080005F8: lwc1        $f0, 0x70($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X70);
    // 0x080005FC: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08000600: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x08000604: addiu       $v1, $v1, 0x17E0
    ctx->r3 = ADD32(ctx->r3, 0X17E0);
    // 0x08000608: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x0800060C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x08000610: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08000614: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000618: jalr        $v1
    // 0x0800061C: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x0800061C: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_0:
    // 0x08000620: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x08000624: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000628: lw          $t9, -0x39F4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39F4);
    // 0x0800062C: lh          $t8, 0xDC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XDC);
    // 0x08000630: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000634: lwc1        $f12, 0xC($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0XC);
    // 0x08000638: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x0800063C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000640: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08000644: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08000648: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x0800064C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x08000650: nop

    // 0x08000654: bc1fl       L_0800066C
    if (!c1cs) {
        // 0x08000658: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_0800066C;
    }
    goto skip_0;
    // 0x08000658: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_0:
    // 0x0800065C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x08000660: b           L_0800066C
    // 0x08000664: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_0800066C;
    // 0x08000664: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x08000668: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_0800066C:
    // 0x0800066C: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x08000670: nop

    // 0x08000674: bc1tl       L_080006C8
    if (c1cs) {
        // 0x08000678: lw          $t1, 0x28($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X28);
            goto L_080006C8;
    }
    goto skip_1;
    // 0x08000678: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    skip_1:
    // 0x0800067C: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x08000680: lwc1        $f2, 0x68($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X68);
    // 0x08000684: lwc1        $f14, 0x6C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X6C);
    // 0x08000688: lwc1        $f0, 0x70($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X70);
    // 0x0800068C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08000690: nop

    // 0x08000694: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x08000698: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0800069C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x080006A0: jalr        $v1
    // 0x080006A4: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x080006A4: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_1:
    // 0x080006A8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X3770) << 16);
    // 0x080006AC: ldc1        $f16, 0x3770($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(35, 0X3770));
    // 0x080006B0: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x080006B4: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x080006B8: nop

    // 0x080006BC: bc1f        L_080006E4
    if (!c1cs) {
        // 0x080006C0: nop
    
            goto L_080006E4;
    }
    // 0x080006C0: nop

    // 0x080006C4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
L_080006C8:
    // 0x080006C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080006CC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x080006D0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080006D4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X534) << 16);
    // 0x080006D8: addiu       $a0, $a0, 0x534
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X534));
    // 0x080006DC: jalr        $t9
    // 0x080006E0: sh          $t0, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080006E0: sh          $t0, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = ctx->r8;
    after_2:
L_080006E4:
    // 0x080006E4: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x080006E8: lw          $t2, -0x39F4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39F4);
    // 0x080006EC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x080006F0: lwc1        $f4, 0xC($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0XC);
    // 0x080006F4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x080006F8: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x080006FC: nop

    // 0x08000700: sh          $t4, 0xDC($t5)
    MEM_H(0XDC, ctx->r13) = ctx->r12;
    // 0x08000704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000708: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800070C: jr          $ra
    // 0x08000710: nop

    TRACE_RETURN()
    return;
    // 0x08000710: nop

;}
RECOMP_FUNC void func_08002DBC_6FDFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002DBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002DC0: lui         $t6, 0x60
    ctx->r14 = S32(0X60 << 16);
    // 0x08002DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002DC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002DCC: ori         $t6, $t6, 0x80
    ctx->r14 = ctx->r14 | 0X80;
    // 0x08002DD0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002DD4: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002DD8: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08002DDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002DE0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x08002DE4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08002DE8: jalr        $t9
    // 0x08002DEC: addiu       $a3, $zero, -0x2
    ctx->r7 = ADD32(0, -0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002DEC: addiu       $a3, $zero, -0x2
    ctx->r7 = ADD32(0, -0X2);
    after_0:
    // 0x08002DF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002DF4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08002DF8: lwc1        $f4, 0xD0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x08002DFC: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x08002E00: lwc1        $f6, 0xD4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x08002E04: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x08002E08: lwc1        $f8, 0xD8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x08002E0C: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x08002E10: lw          $t7, 0x38($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X38);
    // 0x08002E14: sw          $t7, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r15;
    // 0x08002E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002E1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002E20: jr          $ra
    // 0x08002E24: nop

    TRACE_RETURN()
    return;
    // 0x08002E24: nop

;}
RECOMP_FUNC void func_08000E28_6FC028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000E2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000E30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000E34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000E38: lbu         $t6, 0xD1($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD1);
    // 0x08000E3C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E40: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000E44: sh          $t6, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r14;
    // 0x08000E48: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XCCC) << 16);
    // 0x08000E4C: jalr        $t9
    // 0x08000E50: addiu       $a0, $a0, 0xCCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XCCC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000E50: addiu       $a0, $a0, 0xCCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XCCC));
    after_0:
    // 0x08000E54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000E58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000E5C: jr          $ra
    // 0x08000E60: nop

    TRACE_RETURN()
    return;
    // 0x08000E60: nop

;}
RECOMP_FUNC void func_08001F44_6FD144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001F44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001F48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001F4C: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x08001F50: lui         $t8, 0x800
    ctx->r24 = S32(RELOC_HI16(35, 0X32C0) << 16);
    // 0x08001F54: addiu       $t8, $t8, 0x32C0
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(35, 0X32C0));
    // 0x08001F58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x08001F5C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x08001F60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x08001F64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x08001F68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x08001F6C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x08001F70: sw          $v0, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r2;
    // 0x08001F74: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001F78: sw          $a1, -0x325C($at)
    MEM_W(-0X325C, ctx->r1) = ctx->r5;
    // 0x08001F7C: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x08001F80: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08001F84: lw          $t0, -0x39F4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39F4);
    // 0x08001F88: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x08001F8C: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x08001F90: lwc1        $f8, 0xC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XC);
    // 0x08001F94: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001F98: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08001F9C: nop

    // 0x08001FA0: bc1fl       L_08001FC8
    if (!c1cs) {
        // 0x08001FA4: lwc1        $f4, 0x10($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
            goto L_08001FC8;
    }
    goto skip_0;
    // 0x08001FA4: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    skip_0:
    // 0x08001FA8: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x08001FAC: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x08001FB0: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001FB4: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x08001FB8: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001FBC: b           L_08001FDC
    // 0x08001FC0: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
        goto L_08001FDC;
    // 0x08001FC0: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    // 0x08001FC4: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
L_08001FC8:
    // 0x08001FC8: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x08001FCC: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x08001FD0: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x08001FD4: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x08001FD8: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
L_08001FDC:
    // 0x08001FDC: lw          $t2, 0x64($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X64);
    // 0x08001FE0: ori         $t1, $t1, 0x220
    ctx->r9 = ctx->r9 | 0X220;
    // 0x08001FE4: sw          $t1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r9;
    // 0x08001FE8: ori         $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 | 0X4000;
    // 0x08001FEC: sw          $t3, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r11;
    // 0x08001FF0: lw          $t4, 0x28($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X28);
    // 0x08001FF4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001FF8: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001FFC: sh          $t4, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r12;
    // 0x08002000: lw          $t5, 0x30($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X30);
    // 0x08002004: sb          $t5, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = ctx->r13;
    // 0x08002008: lw          $a1, 0x2C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X2C);
    // 0x0800200C: jalr        $t9
    // 0x08002010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08002014: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002018: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x0800201C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002020: jalr        $t9
    // 0x08002024: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002024: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x08002028: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800202C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002030: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X204C) << 16);
    // 0x08002034: jalr        $t9
    // 0x08002038: addiu       $a0, $a0, 0x204C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X204C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002038: addiu       $a0, $a0, 0x204C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X204C));
    after_2:
    // 0x0800203C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002044: jr          $ra
    // 0x08002048: nop

    TRACE_RETURN()
    return;
    // 0x08002048: nop

;}
RECOMP_FUNC void func_08002820_6FDA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002820: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002824: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002828: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800282C: lh          $t6, 0xD0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XD0);
    // 0x08002830: lh          $t9, 0xD6($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XD6);
    // 0x08002834: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x08002838: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x0800283C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x08002840: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08002844: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002848: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x0800284C: lh          $t7, 0xD2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XD2);
    // 0x08002850: lh          $t8, 0xD4($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XD4);
    // 0x08002854: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002858: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x0800285C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08002860: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08002864: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x08002868: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x0800286C: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x08002870: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08002874: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08002878: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x0800287C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x08002880: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002884: jalr        $t9
    // 0x08002888: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002888: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x0800288C: bne         $v0, $zero, L_080028A4
    if (ctx->r2 != 0) {
        // 0x08002890: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(35, 0X2788) << 16);
            goto L_080028A4;
    }
    // 0x08002890: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X2788) << 16);
    // 0x08002894: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002898: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800289C: jalr        $t9
    // 0x080028A0: addiu       $a0, $a0, 0x2788
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2788));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080028A0: addiu       $a0, $a0, 0x2788
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2788));
    after_1:
L_080028A4:
    // 0x080028A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080028A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080028AC: jr          $ra
    // 0x080028B0: nop

    TRACE_RETURN()
    return;
    // 0x080028B0: nop

;}
RECOMP_FUNC void func_080001B8_6FB3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080001BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080001C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080001C4: lbu         $v0, 0xD4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD4);
    // 0x080001C8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x080001CC: beql        $v0, $zero, L_08000214
    if (ctx->r2 == 0) {
        // 0x080001D0: addiu       $t6, $zero, 0x20
        ctx->r14 = ADD32(0, 0X20);
            goto L_08000214;
    }
    goto skip_0;
    // 0x080001D0: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    skip_0:
    // 0x080001D4: beq         $v0, $zero, L_08000224
    if (ctx->r2 == 0) {
        // 0x080001D8: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08000224;
    }
    // 0x080001D8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080001DC: lbu         $a0, 0xD5($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0XD5);
    // 0x080001E0: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080001E4: jalr        $t9
    // 0x080001E8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001E8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x080001EC: beq         $v0, $zero, L_08000224
    if (ctx->r2 == 0) {
        // 0x080001F0: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08000224;
    }
    // 0x080001F0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080001F4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080001F8: addiu       $t9, $t9, 0x76C4
    ctx->r25 = ADD32(ctx->r25, 0X76C4);
    // 0x080001FC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08000200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000204: jalr        $t9
    // 0x08000208: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000208: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x0800020C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000210: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
L_08000214:
    // 0x08000214: sw          $t6, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r14;
    // 0x08000218: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x0800021C: jal         0x08000000
    // 0x08000220: lbu         $a1, 0xD5($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0XD5);
    func_08000000_6FB200(rdram, ctx);
        goto after_2;
    // 0x08000220: lbu         $a1, 0xD5($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0XD5);
    after_2:
L_08000224:
    // 0x08000224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000228: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800022C: jr          $ra
    // 0x08000230: nop

    TRACE_RETURN()
    return;
    // 0x08000230: nop

;}
RECOMP_FUNC void func_08000234_6FB434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000234: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000238: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800023C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000240: addiu       $t9, $t9, 0x3AE8
    ctx->r25 = ADD32(ctx->r25, 0X3AE8);
    // 0x08000244: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000248: jalr        $t9
    // 0x0800024C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800024C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000250: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08000254: addiu       $v1, $v1, -0x39FC
    ctx->r3 = ADD32(ctx->r3, -0X39FC);
    // 0x08000258: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0800025C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x08000260: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000264: lw          $t7, 0xA0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XA0);
    // 0x08000268: bnel        $t6, $t7, L_08000294
    if (ctx->r14 != ctx->r15) {
        // 0x0800026C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000294;
    }
    goto skip_0;
    // 0x0800026C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000270: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x08000274: swc1        $f4, 0xC0($v0)
    MEM_W(0XC0, ctx->r2) = ctx->f4.u32l;
    // 0x08000278: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x0800027C: lwc1        $f6, 0x7C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x08000280: swc1        $f6, 0xC4($t8)
    MEM_W(0XC4, ctx->r24) = ctx->f6.u32l;
    // 0x08000284: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x08000288: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    // 0x0800028C: swc1        $f8, 0xC8($t0)
    MEM_W(0XC8, ctx->r8) = ctx->f8.u32l;
    // 0x08000290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000294:
    // 0x08000294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000298: jr          $ra
    // 0x0800029C: nop

    TRACE_RETURN()
    return;
    // 0x0800029C: nop

;}
RECOMP_FUNC void func_080022E8_6FD4E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080022E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080022EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080022F0: lw          $v0, 0xE0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE0);
    // 0x080022F4: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x080022F8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x080022FC: lwc1        $f12, 0x1C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08002300: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x08002304: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002308: add.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x0800230C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08002310: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002314: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X204C) << 16);
    // 0x08002318: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x0800231C: nop

    // 0x08002320: bc1f        L_08002370
    if (!c1cs) {
        // 0x08002324: nop
    
            goto L_08002370;
    }
    // 0x08002324: nop

    // 0x08002328: sub.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x0800232C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x08002330: nop

    // 0x08002334: bc1f        L_08002370
    if (!c1cs) {
        // 0x08002338: nop
    
            goto L_08002370;
    }
    // 0x08002338: nop

    // 0x0800233C: lwc1        $f2, 0x10($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08002340: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x08002344: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08002348: add.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x0800234C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x08002350: nop

    // 0x08002354: bc1f        L_08002370
    if (!c1cs) {
        // 0x08002358: nop
    
            goto L_08002370;
    }
    // 0x08002358: nop

    // 0x0800235C: sub.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x08002360: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x08002364: nop

    // 0x08002368: bc1tl       L_0800237C
    if (c1cs) {
        // 0x0800236C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_0800237C;
    }
    goto skip_0;
    // 0x0800236C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_08002370:
    // 0x08002370: jalr        $t9
    // 0x08002374: addiu       $a0, $a0, 0x204C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X204C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002374: addiu       $a0, $a0, 0x204C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X204C));
    after_0:
    // 0x08002378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800237C:
    // 0x0800237C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002380: jr          $ra
    // 0x08002384: nop

    TRACE_RETURN()
    return;
    // 0x08002384: nop

;}
RECOMP_FUNC void func_08000980_6FBB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000988: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800098C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000990: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000994: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x08000998: addiu       $t9, $zero, 0x5A
    ctx->r25 = ADD32(0, 0X5A);
    // 0x0800099C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x080009A0: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x080009A4: bne         $t8, $zero, L_080009D4
    if (ctx->r24 != 0) {
        // 0x080009A8: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_080009D4;
    }
    // 0x080009A8: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x080009AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080009B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080009B4: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x080009B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080009BC: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    // 0x080009C0: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x080009C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X91C) << 16);
    // 0x080009C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080009CC: jalr        $t9
    // 0x080009D0: addiu       $a0, $a0, 0x91C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X91C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080009D0: addiu       $a0, $a0, 0x91C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X91C));
    after_0:
L_080009D4:
    // 0x080009D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080009D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080009DC: jr          $ra
    // 0x080009E0: nop

    TRACE_RETURN()
    return;
    // 0x080009E0: nop

;}
RECOMP_FUNC void func_080003AC_6FB5AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080003B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080003B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080003B8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x080003BC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080003C0: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x080003C4: lhu         $a0, 0xDA($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XDA);
    // 0x080003C8: jalr        $t9
    // 0x080003CC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003CC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x080003D0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080003D4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x080003D8: lhu         $t6, 0xD8($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0XD8);
    // 0x080003DC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x080003E0: bgez        $t6, L_080003F4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x080003E4: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_080003F4;
    }
    // 0x080003E4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080003E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080003EC: nop

    // 0x080003F0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_080003F4:
    // 0x080003F4: lh          $t7, 0xCA($a2)
    ctx->r15 = MEM_H(ctx->r6, 0XCA);
    // 0x080003F8: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x080003FC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x08000400: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x08000404: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000408: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x0800040C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08000410: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x08000414: swc1        $f4, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f4.u32l;
    // 0x08000418: jalr        $t9
    // 0x0800041C: lhu         $a0, 0xDA($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XDA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800041C: lhu         $a0, 0xDA($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XDA);
    after_1:
    // 0x08000420: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000424: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000428: lhu         $t0, 0xD8($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0XD8);
    // 0x0800042C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x08000430: bgez        $t0, L_08000444
    if (SIGNED(ctx->r8) >= 0) {
        // 0x08000434: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_08000444;
    }
    // 0x08000434: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000438: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800043C: nop

    // 0x08000440: add.s       $f6, $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f16.fl;
L_08000444:
    // 0x08000444: lh          $t1, 0xC8($a2)
    ctx->r9 = MEM_H(ctx->r6, 0XC8);
    // 0x08000448: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x0800044C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x08000450: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x08000454: nop

    // 0x08000458: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x0800045C: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x08000460: swc1        $f8, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f8.u32l;
    // 0x08000464: lhu         $t3, 0xDA($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0XDA);
    // 0x08000468: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x0800046C: sh          $t4, 0xDA($a2)
    MEM_H(0XDA, ctx->r6) = ctx->r12;
    // 0x08000470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000478: jr          $ra
    // 0x0800047C: nop

    TRACE_RETURN()
    return;
    // 0x0800047C: nop

;}
RECOMP_FUNC void func_080024F8_6FD6F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080024F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080024FC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002504: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002508: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800250C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08002510: jalr        $t9
    // 0x08002514: lhu         $a0, 0xD8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002514: lhu         $a0, 0xD8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD8);
    after_0:
    // 0x08002518: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x0800251C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08002520: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002524: lh          $t8, 0xD0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XD0);
    // 0x08002528: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x0800252C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x08002530: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x08002534: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x08002538: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800253C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002540: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002544: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002548: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800254C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X2578) << 16);
    // 0x08002550: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x08002554: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x08002558: bc1f        L_08002568
    if (!c1cs) {
        // 0x0800255C: swc1        $f16, 0xC($v0)
        MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
            goto L_08002568;
    }
    // 0x0800255C: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x08002560: jalr        $t9
    // 0x08002564: addiu       $a0, $a0, 0x2578
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2578));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002564: addiu       $a0, $a0, 0x2578
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2578));
    after_1:
L_08002568:
    // 0x08002568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800256C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002570: jr          $ra
    // 0x08002574: nop

    TRACE_RETURN()
    return;
    // 0x08002574: nop

;}
RECOMP_FUNC void func_080012DC_6FC4DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080012E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080012E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080012E8: lhu         $t7, 0xD4($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XD4);
    // 0x080012EC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080012F0: addiu       $a0, $zero, 0x2A0
    ctx->r4 = ADD32(0, 0X2A0);
    // 0x080012F4: beq         $t7, $zero, L_0800130C
    if (ctx->r15 == 0) {
        // 0x080012F8: lui         $a3, 0x4448
        ctx->r7 = S32(0X4448 << 16);
            goto L_0800130C;
    }
    // 0x080012F8: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x080012FC: lhu         $t8, 0x14($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X14);
    // 0x08001300: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x08001304: b           L_08001318
    // 0x08001308: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
        goto L_08001318;
    // 0x08001308: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
L_0800130C:
    // 0x0800130C: lhu         $t0, 0x14($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0X14);
    // 0x08001310: addiu       $t1, $t0, -0x8
    ctx->r9 = ADD32(ctx->r8, -0X8);
    // 0x08001314: sh          $t1, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r9;
L_08001318:
    // 0x08001318: lhu         $t2, 0x14($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X14);
    // 0x0800131C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001320: addiu       $t9, $t9, -0xAD4
    ctx->r25 = ADD32(ctx->r25, -0XAD4);
    // 0x08001324: andi        $t3, $t2, 0x1FF
    ctx->r11 = ctx->r10 & 0X1FF;
    // 0x08001328: bne         $t3, $zero, L_08001358
    if (ctx->r11 != 0) {
        // 0x0800132C: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_08001358;
    }
    // 0x0800132C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001330: jalr        $t9
    // 0x08001334: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001334: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    after_0:
    // 0x08001338: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x0800133C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001340: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x08001344: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001348: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X1368) << 16);
    // 0x0800134C: addiu       $a0, $a0, 0x1368
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X1368));
    // 0x08001350: jalr        $t9
    // 0x08001354: sh          $t4, 0x8A($t5)
    MEM_H(0X8A, ctx->r13) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001354: sh          $t4, 0x8A($t5)
    MEM_H(0X8A, ctx->r13) = ctx->r12;
    after_1:
L_08001358:
    // 0x08001358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800135C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001360: jr          $ra
    // 0x08001364: nop

    TRACE_RETURN()
    return;
    // 0x08001364: nop

;}
RECOMP_FUNC void func_08000A48_6FBC48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000A4C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08000A50: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000A54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000A58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000A5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000A60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000A64: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x08000A68: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000A6C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A70: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    // 0x08000A74: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x08000A78: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X9E4) << 16);
    // 0x08000A7C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A80: jalr        $t9
    // 0x08000A84: addiu       $a0, $a0, 0x9E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X9E4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A84: addiu       $a0, $a0, 0x9E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X9E4));
    after_0:
    // 0x08000A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000A90: jr          $ra
    // 0x08000A94: nop

    TRACE_RETURN()
    return;
    // 0x08000A94: nop

;}
RECOMP_FUNC void func_08000ADC_6FBCDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000ADC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000AE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000AE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000AE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000AEC: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000AF0: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x08000AF4: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x08000AF8: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000AFC: bne         $v0, $zero, L_08000B24
    if (ctx->r2 != 0) {
        // 0x08000B00: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000B24;
    }
    // 0x08000B00: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000B04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000B08: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08000B0C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B10: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x08000B14: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XA98) << 16);
    // 0x08000B18: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B1C: jalr        $t9
    // 0x08000B20: addiu       $a0, $a0, 0xA98
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XA98));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B20: addiu       $a0, $a0, 0xA98
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XA98));
    after_0:
L_08000B24:
    // 0x08000B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000B2C: jr          $ra
    // 0x08000B30: nop

    TRACE_RETURN()
    return;
    // 0x08000B30: nop

;}
RECOMP_FUNC void func_08000480_6FB680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000488: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800048C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08000490: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x08000494: bne         $t8, $zero, L_08000524
    if (ctx->r24 != 0) {
        // 0x08000498: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08000524;
    }
    // 0x08000498: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x0800049C: lh          $t1, 0xC8($a0)
    ctx->r9 = MEM_H(ctx->r4, 0XC8);
    // 0x080004A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080004A4: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x080004A8: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x080004AC: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x080004B0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x080004B4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080004B8: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x080004BC: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    // 0x080004C0: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x080004C4: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x080004C8: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x080004CC: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x080004D0: lh          $t2, 0xCA($a0)
    ctx->r10 = MEM_H(ctx->r4, 0XCA);
    // 0x080004D4: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x080004D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004DC: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x080004E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080004E4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080004E8: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x080004EC: lh          $t3, 0xCC($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XCC);
    // 0x080004F0: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x080004F4: nop

    // 0x080004F8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x080004FC: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    // 0x08000500: lw          $t4, -0x39F4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39F4);
    // 0x08000504: lwc1        $f4, 0xC($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XC);
    // 0x08000508: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x0800050C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x08000510: nop

    // 0x08000514: sh          $t6, 0xDC($a0)
    MEM_H(0XDC, ctx->r4) = ctx->r14;
    // 0x08000518: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X5D0) << 16);
    // 0x0800051C: jalr        $t9
    // 0x08000520: addiu       $a0, $a0, 0x5D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X5D0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000520: addiu       $a0, $a0, 0x5D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X5D0));
    after_0:
L_08000524:
    // 0x08000524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800052C: jr          $ra
    // 0x08000530: nop

    TRACE_RETURN()
    return;
    // 0x08000530: nop

;}
RECOMP_FUNC void func_08000534_6FB734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800053C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000540: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000544: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000548: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x0800054C: beq         $t6, $zero, L_08000574
    if (ctx->r14 == 0) {
        // 0x08000550: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08000574;
    }
    // 0x08000550: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000554: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x08000558: subu        $t9, $t8, $t7
    ctx->r25 = SUB32(ctx->r24, ctx->r15);
    // 0x0800055C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x08000560: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08000564: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000568: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x0800056C: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x08000570: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
L_08000574:
    // 0x08000574: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x08000578: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x0800057C: bne         $t1, $zero, L_080005C0
    if (ctx->r9 != 0) {
        // 0x08000580: sh          $t0, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r8;
            goto L_080005C0;
    }
    // 0x08000580: sh          $t0, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r8;
    // 0x08000584: lw          $t2, 0x60($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X60);
    // 0x08000588: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x0800058C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000590: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x08000594: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000598: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x0800059C: sw          $t3, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r11;
    // 0x080005A0: sh          $t4, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r12;
    // 0x080005A4: jalr        $t9
    // 0x080005A8: addiu       $a0, $zero, 0x2AE
    ctx->r4 = ADD32(0, 0X2AE);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005A8: addiu       $a0, $zero, 0x2AE
    ctx->r4 = ADD32(0, 0X2AE);
    after_0:
    // 0x080005AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080005B0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080005B4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X480) << 16);
    // 0x080005B8: jalr        $t9
    // 0x080005BC: addiu       $a0, $a0, 0x480
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X480));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080005BC: addiu       $a0, $a0, 0x480
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X480));
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
RECOMP_FUNC void func_08001908_6FCB08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001908: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x0800190C: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x08001910: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x08001914: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x08001918: lbu         $t6, 0xE1($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XE1);
    // 0x0800191C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08001920: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x08001924: addu        $t9, $t6, $a1
    ctx->r25 = ADD32(ctx->r14, ctx->r5);
    // 0x08001928: sb          $t9, 0xE1($a0)
    MEM_B(0XE1, ctx->r4) = ctx->r25;
    // 0x0800192C: addiu       $t1, $t1, -0x2058
    ctx->r9 = ADD32(ctx->r9, -0X2058);
    // 0x08001930: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x08001934: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001938: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0800193C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x08001940: lw          $t2, 0xE4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XE4);
    // 0x08001944: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08001948: lui         $at, 0xF700
    ctx->r1 = S32(0XF700 << 16);
    // 0x0800194C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x08001950: lw          $t3, 0x40($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X40);
    // 0x08001954: lui         $t5, 0x900
    ctx->r13 = S32(0X900 << 16);
    // 0x08001958: addiu       $t5, $t5, 0x4000
    ctx->r13 = ADD32(ctx->r13, 0X4000);
    // 0x0800195C: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x08001960: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x08001964: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x08001968: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x0800196C: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x08001970: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x08001974: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x08001978: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x0800197C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x08001980: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x08001984: lbu         $t0, 0xE1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XE1);
    // 0x08001988: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800198C: addiu       $t9, $t9, 0xA60
    ctx->r25 = ADD32(ctx->r25, 0XA60);
    // 0x08001990: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x08001994: lbu         $t1, 0xE0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XE0);
    // 0x08001998: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x0800199C: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x080019A0: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x080019A4: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x080019A8: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x080019AC: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x080019B0: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x080019B4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x080019B8: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x080019BC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x080019C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x080019C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080019C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080019CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080019D0: jalr        $t9
    // 0x080019D4: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080019D4: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    after_0:
    // 0x080019D8: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x080019DC: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x080019E0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x080019E4: jr          $ra
    // 0x080019E8: nop

    TRACE_RETURN()
    return;
    // 0x080019E8: nop

;}
RECOMP_FUNC void func_08000A98_6FBC98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000A9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000AA0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000AA4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000AA8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000AAC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000AB0: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x08000AB4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000AB8: bne         $v1, $zero, L_08000ACC
    if (ctx->r3 != 0) {
        // 0x08000ABC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000ACC;
    }
    // 0x08000ABC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000AC0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XC10) << 16);
    // 0x08000AC4: jalr        $t9
    // 0x08000AC8: addiu       $a0, $a0, 0xC10
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XC10));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000AC8: addiu       $a0, $a0, 0xC10
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XC10));
    after_0:
L_08000ACC:
    // 0x08000ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000AD4: jr          $ra
    // 0x08000AD8: nop

    TRACE_RETURN()
    return;
    // 0x08000AD8: nop

;}
RECOMP_FUNC void func_08000C10_6FBE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000C18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000C1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000C20: lh          $t6, 0xD0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XD0);
    // 0x08000C24: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08000C28: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08000C2C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08000C30: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08000C34: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08000C38: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000C3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000C40: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x08000C44: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08000C48: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000C4C: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x08000C50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000C54: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000C58: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x08000C5C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000C60: swc1        $f18, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f18.u32l;
    // 0x08000C64: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XBB8) << 16);
    // 0x08000C68: jalr        $t9
    // 0x08000C6C: addiu       $a0, $a0, 0xBB8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XBB8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C6C: addiu       $a0, $a0, 0xBB8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XBB8));
    after_0:
    // 0x08000C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000C74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000C78: jr          $ra
    // 0x08000C7C: nop

    TRACE_RETURN()
    return;
    // 0x08000C7C: nop

;}
RECOMP_FUNC void func_0800329C_6FE49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800329C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080032A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080032A4: jal         0x080028B4
    // 0x080032A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_080028B4_6FDAB4(rdram, ctx);
        goto after_0;
    // 0x080032A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080032AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080032B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080032B4: jr          $ra
    // 0x080032B8: nop

    TRACE_RETURN()
    return;
    // 0x080032B8: nop

;}
RECOMP_FUNC void func_0800083C_6FF26C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800083C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000840: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000844: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000848: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x0800084C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08000850: sltiu       $at, $t6, 0x17
    ctx->r1 = ctx->r14 < 0X17 ? 1 : 0;
    // 0x08000854: beq         $at, $zero, L_08000F9C
    if (ctx->r1 == 0) {
        // 0x08000858: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08000F9C;
    }
    // 0x08000858: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x0800085C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X25DC) << 16);
    // 0x08000860: addu        $at, $at, $t6
    gpr jr_addend_08000868 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08000864: lw          $t6, 0x25DC($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(36, 0X25DC));
    // 0x08000868: jr          $t6
    // 0x0800086C: nop

    switch (jr_addend_08000868 >> 2) {
        case 0: goto L_08000870; break;
        case 1: goto L_080008E4; break;
        case 2: goto L_08000930; break;
        case 3: goto L_08000960; break;
        case 4: goto L_0800098C; break;
        case 5: goto L_080009D8; break;
        case 6: goto L_08000A28; break;
        case 7: goto L_08000A70; break;
        case 8: goto L_08000ACC; break;
        case 9: goto L_08000B38; break;
        case 10: goto L_08000B84; break;
        case 11: goto L_08000BE8; break;
        case 12: goto L_08000CB8; break;
        case 13: goto L_08000CF4; break;
        case 14: goto L_08000D40; break;
        case 15: goto L_08000D94; break;
        case 16: goto L_08000DD8; break;
        case 17: goto L_08000E14; break;
        case 18: goto L_08000E58; break;
        case 19: goto L_08000EB4; break;
        case 20: goto L_08000F00; break;
        case 21: goto L_08000F34; break;
        case 22: goto L_08000F9C; break;
        default: switch_error(__func__, 0x08000868, 0x080025DC);
    }
    // 0x0800086C: nop

L_08000870:
    // 0x08000870: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000874: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08000878: jalr        $t9
    // 0x0800087C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800087C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x08000880: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x08000884: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000888: addiu       $t9, $t9, 0x3E9C
    ctx->r25 = ADD32(ctx->r25, 0X3E9C);
    // 0x0800088C: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000890: sb          $zero, 0x8($v1)
    MEM_B(0X8, ctx->r3) = 0;
    // 0x08000894: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000898: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x0800089C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x080008A0: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x080008A4: jalr        $t9
    // 0x080008A8: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080008A8: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_1:
    // 0x080008AC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x080008B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080008B4: addiu       $t9, $t9, 0x4DD8
    ctx->r25 = ADD32(ctx->r25, 0X4DD8);
    // 0x080008B8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(36, 0XFAC) << 16);
    // 0x080008BC: addiu       $a0, $a0, 0xFAC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(36, 0XFAC));
    // 0x080008C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080008C4: jalr        $t9
    // 0x080008C8: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080008C8: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    after_2:
    // 0x080008CC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x080008D0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x080008D4: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x080008D8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x080008DC: b           L_08000F9C
    // 0x080008E0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_08000F9C;
    // 0x080008E0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_080008E4:
    // 0x080008E4: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x080008E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008EC: addiu       $t9, $t9, 0x4558
    ctx->r25 = ADD32(ctx->r25, 0X4558);
    // 0x080008F0: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    // 0x080008F4: jalr        $t9
    // 0x080008F8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080008F8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_3:
    // 0x080008FC: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x08000900: beq         $t1, $zero, L_08000F9C
    if (ctx->r9 == 0) {
        // 0x08000904: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_08000F9C;
    }
    // 0x08000904: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000908: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800090C: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000910: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08000914: jalr        $t9
    // 0x08000918: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000918: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_4:
    // 0x0800091C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000920: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x08000924: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000928: b           L_08000F9C
    // 0x0800092C: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_08000F9C;
    // 0x0800092C: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_08000930:
    // 0x08000930: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000934: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08000938: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x0800093C: jalr        $t9
    // 0x08000940: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000940: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_5:
    // 0x08000944: beq         $v0, $zero, L_08000F9C
    if (ctx->r2 == 0) {
        // 0x08000948: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_08000F9C;
    }
    // 0x08000948: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x0800094C: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000950: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x08000954: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08000958: b           L_08000F9C
    // 0x0800095C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_08000F9C;
    // 0x0800095C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_08000960:
    // 0x08000960: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000964: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000968: addiu       $a0, $zero, 0x1CC
    ctx->r4 = ADD32(0, 0X1CC);
    // 0x0800096C: jalr        $t9
    // 0x08000970: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000970: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_6:
    // 0x08000974: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x08000978: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x0800097C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x08000980: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08000984: b           L_08000F9C
    // 0x08000988: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_08000F9C;
    // 0x08000988: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_0800098C:
    // 0x0800098C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000990: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000994: jalr        $t9
    // 0x08000998: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000998: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_7:
    // 0x0800099C: bne         $v0, $zero, L_08000F9C
    if (ctx->r2 != 0) {
        // 0x080009A0: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_08000F9C;
    }
    // 0x080009A0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x080009A4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080009A8: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080009AC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x080009B0: jalr        $t9
    // 0x080009B4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080009B4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_8:
    // 0x080009B8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x080009BC: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x080009C0: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x080009C4: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x080009C8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x080009CC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x080009D0: b           L_08000F9C
    // 0x080009D4: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
        goto L_08000F9C;
    // 0x080009D4: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_080009D8:
    // 0x080009D8: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x080009DC: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x080009E0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080009E4: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    // 0x080009E8: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x080009EC: bne         $v0, $zero, L_08000F9C
    if (ctx->r2 != 0) {
        // 0x080009F0: sw          $t3, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r11;
            goto L_08000F9C;
    }
    // 0x080009F0: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x080009F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009F8: sb          $zero, 0x8($v1)
    MEM_B(0X8, ctx->r3) = 0;
    // 0x080009FC: addiu       $t9, $t9, 0x3E9C
    ctx->r25 = ADD32(ctx->r25, 0X3E9C);
    // 0x08000A00: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x08000A04: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08000A08: jalr        $t9
    // 0x08000A0C: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000A0C: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    after_9:
    // 0x08000A10: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000A14: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x08000A18: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x08000A1C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08000A20: b           L_08000F9C
    // 0x08000A24: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_08000F9C;
    // 0x08000A24: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_08000A28:
    // 0x08000A28: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000A2C: lbu         $t6, 0x8($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X8);
    // 0x08000A30: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000A34: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000A38: beq         $t6, $zero, L_08000F9C
    if (ctx->r14 == 0) {
        // 0x08000A3C: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_08000F9C;
    }
    // 0x08000A3C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x08000A40: jalr        $t9
    // 0x08000A44: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000A44: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_10:
    // 0x08000A48: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000A4C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08000A50: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x08000A54: sb          $t7, 0x7AE0($at)
    MEM_B(0X7AE0, ctx->r1) = ctx->r15;
    // 0x08000A58: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x08000A5C: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x08000A60: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x08000A64: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08000A68: b           L_08000F9C
    // 0x08000A6C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
        goto L_08000F9C;
    // 0x08000A6C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_08000A70:
    // 0x08000A70: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000A74: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000A78: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x08000A7C: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08000A80: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x08000A84: beq         $a0, $zero, L_08000F9C
    if (ctx->r4 == 0) {
        // 0x08000A88: sw          $t3, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r11;
            goto L_08000F9C;
    }
    // 0x08000A88: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x08000A8C: lw          $t4, -0x39FC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39FC);
    // 0x08000A90: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000A94: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
    // 0x08000A98: lw          $t5, 0x5C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X5C);
    // 0x08000A9C: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x08000AA0: sh          $zero, 0x0($t5)
    MEM_H(0X0, ctx->r13) = 0;
    // 0x08000AA4: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x08000AA8: sh          $zero, 0x18($t6)
    MEM_H(0X18, ctx->r14) = 0;
    // 0x08000AAC: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x08000AB0: lhu         $t9, 0x18($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X18);
    // 0x08000AB4: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
    // 0x08000AB8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x08000ABC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x08000AC0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08000AC4: b           L_08000F9C
    // 0x08000AC8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_08000F9C;
    // 0x08000AC8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_08000ACC:
    // 0x08000ACC: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000AD0: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
    // 0x08000AD4: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x08000AD8: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x08000ADC: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000AE0: lhu         $a2, 0x16($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X16);
    // 0x08000AE4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000AE8: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000AEC: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x08000AF0: andi        $t3, $a2, 0x3FF
    ctx->r11 = ctx->r6 & 0X3FF;
    // 0x08000AF4: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x08000AF8: lw          $t4, -0x39FC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39FC);
    // 0x08000AFC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x08000B00: sh          $t3, 0x94($t4)
    MEM_H(0X94, ctx->r12) = ctx->r11;
    // 0x08000B04: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000B08: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x08000B0C: bne         $v0, $zero, L_08000F9C
    if (ctx->r2 != 0) {
        // 0x08000B10: sw          $t5, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r13;
            goto L_08000F9C;
    }
    // 0x08000B10: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x08000B14: jalr        $t9
    // 0x08000B18: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000B18: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_11:
    // 0x08000B1C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000B20: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x08000B24: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x08000B28: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x08000B2C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08000B30: b           L_08000F9C
    // 0x08000B34: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_08000F9C;
    // 0x08000B34: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_08000B38:
    // 0x08000B38: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000B3C: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
    // 0x08000B40: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X2638) << 16);
    // 0x08000B44: lwc1        $f4, 0x2638($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(36, 0X2638));
    // 0x08000B48: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x08000B4C: lui         $at, 0x4324
    ctx->r1 = S32(0X4324 << 16);
    // 0x08000B50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000B54: swc1        $f4, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f4.u32l;
    // 0x08000B58: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x08000B5C: lui         $at, 0xC330
    ctx->r1 = S32(0XC330 << 16);
    // 0x08000B60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000B64: swc1        $f6, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f6.u32l;
    // 0x08000B68: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x08000B6C: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000B70: swc1        $f8, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f8.u32l;
    // 0x08000B74: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x08000B78: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08000B7C: b           L_08000F9C
    // 0x08000B80: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_08000F9C;
    // 0x08000B80: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_08000B84:
    // 0x08000B84: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000B88: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000B8C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x08000B90: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x08000B94: bne         $v0, $zero, L_08000F9C
    if (ctx->r2 != 0) {
        // 0x08000B98: sw          $t9, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r25;
            goto L_08000F9C;
    }
    // 0x08000B98: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x08000B9C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000BA0: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000BA4: jalr        $t9
    // 0x08000BA8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000BA8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_12:
    // 0x08000BAC: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000BB0: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08000BB4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000BB8: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08000BBC: jalr        $t9
    // 0x08000BC0: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000BC0: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    after_13:
    // 0x08000BC4: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08000BC8: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x08000BCC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000BD0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08000BD4: sb          $t6, 0xDB($t7)
    MEM_B(0XDB, ctx->r15) = ctx->r14;
    // 0x08000BD8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x08000BDC: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x08000BE0: b           L_08000F9C
    // 0x08000BE4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_08000F9C;
    // 0x08000BE4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_08000BE8:
    // 0x08000BE8: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000BEC: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
    // 0x08000BF0: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x08000BF4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X2640) << 16);
    // 0x08000BF8: ldc1        $f18, 0x2640($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(36, 0X2640));
    // 0x08000BFC: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x08000C00: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000C04: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x08000C08: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08000C0C: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08000C10: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000C14: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x08000C18: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x08000C1C: jalr        $t9
    // 0x08000C20: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000C20: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_14:
    // 0x08000C24: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000C28: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000C2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000C30: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
    // 0x08000C34: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x08000C38: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x08000C3C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000C40: lwc1        $f8, 0x28($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X28);
    // 0x08000C44: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x08000C48: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000C4C: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x08000C50: addiu       $a0, $zero, 0x26C
    ctx->r4 = ADD32(0, 0X26C);
    // 0x08000C54: bc1fl       L_08000FA0
    if (!c1cs) {
        // 0x08000C58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000FA0;
    }
    goto skip_0;
    // 0x08000C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000C5C: jalr        $t9
    // 0x08000C60: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08000C60: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_15:
    // 0x08000C64: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000C68: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08000C6C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000C70: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08000C74: jalr        $t9
    // 0x08000C78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08000C78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x08000C7C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000C80: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000C84: jalr        $t9
    // 0x08000C88: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000C88: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_17:
    // 0x08000C8C: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08000C90: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x08000C94: lw          $t3, -0x39FC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39FC);
    // 0x08000C98: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x08000C9C: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000CA0: sb          $zero, 0xDB($t3)
    MEM_B(0XDB, ctx->r11) = 0;
    // 0x08000CA4: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x08000CA8: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x08000CAC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08000CB0: b           L_08000F9C
    // 0x08000CB4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
        goto L_08000F9C;
    // 0x08000CB4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_08000CB8:
    // 0x08000CB8: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000CBC: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000CC0: addiu       $a0, $zero, 0x1CD
    ctx->r4 = ADD32(0, 0X1CD);
    // 0x08000CC4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000CC8: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x08000CCC: bne         $v0, $zero, L_08000F9C
    if (ctx->r2 != 0) {
        // 0x08000CD0: sw          $t7, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r15;
            goto L_08000F9C;
    }
    // 0x08000CD0: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x08000CD4: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000CD8: jalr        $t9
    // 0x08000CDC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08000CDC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_18:
    // 0x08000CE0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000CE4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x08000CE8: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x08000CEC: b           L_08000F9C
    // 0x08000CF0: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_08000F9C;
    // 0x08000CF0: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_08000CF4:
    // 0x08000CF4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000CF8: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000CFC: jalr        $t9
    // 0x08000D00: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08000D00: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_19:
    // 0x08000D04: bne         $v0, $zero, L_08000F9C
    if (ctx->r2 != 0) {
        // 0x08000D08: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_08000F9C;
    }
    // 0x08000D08: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x08000D0C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000D10: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000D14: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x08000D18: jalr        $t9
    // 0x08000D1C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08000D1C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_20:
    // 0x08000D20: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x08000D24: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x08000D28: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000D2C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x08000D30: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x08000D34: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08000D38: b           L_08000F9C
    // 0x08000D3C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_08000F9C;
    // 0x08000D3C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_08000D40:
    // 0x08000D40: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000D44: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000D48: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    // 0x08000D4C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000D50: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x08000D54: bne         $v0, $zero, L_08000F9C
    if (ctx->r2 != 0) {
        // 0x08000D58: sw          $t5, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r13;
            goto L_08000F9C;
    }
    // 0x08000D58: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x08000D5C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000D60: jalr        $t9
    // 0x08000D64: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08000D64: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_21:
    // 0x08000D68: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000D6C: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000D70: jalr        $t9
    // 0x08000D74: addiu       $a0, $zero, 0x1CE
    ctx->r4 = ADD32(0, 0X1CE);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08000D74: addiu       $a0, $zero, 0x1CE
    ctx->r4 = ADD32(0, 0X1CE);
    after_22:
    // 0x08000D78: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000D7C: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x08000D80: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x08000D84: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x08000D88: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08000D8C: b           L_08000F9C
    // 0x08000D90: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_08000F9C;
    // 0x08000D90: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_08000D94:
    // 0x08000D94: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000D98: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000D9C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08000DA0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000DA4: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x08000DA8: bne         $v0, $zero, L_08000F9C
    if (ctx->r2 != 0) {
        // 0x08000DAC: sw          $t1, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r9;
            goto L_08000F9C;
    }
    // 0x08000DAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x08000DB0: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000DB4: jalr        $t9
    // 0x08000DB8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08000DB8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_23:
    // 0x08000DBC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000DC0: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x08000DC4: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x08000DC8: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x08000DCC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000DD0: b           L_08000F9C
    // 0x08000DD4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_08000F9C;
    // 0x08000DD4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_08000DD8:
    // 0x08000DD8: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000DDC: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
    // 0x08000DE0: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x08000DE4: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000DE8: lhu         $t5, 0x16($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X16);
    // 0x08000DEC: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x08000DF0: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
    // 0x08000DF4: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000DF8: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x08000DFC: bne         $v0, $zero, L_08000F9C
    if (ctx->r2 != 0) {
        // 0x08000E00: sw          $t7, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r15;
            goto L_08000F9C;
    }
    // 0x08000E00: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x08000E04: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x08000E08: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x08000E0C: b           L_08000F9C
    // 0x08000E10: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_08000F9C;
    // 0x08000E10: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_08000E14:
    // 0x08000E14: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000E18: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000E1C: jalr        $t9
    // 0x08000E20: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08000E20: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_24:
    // 0x08000E24: bne         $v0, $zero, L_08000F9C
    if (ctx->r2 != 0) {
        // 0x08000E28: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_08000F9C;
    }
    // 0x08000E28: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x08000E2C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000E30: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000E34: addiu       $a0, $zero, 0x1CF
    ctx->r4 = ADD32(0, 0X1CF);
    // 0x08000E38: jalr        $t9
    // 0x08000E3C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08000E3C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_25:
    // 0x08000E40: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x08000E44: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000E48: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x08000E4C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000E50: b           L_08000F9C
    // 0x08000E54: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_08000F9C;
    // 0x08000E54: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_08000E58:
    // 0x08000E58: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000E5C: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000E60: jalr        $t9
    // 0x08000E64: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08000E64: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_26:
    // 0x08000E68: bne         $v0, $zero, L_08000F9C
    if (ctx->r2 != 0) {
        // 0x08000E6C: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_08000F9C;
    }
    // 0x08000E6C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x08000E70: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000E74: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000E78: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x08000E7C: jalr        $t9
    // 0x08000E80: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08000E80: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_27:
    // 0x08000E84: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000E88: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000E8C: jalr        $t9
    // 0x08000E90: addiu       $a0, $zero, 0x17C
    ctx->r4 = ADD32(0, 0X17C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08000E90: addiu       $a0, $zero, 0x17C
    ctx->r4 = ADD32(0, 0X17C);
    after_28:
    // 0x08000E94: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x08000E98: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x08000E9C: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000EA0: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x08000EA4: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x08000EA8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08000EAC: b           L_08000F9C
    // 0x08000EB0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
        goto L_08000F9C;
    // 0x08000EB0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_08000EB4:
    // 0x08000EB4: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000EB8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000EBC: addiu       $a0, $zero, 0x99
    ctx->r4 = ADD32(0, 0X99);
    // 0x08000EC0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000EC4: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x08000EC8: bne         $v0, $zero, L_08000F9C
    if (ctx->r2 != 0) {
        // 0x08000ECC: sw          $t7, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r15;
            goto L_08000F9C;
    }
    // 0x08000ECC: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x08000ED0: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000ED4: jalr        $t9
    // 0x08000ED8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08000ED8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_29:
    // 0x08000EDC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000EE0: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000EE4: jalr        $t9
    // 0x08000EE8: addiu       $a0, $zero, 0x1D0
    ctx->r4 = ADD32(0, 0X1D0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08000EE8: addiu       $a0, $zero, 0x1D0
    ctx->r4 = ADD32(0, 0X1D0);
    after_30:
    // 0x08000EEC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000EF0: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x08000EF4: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x08000EF8: b           L_08000F9C
    // 0x08000EFC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_08000F9C;
    // 0x08000EFC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_08000F00:
    // 0x08000F00: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000F04: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000F08: jalr        $t9
    // 0x08000F0C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08000F0C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_31:
    // 0x08000F10: bne         $v0, $zero, L_08000F9C
    if (ctx->r2 != 0) {
        // 0x08000F14: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_08000F9C;
    }
    // 0x08000F14: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x08000F18: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000F1C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x08000F20: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x08000F24: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x08000F28: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08000F2C: b           L_08000F9C
    // 0x08000F30: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_08000F9C;
    // 0x08000F30: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_08000F34:
    // 0x08000F34: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000F38: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000F3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x08000F40: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F44: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x08000F48: bne         $v0, $zero, L_08000F9C
    if (ctx->r2 != 0) {
        // 0x08000F4C: sw          $t5, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r13;
            goto L_08000F9C;
    }
    // 0x08000F4C: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x08000F50: addiu       $t9, $t9, 0x7470
    ctx->r25 = ADD32(ctx->r25, 0X7470);
    // 0x08000F54: jalr        $t9
    // 0x08000F58: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08000F58: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_32:
    // 0x08000F5C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000F60: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
    // 0x08000F64: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x08000F68: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08000F6C: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x08000F70: lhu         $t7, 0x16($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X16);
    // 0x08000F74: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F78: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x08000F7C: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08000F80: sh          $t7, 0x94($t8)
    MEM_H(0X94, ctx->r24) = ctx->r15;
    // 0x08000F84: jalr        $t9
    // 0x08000F88: sb          $zero, 0x7AE0($at)
    MEM_B(0X7AE0, ctx->r1) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x08000F88: sb          $zero, 0x7AE0($at)
    MEM_B(0X7AE0, ctx->r1) = 0;
    after_33:
    // 0x08000F8C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000F90: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x08000F94: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08000F98: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_08000F9C:
    // 0x08000F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000FA0:
    // 0x08000FA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000FA4: jr          $ra
    // 0x08000FA8: nop

    TRACE_RETURN()
    return;
    // 0x08000FA8: nop

;}
RECOMP_FUNC void func_08001820_700250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001820: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001824: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001828: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800182C: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08001830: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001834: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08001838: beq         $v0, $zero, L_08001860
    if (ctx->r2 == 0) {
        // 0x0800183C: addiu       $t6, $zero, 0x220
        ctx->r14 = ADD32(0, 0X220);
            goto L_08001860;
    }
    // 0x0800183C: addiu       $t6, $zero, 0x220
    ctx->r14 = ADD32(0, 0X220);
    // 0x08001840: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001844: beq         $v0, $at, L_080018C8
    if (ctx->r2 == ctx->r1) {
        // 0x08001848: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080018C8;
    }
    // 0x08001848: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800184C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001850: beq         $v0, $at, L_08001904
    if (ctx->r2 == ctx->r1) {
        // 0x08001854: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08001904;
    }
    // 0x08001854: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001858: b           L_08001928
    // 0x0800185C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001928;
    // 0x0800185C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001860:
    // 0x08001860: addiu       $t7, $zero, 0x317
    ctx->r15 = ADD32(0, 0X317);
    // 0x08001864: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001868: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x0800186C: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x08001870: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001874: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x08001878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800187C: jalr        $t9
    // 0x08001880: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001880: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08001884: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X267C) << 16);
    // 0x08001888: lwc1        $f4, 0x267C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(36, 0X267C));
    // 0x0800188C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08001890: lui         $at, 0x4324
    ctx->r1 = S32(0X4324 << 16);
    // 0x08001894: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001898: lui         $at, 0xC339
    ctx->r1 = S32(0XC339 << 16);
    // 0x0800189C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080018A0: addiu       $t8, $zero, 0x216
    ctx->r24 = ADD32(0, 0X216);
    // 0x080018A4: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x080018A8: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x080018AC: sh          $t8, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r24;
    // 0x080018B0: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x080018B4: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    // 0x080018B8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x080018BC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x080018C0: b           L_08001924
    // 0x080018C4: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_08001924;
    // 0x080018C4: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_080018C8:
    // 0x080018C8: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080018CC: jalr        $t9
    // 0x080018D0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080018D0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x080018D4: beq         $v0, $zero, L_08001924
    if (ctx->r2 == 0) {
        // 0x080018D8: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_08001924;
    }
    // 0x080018D8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080018DC: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080018E0: addiu       $t9, $t9, 0x54A8
    ctx->r25 = ADD32(ctx->r25, 0X54A8);
    // 0x080018E4: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x080018E8: jalr        $t9
    // 0x080018EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080018EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x080018F0: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x080018F4: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x080018F8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080018FC: b           L_08001924
    // 0x08001900: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
        goto L_08001924;
    // 0x08001900: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_08001904:
    // 0x08001904: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08001908: jalr        $t9
    // 0x0800190C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800190C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x08001910: beq         $v0, $zero, L_08001924
    if (ctx->r2 == 0) {
        // 0x08001914: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08001924;
    }
    // 0x08001914: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001918: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x0800191C: jalr        $t9
    // 0x08001920: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001920: nop

    after_4:
L_08001924:
    // 0x08001924: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001928:
    // 0x08001928: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800192C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001930: jr          $ra
    // 0x08001934: nop

    TRACE_RETURN()
    return;
    // 0x08001934: nop

;}
RECOMP_FUNC void func_0800078C_6FF1BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800078C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000790: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000794: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000798: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800079C: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x080007A0: lui         $t8, 0xFC56
    ctx->r24 = S32(0XFC56 << 16);
    // 0x080007A4: lui         $t9, 0x1FFC
    ctx->r25 = S32(0X1FFC << 16);
    // 0x080007A8: addiu       $t7, $t7, -0x2580
    ctx->r15 = ADD32(ctx->r15, -0X2580);
    // 0x080007AC: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x080007B0: ori         $t9, $t9, 0xF3F8
    ctx->r25 = ctx->r25 | 0XF3F8;
    // 0x080007B4: ori         $t8, $t8, 0x7E04
    ctx->r24 = ctx->r24 | 0X7E04;
    // 0x080007B8: lui         $t0, 0xFB00
    ctx->r8 = S32(0XFB00 << 16);
    // 0x080007BC: sw          $t6, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->r14;
    // 0x080007C0: sw          $t7, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r15;
    // 0x080007C4: sw          $t8, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r24;
    // 0x080007C8: sw          $t9, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r25;
    // 0x080007CC: sw          $t0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r8;
    // 0x080007D0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x080007D4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x080007D8: andi        $t4, $a2, 0xFF
    ctx->r12 = ctx->r6 & 0XFF;
    // 0x080007DC: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x080007E0: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x080007E4: sll         $t3, $t2, 24
    ctx->r11 = S32(ctx->r10 << 24);
    // 0x080007E8: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x080007EC: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x080007F0: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x080007F4: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x080007F8: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x080007FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000800: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000804: lui         $t4, 0xB800
    ctx->r12 = S32(0XB800 << 16);
    // 0x08000808: addiu       $t9, $t9, 0x620
    ctx->r25 = ADD32(ctx->r25, 0X620);
    // 0x0800080C: subu        $a1, $s0, $s0
    ctx->r5 = SUB32(ctx->r16, ctx->r16);
    // 0x08000810: sw          $t2, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r10;
    // 0x08000814: sw          $t4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r12;
    // 0x08000818: sw          $zero, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = 0;
    // 0x0800081C: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x08000820: jalr        $t9
    // 0x08000824: addiu       $a0, $a0, 0xC8
    ctx->r4 = ADD32(ctx->r4, 0XC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000824: addiu       $a0, $a0, 0xC8
    ctx->r4 = ADD32(ctx->r4, 0XC8);
    after_0:
    // 0x08000828: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800082C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000830: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000834: jr          $ra
    // 0x08000838: nop

    TRACE_RETURN()
    return;
    // 0x08000838: nop

;}
RECOMP_FUNC void func_08001FE8_700A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001FE8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08001FEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001FF0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08001FF4: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08001FF8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08001FFC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08002000: beq         $v0, $zero, L_0800201C
    if (ctx->r2 == 0) {
        // 0x08002004: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_0800201C;
    }
    // 0x08002004: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002008: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800200C: beq         $v0, $at, L_080020E0
    if (ctx->r2 == ctx->r1) {
        // 0x08002010: addiu       $v1, $a0, 0xD0
        ctx->r3 = ADD32(ctx->r4, 0XD0);
            goto L_080020E0;
    }
    // 0x08002010: addiu       $v1, $a0, 0xD0
    ctx->r3 = ADD32(ctx->r4, 0XD0);
    // 0x08002014: b           L_08002180
    // 0x08002018: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08002180;
    // 0x08002018: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_0800201C:
    // 0x0800201C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002020: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08002024: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08002028: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0800202C: jalr        $t9
    // 0x08002030: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002030: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_0:
    // 0x08002034: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002038: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x0800203C: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x08002040: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002044: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08002048: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800204C: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x08002050: addiu       $t8, $zero, 0x220
    ctx->r24 = ADD32(0, 0X220);
    // 0x08002054: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
    // 0x08002058: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800205C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x08002060: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08002064: jalr        $t9
    // 0x08002068: sh          $t0, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002068: sh          $t0, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r8;
    after_1:
    // 0x0800206C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x08002070: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x08002074: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x08002078: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x0800207C: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x08002080: sb          $t1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r9;
    // 0x08002084: addiu       $t2, $zero, 0xFA
    ctx->r10 = ADD32(0, 0XFA);
    // 0x08002088: addiu       $v1, $a0, 0xD0
    ctx->r3 = ADD32(ctx->r4, 0XD0);
    // 0x0800208C: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x08002090: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08002094: lwc1        $f0, 0xC0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC0);
    // 0x08002098: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x0800209C: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x080020A0: nop

    // 0x080020A4: bc1fl       L_080020C8
    if (!c1cs) {
        // 0x080020A8: cvt.d.s     $f10, $f0
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
            goto L_080020C8;
    }
    goto skip_0;
    // 0x080020A8: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    skip_0:
    // 0x080020AC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x080020B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080020B4: nop

    // 0x080020B8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x080020BC: b           L_080020D0
    // 0x080020C0: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
        goto L_080020D0;
    // 0x080020C0: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x080020C4: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
L_080020C8:
    // 0x080020C8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080020CC: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
L_080020D0:
    // 0x080020D0: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x080020D4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x080020D8: b           L_0800217C
    // 0x080020DC: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_0800217C;
    // 0x080020DC: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_080020E0:
    // 0x080020E0: lhu         $t5, 0x16($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X16);
    // 0x080020E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080020E8: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080020EC: addiu       $t6, $t5, 0x80
    ctx->r14 = ADD32(ctx->r13, 0X80);
    // 0x080020F0: sh          $t6, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r14;
    // 0x080020F4: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x080020F8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x080020FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002100: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002104: jalr        $t9
    // 0x08002108: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002108: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x0800210C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08002110: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x08002114: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08002118: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0800211C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08002120: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002124: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x08002128: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800212C: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x08002130: nop

    // 0x08002134: bc1f        L_08002174
    if (!c1cs) {
        // 0x08002138: nop
    
            goto L_08002174;
    }
    // 0x08002138: nop

    // 0x0800213C: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x08002140: swc1        $f2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f2.u32l;
    // 0x08002144: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x08002148: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0800214C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X26B8) << 16);
    // 0x08002150: ldc1        $f10, 0x26B8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(36, 0X26B8));
    // 0x08002154: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08002158: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x0800215C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x08002160: addiu       $t8, $t7, -0x3
    ctx->r24 = ADD32(ctx->r15, -0X3);
    // 0x08002164: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x08002168: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x0800216C: b           L_0800217C
    // 0x08002170: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
        goto L_0800217C;
    // 0x08002170: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
L_08002174:
    // 0x08002174: jalr        $t9
    // 0x08002178: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002178: nop

    after_3:
L_0800217C:
    // 0x0800217C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002180:
    // 0x08002180: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08002184: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08002188: jr          $ra
    // 0x0800218C: nop

    TRACE_RETURN()
    return;
    // 0x0800218C: nop

;}
RECOMP_FUNC void func_08001068_6FFA98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001068: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0800106C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001070: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08001074: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x08001078: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x0800107C: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x08001080: sltiu       $at, $t7, 0xC
    ctx->r1 = ctx->r15 < 0XC ? 1 : 0;
    // 0x08001084: beq         $at, $zero, L_080017E8
    if (ctx->r1 == 0) {
        // 0x08001088: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_080017E8;
    }
    // 0x08001088: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x0800108C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X2648) << 16);
    // 0x08001090: addu        $at, $at, $t7
    gpr jr_addend_08001098 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x08001094: lw          $t7, 0x2648($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(36, 0X2648));
    // 0x08001098: jr          $t7
    // 0x0800109C: nop

    switch (jr_addend_08001098 >> 2) {
        case 0: goto L_080010A0; break;
        case 1: goto L_08001204; break;
        case 2: goto L_080012A4; break;
        case 3: goto L_0800133C; break;
        case 4: goto L_08001370; break;
        case 5: goto L_08001454; break;
        case 6: goto L_08001540; break;
        case 7: goto L_08001628; break;
        case 8: goto L_08001654; break;
        case 9: goto L_0800170C; break;
        case 10: goto L_080017BC; break;
        case 11: goto L_080017E8; break;
        default: switch_error(__func__, 0x08001098, 0x08002648);
    }
    // 0x0800109C: nop

L_080010A0:
    // 0x080010A0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x080010A4: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x080010A8: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x080010AC: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x080010B0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x080010B4: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x080010B8: jalr        $v0
    // 0x080010BC: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080010BC: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    after_0:
    // 0x080010C0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080010C4: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x080010C8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080010CC: jalr        $t9
    // 0x080010D0: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080010D0: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    after_1:
    // 0x080010D4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080010D8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080010DC: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x080010E0: jalr        $t9
    // 0x080010E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080010E4: nop

    after_2:
    // 0x080010E8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080010EC: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x080010F0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x080010F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080010F8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080010FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001100: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001104: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001108: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800110C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08001110: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001114: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001118: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x0800111C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x08001120: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08001124: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x08001128: jalr        $t9
    // 0x0800112C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800112C: nop

    after_3:
    // 0x08001130: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001134: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001138: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x0800113C: jalr        $t9
    // 0x08001140: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001140: nop

    after_4:
    // 0x08001144: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001148: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x0800114C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08001150: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001154: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001158: lui         $v1, 0x8001
    ctx->r3 = S32(0X8001 << 16);
    // 0x0800115C: addiu       $v1, $v1, 0x2628
    ctx->r3 = ADD32(ctx->r3, 0X2628);
    // 0x08001160: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08001164: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001168: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x0800116C: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08001170: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08001174: jalr        $v1
    // 0x08001178: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_5;
    // 0x08001178: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_5:
    // 0x0800117C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08001180: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x08001184: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08001188: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0800118C: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x08001190: beq         $v1, $zero, L_080017E8
    if (ctx->r3 == 0) {
        // 0x08001194: sw          $t8, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r24;
            goto L_080017E8;
    }
    // 0x08001194: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x08001198: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x0800119C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080011A0: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x080011A4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x080011A8: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x080011AC: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x080011B0: lw          $t3, -0x39F4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39F4);
    // 0x080011B4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x080011B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080011BC: lwc1        $f16, 0x8($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X8);
    // 0x080011C0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080011C4: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    // 0x080011C8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x080011CC: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x080011D0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080011D4: jalr        $t9
    // 0x080011D8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080011D8: nop

    after_6:
    // 0x080011DC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080011E0: lui         $a1, 0x44A7
    ctx->r5 = S32(0X44A7 << 16);
    // 0x080011E4: lui         $a2, 0x43AA
    ctx->r6 = S32(0X43AA << 16);
    // 0x080011E8: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x080011EC: ori         $a1, $a1, 0x2000
    ctx->r5 = ctx->r5 | 0X2000;
    // 0x080011F0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080011F4: jalr        $t9
    // 0x080011F8: lui         $a3, 0xC383
    ctx->r7 = S32(0XC383 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080011F8: lui         $a3, 0xC383
    ctx->r7 = S32(0XC383 << 16);
    after_7:
    // 0x080011FC: b           L_080017EC
    // 0x08001200: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
        goto L_080017EC;
    // 0x08001200: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
L_08001204:
    // 0x08001204: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x08001208: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800120C: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001210: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x08001214: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001218: jalr        $t9
    // 0x0800121C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800121C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_8:
    // 0x08001220: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001224: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08001228: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x0800122C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001230: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001234: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001238: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800123C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08001240: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001244: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x08001248: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x0800124C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x08001250: jalr        $t9
    // 0x08001254: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001254: nop

    after_9:
    // 0x08001258: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0800125C: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x08001260: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08001264: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001268: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x0800126C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08001270: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x08001274: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08001278: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x0800127C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08001280: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    // 0x08001284: beq         $v1, $zero, L_080017E8
    if (ctx->r3 == 0) {
        // 0x08001288: swc1        $f8, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
            goto L_080017E8;
    }
    // 0x08001288: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x0800128C: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x08001290: addiu       $t7, $zero, 0x96
    ctx->r15 = ADD32(0, 0X96);
    // 0x08001294: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x08001298: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x0800129C: b           L_080017E8
    // 0x080012A0: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
        goto L_080017E8;
    // 0x080012A0: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
L_080012A4:
    // 0x080012A4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x080012A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080012AC: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080012B0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x080012B4: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080012B8: jalr        $t9
    // 0x080012BC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080012BC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x080012C0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080012C4: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x080012C8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080012CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080012D0: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080012D4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080012D8: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080012DC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x080012E0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080012E4: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x080012E8: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x080012EC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x080012F0: jalr        $t9
    // 0x080012F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080012F4: nop

    after_11:
    // 0x080012F8: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080012FC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001300: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001304: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001308: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x0800130C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08001310: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08001314: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08001318: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x0800131C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001320: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x08001324: beq         $v1, $zero, L_080017E8
    if (ctx->r3 == 0) {
        // 0x08001328: swc1        $f16, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
            goto L_080017E8;
    }
    // 0x08001328: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x0800132C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x08001330: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08001334: b           L_080017E8
    // 0x08001338: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
        goto L_080017E8;
    // 0x08001338: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
L_0800133C:
    // 0x0800133C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001340: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08001344: jalr        $t9
    // 0x08001348: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08001348: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_12:
    // 0x0800134C: beq         $v0, $zero, L_080017E8
    if (ctx->r2 == 0) {
        // 0x08001350: lw          $s0, 0x40($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X40);
            goto L_080017E8;
    }
    // 0x08001350: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x08001354: lw          $t2, 0xD0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD0);
    // 0x08001358: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x0800135C: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001360: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08001364: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x08001368: b           L_080017E8
    // 0x0800136C: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
        goto L_080017E8;
    // 0x0800136C: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
L_08001370:
    // 0x08001370: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x08001374: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08001378: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x0800137C: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x08001380: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08001384: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x08001388: jalr        $v0
    // 0x0800138C: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x0800138C: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    after_13:
    // 0x08001390: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001394: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08001398: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x0800139C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080013A0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x080013A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080013A8: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080013AC: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080013B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080013B4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x080013B8: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080013BC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080013C0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080013C4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x080013C8: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x080013CC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x080013D0: jalr        $t9
    // 0x080013D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080013D4: nop

    after_14:
    // 0x080013D8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080013DC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080013E0: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x080013E4: jalr        $t9
    // 0x080013E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080013E8: nop

    after_15:
    // 0x080013EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080013F0: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x080013F4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x080013F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080013FC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08001400: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001404: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001408: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0800140C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001410: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08001414: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001418: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0800141C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08001420: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08001424: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08001428: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x0800142C: jalr        $t9
    // 0x08001430: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08001430: nop

    after_16:
    // 0x08001434: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08001438: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x0800143C: bne         $v0, $zero, L_080017E8
    if (ctx->r2 != 0) {
        // 0x08001440: sw          $t5, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r13;
            goto L_080017E8;
    }
    // 0x08001440: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x08001444: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x08001448: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x0800144C: b           L_080017E8
    // 0x08001450: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_080017E8;
    // 0x08001450: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
L_08001454:
    // 0x08001454: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x08001458: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x0800145C: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08001460: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x08001464: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08001468: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x0800146C: jalr        $v0
    // 0x08001470: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_17;
    // 0x08001470: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    after_17:
    // 0x08001474: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001478: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x0800147C: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x08001480: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001484: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x08001488: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800148C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001490: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001494: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001498: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x0800149C: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080014A0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080014A4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080014A8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x080014AC: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x080014B0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x080014B4: jalr        $t9
    // 0x080014B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x080014B8: nop

    after_18:
    // 0x080014BC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080014C0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080014C4: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x080014C8: jalr        $t9
    // 0x080014CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x080014CC: nop

    after_19:
    // 0x080014D0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080014D4: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x080014D8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x080014DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080014E0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080014E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080014E8: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080014EC: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080014F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080014F4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x080014F8: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080014FC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001500: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08001504: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08001508: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x0800150C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x08001510: jalr        $t9
    // 0x08001514: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08001514: nop

    after_20:
    // 0x08001518: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800151C: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08001520: jalr        $t9
    // 0x08001524: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08001524: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_21:
    // 0x08001528: beql        $v0, $zero, L_080017EC
    if (ctx->r2 == 0) {
        // 0x0800152C: lw          $s0, 0x40($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X40);
            goto L_080017EC;
    }
    goto skip_0;
    // 0x0800152C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    skip_0:
    // 0x08001530: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x08001534: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08001538: b           L_080017E8
    // 0x0800153C: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
        goto L_080017E8;
    // 0x0800153C: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
L_08001540:
    // 0x08001540: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x08001544: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001548: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x0800154C: lui         $a1, 0x448D
    ctx->r5 = S32(0X448D << 16);
    // 0x08001550: lui         $a3, 0xC39C
    ctx->r7 = S32(0XC39C << 16);
    // 0x08001554: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08001558: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x0800155C: lui         $a2, 0x437E
    ctx->r6 = S32(0X437E << 16);
    // 0x08001560: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001564: jalr        $t9
    // 0x08001568: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08001568: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_22:
    // 0x0800156C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001570: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08001574: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001578: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800157C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001580: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08001584: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x08001588: jalr        $t9
    // 0x0800158C: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x0800158C: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_23:
    // 0x08001590: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08001594: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08001598: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0800159C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x080015A0: jalr        $v0
    // 0x080015A4: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_24;
    // 0x080015A4: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    after_24:
    // 0x080015A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080015AC: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080015B0: lui         $a1, 0x44B1
    ctx->r5 = S32(0X44B1 << 16);
    // 0x080015B4: lui         $a3, 0xC3B1
    ctx->r7 = S32(0XC3B1 << 16);
    // 0x080015B8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x080015BC: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x080015C0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080015C4: jalr        $t9
    // 0x080015C8: lui         $a2, 0x4364
    ctx->r6 = S32(0X4364 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x080015C8: lui         $a2, 0x4364
    ctx->r6 = S32(0X4364 << 16);
    after_25:
    // 0x080015CC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080015D0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080015D4: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    // 0x080015D8: jalr        $t9
    // 0x080015DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x080015DC: nop

    after_26:
    // 0x080015E0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080015E4: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x080015E8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080015EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080015F0: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080015F4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080015F8: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080015FC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08001600: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001604: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08001608: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x0800160C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08001610: jalr        $t9
    // 0x08001614: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08001614: nop

    after_27:
    // 0x08001618: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x0800161C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08001620: b           L_080017E8
    // 0x08001624: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
        goto L_080017E8;
    // 0x08001624: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
L_08001628:
    // 0x08001628: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800162C: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08001630: jalr        $t9
    // 0x08001634: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08001634: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_28:
    // 0x08001638: beq         $v0, $zero, L_080017E8
    if (ctx->r2 == 0) {
        // 0x0800163C: lw          $s0, 0x40($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X40);
            goto L_080017E8;
    }
    // 0x0800163C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x08001640: lw          $t3, 0xD0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD0);
    // 0x08001644: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001648: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x0800164C: b           L_080017E8
    // 0x08001650: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
        goto L_080017E8;
    // 0x08001650: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_08001654:
    // 0x08001654: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001658: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x0800165C: jalr        $t9
    // 0x08001660: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08001660: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_29:
    // 0x08001664: beq         $v0, $zero, L_080017E8
    if (ctx->r2 == 0) {
        // 0x08001668: lw          $s0, 0x40($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X40);
            goto L_080017E8;
    }
    // 0x08001668: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0800166C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001670: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001674: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001678: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0800167C: jalr        $t9
    // 0x08001680: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08001680: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_30:
    // 0x08001684: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001688: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x0800168C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08001690: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001694: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X2678) << 16);
    // 0x08001698: lwc1        $f10, 0x2678($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(36, 0X2678));
    // 0x0800169C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080016A0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080016A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080016A8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080016AC: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080016B0: lui         $at, 0x432E
    ctx->r1 = S32(0X432E << 16);
    // 0x080016B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080016B8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x080016BC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080016C0: lui         $at, 0xC2FE
    ctx->r1 = S32(0XC2FE << 16);
    // 0x080016C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080016C8: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080016CC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080016D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080016D4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x080016D8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080016DC: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x080016E0: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080016E4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080016E8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x080016EC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x080016F0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x080016F4: jalr        $t9
    // 0x080016F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x080016F8: nop

    after_31:
    // 0x080016FC: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x08001700: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08001704: b           L_080017E8
    // 0x08001708: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
        goto L_080017E8;
    // 0x08001708: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
L_0800170C:
    // 0x0800170C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001710: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001714: jalr        $t9
    // 0x08001718: addiu       $a0, $zero, 0x6F
    ctx->r4 = ADD32(0, 0X6F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08001718: addiu       $a0, $zero, 0x6F
    ctx->r4 = ADD32(0, 0X6F);
    after_32:
    // 0x0800171C: beq         $v0, $zero, L_080017E8
    if (ctx->r2 == 0) {
        // 0x08001720: lw          $s0, 0x40($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X40);
            goto L_080017E8;
    }
    // 0x08001720: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x08001724: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001728: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x0800172C: lui         $a1, 0x44A1
    ctx->r5 = S32(0X44A1 << 16);
    // 0x08001730: lui         $a2, 0x4374
    ctx->r6 = S32(0X4374 << 16);
    // 0x08001734: lui         $a3, 0xC293
    ctx->r7 = S32(0XC293 << 16);
    // 0x08001738: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x0800173C: ori         $a2, $a2, 0x4CCD
    ctx->r6 = ctx->r6 | 0X4CCD;
    // 0x08001740: ori         $a1, $a1, 0x6000
    ctx->r5 = ctx->r5 | 0X6000;
    // 0x08001744: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001748: jalr        $t9
    // 0x0800174C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x0800174C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_33:
    // 0x08001750: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001754: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001758: lui         $a1, 0x4495
    ctx->r5 = S32(0X4495 << 16);
    // 0x0800175C: ori         $a1, $a1, 0xA000
    ctx->r5 = ctx->r5 | 0XA000;
    // 0x08001760: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001764: lui         $a2, 0x434C
    ctx->r6 = S32(0X434C << 16);
    // 0x08001768: jalr        $t9
    // 0x0800176C: lui         $a3, 0xC2FE
    ctx->r7 = S32(0XC2FE << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x0800176C: lui         $a3, 0xC2FE
    ctx->r7 = S32(0XC2FE << 16);
    after_34:
    // 0x08001770: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001774: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001778: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0800177C: jalr        $t9
    // 0x08001780: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x08001780: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_35:
    // 0x08001784: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001788: addiu       $t9, $t9, 0x25F0
    ctx->r25 = ADD32(ctx->r25, 0X25F0);
    // 0x0800178C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001790: lui         $a2, 0x800
    ctx->r6 = S32(RELOC_HI16(36, 0X2370) << 16);
    // 0x08001794: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x08001798: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x0800179C: addiu       $a2, $a2, 0x2370
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(36, 0X2370));
    // 0x080017A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080017A4: jalr        $t9
    // 0x080017A8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x080017A8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_36:
    // 0x080017AC: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x080017B0: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x080017B4: b           L_080017E8
    // 0x080017B8: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
        goto L_080017E8;
    // 0x080017B8: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
L_080017BC:
    // 0x080017BC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x080017C0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080017C4: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x080017C8: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080017CC: jalr        $t9
    // 0x080017D0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x080017D0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_37:
    // 0x080017D4: bnel        $v0, $zero, L_080017EC
    if (ctx->r2 != 0) {
        // 0x080017D8: lw          $s0, 0x40($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X40);
            goto L_080017EC;
    }
    goto skip_1;
    // 0x080017D8: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    skip_1:
    // 0x080017DC: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x080017E0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x080017E4: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
L_080017E8:
    // 0x080017E8: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
L_080017EC:
    // 0x080017EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080017F0: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x080017F4: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x080017F8: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080017FC: beql        $a0, $zero, L_08001810
    if (ctx->r4 == 0) {
        // 0x08001800: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08001810;
    }
    goto skip_2;
    // 0x08001800: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x08001804: jalr        $t9
    // 0x08001808: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08001808: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    after_38:
    // 0x0800180C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08001810:
    // 0x08001810: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08001814: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08001818: jr          $ra
    // 0x0800181C: nop

    TRACE_RETURN()
    return;
    // 0x0800181C: nop

;}
RECOMP_FUNC void func_08000410_6FEE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000410: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000414: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000418: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800041C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000420: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08000424: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000428: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x0800042C: jal         0x0800078C
    // 0x08000430: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_0800078C_6FF1BC(rdram, ctx);
        goto after_0;
    // 0x08000430: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x08000434: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000438: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x0800043C: jalr        $t9
    // 0x08000440: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000440: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x08000444: beq         $v0, $zero, L_08000480
    if (ctx->r2 == 0) {
        // 0x08000448: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08000480;
    }
    // 0x08000448: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800044C: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08000450: jalr        $t9
    // 0x08000454: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000454: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x08000458: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0800045C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000460: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x08000464: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000468: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(36, 0X490) << 16);
    // 0x0800046C: addiu       $a0, $a0, 0x490
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(36, 0X490));
    // 0x08000470: addiu       $v0, $v0, 0xC0
    ctx->r2 = ADD32(ctx->r2, 0XC0);
    // 0x08000474: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x08000478: jalr        $t9
    // 0x0800047C: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800047C: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    after_3:
L_08000480:
    // 0x08000480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000488: jr          $ra
    // 0x0800048C: nop

    TRACE_RETURN()
    return;
    // 0x0800048C: nop

;}
RECOMP_FUNC void func_0800235C_700D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800235C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08002360: jr          $ra
    // 0x08002364: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08002364: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08001AA8_7004D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001AA8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x08001AAC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x08001AB0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x08001AB4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x08001AB8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08001ABC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x08001AC0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x08001AC4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x08001AC8: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x08001ACC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x08001AD0: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x08001AD4: beq         $at, $zero, L_08001DC8
    if (ctx->r1 == 0) {
        // 0x08001AD8: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08001DC8;
    }
    // 0x08001AD8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08001ADC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X2684) << 16);
    // 0x08001AE0: addu        $at, $at, $t6
    gpr jr_addend_08001AE8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08001AE4: lw          $t6, 0x2684($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(36, 0X2684));
    // 0x08001AE8: jr          $t6
    // 0x08001AEC: nop

    switch (jr_addend_08001AE8 >> 2) {
        case 0: goto L_08001AF0; break;
        case 1: goto L_08001B20; break;
        case 2: goto L_08001C50; break;
        case 3: goto L_08001C88; break;
        case 4: goto L_08001D90; break;
        default: switch_error(__func__, 0x08001AE8, 0x08002684);
    }
    // 0x08001AEC: nop

L_08001AF0:
    // 0x08001AF0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001AF4: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08001AF8: jalr        $t9
    // 0x08001AFC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001AFC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x08001B00: beq         $v0, $zero, L_08001DC8
    if (ctx->r2 == 0) {
        // 0x08001B04: addiu       $s0, $s2, 0xD0
        ctx->r16 = ADD32(ctx->r18, 0XD0);
            goto L_08001DC8;
    }
    // 0x08001B04: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x08001B08: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x08001B0C: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x08001B10: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    // 0x08001B14: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08001B18: b           L_08001DC8
    // 0x08001B1C: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
        goto L_08001DC8;
    // 0x08001B1C: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
L_08001B20:
    // 0x08001B20: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x08001B24: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x08001B28: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x08001B2C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x08001B30: addiu       $t2, $t1, -0x14
    ctx->r10 = ADD32(ctx->r9, -0X14);
    // 0x08001B34: bgez        $t2, L_08001B40
    if (SIGNED(ctx->r10) >= 0) {
        // 0x08001B38: sw          $t2, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r10;
            goto L_08001B40;
    }
    // 0x08001B38: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x08001B3C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
L_08001B40:
    // 0x08001B40: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x08001B44: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(36, 0X1FE8) << 16);
    // 0x08001B48: addiu       $a1, $a1, 0x1FE8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(36, 0X1FE8));
    // 0x08001B4C: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08001B50: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x08001B54: beq         $v1, $zero, L_08001C30
    if (ctx->r3 == 0) {
        // 0x08001B58: sw          $t4, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r12;
            goto L_08001C30;
    }
    // 0x08001B58: sw          $t4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r12;
    // 0x08001B5C: sw          $t5, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r13;
    // 0x08001B60: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001B64: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x08001B68: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x08001B6C: addiu       $v0, $v0, 0x71A8
    ctx->r2 = ADD32(ctx->r2, 0X71A8);
    // 0x08001B70: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X2698) << 16);
    // 0x08001B74: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x08001B78: ldc1        $f20, 0x2698($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(36, 0X2698));
    // 0x08001B7C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x08001B80: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x08001B84: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
L_08001B88:
    // 0x08001B88: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x08001B8C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001B90: jalr        $v0
    // 0x08001B94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08001B94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x08001B98: beq         $v0, $zero, L_08001C0C
    if (ctx->r2 == 0) {
        // 0x08001B9C: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_08001C0C;
    }
    // 0x08001B9C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x08001BA0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001BA4: addiu       $t6, $zero, 0x2D
    ctx->r14 = ADD32(0, 0X2D);
    // 0x08001BA8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001BAC: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08001BB0: jalr        $t9
    // 0x08001BB4: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001BB4: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_2:
    // 0x08001BB8: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x08001BBC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X26A0) << 16);
    // 0x08001BC0: sw          $v0, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r2;
    // 0x08001BC4: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x08001BC8: lwc1        $f4, 0x26A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(36, 0X26A0));
    // 0x08001BCC: lui         $at, 0x4326
    ctx->r1 = S32(0X4326 << 16);
    // 0x08001BD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001BD4: lw          $v1, 0x18($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X18);
    // 0x08001BD8: lui         $at, 0xC383
    ctx->r1 = S32(0XC383 << 16);
    // 0x08001BDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001BE0: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x08001BE4: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x08001BE8: bne         $s1, $zero, L_08001C00
    if (ctx->r17 != 0) {
        // 0x08001BEC: swc1        $f8, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
            goto L_08001C00;
    }
    // 0x08001BEC: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x08001BF0: cvt.s.d     $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.d); 
    ctx->f10.fl = CVT_S_D(ctx->f20.d);
    // 0x08001BF4: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x08001BF8: b           L_08001C0C
    // 0x08001BFC: swc1        $f10, 0xC0($t0)
    MEM_W(0XC0, ctx->r8) = ctx->f10.u32l;
        goto L_08001C0C;
    // 0x08001BFC: swc1        $f10, 0xC0($t0)
    MEM_W(0XC0, ctx->r8) = ctx->f10.u32l;
L_08001C00:
    // 0x08001C00: cvt.s.d     $f16, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.d); 
    ctx->f16.fl = CVT_S_D(ctx->f22.d);
    // 0x08001C04: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x08001C08: swc1        $f16, 0xC0($t1)
    MEM_W(0XC0, ctx->r9) = ctx->f16.u32l;
L_08001C0C:
    // 0x08001C0C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08001C10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001C14: bnel        $s1, $at, L_08001B88
    if (ctx->r17 != ctx->r1) {
        // 0x08001C18: lw          $v0, 0x3C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X3C);
            goto L_08001B88;
    }
    goto skip_0;
    // 0x08001C18: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x08001C1C: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x08001C20: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x08001C24: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x08001C28: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08001C2C: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
L_08001C30:
    // 0x08001C30: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x08001C34: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001C38: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x08001C3C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08001C40: jalr        $t9
    // 0x08001C44: andi        $a2, $a0, 0xFFFF
    ctx->r6 = ctx->r4 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001C44: andi        $a2, $a0, 0xFFFF
    ctx->r6 = ctx->r4 & 0XFFFF;
    after_3:
    // 0x08001C48: b           L_08001DCC
    // 0x08001C4C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_08001DCC;
    // 0x08001C4C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_08001C50:
    // 0x08001C50: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x08001C54: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x08001C58: addiu       $t6, $zero, 0x1C2
    ctx->r14 = ADD32(0, 0X1C2);
    // 0x08001C5C: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x08001C60: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x08001C64: bne         $v0, $zero, L_08001DC8
    if (ctx->r2 != 0) {
        // 0x08001C68: sw          $t5, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r13;
            goto L_08001DC8;
    }
    // 0x08001C68: sw          $t5, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r13;
    // 0x08001C6C: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
    // 0x08001C70: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C74: sw          $t7, -0x3320($at)
    MEM_W(-0X3320, ctx->r1) = ctx->r15;
    // 0x08001C78: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x08001C7C: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08001C80: b           L_08001DC8
    // 0x08001C84: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
        goto L_08001DC8;
    // 0x08001C84: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
L_08001C88:
    // 0x08001C88: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x08001C8C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x08001C90: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08001C94: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x08001C98: beq         $v1, $zero, L_08001CB0
    if (ctx->r3 == 0) {
        // 0x08001C9C: sw          $t1, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r9;
            goto L_08001CB0;
    }
    // 0x08001C9C: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
    // 0x08001CA0: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x08001CA4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08001CA8: b           L_08001DC8
    // 0x08001CAC: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
        goto L_08001DC8;
    // 0x08001CAC: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
L_08001CB0:
    // 0x08001CB0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x08001CB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001CB8: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08001CBC: slti        $at, $v0, 0x12D
    ctx->r1 = SIGNED(ctx->r2) < 0X12D ? 1 : 0;
    // 0x08001CC0: bnel        $at, $zero, L_08001CF4
    if (ctx->r1 != 0) {
        // 0x08001CC4: slti        $at, $v0, 0x5B
        ctx->r1 = SIGNED(ctx->r2) < 0X5B ? 1 : 0;
            goto L_08001CF4;
    }
    goto skip_1;
    // 0x08001CC4: slti        $at, $v0, 0x5B
    ctx->r1 = SIGNED(ctx->r2) < 0X5B ? 1 : 0;
    skip_1:
    // 0x08001CC8: jalr        $t9
    // 0x08001CCC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001CCC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x08001CD0: bne         $v0, $zero, L_08001DC8
    if (ctx->r2 != 0) {
        // 0x08001CD4: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_08001DC8;
    }
    // 0x08001CD4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001CD8: lui         $a2, 0x3F86
    ctx->r6 = S32(0X3F86 << 16);
    // 0x08001CDC: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x08001CE0: jal         0x08001DE8
    // 0x08001CE4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_08001DE8_700818(rdram, ctx);
        goto after_5;
    // 0x08001CE4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_5:
    // 0x08001CE8: b           L_08001DCC
    // 0x08001CEC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_08001DCC;
    // 0x08001CEC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x08001CF0: slti        $at, $v0, 0x5B
    ctx->r1 = SIGNED(ctx->r2) < 0X5B ? 1 : 0;
L_08001CF4:
    // 0x08001CF4: bne         $at, $zero, L_08001D28
    if (ctx->r1 != 0) {
        // 0x08001CF8: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001D28;
    }
    // 0x08001CF8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001CFC: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08001D00: jalr        $t9
    // 0x08001D04: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001D04: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_6:
    // 0x08001D08: bne         $v0, $zero, L_08001DC8
    if (ctx->r2 != 0) {
        // 0x08001D0C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_08001DC8;
    }
    // 0x08001D0C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001D10: lui         $a2, 0x3F83
    ctx->r6 = S32(0X3F83 << 16);
    // 0x08001D14: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x08001D18: jal         0x08001DE8
    // 0x08001D1C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_08001DE8_700818(rdram, ctx);
        goto after_7;
    // 0x08001D1C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_7:
    // 0x08001D20: b           L_08001DCC
    // 0x08001D24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_08001DCC;
    // 0x08001D24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_08001D28:
    // 0x08001D28: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x08001D2C: bne         $at, $zero, L_08001D60
    if (ctx->r1 != 0) {
        // 0x08001D30: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001D60;
    }
    // 0x08001D30: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001D34: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001D38: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08001D3C: jalr        $t9
    // 0x08001D40: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001D40: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_8:
    // 0x08001D44: bne         $v0, $zero, L_08001DC8
    if (ctx->r2 != 0) {
        // 0x08001D48: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_08001DC8;
    }
    // 0x08001D48: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001D4C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x08001D50: jal         0x08001DE8
    // 0x08001D54: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_08001DE8_700818(rdram, ctx);
        goto after_9;
    // 0x08001D54: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_9:
    // 0x08001D58: b           L_08001DCC
    // 0x08001D5C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_08001DCC;
    // 0x08001D5C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_08001D60:
    // 0x08001D60: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08001D64: jalr        $t9
    // 0x08001D68: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08001D68: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_10:
    // 0x08001D6C: bne         $v0, $zero, L_08001DC8
    if (ctx->r2 != 0) {
        // 0x08001D70: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_08001DC8;
    }
    // 0x08001D70: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001D74: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x08001D78: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x08001D7C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08001D80: jal         0x08001DE8
    // 0x08001D84: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    func_08001DE8_700818(rdram, ctx);
        goto after_11;
    // 0x08001D84: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    after_11:
    // 0x08001D88: b           L_08001DCC
    // 0x08001D8C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_08001DCC;
    // 0x08001D8C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_08001D90:
    // 0x08001D90: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x08001D94: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x08001D98: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001D9C: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08001DA0: slti        $v1, $v0, 0x3D
    ctx->r3 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x08001DA4: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x08001DA8: bne         $v1, $zero, L_08001DC8
    if (ctx->r3 != 0) {
        // 0x08001DAC: sw          $t4, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r12;
            goto L_08001DC8;
    }
    // 0x08001DAC: sw          $t4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r12;
    // 0x08001DB0: jalr        $t9
    // 0x08001DB4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08001DB4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_12:
    // 0x08001DB8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001DBC: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08001DC0: jalr        $t9
    // 0x08001DC4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08001DC4: nop

    after_13:
L_08001DC8:
    // 0x08001DC8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_08001DCC:
    // 0x08001DCC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08001DD0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x08001DD4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001DD8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x08001DDC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x08001DE0: jr          $ra
    // 0x08001DE4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x08001DE4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_08000324_6FED54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000324: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000328: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x0800032C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000330: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000334: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000338: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x0800033C: addiu       $t9, $t9, 0x3B14
    ctx->r25 = ADD32(ctx->r25, 0X3B14);
    // 0x08000340: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000344: jalr        $t9
    // 0x08000348: addiu       $a0, $zero, 0x1E4
    ctx->r4 = ADD32(0, 0X1E4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000348: addiu       $a0, $zero, 0x1E4
    ctx->r4 = ADD32(0, 0X1E4);
    after_0:
    // 0x0800034C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000350: addiu       $t6, $zero, 0x220
    ctx->r14 = ADD32(0, 0X220);
    // 0x08000354: addiu       $t7, $zero, 0x1AF
    ctx->r15 = ADD32(0, 0X1AF);
    // 0x08000358: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800035C: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08000360: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x08000364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000368: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800036C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000370: jalr        $t9
    // 0x08000374: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000374: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000378: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800037C: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000384: jalr        $t9
    // 0x08000388: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000388: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    after_2:
    // 0x0800038C: addiu       $t8, $s0, 0xC8
    ctx->r24 = ADD32(ctx->r16, 0XC8);
    // 0x08000390: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000394: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08000398: sw          $t0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r8;
    // 0x0800039C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080003A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080003A4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080003A8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080003AC: jal         0x0800078C
    // 0x080003B0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_0800078C_6FF1BC(rdram, ctx);
        goto after_3;
    // 0x080003B0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
    // 0x080003B4: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x080003B8: sb          $t1, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r9;
    // 0x080003BC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X25D8) << 16);
    // 0x080003C0: lwc1        $f4, 0x25D8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(36, 0X25D8));
    // 0x080003C4: lui         $at, 0x4326
    ctx->r1 = S32(0X4326 << 16);
    // 0x080003C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080003CC: lui         $at, 0xC383
    ctx->r1 = S32(0XC383 << 16);
    // 0x080003D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080003D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080003D8: addiu       $t2, $zero, 0x2FC
    ctx->r10 = ADD32(0, 0X2FC);
    // 0x080003DC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080003E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(36, 0X410) << 16);
    // 0x080003E4: sh          $t2, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r10;
    // 0x080003E8: addiu       $a0, $a0, 0x410
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(36, 0X410));
    // 0x080003EC: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x080003F0: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    // 0x080003F4: jalr        $t9
    // 0x080003F8: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080003F8: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    after_4:
    // 0x080003FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000400: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000404: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000408: jr          $ra
    // 0x0800040C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x0800040C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000FAC_6FF9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000FAC: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000FB0: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08000FB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000FB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000FBC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000FC0: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08000FC4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000FC8: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000FCC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FD0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08000FD4: sw          $t8, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r24;
    // 0x08000FD8: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08000FDC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000FE0: jalr        $t9
    // 0x08000FE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000FE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000FE8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000FEC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FF0: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x08000FF4: addiu       $v1, $a0, 0xD0
    ctx->r3 = ADD32(ctx->r4, 0XD0);
    // 0x08000FF8: bne         $v0, $zero, L_08001018
    if (ctx->r2 != 0) {
        // 0x08000FFC: sw          $v0, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->r2;
            goto L_08001018;
    }
    // 0x08000FFC: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x08001000: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001004: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08001008: jalr        $t9
    // 0x0800100C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800100C: nop

    after_1:
    // 0x08001010: b           L_0800105C
    // 0x08001014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_0800105C;
    // 0x08001014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001018:
    // 0x08001018: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x0800101C: lw          $a1, 0x10($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X10);
    // 0x08001020: jalr        $t9
    // 0x08001024: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001024: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_2:
    // 0x08001028: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x0800102C: lw          $t1, -0x39D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39D8);
    // 0x08001030: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08001034: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001038: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800103C: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x08001040: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001044: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(36, 0X1068) << 16);
    // 0x08001048: sb          $t0, 0x64($t1)
    MEM_B(0X64, ctx->r9) = ctx->r8;
    // 0x0800104C: addiu       $a0, $a0, 0x1068
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(36, 0X1068));
    // 0x08001050: jalr        $t9
    // 0x08001054: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001054: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    after_3:
    // 0x08001058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800105C:
    // 0x0800105C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001060: jr          $ra
    // 0x08001064: nop

    TRACE_RETURN()
    return;
    // 0x08001064: nop

;}
RECOMP_FUNC void func_08001938_700368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001938: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800193C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001940: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08001944: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08001948: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x0800194C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08001950: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08001954: beq         $v0, $zero, L_0800197C
    if (ctx->r2 == 0) {
        // 0x08001958: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_0800197C;
    }
    // 0x08001958: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800195C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001960: beq         $v0, $at, L_08001A04
    if (ctx->r2 == ctx->r1) {
        // 0x08001964: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08001A04;
    }
    // 0x08001964: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001968: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x0800196C: beql        $v0, $at, L_08001A4C
    if (ctx->r2 == ctx->r1) {
        // 0x08001970: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_08001A4C;
    }
    goto skip_0;
    // 0x08001970: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    skip_0:
    // 0x08001974: b           L_08001A98
    // 0x08001978: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001A98;
    // 0x08001978: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800197C:
    // 0x0800197C: addiu       $t9, $t9, 0x3A24
    ctx->r25 = ADD32(ctx->r25, 0X3A24);
    // 0x08001980: jalr        $t9
    // 0x08001984: addiu       $a0, $zero, 0x1E4
    ctx->r4 = ADD32(0, 0X1E4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001984: addiu       $a0, $zero, 0x1E4
    ctx->r4 = ADD32(0, 0X1E4);
    after_0:
    // 0x08001988: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800198C: addiu       $t9, $t9, 0x3B14
    ctx->r25 = ADD32(ctx->r25, 0X3B14);
    // 0x08001990: jalr        $t9
    // 0x08001994: addiu       $a0, $zero, 0x2B8
    ctx->r4 = ADD32(0, 0X2B8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001994: addiu       $a0, $zero, 0x2B8
    ctx->r4 = ADD32(0, 0X2B8);
    after_1:
    // 0x08001998: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800199C: addiu       $t6, $zero, 0x221
    ctx->r14 = ADD32(0, 0X221);
    // 0x080019A0: addiu       $t7, $zero, 0x318
    ctx->r15 = ADD32(0, 0X318);
    // 0x080019A4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080019A8: sw          $t6, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r14;
    // 0x080019AC: sh          $t7, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r15;
    // 0x080019B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080019B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080019B8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080019BC: jalr        $t9
    // 0x080019C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080019C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x080019C4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X2680) << 16);
    // 0x080019C8: lwc1        $f4, 0x2680($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(36, 0X2680));
    // 0x080019CC: lui         $at, 0x432E
    ctx->r1 = S32(0X432E << 16);
    // 0x080019D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080019D4: lui         $at, 0xC2FE
    ctx->r1 = S32(0XC2FE << 16);
    // 0x080019D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080019DC: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x080019E0: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x080019E4: addiu       $v0, $s1, 0xD0
    ctx->r2 = ADD32(ctx->r17, 0XD0);
    // 0x080019E8: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x080019EC: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x080019F0: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x080019F4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x080019F8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x080019FC: b           L_08001A94
    // 0x08001A00: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_08001A94;
    // 0x08001A00: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_08001A04:
    // 0x08001A04: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08001A08: jalr        $t9
    // 0x08001A0C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001A0C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_3:
    // 0x08001A10: beq         $v0, $zero, L_08001A94
    if (ctx->r2 == 0) {
        // 0x08001A14: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08001A94;
    }
    // 0x08001A14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001A18: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001A1C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001A20: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08001A24: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001A28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001A2C: jalr        $t9
    // 0x08001A30: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001A30: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x08001A34: addiu       $v0, $s1, 0xD0
    ctx->r2 = ADD32(ctx->r17, 0XD0);
    // 0x08001A38: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x08001A3C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08001A40: b           L_08001A94
    // 0x08001A44: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
        goto L_08001A94;
    // 0x08001A44: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x08001A48: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_08001A4C:
    // 0x08001A4C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001A50: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08001A54: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x08001A58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001A5C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08001A60: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
    // 0x08001A64: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001A68: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001A6C: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x08001A70: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08001A74: addiu       $t5, $t4, 0x80
    ctx->r13 = ADD32(ctx->r12, 0X80);
    // 0x08001A78: sh          $t5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r13;
    // 0x08001A7C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x08001A80: nop

    // 0x08001A84: bc1fl       L_08001A98
    if (!c1cs) {
        // 0x08001A88: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001A98;
    }
    goto skip_1;
    // 0x08001A88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08001A8C: jalr        $t9
    // 0x08001A90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001A90: nop

    after_5:
L_08001A94:
    // 0x08001A94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001A98:
    // 0x08001A98: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08001A9C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08001AA0: jr          $ra
    // 0x08001AA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08001AA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08000000_6FEA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000004: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x08000008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800000C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08000010: addiu       $v0, $v0, 0x3E40
    ctx->r2 = ADD32(ctx->r2, 0X3E40);
    // 0x08000014: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08000018: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x0800001C: jalr        $v0
    // 0x08000020: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08000020: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x08000024: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x08000028: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0800002C: jalr        $v0
    // 0x08000030: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08000030: nop

    after_1:
    // 0x08000034: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08000038: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x0800003C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x08000040: jalr        $v1
    // 0x08000044: addiu       $a0, $zero, 0x99
    ctx->r4 = ADD32(0, 0X99);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x08000044: addiu       $a0, $zero, 0x99
    ctx->r4 = ADD32(0, 0X99);
    after_2:
    // 0x08000048: beq         $v0, $zero, L_080000C0
    if (ctx->r2 == 0) {
        // 0x0800004C: lw          $v1, 0x20($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X20);
            goto L_080000C0;
    }
    // 0x0800004C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x08000050: jalr        $v1
    // 0x08000054: addiu       $a0, $zero, 0xC3
    ctx->r4 = ADD32(0, 0XC3);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x08000054: addiu       $a0, $zero, 0xC3
    ctx->r4 = ADD32(0, 0XC3);
    after_3:
    // 0x08000058: bne         $v0, $zero, L_080000A8
    if (ctx->r2 != 0) {
        // 0x0800005C: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_080000A8;
    }
    // 0x0800005C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08000060: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000064: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x08000068: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(36, 0X0) << 16);
    // 0x0800006C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(36, 0X0));
    // 0x08000070: jalr        $t9
    // 0x08000074: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000074: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    after_4:
    // 0x08000078: beq         $v0, $zero, L_080000A8
    if (ctx->r2 == 0) {
        // 0x0800007C: addiu       $t6, $zero, 0x46
        ctx->r14 = ADD32(0, 0X46);
            goto L_080000A8;
    }
    // 0x0800007C: addiu       $t6, $zero, 0x46
    ctx->r14 = ADD32(0, 0X46);
    // 0x08000080: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000084: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08000088: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800008C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08000090: jalr        $t9
    // 0x08000094: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000094: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    after_5:
    // 0x08000098: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0800009C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080000A0: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x080000A4: sw          $t7, 0xD0($v1)
    MEM_W(0XD0, ctx->r3) = ctx->r15;
L_080000A8:
    // 0x080000A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000AC: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x080000B0: jalr        $t9
    // 0x080000B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080000B4: nop

    after_6:
    // 0x080000B8: b           L_080001A0
    // 0x080000BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080001A0;
    // 0x080000BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080000C0:
    // 0x080000C0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x080000C4: addiu       $v0, $v0, 0x71A8
    ctx->r2 = ADD32(ctx->r2, 0X71A8);
    // 0x080000C8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(36, 0X324) << 16);
    // 0x080000CC: addiu       $a1, $a1, 0x324
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(36, 0X324));
    // 0x080000D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x080000D4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080000D8: jalr        $v0
    // 0x080000DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x080000DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x080000E0: beq         $v0, $zero, L_0800010C
    if (ctx->r2 == 0) {
        // 0x080000E4: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_0800010C;
    }
    // 0x080000E4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x080000E8: addiu       $t8, $zero, 0x2D
    ctx->r24 = ADD32(0, 0X2D);
    // 0x080000EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080000F0: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x080000F4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080000F8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x080000FC: jalr        $t9
    // 0x08000100: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000100: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_8:
    // 0x08000104: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x08000108: sw          $v0, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r2;
L_0800010C:
    // 0x0800010C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08000110: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(36, 0X1820) << 16);
    // 0x08000114: addiu       $a1, $a1, 0x1820
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(36, 0X1820));
    // 0x08000118: addiu       $v1, $a0, 0xD0
    ctx->r3 = ADD32(ctx->r4, 0XD0);
    // 0x0800011C: sw          $a3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r7;
    // 0x08000120: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08000124: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x08000128: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800012C: jalr        $t9
    // 0x08000130: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000130: nop

    after_9:
    // 0x08000134: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x08000138: addiu       $t0, $zero, 0x2D
    ctx->r8 = ADD32(0, 0X2D);
    // 0x0800013C: beq         $v0, $zero, L_08000168
    if (ctx->r2 == 0) {
        // 0x08000140: sw          $v0, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->r2;
            goto L_08000168;
    }
    // 0x08000140: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x08000144: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000148: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x0800014C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000150: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x08000154: jalr        $t9
    // 0x08000158: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000158: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_10:
    // 0x0800015C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x08000160: lw          $t2, 0x14($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X14);
    // 0x08000164: sw          $v0, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r2;
L_08000168:
    // 0x08000168: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x0800016C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x08000170: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x08000174: lui         $t5, 0x800
    ctx->r13 = S32(RELOC_HI16(36, 0X1AC) << 16);
    // 0x08000178: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800017C: addiu       $t3, $zero, 0x4E20
    ctx->r11 = ADD32(0, 0X4E20);
    // 0x08000180: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000184: addiu       $t5, $t5, 0x1AC
    ctx->r13 = ADD32(ctx->r13, (int16_t)RELOC_LO16(36, 0X1AC));
    // 0x08000188: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x0800018C: addiu       $a0, $a0, 0x218C
    ctx->r4 = ADD32(ctx->r4, 0X218C);
    // 0x08000190: sw          $t3, 0xC0($t4)
    MEM_W(0XC0, ctx->r12) = ctx->r11;
    // 0x08000194: jalr        $t9
    // 0x08000198: sw          $t5, 0xBC($t4)
    MEM_W(0XBC, ctx->r12) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000198: sw          $t5, 0xBC($t4)
    MEM_W(0XBC, ctx->r12) = ctx->r13;
    after_11:
    // 0x0800019C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080001A0:
    // 0x080001A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080001A4: jr          $ra
    // 0x080001A8: nop

    TRACE_RETURN()
    return;
    // 0x080001A8: nop

;}
RECOMP_FUNC void func_080001AC_6FEBDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080001B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080001B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x080001B8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080001BC: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x080001C0: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x080001C4: beq         $at, $zero, L_08000314
    if (ctx->r1 == 0) {
        // 0x080001C8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_08000314;
    }
    // 0x080001C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x080001CC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X25C4) << 16);
    // 0x080001D0: addu        $at, $at, $t7
    gpr jr_addend_080001D8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x080001D4: lw          $t7, 0x25C4($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(36, 0X25C4));
    // 0x080001D8: jr          $t7
    // 0x080001DC: nop

    switch (jr_addend_080001D8 >> 2) {
        case 0: goto L_080001E0; break;
        case 1: goto L_08000240; break;
        case 2: goto L_08000288; break;
        case 3: goto L_080002A0; break;
        case 4: goto L_08000314; break;
        default: switch_error(__func__, 0x080001D8, 0x080025C4);
    }
    // 0x080001DC: nop

L_080001E0:
    // 0x080001E0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080001E4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080001E8: jalr        $t9
    // 0x080001EC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001EC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x080001F0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080001F4: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x080001F8: jalr        $t9
    // 0x080001FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001FC: nop

    after_1:
    // 0x08000200: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000204: addiu       $t9, $t9, 0x4DD8
    ctx->r25 = ADD32(ctx->r25, 0X4DD8);
    // 0x08000208: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(36, 0X83C) << 16);
    // 0x0800020C: addiu       $a0, $a0, 0x83C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(36, 0X83C));
    // 0x08000210: jalr        $t9
    // 0x08000214: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000214: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x08000218: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800021C: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000220: jalr        $t9
    // 0x08000224: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000224: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x08000228: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x0800022C: lw          $t8, 0xD0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XD0);
    // 0x08000230: addiu       $v1, $v1, 0xD0
    ctx->r3 = ADD32(ctx->r3, 0XD0);
    // 0x08000234: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08000238: b           L_08000314
    // 0x0800023C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
        goto L_08000314;
    // 0x0800023C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_08000240:
    // 0x08000240: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000244: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08000248: jalr        $t9
    // 0x0800024C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800024C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x08000250: beq         $v0, $zero, L_08000314
    if (ctx->r2 == 0) {
        // 0x08000254: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(36, 0X1AA8) << 16);
            goto L_08000314;
    }
    // 0x08000254: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(36, 0X1AA8) << 16);
    // 0x08000258: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800025C: addiu       $t9, $t9, 0x4DD8
    ctx->r25 = ADD32(ctx->r25, 0X4DD8);
    // 0x08000260: addiu       $a0, $a0, 0x1AA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(36, 0X1AA8));
    // 0x08000264: jalr        $t9
    // 0x08000268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x0800026C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x08000270: lw          $t1, 0xD0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XD0);
    // 0x08000274: addiu       $v1, $v1, 0xD0
    ctx->r3 = ADD32(ctx->r3, 0XD0);
    // 0x08000278: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x0800027C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08000280: b           L_08000314
    // 0x08000284: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
        goto L_08000314;
    // 0x08000284: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_08000288:
    // 0x08000288: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x0800028C: lw          $t3, 0xD0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XD0);
    // 0x08000290: addiu       $v1, $v1, 0xD0
    ctx->r3 = ADD32(ctx->r3, 0XD0);
    // 0x08000294: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08000298: b           L_08000314
    // 0x0800029C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_08000314;
    // 0x0800029C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_080002A0:
    // 0x080002A0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080002A4: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080002A8: jalr        $t9
    // 0x080002AC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080002AC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_6:
    // 0x080002B0: beq         $v0, $zero, L_08000314
    if (ctx->r2 == 0) {
        // 0x080002B4: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_08000314;
    }
    // 0x080002B4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080002B8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080002BC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080002C0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(36, 0X1938) << 16);
    // 0x080002C4: addiu       $a1, $a1, 0x1938
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(36, 0X1938));
    // 0x080002C8: jalr        $t9
    // 0x080002CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080002CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x080002D0: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x080002D4: addiu       $t5, $zero, 0x2D
    ctx->r13 = ADD32(0, 0X2D);
    // 0x080002D8: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    // 0x080002DC: addiu       $v1, $v1, 0xD0
    ctx->r3 = ADD32(ctx->r3, 0XD0);
    // 0x080002E0: beq         $v0, $zero, L_08000308
    if (ctx->r2 == 0) {
        // 0x080002E4: sw          $v0, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->r2;
            goto L_08000308;
    }
    // 0x080002E4: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x080002E8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002EC: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x080002F0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080002F4: jalr        $t9
    // 0x080002F8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080002F8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_8:
    // 0x080002FC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08000300: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x08000304: sw          $v0, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r2;
L_08000308:
    // 0x08000308: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x0800030C: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08000310: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_08000314:
    // 0x08000314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000318: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x0800031C: jr          $ra
    // 0x08000320: nop

    TRACE_RETURN()
    return;
    // 0x08000320: nop

;}
RECOMP_FUNC void func_08001DE8_700818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001DE8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08001DEC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08001DF0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001DF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001DF8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x08001DFC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08001E00: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(36, 0X2190) << 16);
    // 0x08001E04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001E08: addiu       $a1, $a1, 0x2190
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(36, 0X2190));
    // 0x08001E0C: jalr        $t9
    // 0x08001E10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001E10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x08001E14: beq         $v0, $zero, L_08001FAC
    if (ctx->r2 == 0) {
        // 0x08001E18: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08001FAC;
    }
    // 0x08001E18: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08001E1C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001E20: addiu       $t6, $zero, 0x2D
    ctx->r14 = ADD32(0, 0X2D);
    // 0x08001E24: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001E28: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08001E2C: jalr        $t9
    // 0x08001E30: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001E30: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_1:
    // 0x08001E34: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
    // 0x08001E38: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x08001E3C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08001E40: addiu       $v1, $v1, -0x6D4C
    ctx->r3 = ADD32(ctx->r3, -0X6D4C);
    // 0x08001E44: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x08001E48: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08001E4C: jalr        $v1
    // 0x08001E50: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x08001E50: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    after_2:
    // 0x08001E54: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08001E58: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08001E5C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08001E60: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001E64: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001E68: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08001E6C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08001E70: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08001E74: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001E78: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001E7C: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001E80: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x08001E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001E88: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08001E8C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001E90: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08001E94: jalr        $t9
    // 0x08001E98: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001E98: nop

    after_3:
    // 0x08001E9C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001EA0: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    // 0x08001EA4: jalr        $t9
    // 0x08001EA8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001EA8: nop

    after_4:
    // 0x08001EAC: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x08001EB0: addiu       $v1, $v0, 0x100
    ctx->r3 = ADD32(ctx->r2, 0X100);
    // 0x08001EB4: addiu       $a1, $a1, 0x3EA0
    ctx->r5 = ADD32(ctx->r5, 0X3EA0);
    // 0x08001EB8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x08001EBC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08001EC0: jalr        $a1
    // 0x08001EC4: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    LOOKUP_FUNC(ctx->r5)(rdram, ctx);
        goto after_5;
    // 0x08001EC4: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    after_5:
    // 0x08001EC8: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x08001ECC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08001ED0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001ED4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x08001ED8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X26A8) << 16);
    // 0x08001EDC: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x08001EE0: ldc1        $f18, 0x26A8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(36, 0X26A8));
    // 0x08001EE4: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08001EE8: lui         $at, 0x4326
    ctx->r1 = S32(0X4326 << 16);
    // 0x08001EEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001EF0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x08001EF4: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x08001EF8: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x08001EFC: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08001F00: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001F04: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x08001F08: lhu         $a0, 0x3E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3E);
    // 0x08001F0C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08001F10: jalr        $v0
    // 0x08001F14: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x08001F14: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_6:
    // 0x08001F18: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x08001F1C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08001F20: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08001F24: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x08001F28: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X26B0) << 16);
    // 0x08001F2C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x08001F30: ldc1        $f4, 0x26B0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(36, 0X26B0));
    // 0x08001F34: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x08001F38: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x08001F3C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08001F40: swc1        $f8, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f8.u32l;
    // 0x08001F44: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001F48: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    // 0x08001F4C: jalr        $t9
    // 0x08001F50: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001F50: nop

    after_7:
    // 0x08001F54: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x08001F58: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08001F5C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08001F60: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x08001F64: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x08001F68: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08001F6C: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x08001F70: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08001F74: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    // 0x08001F78: jalr        $t9
    // 0x08001F7C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001F7C: nop

    after_8:
    // 0x08001F80: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x08001F84: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001F88: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001F8C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x08001F90: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x08001F94: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001F98: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
    // 0x08001F9C: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x08001FA0: swc1        $f18, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f18.u32l;
    // 0x08001FA4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x08001FA8: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
L_08001FAC:
    // 0x08001FAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001FB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001FB4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08001FB8: jr          $ra
    // 0x08001FBC: nop

    TRACE_RETURN()
    return;
    // 0x08001FBC: nop

    // 0x08001FC0: jr          $ra
    // 0x08001FC4: nop

    TRACE_RETURN()
    return;
    // 0x08001FC4: nop

    // 0x08001FC8: jr          $ra
    // 0x08001FCC: nop

    TRACE_RETURN()
    return;
    // 0x08001FCC: nop

    // 0x08001FD0: jr          $ra
    // 0x08001FD4: nop

    TRACE_RETURN()
    return;
    // 0x08001FD4: nop

    // 0x08001FD8: jr          $ra
    // 0x08001FDC: nop

    TRACE_RETURN()
    return;
    // 0x08001FDC: nop

    // 0x08001FE0: jr          $ra
    // 0x08001FE4: nop

    TRACE_RETURN()
    return;
    // 0x08001FE4: nop

;}
RECOMP_FUNC void func_08000490_6FEEC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000490: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08000494: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000498: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0800049C: lhu         $v1, 0xC0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XC0);
    // 0x080004A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080004A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080004A8: beq         $v1, $zero, L_080004DC
    if (ctx->r3 == 0) {
        // 0x080004AC: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_080004DC;
    }
    // 0x080004AC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080004B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080004B4: beq         $v1, $at, L_08000518
    if (ctx->r3 == ctx->r1) {
        // 0x080004B8: addiu       $v0, $s0, 0xC0
        ctx->r2 = ADD32(ctx->r16, 0XC0);
            goto L_08000518;
    }
    // 0x080004B8: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x080004BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080004C0: beq         $v1, $at, L_08000610
    if (ctx->r3 == ctx->r1) {
        // 0x080004C4: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_08000610;
    }
    // 0x080004C4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080004C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080004CC: beq         $v1, $at, L_08000698
    if (ctx->r3 == ctx->r1) {
        // 0x080004D0: addiu       $v0, $s0, 0xC0
        ctx->r2 = ADD32(ctx->r16, 0XC0);
            goto L_08000698;
    }
    // 0x080004D0: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x080004D4: b           L_0800077C
    // 0x080004D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_0800077C;
    // 0x080004D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080004DC:
    // 0x080004DC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080004E0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x080004E4: jal         0x0800078C
    // 0x080004E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_0800078C_6FF1BC(rdram, ctx);
        goto after_0;
    // 0x080004E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x080004EC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080004F0: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080004F4: jalr        $t9
    // 0x080004F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x080004FC: beq         $v0, $zero, L_08000778
    if (ctx->r2 == 0) {
        // 0x08000500: addiu       $v0, $s0, 0xC0
        ctx->r2 = ADD32(ctx->r16, 0XC0);
            goto L_08000778;
    }
    // 0x08000500: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x08000504: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x08000508: sh          $zero, 0x28($v0)
    MEM_H(0X28, ctx->r2) = 0;
    // 0x0800050C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08000510: b           L_08000778
    // 0x08000514: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
        goto L_08000778;
    // 0x08000514: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
L_08000518:
    // 0x08000518: lhu         $t8, 0x28($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X28);
    // 0x0800051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000520: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08000524: addiu       $t0, $t8, 0x8
    ctx->r8 = ADD32(ctx->r24, 0X8);
    // 0x08000528: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
    // 0x0800052C: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
    // 0x08000530: bne         $at, $zero, L_08000544
    if (ctx->r1 != 0) {
        // 0x08000534: sh          $t0, 0x28($v0)
        MEM_H(0X28, ctx->r2) = ctx->r8;
            goto L_08000544;
    }
    // 0x08000534: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08000538: addiu       $t1, $zero, 0xC8
    ctx->r9 = ADD32(0, 0XC8);
    // 0x0800053C: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x08000540: andi        $v1, $t1, 0xFFFF
    ctx->r3 = ctx->r9 & 0XFFFF;
L_08000544:
    // 0x08000544: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08000548: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x0800054C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x08000550: jal         0x0800078C
    // 0x08000554: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_0800078C_6FF1BC(rdram, ctx);
        goto after_2;
    // 0x08000554: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_2:
    // 0x08000558: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0800055C: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x08000560: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x08000564: lhu         $t2, 0x28($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X28);
    // 0x08000568: addiu       $v1, $v1, -0x7468
    ctx->r3 = ADD32(ctx->r3, -0X7468);
    // 0x0800056C: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    // 0x08000570: bnel        $t2, $at, L_0800077C
    if (ctx->r10 != ctx->r1) {
        // 0x08000574: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_0800077C;
    }
    goto skip_0;
    // 0x08000574: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x08000578: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x0800057C: jalr        $v1
    // 0x08000580: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x08000580: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_3:
    // 0x08000584: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08000588: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    // 0x0800058C: jalr        $v1
    // 0x08000590: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_4;
    // 0x08000590: nop

    after_4:
    // 0x08000594: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000598: addiu       $t9, $t9, 0x6B7C
    ctx->r25 = ADD32(ctx->r25, 0X6B7C);
    // 0x0800059C: jalr        $t9
    // 0x080005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x080005A4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080005A8: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x080005AC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x080005B0: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x080005B4: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x080005B8: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x080005BC: lw          $t6, 0x3018($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X3018);
    // 0x080005C0: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x080005C4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x080005C8: sb          $t3, 0x10($t6)
    MEM_B(0X10, ctx->r14) = ctx->r11;
    // 0x080005CC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x080005D0: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x080005D4: lw          $a1, 0x3018($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X3018);
    // 0x080005D8: lbu         $v1, 0x10($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X10);
    // 0x080005DC: sb          $v1, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r3;
    // 0x080005E0: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x080005E4: addu        $t1, $t0, $a2
    ctx->r9 = ADD32(ctx->r8, ctx->r6);
    // 0x080005E8: lw          $t2, 0x3018($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X3018);
    // 0x080005EC: sb          $v1, 0xE($t2)
    MEM_B(0XE, ctx->r10) = ctx->r3;
    // 0x080005F0: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x080005F4: addu        $t4, $t9, $a2
    ctx->r12 = ADD32(ctx->r25, ctx->r6);
    // 0x080005F8: lw          $t5, 0x3018($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X3018);
    // 0x080005FC: sb          $v1, 0xD($t5)
    MEM_B(0XD, ctx->r13) = ctx->r3;
    // 0x08000600: lhu         $t3, 0x0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X0);
    // 0x08000604: addiu       $t6, $t3, 0x1
    ctx->r14 = ADD32(ctx->r11, 0X1);
    // 0x08000608: b           L_08000778
    // 0x0800060C: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
        goto L_08000778;
    // 0x0800060C: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
L_08000610:
    // 0x08000610: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x08000614: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x08000618: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x0800061C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x08000620: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x08000624: lw          $a1, 0x3018($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X3018);
    // 0x08000628: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800062C: addiu       $t9, $t9, 0x6158
    ctx->r25 = ADD32(ctx->r25, 0X6158);
    // 0x08000630: lbu         $v0, 0x10($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X10);
    // 0x08000634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000638: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x0800063C: bne         $at, $zero, L_0800064C
    if (ctx->r1 != 0) {
        // 0x08000640: addiu       $t0, $v0, -0x5
        ctx->r8 = ADD32(ctx->r2, -0X5);
            goto L_0800064C;
    }
    // 0x08000640: addiu       $t0, $v0, -0x5
    ctx->r8 = ADD32(ctx->r2, -0X5);
    // 0x08000644: b           L_08000778
    // 0x08000648: sb          $t0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r8;
        goto L_08000778;
    // 0x08000648: sb          $t0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r8;
L_0800064C:
    // 0x0800064C: jalr        $t9
    // 0x08000650: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000650: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x08000654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000658: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x0800065C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08000660: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08000664: jal         0x0800078C
    // 0x08000668: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_0800078C_6FF1BC(rdram, ctx);
        goto after_7;
    // 0x08000668: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x0800066C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000670: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000674: jalr        $t9
    // 0x08000678: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000678: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_8:
    // 0x0800067C: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x08000680: lhu         $t2, 0x0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X0);
    // 0x08000684: addiu       $t1, $zero, 0x186
    ctx->r9 = ADD32(0, 0X186);
    // 0x08000688: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    // 0x0800068C: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x08000690: b           L_08000778
    // 0x08000694: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
        goto L_08000778;
    // 0x08000694: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
L_08000698:
    // 0x08000698: lhu         $t5, 0x2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X2);
    // 0x0800069C: addiu       $at, $zero, 0x14A
    ctx->r1 = ADD32(0, 0X14A);
    // 0x080006A0: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    // 0x080006A4: bne         $t5, $at, L_080006C4
    if (ctx->r13 != ctx->r1) {
        // 0x080006A8: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080006C4;
    }
    // 0x080006A8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080006AC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080006B0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x080006B4: jalr        $t9
    // 0x080006B8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080006B8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_9:
    // 0x080006BC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x080006C0: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
L_080006C4:
    // 0x080006C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080006C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080006CC: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x080006D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080006D4: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x080006D8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080006DC: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x080006E0: lhu         $t3, 0x2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X2);
    // 0x080006E4: andi        $t6, $t3, 0x3
    ctx->r14 = ctx->r11 & 0X3;
    // 0x080006E8: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x080006EC: beql        $at, $zero, L_08000730
    if (ctx->r1 == 0) {
        // 0x080006F0: lwc1        $f18, 0x8($a1)
        ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
            goto L_08000730;
    }
    goto skip_1;
    // 0x080006F0: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    skip_1:
    // 0x080006F4: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x080006F8: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x080006FC: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x08000700: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x08000704: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000708: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x0800070C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000710: add.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d + ctx->f0.d;
    // 0x08000714: add.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f8.d + ctx->f0.d;
    // 0x08000718: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x0800071C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000720: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x08000724: b           L_08000760
    // 0x08000728: swc1        $f16, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f16.u32l;
        goto L_08000760;
    // 0x08000728: swc1        $f16, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f16.u32l;
    // 0x0800072C: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
L_08000730:
    // 0x08000730: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08000734: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x08000738: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x0800073C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000740: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08000744: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08000748: sub.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d - ctx->f0.d;
    // 0x0800074C: sub.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d - ctx->f0.d;
    // 0x08000750: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08000754: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08000758: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x0800075C: swc1        $f4, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f4.u32l;
L_08000760:
    // 0x08000760: lhu         $a0, 0x2($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X2);
    // 0x08000764: addiu       $t7, $a0, -0x1
    ctx->r15 = ADD32(ctx->r4, -0X1);
    // 0x08000768: bne         $a0, $zero, L_08000778
    if (ctx->r4 != 0) {
        // 0x0800076C: sh          $t7, 0x2($v0)
        MEM_H(0X2, ctx->r2) = ctx->r15;
            goto L_08000778;
    }
    // 0x0800076C: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
    // 0x08000770: jalr        $t9
    // 0x08000774: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000774: nop

    after_10:
L_08000778:
    // 0x08000778: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_0800077C:
    // 0x0800077C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000780: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08000784: jr          $ra
    // 0x08000788: nop

    TRACE_RETURN()
    return;
    // 0x08000788: nop

;}
RECOMP_FUNC void func_08002190_700BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002190: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002194: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002198: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x0800219C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080021A0: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x080021A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080021A8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080021AC: beq         $v0, $zero, L_080021C8
    if (ctx->r2 == 0) {
        // 0x080021B0: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_080021C8;
    }
    // 0x080021B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080021B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080021B8: beq         $v0, $at, L_08002288
    if (ctx->r2 == ctx->r1) {
        // 0x080021BC: addiu       $s1, $s0, 0xD0
        ctx->r17 = ADD32(ctx->r16, 0XD0);
            goto L_08002288;
    }
    // 0x080021BC: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x080021C0: b           L_0800234C
    // 0x080021C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_0800234C;
    // 0x080021C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080021C8:
    // 0x080021C8: addiu       $t7, $zero, 0x22A
    ctx->r15 = ADD32(0, 0X22A);
    // 0x080021CC: sh          $t6, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r14;
    // 0x080021D0: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x080021D4: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x080021D8: sb          $t8, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r24;
    // 0x080021DC: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x080021E0: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x080021E4: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    // 0x080021E8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080021EC: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080021F0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x080021F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080021F8: jalr        $t9
    // 0x080021FC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080021FC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x08002200: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002204: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08002208: jalr        $t9
    // 0x0800220C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800220C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08002210: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002214: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08002218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800221C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08002220: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08002224: jalr        $t9
    // 0x08002228: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002228: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x0800222C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002230: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08002234: jalr        $t9
    // 0x08002238: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002238: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    after_3:
    // 0x0800223C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002240: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x08002244: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08002248: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0800224C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x08002250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002254: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x08002258: jalr        $t9
    // 0x0800225C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800225C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_4:
    // 0x08002260: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002264: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x08002268: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x0800226C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002270: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x08002274: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    // 0x08002278: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x0800227C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08002280: b           L_08002348
    // 0x08002284: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
        goto L_08002348;
    // 0x08002284: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
L_08002288:
    // 0x08002288: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x0800228C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x08002290: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002294: addiu       $t6, $t5, -0x4
    ctx->r14 = ADD32(ctx->r13, -0X4);
    // 0x08002298: sw          $t6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r14;
    // 0x0800229C: lwc1        $f6, 0xC($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0XC);
    // 0x080022A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080022A4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080022A8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x080022AC: nop

    // 0x080022B0: bc1t        L_080022C0
    if (c1cs) {
        // 0x080022B4: nop
    
            goto L_080022C0;
    }
    // 0x080022B4: nop

    // 0x080022B8: bgtzl       $t6, L_080022D4
    if (SIGNED(ctx->r14) > 0) {
        // 0x080022BC: lwc1        $f8, 0x78($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X78);
            goto L_080022D4;
    }
    goto skip_0;
    // 0x080022BC: lwc1        $f8, 0x78($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X78);
    skip_0:
L_080022C0:
    // 0x080022C0: jalr        $t9
    // 0x080022C4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080022C4: nop

    after_5:
    // 0x080022C8: b           L_0800234C
    // 0x080022CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_0800234C;
    // 0x080022CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080022D0: lwc1        $f8, 0x78($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X78);
L_080022D4:
    // 0x080022D4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(36, 0X26C0) << 16);
    // 0x080022D8: ldc1        $f0, 0x26C0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(36, 0X26C0));
    // 0x080022DC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x080022E0: lwc1        $f4, 0x80($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X80);
    // 0x080022E4: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x080022E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080022EC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080022F0: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080022F4: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x080022F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080022FC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08002300: lwc1        $f16, 0x7C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08002304: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002308: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x0800230C: lwc1        $f18, 0xC0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC0);
    // 0x08002310: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x08002314: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x08002318: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    // 0x0800231C: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x08002320: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x08002324: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x08002328: jalr        $t9
    // 0x0800232C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800232C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    after_6:
    // 0x08002330: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002334: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08002338: lui         $a1, 0x3F86
    ctx->r5 = S32(0X3F86 << 16);
    // 0x0800233C: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x08002340: jalr        $t9
    // 0x08002344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_08002348:
    // 0x08002348: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_0800234C:
    // 0x0800234C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08002350: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08002354: jr          $ra
    // 0x08002358: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08002358: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000CCC_701DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000CD0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CD4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000CD8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000CDC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000CE0: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000CE4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000CE8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000CEC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x08000CF0: jalr        $t9
    // 0x08000CF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000CF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08000CF8: lui         $t6, 0x860
    ctx->r14 = S32(0X860 << 16);
    // 0x08000CFC: ori         $t6, $t6, 0x260
    ctx->r14 = ctx->r14 | 0X260;
    // 0x08000D00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D04: sw          $t6, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r14;
    // 0x08000D08: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08000D0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000D10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000D14: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x08000D18: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x08000D1C: jalr        $t9
    // 0x08000D20: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000D20: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_1:
    // 0x08000D24: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D28: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000D2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000D30: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x08000D34: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08000D38: jalr        $t9
    // 0x08000D3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000D3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000D40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D44: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000D48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000D4C: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x08000D50: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x08000D54: jalr        $t9
    // 0x08000D58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000D58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000D5C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D60: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08000D64: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08000D68: sb          $t7, 0x4C($s1)
    MEM_B(0X4C, ctx->r17) = ctx->r15;
    // 0x08000D6C: jalr        $t9
    // 0x08000D70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000D70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x08000D74: lhu         $t0, 0xD0($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0XD0);
    // 0x08000D78: addiu       $t8, $zero, 0x1BE
    ctx->r24 = ADD32(0, 0X1BE);
    // 0x08000D7C: sh          $t8, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r24;
    // 0x08000D80: sltiu       $at, $t0, 0x8
    ctx->r1 = ctx->r8 < 0X8 ? 1 : 0;
    // 0x08000D84: beq         $at, $zero, L_08001084
    if (ctx->r1 == 0) {
        // 0x08000D88: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08001084;
    }
    // 0x08000D88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000D8C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x08000D90: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4C80) << 16);
    // 0x08000D94: addu        $at, $at, $t0
    gpr jr_addend_08000D9C = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x08000D98: lw          $t0, 0x4C80($at)
    ctx->r8 = ADD32(ctx->r1, (int16_t)RELOC_LO16(37, 0X4C80));
    // 0x08000D9C: jr          $t0
    // 0x08000DA0: nop

    switch (jr_addend_08000D9C >> 2) {
        case 0: goto L_08000DA4; break;
        case 1: goto L_08000E00; break;
        case 2: goto L_08000E5C; break;
        case 3: goto L_08000EB8; break;
        case 4: goto L_08000F14; break;
        case 5: goto L_08000F70; break;
        case 6: goto L_08000FCC; break;
        case 7: goto L_08001028; break;
        default: switch_error(__func__, 0x08000D9C, 0x08004C80);
    }
    // 0x08000DA0: nop

L_08000DA4:
    // 0x08000DA4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000DA8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000DAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000DB4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000DB8: jalr        $t9
    // 0x08000DBC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000DBC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_5:
    // 0x08000DC0: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08000DC4: addiu       $s0, $s0, -0x589C
    ctx->r16 = ADD32(ctx->r16, -0X589C);
    // 0x08000DC8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000DCC: addiu       $a1, $a1, 0x690
    ctx->r5 = ADD32(ctx->r5, 0X690);
    // 0x08000DD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000DD4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000DD8: jalr        $s0
    // 0x08000DDC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x08000DDC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_6:
    // 0x08000DE0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000DE4: addiu       $a1, $a1, 0x4690
    ctx->r5 = ADD32(ctx->r5, 0X4690);
    // 0x08000DE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000DEC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08000DF0: jalr        $s0
    // 0x08000DF4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x08000DF4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_7:
    // 0x08000DF8: b           L_080010D8
    // 0x08000DFC: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
        goto L_080010D8;
    // 0x08000DFC: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
L_08000E00:
    // 0x08000E00: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E04: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000E08: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000E0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000E10: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000E14: jalr        $t9
    // 0x08000E18: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000E18: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_8:
    // 0x08000E1C: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08000E20: addiu       $s0, $s0, -0x589C
    ctx->r16 = ADD32(ctx->r16, -0X589C);
    // 0x08000E24: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000E28: addiu       $a1, $a1, 0x690
    ctx->r5 = ADD32(ctx->r5, 0X690);
    // 0x08000E2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000E30: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000E34: jalr        $s0
    // 0x08000E38: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_9;
    // 0x08000E38: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_9:
    // 0x08000E3C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000E40: addiu       $a1, $a1, 0x4690
    ctx->r5 = ADD32(ctx->r5, 0X4690);
    // 0x08000E44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000E48: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08000E4C: jalr        $s0
    // 0x08000E50: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_10;
    // 0x08000E50: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_10:
    // 0x08000E54: b           L_080010D8
    // 0x08000E58: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
        goto L_080010D8;
    // 0x08000E58: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
L_08000E5C:
    // 0x08000E5C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E60: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000E64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000E68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000E6C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000E70: jalr        $t9
    // 0x08000E74: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000E74: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_11:
    // 0x08000E78: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08000E7C: addiu       $s0, $s0, -0x589C
    ctx->r16 = ADD32(ctx->r16, -0X589C);
    // 0x08000E80: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000E84: addiu       $a1, $a1, 0x1690
    ctx->r5 = ADD32(ctx->r5, 0X1690);
    // 0x08000E88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000E8C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000E90: jalr        $s0
    // 0x08000E94: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_12;
    // 0x08000E94: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_12:
    // 0x08000E98: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000E9C: addiu       $a1, $a1, 0x5690
    ctx->r5 = ADD32(ctx->r5, 0X5690);
    // 0x08000EA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000EA4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08000EA8: jalr        $s0
    // 0x08000EAC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_13;
    // 0x08000EAC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_13:
    // 0x08000EB0: b           L_080010D8
    // 0x08000EB4: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
        goto L_080010D8;
    // 0x08000EB4: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
L_08000EB8:
    // 0x08000EB8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000EBC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000EC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000EC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000EC8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000ECC: jalr        $t9
    // 0x08000ED0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000ED0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_14:
    // 0x08000ED4: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08000ED8: addiu       $s0, $s0, -0x589C
    ctx->r16 = ADD32(ctx->r16, -0X589C);
    // 0x08000EDC: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000EE0: addiu       $a1, $a1, 0x1690
    ctx->r5 = ADD32(ctx->r5, 0X1690);
    // 0x08000EE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000EE8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000EEC: jalr        $s0
    // 0x08000EF0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_15;
    // 0x08000EF0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_15:
    // 0x08000EF4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000EF8: addiu       $a1, $a1, 0x5690
    ctx->r5 = ADD32(ctx->r5, 0X5690);
    // 0x08000EFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000F00: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08000F04: jalr        $s0
    // 0x08000F08: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_16;
    // 0x08000F08: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_16:
    // 0x08000F0C: b           L_080010D8
    // 0x08000F10: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
        goto L_080010D8;
    // 0x08000F10: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
L_08000F14:
    // 0x08000F14: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000F18: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000F1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000F20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000F24: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000F28: jalr        $t9
    // 0x08000F2C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000F2C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_17:
    // 0x08000F30: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08000F34: addiu       $s0, $s0, -0x589C
    ctx->r16 = ADD32(ctx->r16, -0X589C);
    // 0x08000F38: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000F3C: addiu       $a1, $a1, 0x2690
    ctx->r5 = ADD32(ctx->r5, 0X2690);
    // 0x08000F40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000F44: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000F48: jalr        $s0
    // 0x08000F4C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_18;
    // 0x08000F4C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_18:
    // 0x08000F50: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000F54: addiu       $a1, $a1, 0x6690
    ctx->r5 = ADD32(ctx->r5, 0X6690);
    // 0x08000F58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000F5C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08000F60: jalr        $s0
    // 0x08000F64: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_19;
    // 0x08000F64: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_19:
    // 0x08000F68: b           L_080010D8
    // 0x08000F6C: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
        goto L_080010D8;
    // 0x08000F6C: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
L_08000F70:
    // 0x08000F70: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000F74: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000F78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000F7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000F80: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000F84: jalr        $t9
    // 0x08000F88: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08000F88: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_20:
    // 0x08000F8C: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08000F90: addiu       $s0, $s0, -0x589C
    ctx->r16 = ADD32(ctx->r16, -0X589C);
    // 0x08000F94: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000F98: addiu       $a1, $a1, 0x2690
    ctx->r5 = ADD32(ctx->r5, 0X2690);
    // 0x08000F9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000FA0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000FA4: jalr        $s0
    // 0x08000FA8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_21;
    // 0x08000FA8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_21:
    // 0x08000FAC: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000FB0: addiu       $a1, $a1, 0x6690
    ctx->r5 = ADD32(ctx->r5, 0X6690);
    // 0x08000FB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000FB8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08000FBC: jalr        $s0
    // 0x08000FC0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_22;
    // 0x08000FC0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_22:
    // 0x08000FC4: b           L_080010D8
    // 0x08000FC8: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
        goto L_080010D8;
    // 0x08000FC8: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
L_08000FCC:
    // 0x08000FCC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000FD0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000FD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000FD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000FDC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000FE0: jalr        $t9
    // 0x08000FE4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08000FE4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_23:
    // 0x08000FE8: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08000FEC: addiu       $s0, $s0, -0x589C
    ctx->r16 = ADD32(ctx->r16, -0X589C);
    // 0x08000FF0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000FF4: addiu       $a1, $a1, 0x3690
    ctx->r5 = ADD32(ctx->r5, 0X3690);
    // 0x08000FF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000FFC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08001000: jalr        $s0
    // 0x08001004: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_24;
    // 0x08001004: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_24:
    // 0x08001008: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x0800100C: addiu       $a1, $a1, 0x7690
    ctx->r5 = ADD32(ctx->r5, 0X7690);
    // 0x08001010: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001014: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08001018: jalr        $s0
    // 0x0800101C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_25;
    // 0x0800101C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_25:
    // 0x08001020: b           L_080010D8
    // 0x08001024: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
        goto L_080010D8;
    // 0x08001024: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
L_08001028:
    // 0x08001028: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800102C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001030: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001034: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001038: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0800103C: jalr        $t9
    // 0x08001040: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08001040: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_26:
    // 0x08001044: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08001048: addiu       $s0, $s0, -0x589C
    ctx->r16 = ADD32(ctx->r16, -0X589C);
    // 0x0800104C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08001050: addiu       $a1, $a1, 0x3690
    ctx->r5 = ADD32(ctx->r5, 0X3690);
    // 0x08001054: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001058: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0800105C: jalr        $s0
    // 0x08001060: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_27;
    // 0x08001060: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_27:
    // 0x08001064: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08001068: addiu       $a1, $a1, 0x7690
    ctx->r5 = ADD32(ctx->r5, 0X7690);
    // 0x0800106C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001070: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08001074: jalr        $s0
    // 0x08001078: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_28;
    // 0x08001078: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_28:
    // 0x0800107C: b           L_080010D8
    // 0x08001080: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
        goto L_080010D8;
    // 0x08001080: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
L_08001084:
    // 0x08001084: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001088: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800108C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001090: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08001094: jalr        $t9
    // 0x08001098: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08001098: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_29:
    // 0x0800109C: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x080010A0: addiu       $s0, $s0, -0x589C
    ctx->r16 = ADD32(ctx->r16, -0X589C);
    // 0x080010A4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080010A8: addiu       $a1, $a1, 0x3690
    ctx->r5 = ADD32(ctx->r5, 0X3690);
    // 0x080010AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080010B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x080010B4: jalr        $s0
    // 0x080010B8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_30;
    // 0x080010B8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_30:
    // 0x080010BC: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080010C0: addiu       $a1, $a1, 0x7690
    ctx->r5 = ADD32(ctx->r5, 0X7690);
    // 0x080010C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080010C8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x080010CC: jalr        $s0
    // 0x080010D0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_31;
    // 0x080010D0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_31:
    // 0x080010D4: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
L_080010D8:
    // 0x080010D8: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080010DC: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x080010E0: sll         $t1, $v0, 7
    ctx->r9 = S32(ctx->r2 << 7);
    // 0x080010E4: andi        $s0, $t1, 0xFFFF
    ctx->r16 = ctx->r9 & 0XFFFF;
    // 0x080010E8: jalr        $t9
    // 0x080010EC: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x080010EC: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_32:
    // 0x080010F0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x080010F4: lhu         $t2, -0x324A($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X324A);
    // 0x080010F8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x080010FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001100: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x08001104: bgez        $t2, L_08001118
    if (SIGNED(ctx->r10) >= 0) {
        // 0x08001108: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_08001118;
    }
    // 0x08001108: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0800110C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001110: nop

    // 0x08001114: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_08001118:
    // 0x08001118: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x0800111C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08001120: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x08001124: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x08001128: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x0800112C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001130: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08001134: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x08001138: mul.d       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f18.d);
    // 0x0800113C: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x08001140: jalr        $t9
    // 0x08001144: swc1        $f6, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x08001144: swc1        $f6, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f6.u32l;
    after_33:
    // 0x08001148: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x0800114C: lhu         $t3, -0x324A($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X324A);
    // 0x08001150: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08001154: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08001158: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x0800115C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08001160: bgez        $t3, L_08001178
    if (SIGNED(ctx->r11) >= 0) {
        // 0x08001164: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_08001178;
    }
    // 0x08001164: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08001168: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x0800116C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001170: nop

    // 0x08001174: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
L_08001178:
    // 0x08001178: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x0800117C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001180: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001184: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001188: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x0800118C: div.d       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f8.d);
    // 0x08001190: lwc1        $f18, 0x78($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X78);
    // 0x08001194: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08001198: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800119C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080011A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0XA94) << 16);
    // 0x080011A4: addiu       $a0, $a0, 0xA94
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0XA94));
    // 0x080011A8: mul.d       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x080011AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080011B0: mul.s       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x080011B4: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
    // 0x080011B8: swc1        $f16, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f16.u32l;
    // 0x080011BC: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080011C0: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x080011C4: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x080011C8: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x080011CC: lwc1        $f16, 0x80($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X80);
    // 0x080011D0: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x080011D4: jalr        $t9
    // 0x080011D8: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x080011D8: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    after_34:
    // 0x080011DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080011E0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080011E4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080011E8: jr          $ra
    // 0x080011EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x080011EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08002540_703640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002540: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x08002544: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08002548: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x0800254C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x08002550: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08002554: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08002558: lhu         $v0, 0xD4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XD4);
    // 0x0800255C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x08002560: lw          $s3, 0x18($a0)
    ctx->r19 = MEM_W(ctx->r4, 0X18);
    // 0x08002564: beql        $v0, $zero, L_080026A4
    if (ctx->r2 == 0) {
        // 0x08002568: lw          $v0, 0x68($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X68);
            goto L_080026A4;
    }
    goto skip_0;
    // 0x08002568: lw          $v0, 0x68($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X68);
    skip_0:
    // 0x0800256C: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08002570: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08002574: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x08002578: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x0800257C: beq         $t8, $zero, L_080025A8
    if (ctx->r24 == 0) {
        // 0x08002580: sw          $t7, 0x68($a0)
        MEM_W(0X68, ctx->r4) = ctx->r15;
            goto L_080025A8;
    }
    // 0x08002580: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x08002584: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08002588: addiu       $s0, $s0, -0x20A0
    ctx->r16 = ADD32(ctx->r16, -0X20A0);
    // 0x0800258C: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x08002590: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002594: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08002598: jalr        $s0
    // 0x0800259C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x0800259C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x080025A0: b           L_080025CC
    // 0x080025A4: lhu         $t9, 0xD4($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0XD4);
        goto L_080025CC;
    // 0x080025A4: lhu         $t9, 0xD4($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0XD4);
L_080025A8:
    // 0x080025A8: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x080025AC: addiu       $s0, $s0, -0x20A0
    ctx->r16 = ADD32(ctx->r16, -0X20A0);
    // 0x080025B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x080025B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080025B8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080025BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080025C0: jalr        $s0
    // 0x080025C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x080025C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x080025C8: lhu         $t9, 0xD4($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0XD4);
L_080025CC:
    // 0x080025CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x080025D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080025D4: andi        $t0, $t9, 0x8
    ctx->r8 = ctx->r25 & 0X8;
    // 0x080025D8: beq         $t0, $zero, L_08002628
    if (ctx->r8 == 0) {
        // 0x080025DC: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_08002628;
    }
    // 0x080025DC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080025E0: lwc1        $f4, 0x1C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x080025E4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4CB8) << 16);
    // 0x080025E8: ldc1        $f0, 0x4CB8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(37, 0X4CB8));
    // 0x080025EC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080025F0: lwc1        $f16, 0x20($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X20);
    // 0x080025F4: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x080025F8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080025FC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002600: lwc1        $f8, 0x24($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X24);
    // 0x08002604: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08002608: swc1        $f10, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->f10.u32l;
    // 0x0800260C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08002610: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002614: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08002618: swc1        $f6, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->f6.u32l;
    // 0x0800261C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08002620: b           L_0800266C
    // 0x08002624: swc1        $f18, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->f18.u32l;
        goto L_0800266C;
    // 0x08002624: swc1        $f18, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->f18.u32l;
L_08002628:
    // 0x08002628: lwc1        $f4, 0x1C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x0800262C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4CC0) << 16);
    // 0x08002630: ldc1        $f0, 0x4CC0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(37, 0X4CC0));
    // 0x08002634: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002638: lwc1        $f16, 0x20($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X20);
    // 0x0800263C: sub.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d - ctx->f0.d;
    // 0x08002640: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08002644: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002648: lwc1        $f8, 0x24($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X24);
    // 0x0800264C: sub.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d - ctx->f0.d;
    // 0x08002650: swc1        $f10, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->f10.u32l;
    // 0x08002654: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08002658: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x0800265C: sub.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d - ctx->f0.d;
    // 0x08002660: swc1        $f6, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->f6.u32l;
    // 0x08002664: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08002668: swc1        $f18, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->f18.u32l;
L_0800266C:
    // 0x0800266C: lhu         $t1, 0xD4($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0XD4);
    // 0x08002670: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08002674: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x08002678: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x0800267C: bne         $t3, $zero, L_080026A0
    if (ctx->r11 != 0) {
        // 0x08002680: sh          $t2, 0xD4($s2)
        MEM_H(0XD4, ctx->r18) = ctx->r10;
            goto L_080026A0;
    }
    // 0x08002680: sh          $t2, 0xD4($s2)
    MEM_H(0XD4, ctx->r18) = ctx->r10;
    // 0x08002684: jalr        $s0
    // 0x08002688: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x08002688: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x0800268C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4CC8) << 16);
    // 0x08002690: lwc1        $f0, 0x4CC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(37, 0X4CC8));
    // 0x08002694: swc1        $f0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->f0.u32l;
    // 0x08002698: swc1        $f0, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->f0.u32l;
    // 0x0800269C: swc1        $f0, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->f0.u32l;
L_080026A0:
    // 0x080026A0: lw          $v0, 0x68($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X68);
L_080026A4:
    // 0x080026A4: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x080026A8: beql        $t4, $zero, L_080029B4
    if (ctx->r12 == 0) {
        // 0x080026AC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_080029B4;
    }
    goto skip_1;
    // 0x080026AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x080026B0: lh          $t6, 0xDA($s2)
    ctx->r14 = MEM_H(ctx->r18, 0XDA);
    // 0x080026B4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080026B8: and         $t5, $v0, $at
    ctx->r13 = ctx->r2 & ctx->r1;
    // 0x080026BC: bne         $t6, $zero, L_08002990
    if (ctx->r14 != 0) {
        // 0x080026C0: sw          $t5, 0x68($s2)
        MEM_W(0X68, ctx->r18) = ctx->r13;
            goto L_08002990;
    }
    // 0x080026C0: sw          $t5, 0x68($s2)
    MEM_W(0X68, ctx->r18) = ctx->r13;
    // 0x080026C4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080026C8: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x080026CC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x080026D0: jalr        $v0
    // 0x080026D4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x080026D4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x080026D8: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x080026DC: bne         $at, $zero, L_080026F0
    if (ctx->r1 != 0) {
        // 0x080026E0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_080026F0;
    }
    // 0x080026E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x080026E4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080026E8: b           L_080026F8
    // 0x080026EC: addiu       $a1, $a1, 0x159C
    ctx->r5 = ADD32(ctx->r5, 0X159C);
        goto L_080026F8;
    // 0x080026EC: addiu       $a1, $a1, 0x159C
    ctx->r5 = ADD32(ctx->r5, 0X159C);
L_080026F0:
    // 0x080026F0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080026F4: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
L_080026F8:
    // 0x080026F8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080026FC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08002700: jalr        $t9
    // 0x08002704: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002704: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x08002708: beq         $v0, $zero, L_080028A4
    if (ctx->r2 == 0) {
        // 0x0800270C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_080028A4;
    }
    // 0x0800270C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08002710: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08002714: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08002718: jalr        $t9
    // 0x0800271C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800271C: nop

    after_5:
    // 0x08002720: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08002724: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08002728: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x0800272C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002730: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08002734: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08002738: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x0800273C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08002740: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002744: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08002748: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x0800274C: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x08002750: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002754: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08002758: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x0800275C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08002760: jalr        $t9
    // 0x08002764: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002764: nop

    after_6:
    // 0x08002768: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x0800276C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002770: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    // 0x08002774: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08002778: swc1        $f8, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f8.u32l;
    // 0x0800277C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08002780: jalr        $t9
    // 0x08002784: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002784: nop

    after_7:
    // 0x08002788: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x0800278C: multu       $v0, $s1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08002790: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08002794: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002798: mflo        $t7
    ctx->r15 = lo;
    // 0x0800279C: nop

    // 0x080027A0: nop

    // 0x080027A4: div         $zero, $t7, $s1
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r17)));
    // 0x080027A8: mflo        $t8
    ctx->r24 = lo;
    // 0x080027AC: addiu       $t0, $t8, -0x5
    ctx->r8 = ADD32(ctx->r24, -0X5);
    // 0x080027B0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x080027B4: bne         $s1, $zero, L_080027C0
    if (ctx->r17 != 0) {
        // 0x080027B8: nop
    
            goto L_080027C0;
    }
    // 0x080027B8: nop

    // 0x080027BC: break       7
    do_break(134227900);
L_080027C0:
    // 0x080027C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080027C4: bne         $s1, $at, L_080027D8
    if (ctx->r17 != ctx->r1) {
        // 0x080027C8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_080027D8;
    }
    // 0x080027C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080027CC: bne         $t7, $at, L_080027D8
    if (ctx->r15 != ctx->r1) {
        // 0x080027D0: nop
    
            goto L_080027D8;
    }
    // 0x080027D0: nop

    // 0x080027D4: break       6
    do_break(134227924);
L_080027D8:
    // 0x080027D8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x080027DC: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x080027E0: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x080027E4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080027E8: jalr        $t9
    // 0x080027EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080027EC: nop

    after_8:
    // 0x080027F0: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x080027F4: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x080027F8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x080027FC: div         $zero, $t1, $s1
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r17)));
    // 0x08002800: mflo        $t2
    ctx->r10 = lo;
    // 0x08002804: addiu       $t3, $t2, 0xA
    ctx->r11 = ADD32(ctx->r10, 0XA);
    // 0x08002808: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x0800280C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08002810: bne         $s1, $zero, L_0800281C
    if (ctx->r17 != 0) {
        // 0x08002814: nop
    
            goto L_0800281C;
    }
    // 0x08002814: nop

    // 0x08002818: break       7
    do_break(134227992);
L_0800281C:
    // 0x0800281C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08002820: bne         $s1, $at, L_08002834
    if (ctx->r17 != ctx->r1) {
        // 0x08002824: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08002834;
    }
    // 0x08002824: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08002828: bne         $t1, $at, L_08002834
    if (ctx->r9 != ctx->r1) {
        // 0x0800282C: nop
    
            goto L_08002834;
    }
    // 0x0800282C: nop

    // 0x08002830: break       6
    do_break(134228016);
L_08002834:
    // 0x08002834: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08002838: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800283C: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x08002840: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x08002844: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08002848: jalr        $t9
    // 0x0800284C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800284C: nop

    after_9:
    // 0x08002850: multu       $v0, $s1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08002854: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08002858: mflo        $t4
    ctx->r12 = lo;
    // 0x0800285C: nop

    // 0x08002860: nop

    // 0x08002864: div         $zero, $t4, $s1
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r17)));
    // 0x08002868: mflo        $t5
    ctx->r13 = lo;
    // 0x0800286C: addiu       $t6, $t5, -0x5
    ctx->r14 = ADD32(ctx->r13, -0X5);
    // 0x08002870: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08002874: bne         $s1, $zero, L_08002880
    if (ctx->r17 != 0) {
        // 0x08002878: nop
    
            goto L_08002880;
    }
    // 0x08002878: nop

    // 0x0800287C: break       7
    do_break(134228092);
L_08002880:
    // 0x08002880: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08002884: bne         $s1, $at, L_08002898
    if (ctx->r17 != ctx->r1) {
        // 0x08002888: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08002898;
    }
    // 0x08002888: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0800288C: bne         $t4, $at, L_08002898
    if (ctx->r12 != ctx->r1) {
        // 0x08002890: nop
    
            goto L_08002898;
    }
    // 0x08002890: nop

    // 0x08002894: break       6
    do_break(134228116);
L_08002898:
    // 0x08002898: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0800289C: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x080028A0: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
L_080028A4:
    // 0x080028A4: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x080028A8: addiu       $s0, $s0, -0x7F70
    ctx->r16 = ADD32(ctx->r16, -0X7F70);
    // 0x080028AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x080028B0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x080028B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_080028B8:
    // 0x080028B8: jalr        $s0
    // 0x080028BC: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_10;
    // 0x080028BC: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_10:
    // 0x080028C0: beq         $v0, $zero, L_080028CC
    if (ctx->r2 == 0) {
        // 0x080028C4: lw          $v1, 0x48($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X48);
            goto L_080028CC;
    }
    // 0x080028C4: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x080028C8: sb          $s1, 0xDD($v0)
    MEM_B(0XDD, ctx->r2) = ctx->r17;
L_080028CC:
    // 0x080028CC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x080028D0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x080028D4: bnel        $v1, $at, L_080028B8
    if (ctx->r3 != ctx->r1) {
        // 0x080028D8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_080028B8;
    }
    goto skip_2;
    // 0x080028D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_2:
    // 0x080028DC: lbu         $v0, 0x8D($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8D);
    // 0x080028E0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x080028E4: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x080028E8: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x080028EC: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x080028F0: beq         $v1, $zero, L_08002964
    if (ctx->r3 == 0) {
        // 0x080028F4: sb          $t7, 0x8D($s2)
        MEM_B(0X8D, ctx->r18) = ctx->r15;
            goto L_08002964;
    }
    // 0x080028F4: sb          $t7, 0x8D($s2)
    MEM_B(0X8D, ctx->r18) = ctx->r15;
    // 0x080028F8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080028FC: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08002900: sh          $t8, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r24;
    // 0x08002904: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002908: sh          $t0, 0x8A($s2)
    MEM_H(0X8A, ctx->r18) = ctx->r8;
    // 0x0800290C: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08002910: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002914: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08002918: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800291C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002920: jalr        $t9
    // 0x08002924: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08002924: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x08002928: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800292C: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08002930: jalr        $t9
    // 0x08002934: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08002934: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x08002938: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800293C: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08002940: jalr        $t9
    // 0x08002944: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08002944: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_13:
    // 0x08002948: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800294C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002950: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X31D8) << 16);
    // 0x08002954: jalr        $t9
    // 0x08002958: addiu       $a0, $a0, 0x31D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X31D8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08002958: addiu       $a0, $a0, 0x31D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X31D8));
    after_14:
    // 0x0800295C: b           L_080029B4
    // 0x08002960: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_080029B4;
    // 0x08002960: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08002964:
    // 0x08002964: lbu         $t1, 0x8D($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X8D);
    // 0x08002968: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800296C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08002970: sh          $s1, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r17;
    // 0x08002974: sh          $t1, 0x18C($v0)
    MEM_H(0X18C, ctx->r2) = ctx->r9;
    // 0x08002978: lhu         $t2, 0x14($s3)
    ctx->r10 = MEM_HU(ctx->r19, 0X14);
    // 0x0800297C: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x08002980: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x08002984: sh          $t3, 0x14($s3)
    MEM_H(0X14, ctx->r19) = ctx->r11;
    // 0x08002988: b           L_080029B0
    // 0x0800298C: sh          $t4, 0xD4($s2)
    MEM_H(0XD4, ctx->r18) = ctx->r12;
        goto L_080029B0;
    // 0x0800298C: sh          $t4, 0xD4($s2)
    MEM_H(0XD4, ctx->r18) = ctx->r12;
L_08002990:
    // 0x08002990: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002994: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08002998: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800299C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080029A0: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    // 0x080029A4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x080029A8: jalr        $t9
    // 0x080029AC: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080029AC: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_15:
L_080029B0:
    // 0x080029B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_080029B4:
    // 0x080029B4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080029B8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080029BC: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x080029C0: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x080029C4: jr          $ra
    // 0x080029C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x080029C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_08000348_701448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000348: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0800034C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x08000350: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x08000354: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000358: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x0800035C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000360: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000364: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000368: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x0800036C: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000370: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000374: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x08000378: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0800037C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x08000380: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000384: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x08000388: jalr        $t9
    // 0x0800038C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800038C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x08000390: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x08000394: sw          $v0, 0xD0($s4)
    MEM_W(0XD0, ctx->r20) = ctx->r2;
    // 0x08000398: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x0800039C: addiu       $s2, $s2, 0x7360
    ctx->r18 = ADD32(ctx->r18, 0X7360);
    // 0x080003A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x080003A4: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
    // 0x080003A8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_080003AC:
    // 0x080003AC: addiu       $a1, $zero, 0x1BE
    ctx->r5 = ADD32(0, 0X1BE);
    // 0x080003B0: jalr        $s2
    // 0x080003B4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_1;
    // 0x080003B4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x080003B8: beql        $v0, $zero, L_080003D0
    if (ctx->r2 == 0) {
        // 0x080003BC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_080003D0;
    }
    goto skip_0;
    // 0x080003BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x080003C0: sh          $s0, 0xD0($v0)
    MEM_H(0XD0, ctx->r2) = ctx->r16;
    // 0x080003C4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x080003C8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x080003CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_080003D0:
    // 0x080003D0: bnel        $s0, $s3, L_080003AC
    if (ctx->r16 != ctx->r19) {
        // 0x080003D4: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_080003AC;
    }
    goto skip_1;
    // 0x080003D4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    skip_1:
    // 0x080003D8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080003DC: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080003E0: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x080003E4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080003E8: sh          $zero, 0x184($v0)
    MEM_H(0X184, ctx->r2) = 0;
    // 0x080003EC: sh          $t6, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r14;
    // 0x080003F0: addiu       $t7, $zero, 0x21
    ctx->r15 = ADD32(0, 0X21);
    // 0x080003F4: addiu       $t8, $zero, 0x1BE
    ctx->r24 = ADD32(0, 0X1BE);
    // 0x080003F8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080003FC: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x08000400: sw          $t7, 0x60($s4)
    MEM_W(0X60, ctx->r20) = ctx->r15;
    // 0x08000404: sh          $t8, 0x5E($s4)
    MEM_H(0X5E, ctx->r20) = ctx->r24;
    // 0x08000408: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x0800040C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x08000410: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000414: jalr        $t9
    // 0x08000418: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000418: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x0800041C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000420: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000424: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X0) << 16);
    // 0x08000428: jalr        $t9
    // 0x0800042C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800042C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X0));
    after_3:
    // 0x08000430: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08000434: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000438: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0800043C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x08000440: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x08000444: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x08000448: jr          $ra
    // 0x0800044C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x0800044C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_08004034_705134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004034: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004038: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800403C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08004040: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004044: jal         0x08003A30
    // 0x08004048: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_08003A30_704B30(rdram, ctx);
        goto after_0;
    // 0x08004048: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800404C: bne         $v0, $zero, L_08004128
    if (ctx->r2 != 0) {
        // 0x08004050: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08004128;
    }
    // 0x08004050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004054: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004058: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x0800405C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x08004060: jalr        $t9
    // 0x08004064: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004064: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    after_1:
    // 0x08004068: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800406C: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08004070: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08004074: jalr        $t9
    // 0x08004078: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004078: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_2:
    // 0x0800407C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x08004080: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x08004084: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08004088: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    // 0x0800408C: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08004090: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08004094: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08004098: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x0800409C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080040A0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x080040A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080040A8: addiu       $t9, $t9, -0x4010
    ctx->r25 = ADD32(ctx->r25, -0X4010);
    // 0x080040AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080040B0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x080040B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080040B8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x080040BC: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x080040C0: nop

    // 0x080040C4: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x080040C8: sh          $t2, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r10;
    // 0x080040CC: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x080040D0: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080040D4: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x080040D8: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x080040DC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x080040E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080040E4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080040E8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x080040EC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x080040F0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x080040F4: jalr        $t9
    // 0x080040F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080040F8: nop

    after_3:
    // 0x080040FC: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x08004100: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x08004104: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X3F68) << 16);
    // 0x08004108: addiu       $t3, $v1, -0x1
    ctx->r11 = ADD32(ctx->r3, -0X1);
    // 0x0800410C: bne         $v1, $zero, L_08004128
    if (ctx->r3 != 0) {
        // 0x08004110: sh          $t3, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r11;
            goto L_08004128;
    }
    // 0x08004110: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x08004114: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004118: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800411C: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    // 0x08004120: jalr        $t9
    // 0x08004124: addiu       $a0, $a0, 0x3F68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X3F68));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004124: addiu       $a0, $a0, 0x3F68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X3F68));
    after_4:
L_08004128:
    // 0x08004128: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800412C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08004130: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08004134: jr          $ra
    // 0x08004138: nop

    TRACE_RETURN()
    return;
    // 0x08004138: nop

;}
RECOMP_FUNC void func_08002F58_704058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002F58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002F5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002F60: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002F68: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002F6C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X2F8C) << 16);
    // 0x08002F70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002F74: jalr        $t9
    // 0x08002F78: addiu       $a0, $a0, 0x2F8C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X2F8C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002F78: addiu       $a0, $a0, 0x2F8C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X2F8C));
    after_0:
    // 0x08002F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002F80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002F84: jr          $ra
    // 0x08002F88: nop

    TRACE_RETURN()
    return;
    // 0x08002F88: nop

;}
RECOMP_FUNC void func_08001460_702560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001460: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x08001464: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x08001468: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x0800146C: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x08001470: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x08001474: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x08001478: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x0800147C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x08001480: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x08001484: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x08001488: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x0800148C: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x08001490: lhu         $t6, 0xD4($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD4);
    // 0x08001494: lhu         $t8, 0xDA($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XDA);
    // 0x08001498: lw          $s7, 0x18($a0)
    ctx->r23 = MEM_W(ctx->r4, 0X18);
    // 0x0800149C: addiu       $t7, $t6, 0x180
    ctx->r15 = ADD32(ctx->r14, 0X180);
    // 0x080014A0: sh          $t7, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r15;
    // 0x080014A4: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x080014A8: bgez        $t8, L_080014B8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x080014AC: sra         $t9, $t8, 6
        ctx->r25 = S32(SIGNED(ctx->r24) >> 6);
            goto L_080014B8;
    }
    // 0x080014AC: sra         $t9, $t8, 6
    ctx->r25 = S32(SIGNED(ctx->r24) >> 6);
    // 0x080014B0: addiu       $at, $t8, 0x3F
    ctx->r1 = ADD32(ctx->r24, 0X3F);
    // 0x080014B4: sra         $t9, $at, 6
    ctx->r25 = S32(SIGNED(ctx->r1) >> 6);
L_080014B8:
    // 0x080014B8: sh          $t9, 0x18($s7)
    MEM_H(0X18, ctx->r23) = ctx->r25;
    // 0x080014BC: lw          $s5, 0xD0($s6)
    ctx->r21 = MEM_W(ctx->r22, 0XD0);
    // 0x080014C0: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x080014C4: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x080014C8: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x080014CC: lw          $s3, 0x0($s5)
    ctx->r19 = MEM_W(ctx->r21, 0X0);
    // 0x080014D0: lw          $s2, 0x4($s5)
    ctx->r18 = MEM_W(ctx->r21, 0X4);
    // 0x080014D4: addiu       $t1, $t1, 0x40A8
    ctx->r9 = ADD32(ctx->r9, 0X40A8);
    // 0x080014D8: addiu       $t0, $t0, 0x3D28
    ctx->r8 = ADD32(ctx->r8, 0X3D28);
    // 0x080014DC: lui         $fp, 0x8000
    ctx->r30 = S32(0X8000 << 16);
    // 0x080014E0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x080014E4: addiu       $fp, $fp, 0x3CC8
    ctx->r30 = ADD32(ctx->r30, 0X3CC8);
    // 0x080014E8: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x080014EC: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x080014F0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x080014F4: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
L_080014F8:
    // 0x080014F8: jal         0x080013C8
    // 0x080014FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_080013C8_7024C8(rdram, ctx);
        goto after_0;
    // 0x080014FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x08001500: lhu         $t2, 0xD4($s6)
    ctx->r10 = MEM_HU(ctx->r22, 0XD4);
    // 0x08001504: lw          $s0, 0x18($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X18);
    // 0x08001508: lw          $s1, 0x18($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X18);
    // 0x0800150C: addu        $a0, $t2, $s4
    ctx->r4 = ADD32(ctx->r10, ctx->r20);
    // 0x08001510: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x08001514: jalr        $fp
    // 0x08001518: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    LOOKUP_FUNC(ctx->r30)(rdram, ctx);
        goto after_1;
    // 0x08001518: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_1:
    // 0x0800151C: lhu         $t4, 0xD8($s6)
    ctx->r12 = MEM_HU(ctx->r22, 0XD8);
    // 0x08001520: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001524: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x08001528: bgez        $t4, L_0800153C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x0800152C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_0800153C;
    }
    // 0x0800152C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001530: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001534: nop

    // 0x08001538: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_0800153C:
    // 0x0800153C: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08001540: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x08001544: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x08001548: nop

    // 0x0800154C: andi        $s3, $v0, 0xFFFF
    ctx->r19 = ctx->r2 & 0XFFFF;
    // 0x08001550: jalr        $fp
    // 0x08001554: andi        $a0, $s3, 0xFFFF
    ctx->r4 = ctx->r19 & 0XFFFF;
    LOOKUP_FUNC(ctx->r30)(rdram, ctx);
        goto after_2;
    // 0x08001554: andi        $a0, $s3, 0xFFFF
    ctx->r4 = ctx->r19 & 0XFFFF;
    after_2:
    // 0x08001558: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0800155C: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08001560: andi        $a0, $s3, 0xFFFF
    ctx->r4 = ctx->r19 & 0XFFFF;
    // 0x08001564: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x08001568: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x0800156C: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x08001570: jalr        $t9
    // 0x08001574: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001574: nop

    after_3:
    // 0x08001578: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0800157C: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08001580: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08001584: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x08001588: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    // 0x0800158C: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x08001590: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08001594: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08001598: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0800159C: sub.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x080015A0: jalr        $t9
    // 0x080015A4: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080015A4: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    after_4:
    // 0x080015A8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x080015AC: ori         $at, $at, 0x6000
    ctx->r1 = ctx->r1 | 0X6000;
    // 0x080015B0: addiu       $s4, $s4, 0x2000
    ctx->r20 = ADD32(ctx->r20, 0X2000);
    // 0x080015B4: slt         $at, $s4, $at
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x080015B8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x080015BC: or          $s3, $s2, $zero
    ctx->r19 = ctx->r18 | 0;
    // 0x080015C0: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x080015C4: bne         $at, $zero, L_080014F8
    if (ctx->r1 != 0) {
        // 0x080015C8: lw          $s2, 0x0($s5)
        ctx->r18 = MEM_W(ctx->r21, 0X0);
            goto L_080014F8;
    }
    // 0x080015C8: lw          $s2, 0x0($s5)
    ctx->r18 = MEM_W(ctx->r21, 0X0);
    // 0x080015CC: lw          $s5, 0xD0($s6)
    ctx->r21 = MEM_W(ctx->r22, 0XD0);
    // 0x080015D0: lui         $t6, 0x8002
    ctx->r14 = S32(0X8002 << 16);
    // 0x080015D4: lui         $t7, 0x8002
    ctx->r15 = S32(0X8002 << 16);
    // 0x080015D8: lw          $s2, 0x4($s5)
    ctx->r18 = MEM_W(ctx->r21, 0X4);
    // 0x080015DC: addiu       $t7, $t7, -0x110C
    ctx->r15 = ADD32(ctx->r15, -0X110C);
    // 0x080015E0: addiu       $t6, $t6, -0xD28
    ctx->r14 = ADD32(ctx->r14, -0XD28);
    // 0x080015E4: lui         $s4, 0x8002
    ctx->r20 = S32(0X8002 << 16);
    // 0x080015E8: addiu       $s4, $s4, -0x1B5C
    ctx->r20 = ADD32(ctx->r20, -0X1B5C);
    // 0x080015EC: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    // 0x080015F0: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x080015F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x080015F8: addiu       $s3, $sp, 0x98
    ctx->r19 = ADD32(ctx->r29, 0X98);
    // 0x080015FC: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
L_08001600:
    // 0x08001600: lw          $s0, 0x18($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X18);
    // 0x08001604: jalr        $fp
    // 0x08001608: lhu         $a0, 0xDA($s6)
    ctx->r4 = MEM_HU(ctx->r22, 0XDA);
    LOOKUP_FUNC(ctx->r30)(rdram, ctx);
        goto after_5;
    // 0x08001608: lhu         $a0, 0xDA($s6)
    ctx->r4 = MEM_HU(ctx->r22, 0XDA);
    after_5:
    // 0x0800160C: lwc1        $f10, 0x8($s7)
    ctx->f10.u32l = MEM_W(ctx->r23, 0X8);
    // 0x08001610: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08001614: lwc1        $f8, 0xC($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0XC);
    // 0x08001618: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x0800161C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x08001620: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x08001624: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x08001628: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x0800162C: lhu         $a0, 0xDA($s6)
    ctx->r4 = MEM_HU(ctx->r22, 0XDA);
    // 0x08001630: jalr        $t9
    // 0x08001634: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001634: nop

    after_6:
    // 0x08001638: lwc1        $f2, 0x8($s7)
    ctx->f2.u32l = MEM_W(ctx->r23, 0X8);
    // 0x0800163C: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08001640: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x08001644: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001648: sub.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x0800164C: lhu         $a2, 0x16($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X16);
    // 0x08001650: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08001654: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x08001658: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x0800165C: jalr        $s4
    // 0x08001660: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_7;
    // 0x08001660: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    after_7:
    // 0x08001664: lhu         $a3, 0xDA($s6)
    ctx->r7 = MEM_HU(ctx->r22, 0XDA);
    // 0x08001668: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x0800166C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001670: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001674: bgez        $a3, L_08001684
    if (SIGNED(ctx->r7) >= 0) {
        // 0x08001678: sra         $t8, $a3, 6
        ctx->r24 = S32(SIGNED(ctx->r7) >> 6);
            goto L_08001684;
    }
    // 0x08001678: sra         $t8, $a3, 6
    ctx->r24 = S32(SIGNED(ctx->r7) >> 6);
    // 0x0800167C: addiu       $at, $a3, 0x3F
    ctx->r1 = ADD32(ctx->r7, 0X3F);
    // 0x08001680: sra         $t8, $at, 6
    ctx->r24 = S32(SIGNED(ctx->r1) >> 6);
L_08001684:
    // 0x08001684: jalr        $s4
    // 0x08001688: andi        $a3, $t8, 0xFFFF
    ctx->r7 = ctx->r24 & 0XFFFF;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_8;
    // 0x08001688: andi        $a3, $t8, 0xFFFF
    ctx->r7 = ctx->r24 & 0XFFFF;
    after_8:
    // 0x0800168C: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x08001690: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x08001694: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x08001698: jalr        $t9
    // 0x0800169C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800169C: nop

    after_9:
    // 0x080016A0: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x080016A4: addiu       $t1, $sp, 0x86
    ctx->r9 = ADD32(ctx->r29, 0X86);
    // 0x080016A8: addiu       $t2, $sp, 0x88
    ctx->r10 = ADD32(ctx->r29, 0X88);
    // 0x080016AC: addiu       $t3, $sp, 0x78
    ctx->r11 = ADD32(ctx->r29, 0X78);
    // 0x080016B0: addiu       $t4, $sp, 0x7C
    ctx->r12 = ADD32(ctx->r29, 0X7C);
    // 0x080016B4: addiu       $t5, $sp, 0x80
    ctx->r13 = ADD32(ctx->r29, 0X80);
    // 0x080016B8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x080016BC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x080016C0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x080016C4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x080016C8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x080016CC: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x080016D0: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x080016D4: addiu       $a2, $sp, 0x94
    ctx->r6 = ADD32(ctx->r29, 0X94);
    // 0x080016D8: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    // 0x080016DC: jalr        $t9
    // 0x080016E0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080016E0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    after_10:
    // 0x080016E4: lhu         $t6, 0x84($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X84);
    // 0x080016E8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x080016EC: sh          $t6, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r14;
    // 0x080016F0: lhu         $t7, 0x86($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X86);
    // 0x080016F4: sh          $t7, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r15;
    // 0x080016F8: lhu         $t8, 0x88($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X88);
    // 0x080016FC: jal         0x0800125C
    // 0x08001700: sh          $t8, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r24;
    func_0800125C_70235C(rdram, ctx);
        goto after_11;
    // 0x08001700: sh          $t8, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r24;
    after_11:
    // 0x08001704: lbu         $t0, 0x6C($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X6C);
    // 0x08001708: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x0800170C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08001710: bne         $t0, $at, L_08001730
    if (ctx->r8 != ctx->r1) {
        // 0x08001714: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_08001730;
    }
    // 0x08001714: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x08001718: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0800171C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001720: swc1        $f8, -0x323C($at)
    MEM_W(-0X323C, ctx->r1) = ctx->f8.u32l;
    // 0x08001724: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08001728: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x0800172C: swc1        $f6, -0x3238($at)
    MEM_W(-0X3238, ctx->r1) = ctx->f6.u32l;
L_08001730:
    // 0x08001730: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x08001734: bne         $s1, $at, L_08001600
    if (ctx->r17 != ctx->r1) {
        // 0x08001738: lw          $s2, 0x0($s5)
        ctx->r18 = MEM_W(ctx->r21, 0X0);
            goto L_08001600;
    }
    // 0x08001738: lw          $s2, 0x0($s5)
    ctx->r18 = MEM_W(ctx->r21, 0X0);
    // 0x0800173C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x08001740: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x08001744: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x08001748: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0800174C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x08001750: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x08001754: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x08001758: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0800175C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x08001760: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x08001764: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x08001768: jr          $ra
    // 0x0800176C: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    TRACE_RETURN()
    return;
    // 0x0800176C: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_080029CC_703ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080029CC: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x080029D0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080029D4: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x080029D8: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x080029DC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080029E0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080029E4: lw          $s2, 0xD0($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XD0);
    // 0x080029E8: lh          $t7, 0xDA($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XDA);
    // 0x080029EC: lh          $t6, 0xD8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XD8);
    // 0x080029F0: lw          $s3, 0x18($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X18);
    // 0x080029F4: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x080029F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080029FC: bgez        $t7, L_08002A0C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x08002A00: sra         $t8, $t7, 2
        ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
            goto L_08002A0C;
    }
    // 0x08002A00: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x08002A04: addiu       $at, $t7, 0x3
    ctx->r1 = ADD32(ctx->r15, 0X3);
    // 0x08002A08: sra         $t8, $at, 2
    ctx->r24 = S32(SIGNED(ctx->r1) >> 2);
L_08002A0C:
    // 0x08002A0C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x08002A10: sh          $t9, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r25;
    // 0x08002A14: lhu         $t0, 0x18($s3)
    ctx->r8 = MEM_HU(ctx->r19, 0X18);
    // 0x08002A18: lhu         $t1, 0x16($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X16);
    // 0x08002A1C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002A20: sh          $t0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r8;
    // 0x08002A24: lh          $t2, 0xDA($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XDA);
    // 0x08002A28: addiu       $t9, $t9, -0x1B5C
    ctx->r25 = ADD32(ctx->r25, -0X1B5C);
    // 0x08002A2C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x08002A30: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x08002A34: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x08002A38: sh          $t5, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r13;
    // 0x08002A3C: sh          $t5, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r13;
    // 0x08002A40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002A44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002A48: jalr        $t9
    // 0x08002A4C: lhu         $a3, 0x18($s3)
    ctx->r7 = MEM_HU(ctx->r19, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002A4C: lhu         $a3, 0x18($s3)
    ctx->r7 = MEM_HU(ctx->r19, 0X18);
    after_0:
    // 0x08002A50: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x08002A54: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x08002A58: lhu         $a0, 0xD8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD8);
    // 0x08002A5C: jalr        $v0
    // 0x08002A60: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08002A60: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_1:
    // 0x08002A64: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08002A68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002A6C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x08002A70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002A74: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x08002A78: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x08002A7C: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x08002A80: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x08002A84: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x08002A88: lhu         $a0, 0xD8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD8);
    // 0x08002A8C: jalr        $v0
    // 0x08002A90: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x08002A90: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_2:
    // 0x08002A94: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08002A98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002A9C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08002AA0: addiu       $v0, $v0, -0x57A8
    ctx->r2 = ADD32(ctx->r2, -0X57A8);
    // 0x08002AA4: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x08002AA8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08002AAC: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x08002AB0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x08002AB4: jalr        $v0
    // 0x08002AB8: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08002AB8: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x08002ABC: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x08002AC0: lwc1        $f4, 0x8($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X8);
    // 0x08002AC4: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x08002AC8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08002ACC: slti        $at, $v0, 0x141
    ctx->r1 = SIGNED(ctx->r2) < 0X141 ? 1 : 0;
    // 0x08002AD0: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    // 0x08002AD4: lwc1        $f10, 0xC($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0XC);
    // 0x08002AD8: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x08002ADC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08002AE0: swc1        $f16, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f16.u32l;
    // 0x08002AE4: lwc1        $f4, 0x10($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X10);
    // 0x08002AE8: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x08002AEC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08002AF0: bne         $at, $zero, L_08002CFC
    if (ctx->r1 != 0) {
        // 0x08002AF4: swc1        $f6, 0x10($s1)
        MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
            goto L_08002CFC;
    }
    // 0x08002AF4: swc1        $f6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
    // 0x08002AF8: slti        $at, $v0, 0x2C0
    ctx->r1 = SIGNED(ctx->r2) < 0X2C0 ? 1 : 0;
    // 0x08002AFC: beql        $at, $zero, L_08002D00
    if (ctx->r1 == 0) {
        // 0x08002B00: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_08002D00;
    }
    goto skip_0;
    // 0x08002B00: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x08002B04: lh          $v0, 0xDA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XDA);
    // 0x08002B08: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x08002B0C: bgez        $v0, L_08002B1C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08002B10: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08002B1C;
    }
    // 0x08002B10: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08002B14: b           L_08002B1C
    // 0x08002B18: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_08002B1C;
    // 0x08002B18: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_08002B1C:
    // 0x08002B1C: slti        $at, $v1, 0x40
    ctx->r1 = SIGNED(ctx->r3) < 0X40 ? 1 : 0;
    // 0x08002B20: bnel        $at, $zero, L_08002D00
    if (ctx->r1 != 0) {
        // 0x08002B24: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_08002D00;
    }
    goto skip_1;
    // 0x08002B24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x08002B28: lhu         $t7, -0x33D0($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X33D0);
    // 0x08002B2C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08002B30: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(37, 0X413C) << 16);
    // 0x08002B34: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x08002B38: mfhi        $t6
    ctx->r14 = hi;
    // 0x08002B3C: addiu       $a1, $a1, 0x413C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(37, 0X413C));
    // 0x08002B40: bne         $t6, $zero, L_08002CFC
    if (ctx->r14 != 0) {
        // 0x08002B44: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08002CFC;
    }
    // 0x08002B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002B48: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002B4C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08002B50: jalr        $t9
    // 0x08002B54: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002B54: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_4:
    // 0x08002B58: beq         $v0, $zero, L_08002CFC
    if (ctx->r2 == 0) {
        // 0x08002B5C: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_08002CFC;
    }
    // 0x08002B5C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x08002B60: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002B64: addiu       $t8, $zero, 0x2E
    ctx->r24 = ADD32(0, 0X2E);
    // 0x08002B68: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002B6C: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08002B70: jalr        $t9
    // 0x08002B74: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002B74: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_5:
    // 0x08002B78: lw          $t0, 0x18($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X18);
    // 0x08002B7C: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x08002B80: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08002B84: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x08002B88: lhu         $a0, 0xD8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD8);
    // 0x08002B8C: jalr        $t9
    // 0x08002B90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002B90: nop

    after_6:
    // 0x08002B94: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08002B98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002B9C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08002BA0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002BA4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x08002BA8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08002BAC: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x08002BB0: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x08002BB4: jalr        $t9
    // 0x08002BB8: lhu         $a0, 0xD8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002BB8: lhu         $a0, 0xD8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD8);
    after_7:
    // 0x08002BBC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08002BC0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08002BC4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002BC8: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x08002BCC: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x08002BD0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x08002BD4: jalr        $t9
    // 0x08002BD8: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002BD8: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x08002BDC: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x08002BE0: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x08002BE4: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x08002BE8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08002BEC: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x08002BF0: lwc1        $f18, 0xC($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XC);
    // 0x08002BF4: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x08002BF8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08002BFC: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x08002C00: lwc1        $f8, 0x10($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X10);
    // 0x08002C04: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x08002C08: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08002C0C: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x08002C10: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08002C14: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x08002C18: jalr        $t9
    // 0x08002C1C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08002C1C: nop

    after_9:
    // 0x08002C20: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x08002C24: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002C28: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08002C2C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x08002C30: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    // 0x08002C34: jalr        $t9
    // 0x08002C38: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08002C38: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_10:
    // 0x08002C3C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08002C40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002C44: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08002C48: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x08002C4C: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x08002C50: jalr        $t9
    // 0x08002C54: lhu         $a0, 0xD8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08002C54: lhu         $a0, 0xD8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD8);
    after_11:
    // 0x08002C58: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08002C5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002C60: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x08002C64: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08002C68: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x08002C6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002C70: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08002C74: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x08002C78: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08002C7C: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x08002C80: jalr        $t9
    // 0x08002C84: lhu         $a0, 0xD8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08002C84: lhu         $a0, 0xD8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD8);
    after_12:
    // 0x08002C88: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08002C8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002C90: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x08002C94: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002C98: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08002C9C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x08002CA0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x08002CA4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08002CA8: jalr        $t9
    // 0x08002CAC: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08002CAC: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x08002CB0: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x08002CB4: lwc1        $f4, 0x8($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X8);
    // 0x08002CB8: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x08002CBC: lwc1        $f10, 0xC($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0XC);
    // 0x08002CC0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08002CC4: lwc1        $f4, 0x10($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X10);
    // 0x08002CC8: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x08002CCC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08002CD0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08002CD4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002CD8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08002CDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002CE0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002CE4: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08002CE8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08002CEC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x08002CF0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08002CF4: jalr        $t9
    // 0x08002CF8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08002CF8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_14:
L_08002CFC:
    // 0x08002CFC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08002D00:
    // 0x08002D00: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08002D04: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08002D08: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x08002D0C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x08002D10: jr          $ra
    // 0x08002D14: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    TRACE_RETURN()
    return;
    // 0x08002D14: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_08003D64_704E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003D64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08003D68: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003D6C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08003D70: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08003D74: lw          $t8, 0x64($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X64);
    // 0x08003D78: lui         $t7, 0x220
    ctx->r15 = S32(0X220 << 16);
    // 0x08003D7C: addiu       $t6, $zero, 0xFA
    ctx->r14 = ADD32(0, 0XFA);
    // 0x08003D80: ori         $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 | 0X8000;
    // 0x08003D84: sw          $t9, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r25;
    // 0x08003D88: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003D8C: ori         $t7, $t7, 0x7E3
    ctx->r15 = ctx->r15 | 0X7E3;
    // 0x08003D90: addiu       $t0, $zero, 0x21
    ctx->r8 = ADD32(0, 0X21);
    // 0x08003D94: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003D98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003D9C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08003DA0: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08003DA4: sh          $t0, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r8;
    // 0x08003DA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003DAC: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08003DB0: jalr        $t9
    // 0x08003DB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003DB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08003DB8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003DBC: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08003DC0: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x08003DC4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x08003DC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003DCC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08003DD0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08003DD4: jalr        $t9
    // 0x08003DD8: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003DD8: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_1:
    // 0x08003DDC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003DE0: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08003DE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003DE8: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x08003DEC: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08003DF0: jalr        $t9
    // 0x08003DF4: addiu       $a3, $zero, -0x28
    ctx->r7 = ADD32(0, -0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003DF4: addiu       $a3, $zero, -0x28
    ctx->r7 = ADD32(0, -0X28);
    after_2:
    // 0x08003DF8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003DFC: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08003E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003E04: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08003E08: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08003E0C: jalr        $t9
    // 0x08003E10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003E10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08003E14: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003E18: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08003E1C: addiu       $t3, $zero, 0x40
    ctx->r11 = ADD32(0, 0X40);
    // 0x08003E20: addiu       $t9, $t9, -0x5B1C
    ctx->r25 = ADD32(ctx->r25, -0X5B1C);
    // 0x08003E24: sb          $t2, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r10;
    // 0x08003E28: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x08003E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003E30: jalr        $t9
    // 0x08003E34: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003E34: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_4:
    // 0x08003E38: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003E3C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003E40: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X3E60) << 16);
    // 0x08003E44: jalr        $t9
    // 0x08003E48: addiu       $a0, $a0, 0x3E60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X3E60));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003E48: addiu       $a0, $a0, 0x3E60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X3E60));
    after_5:
    // 0x08003E4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003E50: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003E54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08003E58: jr          $ra
    // 0x08003E5C: nop

    TRACE_RETURN()
    return;
    // 0x08003E5C: nop

;}
RECOMP_FUNC void func_0800376C_70486C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800376C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003770: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003774: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003778: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800377C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003780: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003784: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08003788: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800378C: beq         $v1, $zero, L_080037A0
    if (ctx->r3 == 0) {
        // 0x08003790: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080037A0;
    }
    // 0x08003790: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08003794: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X37B0) << 16);
    // 0x08003798: jalr        $t9
    // 0x0800379C: addiu       $a0, $a0, 0x37B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X37B0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800379C: addiu       $a0, $a0, 0x37B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X37B0));
    after_0:
L_080037A0:
    // 0x080037A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080037A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080037A8: jr          $ra
    // 0x080037AC: nop

    TRACE_RETURN()
    return;
    // 0x080037AC: nop

;}
